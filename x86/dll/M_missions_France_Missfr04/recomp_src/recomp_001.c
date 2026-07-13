#include "recomp.h"

/* FUN_10007420 @ 0x10667420 (490 bytes, 165 insns) */
void f_10667420(void) {
  FTRACE(0x10667420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667420 push ebp */
  push32((uint32_t)(EBP));
  /* 10667421 mov ebp, esp */
  EBP = (ESP);
  /* 10667423 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667426 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066742a jne 0x1066743d */
  if (!C.zf) goto L_1066743d;
  /* 1066742c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066742f push eax */
  push32((uint32_t)(EAX));
  /* 10667430 call 0x10667270 */
  push32(0x10667435u); f_10667270();
  /* 10667435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667438 jmp 0x10667606 */
  goto L_10667606;
L_1066743d:;
  /* 1066743d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667441 jne 0x10667456 */
  if (!C.zf) goto L_10667456;
  /* 10667443 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667446 push ecx */
  push32((uint32_t)(ECX));
  /* 10667447 call 0x10667610 */
  push32(0x1066744cu); f_10667610();
  /* 1066744c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066744f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10667451 jmp 0x10667606 */
  goto L_10667606;
L_10667456:;
  /* 10667456 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1066745d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667461 ja 0x106675d9 */
  if ((!C.cf&&!C.zf)) goto L_106675d9;
  /* 10667467 push 9 */
  push32((uint32_t)(0x9u));
  /* 10667469 call 0x10666ea0 */
  push32(0x1066746eu); f_10666ea0();
  /* 1066746e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667471 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667474 push edx */
  push32((uint32_t)(EDX));
  /* 10667475 call 0x106677a0 */
  push32(0x1066747au); f_106677a0();
  /* 1066747a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066747d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10667480 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667484 je 0x1066759c */
  if (C.zf) goto L_1066759c;
  /* 1066748a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066748d cmp eax, dword ptr [0x1068dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667493 ja 0x10667510 */
  if ((!C.cf&&!C.zf)) goto L_10667510;
  /* 10667495 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10667498 push ecx */
  push32((uint32_t)(ECX));
  /* 10667499 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066749c push edx */
  push32((uint32_t)(EDX));
  /* 1066749d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106674a0 push eax */
  push32((uint32_t)(EAX));
  /* 106674a1 call 0x10668670 */
  push32(0x106674a6u); f_10668670();
  /* 106674a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106674a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106674ab je 0x106674b5 */
  if (C.zf) goto L_106674b5;
  /* 106674ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106674b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106674b3 jmp 0x10667510 */
  goto L_10667510;
L_106674b5:;
  /* 106674b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106674b8 push edx */
  push32((uint32_t)(EDX));
  /* 106674b9 call 0x10667e30 */
  push32(0x106674beu); f_10667e30();
  /* 106674be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106674c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106674c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106674c8 je 0x10667510 */
  if (C.zf) goto L_10667510;
  /* 106674ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106674cd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 106674d0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106674d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106674d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106674d9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106674dc jae 0x106674e6 */
  if (!C.cf) goto L_106674e6;
  /* 106674de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106674e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106674e4 jmp 0x106674ec */
  goto L_106674ec;
L_106674e6:;
  /* 106674e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106674e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106674ec:;
  /* 106674ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106674ef push edx */
  push32((uint32_t)(EDX));
  /* 106674f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106674f3 push eax */
  push32((uint32_t)(EAX));
  /* 106674f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106674f7 push ecx */
  push32((uint32_t)(ECX));
  /* 106674f8 call 0x10669d80 */
  push32(0x106674fdu); f_10669d80();
  /* 106674fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667500 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667503 push edx */
  push32((uint32_t)(EDX));
  /* 10667504 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10667507 push eax */
  push32((uint32_t)(EAX));
  /* 10667508 call 0x10667860 */
  push32(0x1066750du); f_10667860();
  /* 1066750d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10667510:;
  /* 10667510 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667514 jne 0x10667590 */
  if (!C.zf) goto L_10667590;
  /* 10667516 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066751a jne 0x10667523 */
  if (!C.zf) goto L_10667523;
  /* 1066751c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10667523:;
  /* 10667523 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10667526 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667529 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1066752c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1066752f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10667532 push edx */
  push32((uint32_t)(EDX));
  /* 10667533 push 0 */
  push32((uint32_t)(0x0u));
  /* 10667535 mov eax, dword ptr [0x10690e2c] */
  EAX = (r32((uint32_t)(0x10690e2c)));
  /* 1066753a push eax */
  push32((uint32_t)(EAX));
  /* 1066753b call dword ptr [0x10691354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691354))), 0x10667541u);
  /* 10667541 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10667544 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667548 je 0x10667590 */
  if (C.zf) goto L_10667590;
  /* 1066754a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066754d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10667550 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667553 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10667556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667559 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066755c jae 0x10667566 */
  if (!C.cf) goto L_10667566;
  /* 1066755e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667561 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10667564 jmp 0x1066756c */
  goto L_1066756c;
L_10667566:;
  /* 10667566 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10667569 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1066756c:;
  /* 1066756c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066756f push eax */
  push32((uint32_t)(EAX));
  /* 10667570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667573 push ecx */
  push32((uint32_t)(ECX));
  /* 10667574 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667577 push edx */
  push32((uint32_t)(EDX));
  /* 10667578 call 0x10669d80 */
  push32(0x1066757du); f_10669d80();
  /* 1066757d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667583 push eax */
  push32((uint32_t)(EAX));
  /* 10667584 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10667587 push ecx */
  push32((uint32_t)(ECX));
  /* 10667588 call 0x10667860 */
  push32(0x1066758du); f_10667860();
  /* 1066758d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10667590:;
  /* 10667590 push 9 */
  push32((uint32_t)(0x9u));
  /* 10667592 call 0x10666f40 */
  push32(0x10667597u); f_10666f40();
  /* 10667597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066759a jmp 0x106675d9 */
  goto L_106675d9;
L_1066759c:;
  /* 1066759c push 9 */
  push32((uint32_t)(0x9u));
  /* 1066759e call 0x10666f40 */
  push32(0x106675a3u); f_10666f40();
  /* 106675a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106675a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106675aa jne 0x106675b3 */
  if (!C.zf) goto L_106675b3;
  /* 106675ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_106675b3:;
  /* 106675b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106675b6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106675b9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 106675bc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 106675bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106675c2 push eax */
  push32((uint32_t)(EAX));
  /* 106675c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106675c6 push ecx */
  push32((uint32_t)(ECX));
  /* 106675c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106675c9 mov edx, dword ptr [0x10690e2c] */
  EDX = (r32((uint32_t)(0x10690e2c)));
  /* 106675cf push edx */
  push32((uint32_t)(EDX));
  /* 106675d0 call dword ptr [0x1069133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069133c))), 0x106675d6u);
  /* 106675d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106675d9:;
  /* 106675d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106675dd jne 0x106675e8 */
  if (!C.zf) goto L_106675e8;
  /* 106675df cmp dword ptr [0x1068f668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106675e6 jne 0x106675ed */
  if (!C.zf) goto L_106675ed;
L_106675e8:;
  /* 106675e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106675eb jmp 0x10667606 */
  goto L_10667606;
L_106675ed:;
  /* 106675ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106675f0 push eax */
  push32((uint32_t)(EAX));
  /* 106675f1 call 0x106671e0 */
  push32(0x106675f6u); f_106671e0();
  /* 106675f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106675f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106675fb jne 0x10667601 */
  if (!C.zf) goto L_10667601;
  /* 106675fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106675ff jmp 0x10667606 */
  goto L_10667606;
L_10667601:;
  /* 10667601 jmp 0x10667456 */
  goto L_10667456;
L_10667606:;
  /* 10667606 mov esp, ebp */
  ESP = (EBP);
  /* 10667608 pop ebp */
  EBP = (pop32());
  /* 10667609 ret  */
  ESPCHK(0x10667420u, _esp0);
  ESP += 4; return;
}

/* FUN_10007610 @ 0x10667610 (104 bytes, 38 insns) */
void f_10667610(void) {
  FTRACE(0x10667610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667610 push ebp */
  push32((uint32_t)(EBP));
  /* 10667611 mov ebp, esp */
  EBP = (ESP);
  /* 10667613 push ecx */
  push32((uint32_t)(ECX));
  /* 10667614 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667618 jne 0x1066761c */
  if (!C.zf) goto L_1066761c;
  /* 1066761a jmp 0x10667674 */
  goto L_10667674;
L_1066761c:;
  /* 1066761c push 9 */
  push32((uint32_t)(0x9u));
  /* 1066761e call 0x10666ea0 */
  push32(0x10667623u); f_10666ea0();
  /* 10667623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667629 push eax */
  push32((uint32_t)(EAX));
  /* 1066762a call 0x106677a0 */
  push32(0x1066762fu); f_106677a0();
  /* 1066762f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667632 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10667635 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667639 je 0x10667657 */
  if (C.zf) goto L_10667657;
  /* 1066763b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066763e push ecx */
  push32((uint32_t)(ECX));
  /* 1066763f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667642 push edx */
  push32((uint32_t)(EDX));
  /* 10667643 call 0x10667860 */
  push32(0x10667648u); f_10667860();
  /* 10667648 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066764b push 9 */
  push32((uint32_t)(0x9u));
  /* 1066764d call 0x10666f40 */
  push32(0x10667652u); f_10666f40();
  /* 10667652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667655 jmp 0x10667674 */
  goto L_10667674;
L_10667657:;
  /* 10667657 push 9 */
  push32((uint32_t)(0x9u));
  /* 10667659 call 0x10666f40 */
  push32(0x1066765eu); f_10666f40();
  /* 1066765e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667661 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667664 push eax */
  push32((uint32_t)(EAX));
  /* 10667665 push 0 */
  push32((uint32_t)(0x0u));
  /* 10667667 mov ecx, dword ptr [0x10690e2c] */
  ECX = (r32((uint32_t)(0x10690e2c)));
  /* 1066766d push ecx */
  push32((uint32_t)(ECX));
  /* 1066766e call dword ptr [0x10691334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691334))), 0x10667674u);
L_10667674:;
  /* 10667674 mov esp, ebp */
  ESP = (EBP);
  /* 10667676 pop ebp */
  EBP = (pop32());
  /* 10667677 ret  */
  ESPCHK(0x10667610u, _esp0);
  ESP += 4; return;
}

/* FUN_10007680 @ 0x10667680 (116 bytes, 34 insns) */
void f_10667680(void) {
  FTRACE(0x10667680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667680 push ebp */
  push32((uint32_t)(EBP));
  /* 10667681 mov ebp, esp */
  EBP = (ESP);
  /* 10667683 push ecx */
  push32((uint32_t)(ECX));
  /* 10667684 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1066768b push 9 */
  push32((uint32_t)(0x9u));
  /* 1066768d call 0x10666ea0 */
  push32(0x10667692u); f_10666ea0();
  /* 10667692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667695 call 0x10668d90 */
  push32(0x1066769au); f_10668d90();
  /* 1066769a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066769c jge 0x106676a5 */
  if ((C.sf==C.of)) goto L_106676a5;
  /* 1066769e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_106676a5:;
  /* 106676a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 106676a7 call 0x10666f40 */
  push32(0x106676acu); f_10666f40();
  /* 106676ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106676af push 0 */
  push32((uint32_t)(0x0u));
  /* 106676b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106676b3 mov eax, dword ptr [0x10690e2c] */
  EAX = (r32((uint32_t)(0x10690e2c)));
  /* 106676b8 push eax */
  push32((uint32_t)(EAX));
  /* 106676b9 call dword ptr [0x10691314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691314))), 0x106676bfu);
  /* 106676bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106676c1 jne 0x106676ed */
  if (!C.zf) goto L_106676ed;
  /* 106676c3 call dword ptr [0x106912f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f4))), 0x106676c9u);
  /* 106676c9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106676cc jne 0x106676e6 */
  if (!C.zf) goto L_106676e6;
  /* 106676ce call 0x1066b380 */
  push32(0x106676d3u); f_1066b380();
  /* 106676d3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 106676d9 call 0x1066b370 */
  push32(0x106676deu); f_1066b370();
  /* 106676de mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 106676e4 jmp 0x106676ed */
  goto L_106676ed;
L_106676e6:;
  /* 106676e6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_106676ed:;
  /* 106676ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106676f0 mov esp, ebp */
  ESP = (EBP);
  /* 106676f2 pop ebp */
  EBP = (pop32());
  /* 106676f3 ret  */
  ESPCHK(0x10667680u, _esp0);
  ESP += 4; return;
}

/* FUN_10007700 @ 0x10667700 (10 bytes, 5 insns) */
void f_10667700(void) {
  FTRACE(0x10667700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667700 push ebp */
  push32((uint32_t)(EBP));
  /* 10667701 mov ebp, esp */
  EBP = (ESP);
  /* 10667703 call 0x10667680 */
  push32(0x10667708u); f_10667680();
  /* 10667708 pop ebp */
  EBP = (pop32());
  /* 10667709 ret  */
  ESPCHK(0x10667700u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x10667710 (10 bytes, 5 insns) */
void f_10667710(void) {
  FTRACE(0x10667710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667710 push ebp */
  push32((uint32_t)(EBP));
  /* 10667711 mov ebp, esp */
  EBP = (ESP);
  /* 10667713 mov eax, dword ptr [0x1068dc94] */
  EAX = (r32((uint32_t)(0x1068dc94)));
  /* 10667718 pop ebp */
  EBP = (pop32());
  /* 10667719 ret  */
  ESPCHK(0x10667710u, _esp0);
  ESP += 4; return;
}

/* FUN_10007720 @ 0x10667720 (31 bytes, 11 insns) */
void f_10667720(void) {
  FTRACE(0x10667720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667720 push ebp */
  push32((uint32_t)(EBP));
  /* 10667721 mov ebp, esp */
  EBP = (ESP);
  /* 10667723 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066772a jbe 0x10667730 */
  if ((C.cf||C.zf)) goto L_10667730;
  /* 1066772c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066772e jmp 0x1066773d */
  goto L_1066773d;
L_10667730:;
  /* 10667730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667733 mov dword ptr [0x1068dc94], eax */
  w32((uint32_t)(0x1068dc94), (EAX));
  /* 10667738 mov eax, 1 */
  EAX = (0x1u);
L_1066773d:;
  /* 1066773d pop ebp */
  EBP = (pop32());
  /* 1066773e ret  */
  ESPCHK(0x10667720u, _esp0);
  ESP += 4; return;
}

/* FUN_10007740 @ 0x10667740 (89 bytes, 20 insns) */
void f_10667740(void) {
  FTRACE(0x10667740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667740 push ebp */
  push32((uint32_t)(EBP));
  /* 10667741 mov ebp, esp */
  EBP = (ESP);
  /* 10667743 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10667748 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066774a mov eax, dword ptr [0x10690e2c] */
  EAX = (r32((uint32_t)(0x10690e2c)));
  /* 1066774f push eax */
  push32((uint32_t)(EAX));
  /* 10667750 call dword ptr [0x10691354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691354))), 0x10667756u);
  /* 10667756 mov dword ptr [0x10690e28], eax */
  w32((uint32_t)(0x10690e28), (EAX));
  /* 1066775b cmp dword ptr [0x10690e28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690e28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667762 jne 0x10667768 */
  if (!C.zf) goto L_10667768;
  /* 10667764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10667766 jmp 0x10667797 */
  goto L_10667797;
L_10667768:;
  /* 10667768 mov ecx, dword ptr [0x10690e28] */
  ECX = (r32((uint32_t)(0x10690e28)));
  /* 1066776e mov dword ptr [0x10690e1c], ecx */
  w32((uint32_t)(0x10690e1c), (ECX));
  /* 10667774 mov dword ptr [0x10690e20], 0 */
  w32((uint32_t)(0x10690e20), (0x0u));
  /* 1066777e mov dword ptr [0x10690e24], 0 */
  w32((uint32_t)(0x10690e24), (0x0u));
  /* 10667788 mov dword ptr [0x10690e08], 0x10 */
  w32((uint32_t)(0x10690e08), (0x10u));
  /* 10667792 mov eax, 1 */
  EAX = (0x1u);
L_10667797:;
  /* 10667797 pop ebp */
  EBP = (pop32());
  /* 10667798 ret  */
  ESPCHK(0x10667740u, _esp0);
  ESP += 4; return;
}

/* FUN_100077a0 @ 0x106677a0 (85 bytes, 29 insns) */
void f_106677a0(void) {
  FTRACE(0x106677a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106677a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106677a1 mov ebp, esp */
  EBP = (ESP);
  /* 106677a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106677a6 mov eax, dword ptr [0x10690e24] */
  EAX = (r32((uint32_t)(0x10690e24)));
  /* 106677ab imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106677ae mov ecx, dword ptr [0x10690e28] */
  ECX = (r32((uint32_t)(0x10690e28)));
  /* 106677b4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106677b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106677b9 mov edx, dword ptr [0x10690e28] */
  EDX = (r32((uint32_t)(0x10690e28)));
  /* 106677bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106677c2:;
  /* 106677c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106677c5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106677c8 jae 0x106677ef */
  if (!C.cf) goto L_106677ef;
  /* 106677ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106677cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106677d0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106677d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106677d6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106677dd jae 0x106677e4 */
  if (!C.cf) goto L_106677e4;
  /* 106677df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106677e2 jmp 0x106677f1 */
  goto L_106677f1;
L_106677e4:;
  /* 106677e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106677e7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106677ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106677ed jmp 0x106677c2 */
  goto L_106677c2;
L_106677ef:;
  /* 106677ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106677f1:;
  /* 106677f1 mov esp, ebp */
  ESP = (EBP);
  /* 106677f3 pop ebp */
  EBP = (pop32());
  /* 106677f4 ret  */
  ESPCHK(0x106677a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007800 @ 0x10667800 (95 bytes, 33 insns) */
void f_10667800(void) {
  FTRACE(0x10667800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667800 push ebp */
  push32((uint32_t)(EBP));
  /* 10667801 mov ebp, esp */
  EBP = (ESP);
  /* 10667803 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667809 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066780c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066780f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10667812 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667815 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10667818 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066781b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10667820 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667823 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10667825 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667828 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1066782b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1066782d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066782f jne 0x10667851 */
  if (!C.zf) goto L_10667851;
  /* 10667831 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667834 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10667837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10667839 jne 0x10667851 */
  if (!C.zf) goto L_10667851;
  /* 1066783b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066783e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10667844 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10667846 je 0x10667851 */
  if (C.zf) goto L_10667851;
  /* 10667848 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1066784f jmp 0x10667858 */
  goto L_10667858;
L_10667851:;
  /* 10667851 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10667858:;
  /* 10667858 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066785b mov esp, ebp */
  ESP = (EBP);
  /* 1066785d pop ebp */
  EBP = (pop32());
  /* 1066785e ret  */
  ESPCHK(0x10667800u, _esp0);
  ESP += 4; return;
}

/* FUN_10007860 @ 0x10667860 (1485 bytes, 453 insns) */
void f_10667860(void) {
  FTRACE(0x10667860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667860 push ebp */
  push32((uint32_t)(EBP));
  /* 10667861 mov ebp, esp */
  EBP = (ESP);
  /* 10667863 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667869 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1066786c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1066786f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667872 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10667875 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667878 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1066787b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066787e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10667881 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10667884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667887 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066788d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667890 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10667897 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066789a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066789d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106678a0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106678a3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106678a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106678a8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106678ab mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 106678ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106678b1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106678b4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 106678b7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106678ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106678bc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106678bf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106678c2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 106678c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106678c8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106678cb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106678ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106678d0 jne 0x106679f8 */
  if (!C.zf) goto L_106679f8;
  /* 106678d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106678d9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106678dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106678df mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106678e2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106678e6 jbe 0x106678ef */
  if ((C.cf||C.zf)) goto L_106678ef;
  /* 106678e8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_106678ef:;
  /* 106678ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106678f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106678f5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 106678f8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106678fb jne 0x106679d1 */
  if (!C.zf) goto L_106679d1;
  /* 10667901 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667905 jae 0x10667966 */
  if (!C.cf) goto L_10667966;
  /* 10667907 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1066790c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066790f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10667911 not eax */
  EAX = (~(EAX));
  /* 10667913 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667916 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667919 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1066791d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066791f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667922 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667925 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10667929 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1066792c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066792f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10667932 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10667935 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667938 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066793b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1066793e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667941 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667944 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10667948 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066794a jne 0x10667964 */
  if (!C.zf) goto L_10667964;
  /* 1066794c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10667951 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10667954 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10667956 not eax */
  EAX = (~(EAX));
  /* 10667958 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066795b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1066795d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1066795f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667962 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10667964:;
  /* 10667964 jmp 0x106679d1 */
  goto L_106679d1;
L_10667966:;
  /* 10667966 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10667969 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066796c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10667971 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10667973 not edx */
  EDX = (~(EDX));
  /* 10667975 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667978 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1066797b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10667982 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10667984 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667987 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1066798a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10667991 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667994 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667997 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1066799a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1066799d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106679a0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106679a3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106679a6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106679a9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106679ac movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106679b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106679b2 jne 0x106679d1 */
  if (!C.zf) goto L_106679d1;
  /* 106679b4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106679b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106679ba mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106679bf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106679c1 not edx */
  EDX = (~(EDX));
  /* 106679c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106679c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106679c9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106679cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106679ce mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106679d1:;
  /* 106679d1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106679d4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106679d7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106679da mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106679dd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106679e0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106679e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106679e6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106679e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106679ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106679ef mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106679f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106679f5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_106679f8:;
  /* 106679f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106679fb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106679fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667a01 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10667a04 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667a08 jbe 0x10667a11 */
  if ((C.cf||C.zf)) goto L_10667a11;
  /* 10667a0a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10667a11:;
  /* 10667a11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10667a14 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10667a17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10667a19 jne 0x10667b75 */
  if (!C.zf) goto L_10667b75;
  /* 10667a1f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10667a22 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667a25 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10667a28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10667a2b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10667a2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667a31 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10667a34 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667a38 jbe 0x10667a41 */
  if ((C.cf||C.zf)) goto L_10667a41;
  /* 10667a3a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10667a41:;
  /* 10667a41 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10667a44 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667a47 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10667a4a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10667a4d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10667a50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667a53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10667a56 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667a5a jbe 0x10667a63 */
  if ((C.cf||C.zf)) goto L_10667a63;
  /* 10667a5c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10667a63:;
  /* 10667a63 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10667a66 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667a69 je 0x10667b6f */
  if (C.zf) goto L_10667b6f;
  /* 10667a6f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10667a72 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10667a75 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10667a78 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667a7b jne 0x10667b51 */
  if (!C.zf) goto L_10667b51;
  /* 10667a81 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667a85 jae 0x10667ae6 */
  if (!C.cf) goto L_10667ae6;
  /* 10667a87 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10667a8c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10667a8f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10667a91 not edx */
  EDX = (~(EDX));
  /* 10667a93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667a96 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667a99 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10667a9d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10667a9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667aa2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667aa5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10667aa9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667aac add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667aaf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10667ab2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10667ab5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667ab8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667abb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10667abe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667ac1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667ac4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10667ac8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10667aca jne 0x10667ae4 */
  if (!C.zf) goto L_10667ae4;
  /* 10667acc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10667ad1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10667ad4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10667ad6 not edx */
  EDX = (~(EDX));
  /* 10667ad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667adb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10667add and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10667adf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667ae2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10667ae4:;
  /* 10667ae4 jmp 0x10667b51 */
  goto L_10667b51;
L_10667ae6:;
  /* 10667ae6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10667ae9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667aec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10667af1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10667af3 not eax */
  EAX = (~(EAX));
  /* 10667af5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667af8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667afb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10667b02 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10667b04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667b07 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667b0a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10667b11 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667b14 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667b17 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10667b1a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10667b1d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667b20 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667b23 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10667b26 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667b29 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667b2c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10667b30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10667b32 jne 0x10667b51 */
  if (!C.zf) goto L_10667b51;
  /* 10667b34 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10667b37 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667b3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10667b3f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10667b41 not eax */
  EAX = (~(EAX));
  /* 10667b43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667b46 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10667b49 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10667b4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667b4e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10667b51:;
  /* 10667b51 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10667b54 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10667b57 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10667b5a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10667b5d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10667b60 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10667b63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10667b66 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10667b69 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10667b6c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10667b6f:;
  /* 10667b6f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10667b72 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10667b75:;
  /* 10667b75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10667b78 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10667b7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10667b7d jne 0x10667b8b */
  if (!C.zf) goto L_10667b8b;
  /* 10667b7f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10667b82 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667b85 je 0x10667c9b */
  if (C.zf) goto L_10667c9b;
L_10667b8b:;
  /* 10667b8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10667b8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667b91 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10667b94 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10667b97 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10667b9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10667b9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10667ba0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10667ba3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10667ba6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10667ba9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10667bac mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10667baf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10667bb2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10667bb5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10667bb8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10667bbb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10667bbe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10667bc1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10667bc4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10667bc7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10667bca cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667bcd jne 0x10667c9b */
  if (!C.zf) goto L_10667c9b;
  /* 10667bd3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667bd7 jae 0x10667c34 */
  if (!C.cf) goto L_10667c34;
  /* 10667bd9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667bdc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667bdf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10667be3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667be6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667be9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10667bec add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10667bef mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667bf2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667bf5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10667bf8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10667bfa jne 0x10667c12 */
  if (!C.zf) goto L_10667c12;
  /* 10667bfc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10667c01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10667c04 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10667c06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667c09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10667c0b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10667c0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667c10 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10667c12:;
  /* 10667c12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10667c17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10667c1a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10667c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667c1f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667c22 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10667c26 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10667c28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667c2b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667c2e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10667c32 jmp 0x10667c9b */
  goto L_10667c9b;
L_10667c34:;
  /* 10667c34 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667c37 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667c3a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10667c3e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667c41 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667c44 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10667c47 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10667c4a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667c4d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667c50 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10667c53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10667c55 jne 0x10667c72 */
  if (!C.zf) goto L_10667c72;
  /* 10667c57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10667c5a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667c5d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10667c62 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10667c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667c67 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10667c6a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10667c6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667c6f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10667c72:;
  /* 10667c72 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10667c75 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667c78 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10667c7d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10667c7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667c82 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667c85 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10667c8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10667c8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667c91 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10667c94 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10667c9b:;
  /* 10667c9b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10667c9e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10667ca1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10667ca3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10667ca6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667ca9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10667cac mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10667caf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667cb2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10667cb4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667cb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667cba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10667cbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667cbf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667cc2 jne 0x10667e29 */
  if (!C.zf) goto L_10667e29;
  /* 10667cc8 cmp dword ptr [0x10690e20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690e20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667ccf je 0x10667e18 */
  if (C.zf) goto L_10667e18;
  /* 10667cd5 mov eax, dword ptr [0x10690e18] */
  EAX = (r32((uint32_t)(0x10690e18)));
  /* 10667cda shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10667cdd mov ecx, dword ptr [0x10690e20] */
  ECX = (r32((uint32_t)(0x10690e20)));
  /* 10667ce3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10667ce6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667ce8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10667ceb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10667cf0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10667cf5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667cf8 push eax */
  push32((uint32_t)(EAX));
  /* 10667cf9 call dword ptr [0x10691338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691338))), 0x10667cffu);
  /* 10667cff mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10667d04 mov ecx, dword ptr [0x10690e18] */
  ECX = (r32((uint32_t)(0x10690e18)));
  /* 10667d0a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10667d0c mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10667d11 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10667d14 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10667d16 mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10667d1c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10667d1f mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10667d24 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10667d27 mov edx, dword ptr [0x10690e18] */
  EDX = (r32((uint32_t)(0x10690e18)));
  /* 10667d2d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10667d38 mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10667d3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10667d40 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10667d43 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10667d46 mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10667d4b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10667d4e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10667d51 mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10667d57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10667d5a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10667d5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10667d60 jne 0x10667d76 */
  if (!C.zf) goto L_10667d76;
  /* 10667d62 mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10667d68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10667d6b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10667d6d mov ecx, dword ptr [0x10690e20] */
  ECX = (r32((uint32_t)(0x10690e20)));
  /* 10667d73 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10667d76:;
  /* 10667d76 mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10667d7c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667d80 jne 0x10667e18 */
  if (!C.zf) goto L_10667e18;
  /* 10667d86 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10667d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10667d8d mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10667d92 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10667d95 push ecx */
  push32((uint32_t)(ECX));
  /* 10667d96 call dword ptr [0x10691338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691338))), 0x10667d9cu);
  /* 10667d9c mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10667da2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10667da5 push eax */
  push32((uint32_t)(EAX));
  /* 10667da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10667da8 mov ecx, dword ptr [0x10690e2c] */
  ECX = (r32((uint32_t)(0x10690e2c)));
  /* 10667dae push ecx */
  push32((uint32_t)(ECX));
  /* 10667daf call dword ptr [0x10691334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691334))), 0x10667db5u);
  /* 10667db5 mov edx, dword ptr [0x10690e24] */
  EDX = (r32((uint32_t)(0x10690e24)));
  /* 10667dbb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10667dbe mov eax, dword ptr [0x10690e28] */
  EAX = (r32((uint32_t)(0x10690e28)));
  /* 10667dc3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667dc5 mov ecx, dword ptr [0x10690e20] */
  ECX = (r32((uint32_t)(0x10690e20)));
  /* 10667dcb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667dce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667dd0 push eax */
  push32((uint32_t)(EAX));
  /* 10667dd1 mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10667dd7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667dda push edx */
  push32((uint32_t)(EDX));
  /* 10667ddb mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10667de0 push eax */
  push32((uint32_t)(EAX));
  /* 10667de1 call 0x1066b390 */
  push32(0x10667de6u); f_1066b390();
  /* 10667de6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667de9 mov ecx, dword ptr [0x10690e24] */
  ECX = (r32((uint32_t)(0x10690e24)));
  /* 10667def sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667df2 mov dword ptr [0x10690e24], ecx */
  w32((uint32_t)(0x10690e24), (ECX));
  /* 10667df8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667dfb cmp edx, dword ptr [0x10690e20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10690e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667e01 jbe 0x10667e0c */
  if ((C.cf||C.zf)) goto L_10667e0c;
  /* 10667e03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667e06 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667e09 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10667e0c:;
  /* 10667e0c mov ecx, dword ptr [0x10690e28] */
  ECX = (r32((uint32_t)(0x10690e28)));
  /* 10667e12 mov dword ptr [0x10690e1c], ecx */
  w32((uint32_t)(0x10690e1c), (ECX));
L_10667e18:;
  /* 10667e18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667e1b mov dword ptr [0x10690e20], edx */
  w32((uint32_t)(0x10690e20), (EDX));
  /* 10667e21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667e24 mov dword ptr [0x10690e18], eax */
  w32((uint32_t)(0x10690e18), (EAX));
L_10667e29:;
  /* 10667e29 mov esp, ebp */
  ESP = (EBP);
  /* 10667e2b pop ebp */
  EBP = (pop32());
  /* 10667e2c ret  */
  ESPCHK(0x10667860u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e30 @ 0x10667e30 (1334 bytes, 427 insns) */
void f_10667e30(void) {
  FTRACE(0x10667e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10667e31 mov ebp, esp */
  EBP = (ESP);
  /* 10667e33 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667e36 push esi */
  push32((uint32_t)(ESI));
  /* 10667e37 mov eax, dword ptr [0x10690e24] */
  EAX = (r32((uint32_t)(0x10690e24)));
  /* 10667e3c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10667e3f mov ecx, dword ptr [0x10690e28] */
  ECX = (r32((uint32_t)(0x10690e28)));
  /* 10667e45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667e47 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10667e4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667e4d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667e50 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10667e53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10667e56 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10667e59 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10667e5c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667e5f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10667e62 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667e66 jge 0x10667e7c */
  if ((C.sf==C.of)) goto L_10667e7c;
  /* 10667e68 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10667e6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10667e6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10667e70 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10667e73 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10667e7a jmp 0x10667e91 */
  goto L_10667e91;
L_10667e7c:;
  /* 10667e7c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10667e83 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10667e86 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667e89 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10667e8c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10667e8e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10667e91:;
  /* 10667e91 mov ecx, dword ptr [0x10690e1c] */
  ECX = (r32((uint32_t)(0x10690e1c)));
  /* 10667e97 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10667e9a:;
  /* 10667e9a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667e9d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667ea0 jae 0x10667ec6 */
  if (!C.cf) goto L_10667ec6;
  /* 10667ea2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667ea5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10667ea8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10667eaa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667ead mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10667eb0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10667eb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10667eb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10667eb7 je 0x10667ebb */
  if (C.zf) goto L_10667ebb;
  /* 10667eb9 jmp 0x10667ec6 */
  goto L_10667ec6;
L_10667ebb:;
  /* 10667ebb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667ebe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667ec1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10667ec4 jmp 0x10667e9a */
  goto L_10667e9a;
L_10667ec6:;
  /* 10667ec6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667ec9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667ecc jne 0x10667fad */
  if (!C.zf) goto L_10667fad;
  /* 10667ed2 mov eax, dword ptr [0x10690e28] */
  EAX = (r32((uint32_t)(0x10690e28)));
  /* 10667ed7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10667eda:;
  /* 10667eda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667edd cmp ecx, dword ptr [0x10690e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10690e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667ee3 jae 0x10667f09 */
  if (!C.cf) goto L_10667f09;
  /* 10667ee5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667ee8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10667eeb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10667eed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667ef0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10667ef3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10667ef6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10667ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10667efa je 0x10667efe */
  if (C.zf) goto L_10667efe;
  /* 10667efc jmp 0x10667f09 */
  goto L_10667f09;
L_10667efe:;
  /* 10667efe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f01 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667f04 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10667f07 jmp 0x10667eda */
  goto L_10667eda;
L_10667f09:;
  /* 10667f09 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f0c cmp ecx, dword ptr [0x10690e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10690e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667f12 jne 0x10667fad */
  if (!C.zf) goto L_10667fad;
L_10667f18:;
  /* 10667f18 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f1b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667f1e jae 0x10667f36 */
  if (!C.cf) goto L_10667f36;
  /* 10667f20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f23 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667f27 je 0x10667f2b */
  if (C.zf) goto L_10667f2b;
  /* 10667f29 jmp 0x10667f36 */
  goto L_10667f36;
L_10667f2b:;
  /* 10667f2b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f2e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667f31 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10667f34 jmp 0x10667f18 */
  goto L_10667f18;
L_10667f36:;
  /* 10667f36 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f39 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667f3c jne 0x10667f87 */
  if (!C.zf) goto L_10667f87;
  /* 10667f3e mov eax, dword ptr [0x10690e28] */
  EAX = (r32((uint32_t)(0x10690e28)));
  /* 10667f43 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10667f46:;
  /* 10667f46 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f49 cmp ecx, dword ptr [0x10690e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10690e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667f4f jae 0x10667f67 */
  if (!C.cf) goto L_10667f67;
  /* 10667f51 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f54 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667f58 je 0x10667f5c */
  if (C.zf) goto L_10667f5c;
  /* 10667f5a jmp 0x10667f67 */
  goto L_10667f67;
L_10667f5c:;
  /* 10667f5c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f5f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667f62 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10667f65 jmp 0x10667f46 */
  goto L_10667f46;
L_10667f67:;
  /* 10667f67 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f6a cmp ecx, dword ptr [0x10690e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10690e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667f70 jne 0x10667f87 */
  if (!C.zf) goto L_10667f87;
  /* 10667f72 call 0x10668370 */
  push32(0x10667f77u); f_10668370();
  /* 10667f77 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10667f7a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667f7e jne 0x10667f87 */
  if (!C.zf) goto L_10667f87;
  /* 10667f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10667f82 jmp 0x10668361 */
  goto L_10668361;
L_10667f87:;
  /* 10667f87 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f8a push edx */
  push32((uint32_t)(EDX));
  /* 10667f8b call 0x10668480 */
  push32(0x10667f90u); f_10668480();
  /* 10667f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667f93 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f96 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10667f99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10667f9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667f9e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10667fa1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667fa4 jne 0x10667fad */
  if (!C.zf) goto L_10667fad;
  /* 10667fa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10667fa8 jmp 0x10668361 */
  goto L_10668361;
L_10667fad:;
  /* 10667fad mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667fb0 mov dword ptr [0x10690e1c], edx */
  w32((uint32_t)(0x10690e1c), (EDX));
  /* 10667fb6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667fb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10667fbc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10667fbf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10667fc2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10667fc4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10667fc7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667fcb je 0x10667ff0 */
  if (C.zf) goto L_10667ff0;
  /* 10667fcd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10667fd0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10667fd3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10667fd6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10667fda mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10667fdd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10667fe0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10667fe3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10667fea or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10667fec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10667fee jne 0x10668025 */
  if (!C.zf) goto L_10668025;
L_10667ff0:;
  /* 10667ff0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10667ff7:;
  /* 10667ff7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10667ffa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10667ffd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10668000 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10668004 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668007 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1066800a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1066800d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10668014 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10668016 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10668018 jne 0x10668025 */
  if (!C.zf) goto L_10668025;
  /* 1066801a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066801d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668020 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10668023 jmp 0x10667ff7 */
  goto L_10667ff7;
L_10668025:;
  /* 10668025 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668028 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066802e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668031 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10668038 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066803b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10668042 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668045 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668048 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066804b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1066804f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10668052 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668056 jne 0x10668072 */
  if (!C.zf) goto L_10668072;
  /* 10668058 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1066805f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668062 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668065 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10668068 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1066806f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10668072:;
  /* 10668072 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668076 jl 0x1066808b */
  if ((C.sf!=C.of)) goto L_1066808b;
  /* 10668078 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066807b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1066807d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10668080 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668083 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668086 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10668089 jmp 0x10668072 */
  goto L_10668072;
L_1066808b:;
  /* 1066808b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066808e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668091 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10668095 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10668098 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066809b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1066809d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106680a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106680a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106680a6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106680a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106680ac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106680af cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106680b3 jle 0x106680bc */
  if ((C.zf||C.sf!=C.of)) goto L_106680bc;
  /* 106680b5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_106680bc:;
  /* 106680bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106680bf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106680c2 je 0x106682e0 */
  if (C.zf) goto L_106682e0;
  /* 106680c8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106680cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106680ce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 106680d1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106680d4 jne 0x106681aa */
  if (!C.zf) goto L_106681aa;
  /* 106680da cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106680de jge 0x1066813f */
  if ((C.sf==C.of)) goto L_1066813f;
  /* 106680e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106680e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106680e8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106680ea not eax */
  EAX = (~(EAX));
  /* 106680ec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106680ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106680f2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 106680f6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106680f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106680fb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106680fe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10668102 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668105 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668108 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1066810b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1066810e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668111 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668114 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10668117 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1066811a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066811d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10668121 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10668123 jne 0x1066813d */
  if (!C.zf) goto L_1066813d;
  /* 10668125 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1066812a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066812d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1066812f not eax */
  EAX = (~(EAX));
  /* 10668131 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668134 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10668136 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10668138 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066813b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1066813d:;
  /* 1066813d jmp 0x106681aa */
  goto L_106681aa;
L_1066813f:;
  /* 1066813f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668142 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668145 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1066814a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1066814c not edx */
  EDX = (~(EDX));
  /* 1066814e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668151 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668154 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1066815b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1066815d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668160 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668163 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1066816a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1066816d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668170 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10668173 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10668176 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668179 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066817c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1066817f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668182 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668185 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10668189 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066818b jne 0x106681aa */
  if (!C.zf) goto L_106681aa;
  /* 1066818d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668190 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668193 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10668198 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1066819a not edx */
  EDX = (~(EDX));
  /* 1066819c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066819f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106681a2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106681a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106681a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106681aa:;
  /* 106681aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106681ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106681b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106681b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106681b6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106681b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106681bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106681bf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106681c2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106681c5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106681c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106681cc je 0x106682e0 */
  if (C.zf) goto L_106682e0;
  /* 106681d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106681d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106681d8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 106681db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106681de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106681e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106681e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106681e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106681ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106681ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106681f0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106681f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106681f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106681f9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 106681fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106681ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10668202 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10668205 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10668208 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066820b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066820e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10668211 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668214 jne 0x106682e0 */
  if (!C.zf) goto L_106682e0;
  /* 1066821a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066821e jge 0x1066827a */
  if ((C.sf==C.of)) goto L_1066827a;
  /* 10668220 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668223 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668226 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1066822a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1066822d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668230 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10668233 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10668235 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668238 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066823b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1066823e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10668240 jne 0x10668258 */
  if (!C.zf) goto L_10668258;
  /* 10668242 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10668247 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066824a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1066824c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066824f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10668251 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10668253 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668256 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10668258:;
  /* 10668258 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1066825d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668260 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10668262 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668265 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668268 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1066826c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1066826e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668271 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668274 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10668278 jmp 0x106682e0 */
  goto L_106682e0;
L_1066827a:;
  /* 1066827a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1066827d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668280 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10668284 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668287 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066828a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1066828d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1066828f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668292 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668295 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10668298 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066829a jne 0x106682b7 */
  if (!C.zf) goto L_106682b7;
  /* 1066829c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066829f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106682a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106682a7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106682a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106682ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106682af or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106682b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106682b4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106682b7:;
  /* 106682b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106682ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106682bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106682c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106682c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106682c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106682ca mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 106682d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106682d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106682d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106682d9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_106682e0:;
  /* 106682e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106682e4 je 0x106682fa */
  if (C.zf) goto L_106682fa;
  /* 106682e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106682e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106682ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106682ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106682f1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106682f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106682f7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_106682fa:;
  /* 106682fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106682fd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668300 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10668303 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10668306 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668309 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066830c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1066830e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10668311 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668314 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10668317 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066831a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1066831d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668320 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10668322 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668325 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10668327 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066832a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066832d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1066832f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10668331 jne 0x10668353 */
  if (!C.zf) goto L_10668353;
  /* 10668333 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668336 cmp eax, dword ptr [0x10690e20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10690e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066833c jne 0x10668353 */
  if (!C.zf) goto L_10668353;
  /* 1066833e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668341 cmp ecx, dword ptr [0x10690e18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10690e18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668347 jne 0x10668353 */
  if (!C.zf) goto L_10668353;
  /* 10668349 mov dword ptr [0x10690e20], 0 */
  w32((uint32_t)(0x10690e20), (0x0u));
L_10668353:;
  /* 10668353 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10668356 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668359 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1066835b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066835e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10668361:;
  /* 10668361 pop esi */
  ESI = (pop32());
  /* 10668362 mov esp, ebp */
  ESP = (EBP);
  /* 10668364 pop ebp */
  EBP = (pop32());
  /* 10668365 ret  */
  ESPCHK(0x10667e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008370 @ 0x10668370 (271 bytes, 78 insns) */
void f_10668370(void) {
  FTRACE(0x10668370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10668370 push ebp */
  push32((uint32_t)(EBP));
  /* 10668371 mov ebp, esp */
  EBP = (ESP);
  /* 10668373 push ecx */
  push32((uint32_t)(ECX));
  /* 10668374 mov eax, dword ptr [0x10690e24] */
  EAX = (r32((uint32_t)(0x10690e24)));
  /* 10668379 cmp eax, dword ptr [0x10690e08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10690e08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066837f jne 0x106683cb */
  if (!C.zf) goto L_106683cb;
  /* 10668381 mov ecx, dword ptr [0x10690e08] */
  ECX = (r32((uint32_t)(0x10690e08)));
  /* 10668387 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066838a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066838d push ecx */
  push32((uint32_t)(ECX));
  /* 1066838e mov edx, dword ptr [0x10690e28] */
  EDX = (r32((uint32_t)(0x10690e28)));
  /* 10668394 push edx */
  push32((uint32_t)(EDX));
  /* 10668395 push 0 */
  push32((uint32_t)(0x0u));
  /* 10668397 mov eax, dword ptr [0x10690e2c] */
  EAX = (r32((uint32_t)(0x10690e2c)));
  /* 1066839c push eax */
  push32((uint32_t)(EAX));
  /* 1066839d call dword ptr [0x1069133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069133c))), 0x106683a3u);
  /* 106683a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106683a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106683aa jne 0x106683b3 */
  if (!C.zf) goto L_106683b3;
  /* 106683ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106683ae jmp 0x1066847b */
  goto L_1066847b;
L_106683b3:;
  /* 106683b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106683b6 mov dword ptr [0x10690e28], ecx */
  w32((uint32_t)(0x10690e28), (ECX));
  /* 106683bc mov edx, dword ptr [0x10690e08] */
  EDX = (r32((uint32_t)(0x10690e08)));
  /* 106683c2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106683c5 mov dword ptr [0x10690e08], edx */
  w32((uint32_t)(0x10690e08), (EDX));
L_106683cb:;
  /* 106683cb mov eax, dword ptr [0x10690e24] */
  EAX = (r32((uint32_t)(0x10690e24)));
  /* 106683d0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106683d3 mov ecx, dword ptr [0x10690e28] */
  ECX = (r32((uint32_t)(0x10690e28)));
  /* 106683d9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106683db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106683de push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 106683e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 106683e5 mov edx, dword ptr [0x10690e2c] */
  EDX = (r32((uint32_t)(0x10690e2c)));
  /* 106683eb push edx */
  push32((uint32_t)(EDX));
  /* 106683ec call dword ptr [0x10691354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691354))), 0x106683f2u);
  /* 106683f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106683f5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 106683f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106683fb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106683ff jne 0x10668405 */
  if (!C.zf) goto L_10668405;
  /* 10668401 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10668403 jmp 0x1066847b */
  goto L_1066847b;
L_10668405:;
  /* 10668405 push 4 */
  push32((uint32_t)(0x4u));
  /* 10668407 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1066840c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10668411 push 0 */
  push32((uint32_t)(0x0u));
  /* 10668413 call dword ptr [0x10691358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691358))), 0x10668419u);
  /* 10668419 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066841c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1066841f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668422 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668426 jne 0x10668442 */
  if (!C.zf) goto L_10668442;
  /* 10668428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066842b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1066842e push ecx */
  push32((uint32_t)(ECX));
  /* 1066842f push 0 */
  push32((uint32_t)(0x0u));
  /* 10668431 mov edx, dword ptr [0x10690e2c] */
  EDX = (r32((uint32_t)(0x10690e2c)));
  /* 10668437 push edx */
  push32((uint32_t)(EDX));
  /* 10668438 call dword ptr [0x10691334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691334))), 0x1066843eu);
  /* 1066843e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10668440 jmp 0x1066847b */
  goto L_1066847b;
L_10668442:;
  /* 10668442 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668445 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1066844b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066844e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10668455 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668458 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1066845f mov eax, dword ptr [0x10690e24] */
  EAX = (r32((uint32_t)(0x10690e24)));
  /* 10668464 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668467 mov dword ptr [0x10690e24], eax */
  w32((uint32_t)(0x10690e24), (EAX));
  /* 1066846c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066846f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10668472 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10668478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1066847b:;
  /* 1066847b mov esp, ebp */
  ESP = (EBP);
  /* 1066847d pop ebp */
  EBP = (pop32());
  /* 1066847e ret  */
  ESPCHK(0x10668370u, _esp0);
  ESP += 4; return;
}

/* FUN_10008480 @ 0x10668480 (494 bytes, 149 insns) */
void f_10668480(void) {
  FTRACE(0x10668480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10668480 push ebp */
  push32((uint32_t)(EBP));
  /* 10668481 mov ebp, esp */
  EBP = (ESP);
  /* 10668483 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668489 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1066848c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1066848f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668492 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10668495 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10668498 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1066849f:;
  /* 1066849f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106684a3 jl 0x106684b8 */
  if ((C.sf!=C.of)) goto L_106684b8;
  /* 106684a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106684a8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106684aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106684ad mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106684b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106684b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106684b6 jmp 0x1066849f */
  goto L_1066849f;
L_106684b8:;
  /* 106684b8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106684bb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106684c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106684c4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 106684cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106684ce mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106684d5 jmp 0x106684e0 */
  goto L_106684e0;
L_106684d7:;
  /* 106684d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106684da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106684dd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_106684e0:;
  /* 106684e0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106684e4 jge 0x10668506 */
  if ((C.sf==C.of)) goto L_10668506;
  /* 106684e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106684e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106684ec lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 106684ef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106684f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106684f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106684f8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106684fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106684fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668501 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10668504 jmp 0x106684d7 */
  goto L_106684d7;
L_10668506:;
  /* 10668506 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10668509 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1066850c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066850f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10668512 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668514 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10668517 push 4 */
  push32((uint32_t)(0x4u));
  /* 10668519 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1066851e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10668523 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10668526 push edx */
  push32((uint32_t)(EDX));
  /* 10668527 call dword ptr [0x10691358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691358))), 0x1066852du);
  /* 1066852d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066852f jne 0x10668539 */
  if (!C.zf) goto L_10668539;
  /* 10668531 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10668534 jmp 0x1066866a */
  goto L_1066866a;
L_10668539:;
  /* 10668539 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066853c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668541 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10668544 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10668547 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066854a jmp 0x10668558 */
  goto L_10668558;
L_1066854c:;
  /* 1066854c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066854f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668555 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10668558:;
  /* 10668558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066855b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066855e ja 0x106685bd */
  if ((!C.cf&&!C.zf)) goto L_106685bd;
  /* 10668560 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668563 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1066856a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066856d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10668577 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066857a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066857d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10668580 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668583 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10668589 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066858c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668592 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668595 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10668598 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066859b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106685a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106685a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106685a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106685aa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106685af mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106685b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106685b5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 106685bb jmp 0x1066854c */
  goto L_1066854c;
L_106685bd:;
  /* 106685bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106685c0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106685c6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106685c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106685cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106685cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106685d2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106685d5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106685d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106685db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106685de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106685e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106685e4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106685e7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106685ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106685ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106685f0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 106685f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106685f6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106685f9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106685fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106685ff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668602 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10668605 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10668608 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066860b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10668613 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10668616 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668619 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10668624 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668627 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1066862b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066862e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10668631 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10668634 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668637 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1066863a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066863c jne 0x1066864d */
  if (!C.zf) goto L_1066864d;
  /* 1066863e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668641 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10668644 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10668647 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066864a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1066864d:;
  /* 1066864d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10668652 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10668655 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10668657 not edx */
  EDX = (~(EDX));
  /* 10668659 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066865c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1066865f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10668661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668664 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10668667 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1066866a:;
  /* 1066866a mov esp, ebp */
  ESP = (EBP);
  /* 1066866c pop ebp */
  EBP = (pop32());
  /* 1066866d ret  */
  ESPCHK(0x10668480u, _esp0);
  ESP += 4; return;
}

/* FUN_10008670 @ 0x10668670 (1515 bytes, 489 insns) */
void f_10668670(void) {
  FTRACE(0x10668670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10668670 push ebp */
  push32((uint32_t)(EBP));
  /* 10668671 mov ebp, esp */
  EBP = (ESP);
  /* 10668673 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668676 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10668679 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066867c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1066867e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10668681 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668684 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10668687 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1066868a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066868d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10668690 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668693 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10668696 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10668699 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1066869c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066869f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106686a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106686a8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106686ab lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 106686b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106686b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106686b8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106686bb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106686be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106686c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106686c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106686c6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106686c9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106686cc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106686cf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 106686d2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106686d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106686d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106686da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106686dd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106686e0 jle 0x10668996 */
  if ((C.zf||C.sf!=C.of)) goto L_10668996;
  /* 106686e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106686e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106686ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106686ee jne 0x106686fb */
  if (!C.zf) goto L_106686fb;
  /* 106686f0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106686f3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106686f6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106686f9 jle 0x10668702 */
  if ((C.zf||C.sf!=C.of)) goto L_10668702;
L_106686fb:;
  /* 106686fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106686fd jmp 0x10668c57 */
  goto L_10668c57;
L_10668702:;
  /* 10668702 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10668705 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10668708 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066870b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1066870e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668712 jbe 0x1066871b */
  if ((C.cf||C.zf)) goto L_1066871b;
  /* 10668714 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1066871b:;
  /* 1066871b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066871e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668721 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10668724 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668727 jne 0x106687fd */
  if (!C.zf) goto L_106687fd;
  /* 1066872d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668731 jae 0x10668792 */
  if (!C.cf) goto L_10668792;
  /* 10668733 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10668738 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066873b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1066873d not edx */
  EDX = (~(EDX));
  /* 1066873f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668742 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668745 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10668749 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1066874b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066874e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668751 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10668755 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668758 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066875b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1066875e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10668761 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668764 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668767 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1066876a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066876d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668770 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10668774 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10668776 jne 0x10668790 */
  if (!C.zf) goto L_10668790;
  /* 10668778 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1066877d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668780 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10668782 not edx */
  EDX = (~(EDX));
  /* 10668784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668787 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10668789 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1066878b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066878e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10668790:;
  /* 10668790 jmp 0x106687fd */
  goto L_106687fd;
L_10668792:;
  /* 10668792 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668795 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668798 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1066879d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1066879f not eax */
  EAX = (~(EAX));
  /* 106687a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106687a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106687a7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106687ae and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106687b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106687b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106687b6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 106687bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106687c0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106687c3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106687c6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106687c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106687cc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106687cf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106687d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106687d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106687d8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106687dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106687de jne 0x106687fd */
  if (!C.zf) goto L_106687fd;
  /* 106687e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106687e3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106687e6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106687eb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106687ed not eax */
  EAX = (~(EAX));
  /* 106687ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106687f2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106687f5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106687f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106687fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106687fd:;
  /* 106687fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668800 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10668803 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668806 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10668809 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1066880c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066880f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10668812 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668815 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10668818 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1066881b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066881e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668821 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668824 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10668827 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066882b jle 0x10668977 */
  if ((C.zf||C.sf!=C.of)) goto L_10668977;
  /* 10668831 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668834 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668837 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1066883a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066883d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10668840 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668843 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10668846 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066884a jbe 0x10668853 */
  if ((C.cf||C.zf)) goto L_10668853;
  /* 1066884c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10668853:;
  /* 10668853 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668856 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10668859 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1066885c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1066885f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668862 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668865 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10668868 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1066886b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066886e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668871 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10668874 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668877 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066887a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1066887d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668880 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10668883 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668886 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10668889 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066888c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066888f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10668892 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668895 jne 0x10668963 */
  if (!C.zf) goto L_10668963;
  /* 1066889b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066889f jae 0x106688fc */
  if (!C.cf) goto L_106688fc;
  /* 106688a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106688a4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106688a7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106688ab mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106688ae add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106688b1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106688b4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106688b7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106688ba add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106688bd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 106688c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106688c2 jne 0x106688da */
  if (!C.zf) goto L_106688da;
  /* 106688c4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106688c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106688cc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106688ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106688d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106688d3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106688d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106688d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106688da:;
  /* 106688da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106688df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106688e2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106688e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106688e7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106688ea mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 106688ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106688f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106688f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106688f6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 106688fa jmp 0x10668963 */
  goto L_10668963;
L_106688fc:;
  /* 106688fc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106688ff add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668902 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10668906 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668909 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066890c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1066890f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10668912 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668915 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668918 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1066891b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066891d jne 0x1066893a */
  if (!C.zf) goto L_1066893a;
  /* 1066891f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668922 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668925 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1066892a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1066892c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066892f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10668932 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10668934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668937 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1066893a:;
  /* 1066893a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066893d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668940 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10668945 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10668947 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066894a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066894d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10668954 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10668956 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668959 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066895c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10668963:;
  /* 10668963 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668966 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10668969 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1066896b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066896e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668971 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10668974 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10668977:;
  /* 10668977 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066897a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066897d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668980 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10668982 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10668985 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668988 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066898b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066898e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10668991 jmp 0x10668c52 */
  goto L_10668c52;
L_10668996:;
  /* 10668996 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10668999 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066899c jge 0x10668c52 */
  if ((C.sf==C.of)) goto L_10668c52;
  /* 106689a2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106689a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106689a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106689ab mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106689ad mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106689b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106689b3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106689b6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106689b9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 106689bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106689bf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106689c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106689c5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106689c8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106689cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106689ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106689d1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106689d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106689d7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106689da cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106689de jbe 0x106689e7 */
  if ((C.cf||C.zf)) goto L_106689e7;
  /* 106689e0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_106689e7:;
  /* 106689e7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106689ea and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106689ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106689ef jne 0x10668b30 */
  if (!C.zf) goto L_10668b30;
  /* 106689f5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106689f8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106689fb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106689fe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10668a01 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668a05 jbe 0x10668a0e */
  if ((C.cf||C.zf)) goto L_10668a0e;
  /* 10668a07 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10668a0e:;
  /* 10668a0e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668a11 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668a14 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10668a17 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668a1a jne 0x10668af0 */
  if (!C.zf) goto L_10668af0;
  /* 10668a20 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668a24 jae 0x10668a85 */
  if (!C.cf) goto L_10668a85;
  /* 10668a26 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10668a2b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668a2e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10668a30 not edx */
  EDX = (~(EDX));
  /* 10668a32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668a35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668a38 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10668a3c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10668a3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668a41 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668a44 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10668a48 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668a4b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668a4e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10668a51 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10668a54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668a57 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668a5a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10668a5d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668a60 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668a63 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10668a67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10668a69 jne 0x10668a83 */
  if (!C.zf) goto L_10668a83;
  /* 10668a6b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10668a70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668a73 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10668a75 not edx */
  EDX = (~(EDX));
  /* 10668a77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668a7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10668a7c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10668a7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668a81 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10668a83:;
  /* 10668a83 jmp 0x10668af0 */
  goto L_10668af0;
L_10668a85:;
  /* 10668a85 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668a88 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668a8b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10668a90 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10668a92 not eax */
  EAX = (~(EAX));
  /* 10668a94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668a97 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668a9a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10668aa1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10668aa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668aa6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668aa9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10668ab0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668ab3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668ab6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10668ab9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10668abc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668abf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668ac2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10668ac5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668ac8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668acb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10668acf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10668ad1 jne 0x10668af0 */
  if (!C.zf) goto L_10668af0;
  /* 10668ad3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10668ad6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668ad9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10668ade shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10668ae0 not eax */
  EAX = (~(EAX));
  /* 10668ae2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668ae5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10668ae8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10668aea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668aed mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10668af0:;
  /* 10668af0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668af3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10668af6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668af9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10668afc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10668aff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668b02 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10668b05 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10668b08 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10668b0b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10668b0e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10668b11 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668b14 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10668b17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10668b1a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10668b1d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668b20 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10668b23 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668b27 jbe 0x10668b30 */
  if ((C.cf||C.zf)) goto L_10668b30;
  /* 10668b29 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10668b30:;
  /* 10668b30 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10668b33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10668b36 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10668b39 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10668b3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668b3f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668b42 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10668b45 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10668b48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668b4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668b4e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10668b51 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10668b54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668b57 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10668b5a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668b5d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10668b60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668b63 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10668b66 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668b69 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668b6c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10668b6f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668b72 jne 0x10668c3e */
  if (!C.zf) goto L_10668c3e;
  /* 10668b78 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668b7c jae 0x10668bd8 */
  if (!C.cf) goto L_10668bd8;
  /* 10668b7e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668b81 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668b84 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10668b88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668b8b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668b8e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10668b91 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10668b93 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668b96 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668b99 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10668b9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10668b9e jne 0x10668bb6 */
  if (!C.zf) goto L_10668bb6;
  /* 10668ba0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10668ba5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10668ba8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10668baa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668bad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10668baf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10668bb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668bb4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10668bb6:;
  /* 10668bb6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10668bbb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10668bbe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10668bc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668bc3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668bc6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10668bca or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10668bcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668bcf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668bd2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10668bd6 jmp 0x10668c3e */
  goto L_10668c3e;
L_10668bd8:;
  /* 10668bd8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668bdb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668bde movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10668be2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668be5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668be8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10668beb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10668bed mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668bf0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668bf3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10668bf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10668bf8 jne 0x10668c15 */
  if (!C.zf) goto L_10668c15;
  /* 10668bfa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10668bfd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668c00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10668c05 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10668c07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668c0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10668c0d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10668c0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10668c12 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10668c15:;
  /* 10668c15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10668c18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668c1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10668c20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10668c22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668c25 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668c28 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10668c2f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10668c31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668c34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10668c37 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10668c3e:;
  /* 10668c3e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668c41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10668c44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10668c46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10668c49 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668c4c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10668c4f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10668c52:;
  /* 10668c52 mov eax, 1 */
  EAX = (0x1u);
L_10668c57:;
  /* 10668c57 mov esp, ebp */
  ESP = (EBP);
  /* 10668c59 pop ebp */
  EBP = (pop32());
  /* 10668c5a ret  */
  ESPCHK(0x10668670u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c60 @ 0x10668c60 (304 bytes, 79 insns) */
void f_10668c60(void) {
  FTRACE(0x10668c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10668c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10668c61 mov ebp, esp */
  EBP = (ESP);
  /* 10668c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10668c64 cmp dword ptr [0x10690e20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690e20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668c6b je 0x10668d8c */
  if (C.zf) goto L_10668d8c;
  /* 10668c71 mov eax, dword ptr [0x10690e18] */
  EAX = (r32((uint32_t)(0x10690e18)));
  /* 10668c76 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10668c79 mov ecx, dword ptr [0x10690e20] */
  ECX = (r32((uint32_t)(0x10690e20)));
  /* 10668c7f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10668c82 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668c84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10668c87 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10668c8c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10668c91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10668c94 push eax */
  push32((uint32_t)(EAX));
  /* 10668c95 call dword ptr [0x10691338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691338))), 0x10668c9bu);
  /* 10668c9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10668ca0 mov ecx, dword ptr [0x10690e18] */
  ECX = (r32((uint32_t)(0x10690e18)));
  /* 10668ca6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10668ca8 mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10668cad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10668cb0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10668cb2 mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10668cb8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10668cbb mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10668cc0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10668cc3 mov edx, dword ptr [0x10690e18] */
  EDX = (r32((uint32_t)(0x10690e18)));
  /* 10668cc9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10668cd4 mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10668cd9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10668cdc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10668cdf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10668ce2 mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10668ce7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10668cea mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10668ced mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10668cf3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10668cf6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10668cfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10668cfc jne 0x10668d12 */
  if (!C.zf) goto L_10668d12;
  /* 10668cfe mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10668d04 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10668d07 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10668d09 mov ecx, dword ptr [0x10690e20] */
  ECX = (r32((uint32_t)(0x10690e20)));
  /* 10668d0f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10668d12:;
  /* 10668d12 mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10668d18 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668d1c jne 0x10668d82 */
  if (!C.zf) goto L_10668d82;
  /* 10668d1e cmp dword ptr [0x10690e24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10690e24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668d25 jle 0x10668d82 */
  if ((C.zf||C.sf!=C.of)) goto L_10668d82;
  /* 10668d27 mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10668d2c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10668d2f push ecx */
  push32((uint32_t)(ECX));
  /* 10668d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10668d32 mov edx, dword ptr [0x10690e2c] */
  EDX = (r32((uint32_t)(0x10690e2c)));
  /* 10668d38 push edx */
  push32((uint32_t)(EDX));
  /* 10668d39 call dword ptr [0x10691334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691334))), 0x10668d3fu);
  /* 10668d3f mov eax, dword ptr [0x10690e24] */
  EAX = (r32((uint32_t)(0x10690e24)));
  /* 10668d44 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10668d47 mov ecx, dword ptr [0x10690e28] */
  ECX = (r32((uint32_t)(0x10690e28)));
  /* 10668d4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668d4f mov edx, dword ptr [0x10690e20] */
  EDX = (r32((uint32_t)(0x10690e20)));
  /* 10668d55 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668d58 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668d5a push ecx */
  push32((uint32_t)(ECX));
  /* 10668d5b mov eax, dword ptr [0x10690e20] */
  EAX = (r32((uint32_t)(0x10690e20)));
  /* 10668d60 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668d63 push eax */
  push32((uint32_t)(EAX));
  /* 10668d64 mov ecx, dword ptr [0x10690e20] */
  ECX = (r32((uint32_t)(0x10690e20)));
  /* 10668d6a push ecx */
  push32((uint32_t)(ECX));
  /* 10668d6b call 0x1066b390 */
  push32(0x10668d70u); f_1066b390();
  /* 10668d70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10668d73 mov edx, dword ptr [0x10690e24] */
  EDX = (r32((uint32_t)(0x10690e24)));
  /* 10668d79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668d7c mov dword ptr [0x10690e24], edx */
  w32((uint32_t)(0x10690e24), (EDX));
L_10668d82:;
  /* 10668d82 mov dword ptr [0x10690e20], 0 */
  w32((uint32_t)(0x10690e20), (0x0u));
L_10668d8c:;
  /* 10668d8c mov esp, ebp */
  ESP = (EBP);
  /* 10668d8e pop ebp */
  EBP = (pop32());
  /* 10668d8f ret  */
  ESPCHK(0x10668c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d90 @ 0x10668d90 (1565 bytes, 343 insns) */
void f_10668d90(void) {
  FTRACE(0x10668d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10668d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10668d91 mov ebp, esp */
  EBP = (ESP);
  /* 10668d93 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668d99 mov eax, dword ptr [0x10690e24] */
  EAX = (r32((uint32_t)(0x10690e24)));
  /* 10668d9e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10668da1 push eax */
  push32((uint32_t)(EAX));
  /* 10668da2 mov ecx, dword ptr [0x10690e28] */
  ECX = (r32((uint32_t)(0x10690e28)));
  /* 10668da8 push ecx */
  push32((uint32_t)(ECX));
  /* 10668da9 call dword ptr [0x10691254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691254))), 0x10668dafu);
  /* 10668daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10668db1 je 0x10668dbb */
  if (C.zf) goto L_10668dbb;
  /* 10668db3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10668db6 jmp 0x106693a9 */
  goto L_106693a9;
L_10668dbb:;
  /* 10668dbb mov edx, dword ptr [0x10690e28] */
  EDX = (r32((uint32_t)(0x10690e28)));
  /* 10668dc1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10668dc7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10668dd1 jmp 0x10668de2 */
  goto L_10668de2;
L_10668dd3:;
  /* 10668dd3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10668dd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668ddc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10668de2:;
  /* 10668de2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10668de8 cmp ecx, dword ptr [0x10690e24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10690e24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668dee jge 0x106693a7 */
  if ((C.sf==C.of)) goto L_106693a7;
  /* 10668df4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10668dfa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10668dfd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10668e03 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10668e08 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10668e0e push ecx */
  push32((uint32_t)(ECX));
  /* 10668e0f call dword ptr [0x10691254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691254))), 0x10668e15u);
  /* 10668e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10668e17 je 0x10668e23 */
  if (C.zf) goto L_10668e23;
  /* 10668e19 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10668e1e jmp 0x106693a9 */
  goto L_106693a9;
L_10668e23:;
  /* 10668e23 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10668e29 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10668e2c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10668e32 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10668e38 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668e3e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10668e41 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10668e47 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10668e4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10668e4d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10668e57 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10668e61 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10668e68 jmp 0x10668e73 */
  goto L_10668e73;
L_10668e6a:;
  /* 10668e6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10668e6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668e70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10668e73:;
  /* 10668e73 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668e77 jge 0x1066936b */
  if ((C.sf==C.of)) goto L_1066936b;
  /* 10668e7d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10668e87 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10668e91 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10668e9b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10668ea5 jmp 0x10668eb6 */
  goto L_10668eb6;
L_10668ea7:;
  /* 10668ea7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10668ead add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668eb0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10668eb6:;
  /* 10668eb6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668ebd jge 0x10668ed2 */
  if ((C.sf==C.of)) goto L_10668ed2;
  /* 10668ebf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10668ec5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10668ed0 jmp 0x10668ea7 */
  goto L_10668ea7;
L_10668ed2:;
  /* 10668ed2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668ed6 jl 0x1066930d */
  if ((C.sf!=C.of)) goto L_1066930d;
  /* 10668edc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10668ee1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10668ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 10668ee8 call dword ptr [0x10691254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691254))), 0x10668eeeu);
  /* 10668eee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10668ef0 je 0x10668efc */
  if (C.zf) goto L_10668efc;
  /* 10668ef2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10668ef7 jmp 0x106693a9 */
  goto L_106693a9;
L_10668efc:;
  /* 10668efc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10668f02 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10668f05 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10668f0f jmp 0x10668f20 */
  goto L_10668f20;
L_10668f11:;
  /* 10668f11 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10668f17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668f1a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10668f20:;
  /* 10668f20 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668f27 jge 0x106690a4 */
  if ((C.sf==C.of)) goto L_106690a4;
  /* 10668f2d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10668f30 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668f33 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10668f39 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10668f3f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668f45 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10668f4b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10668f51 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668f55 jne 0x10668f62 */
  if (!C.zf) goto L_10668f62;
  /* 10668f57 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10668f5d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668f60 je 0x10668f6c */
  if (C.zf) goto L_10668f6c;
L_10668f62:;
  /* 10668f62 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10668f67 jmp 0x106693a9 */
  goto L_106693a9;
L_10668f6c:;
  /* 10668f6c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10668f72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10668f74 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10668f7a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10668f80 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10668f86 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10668f8c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10668f8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10668f91 je 0x10668fc9 */
  if (C.zf) goto L_10668fc9;
  /* 10668f93 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10668f99 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668f9c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10668fa2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668fac jle 0x10668fb8 */
  if ((C.zf||C.sf!=C.of)) goto L_10668fb8;
  /* 10668fae mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10668fb3 jmp 0x106693a9 */
  goto L_106693a9;
L_10668fb8:;
  /* 10668fb8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10668fbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668fc1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10668fc7 jmp 0x1066900b */
  goto L_1066900b;
L_10668fc9:;
  /* 10668fc9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10668fcf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10668fd2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10668fd5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10668fdb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10668fe2 jle 0x10668fee */
  if ((C.zf||C.sf!=C.of)) goto L_10668fee;
  /* 10668fe4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10668fee:;
  /* 10668fee mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10668ff4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10668ffb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10668ffe mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10669004 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1066900b:;
  /* 1066900b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669012 jl 0x1066902d */
  if ((C.sf!=C.of)) goto L_1066902d;
  /* 10669014 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1066901a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1066901d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066901f jne 0x1066902d */
  if (!C.zf) goto L_1066902d;
  /* 10669021 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066902b jle 0x10669037 */
  if ((C.zf||C.sf!=C.of)) goto L_10669037;
L_1066902d:;
  /* 1066902d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10669032 jmp 0x106693a9 */
  goto L_106693a9;
L_10669037:;
  /* 10669037 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1066903d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669043 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10669046 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066904c je 0x10669058 */
  if (C.zf) goto L_10669058;
  /* 1066904e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10669053 jmp 0x106693a9 */
  goto L_106693a9;
L_10669058:;
  /* 10669058 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1066905e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669064 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1066906a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10669070 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669076 jb 0x10668f6c */
  if (C.cf) goto L_10668f6c;
  /* 1066907c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10669082 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669088 je 0x10669094 */
  if (C.zf) goto L_10669094;
  /* 1066908a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1066908f jmp 0x106693a9 */
  goto L_106693a9;
L_10669094:;
  /* 10669094 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10669097 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066909c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066909f jmp 0x10668f11 */
  goto L_10668f11;
L_106690a4:;
  /* 106690a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106690a7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106690a9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106690af je 0x106690bb */
  if (C.zf) goto L_106690bb;
  /* 106690b1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 106690b6 jmp 0x106693a9 */
  goto L_106693a9;
L_106690bb:;
  /* 106690bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106690be mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 106690c4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 106690cb jmp 0x106690d6 */
  goto L_106690d6;
L_106690cd:;
  /* 106690cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106690d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106690d3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_106690d6:;
  /* 106690d6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106690da jge 0x1066930d */
  if ((C.sf==C.of)) goto L_1066930d;
  /* 106690e0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 106690ea mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 106690f0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_106690f6:;
  /* 106690f6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 106690fc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106690ff mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10669105 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1066910b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669111 je 0x1066923a */
  if (C.zf) goto L_1066923a;
  /* 10669117 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066911a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10669120 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669127 je 0x1066923a */
  if (C.zf) goto L_1066923a;
  /* 1066912d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10669133 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669139 jb 0x1066914e */
  if (C.cf) goto L_1066914e;
  /* 1066913b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10669141 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669146 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066914c jb 0x10669158 */
  if (C.cf) goto L_10669158;
L_1066914e:;
  /* 1066914e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10669153 jmp 0x106693a9 */
  goto L_106693a9;
L_10669158:;
  /* 10669158 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1066915e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10669164 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1066916a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10669170 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669173 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10669176 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10669179 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066917e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10669184:;
  /* 10669184 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10669187 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066918d je 0x106691ae */
  if (C.zf) goto L_106691ae;
  /* 1066918f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10669192 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669198 jne 0x1066919c */
  if (!C.zf) goto L_1066919c;
  /* 1066919a jmp 0x106691ae */
  goto L_106691ae;
L_1066919c:;
  /* 1066919c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066919f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106691a1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 106691a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106691a7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106691a9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106691ac jmp 0x10669184 */
  goto L_10669184;
L_106691ae:;
  /* 106691ae mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106691b1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106691b7 jne 0x106691c3 */
  if (!C.zf) goto L_106691c3;
  /* 106691b9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 106691be jmp 0x106693a9 */
  goto L_106693a9;
L_106691c3:;
  /* 106691c3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106691c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106691cb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106691ce sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106691d1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 106691d7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106691de jle 0x106691ea */
  if ((C.zf||C.sf!=C.of)) goto L_106691ea;
  /* 106691e0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_106691ea:;
  /* 106691ea mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106691f0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106691f3 je 0x106691ff */
  if (C.zf) goto L_106691ff;
  /* 106691f5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 106691fa jmp 0x106693a9 */
  goto L_106693a9;
L_106691ff:;
  /* 106691ff mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10669205 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10669208 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066920e je 0x1066921a */
  if (C.zf) goto L_1066921a;
  /* 10669210 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10669215 jmp 0x106693a9 */
  goto L_106693a9;
L_1066921a:;
  /* 1066921a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10669220 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10669226 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1066922c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066922f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10669235 jmp 0x106690f6 */
  goto L_106690f6;
L_1066923a:;
  /* 1066923a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669241 je 0x106692b1 */
  if (C.zf) goto L_106692b1;
  /* 10669243 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669247 jge 0x1066927b */
  if ((C.sf==C.of)) goto L_1066927b;
  /* 10669249 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1066924e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10669251 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10669253 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10669259 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1066925b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10669261 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10669266 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10669269 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1066926b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10669271 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10669273 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10669279 jmp 0x106692b1 */
  goto L_106692b1;
L_1066927b:;
  /* 1066927b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066927e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669281 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10669286 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10669288 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1066928e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10669290 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10669296 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10669299 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066929c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106692a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106692a3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 106692a9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106692ab mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_106692b1:;
  /* 106692b1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 106692b7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106692ba cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106692c0 jne 0x106692d4 */
  if (!C.zf) goto L_106692d4;
  /* 106692c2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106692c5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 106692cb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106692d2 je 0x106692de */
  if (C.zf) goto L_106692de;
L_106692d4:;
  /* 106692d4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 106692d9 jmp 0x106693a9 */
  goto L_106693a9;
L_106692de:;
  /* 106692de mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 106692e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106692e7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106692ed je 0x106692f9 */
  if (C.zf) goto L_106692f9;
  /* 106692ef mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 106692f4 jmp 0x106693a9 */
  goto L_106693a9;
L_106692f9:;
  /* 106692f9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 106692ff add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669302 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10669308 jmp 0x106690cd */
  goto L_106690cd;
L_1066930d:;
  /* 1066930d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10669310 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10669316 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1066931c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669320 jne 0x1066933a */
  if (!C.zf) goto L_1066933a;
  /* 10669322 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10669325 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1066932b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10669331 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669338 je 0x10669341 */
  if (C.zf) goto L_10669341;
L_1066933a:;
  /* 1066933a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1066933f jmp 0x106693a9 */
  goto L_106693a9;
L_10669341:;
  /* 10669341 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10669347 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066934d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10669353 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10669356 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066935b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1066935e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10669361 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10669363 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10669366 jmp 0x10668e6a */
  goto L_10668e6a;
L_1066936b:;
  /* 1066936b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10669371 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10669377 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669379 jne 0x1066938c */
  if (!C.zf) goto L_1066938c;
  /* 1066937b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10669381 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10669387 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066938a je 0x10669393 */
  if (C.zf) goto L_10669393;
L_1066938c:;
  /* 1066938c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10669391 jmp 0x106693a9 */
  goto L_106693a9;
L_10669393:;
  /* 10669393 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10669399 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066939c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 106693a2 jmp 0x10668dd3 */
  goto L_10668dd3;
L_106693a7:;
  /* 106693a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106693a9:;
  /* 106693a9 mov esp, ebp */
  ESP = (EBP);
  /* 106693ab pop ebp */
  EBP = (pop32());
  /* 106693ac ret  */
  ESPCHK(0x10668d90u, _esp0);
  ESP += 4; return;
}

/* FUN_100093b0 @ 0x106693b0 (250 bytes, 92 insns) */
void f_106693b0(void) {
  FTRACE(0x106693b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106693b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106693b1 mov ebp, esp */
  EBP = (ESP);
  /* 106693b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106693b6 push ebx */
  push32((uint32_t)(EBX));
  /* 106693b7 push esi */
  push32((uint32_t)(ESI));
  /* 106693b8 push edi */
  push32((uint32_t)(EDI));
  /* 106693b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 106693bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106693bf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 106693c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_106693c5:;
  /* 106693c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106693c9 jne 0x106693e9 */
  if (!C.zf) goto L_106693e9;
  /* 106693cb push 0x1068aeb4 */
  push32((uint32_t)(0x1068aeb4u));
  /* 106693d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106693d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 106693d4 push 0x1068aea8 */
  push32((uint32_t)(0x1068aea8u));
  /* 106693d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 106693db call 0x10662560 */
  push32(0x106693e0u); f_10662560();
  /* 106693e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106693e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106693e6 jne 0x106693e9 */
  if (!C.zf) goto L_106693e9;
  /* 106693e8 int3  */
  x86_unimpl("int3 @ 0x106693e8");
L_106693e9:;
  /* 106693e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106693eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106693ed jne 0x106693c5 */
  if (!C.zf) goto L_106693c5;
L_106693ef:;
  /* 106693ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106693f3 jne 0x10669413 */
  if (!C.zf) goto L_10669413;
  /* 106693f5 push 0x1068ae98 */
  push32((uint32_t)(0x1068ae98u));
  /* 106693fa push 0 */
  push32((uint32_t)(0x0u));
  /* 106693fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 106693fe push 0x1068aea8 */
  push32((uint32_t)(0x1068aea8u));
  /* 10669403 push 2 */
  push32((uint32_t)(0x2u));
  /* 10669405 call 0x10662560 */
  push32(0x1066940au); f_10662560();
  /* 1066940a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066940d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669410 jne 0x10669413 */
  if (!C.zf) goto L_10669413;
  /* 10669412 int3  */
  x86_unimpl("int3 @ 0x10669412");
L_10669413:;
  /* 10669413 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10669415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10669417 jne 0x106693ef */
  if (!C.zf) goto L_106693ef;
  /* 10669419 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066941c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10669423 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669429 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1066942c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066942f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669432 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10669434 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669437 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1066943e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10669441 push ecx */
  push32((uint32_t)(ECX));
  /* 10669442 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10669445 push edx */
  push32((uint32_t)(EDX));
  /* 10669446 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669449 push eax */
  push32((uint32_t)(EAX));
  /* 1066944a call 0x1066a430 */
  push32(0x1066944fu); f_1066a430();
  /* 1066944f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10669452 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10669455 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669458 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1066945b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066945e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669461 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10669464 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669467 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066946b jl 0x1066948f */
  if ((C.sf!=C.of)) goto L_1066948f;
  /* 1066946d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669470 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10669472 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10669475 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10669477 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1066947d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10669480 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669483 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10669485 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669488 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066948b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1066948d jmp 0x106694a0 */
  goto L_106694a0;
L_1066948f:;
  /* 1066948f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669492 push edx */
  push32((uint32_t)(EDX));
  /* 10669493 push 0 */
  push32((uint32_t)(0x0u));
  /* 10669495 call 0x1066a1b0 */
  push32(0x1066949au); f_1066a1b0();
  /* 1066949a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066949d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_106694a0:;
  /* 106694a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106694a3 pop edi */
  EDI = (pop32());
  /* 106694a4 pop esi */
  ESI = (pop32());
  /* 106694a5 pop ebx */
  EBX = (pop32());
  /* 106694a6 mov esp, ebp */
  ESP = (EBP);
  /* 106694a8 pop ebp */
  EBP = (pop32());
  /* 106694a9 ret  */
  ESPCHK(0x106693b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094b0 @ 0x106694b0 (183 bytes, 58 insns) */
void f_106694b0(void) {
  FTRACE(0x106694b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106694b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106694b1 mov ebp, esp */
  EBP = (ESP);
  /* 106694b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106694b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106694b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106694bc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106694c1 ja 0x106694da */
  if ((!C.cf&&!C.zf)) goto L_106694da;
  /* 106694c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106694c6 mov edx, dword ptr [0x1068dc98] */
  EDX = (r32((uint32_t)(0x1068dc98)));
  /* 106694cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106694ce mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 106694d2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 106694d5 jmp 0x10669563 */
  goto L_10669563;
L_106694da:;
  /* 106694da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106694dd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 106694e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106694e6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106694ec mov edx, dword ptr [0x1068dc98] */
  EDX = (r32((uint32_t)(0x1068dc98)));
  /* 106694f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106694f4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 106694f8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 106694fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106694ff je 0x10669523 */
  if (C.zf) goto L_10669523;
  /* 10669501 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669504 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10669507 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1066950d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10669510 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10669513 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10669516 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1066951a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10669521 jmp 0x10669534 */
  goto L_10669534;
L_10669523:;
  /* 10669523 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10669526 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10669529 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1066952d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10669534:;
  /* 10669534 push 1 */
  push32((uint32_t)(0x1u));
  /* 10669536 push 0 */
  push32((uint32_t)(0x0u));
  /* 10669538 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066953a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1066953d push ecx */
  push32((uint32_t)(ECX));
  /* 1066953e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10669541 push edx */
  push32((uint32_t)(EDX));
  /* 10669542 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10669545 push eax */
  push32((uint32_t)(EAX));
  /* 10669546 push 1 */
  push32((uint32_t)(0x1u));
  /* 10669548 call 0x1066b6d0 */
  push32(0x1066954du); f_1066b6d0();
  /* 1066954d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10669550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10669552 jne 0x10669558 */
  if (!C.zf) goto L_10669558;
  /* 10669554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10669556 jmp 0x10669563 */
  goto L_10669563;
L_10669558:;
  /* 10669558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066955b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10669560 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10669563:;
  /* 10669563 mov esp, ebp */
  ESP = (EBP);
  /* 10669565 pop ebp */
  EBP = (pop32());
  /* 10669566 ret  */
  ESPCHK(0x106694b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009570 @ 0x10669570 (836 bytes, 238 insns) */
void f_10669570(void) {
  FTRACE(0x10669570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10669570 push ebp */
  push32((uint32_t)(EBP));
  /* 10669571 mov ebp, esp */
  EBP = (ESP);
  /* 10669573 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669576 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10669578 call 0x10666ea0 */
  push32(0x1066957du); f_10666ea0();
  /* 1066957d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10669580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669583 push eax */
  push32((uint32_t)(EAX));
  /* 10669584 call 0x106698c0 */
  push32(0x10669589u); f_106698c0();
  /* 10669589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066958c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1066958f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669592 cmp ecx, dword ptr [0x10690b64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10690b64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669598 jne 0x106695ab */
  if (!C.zf) goto L_106695ab;
  /* 1066959a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1066959c call 0x10666f40 */
  push32(0x106695a1u); f_10666f40();
  /* 106695a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106695a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106695a6 jmp 0x106698b0 */
  goto L_106698b0;
L_106695ab:;
  /* 106695ab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106695af jne 0x106695cc */
  if (!C.zf) goto L_106695cc;
  /* 106695b1 call 0x106699a0 */
  push32(0x106695b6u); f_106699a0();
  /* 106695b6 call 0x10669a20 */
  push32(0x106695bbu); f_10669a20();
  /* 106695bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106695bd call 0x10666f40 */
  push32(0x106695c2u); f_10666f40();
  /* 106695c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106695c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106695c7 jmp 0x106698b0 */
  goto L_106698b0;
L_106695cc:;
  /* 106695cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106695d3 jmp 0x106695de */
  goto L_106695de;
L_106695d5:;
  /* 106695d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106695d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106695db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106695de:;
  /* 106695de cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106695e2 jae 0x1066972f */
  if (!C.cf) goto L_1066972f;
  /* 106695e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106695eb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106695ee mov ecx, dword ptr [eax + 0x1068deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1068deb8)));
  /* 106695f4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106695f7 jne 0x1066972a */
  if (!C.zf) goto L_1066972a;
  /* 106695fd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10669604 jmp 0x1066960f */
  goto L_1066960f;
L_10669606:;
  /* 10669606 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669609 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066960c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1066960f:;
  /* 1066960f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669616 jae 0x10669624 */
  if (!C.cf) goto L_10669624;
  /* 10669618 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066961b mov byte ptr [eax + 0x10690d00], 0 */
  w8((uint32_t)(EAX + 0x10690d00), (0x0u));
  /* 10669622 jmp 0x10669606 */
  goto L_10669606;
L_10669624:;
  /* 10669624 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1066962b jmp 0x10669636 */
  goto L_10669636;
L_1066962d:;
  /* 1066962d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10669630 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669633 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10669636:;
  /* 10669636 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066963a jae 0x106696b7 */
  if (!C.cf) goto L_106696b7;
  /* 1066963c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066963f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10669642 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10669645 lea ecx, [edx + eax*8 + 0x1068dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1068dec8));
  /* 1066964c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066964f jmp 0x1066965a */
  goto L_1066965a;
L_10669651:;
  /* 10669651 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10669654 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669657 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1066965a:;
  /* 1066965a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066965d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066965f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10669661 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10669663 je 0x106696b2 */
  if (C.zf) goto L_106696b2;
  /* 10669665 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10669668 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066966a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1066966d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066966f je 0x106696b2 */
  if (C.zf) goto L_106696b2;
  /* 10669671 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10669674 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10669676 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10669678 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1066967b jmp 0x10669686 */
  goto L_10669686;
L_1066967d:;
  /* 1066967d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669680 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669683 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10669686:;
  /* 10669686 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10669689 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066968b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1066968e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669691 ja 0x106696b0 */
  if ((!C.cf&&!C.zf)) goto L_106696b0;
  /* 10669693 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669696 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10669699 mov dl, byte ptr [eax + 0x10690d01] */
  DL = (r8((uint32_t)(EAX + 0x10690d01)));
  /* 1066969f or dl, byte ptr [ecx + 0x1068deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1068deb0))); DL = (_r); fl_logic(_r,8); }
  /* 106696a5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106696a8 mov byte ptr [eax + 0x10690d01], dl */
  w8((uint32_t)(EAX + 0x10690d01), (DL));
  /* 106696ae jmp 0x1066967d */
  goto L_1066967d;
L_106696b0:;
  /* 106696b0 jmp 0x10669651 */
  goto L_10669651;
L_106696b2:;
  /* 106696b2 jmp 0x1066962d */
  goto L_1066962d;
L_106696b7:;
  /* 106696b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106696ba mov dword ptr [0x10690b64], ecx */
  w32((uint32_t)(0x10690b64), (ECX));
  /* 106696c0 mov dword ptr [0x10690bec], 1 */
  w32((uint32_t)(0x10690bec), (0x1u));
  /* 106696ca mov edx, dword ptr [0x10690b64] */
  EDX = (r32((uint32_t)(0x10690b64)));
  /* 106696d0 push edx */
  push32((uint32_t)(EDX));
  /* 106696d1 call 0x10669920 */
  push32(0x106696d6u); f_10669920();
  /* 106696d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106696d9 mov dword ptr [0x10690e04], eax */
  w32((uint32_t)(0x10690e04), (EAX));
  /* 106696de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106696e5 jmp 0x106696f0 */
  goto L_106696f0;
L_106696e7:;
  /* 106696e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106696ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106696ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106696f0:;
  /* 106696f0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106696f4 jae 0x10669714 */
  if (!C.cf) goto L_10669714;
  /* 106696f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106696f9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106696fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106696ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10669702 mov cx, word ptr [ecx + eax*2 + 0x1068debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1068debc)));
  /* 1066970a mov word ptr [edx*2 + 0x10690be0], cx */
  w16((uint32_t)(EDX*2 + 0x10690be0), (CX));
  /* 10669712 jmp 0x106696e7 */
  goto L_106696e7;
L_10669714:;
  /* 10669714 call 0x10669a20 */
  push32(0x10669719u); f_10669a20();
  /* 10669719 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1066971b call 0x10666f40 */
  push32(0x10669720u); f_10666f40();
  /* 10669720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10669723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10669725 jmp 0x106698b0 */
  goto L_106698b0;
L_1066972a:;
  /* 1066972a jmp 0x106695d5 */
  goto L_106695d5;
L_1066972f:;
  /* 1066972f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10669732 push edx */
  push32((uint32_t)(EDX));
  /* 10669733 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669736 push eax */
  push32((uint32_t)(EAX));
  /* 10669737 call dword ptr [0x1069135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069135c))), 0x1066973du);
  /* 1066973d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669740 jne 0x10669882 */
  if (!C.zf) goto L_10669882;
  /* 10669746 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1066974d jmp 0x10669758 */
  goto L_10669758;
L_1066974f:;
  /* 1066974f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669755 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10669758:;
  /* 10669758 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066975f jae 0x1066976d */
  if (!C.cf) goto L_1066976d;
  /* 10669761 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669764 mov byte ptr [edx + 0x10690d00], 0 */
  w8((uint32_t)(EDX + 0x10690d00), (0x0u));
  /* 1066976b jmp 0x1066974f */
  goto L_1066974f;
L_1066976d:;
  /* 1066976d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669770 mov dword ptr [0x10690b64], eax */
  w32((uint32_t)(0x10690b64), (EAX));
  /* 10669775 mov dword ptr [0x10690e04], 0 */
  w32((uint32_t)(0x10690e04), (0x0u));
  /* 1066977f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669783 jbe 0x1066983e */
  if ((C.cf||C.zf)) goto L_1066983e;
  /* 10669789 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1066978c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1066978f jmp 0x1066979a */
  goto L_1066979a;
L_10669791:;
  /* 10669791 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10669794 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669797 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1066979a:;
  /* 1066979a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066979d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066979f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106697a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106697a3 je 0x106697ec */
  if (C.zf) goto L_106697ec;
  /* 106697a5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106697a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106697aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106697ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106697af je 0x106697ec */
  if (C.zf) goto L_106697ec;
  /* 106697b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106697b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106697b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106697b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106697bb jmp 0x106697c6 */
  goto L_106697c6;
L_106697bd:;
  /* 106697bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106697c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106697c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106697c6:;
  /* 106697c6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106697c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106697cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 106697ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106697d1 ja 0x106697ea */
  if ((!C.cf&&!C.zf)) goto L_106697ea;
  /* 106697d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106697d6 mov cl, byte ptr [eax + 0x10690d01] */
  CL = (r8((uint32_t)(EAX + 0x10690d01)));
  /* 106697dc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 106697df mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106697e2 mov byte ptr [edx + 0x10690d01], cl */
  w8((uint32_t)(EDX + 0x10690d01), (CL));
  /* 106697e8 jmp 0x106697bd */
  goto L_106697bd;
L_106697ea:;
  /* 106697ea jmp 0x10669791 */
  goto L_10669791;
L_106697ec:;
  /* 106697ec mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 106697f3 jmp 0x106697fe */
  goto L_106697fe;
L_106697f5:;
  /* 106697f5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106697f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106697fb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106697fe:;
  /* 106697fe cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669805 jae 0x1066981e */
  if (!C.cf) goto L_1066981e;
  /* 10669807 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066980a mov dl, byte ptr [ecx + 0x10690d01] */
  DL = (r8((uint32_t)(ECX + 0x10690d01)));
  /* 10669810 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10669813 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10669816 mov byte ptr [eax + 0x10690d01], dl */
  w8((uint32_t)(EAX + 0x10690d01), (DL));
  /* 1066981c jmp 0x106697f5 */
  goto L_106697f5;
L_1066981e:;
  /* 1066981e mov ecx, dword ptr [0x10690b64] */
  ECX = (r32((uint32_t)(0x10690b64)));
  /* 10669824 push ecx */
  push32((uint32_t)(ECX));
  /* 10669825 call 0x10669920 */
  push32(0x1066982au); f_10669920();
  /* 1066982a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066982d mov dword ptr [0x10690e04], eax */
  w32((uint32_t)(0x10690e04), (EAX));
  /* 10669832 mov dword ptr [0x10690bec], 1 */
  w32((uint32_t)(0x10690bec), (0x1u));
  /* 1066983c jmp 0x10669848 */
  goto L_10669848;
L_1066983e:;
  /* 1066983e mov dword ptr [0x10690bec], 0 */
  w32((uint32_t)(0x10690bec), (0x0u));
L_10669848:;
  /* 10669848 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1066984f jmp 0x1066985a */
  goto L_1066985a;
L_10669851:;
  /* 10669851 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10669854 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669857 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1066985a:;
  /* 1066985a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066985e jae 0x1066986f */
  if (!C.cf) goto L_1066986f;
  /* 10669860 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10669863 mov word ptr [eax*2 + 0x10690be0], 0 */
  w16((uint32_t)(EAX*2 + 0x10690be0), (0x0u));
  /* 1066986d jmp 0x10669851 */
  goto L_10669851;
L_1066986f:;
  /* 1066986f call 0x10669a20 */
  push32(0x10669874u); f_10669a20();
  /* 10669874 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10669876 call 0x10666f40 */
  push32(0x1066987bu); f_10666f40();
  /* 1066987b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066987e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10669880 jmp 0x106698b0 */
  goto L_106698b0;
L_10669882:;
  /* 10669882 cmp dword ptr [0x1068f670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669889 je 0x106698a3 */
  if (C.zf) goto L_106698a3;
  /* 1066988b call 0x106699a0 */
  push32(0x10669890u); f_106699a0();
  /* 10669890 call 0x10669a20 */
  push32(0x10669895u); f_10669a20();
  /* 10669895 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10669897 call 0x10666f40 */
  push32(0x1066989cu); f_10666f40();
  /* 1066989c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066989f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106698a1 jmp 0x106698b0 */
  goto L_106698b0;
L_106698a3:;
  /* 106698a3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106698a5 call 0x10666f40 */
  push32(0x106698aau); f_10666f40();
  /* 106698aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106698ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106698b0:;
  /* 106698b0 mov esp, ebp */
  ESP = (EBP);
  /* 106698b2 pop ebp */
  EBP = (pop32());
  /* 106698b3 ret  */
  ESPCHK(0x10669570u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x106698c0 (89 bytes, 21 insns) */
void f_106698c0(void) {
  FTRACE(0x106698c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106698c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106698c1 mov ebp, esp */
  EBP = (ESP);
  /* 106698c3 mov dword ptr [0x1068f670], 0 */
  w32((uint32_t)(0x1068f670), (0x0u));
  /* 106698cd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106698d1 jne 0x106698e5 */
  if (!C.zf) goto L_106698e5;
  /* 106698d3 mov dword ptr [0x1068f670], 1 */
  w32((uint32_t)(0x1068f670), (0x1u));
  /* 106698dd call dword ptr [0x10691364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691364))), 0x106698e3u);
  /* 106698e3 jmp 0x10669917 */
  goto L_10669917;
L_106698e5:;
  /* 106698e5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106698e9 jne 0x106698fd */
  if (!C.zf) goto L_106698fd;
  /* 106698eb mov dword ptr [0x1068f670], 1 */
  w32((uint32_t)(0x1068f670), (0x1u));
  /* 106698f5 call dword ptr [0x10691360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691360))), 0x106698fbu);
  /* 106698fb jmp 0x10669917 */
  goto L_10669917;
L_106698fd:;
  /* 106698fd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669901 jne 0x10669914 */
  if (!C.zf) goto L_10669914;
  /* 10669903 mov dword ptr [0x1068f670], 1 */
  w32((uint32_t)(0x1068f670), (0x1u));
  /* 1066990d mov eax, dword ptr [0x1068f690] */
  EAX = (r32((uint32_t)(0x1068f690)));
  /* 10669912 jmp 0x10669917 */
  goto L_10669917;
L_10669914:;
  /* 10669914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10669917:;
  /* 10669917 pop ebp */
  EBP = (pop32());
  /* 10669918 ret  */
  ESPCHK(0x106698c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009920 @ 0x10669920 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10669920(void) {
  FTRACE(0x10669920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10669920 push ebp */
  push32((uint32_t)(EBP));
  /* 10669921 mov ebp, esp */
  EBP = (ESP);
  /* 10669923 push ecx */
  push32((uint32_t)(ECX));
  /* 10669924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669927 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066992a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066992d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669933 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10669936 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066993a ja 0x1066996a */
  if ((!C.cf&&!C.zf)) goto L_1066996a;
  /* 1066993c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066993f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10669941 mov dl, byte ptr [eax + 0x10669984] */
  DL = (r8((uint32_t)(EAX + 0x10669984)));
  /* 10669947 jmp dword ptr [edx*4 + 0x10669970] */
  switch (EDX) {
    case 0: goto L_1066994e;
    case 1: goto L_10669955;
    case 2: goto L_1066995c;
    case 3: goto L_10669963;
    case 4: goto L_1066996a;
    default: x86_unimpl("switch@0x10669947 out of table"); return;
  }
L_1066994e:;
  /* 1066994e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10669953 jmp 0x1066996c */
  goto L_1066996c;
L_10669955:;
  /* 10669955 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1066995a jmp 0x1066996c */
  goto L_1066996c;
L_1066995c:;
  /* 1066995c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10669961 jmp 0x1066996c */
  goto L_1066996c;
L_10669963:;
  /* 10669963 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10669968 jmp 0x1066996c */
  goto L_1066996c;
L_1066996a:;
  /* 1066996a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1066996c:;
  /* 1066996c mov esp, ebp */
  ESP = (EBP);
  /* 1066996e pop ebp */
  EBP = (pop32());
  /* 1066996f ret  */
  ESPCHK(0x10669920u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x106699a0 (116 bytes, 29 insns) */
void f_106699a0(void) {
  FTRACE(0x106699a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106699a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106699a1 mov ebp, esp */
  EBP = (ESP);
  /* 106699a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106699a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106699ab jmp 0x106699b6 */
  goto L_106699b6;
L_106699ad:;
  /* 106699ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106699b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106699b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106699b6:;
  /* 106699b6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106699bd jge 0x106699cb */
  if ((C.sf==C.of)) goto L_106699cb;
  /* 106699bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106699c2 mov byte ptr [ecx + 0x10690d00], 0 */
  w8((uint32_t)(ECX + 0x10690d00), (0x0u));
  /* 106699c9 jmp 0x106699ad */
  goto L_106699ad;
L_106699cb:;
  /* 106699cb mov dword ptr [0x10690b64], 0 */
  w32((uint32_t)(0x10690b64), (0x0u));
  /* 106699d5 mov dword ptr [0x10690bec], 0 */
  w32((uint32_t)(0x10690bec), (0x0u));
  /* 106699df mov dword ptr [0x10690e04], 0 */
  w32((uint32_t)(0x10690e04), (0x0u));
  /* 106699e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106699f0 jmp 0x106699fb */
  goto L_106699fb;
L_106699f2:;
  /* 106699f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106699f5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106699f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106699fb:;
  /* 106699fb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106699ff jge 0x10669a10 */
  if ((C.sf==C.of)) goto L_10669a10;
  /* 10669a01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10669a04 mov word ptr [eax*2 + 0x10690be0], 0 */
  w16((uint32_t)(EAX*2 + 0x10690be0), (0x0u));
  /* 10669a0e jmp 0x106699f2 */
  goto L_106699f2;
L_10669a10:;
  /* 10669a10 mov esp, ebp */
  ESP = (EBP);
  /* 10669a12 pop ebp */
  EBP = (pop32());
  /* 10669a13 ret  */
  ESPCHK(0x106699a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a20 @ 0x10669a20 (770 bytes, 175 insns) */
void f_10669a20(void) {
  FTRACE(0x10669a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10669a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10669a21 mov ebp, esp */
  EBP = (ESP);
  /* 10669a23 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669a29 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10669a2f push eax */
  push32((uint32_t)(EAX));
  /* 10669a30 mov ecx, dword ptr [0x10690b64] */
  ECX = (r32((uint32_t)(0x10690b64)));
  /* 10669a36 push ecx */
  push32((uint32_t)(ECX));
  /* 10669a37 call dword ptr [0x1069135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069135c))), 0x10669a3du);
  /* 10669a3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669a40 jne 0x10669c59 */
  if (!C.zf) goto L_10669c59;
  /* 10669a46 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10669a50 jmp 0x10669a61 */
  goto L_10669a61;
L_10669a52:;
  /* 10669a52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669a58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669a5b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10669a61:;
  /* 10669a61 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669a6b jae 0x10669a82 */
  if (!C.cf) goto L_10669a82;
  /* 10669a6d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669a73 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10669a79 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10669a80 jmp 0x10669a52 */
  goto L_10669a52;
L_10669a82:;
  /* 10669a82 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10669a89 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10669a8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10669a92 jmp 0x10669a9d */
  goto L_10669a9d;
L_10669a94:;
  /* 10669a94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10669a97 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669a9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10669a9d:;
  /* 10669a9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10669aa0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10669aa2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10669aa4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10669aa6 je 0x10669ae8 */
  if (C.zf) goto L_10669ae8;
  /* 10669aa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10669aab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10669aad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10669aaf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10669ab5 jmp 0x10669ac6 */
  goto L_10669ac6;
L_10669ab7:;
  /* 10669ab7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669abd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669ac0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10669ac6:;
  /* 10669ac6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10669ac9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10669acb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10669ace cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669ad4 ja 0x10669ae6 */
  if ((!C.cf&&!C.zf)) goto L_10669ae6;
  /* 10669ad6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669adc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10669ae4 jmp 0x10669ab7 */
  goto L_10669ab7;
L_10669ae6:;
  /* 10669ae6 jmp 0x10669a94 */
  goto L_10669a94;
L_10669ae8:;
  /* 10669ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10669aea mov eax, dword ptr [0x10690e04] */
  EAX = (r32((uint32_t)(0x10690e04)));
  /* 10669aef push eax */
  push32((uint32_t)(EAX));
  /* 10669af0 mov ecx, dword ptr [0x10690b64] */
  ECX = (r32((uint32_t)(0x10690b64)));
  /* 10669af6 push ecx */
  push32((uint32_t)(ECX));
  /* 10669af7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10669afd push edx */
  push32((uint32_t)(EDX));
  /* 10669afe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10669b03 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10669b09 push eax */
  push32((uint32_t)(EAX));
  /* 10669b0a push 1 */
  push32((uint32_t)(0x1u));
  /* 10669b0c call 0x1066b6d0 */
  push32(0x10669b11u); f_1066b6d0();
  /* 10669b11 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10669b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10669b16 mov ecx, dword ptr [0x10690b64] */
  ECX = (r32((uint32_t)(0x10690b64)));
  /* 10669b1c push ecx */
  push32((uint32_t)(ECX));
  /* 10669b1d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10669b22 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10669b28 push edx */
  push32((uint32_t)(EDX));
  /* 10669b29 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10669b2e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10669b34 push eax */
  push32((uint32_t)(EAX));
  /* 10669b35 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10669b3a mov ecx, dword ptr [0x10690e04] */
  ECX = (r32((uint32_t)(0x10690e04)));
  /* 10669b40 push ecx */
  push32((uint32_t)(ECX));
  /* 10669b41 call 0x1066b890 */
  push32(0x10669b46u); f_1066b890();
  /* 10669b46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10669b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10669b4b mov edx, dword ptr [0x10690b64] */
  EDX = (r32((uint32_t)(0x10690b64)));
  /* 10669b51 push edx */
  push32((uint32_t)(EDX));
  /* 10669b52 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10669b57 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10669b5d push eax */
  push32((uint32_t)(EAX));
  /* 10669b5e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10669b63 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10669b69 push ecx */
  push32((uint32_t)(ECX));
  /* 10669b6a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10669b6f mov edx, dword ptr [0x10690e04] */
  EDX = (r32((uint32_t)(0x10690e04)));
  /* 10669b75 push edx */
  push32((uint32_t)(EDX));
  /* 10669b76 call 0x1066b890 */
  push32(0x10669b7bu); f_1066b890();
  /* 10669b7b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10669b7e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10669b88 jmp 0x10669b99 */
  goto L_10669b99;
L_10669b8a:;
  /* 10669b8a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669b90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669b93 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10669b99:;
  /* 10669b99 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669ba3 jae 0x10669c54 */
  if (!C.cf) goto L_10669c54;
  /* 10669ba9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669baf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10669bb1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10669bb9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10669bbc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10669bbe je 0x10669bf6 */
  if (C.zf) goto L_10669bf6;
  /* 10669bc0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669bc6 mov cl, byte ptr [eax + 0x10690d01] */
  CL = (r8((uint32_t)(EAX + 0x10690d01)));
  /* 10669bcc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10669bcf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669bd5 mov byte ptr [edx + 0x10690d01], cl */
  w8((uint32_t)(EDX + 0x10690d01), (CL));
  /* 10669bdb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669be1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669be7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10669bee mov byte ptr [eax + 0x10690c00], dl */
  w8((uint32_t)(EAX + 0x10690c00), (DL));
  /* 10669bf4 jmp 0x10669c4f */
  goto L_10669c4f;
L_10669bf6:;
  /* 10669bf6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669bfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10669bfe mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10669c06 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10669c09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10669c0b je 0x10669c42 */
  if (C.zf) goto L_10669c42;
  /* 10669c0d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669c13 mov al, byte ptr [edx + 0x10690d01] */
  AL = (r8((uint32_t)(EDX + 0x10690d01)));
  /* 10669c19 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10669c1b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669c21 mov byte ptr [ecx + 0x10690d01], al */
  w8((uint32_t)(ECX + 0x10690d01), (AL));
  /* 10669c27 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669c2d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669c33 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10669c3a mov byte ptr [edx + 0x10690c00], cl */
  w8((uint32_t)(EDX + 0x10690c00), (CL));
  /* 10669c40 jmp 0x10669c4f */
  goto L_10669c4f;
L_10669c42:;
  /* 10669c42 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669c48 mov byte ptr [edx + 0x10690c00], 0 */
  w8((uint32_t)(EDX + 0x10690c00), (0x0u));
L_10669c4f:;
  /* 10669c4f jmp 0x10669b8a */
  goto L_10669b8a;
L_10669c54:;
  /* 10669c54 jmp 0x10669d1e */
  goto L_10669d1e;
L_10669c59:;
  /* 10669c59 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10669c63 jmp 0x10669c74 */
  goto L_10669c74;
L_10669c65:;
  /* 10669c65 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669c6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669c6e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10669c74:;
  /* 10669c74 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669c7e jae 0x10669d1e */
  if (!C.cf) goto L_10669d1e;
  /* 10669c84 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669c8b jb 0x10669cc8 */
  if (C.cf) goto L_10669cc8;
  /* 10669c8d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669c94 ja 0x10669cc8 */
  if ((!C.cf&&!C.zf)) goto L_10669cc8;
  /* 10669c96 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669c9c mov dl, byte ptr [ecx + 0x10690d01] */
  DL = (r8((uint32_t)(ECX + 0x10690d01)));
  /* 10669ca2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10669ca5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669cab mov byte ptr [eax + 0x10690d01], dl */
  w8((uint32_t)(EAX + 0x10690d01), (DL));
  /* 10669cb1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669cb7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669cba mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669cc0 mov byte ptr [edx + 0x10690c00], cl */
  w8((uint32_t)(EDX + 0x10690c00), (CL));
  /* 10669cc6 jmp 0x10669d19 */
  goto L_10669d19;
L_10669cc8:;
  /* 10669cc8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669ccf jb 0x10669d0c */
  if (C.cf) goto L_10669d0c;
  /* 10669cd1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669cd8 ja 0x10669d0c */
  if ((!C.cf&&!C.zf)) goto L_10669d0c;
  /* 10669cda mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669ce0 mov cl, byte ptr [eax + 0x10690d01] */
  CL = (r8((uint32_t)(EAX + 0x10690d01)));
  /* 10669ce6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10669ce9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669cef mov byte ptr [edx + 0x10690d01], cl */
  w8((uint32_t)(EDX + 0x10690d01), (CL));
  /* 10669cf5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669cfb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669cfe mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669d04 mov byte ptr [ecx + 0x10690c00], al */
  w8((uint32_t)(ECX + 0x10690c00), (AL));
  /* 10669d0a jmp 0x10669d19 */
  goto L_10669d19;
L_10669d0c:;
  /* 10669d0c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10669d12 mov byte ptr [edx + 0x10690c00], 0 */
  w8((uint32_t)(EDX + 0x10690c00), (0x0u));
L_10669d19:;
  /* 10669d19 jmp 0x10669c65 */
  goto L_10669c65;
L_10669d1e:;
  /* 10669d1e mov esp, ebp */
  ESP = (EBP);
  /* 10669d20 pop ebp */
  EBP = (pop32());
  /* 10669d21 ret  */
  ESPCHK(0x10669a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d30 @ 0x10669d30 (23 bytes, 9 insns) */
void f_10669d30(void) {
  FTRACE(0x10669d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10669d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10669d31 mov ebp, esp */
  EBP = (ESP);
  /* 10669d33 cmp dword ptr [0x10690bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669d3a je 0x10669d43 */
  if (C.zf) goto L_10669d43;
  /* 10669d3c mov eax, dword ptr [0x10690b64] */
  EAX = (r32((uint32_t)(0x10690b64)));
  /* 10669d41 jmp 0x10669d45 */
  goto L_10669d45;
L_10669d43:;
  /* 10669d43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10669d45:;
  /* 10669d45 pop ebp */
  EBP = (pop32());
  /* 10669d46 ret  */
  ESPCHK(0x10669d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d50 @ 0x10669d50 (34 bytes, 10 insns) */
void f_10669d50(void) {
  FTRACE(0x10669d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10669d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10669d51 mov ebp, esp */
  EBP = (ESP);
  /* 10669d53 cmp dword ptr [0x10690fb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690fb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669d5a jne 0x10669d70 */
  if (!C.zf) goto L_10669d70;
  /* 10669d5c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10669d5e call 0x10669570 */
  push32(0x10669d63u); f_10669570();
  /* 10669d63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10669d66 mov dword ptr [0x10690fb0], 1 */
  w32((uint32_t)(0x10690fb0), (0x1u));
L_10669d70:;
  /* 10669d70 pop ebp */
  EBP = (pop32());
  /* 10669d71 ret  */
  ESPCHK(0x10669d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d80 @ 0x10669d80 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10669d80(void) {
  FTRACE(0x10669d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10669d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10669d81 mov ebp, esp */
  EBP = (ESP);
  /* 10669d83 push edi */
  push32((uint32_t)(EDI));
  /* 10669d84 push esi */
  push32((uint32_t)(ESI));
  /* 10669d85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10669d88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10669d8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10669d8e mov eax, ecx */
  EAX = (ECX);
  /* 10669d90 mov edx, ecx */
  EDX = (ECX);
  /* 10669d92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669d94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669d96 jbe 0x10669da0 */
  if ((C.cf||C.zf)) goto L_10669da0;
  /* 10669d98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669d9a jb 0x10669f18 */
  if (C.cf) goto L_10669f18;
L_10669da0:;
  /* 10669da0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10669da6 jne 0x10669dbc */
  if (!C.zf) goto L_10669dbc;
  /* 10669da8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10669dab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10669dae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669db1 jb 0x10669ddc */
  if (C.cf) goto L_10669ddc;
  /* 10669db3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10669db5 jmp dword ptr [edx*4 + 0x10669ec8] */
  switch (EDX) {
    case 0: goto L_10669ed8;
    case 1: goto L_10669ee0;
    case 2: goto L_10669eec;
    case 3: goto L_10669f00;
    default: x86_unimpl("switch@0x10669db5 out of table"); return;
  }
L_10669dbc:;
  /* 10669dbc mov eax, edi */
  EAX = (EDI);
  /* 10669dbe mov edx, 3 */
  EDX = (0x3u);
  /* 10669dc3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669dc6 jb 0x10669dd4 */
  if (C.cf) goto L_10669dd4;
  /* 10669dc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10669dcb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10669dcd jmp dword ptr [eax*4 + 0x10669de0] */
  switch (EAX) {
    case 1: goto L_10669df0;
    case 2: goto L_10669e1c;
    case 3: goto L_10669e40;
    default: x86_unimpl("switch@0x10669dcd out of table"); return;
  }
L_10669dd4:;
  /* 10669dd4 jmp dword ptr [ecx*4 + 0x10669ed8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10669ed8)))); return;
  /* 10669ddb nop  */
  /* nop */
L_10669ddc:;
  /* 10669ddc jmp dword ptr [ecx*4 + 0x10669e5c] */
  switch (ECX) {
    case 0: goto L_10669ebf;
    case 1: goto L_10669eac;
    case 2: goto L_10669ea4;
    case 3: goto L_10669e9c;
    case 4: goto L_10669e94;
    case 5: goto L_10669e8c;
    case 6: goto L_10669e84;
    case 7: goto L_10669e7c;
    default: x86_unimpl("switch@0x10669ddc out of table"); return;
  }
  /* 10669de3 nop  */
  /* nop */
L_10669df0:;
  /* 10669df0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10669df2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10669df4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10669df6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10669df9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10669dfc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10669dff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10669e02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10669e05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10669e08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10669e0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669e0e jb 0x10669ddc */
  if (C.cf) goto L_10669ddc;
  /* 10669e10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10669e12 jmp dword ptr [edx*4 + 0x10669ec8] */
  switch (EDX) {
    case 0: goto L_10669ed8;
    case 1: goto L_10669ee0;
    case 2: goto L_10669eec;
    case 3: goto L_10669f00;
    default: x86_unimpl("switch@0x10669e12 out of table"); return;
  }
  /* 10669e19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10669e1c:;
  /* 10669e1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10669e1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10669e20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10669e22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10669e25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10669e28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10669e2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10669e2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10669e31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669e34 jb 0x10669ddc */
  if (C.cf) goto L_10669ddc;
  /* 10669e36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10669e38 jmp dword ptr [edx*4 + 0x10669ec8] */
  switch (EDX) {
    case 0: goto L_10669ed8;
    case 1: goto L_10669ee0;
    case 2: goto L_10669eec;
    case 3: goto L_10669f00;
    default: x86_unimpl("switch@0x10669e38 out of table"); return;
  }
  /* 10669e3f nop  */
  /* nop */
L_10669e40:;
  /* 10669e40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10669e42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10669e44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10669e46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10669e47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10669e4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10669e4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669e4e jb 0x10669ddc */
  if (C.cf) goto L_10669ddc;
  /* 10669e50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10669e52 jmp dword ptr [edx*4 + 0x10669ec8] */
  switch (EDX) {
    case 0: goto L_10669ed8;
    case 1: goto L_10669ee0;
    case 2: goto L_10669eec;
    case 3: goto L_10669f00;
    default: x86_unimpl("switch@0x10669e52 out of table"); return;
  }
  /* 10669e59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10669e7c:;
  /* 10669e7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10669e80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10669e84:;
  /* 10669e84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10669e88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10669e8c:;
  /* 10669e8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10669e90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10669e94:;
  /* 10669e94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10669e98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10669e9c:;
  /* 10669e9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10669ea0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10669ea4:;
  /* 10669ea4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10669ea8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10669eac:;
  /* 10669eac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10669eb0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10669eb4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10669ebb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10669ebd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10669ebf:;
  /* 10669ebf jmp dword ptr [edx*4 + 0x10669ec8] */
  switch (EDX) {
    case 0: goto L_10669ed8;
    case 1: goto L_10669ee0;
    case 2: goto L_10669eec;
    case 3: goto L_10669f00;
    default: x86_unimpl("switch@0x10669ebf out of table"); return;
  }
  /* 10669ec6 mov edi, edi */
  EDI = (EDI);
L_10669ed8:;
  /* 10669ed8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669edb pop esi */
  ESI = (pop32());
  /* 10669edc pop edi */
  EDI = (pop32());
  /* 10669edd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10669ede ret  */
  ESPCHK(0x10669d80u, _esp0);
  ESP += 4; return;
  /* 10669edf nop  */
  /* nop */
L_10669ee0:;
  /* 10669ee0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10669ee2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10669ee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669ee7 pop esi */
  ESI = (pop32());
  /* 10669ee8 pop edi */
  EDI = (pop32());
  /* 10669ee9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10669eea ret  */
  ESPCHK(0x10669d80u, _esp0);
  ESP += 4; return;
  /* 10669eeb nop  */
  /* nop */
L_10669eec:;
  /* 10669eec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10669eee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10669ef0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10669ef3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10669ef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669ef9 pop esi */
  ESI = (pop32());
  /* 10669efa pop edi */
  EDI = (pop32());
  /* 10669efb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10669efc ret  */
  ESPCHK(0x10669d80u, _esp0);
  ESP += 4; return;
  /* 10669efd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10669f00:;
  /* 10669f00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10669f02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10669f04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10669f07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10669f0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10669f0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10669f10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10669f13 pop esi */
  ESI = (pop32());
  /* 10669f14 pop edi */
  EDI = (pop32());
  /* 10669f15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10669f16 ret  */
  ESPCHK(0x10669d80u, _esp0);
  ESP += 4; return;
  /* 10669f17 nop  */
  /* nop */
L_10669f18:;
  /* 10669f18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10669f1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10669f20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10669f26 jne 0x10669f4c */
  if (!C.zf) goto L_10669f4c;
  /* 10669f28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10669f2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10669f2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669f31 jb 0x10669f40 */
  if (C.cf) goto L_10669f40;
  /* 10669f33 std  */
  C.df=1;
  /* 10669f34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10669f36 cld  */
  C.df=0;
  /* 10669f37 jmp dword ptr [edx*4 + 0x1066a060] */
  switch (EDX) {
    case 0: goto L_1066a070;
    case 1: goto L_1066a078;
    case 2: goto L_1066a088;
    case 3: goto L_1066a09c;
    default: x86_unimpl("switch@0x10669f37 out of table"); return;
  }
  /* 10669f3e mov edi, edi */
  EDI = (EDI);
L_10669f40:;
  /* 10669f40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10669f42 jmp dword ptr [ecx*4 + 0x1066a010] */
  switch (ECX) {
    case 0: goto L_1066a057;
    default: x86_unimpl("switch@0x10669f42 out of table"); return;
  }
  /* 10669f49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10669f4c:;
  /* 10669f4c mov eax, edi */
  EAX = (EDI);
  /* 10669f4e mov edx, 3 */
  EDX = (0x3u);
  /* 10669f53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669f56 jb 0x10669f64 */
  if (C.cf) goto L_10669f64;
  /* 10669f58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10669f5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669f5d jmp dword ptr [eax*4 + 0x10669f68] */
  switch (EAX) {
    case 1: goto L_10669f78;
    case 2: goto L_10669f98;
    case 3: goto L_10669fc0;
    default: x86_unimpl("switch@0x10669f5d out of table"); return;
  }
L_10669f64:;
  /* 10669f64 jmp dword ptr [ecx*4 + 0x1066a060] */
  switch (ECX) {
    case 0: goto L_1066a070;
    case 1: goto L_1066a078;
    case 2: goto L_1066a088;
    case 3: goto L_1066a09c;
    default: x86_unimpl("switch@0x10669f64 out of table"); return;
  }
  /* 10669f6b nop  */
  /* nop */
L_10669f78:;
  /* 10669f78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10669f7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10669f7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10669f80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10669f81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10669f84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10669f85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669f88 jb 0x10669f40 */
  if (C.cf) goto L_10669f40;
  /* 10669f8a std  */
  C.df=1;
  /* 10669f8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10669f8d cld  */
  C.df=0;
  /* 10669f8e jmp dword ptr [edx*4 + 0x1066a060] */
  switch (EDX) {
    case 0: goto L_1066a070;
    case 1: goto L_1066a078;
    case 2: goto L_1066a088;
    case 3: goto L_1066a09c;
    default: x86_unimpl("switch@0x10669f8e out of table"); return;
  }
  /* 10669f95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10669f98:;
  /* 10669f98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10669f9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10669f9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10669fa0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10669fa3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10669fa6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10669fa9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669fac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669faf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669fb2 jb 0x10669f40 */
  if (C.cf) goto L_10669f40;
  /* 10669fb4 std  */
  C.df=1;
  /* 10669fb5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10669fb7 cld  */
  C.df=0;
  /* 10669fb8 jmp dword ptr [edx*4 + 0x1066a060] */
  switch (EDX) {
    case 0: goto L_1066a070;
    case 1: goto L_1066a078;
    case 2: goto L_1066a088;
    case 3: goto L_1066a09c;
    default: x86_unimpl("switch@0x10669fb8 out of table"); return;
  }
  /* 10669fbf nop  */
  /* nop */
L_10669fc0:;
  /* 10669fc0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10669fc3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10669fc5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10669fc8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10669fcb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10669fce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10669fd1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10669fd4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10669fd7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669fda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10669fdd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10669fe0 jb 0x10669f40 */
  if (C.cf) goto L_10669f40;
  /* 10669fe6 std  */
  C.df=1;
  /* 10669fe7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10669fe9 cld  */
  C.df=0;
  /* 10669fea jmp dword ptr [edx*4 + 0x1066a060] */
  switch (EDX) {
    case 0: goto L_1066a070;
    case 1: goto L_1066a078;
    case 2: goto L_1066a088;
    case 3: goto L_1066a09c;
    default: x86_unimpl("switch@0x10669fea out of table"); return;
  }
  /* 10669ff1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10669ff4 adc al, 0xa0 */
  { uint32_t _a=(AL),_b=(0xa0u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10669ff6 adc byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10669ffa adc byte ptr [eax], ah */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10669ffe adc byte ptr [eax], ch */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1066a002 adc byte ptr [eax], dh */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1066a006 adc byte ptr [eax], bh */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1066a00a adc byte ptr [eax + 0x66], al */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x66))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + 0x66), (_r)); fl_add(_a,_b,_r,8); }
  /* 1066a014 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1066a018 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1066a01c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1066a020 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1066a024 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1066a028 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1066a02c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1066a030 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1066a034 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1066a038 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1066a03c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1066a040 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1066a044 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1066a048 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1066a04c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1066a053 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a055 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1066a057:;
  /* 1066a057 jmp dword ptr [edx*4 + 0x1066a060] */
  switch (EDX) {
    case 0: goto L_1066a070;
    case 1: goto L_1066a078;
    case 2: goto L_1066a088;
    case 3: goto L_1066a09c;
    default: x86_unimpl("switch@0x1066a057 out of table"); return;
  }
  /* 1066a05e mov edi, edi */
  EDI = (EDI);
L_1066a070:;
  /* 1066a070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066a073 pop esi */
  ESI = (pop32());
  /* 1066a074 pop edi */
  EDI = (pop32());
  /* 1066a075 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066a076 ret  */
  ESPCHK(0x10669d80u, _esp0);
  ESP += 4; return;
  /* 1066a077 nop  */
  /* nop */
L_1066a078:;
  /* 1066a078 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1066a07b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1066a07e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066a081 pop esi */
  ESI = (pop32());
  /* 1066a082 pop edi */
  EDI = (pop32());
  /* 1066a083 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066a084 ret  */
  ESPCHK(0x10669d80u, _esp0);
  ESP += 4; return;
  /* 1066a085 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1066a088:;
  /* 1066a088 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1066a08b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1066a08e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1066a091 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1066a094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066a097 pop esi */
  ESI = (pop32());
  /* 1066a098 pop edi */
  EDI = (pop32());
  /* 1066a099 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066a09a ret  */
  ESPCHK(0x10669d80u, _esp0);
  ESP += 4; return;
  /* 1066a09b nop  */
  /* nop */
L_1066a09c:;
  /* 1066a09c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1066a09f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1066a0a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1066a0a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1066a0a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1066a0ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1066a0ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066a0b1 pop esi */
  ESI = (pop32());
  /* 1066a0b2 pop edi */
  EDI = (pop32());
  /* 1066a0b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066a0b4 ret  */
  ESPCHK(0x10669d80u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1066a0c0 (104 bytes, 43 insns) */
void f_1066a0c0(void) {
  FTRACE(0x1066a0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066a0c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1066a0c1 push esi */
  push32((uint32_t)(ESI));
  /* 1066a0c2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1066a0c6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066a0c8 jne 0x1066a0e2 */
  if (!C.zf) goto L_1066a0e2;
  /* 1066a0ca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1066a0ce mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1066a0d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066a0d4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1066a0d6 mov ebx, eax */
  EBX = (EAX);
  /* 1066a0d8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1066a0dc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1066a0de mov edx, ebx */
  EDX = (EBX);
  /* 1066a0e0 jmp 0x1066a123 */
  goto L_1066a123;
L_1066a0e2:;
  /* 1066a0e2 mov ecx, eax */
  ECX = (EAX);
  /* 1066a0e4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1066a0e8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1066a0ec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1066a0f0:;
  /* 1066a0f0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1066a0f2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1066a0f4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1066a0f6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1066a0f8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066a0fa jne 0x1066a0f0 */
  if (!C.zf) goto L_1066a0f0;
  /* 1066a0fc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1066a0fe mov esi, eax */
  ESI = (EAX);
  /* 1066a100 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1066a104 mov ecx, eax */
  ECX = (EAX);
  /* 1066a106 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1066a10a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1066a10c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a10e jb 0x1066a11e */
  if (C.cf) goto L_1066a11e;
  /* 1066a110 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a114 ja 0x1066a11e */
  if ((!C.cf&&!C.zf)) goto L_1066a11e;
  /* 1066a116 jb 0x1066a11f */
  if (C.cf) goto L_1066a11f;
  /* 1066a118 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a11c jbe 0x1066a11f */
  if ((C.cf||C.zf)) goto L_1066a11f;
L_1066a11e:;
  /* 1066a11e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1066a11f:;
  /* 1066a11f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066a121 mov eax, esi */
  EAX = (ESI);
L_1066a123:;
  /* 1066a123 pop esi */
  ESI = (pop32());
  /* 1066a124 pop ebx */
  EBX = (pop32());
  /* 1066a125 ret 0x10 */
  ESPCHK(0x1066a0c0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1066a130 (117 bytes, 44 insns) */
void f_1066a130(void) {
  FTRACE(0x1066a130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066a130 push ebx */
  push32((uint32_t)(EBX));
  /* 1066a131 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1066a135 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066a137 jne 0x1066a151 */
  if (!C.zf) goto L_1066a151;
  /* 1066a139 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1066a13d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1066a141 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066a143 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1066a145 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1066a149 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1066a14b mov eax, edx */
  EAX = (EDX);
  /* 1066a14d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066a14f jmp 0x1066a1a1 */
  goto L_1066a1a1;
L_1066a151:;
  /* 1066a151 mov ecx, eax */
  ECX = (EAX);
  /* 1066a153 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1066a157 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1066a15b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1066a15f:;
  /* 1066a15f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1066a161 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1066a163 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1066a165 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1066a167 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066a169 jne 0x1066a15f */
  if (!C.zf) goto L_1066a15f;
  /* 1066a16b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1066a16d mov ecx, eax */
  ECX = (EAX);
  /* 1066a16f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1066a173 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1066a174 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1066a178 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a17a jb 0x1066a18a */
  if (C.cf) goto L_1066a18a;
  /* 1066a17c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a180 ja 0x1066a18a */
  if ((!C.cf&&!C.zf)) goto L_1066a18a;
  /* 1066a182 jb 0x1066a192 */
  if (C.cf) goto L_1066a192;
  /* 1066a184 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a188 jbe 0x1066a192 */
  if ((C.cf||C.zf)) goto L_1066a192;
L_1066a18a:;
  /* 1066a18a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a18e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1066a192:;
  /* 1066a192 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a196 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a19a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066a19c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066a19e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1066a1a1:;
  /* 1066a1a1 pop ebx */
  EBX = (pop32());
  /* 1066a1a2 ret 0x10 */
  ESPCHK(0x1066a130u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a1b0 @ 0x1066a1b0 (628 bytes, 214 insns) */
void f_1066a1b0(void) {
  FTRACE(0x1066a1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066a1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066a1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1066a1b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a1b6 push ebx */
  push32((uint32_t)(EBX));
  /* 1066a1b7 push esi */
  push32((uint32_t)(ESI));
  /* 1066a1b8 push edi */
  push32((uint32_t)(EDI));
L_1066a1b9:;
  /* 1066a1b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a1bd jne 0x1066a1dd */
  if (!C.zf) goto L_1066a1dd;
  /* 1066a1bf push 0x1068af60 */
  push32((uint32_t)(0x1068af60u));
  /* 1066a1c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066a1c6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1066a1c8 push 0x1068af54 */
  push32((uint32_t)(0x1068af54u));
  /* 1066a1cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1066a1cf call 0x10662560 */
  push32(0x1066a1d4u); f_10662560();
  /* 1066a1d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a1d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a1da jne 0x1066a1dd */
  if (!C.zf) goto L_1066a1dd;
  /* 1066a1dc int3  */
  x86_unimpl("int3 @ 0x1066a1dc");
L_1066a1dd:;
  /* 1066a1dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066a1df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a1e1 jne 0x1066a1b9 */
  if (!C.zf) goto L_1066a1b9;
  /* 1066a1e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066a1e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066a1e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a1ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1066a1ef mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1066a1f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a1f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066a1f8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1066a1fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066a200 je 0x1066a20f */
  if (C.zf) goto L_1066a20f;
  /* 1066a202 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a205 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1066a208 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1066a20b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066a20d je 0x1066a225 */
  if (C.zf) goto L_1066a225;
L_1066a20f:;
  /* 1066a20f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a212 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1066a215 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1066a217 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a21a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1066a21d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066a220 jmp 0x1066a41d */
  goto L_1066a41d;
L_1066a225:;
  /* 1066a225 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a228 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1066a22b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1066a22e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a230 je 0x1066a27c */
  if (C.zf) goto L_1066a27c;
  /* 1066a232 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a235 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1066a23c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a23f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1066a242 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1066a245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a247 je 0x1066a265 */
  if (C.zf) goto L_1066a265;
  /* 1066a249 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a24c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a24f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1066a252 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1066a254 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a257 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066a25a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1066a25d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a260 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1066a263 jmp 0x1066a27c */
  goto L_1066a27c;
L_1066a265:;
  /* 1066a265 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a268 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066a26b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1066a26e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a271 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1066a274 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066a277 jmp 0x1066a41d */
  goto L_1066a41d;
L_1066a27c:;
  /* 1066a27c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a27f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066a282 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1066a285 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a288 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1066a28b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a28e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066a291 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1066a294 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a297 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1066a29a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a29d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1066a2a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066a2ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a2ae mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1066a2b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a2b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1066a2b7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1066a2bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066a2bf jne 0x1066a2ef */
  if (!C.zf) goto L_1066a2ef;
  /* 1066a2c1 cmp dword ptr [ebp - 8], 0x1068e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1068e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a2c8 je 0x1066a2d3 */
  if (C.zf) goto L_1066a2d3;
  /* 1066a2ca cmp dword ptr [ebp - 8], 0x1068e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1068e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a2d1 jne 0x1066a2e3 */
  if (!C.zf) goto L_1066a2e3;
L_1066a2d3:;
  /* 1066a2d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066a2d6 push edx */
  push32((uint32_t)(EDX));
  /* 1066a2d7 call 0x1066c120 */
  push32(0x1066a2dcu); f_1066c120();
  /* 1066a2dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a2df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a2e1 jne 0x1066a2ef */
  if (!C.zf) goto L_1066a2ef;
L_1066a2e3:;
  /* 1066a2e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a2e6 push eax */
  push32((uint32_t)(EAX));
  /* 1066a2e7 call 0x1066c050 */
  push32(0x1066a2ecu); f_1066c050();
  /* 1066a2ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066a2ef:;
  /* 1066a2ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a2f2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066a2f5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1066a2fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066a2fd je 0x1066a3db */
  if (C.zf) goto L_1066a3db;
L_1066a303:;
  /* 1066a303 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a306 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a309 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1066a30b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a30e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066a310 jge 0x1066a333 */
  if ((C.sf==C.of)) goto L_1066a333;
  /* 1066a312 push 0x1068af14 */
  push32((uint32_t)(0x1068af14u));
  /* 1066a317 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066a319 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1066a31e push 0x1068af54 */
  push32((uint32_t)(0x1068af54u));
  /* 1066a323 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066a325 call 0x10662560 */
  push32(0x1066a32au); f_10662560();
  /* 1066a32a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a32d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a330 jne 0x1066a333 */
  if (!C.zf) goto L_1066a333;
  /* 1066a332 int3  */
  x86_unimpl("int3 @ 0x1066a332");
L_1066a333:;
  /* 1066a333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066a335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a337 jne 0x1066a303 */
  if (!C.zf) goto L_1066a303;
  /* 1066a339 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a33c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a33f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1066a341 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a344 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066a347 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a34a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1066a34d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a350 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a353 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1066a355 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a358 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1066a35b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a35e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a361 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1066a364 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a368 jle 0x1066a386 */
  if ((C.zf||C.sf!=C.of)) goto L_1066a386;
  /* 1066a36a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a36d push ecx */
  push32((uint32_t)(ECX));
  /* 1066a36e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a371 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1066a374 push eax */
  push32((uint32_t)(EAX));
  /* 1066a375 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066a378 push ecx */
  push32((uint32_t)(ECX));
  /* 1066a379 call 0x1066bd40 */
  push32(0x1066a37eu); f_1066bd40();
  /* 1066a37e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a381 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1066a384 jmp 0x1066a3ce */
  goto L_1066a3ce;
L_1066a386:;
  /* 1066a386 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a38a je 0x1066a3a9 */
  if (C.zf) goto L_1066a3a9;
  /* 1066a38c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066a38f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1066a392 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066a395 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1066a398 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066a39b mov ecx, dword ptr [edx*4 + 0x10690e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10690e60)));
  /* 1066a3a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a3a4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1066a3a7 jmp 0x1066a3b0 */
  goto L_1066a3b0;
L_1066a3a9:;
  /* 1066a3a9 mov dword ptr [ebp - 0x14], 0x1068da60 */
  w32((uint32_t)(EBP + -0x14), (0x1068da60u));
L_1066a3b0:;
  /* 1066a3b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066a3b3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1066a3b7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1066a3ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a3bc je 0x1066a3ce */
  if (C.zf) goto L_1066a3ce;
  /* 1066a3be push 2 */
  push32((uint32_t)(0x2u));
  /* 1066a3c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066a3c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066a3c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1066a3c6 call 0x1066bbf0 */
  push32(0x1066a3cbu); f_1066bbf0();
  /* 1066a3cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066a3ce:;
  /* 1066a3ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a3d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1066a3d4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1066a3d7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1066a3d9 jmp 0x1066a3f9 */
  goto L_1066a3f9;
L_1066a3db:;
  /* 1066a3db mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1066a3e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a3e5 push edx */
  push32((uint32_t)(EDX));
  /* 1066a3e6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1066a3e9 push eax */
  push32((uint32_t)(EAX));
  /* 1066a3ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066a3ed push ecx */
  push32((uint32_t)(ECX));
  /* 1066a3ee call 0x1066bd40 */
  push32(0x1066a3f3u); f_1066bd40();
  /* 1066a3f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a3f6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1066a3f9:;
  /* 1066a3f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066a3fc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a3ff je 0x1066a415 */
  if (C.zf) goto L_1066a415;
  /* 1066a401 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a404 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1066a407 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1066a40a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a40d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1066a410 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066a413 jmp 0x1066a41d */
  goto L_1066a41d;
L_1066a415:;
  /* 1066a415 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066a418 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1066a41d:;
  /* 1066a41d pop edi */
  EDI = (pop32());
  /* 1066a41e pop esi */
  ESI = (pop32());
  /* 1066a41f pop ebx */
  EBX = (pop32());
  /* 1066a420 mov esp, ebp */
  ESP = (EBP);
  /* 1066a422 pop ebp */
  EBP = (pop32());
  /* 1066a423 ret  */
  ESPCHK(0x1066a1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a430 @ 0x1066a430 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1066a430(void) {
  FTRACE(0x1066a430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066a430 push ebp */
  push32((uint32_t)(EBP));
  /* 1066a431 mov ebp, esp */
  EBP = (ESP);
  /* 1066a433 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a439 push ebx */
  push32((uint32_t)(EBX));
  /* 1066a43a push esi */
  push32((uint32_t)(ESI));
  /* 1066a43b push edi */
  push32((uint32_t)(EDI));
  /* 1066a43c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1066a443 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1066a44d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1066a454:;
  /* 1066a454 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066a457 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1066a459 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1066a45c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a460 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066a463 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a466 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1066a469 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066a46b je 0x1066b047 */
  if (C.zf) goto L_1066b047;
  /* 1066a471 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a478 jl 0x1066b047 */
  if ((C.sf!=C.of)) goto L_1066b047;
  /* 1066a47e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a482 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a485 jl 0x1066a4a6 */
  if ((C.sf!=C.of)) goto L_1066a4a6;
  /* 1066a487 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a48b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a48e jg 0x1066a4a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1066a4a6;
  /* 1066a490 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a494 movsx ecx, byte ptr [eax + 0x1068af4c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1068af4c))));
  /* 1066a49b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1066a49e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1066a4a4 jmp 0x1066a4b0 */
  goto L_1066a4b0;
L_1066a4a6:;
  /* 1066a4a6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1066a4b0:;
  /* 1066a4b0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1066a4b6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1066a4b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066a4bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066a4bf movsx edx, byte ptr [ecx + eax*8 + 0x1068af6c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1068af6c))));
  /* 1066a4c7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1066a4ca mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1066a4cd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066a4d0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1066a4d6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a4dd ja 0x1066b042 */
  if ((!C.cf&&!C.zf)) goto L_1066b042;
  /* 1066a4e3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1066a4e9 jmp dword ptr [ecx*4 + 0x1066b054] */
  switch (ECX) {
    case 0: goto L_1066a4f0;
    case 1: goto L_1066a58a;
    case 2: goto L_1066a5cc;
    case 3: goto L_1066a63b;
    case 4: goto L_1066a693;
    case 5: goto L_1066a6a2;
    case 6: goto L_1066a6ee;
    case 7: goto L_1066a781;
    case 8: goto L_1066a618;
    case 9: goto L_1066a623;
    case 10: goto L_1066a60e;
    case 11: goto L_1066a603;
    case 12: goto L_1066a62e;
    case 13: goto L_1066a636;
    default: x86_unimpl("switch@0x1066a4e9 out of table"); return;
  }
L_1066a4f0:;
  /* 1066a4f0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1066a4f7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066a4fa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1066a500 mov eax, dword ptr [0x1068dc98] */
  EAX = (r32((uint32_t)(0x1068dc98)));
  /* 1066a505 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066a507 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1066a50b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1066a511 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066a513 je 0x1066a56d */
  if (C.zf) goto L_1066a56d;
  /* 1066a515 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1066a51b push edx */
  push32((uint32_t)(EDX));
  /* 1066a51c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066a51f push eax */
  push32((uint32_t)(EAX));
  /* 1066a520 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a524 push ecx */
  push32((uint32_t)(ECX));
  /* 1066a525 call 0x1066b160 */
  push32(0x1066a52au); f_1066b160();
  /* 1066a52a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a52d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066a530 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1066a532 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1066a535 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066a538 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a53b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1066a53e:;
  /* 1066a53e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a542 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066a544 jne 0x1066a567 */
  if (!C.zf) goto L_1066a567;
  /* 1066a546 push 0x1068afec */
  push32((uint32_t)(0x1068afecu));
  /* 1066a54b push 0 */
  push32((uint32_t)(0x0u));
  /* 1066a54d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1066a552 push 0x1068afe0 */
  push32((uint32_t)(0x1068afe0u));
  /* 1066a557 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066a559 call 0x10662560 */
  push32(0x1066a55eu); f_10662560();
  /* 1066a55e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a561 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a564 jne 0x1066a567 */
  if (!C.zf) goto L_1066a567;
  /* 1066a566 int3  */
  x86_unimpl("int3 @ 0x1066a566");
L_1066a567:;
  /* 1066a567 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066a569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a56b jne 0x1066a53e */
  if (!C.zf) goto L_1066a53e;
L_1066a56d:;
  /* 1066a56d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1066a573 push ecx */
  push32((uint32_t)(ECX));
  /* 1066a574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066a577 push edx */
  push32((uint32_t)(EDX));
  /* 1066a578 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a57c push eax */
  push32((uint32_t)(EAX));
  /* 1066a57d call 0x1066b160 */
  push32(0x1066a582u); f_1066b160();
  /* 1066a582 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a585 jmp 0x1066b042 */
  goto L_1066b042;
L_1066a58a:;
  /* 1066a58a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1066a591 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066a594 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1066a59a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1066a5a0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1066a5a6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1066a5ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1066a5af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066a5b6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1066a5c0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1066a5c7 jmp 0x1066b042 */
  goto L_1066b042;
L_1066a5cc:;
  /* 1066a5cc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a5d0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1066a5d6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1066a5dc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a5df mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1066a5e5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a5ec ja 0x1066a636 */
  if ((!C.cf&&!C.zf)) goto L_1066a636;
  /* 1066a5ee mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1066a5f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066a5f6 mov al, byte ptr [ecx + 0x1066b08c] */
  AL = (r8((uint32_t)(ECX + 0x1066b08c)));
  /* 1066a5fc jmp dword ptr [eax*4 + 0x1066b074] */
  switch (EAX) {
    case 0: goto L_1066a618;
    case 1: goto L_1066a623;
    case 2: goto L_1066a60e;
    case 3: goto L_1066a603;
    case 4: goto L_1066a62e;
    case 5: goto L_1066a636;
    default: x86_unimpl("switch@0x1066a5fc out of table"); return;
  }
L_1066a603:;
  /* 1066a603 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a606 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1066a609 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066a60c jmp 0x1066a636 */
  goto L_1066a636;
L_1066a60e:;
  /* 1066a60e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a611 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1066a613 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066a616 jmp 0x1066a636 */
  goto L_1066a636;
L_1066a618:;
  /* 1066a618 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a61b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1066a61e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066a621 jmp 0x1066a636 */
  goto L_1066a636;
L_1066a623:;
  /* 1066a623 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a626 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1066a629 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066a62c jmp 0x1066a636 */
  goto L_1066a636;
L_1066a62e:;
  /* 1066a62e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a631 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1066a633 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066a636:;
  /* 1066a636 jmp 0x1066b042 */
  goto L_1066b042;
L_1066a63b:;
  /* 1066a63b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a63f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a642 jne 0x1066a677 */
  if (!C.zf) goto L_1066a677;
  /* 1066a644 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1066a647 push edx */
  push32((uint32_t)(EDX));
  /* 1066a648 call 0x1066b270 */
  push32(0x1066a64du); f_1066b270();
  /* 1066a64d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a650 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1066a656 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a65d jge 0x1066a675 */
  if ((C.sf==C.of)) goto L_1066a675;
  /* 1066a65f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a662 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1066a664 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066a667 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1066a66d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066a66f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1066a675:;
  /* 1066a675 jmp 0x1066a68e */
  goto L_1066a68e;
L_1066a677:;
  /* 1066a677 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1066a67d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066a680 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a684 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1066a688 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1066a68e:;
  /* 1066a68e jmp 0x1066b042 */
  goto L_1066b042;
L_1066a693:;
  /* 1066a693 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1066a69d jmp 0x1066b042 */
  goto L_1066b042;
L_1066a6a2:;
  /* 1066a6a2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a6a6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a6a9 jne 0x1066a6d2 */
  if (!C.zf) goto L_1066a6d2;
  /* 1066a6ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1066a6ae push eax */
  push32((uint32_t)(EAX));
  /* 1066a6af call 0x1066b270 */
  push32(0x1066a6b4u); f_1066b270();
  /* 1066a6b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a6b7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1066a6bd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a6c4 jge 0x1066a6d0 */
  if ((C.sf==C.of)) goto L_1066a6d0;
  /* 1066a6c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1066a6d0:;
  /* 1066a6d0 jmp 0x1066a6e9 */
  goto L_1066a6e9;
L_1066a6d2:;
  /* 1066a6d2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1066a6d8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066a6db movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a6df lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1066a6e3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1066a6e9:;
  /* 1066a6e9 jmp 0x1066b042 */
  goto L_1066b042;
L_1066a6ee:;
  /* 1066a6ee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a6f2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1066a6f8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1066a6fe sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a701 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1066a707 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a70e ja 0x1066a77c */
  if ((!C.cf&&!C.zf)) goto L_1066a77c;
  /* 1066a710 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1066a716 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066a718 mov al, byte ptr [ecx + 0x1066b0b1] */
  AL = (r8((uint32_t)(ECX + 0x1066b0b1)));
  /* 1066a71e jmp dword ptr [eax*4 + 0x1066b09d] */
  switch (EAX) {
    case 0: goto L_1066a730;
    case 1: goto L_1066a769;
    case 2: goto L_1066a725;
    case 3: goto L_1066a773;
    case 4: goto L_1066a77c;
    default: x86_unimpl("switch@0x1066a71e out of table"); return;
  }
L_1066a725:;
  /* 1066a725 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a728 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1066a72b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066a72e jmp 0x1066a77c */
  goto L_1066a77c;
L_1066a730:;
  /* 1066a730 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066a733 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066a736 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a739 jne 0x1066a75b */
  if (!C.zf) goto L_1066a75b;
  /* 1066a73b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066a73e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1066a742 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a745 jne 0x1066a75b */
  if (!C.zf) goto L_1066a75b;
  /* 1066a747 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066a74a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a74d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1066a750 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a753 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1066a756 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066a759 jmp 0x1066a767 */
  goto L_1066a767;
L_1066a75b:;
  /* 1066a75b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1066a762 jmp 0x1066a4f0 */
  goto L_1066a4f0;
L_1066a767:;
  /* 1066a767 jmp 0x1066a77c */
  goto L_1066a77c;
L_1066a769:;
  /* 1066a769 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a76c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1066a76e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066a771 jmp 0x1066a77c */
  goto L_1066a77c;
L_1066a773:;
  /* 1066a773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a776 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1066a779 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1066a77c:;
  /* 1066a77c jmp 0x1066b042 */
  goto L_1066b042;
L_1066a781:;
  /* 1066a781 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066a785 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1066a78b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1066a791 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a794 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1066a79a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a7a1 ja 0x1066ae67 */
  if ((!C.cf&&!C.zf)) goto L_1066ae67;
  /* 1066a7a7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1066a7ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066a7af mov cl, byte ptr [edx + 0x1066b11c] */
  CL = (r8((uint32_t)(EDX + 0x1066b11c)));
  /* 1066a7b5 jmp dword ptr [ecx*4 + 0x1066b0e0] */
  switch (ECX) {
    case 0: goto L_1066a7bc;
    case 1: goto L_1066aa50;
    case 2: goto L_1066a8e0;
    case 3: goto L_1066ab89;
    case 4: goto L_1066a84b;
    case 5: goto L_1066a7d1;
    case 6: goto L_1066ab5b;
    case 7: goto L_1066aa60;
    case 8: goto L_1066aa05;
    case 9: goto L_1066abd5;
    case 10: goto L_1066ab7f;
    case 11: goto L_1066a8f6;
    case 12: goto L_1066ab73;
    case 13: goto L_1066ab95;
    case 14: goto L_1066ae67;
    default: x86_unimpl("switch@0x1066a7b5 out of table"); return;
  }
L_1066a7bc:;
  /* 1066a7bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a7bf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1066a7c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a7c6 jne 0x1066a7d1 */
  if (!C.zf) goto L_1066a7d1;
  /* 1066a7c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a7cb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1066a7ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1066a7d1:;
  /* 1066a7d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a7d4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1066a7da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066a7dc je 0x1066a817 */
  if (C.zf) goto L_1066a817;
  /* 1066a7de lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1066a7e1 push eax */
  push32((uint32_t)(EAX));
  /* 1066a7e2 call 0x1066b2b0 */
  push32(0x1066a7e7u); f_1066b2b0();
  /* 1066a7e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a7ea mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1066a7ee mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1066a7f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1066a7f3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1066a7f9 push edx */
  push32((uint32_t)(EDX));
  /* 1066a7fa call 0x1066c390 */
  push32(0x1066a7ffu); f_1066c390();
  /* 1066a7ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a802 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1066a805 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a809 jge 0x1066a815 */
  if ((C.sf==C.of)) goto L_1066a815;
  /* 1066a80b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1066a815:;
  /* 1066a815 jmp 0x1066a83d */
  goto L_1066a83d;
L_1066a817:;
  /* 1066a817 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1066a81a push eax */
  push32((uint32_t)(EAX));
  /* 1066a81b call 0x1066b270 */
  push32(0x1066a820u); f_1066b270();
  /* 1066a820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a823 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1066a82a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1066a830 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1066a836 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1066a83d:;
  /* 1066a83d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1066a843 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1066a846 jmp 0x1066ae67 */
  goto L_1066ae67;
L_1066a84b:;
  /* 1066a84b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1066a84e push eax */
  push32((uint32_t)(EAX));
  /* 1066a84f call 0x1066b270 */
  push32(0x1066a854u); f_1066b270();
  /* 1066a854 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a857 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1066a85d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a864 je 0x1066a872 */
  if (C.zf) goto L_1066a872;
  /* 1066a866 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1066a86c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a870 jne 0x1066a88c */
  if (!C.zf) goto L_1066a88c;
L_1066a872:;
  /* 1066a872 mov edx, dword ptr [0x1068dfb0] */
  EDX = (r32((uint32_t)(0x1068dfb0)));
  /* 1066a878 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1066a87b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066a87e push eax */
  push32((uint32_t)(EAX));
  /* 1066a87f call 0x106662d0 */
  push32(0x1066a884u); f_106662d0();
  /* 1066a884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a887 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1066a88a jmp 0x1066a8db */
  goto L_1066a8db;
L_1066a88c:;
  /* 1066a88c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a88f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1066a895 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066a897 je 0x1066a8bc */
  if (C.zf) goto L_1066a8bc;
  /* 1066a899 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1066a89f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1066a8a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1066a8a5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1066a8ab movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1066a8ae shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1066a8b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1066a8b3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1066a8ba jmp 0x1066a8db */
  goto L_1066a8db;
L_1066a8bc:;
  /* 1066a8bc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1066a8c3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1066a8c9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1066a8cc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1066a8cf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1066a8d5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1066a8d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1066a8db:;
  /* 1066a8db jmp 0x1066ae67 */
  goto L_1066ae67;
L_1066a8e0:;
  /* 1066a8e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a8e3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1066a8e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066a8eb jne 0x1066a8f6 */
  if (!C.zf) goto L_1066a8f6;
  /* 1066a8ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a8f0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1066a8f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1066a8f6:;
  /* 1066a8f6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a8fd jne 0x1066a90b */
  if (!C.zf) goto L_1066a90b;
  /* 1066a8ff mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1066a909 jmp 0x1066a917 */
  goto L_1066a917;
L_1066a90b:;
  /* 1066a90b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1066a911 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1066a917:;
  /* 1066a917 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1066a91d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1066a923 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1066a926 push edx */
  push32((uint32_t)(EDX));
  /* 1066a927 call 0x1066b270 */
  push32(0x1066a92cu); f_1066b270();
  /* 1066a92c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a92f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1066a932 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066a935 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1066a93a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a93c je 0x1066a9a6 */
  if (C.zf) goto L_1066a9a6;
  /* 1066a93e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a942 jne 0x1066a94d */
  if (!C.zf) goto L_1066a94d;
  /* 1066a944 mov ecx, dword ptr [0x1068dfb4] */
  ECX = (r32((uint32_t)(0x1068dfb4)));
  /* 1066a94a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1066a94d:;
  /* 1066a94d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1066a954 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066a957 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1066a95d:;
  /* 1066a95d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1066a963 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1066a969 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a96c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1066a972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a974 je 0x1066a996 */
  if (C.zf) goto L_1066a996;
  /* 1066a976 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1066a97c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066a97e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1066a981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066a983 je 0x1066a996 */
  if (C.zf) goto L_1066a996;
  /* 1066a985 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1066a98b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a98e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1066a994 jmp 0x1066a95d */
  goto L_1066a95d;
L_1066a996:;
  /* 1066a996 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1066a99c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a99f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1066a9a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1066a9a4 jmp 0x1066aa00 */
  goto L_1066aa00;
L_1066a9a6:;
  /* 1066a9a6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066a9aa jne 0x1066a9b4 */
  if (!C.zf) goto L_1066a9b4;
  /* 1066a9ac mov eax, dword ptr [0x1068dfb0] */
  EAX = (r32((uint32_t)(0x1068dfb0)));
  /* 1066a9b1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1066a9b4:;
  /* 1066a9b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066a9b7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1066a9bd:;
  /* 1066a9bd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1066a9c3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1066a9c9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a9cc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1066a9d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066a9d4 je 0x1066a9f4 */
  if (C.zf) goto L_1066a9f4;
  /* 1066a9d6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1066a9dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066a9df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066a9e1 je 0x1066a9f4 */
  if (C.zf) goto L_1066a9f4;
  /* 1066a9e3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1066a9e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066a9ec mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1066a9f2 jmp 0x1066a9bd */
  goto L_1066a9bd;
L_1066a9f4:;
  /* 1066a9f4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1066a9fa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066a9fd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1066aa00:;
  /* 1066aa00 jmp 0x1066ae67 */
  goto L_1066ae67;
L_1066aa05:;
  /* 1066aa05 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1066aa08 push edx */
  push32((uint32_t)(EDX));
  /* 1066aa09 call 0x1066b270 */
  push32(0x1066aa0eu); f_1066b270();
  /* 1066aa0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066aa11 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1066aa17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066aa1a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1066aa1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066aa1f je 0x1066aa33 */
  if (C.zf) goto L_1066aa33;
  /* 1066aa21 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1066aa27 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1066aa2e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1066aa31 jmp 0x1066aa41 */
  goto L_1066aa41;
L_1066aa33:;
  /* 1066aa33 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1066aa39 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1066aa3f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1066aa41:;
  /* 1066aa41 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1066aa4b jmp 0x1066ae67 */
  goto L_1066ae67;
L_1066aa50:;
  /* 1066aa50 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1066aa57 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1066aa5a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1066aa5d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1066aa60:;
  /* 1066aa60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066aa63 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1066aa65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066aa68 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1066aa6e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1066aa71 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066aa78 jge 0x1066aa86 */
  if ((C.sf==C.of)) goto L_1066aa86;
  /* 1066aa7a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1066aa84 jmp 0x1066aaa2 */
  goto L_1066aaa2;
L_1066aa86:;
  /* 1066aa86 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066aa8d jne 0x1066aaa2 */
  if (!C.zf) goto L_1066aaa2;
  /* 1066aa8f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066aa93 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066aa96 jne 0x1066aaa2 */
  if (!C.zf) goto L_1066aaa2;
  /* 1066aa98 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1066aaa2:;
  /* 1066aaa2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066aaa5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066aaa8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1066aaab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066aaae sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066aab1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1066aab3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1066aab6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1066aabc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1066aac2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066aac5 push ecx */
  push32((uint32_t)(ECX));
  /* 1066aac6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1066aacc push edx */
  push32((uint32_t)(EDX));
  /* 1066aacd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066aad1 push eax */
  push32((uint32_t)(EAX));
  /* 1066aad2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066aad5 push ecx */
  push32((uint32_t)(ECX));
  /* 1066aad6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1066aadc push edx */
  push32((uint32_t)(EDX));
  /* 1066aadd call dword ptr [0x1068e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068e3a0))), 0x1066aae3u);
  /* 1066aae3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066aae6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066aae9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1066aaee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066aaf0 je 0x1066ab08 */
  if (C.zf) goto L_1066ab08;
  /* 1066aaf2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066aaf9 jne 0x1066ab08 */
  if (!C.zf) goto L_1066ab08;
  /* 1066aafb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066aafe push ecx */
  push32((uint32_t)(ECX));
  /* 1066aaff call dword ptr [0x1068e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068e3ac))), 0x1066ab05u);
  /* 1066ab05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066ab08:;
  /* 1066ab08 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1066ab0c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ab0f jne 0x1066ab2a */
  if (!C.zf) goto L_1066ab2a;
  /* 1066ab11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ab14 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1066ab19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ab1b jne 0x1066ab2a */
  if (!C.zf) goto L_1066ab2a;
  /* 1066ab1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ab20 push ecx */
  push32((uint32_t)(ECX));
  /* 1066ab21 call dword ptr [0x1068e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068e3a4))), 0x1066ab27u);
  /* 1066ab27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066ab2a:;
  /* 1066ab2a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ab2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1066ab30 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ab33 jne 0x1066ab47 */
  if (!C.zf) goto L_1066ab47;
  /* 1066ab35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ab38 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1066ab3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066ab3e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ab41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ab44 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1066ab47:;
  /* 1066ab47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ab4a push eax */
  push32((uint32_t)(EAX));
  /* 1066ab4b call 0x106662d0 */
  push32(0x1066ab50u); f_106662d0();
  /* 1066ab50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ab53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1066ab56 jmp 0x1066ae67 */
  goto L_1066ae67;
L_1066ab5b:;
  /* 1066ab5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ab5e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1066ab61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066ab64 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1066ab6e jmp 0x1066abf5 */
  goto L_1066abf5;
L_1066ab73:;
  /* 1066ab73 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1066ab7d jmp 0x1066abf5 */
  goto L_1066abf5;
L_1066ab7f:;
  /* 1066ab7f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1066ab89:;
  /* 1066ab89 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1066ab93 jmp 0x1066ab9f */
  goto L_1066ab9f;
L_1066ab95:;
  /* 1066ab95 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1066ab9f:;
  /* 1066ab9f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1066aba9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066abac and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1066abb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066abb4 je 0x1066abd3 */
  if (C.zf) goto L_1066abd3;
  /* 1066abb6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1066abbd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1066abc3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066abc6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1066abcc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1066abd3:;
  /* 1066abd3 jmp 0x1066abf5 */
  goto L_1066abf5;
L_1066abd5:;
  /* 1066abd5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1066abdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066abe2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1066abe8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066abea je 0x1066abf5 */
  if (C.zf) goto L_1066abf5;
  /* 1066abec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066abef or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1066abf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1066abf5:;
  /* 1066abf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066abf8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1066abfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066abff je 0x1066ac1e */
  if (C.zf) goto L_1066ac1e;
  /* 1066ac01 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1066ac04 push ecx */
  push32((uint32_t)(ECX));
  /* 1066ac05 call 0x1066b290 */
  push32(0x1066ac0au); f_1066b290();
  /* 1066ac0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ac0d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1066ac13 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1066ac19 jmp 0x1066acaf */
  goto L_1066acaf;
L_1066ac1e:;
  /* 1066ac1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ac21 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1066ac24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066ac26 je 0x1066ac70 */
  if (C.zf) goto L_1066ac70;
  /* 1066ac28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ac2b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1066ac2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ac30 je 0x1066ac50 */
  if (C.zf) goto L_1066ac50;
  /* 1066ac32 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1066ac35 push ecx */
  push32((uint32_t)(ECX));
  /* 1066ac36 call 0x1066b270 */
  push32(0x1066ac3bu); f_1066b270();
  /* 1066ac3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ac3e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1066ac41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1066ac42 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1066ac48 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1066ac4e jmp 0x1066ac6e */
  goto L_1066ac6e;
L_1066ac50:;
  /* 1066ac50 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1066ac53 push edx */
  push32((uint32_t)(EDX));
  /* 1066ac54 call 0x1066b270 */
  push32(0x1066ac59u); f_1066b270();
  /* 1066ac59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ac5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066ac61 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1066ac62 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1066ac68 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1066ac6e:;
  /* 1066ac6e jmp 0x1066acaf */
  goto L_1066acaf;
L_1066ac70:;
  /* 1066ac70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ac73 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1066ac76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ac78 je 0x1066ac95 */
  if (C.zf) goto L_1066ac95;
  /* 1066ac7a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1066ac7d push ecx */
  push32((uint32_t)(ECX));
  /* 1066ac7e call 0x1066b270 */
  push32(0x1066ac83u); f_1066b270();
  /* 1066ac83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ac86 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1066ac87 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1066ac8d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1066ac93 jmp 0x1066acaf */
  goto L_1066acaf;
L_1066ac95:;
  /* 1066ac95 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1066ac98 push edx */
  push32((uint32_t)(EDX));
  /* 1066ac99 call 0x1066b270 */
  push32(0x1066ac9eu); f_1066b270();
  /* 1066ac9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066aca1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066aca3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1066aca9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1066acaf:;
  /* 1066acaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066acb2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1066acb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066acb7 je 0x1066acf7 */
  if (C.zf) goto L_1066acf7;
  /* 1066acb9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066acc0 jg 0x1066acf7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1066acf7;
  /* 1066acc2 jl 0x1066accd */
  if ((C.sf!=C.of)) goto L_1066accd;
  /* 1066acc4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066accb jae 0x1066acf7 */
  if (!C.cf) goto L_1066acf7;
L_1066accd:;
  /* 1066accd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1066acd3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066acd5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1066acdb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066acde neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066ace0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1066ace6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1066acec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066acef or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1066acf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066acf5 jmp 0x1066ad0f */
  goto L_1066ad0f;
L_1066acf7:;
  /* 1066acf7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1066acfd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1066ad03 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1066ad09 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1066ad0f:;
  /* 1066ad0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ad12 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1066ad18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066ad1a jne 0x1066ad37 */
  if (!C.zf) goto L_1066ad37;
  /* 1066ad1c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1066ad22 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1066ad28 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1066ad2b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1066ad31 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1066ad37:;
  /* 1066ad37 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ad3e jge 0x1066ad4c */
  if ((C.sf==C.of)) goto L_1066ad4c;
  /* 1066ad40 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1066ad4a jmp 0x1066ad55 */
  goto L_1066ad55;
L_1066ad4c:;
  /* 1066ad4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ad4f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1066ad52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1066ad55:;
  /* 1066ad55 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1066ad5b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1066ad61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ad63 jne 0x1066ad6c */
  if (!C.zf) goto L_1066ad6c;
  /* 1066ad65 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1066ad6c:;
  /* 1066ad6c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1066ad6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1066ad72:;
  /* 1066ad72 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1066ad78 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1066ad7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ad81 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1066ad87 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066ad89 jg 0x1066ad9f */
  if ((!C.zf&&C.sf==C.of)) goto L_1066ad9f;
  /* 1066ad8b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1066ad91 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1066ad97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066ad99 je 0x1066ae20 */
  if (C.zf) goto L_1066ae20;
L_1066ad9f:;
  /* 1066ad9f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1066ada5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1066ada6 push edx */
  push32((uint32_t)(EDX));
  /* 1066ada7 push eax */
  push32((uint32_t)(EAX));
  /* 1066ada8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1066adae push edx */
  push32((uint32_t)(EDX));
  /* 1066adaf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1066adb5 push eax */
  push32((uint32_t)(EAX));
  /* 1066adb6 call 0x1066a130 */
  push32(0x1066adbbu); f_1066a130();
  /* 1066adbb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066adbe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1066adc4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1066adca cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1066adcb push edx */
  push32((uint32_t)(EDX));
  /* 1066adcc push eax */
  push32((uint32_t)(EAX));
  /* 1066adcd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1066add3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066add4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1066adda push edx */
  push32((uint32_t)(EDX));
  /* 1066addb call 0x1066a0c0 */
  push32(0x1066ade0u); f_1066a0c0();
  /* 1066ade0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1066ade6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1066adec cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066adf3 jle 0x1066ae07 */
  if ((C.zf||C.sf!=C.of)) goto L_1066ae07;
  /* 1066adf5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1066adfb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ae01 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1066ae07:;
  /* 1066ae07 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ae0a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1066ae10 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1066ae12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ae15 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ae18 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1066ae1b jmp 0x1066ad72 */
  goto L_1066ad72;
L_1066ae20:;
  /* 1066ae20 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1066ae23 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ae26 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1066ae29 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ae2c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ae2f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1066ae32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ae35 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1066ae3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ae3c je 0x1066ae67 */
  if (C.zf) goto L_1066ae67;
  /* 1066ae3e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ae41 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066ae44 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ae47 jne 0x1066ae4f */
  if (!C.zf) goto L_1066ae4f;
  /* 1066ae49 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ae4d jne 0x1066ae67 */
  if (!C.zf) goto L_1066ae67;
L_1066ae4f:;
  /* 1066ae4f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ae52 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ae55 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1066ae58 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ae5b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1066ae5e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066ae61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ae64 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1066ae67:;
  /* 1066ae67 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ae6e jne 0x1066b042 */
  if (!C.zf) goto L_1066b042;
  /* 1066ae74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ae77 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1066ae7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ae7c je 0x1066aecd */
  if (C.zf) goto L_1066aecd;
  /* 1066ae7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ae81 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1066ae87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066ae89 je 0x1066ae9b */
  if (C.zf) goto L_1066ae9b;
  /* 1066ae8b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1066ae92 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1066ae99 jmp 0x1066aecd */
  goto L_1066aecd;
L_1066ae9b:;
  /* 1066ae9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ae9e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1066aea1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066aea3 je 0x1066aeb5 */
  if (C.zf) goto L_1066aeb5;
  /* 1066aea5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1066aeac mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1066aeb3 jmp 0x1066aecd */
  goto L_1066aecd;
L_1066aeb5:;
  /* 1066aeb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066aeb8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1066aebb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066aebd je 0x1066aecd */
  if (C.zf) goto L_1066aecd;
  /* 1066aebf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1066aec6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1066aecd:;
  /* 1066aecd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1066aed3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066aed6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066aed9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1066aedf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066aee2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1066aee5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066aee7 jne 0x1066af05 */
  if (!C.zf) goto L_1066af05;
  /* 1066aee9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1066aeef push eax */
  push32((uint32_t)(EAX));
  /* 1066aef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066aef3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066aef4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1066aefa push edx */
  push32((uint32_t)(EDX));
  /* 1066aefb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1066aefd call 0x1066b1e0 */
  push32(0x1066af02u); f_1066b1e0();
  /* 1066af02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066af05:;
  /* 1066af05 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1066af0b push eax */
  push32((uint32_t)(EAX));
  /* 1066af0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066af0f push ecx */
  push32((uint32_t)(ECX));
  /* 1066af10 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066af13 push edx */
  push32((uint32_t)(EDX));
  /* 1066af14 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1066af1a push eax */
  push32((uint32_t)(EAX));
  /* 1066af1b call 0x1066b220 */
  push32(0x1066af20u); f_1066b220();
  /* 1066af20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066af23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066af26 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1066af29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066af2b je 0x1066af53 */
  if (C.zf) goto L_1066af53;
  /* 1066af2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066af30 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1066af33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066af35 jne 0x1066af53 */
  if (!C.zf) goto L_1066af53;
  /* 1066af37 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1066af3d push eax */
  push32((uint32_t)(EAX));
  /* 1066af3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066af41 push ecx */
  push32((uint32_t)(ECX));
  /* 1066af42 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1066af48 push edx */
  push32((uint32_t)(EDX));
  /* 1066af49 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1066af4b call 0x1066b1e0 */
  push32(0x1066af50u); f_1066b1e0();
  /* 1066af50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066af53:;
  /* 1066af53 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066af57 je 0x1066b001 */
  if (C.zf) goto L_1066b001;
  /* 1066af5d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066af61 jle 0x1066b001 */
  if ((C.zf||C.sf!=C.of)) goto L_1066b001;
  /* 1066af67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066af6a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1066af70 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066af73 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1066af79:;
  /* 1066af79 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1066af7f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1066af85 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066af88 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1066af8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066af90 je 0x1066afff */
  if (C.zf) goto L_1066afff;
  /* 1066af92 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1066af98 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1066af9b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1066afa2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1066afa9 push eax */
  push32((uint32_t)(EAX));
  /* 1066afaa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1066afb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1066afb1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1066afb7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066afba mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1066afc0 call 0x1066c390 */
  push32(0x1066afc5u); f_1066c390();
  /* 1066afc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066afc8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1066afce cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066afd5 jg 0x1066afd9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1066afd9;
  /* 1066afd7 jmp 0x1066afff */
  goto L_1066afff;
L_1066afd9:;
  /* 1066afd9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1066afdf push eax */
  push32((uint32_t)(EAX));
  /* 1066afe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066afe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066afe4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1066afea push edx */
  push32((uint32_t)(EDX));
  /* 1066afeb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1066aff1 push eax */
  push32((uint32_t)(EAX));
  /* 1066aff2 call 0x1066b220 */
  push32(0x1066aff7u); f_1066b220();
  /* 1066aff7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066affa jmp 0x1066af79 */
  goto L_1066af79;
L_1066afff:;
  /* 1066afff jmp 0x1066b01c */
  goto L_1066b01c;
L_1066b001:;
  /* 1066b001 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1066b007 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b008 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b00b push edx */
  push32((uint32_t)(EDX));
  /* 1066b00c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066b00f push eax */
  push32((uint32_t)(EAX));
  /* 1066b010 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066b013 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b014 call 0x1066b220 */
  push32(0x1066b019u); f_1066b220();
  /* 1066b019 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066b01c:;
  /* 1066b01c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066b01f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1066b022 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066b024 je 0x1066b042 */
  if (C.zf) goto L_1066b042;
  /* 1066b026 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1066b02c push eax */
  push32((uint32_t)(EAX));
  /* 1066b02d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b030 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b031 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1066b037 push edx */
  push32((uint32_t)(EDX));
  /* 1066b038 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1066b03a call 0x1066b1e0 */
  push32(0x1066b03fu); f_1066b1e0();
  /* 1066b03f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066b042:;
  /* 1066b042 jmp 0x1066a454 */
  goto L_1066a454;
L_1066b047:;
  /* 1066b047 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1066b04d pop edi */
  EDI = (pop32());
  /* 1066b04e pop esi */
  ESI = (pop32());
  /* 1066b04f pop ebx */
  EBX = (pop32());
  /* 1066b050 mov esp, ebp */
  ESP = (EBP);
  /* 1066b052 pop ebp */
  EBP = (pop32());
  /* 1066b053 ret  */
  ESPCHK(0x1066a430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b160 @ 0x1066b160 (119 bytes, 44 insns) */
void f_1066b160(void) {
  FTRACE(0x1066b160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b160 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b161 mov ebp, esp */
  EBP = (ESP);
  /* 1066b163 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b164 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b167 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1066b16a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b16d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b170 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1066b173 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b176 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b17a jl 0x1066b1a2 */
  if ((C.sf!=C.of)) goto L_1066b1a2;
  /* 1066b17c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b17f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1066b181 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1066b184 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1066b186 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1066b18a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1066b190 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066b193 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b196 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1066b198 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b19b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b19e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1066b1a0 jmp 0x1066b1b5 */
  goto L_1066b1b5;
L_1066b1a2:;
  /* 1066b1a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b1a5 push edx */
  push32((uint32_t)(EDX));
  /* 1066b1a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b1a9 push eax */
  push32((uint32_t)(EAX));
  /* 1066b1aa call 0x1066a1b0 */
  push32(0x1066b1afu); f_1066a1b0();
  /* 1066b1af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b1b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066b1b5:;
  /* 1066b1b5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b1b9 jne 0x1066b1c6 */
  if (!C.zf) goto L_1066b1c6;
  /* 1066b1bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b1be mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1066b1c4 jmp 0x1066b1d3 */
  goto L_1066b1d3;
L_1066b1c6:;
  /* 1066b1c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b1c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1066b1cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b1ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b1d1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1066b1d3:;
  /* 1066b1d3 mov esp, ebp */
  ESP = (EBP);
  /* 1066b1d5 pop ebp */
  EBP = (pop32());
  /* 1066b1d6 ret  */
  ESPCHK(0x1066b160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1e0 @ 0x1066b1e0 (53 bytes, 23 insns) */
void f_1066b1e0(void) {
  FTRACE(0x1066b1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b1e1 mov ebp, esp */
  EBP = (ESP);
L_1066b1e3:;
  /* 1066b1e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b1e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b1e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b1ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1066b1ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066b1f1 jle 0x1066b213 */
  if ((C.zf||C.sf!=C.of)) goto L_1066b213;
  /* 1066b1f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066b1f6 push edx */
  push32((uint32_t)(EDX));
  /* 1066b1f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b1fa push eax */
  push32((uint32_t)(EAX));
  /* 1066b1fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b1fe push ecx */
  push32((uint32_t)(ECX));
  /* 1066b1ff call 0x1066b160 */
  push32(0x1066b204u); f_1066b160();
  /* 1066b204 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b207 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066b20a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b20d jne 0x1066b211 */
  if (!C.zf) goto L_1066b211;
  /* 1066b20f jmp 0x1066b213 */
  goto L_1066b213;
L_1066b211:;
  /* 1066b211 jmp 0x1066b1e3 */
  goto L_1066b1e3;
L_1066b213:;
  /* 1066b213 pop ebp */
  EBP = (pop32());
  /* 1066b214 ret  */
  ESPCHK(0x1066b1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b220 @ 0x1066b220 (74 bytes, 31 insns) */
void f_1066b220(void) {
  FTRACE(0x1066b220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b220 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b221 mov ebp, esp */
  EBP = (ESP);
  /* 1066b223 push ecx */
  push32((uint32_t)(ECX));
L_1066b224:;
  /* 1066b224 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b227 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b22a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b22d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1066b230 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066b232 jle 0x1066b266 */
  if ((C.zf||C.sf!=C.of)) goto L_1066b266;
  /* 1066b234 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066b237 push edx */
  push32((uint32_t)(EDX));
  /* 1066b238 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b23b push eax */
  push32((uint32_t)(EAX));
  /* 1066b23c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b23f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066b242 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066b245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066b248 push eax */
  push32((uint32_t)(EAX));
  /* 1066b249 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b24c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b24f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1066b252 call 0x1066b160 */
  push32(0x1066b257u); f_1066b160();
  /* 1066b257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b25a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066b25d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b260 jne 0x1066b264 */
  if (!C.zf) goto L_1066b264;
  /* 1066b262 jmp 0x1066b266 */
  goto L_1066b266;
L_1066b264:;
  /* 1066b264 jmp 0x1066b224 */
  goto L_1066b224;
L_1066b266:;
  /* 1066b266 mov esp, ebp */
  ESP = (EBP);
  /* 1066b268 pop ebp */
  EBP = (pop32());
  /* 1066b269 ret  */
  ESPCHK(0x1066b220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b270 @ 0x1066b270 (26 bytes, 12 insns) */
void f_1066b270(void) {
  FTRACE(0x1066b270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b270 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b271 mov ebp, esp */
  EBP = (ESP);
  /* 1066b273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b276 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1066b278 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b27b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b27e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1066b280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b283 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1066b285 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1066b288 pop ebp */
  EBP = (pop32());
  /* 1066b289 ret  */
  ESPCHK(0x1066b270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b290 @ 0x1066b290 (31 bytes, 14 insns) */
void f_1066b290(void) {
  FTRACE(0x1066b290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b290 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b291 mov ebp, esp */
  EBP = (ESP);
  /* 1066b293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b296 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1066b298 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b29b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b29e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1066b2a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b2a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1066b2a5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b2a8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1066b2aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1066b2ad pop ebp */
  EBP = (pop32());
  /* 1066b2ae ret  */
  ESPCHK(0x1066b290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2b0 @ 0x1066b2b0 (27 bytes, 12 insns) */
void f_1066b2b0(void) {
  FTRACE(0x1066b2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1066b2b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b2b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1066b2b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b2bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b2be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1066b2c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b2c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1066b2c5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1066b2c9 pop ebp */
  EBP = (pop32());
  /* 1066b2ca ret  */
  ESPCHK(0x1066b2b0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1066b2d0 (145 bytes, 42 insns) */
void f_1066b2d0(void) {
  FTRACE(0x1066b2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1066b2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b2d4 call 0x1066b380 */
  push32(0x1066b2d9u); f_1066b380();
  /* 1066b2d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b2dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1066b2de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066b2e5 jmp 0x1066b2f0 */
  goto L_1066b2f0;
L_1066b2e7:;
  /* 1066b2e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066b2ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b2ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1066b2f0:;
  /* 1066b2f0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b2f4 jae 0x1066b31a */
  if (!C.cf) goto L_1066b31a;
  /* 1066b2f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066b2f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b2fc cmp ecx, dword ptr [eax*8 + 0x1068dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1068dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b303 jne 0x1066b318 */
  if (!C.zf) goto L_1066b318;
  /* 1066b305 call 0x1066b370 */
  push32(0x1066b30au); f_1066b370();
  /* 1066b30a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066b30d mov ecx, dword ptr [edx*8 + 0x1068dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1068dfbc)));
  /* 1066b314 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1066b316 jmp 0x1066b35d */
  goto L_1066b35d;
L_1066b318:;
  /* 1066b318 jmp 0x1066b2e7 */
  goto L_1066b2e7;
L_1066b31a:;
  /* 1066b31a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b31e jb 0x1066b333 */
  if (C.cf) goto L_1066b333;
  /* 1066b320 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b324 ja 0x1066b333 */
  if ((!C.cf&&!C.zf)) goto L_1066b333;
  /* 1066b326 call 0x1066b370 */
  push32(0x1066b32bu); f_1066b370();
  /* 1066b32b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1066b331 jmp 0x1066b35d */
  goto L_1066b35d;
L_1066b333:;
  /* 1066b333 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b33a jb 0x1066b352 */
  if (C.cf) goto L_1066b352;
  /* 1066b33c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b343 ja 0x1066b352 */
  if ((!C.cf&&!C.zf)) goto L_1066b352;
  /* 1066b345 call 0x1066b370 */
  push32(0x1066b34au); f_1066b370();
  /* 1066b34a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1066b350 jmp 0x1066b35d */
  goto L_1066b35d;
L_1066b352:;
  /* 1066b352 call 0x1066b370 */
  push32(0x1066b357u); f_1066b370();
  /* 1066b357 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1066b35d:;
  /* 1066b35d mov esp, ebp */
  ESP = (EBP);
  /* 1066b35f pop ebp */
  EBP = (pop32());
  /* 1066b360 ret  */
  ESPCHK(0x1066b2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b370 @ 0x1066b370 (13 bytes, 6 insns) */
void f_1066b370(void) {
  FTRACE(0x1066b370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b370 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b371 mov ebp, esp */
  EBP = (ESP);
  /* 1066b373 call 0x10662ee0 */
  push32(0x1066b378u); f_10662ee0();
  /* 1066b378 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b37b pop ebp */
  EBP = (pop32());
  /* 1066b37c ret  */
  ESPCHK(0x1066b370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b380 @ 0x1066b380 (13 bytes, 6 insns) */
void f_1066b380(void) {
  FTRACE(0x1066b380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b380 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b381 mov ebp, esp */
  EBP = (ESP);
  /* 1066b383 call 0x10662ee0 */
  push32(0x1066b388u); f_10662ee0();
  /* 1066b388 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b38b pop ebp */
  EBP = (pop32());
  /* 1066b38c ret  */
  ESPCHK(0x1066b380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b390 @ 0x1066b390 (664 bytes, 258 insns) [15 switch table(s)] */
void f_1066b390(void) {
  FTRACE(0x1066b390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b390 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b391 mov ebp, esp */
  EBP = (ESP);
  /* 1066b393 push edi */
  push32((uint32_t)(EDI));
  /* 1066b394 push esi */
  push32((uint32_t)(ESI));
  /* 1066b395 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b398 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b39b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b39e mov eax, ecx */
  EAX = (ECX);
  /* 1066b3a0 mov edx, ecx */
  EDX = (ECX);
  /* 1066b3a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b3a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b3a6 jbe 0x1066b3b0 */
  if ((C.cf||C.zf)) goto L_1066b3b0;
  /* 1066b3a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b3aa jb 0x1066b528 */
  if (C.cf) goto L_1066b528;
L_1066b3b0:;
  /* 1066b3b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1066b3b6 jne 0x1066b3cc */
  if (!C.zf) goto L_1066b3cc;
  /* 1066b3b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1066b3bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1066b3be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b3c1 jb 0x1066b3ec */
  if (C.cf) goto L_1066b3ec;
  /* 1066b3c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1066b3c5 jmp dword ptr [edx*4 + 0x1066b4d8] */
  switch (EDX) {
    case 0: goto L_1066b4e8;
    case 1: goto L_1066b4f0;
    case 2: goto L_1066b4fc;
    case 3: goto L_1066b510;
    default: x86_unimpl("switch@0x1066b3c5 out of table"); return;
  }
L_1066b3cc:;
  /* 1066b3cc mov eax, edi */
  EAX = (EDI);
  /* 1066b3ce mov edx, 3 */
  EDX = (0x3u);
  /* 1066b3d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b3d6 jb 0x1066b3e4 */
  if (C.cf) goto L_1066b3e4;
  /* 1066b3d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1066b3db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b3dd jmp dword ptr [eax*4 + 0x1066b3f0] */
  switch (EAX) {
    case 1: goto L_1066b400;
    case 2: goto L_1066b42c;
    case 3: goto L_1066b450;
    default: x86_unimpl("switch@0x1066b3dd out of table"); return;
  }
L_1066b3e4:;
  /* 1066b3e4 jmp dword ptr [ecx*4 + 0x1066b4e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1066b4e8)))); return;
  /* 1066b3eb nop  */
  /* nop */
L_1066b3ec:;
  /* 1066b3ec jmp dword ptr [ecx*4 + 0x1066b46c] */
  switch (ECX) {
    case 0: goto L_1066b4cf;
    case 1: goto L_1066b4bc;
    case 2: goto L_1066b4b4;
    case 3: goto L_1066b4ac;
    case 4: goto L_1066b4a4;
    case 5: goto L_1066b49c;
    case 6: goto L_1066b494;
    case 7: goto L_1066b48c;
    default: x86_unimpl("switch@0x1066b3ec out of table"); return;
  }
  /* 1066b3f3 nop  */
  /* nop */
L_1066b400:;
  /* 1066b400 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1066b402 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1066b404 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1066b406 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1066b409 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1066b40c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1066b40f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1066b412 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1066b415 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b418 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b41b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b41e jb 0x1066b3ec */
  if (C.cf) goto L_1066b3ec;
  /* 1066b420 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1066b422 jmp dword ptr [edx*4 + 0x1066b4d8] */
  switch (EDX) {
    case 0: goto L_1066b4e8;
    case 1: goto L_1066b4f0;
    case 2: goto L_1066b4fc;
    case 3: goto L_1066b510;
    default: x86_unimpl("switch@0x1066b422 out of table"); return;
  }
  /* 1066b429 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1066b42c:;
  /* 1066b42c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1066b42e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1066b430 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1066b432 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1066b435 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1066b438 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1066b43b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b43e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b441 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b444 jb 0x1066b3ec */
  if (C.cf) goto L_1066b3ec;
  /* 1066b446 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1066b448 jmp dword ptr [edx*4 + 0x1066b4d8] */
  switch (EDX) {
    case 0: goto L_1066b4e8;
    case 1: goto L_1066b4f0;
    case 2: goto L_1066b4fc;
    case 3: goto L_1066b510;
    default: x86_unimpl("switch@0x1066b448 out of table"); return;
  }
  /* 1066b44f nop  */
  /* nop */
L_1066b450:;
  /* 1066b450 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1066b452 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1066b454 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1066b456 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1066b457 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1066b45a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1066b45b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b45e jb 0x1066b3ec */
  if (C.cf) goto L_1066b3ec;
  /* 1066b460 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1066b462 jmp dword ptr [edx*4 + 0x1066b4d8] */
  switch (EDX) {
    case 0: goto L_1066b4e8;
    case 1: goto L_1066b4f0;
    case 2: goto L_1066b4fc;
    case 3: goto L_1066b510;
    default: x86_unimpl("switch@0x1066b462 out of table"); return;
  }
  /* 1066b469 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1066b48c:;
  /* 1066b48c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1066b490 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1066b494:;
  /* 1066b494 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1066b498 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1066b49c:;
  /* 1066b49c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1066b4a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1066b4a4:;
  /* 1066b4a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1066b4a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1066b4ac:;
  /* 1066b4ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1066b4b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1066b4b4:;
  /* 1066b4b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1066b4b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1066b4bc:;
  /* 1066b4bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1066b4c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1066b4c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1066b4cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b4cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1066b4cf:;
  /* 1066b4cf jmp dword ptr [edx*4 + 0x1066b4d8] */
  switch (EDX) {
    case 0: goto L_1066b4e8;
    case 1: goto L_1066b4f0;
    case 2: goto L_1066b4fc;
    case 3: goto L_1066b510;
    default: x86_unimpl("switch@0x1066b4cf out of table"); return;
  }
  /* 1066b4d6 mov edi, edi */
  EDI = (EDI);
L_1066b4e8:;
  /* 1066b4e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b4eb pop esi */
  ESI = (pop32());
  /* 1066b4ec pop edi */
  EDI = (pop32());
  /* 1066b4ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066b4ee ret  */
  ESPCHK(0x1066b390u, _esp0);
  ESP += 4; return;
  /* 1066b4ef nop  */
  /* nop */
L_1066b4f0:;
  /* 1066b4f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1066b4f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1066b4f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b4f7 pop esi */
  ESI = (pop32());
  /* 1066b4f8 pop edi */
  EDI = (pop32());
  /* 1066b4f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066b4fa ret  */
  ESPCHK(0x1066b390u, _esp0);
  ESP += 4; return;
  /* 1066b4fb nop  */
  /* nop */
L_1066b4fc:;
  /* 1066b4fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1066b4fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1066b500 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1066b503 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1066b506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b509 pop esi */
  ESI = (pop32());
  /* 1066b50a pop edi */
  EDI = (pop32());
  /* 1066b50b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066b50c ret  */
  ESPCHK(0x1066b390u, _esp0);
  ESP += 4; return;
  /* 1066b50d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1066b510:;
  /* 1066b510 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1066b512 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1066b514 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1066b517 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1066b51a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1066b51d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1066b520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b523 pop esi */
  ESI = (pop32());
  /* 1066b524 pop edi */
  EDI = (pop32());
  /* 1066b525 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066b526 ret  */
  ESPCHK(0x1066b390u, _esp0);
  ESP += 4; return;
  /* 1066b527 nop  */
  /* nop */
L_1066b528:;
  /* 1066b528 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1066b52c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1066b530 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1066b536 jne 0x1066b55c */
  if (!C.zf) goto L_1066b55c;
  /* 1066b538 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1066b53b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1066b53e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b541 jb 0x1066b550 */
  if (C.cf) goto L_1066b550;
  /* 1066b543 std  */
  C.df=1;
  /* 1066b544 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1066b546 cld  */
  C.df=0;
  /* 1066b547 jmp dword ptr [edx*4 + 0x1066b670] */
  switch (EDX) {
    case 0: goto L_1066b680;
    case 1: goto L_1066b688;
    case 2: goto L_1066b698;
    case 3: goto L_1066b6ac;
    default: x86_unimpl("switch@0x1066b547 out of table"); return;
  }
  /* 1066b54e mov edi, edi */
  EDI = (EDI);
L_1066b550:;
  /* 1066b550 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066b552 jmp dword ptr [ecx*4 + 0x1066b620] */
  switch (ECX) {
    case 0: goto L_1066b667;
    default: x86_unimpl("switch@0x1066b552 out of table"); return;
  }
  /* 1066b559 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1066b55c:;
  /* 1066b55c mov eax, edi */
  EAX = (EDI);
  /* 1066b55e mov edx, 3 */
  EDX = (0x3u);
  /* 1066b563 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b566 jb 0x1066b574 */
  if (C.cf) goto L_1066b574;
  /* 1066b568 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1066b56b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b56d jmp dword ptr [eax*4 + 0x1066b578] */
  switch (EAX) {
    case 1: goto L_1066b588;
    case 2: goto L_1066b5a8;
    case 3: goto L_1066b5d0;
    default: x86_unimpl("switch@0x1066b56d out of table"); return;
  }
L_1066b574:;
  /* 1066b574 jmp dword ptr [ecx*4 + 0x1066b670] */
  switch (ECX) {
    case 0: goto L_1066b680;
    case 1: goto L_1066b688;
    case 2: goto L_1066b698;
    case 3: goto L_1066b6ac;
    default: x86_unimpl("switch@0x1066b574 out of table"); return;
  }
  /* 1066b57b nop  */
  /* nop */
L_1066b588:;
  /* 1066b588 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1066b58b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1066b58d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1066b590 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1066b591 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1066b594 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1066b595 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b598 jb 0x1066b550 */
  if (C.cf) goto L_1066b550;
  /* 1066b59a std  */
  C.df=1;
  /* 1066b59b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1066b59d cld  */
  C.df=0;
  /* 1066b59e jmp dword ptr [edx*4 + 0x1066b670] */
  switch (EDX) {
    case 0: goto L_1066b680;
    case 1: goto L_1066b688;
    case 2: goto L_1066b698;
    case 3: goto L_1066b6ac;
    default: x86_unimpl("switch@0x1066b59e out of table"); return;
  }
  /* 1066b5a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1066b5a8:;
  /* 1066b5a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1066b5ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1066b5ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1066b5b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1066b5b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1066b5b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1066b5b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b5bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b5bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b5c2 jb 0x1066b550 */
  if (C.cf) goto L_1066b550;
  /* 1066b5c4 std  */
  C.df=1;
  /* 1066b5c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1066b5c7 cld  */
  C.df=0;
  /* 1066b5c8 jmp dword ptr [edx*4 + 0x1066b670] */
  switch (EDX) {
    case 0: goto L_1066b680;
    case 1: goto L_1066b688;
    case 2: goto L_1066b698;
    case 3: goto L_1066b6ac;
    default: x86_unimpl("switch@0x1066b5c8 out of table"); return;
  }
  /* 1066b5cf nop  */
  /* nop */
L_1066b5d0:;
  /* 1066b5d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1066b5d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1066b5d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1066b5d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1066b5db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1066b5de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1066b5e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1066b5e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1066b5e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b5ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b5ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b5f0 jb 0x1066b550 */
  if (C.cf) goto L_1066b550;
  /* 1066b5f6 std  */
  C.df=1;
  /* 1066b5f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1066b5f9 cld  */
  C.df=0;
  /* 1066b5fa jmp dword ptr [edx*4 + 0x1066b670] */
  switch (EDX) {
    case 0: goto L_1066b680;
    case 1: goto L_1066b688;
    case 2: goto L_1066b698;
    case 3: goto L_1066b6ac;
    default: x86_unimpl("switch@0x1066b5fa out of table"); return;
  }
  /* 1066b601 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1066b604 and al, 0xb6 */
  { uint32_t _r=(AL)&(0xb6u); AL = (_r); fl_logic(_r,8); }
  /* 1066b606 adc byte ptr [esi + esi*4], ch */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 1066b60a adc byte ptr [esi + esi*4], dh */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 1066b60e adc byte ptr [esi + esi*4], bh */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 1066b612 adc byte ptr [esi + esi*4 + 0x66], al */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4 + 0x66))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4 + 0x66), (_r)); fl_add(_a,_b,_r,8); }
  /* 1066b617 adc byte ptr [esi + esi*4 + 0x66], cl */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4 + 0x66))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4 + 0x66), (_r)); fl_add(_a,_b,_r,8); }
  /* 1066b61b adc byte ptr [esi + esi*4 + 0x66], dl */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4 + 0x66))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4 + 0x66), (_r)); fl_add(_a,_b,_r,8); }
  /* 1066b624 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1066b628 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1066b62c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1066b630 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1066b634 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1066b638 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1066b63c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1066b640 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1066b644 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1066b648 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1066b64c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1066b650 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1066b654 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1066b658 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1066b65c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1066b663 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b665 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1066b667:;
  /* 1066b667 jmp dword ptr [edx*4 + 0x1066b670] */
  switch (EDX) {
    case 0: goto L_1066b680;
    case 1: goto L_1066b688;
    case 2: goto L_1066b698;
    case 3: goto L_1066b6ac;
    default: x86_unimpl("switch@0x1066b667 out of table"); return;
  }
  /* 1066b66e mov edi, edi */
  EDI = (EDI);
L_1066b680:;
  /* 1066b680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b683 pop esi */
  ESI = (pop32());
  /* 1066b684 pop edi */
  EDI = (pop32());
  /* 1066b685 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066b686 ret  */
  ESPCHK(0x1066b390u, _esp0);
  ESP += 4; return;
  /* 1066b687 nop  */
  /* nop */
L_1066b688:;
  /* 1066b688 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1066b68b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1066b68e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b691 pop esi */
  ESI = (pop32());
  /* 1066b692 pop edi */
  EDI = (pop32());
  /* 1066b693 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066b694 ret  */
  ESPCHK(0x1066b390u, _esp0);
  ESP += 4; return;
  /* 1066b695 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1066b698:;
  /* 1066b698 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1066b69b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1066b69e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1066b6a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1066b6a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b6a7 pop esi */
  ESI = (pop32());
  /* 1066b6a8 pop edi */
  EDI = (pop32());
  /* 1066b6a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066b6aa ret  */
  ESPCHK(0x1066b390u, _esp0);
  ESP += 4; return;
  /* 1066b6ab nop  */
  /* nop */
L_1066b6ac:;
  /* 1066b6ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1066b6af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1066b6b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1066b6b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1066b6b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1066b6bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1066b6be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b6c1 pop esi */
  ESI = (pop32());
  /* 1066b6c2 pop edi */
  EDI = (pop32());
  /* 1066b6c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066b6c4 ret  */
  ESPCHK(0x1066b390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6d0 @ 0x1066b6d0 (421 bytes, 148 insns) */
void f_1066b6d0(void) {
  FTRACE(0x1066b6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1066b6d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1066b6d5 push 0x1068b008 */
  push32((uint32_t)(0x1068b008u));
  /* 1066b6da push 0x1066c5a8 */
  push32((uint32_t)(0x1066c5a8u));
  /* 1066b6df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1066b6e5 push eax */
  push32((uint32_t)(EAX));
  /* 1066b6e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1066b6ed add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b6f0 push ebx */
  push32((uint32_t)(EBX));
  /* 1066b6f1 push esi */
  push32((uint32_t)(ESI));
  /* 1066b6f2 push edi */
  push32((uint32_t)(EDI));
  /* 1066b6f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1066b6f6 cmp dword ptr [0x1068f674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b6fd jne 0x1066b74e */
  if (!C.zf) goto L_1066b74e;
  /* 1066b6ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1066b702 push eax */
  push32((uint32_t)(EAX));
  /* 1066b703 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066b705 push 0x1068b000 */
  push32((uint32_t)(0x1068b000u));
  /* 1066b70a push 1 */
  push32((uint32_t)(0x1u));
  /* 1066b70c call dword ptr [0x106912a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912a0))), 0x1066b712u);
  /* 1066b712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066b714 je 0x1066b722 */
  if (C.zf) goto L_1066b722;
  /* 1066b716 mov dword ptr [0x1068f674], 1 */
  w32((uint32_t)(0x1068f674), (0x1u));
  /* 1066b720 jmp 0x1066b74e */
  goto L_1066b74e;
L_1066b722:;
  /* 1066b722 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1066b725 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b726 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066b728 push 0x1068affc */
  push32((uint32_t)(0x1068affcu));
  /* 1066b72d push 1 */
  push32((uint32_t)(0x1u));
  /* 1066b72f push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b731 call dword ptr [0x1069136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069136c))), 0x1066b737u);
  /* 1066b737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066b739 je 0x1066b747 */
  if (C.zf) goto L_1066b747;
  /* 1066b73b mov dword ptr [0x1068f674], 2 */
  w32((uint32_t)(0x1068f674), (0x2u));
  /* 1066b745 jmp 0x1066b74e */
  goto L_1066b74e;
L_1066b747:;
  /* 1066b747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066b749 jmp 0x1066b878 */
  goto L_1066b878;
L_1066b74e:;
  /* 1066b74e cmp dword ptr [0x1068f674], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1068f674))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b755 jne 0x1066b785 */
  if (!C.zf) goto L_1066b785;
  /* 1066b757 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b75b jne 0x1066b766 */
  if (!C.zf) goto L_1066b766;
  /* 1066b75d mov edx, dword ptr [0x1068f680] */
  EDX = (r32((uint32_t)(0x1068f680)));
  /* 1066b763 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1066b766:;
  /* 1066b766 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066b769 push eax */
  push32((uint32_t)(EAX));
  /* 1066b76a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b76d push ecx */
  push32((uint32_t)(ECX));
  /* 1066b76e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b771 push edx */
  push32((uint32_t)(EDX));
  /* 1066b772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b775 push eax */
  push32((uint32_t)(EAX));
  /* 1066b776 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1066b779 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b77a call dword ptr [0x1069136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069136c))), 0x1066b780u);
  /* 1066b780 jmp 0x1066b878 */
  goto L_1066b878;
L_1066b785:;
  /* 1066b785 cmp dword ptr [0x1068f674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b78c jne 0x1066b876 */
  if (!C.zf) goto L_1066b876;
  /* 1066b792 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b796 jne 0x1066b7a1 */
  if (!C.zf) goto L_1066b7a1;
  /* 1066b798 mov edx, dword ptr [0x1068f690] */
  EDX = (r32((uint32_t)(0x1068f690)));
  /* 1066b79e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1066b7a1:;
  /* 1066b7a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b7a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b7a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b7a8 push eax */
  push32((uint32_t)(EAX));
  /* 1066b7a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b7ac push ecx */
  push32((uint32_t)(ECX));
  /* 1066b7ad mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1066b7b0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066b7b2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b7b4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1066b7b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b7ba push edx */
  push32((uint32_t)(EDX));
  /* 1066b7bb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1066b7be push eax */
  push32((uint32_t)(EAX));
  /* 1066b7bf call dword ptr [0x10691368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691368))), 0x1066b7c5u);
  /* 1066b7c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1066b7c8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b7cc jne 0x1066b7d5 */
  if (!C.zf) goto L_1066b7d5;
  /* 1066b7ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066b7d0 jmp 0x1066b878 */
  goto L_1066b878;
L_1066b7d5:;
  /* 1066b7d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066b7dc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066b7df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1066b7e1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b7e4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1066b7e6 call 0x10666640 */
  push32(0x1066b7ebu); f_10666640();
  /* 1066b7eb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1066b7ee mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1066b7f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066b7f4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1066b7f7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066b7fa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1066b7fc push edx */
  push32((uint32_t)(EDX));
  /* 1066b7fd push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b7ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066b802 push eax */
  push32((uint32_t)(EAX));
  /* 1066b803 call 0x10667210 */
  push32(0x1066b808u); f_10667210();
  /* 1066b808 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b80b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1066b812 jmp 0x1066b82b */
  goto L_1066b82b;
  /* 1066b814 mov eax, 1 */
  EAX = (0x1u);
  /* 1066b819 ret  */
  ESPCHK(0x1066b6d0u, _esp0);
  ESP += 4; return;
  /* 1066b81a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1066b81d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1066b824 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1066b82b:;
  /* 1066b82b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b82f jne 0x1066b835 */
  if (!C.zf) goto L_1066b835;
  /* 1066b831 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066b833 jmp 0x1066b878 */
  goto L_1066b878;
L_1066b835:;
  /* 1066b835 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066b838 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b839 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066b83c push edx */
  push32((uint32_t)(EDX));
  /* 1066b83d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b840 push eax */
  push32((uint32_t)(EAX));
  /* 1066b841 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b844 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b845 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066b847 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1066b84a push edx */
  push32((uint32_t)(EDX));
  /* 1066b84b call dword ptr [0x10691368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691368))), 0x1066b851u);
  /* 1066b851 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1066b854 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b858 jne 0x1066b85e */
  if (!C.zf) goto L_1066b85e;
  /* 1066b85a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066b85c jmp 0x1066b878 */
  goto L_1066b878;
L_1066b85e:;
  /* 1066b85e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066b861 push eax */
  push32((uint32_t)(EAX));
  /* 1066b862 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066b865 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b866 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066b869 push edx */
  push32((uint32_t)(EDX));
  /* 1066b86a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b86d push eax */
  push32((uint32_t)(EAX));
  /* 1066b86e call dword ptr [0x106912a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912a0))), 0x1066b874u);
  /* 1066b874 jmp 0x1066b878 */
  goto L_1066b878;
L_1066b876:;
  /* 1066b876 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1066b878:;
  /* 1066b878 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1066b87b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066b87e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1066b885 pop edi */
  EDI = (pop32());
  /* 1066b886 pop esi */
  ESI = (pop32());
  /* 1066b887 pop ebx */
  EBX = (pop32());
  /* 1066b888 mov esp, ebp */
  ESP = (EBP);
  /* 1066b88a pop ebp */
  EBP = (pop32());
  /* 1066b88b ret  */
  ESPCHK(0x1066b6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b890 @ 0x1066b890 (727 bytes, 263 insns) */
void f_1066b890(void) {
  FTRACE(0x1066b890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066b890 push ebp */
  push32((uint32_t)(EBP));
  /* 1066b891 mov ebp, esp */
  EBP = (ESP);
  /* 1066b893 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1066b895 push 0x1068b018 */
  push32((uint32_t)(0x1068b018u));
  /* 1066b89a push 0x1066c5a8 */
  push32((uint32_t)(0x1066c5a8u));
  /* 1066b89f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1066b8a5 push eax */
  push32((uint32_t)(EAX));
  /* 1066b8a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1066b8ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b8b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1066b8b1 push esi */
  push32((uint32_t)(ESI));
  /* 1066b8b2 push edi */
  push32((uint32_t)(EDI));
  /* 1066b8b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1066b8b6 cmp dword ptr [0x1068f698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b8bd jne 0x1066b916 */
  if (!C.zf) goto L_1066b916;
  /* 1066b8bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b8c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b8c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066b8c5 push 0x1068b000 */
  push32((uint32_t)(0x1068b000u));
  /* 1066b8ca push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1066b8cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b8d1 call dword ptr [0x1069130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069130c))), 0x1066b8d7u);
  /* 1066b8d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066b8d9 je 0x1066b8e7 */
  if (C.zf) goto L_1066b8e7;
  /* 1066b8db mov dword ptr [0x1068f698], 1 */
  w32((uint32_t)(0x1068f698), (0x1u));
  /* 1066b8e5 jmp 0x1066b916 */
  goto L_1066b916;
L_1066b8e7:;
  /* 1066b8e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b8e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b8eb push 1 */
  push32((uint32_t)(0x1u));
  /* 1066b8ed push 0x1068affc */
  push32((uint32_t)(0x1068affcu));
  /* 1066b8f2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1066b8f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b8f9 call dword ptr [0x1069129c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069129c))), 0x1066b8ffu);
  /* 1066b8ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066b901 je 0x1066b90f */
  if (C.zf) goto L_1066b90f;
  /* 1066b903 mov dword ptr [0x1068f698], 2 */
  w32((uint32_t)(0x1068f698), (0x2u));
  /* 1066b90d jmp 0x1066b916 */
  goto L_1066b916;
L_1066b90f:;
  /* 1066b90f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066b911 jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066b916:;
  /* 1066b916 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b91a jle 0x1066b92f */
  if ((C.zf||C.sf!=C.of)) goto L_1066b92f;
  /* 1066b91c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066b91f push eax */
  push32((uint32_t)(EAX));
  /* 1066b920 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b923 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b924 call 0x1066bba0 */
  push32(0x1066b929u); f_1066bba0();
  /* 1066b929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b92c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1066b92f:;
  /* 1066b92f cmp dword ptr [0x1068f698], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1068f698))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b936 jne 0x1066b95b */
  if (!C.zf) goto L_1066b95b;
  /* 1066b938 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1066b93b push edx */
  push32((uint32_t)(EDX));
  /* 1066b93c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1066b93f push eax */
  push32((uint32_t)(EAX));
  /* 1066b940 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066b943 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b944 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b947 push edx */
  push32((uint32_t)(EDX));
  /* 1066b948 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066b94b push eax */
  push32((uint32_t)(EAX));
  /* 1066b94c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066b94f push ecx */
  push32((uint32_t)(ECX));
  /* 1066b950 call dword ptr [0x1069129c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069129c))), 0x1066b956u);
  /* 1066b956 jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066b95b:;
  /* 1066b95b cmp dword ptr [0x1068f698], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f698))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b962 jne 0x1066bb7f */
  if (!C.zf) goto L_1066bb7f;
  /* 1066b968 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b96c jne 0x1066b977 */
  if (!C.zf) goto L_1066b977;
  /* 1066b96e mov edx, dword ptr [0x1068f690] */
  EDX = (r32((uint32_t)(0x1068f690)));
  /* 1066b974 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1066b977:;
  /* 1066b977 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b979 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066b97b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066b97e push eax */
  push32((uint32_t)(EAX));
  /* 1066b97f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066b982 push ecx */
  push32((uint32_t)(ECX));
  /* 1066b983 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1066b986 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066b988 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066b98a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1066b98d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b990 push edx */
  push32((uint32_t)(EDX));
  /* 1066b991 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1066b994 push eax */
  push32((uint32_t)(EAX));
  /* 1066b995 call dword ptr [0x10691368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691368))), 0x1066b99bu);
  /* 1066b99b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1066b99e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b9a2 jne 0x1066b9ab */
  if (!C.zf) goto L_1066b9ab;
  /* 1066b9a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066b9a6 jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066b9ab:;
  /* 1066b9ab mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066b9b2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066b9b5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1066b9b7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066b9ba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1066b9bc call 0x10666640 */
  push32(0x1066b9c1u); f_10666640();
  /* 1066b9c1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1066b9c4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1066b9c7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066b9ca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1066b9cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1066b9d4 jmp 0x1066b9ed */
  goto L_1066b9ed;
  /* 1066b9d6 mov eax, 1 */
  EAX = (0x1u);
  /* 1066b9db ret  */
  ESPCHK(0x1066b890u, _esp0);
  ESP += 4; return;
  /* 1066b9dc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1066b9df mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1066b9e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1066b9ed:;
  /* 1066b9ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066b9f1 jne 0x1066b9fa */
  if (!C.zf) goto L_1066b9fa;
  /* 1066b9f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066b9f5 jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066b9fa:;
  /* 1066b9fa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066b9fd push edx */
  push32((uint32_t)(EDX));
  /* 1066b9fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066ba01 push eax */
  push32((uint32_t)(EAX));
  /* 1066ba02 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066ba05 push ecx */
  push32((uint32_t)(ECX));
  /* 1066ba06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066ba09 push edx */
  push32((uint32_t)(EDX));
  /* 1066ba0a push 1 */
  push32((uint32_t)(0x1u));
  /* 1066ba0c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1066ba0f push eax */
  push32((uint32_t)(EAX));
  /* 1066ba10 call dword ptr [0x10691368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691368))), 0x1066ba16u);
  /* 1066ba16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ba18 jne 0x1066ba21 */
  if (!C.zf) goto L_1066ba21;
  /* 1066ba1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066ba1c jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066ba21:;
  /* 1066ba21 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ba23 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ba25 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066ba28 push ecx */
  push32((uint32_t)(ECX));
  /* 1066ba29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066ba2c push edx */
  push32((uint32_t)(EDX));
  /* 1066ba2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066ba30 push eax */
  push32((uint32_t)(EAX));
  /* 1066ba31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ba34 push ecx */
  push32((uint32_t)(ECX));
  /* 1066ba35 call dword ptr [0x1069130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069130c))), 0x1066ba3bu);
  /* 1066ba3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1066ba3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ba42 jne 0x1066ba4b */
  if (!C.zf) goto L_1066ba4b;
  /* 1066ba44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066ba46 jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066ba4b:;
  /* 1066ba4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066ba4e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1066ba54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066ba56 je 0x1066ba9b */
  if (C.zf) goto L_1066ba9b;
  /* 1066ba58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ba5c je 0x1066ba96 */
  if (C.zf) goto L_1066ba96;
  /* 1066ba5e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066ba61 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ba64 jle 0x1066ba6d */
  if ((C.zf||C.sf!=C.of)) goto L_1066ba6d;
  /* 1066ba66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066ba68 jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066ba6d:;
  /* 1066ba6d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1066ba70 push ecx */
  push32((uint32_t)(ECX));
  /* 1066ba71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1066ba74 push edx */
  push32((uint32_t)(EDX));
  /* 1066ba75 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066ba78 push eax */
  push32((uint32_t)(EAX));
  /* 1066ba79 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066ba7c push ecx */
  push32((uint32_t)(ECX));
  /* 1066ba7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066ba80 push edx */
  push32((uint32_t)(EDX));
  /* 1066ba81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ba84 push eax */
  push32((uint32_t)(EAX));
  /* 1066ba85 call dword ptr [0x1069130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069130c))), 0x1066ba8bu);
  /* 1066ba8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ba8d jne 0x1066ba96 */
  if (!C.zf) goto L_1066ba96;
  /* 1066ba8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066ba91 jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066ba96:;
  /* 1066ba96 jmp 0x1066bb7a */
  goto L_1066bb7a;
L_1066ba9b:;
  /* 1066ba9b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066ba9e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1066baa1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1066baa8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066baab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1066baad add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bab0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1066bab2 call 0x10666640 */
  push32(0x1066bab7u); f_10666640();
  /* 1066bab7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1066baba mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1066babd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1066bac0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1066bac3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1066baca jmp 0x1066bae3 */
  goto L_1066bae3;
  /* 1066bacc mov eax, 1 */
  EAX = (0x1u);
  /* 1066bad1 ret  */
  ESPCHK(0x1066b890u, _esp0);
  ESP += 4; return;
  /* 1066bad2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1066bad5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1066badc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1066bae3:;
  /* 1066bae3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bae7 jne 0x1066baf0 */
  if (!C.zf) goto L_1066baf0;
  /* 1066bae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066baeb jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066baf0:;
  /* 1066baf0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066baf3 push eax */
  push32((uint32_t)(EAX));
  /* 1066baf4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066baf7 push ecx */
  push32((uint32_t)(ECX));
  /* 1066baf8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066bafb push edx */
  push32((uint32_t)(EDX));
  /* 1066bafc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066baff push eax */
  push32((uint32_t)(EAX));
  /* 1066bb00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066bb03 push ecx */
  push32((uint32_t)(ECX));
  /* 1066bb04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bb07 push edx */
  push32((uint32_t)(EDX));
  /* 1066bb08 call dword ptr [0x1069130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069130c))), 0x1066bb0eu);
  /* 1066bb0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066bb10 jne 0x1066bb16 */
  if (!C.zf) goto L_1066bb16;
  /* 1066bb12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066bb14 jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066bb16:;
  /* 1066bb16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bb1a jne 0x1066bb4a */
  if (!C.zf) goto L_1066bb4a;
  /* 1066bb1c push 0 */
  push32((uint32_t)(0x0u));
  /* 1066bb1e push 0 */
  push32((uint32_t)(0x0u));
  /* 1066bb20 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066bb22 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066bb24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066bb27 push eax */
  push32((uint32_t)(EAX));
  /* 1066bb28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066bb2b push ecx */
  push32((uint32_t)(ECX));
  /* 1066bb2c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1066bb31 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1066bb34 push edx */
  push32((uint32_t)(EDX));
  /* 1066bb35 call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x1066bb3bu);
  /* 1066bb3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1066bb3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bb42 jne 0x1066bb48 */
  if (!C.zf) goto L_1066bb48;
  /* 1066bb44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066bb46 jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066bb48:;
  /* 1066bb48 jmp 0x1066bb7a */
  goto L_1066bb7a;
L_1066bb4a:;
  /* 1066bb4a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066bb4c push 0 */
  push32((uint32_t)(0x0u));
  /* 1066bb4e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1066bb51 push eax */
  push32((uint32_t)(EAX));
  /* 1066bb52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1066bb55 push ecx */
  push32((uint32_t)(ECX));
  /* 1066bb56 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066bb59 push edx */
  push32((uint32_t)(EDX));
  /* 1066bb5a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066bb5d push eax */
  push32((uint32_t)(EAX));
  /* 1066bb5e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1066bb63 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1066bb66 push ecx */
  push32((uint32_t)(ECX));
  /* 1066bb67 call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x1066bb6du);
  /* 1066bb6d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1066bb70 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bb74 jne 0x1066bb7a */
  if (!C.zf) goto L_1066bb7a;
  /* 1066bb76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066bb78 jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066bb7a:;
  /* 1066bb7a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066bb7d jmp 0x1066bb81 */
  goto L_1066bb81;
L_1066bb7f:;
  /* 1066bb7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1066bb81:;
  /* 1066bb81 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1066bb84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066bb87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1066bb8e pop edi */
  EDI = (pop32());
  /* 1066bb8f pop esi */
  ESI = (pop32());
  /* 1066bb90 pop ebx */
  EBX = (pop32());
  /* 1066bb91 mov esp, ebp */
  ESP = (EBP);
  /* 1066bb93 pop ebp */
  EBP = (pop32());
  /* 1066bb94 ret  */
  ESPCHK(0x1066b890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bba0 @ 0x1066bba0 (80 bytes, 32 insns) */
void f_1066bba0(void) {
  FTRACE(0x1066bba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066bba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066bba1 mov ebp, esp */
  EBP = (ESP);
  /* 1066bba3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066bba6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066bba9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066bbac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bbaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1066bbb2:;
  /* 1066bbb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066bbb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066bbb8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066bbbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066bbbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066bbc0 je 0x1066bbd7 */
  if (C.zf) goto L_1066bbd7;
  /* 1066bbc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066bbc5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066bbc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066bbca je 0x1066bbd7 */
  if (C.zf) goto L_1066bbd7;
  /* 1066bbcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066bbcf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bbd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066bbd5 jmp 0x1066bbb2 */
  goto L_1066bbb2;
L_1066bbd7:;
  /* 1066bbd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066bbda movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066bbdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066bbdf jne 0x1066bbe9 */
  if (!C.zf) goto L_1066bbe9;
  /* 1066bbe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066bbe4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066bbe7 jmp 0x1066bbec */
  goto L_1066bbec;
L_1066bbe9:;
  /* 1066bbe9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1066bbec:;
  /* 1066bbec mov esp, ebp */
  ESP = (EBP);
  /* 1066bbee pop ebp */
  EBP = (pop32());
  /* 1066bbef ret  */
  ESPCHK(0x1066bba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbf0 @ 0x1066bbf0 (130 bytes, 43 insns) */
void f_1066bbf0(void) {
  FTRACE(0x1066bbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066bbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066bbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1066bbf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066bbf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bbf7 cmp eax, dword ptr [0x10690f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10690f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bbfd jae 0x1066bc21 */
  if (!C.cf) goto L_1066bc21;
  /* 1066bbff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bc02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066bc05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bc08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066bc0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066bc0e mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066bc15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1066bc1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1066bc1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066bc1f jne 0x1066bc3c */
  if (!C.zf) goto L_1066bc3c;
L_1066bc21:;
  /* 1066bc21 call 0x1066b370 */
  push32(0x1066bc26u); f_1066b370();
  /* 1066bc26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1066bc2c call 0x1066b380 */
  push32(0x1066bc31u); f_1066b380();
  /* 1066bc31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1066bc37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066bc3a jmp 0x1066bc6e */
  goto L_1066bc6e;
L_1066bc3c:;
  /* 1066bc3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bc3f push edx */
  push32((uint32_t)(EDX));
  /* 1066bc40 call 0x1066cb90 */
  push32(0x1066bc45u); f_1066cb90();
  /* 1066bc45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bc48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066bc4b push eax */
  push32((uint32_t)(EAX));
  /* 1066bc4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066bc4f push ecx */
  push32((uint32_t)(ECX));
  /* 1066bc50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bc53 push edx */
  push32((uint32_t)(EDX));
  /* 1066bc54 call 0x1066bc80 */
  push32(0x1066bc59u); f_1066bc80();
  /* 1066bc59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bc5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066bc5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bc62 push eax */
  push32((uint32_t)(EAX));
  /* 1066bc63 call 0x1066cc20 */
  push32(0x1066bc68u); f_1066cc20();
  /* 1066bc68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bc6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1066bc6e:;
  /* 1066bc6e mov esp, ebp */
  ESP = (EBP);
  /* 1066bc70 pop ebp */
  EBP = (pop32());
  /* 1066bc71 ret  */
  ESPCHK(0x1066bbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc80 @ 0x1066bc80 (178 bytes, 56 insns) */
void f_1066bc80(void) {
  FTRACE(0x1066bc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066bc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1066bc81 mov ebp, esp */
  EBP = (ESP);
  /* 1066bc83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066bc86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bc89 push eax */
  push32((uint32_t)(EAX));
  /* 1066bc8a call 0x1066ca10 */
  push32(0x1066bc8fu); f_1066ca10();
  /* 1066bc8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bc92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1066bc95 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bc99 jne 0x1066bcae */
  if (!C.zf) goto L_1066bcae;
  /* 1066bc9b call 0x1066b370 */
  push32(0x1066bca0u); f_1066b370();
  /* 1066bca0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1066bca6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066bca9 jmp 0x1066bd2e */
  goto L_1066bd2e;
L_1066bcae:;
  /* 1066bcae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066bcb1 push ecx */
  push32((uint32_t)(ECX));
  /* 1066bcb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066bcb4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066bcb7 push edx */
  push32((uint32_t)(EDX));
  /* 1066bcb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066bcbb push eax */
  push32((uint32_t)(EAX));
  /* 1066bcbc call dword ptr [0x10691294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691294))), 0x1066bcc2u);
  /* 1066bcc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066bcc5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bcc9 jne 0x1066bcd6 */
  if (!C.zf) goto L_1066bcd6;
  /* 1066bccb call dword ptr [0x106912f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f4))), 0x1066bcd1u);
  /* 1066bcd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066bcd4 jmp 0x1066bcdd */
  goto L_1066bcdd;
L_1066bcd6:;
  /* 1066bcd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1066bcdd:;
  /* 1066bcdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bce1 je 0x1066bcf4 */
  if (C.zf) goto L_1066bcf4;
  /* 1066bce3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066bce6 push ecx */
  push32((uint32_t)(ECX));
  /* 1066bce7 call 0x1066b2d0 */
  push32(0x1066bcecu); f_1066b2d0();
  /* 1066bcec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bcef or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066bcf2 jmp 0x1066bd2e */
  goto L_1066bd2e;
L_1066bcf4:;
  /* 1066bcf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bcf7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1066bcfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bcfd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1066bd00 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066bd03 mov ecx, dword ptr [edx*4 + 0x10690e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10690e60)));
  /* 1066bd0a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1066bd0e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1066bd11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bd14 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066bd17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bd1a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1066bd1d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066bd20 mov eax, dword ptr [eax*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066bd27 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1066bd2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1066bd2e:;
  /* 1066bd2e mov esp, ebp */
  ESP = (EBP);
  /* 1066bd30 pop ebp */
  EBP = (pop32());
  /* 1066bd31 ret  */
  ESPCHK(0x1066bc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd40 @ 0x1066bd40 (130 bytes, 43 insns) */
void f_1066bd40(void) {
  FTRACE(0x1066bd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066bd40 push ebp */
  push32((uint32_t)(EBP));
  /* 1066bd41 mov ebp, esp */
  EBP = (ESP);
  /* 1066bd43 push ecx */
  push32((uint32_t)(ECX));
  /* 1066bd44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bd47 cmp eax, dword ptr [0x10690f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10690f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bd4d jae 0x1066bd71 */
  if (!C.cf) goto L_1066bd71;
  /* 1066bd4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bd52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066bd55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bd58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066bd5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066bd5e mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066bd65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1066bd6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1066bd6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066bd6f jne 0x1066bd8c */
  if (!C.zf) goto L_1066bd8c;
L_1066bd71:;
  /* 1066bd71 call 0x1066b370 */
  push32(0x1066bd76u); f_1066b370();
  /* 1066bd76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1066bd7c call 0x1066b380 */
  push32(0x1066bd81u); f_1066b380();
  /* 1066bd81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1066bd87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066bd8a jmp 0x1066bdbe */
  goto L_1066bdbe;
L_1066bd8c:;
  /* 1066bd8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bd8f push edx */
  push32((uint32_t)(EDX));
  /* 1066bd90 call 0x1066cb90 */
  push32(0x1066bd95u); f_1066cb90();
  /* 1066bd95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bd98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066bd9b push eax */
  push32((uint32_t)(EAX));
  /* 1066bd9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066bd9f push ecx */
  push32((uint32_t)(ECX));
  /* 1066bda0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bda3 push edx */
  push32((uint32_t)(EDX));
  /* 1066bda4 call 0x1066bdd0 */
  push32(0x1066bda9u); f_1066bdd0();
  /* 1066bda9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bdac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066bdaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bdb2 push eax */
  push32((uint32_t)(EAX));
  /* 1066bdb3 call 0x1066cc20 */
  push32(0x1066bdb8u); f_1066cc20();
  /* 1066bdb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bdbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1066bdbe:;
  /* 1066bdbe mov esp, ebp */
  ESP = (EBP);
  /* 1066bdc0 pop ebp */
  EBP = (pop32());
  /* 1066bdc1 ret  */
  ESPCHK(0x1066bd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdd0 @ 0x1066bdd0 (627 bytes, 182 insns) */
void f_1066bdd0(void) {
  FTRACE(0x1066bdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066bdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066bdd1 mov ebp, esp */
  EBP = (ESP);
  /* 1066bdd3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066bdd9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1066bde0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066bde3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1066bde9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bded jne 0x1066bdf6 */
  if (!C.zf) goto L_1066bdf6;
  /* 1066bdef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066bdf1 jmp 0x1066c03f */
  goto L_1066c03f;
L_1066bdf6:;
  /* 1066bdf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bdf9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066bdfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bdff and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066be02 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066be05 mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066be0c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1066be11 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1066be14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066be16 je 0x1066be28 */
  if (C.zf) goto L_1066be28;
  /* 1066be18 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066be1a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066be1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066be1f push edx */
  push32((uint32_t)(EDX));
  /* 1066be20 call 0x1066bc80 */
  push32(0x1066be25u); f_1066bc80();
  /* 1066be25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066be28:;
  /* 1066be28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066be2b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066be2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066be31 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1066be34 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066be37 mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066be3e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1066be43 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1066be48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066be4a je 0x1066bf5c */
  if (C.zf) goto L_1066bf5c;
  /* 1066be50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066be53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066be56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1066be5d:;
  /* 1066be5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066be60 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066be63 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066be66 jae 0x1066bf5a */
  if (!C.cf) goto L_1066bf5a;
  /* 1066be6c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1066be72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1066be75:;
  /* 1066be75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066be78 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1066be7e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066be80 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066be86 jge 0x1066bee7 */
  if ((C.sf==C.of)) goto L_1066bee7;
  /* 1066be88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066be8b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066be8e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066be91 jae 0x1066bee7 */
  if (!C.cf) goto L_1066bee7;
  /* 1066be93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066be96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1066be98 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1066be9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066bea1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bea4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066bea7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1066beae cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066beb1 jne 0x1066bed1 */
  if (!C.zf) goto L_1066bed1;
  /* 1066beb3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1066beb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bebc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1066bec2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066bec5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1066bec8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066becb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bece mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1066bed1:;
  /* 1066bed1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066bed4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1066beda mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1066bedc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066bedf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bee2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066bee5 jmp 0x1066be75 */
  goto L_1066be75;
L_1066bee7:;
  /* 1066bee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066bee9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1066beef push edx */
  push32((uint32_t)(EDX));
  /* 1066bef0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066bef3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1066bef9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066befb push eax */
  push32((uint32_t)(EAX));
  /* 1066befc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1066bf02 push edx */
  push32((uint32_t)(EDX));
  /* 1066bf03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bf06 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066bf09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bf0c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1066bf0f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066bf12 mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066bf19 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1066bf1c push eax */
  push32((uint32_t)(EAX));
  /* 1066bf1d call dword ptr [0x106912b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b4))), 0x1066bf23u);
  /* 1066bf23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066bf25 je 0x1066bf4a */
  if (C.zf) goto L_1066bf4a;
  /* 1066bf27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066bf2a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066bf30 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1066bf33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066bf36 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1066bf3c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066bf3e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bf44 jge 0x1066bf48 */
  if ((C.sf==C.of)) goto L_1066bf48;
  /* 1066bf46 jmp 0x1066bf5a */
  goto L_1066bf5a;
L_1066bf48:;
  /* 1066bf48 jmp 0x1066bf55 */
  goto L_1066bf55;
L_1066bf4a:;
  /* 1066bf4a call dword ptr [0x106912f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f4))), 0x1066bf50u);
  /* 1066bf50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1066bf53 jmp 0x1066bf5a */
  goto L_1066bf5a;
L_1066bf55:;
  /* 1066bf55 jmp 0x1066be5d */
  goto L_1066be5d;
L_1066bf5a:;
  /* 1066bf5a jmp 0x1066bfac */
  goto L_1066bfac;
L_1066bf5c:;
  /* 1066bf5c push 0 */
  push32((uint32_t)(0x0u));
  /* 1066bf5e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1066bf64 push ecx */
  push32((uint32_t)(ECX));
  /* 1066bf65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066bf68 push edx */
  push32((uint32_t)(EDX));
  /* 1066bf69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066bf6c push eax */
  push32((uint32_t)(EAX));
  /* 1066bf6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bf70 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066bf73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bf76 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066bf79 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066bf7c mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066bf83 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1066bf86 push ecx */
  push32((uint32_t)(ECX));
  /* 1066bf87 call dword ptr [0x106912b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b4))), 0x1066bf8du);
  /* 1066bf8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066bf8f je 0x1066bfa3 */
  if (C.zf) goto L_1066bfa3;
  /* 1066bf91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1066bf98 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1066bf9e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1066bfa1 jmp 0x1066bfac */
  goto L_1066bfac;
L_1066bfa3:;
  /* 1066bfa3 call dword ptr [0x106912f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f4))), 0x1066bfa9u);
  /* 1066bfa9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1066bfac:;
  /* 1066bfac cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bfb0 jne 0x1066c036 */
  if (!C.zf) goto L_1066c036;
  /* 1066bfb6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bfba je 0x1066bfea */
  if (C.zf) goto L_1066bfea;
  /* 1066bfbc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066bfc0 jne 0x1066bfd9 */
  if (!C.zf) goto L_1066bfd9;
  /* 1066bfc2 call 0x1066b370 */
  push32(0x1066bfc7u); f_1066b370();
  /* 1066bfc7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1066bfcd call 0x1066b380 */
  push32(0x1066bfd2u); f_1066b380();
  /* 1066bfd2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066bfd5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1066bfd7 jmp 0x1066bfe5 */
  goto L_1066bfe5;
L_1066bfd9:;
  /* 1066bfd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066bfdc push edx */
  push32((uint32_t)(EDX));
  /* 1066bfdd call 0x1066b2d0 */
  push32(0x1066bfe2u); f_1066b2d0();
  /* 1066bfe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066bfe5:;
  /* 1066bfe5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066bfe8 jmp 0x1066c03f */
  goto L_1066c03f;
L_1066bfea:;
  /* 1066bfea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bfed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066bff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066bff3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1066bff6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066bff9 mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066c000 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1066c005 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1066c008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066c00a je 0x1066c01b */
  if (C.zf) goto L_1066c01b;
  /* 1066c00c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066c00f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066c012 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c015 jne 0x1066c01b */
  if (!C.zf) goto L_1066c01b;
  /* 1066c017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066c019 jmp 0x1066c03f */
  goto L_1066c03f;
L_1066c01b:;
  /* 1066c01b call 0x1066b370 */
  push32(0x1066c020u); f_1066b370();
  /* 1066c020 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1066c026 call 0x1066b380 */
  push32(0x1066c02bu); f_1066b380();
  /* 1066c02b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1066c031 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066c034 jmp 0x1066c03f */
  goto L_1066c03f;
L_1066c036:;
  /* 1066c036 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066c039 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1066c03f:;
  /* 1066c03f mov esp, ebp */
  ESP = (EBP);
  /* 1066c041 pop ebp */
  EBP = (pop32());
  /* 1066c042 ret  */
  ESPCHK(0x1066bdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c050 @ 0x1066c050 (199 bytes, 68 insns) */
void f_1066c050(void) {
  FTRACE(0x1066c050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c050 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c051 mov ebp, esp */
  EBP = (ESP);
  /* 1066c053 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c054 push ebx */
  push32((uint32_t)(EBX));
  /* 1066c055 push esi */
  push32((uint32_t)(ESI));
  /* 1066c056 push edi */
  push32((uint32_t)(EDI));
L_1066c057:;
  /* 1066c057 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c05b jne 0x1066c07b */
  if (!C.zf) goto L_1066c07b;
  /* 1066c05d push 0x1068af60 */
  push32((uint32_t)(0x1068af60u));
  /* 1066c062 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066c064 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1066c066 push 0x1068b030 */
  push32((uint32_t)(0x1068b030u));
  /* 1066c06b push 2 */
  push32((uint32_t)(0x2u));
  /* 1066c06d call 0x10662560 */
  push32(0x1066c072u); f_10662560();
  /* 1066c072 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c075 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c078 jne 0x1066c07b */
  if (!C.zf) goto L_1066c07b;
  /* 1066c07a int3  */
  x86_unimpl("int3 @ 0x1066c07a");
L_1066c07b:;
  /* 1066c07b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066c07d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066c07f jne 0x1066c057 */
  if (!C.zf) goto L_1066c057;
  /* 1066c081 mov ecx, dword ptr [0x1068f69c] */
  ECX = (r32((uint32_t)(0x1068f69c)));
  /* 1066c087 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c08a mov dword ptr [0x1068f69c], ecx */
  w32((uint32_t)(0x1068f69c), (ECX));
  /* 1066c090 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c093 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066c096 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1066c098 push 0x1068b030 */
  push32((uint32_t)(0x1068b030u));
  /* 1066c09d push 2 */
  push32((uint32_t)(0x2u));
  /* 1066c09f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1066c0a4 call 0x106634a0 */
  push32(0x1066c0a9u); f_106634a0();
  /* 1066c0a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c0ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0af mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1066c0b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0b5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c0b9 je 0x1066c0d6 */
  if (C.zf) goto L_1066c0d6;
  /* 1066c0bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0be mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1066c0c1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1066c0c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0c7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1066c0ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0cd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1066c0d4 jmp 0x1066c0fb */
  goto L_1066c0fb;
L_1066c0d6:;
  /* 1066c0d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0d9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066c0dc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1066c0df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0e2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1066c0e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0e8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c0eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0ee mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1066c0f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0f4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1066c0fb:;
  /* 1066c0fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c0fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c101 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1066c104 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1066c106 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c109 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1066c110 pop edi */
  EDI = (pop32());
  /* 1066c111 pop esi */
  ESI = (pop32());
  /* 1066c112 pop ebx */
  EBX = (pop32());
  /* 1066c113 mov esp, ebp */
  ESP = (EBP);
  /* 1066c115 pop ebp */
  EBP = (pop32());
  /* 1066c116 ret  */
  ESPCHK(0x1066c050u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1066c120 (50 bytes, 17 insns) */
void f_1066c120(void) {
  FTRACE(0x1066c120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c120 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c121 mov ebp, esp */
  EBP = (ESP);
  /* 1066c123 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c126 cmp eax, dword ptr [0x10690f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10690f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c12c jb 0x1066c132 */
  if (C.cf) goto L_1066c132;
  /* 1066c12e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066c130 jmp 0x1066c150 */
  goto L_1066c150;
L_1066c132:;
  /* 1066c132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c135 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066c138 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c13b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066c13e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066c141 mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066c148 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1066c14d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1066c150:;
  /* 1066c150 pop ebp */
  EBP = (pop32());
  /* 1066c151 ret  */
  ESPCHK(0x1066c120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c160 @ 0x1066c160 (300 bytes, 80 insns) */
void f_1066c160(void) {
  FTRACE(0x1066c160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c160 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c161 mov ebp, esp */
  EBP = (ESP);
  /* 1066c163 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c164 cmp dword ptr [0x10690b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c16b jne 0x1066c179 */
  if (!C.zf) goto L_1066c179;
  /* 1066c16d mov dword ptr [0x10690b60], 0x200 */
  w32((uint32_t)(0x10690b60), (0x200u));
  /* 1066c177 jmp 0x1066c18c */
  goto L_1066c18c;
L_1066c179:;
  /* 1066c179 cmp dword ptr [0x10690b60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10690b60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c180 jge 0x1066c18c */
  if ((C.sf==C.of)) goto L_1066c18c;
  /* 1066c182 mov dword ptr [0x10690b60], 0x14 */
  w32((uint32_t)(0x10690b60), (0x14u));
L_1066c18c:;
  /* 1066c18c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1066c191 push 0x1068b03c */
  push32((uint32_t)(0x1068b03cu));
  /* 1066c196 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066c198 push 4 */
  push32((uint32_t)(0x4u));
  /* 1066c19a mov eax, dword ptr [0x10690b60] */
  EAX = (r32((uint32_t)(0x10690b60)));
  /* 1066c19f push eax */
  push32((uint32_t)(EAX));
  /* 1066c1a0 call 0x106638b0 */
  push32(0x1066c1a5u); f_106638b0();
  /* 1066c1a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c1a8 mov dword ptr [0x1068f810], eax */
  w32((uint32_t)(0x1068f810), (EAX));
  /* 1066c1ad cmp dword ptr [0x1068f810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c1b4 jne 0x1066c1f5 */
  if (!C.zf) goto L_1066c1f5;
  /* 1066c1b6 mov dword ptr [0x10690b60], 0x14 */
  w32((uint32_t)(0x10690b60), (0x14u));
  /* 1066c1c0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1066c1c5 push 0x1068b03c */
  push32((uint32_t)(0x1068b03cu));
  /* 1066c1ca push 2 */
  push32((uint32_t)(0x2u));
  /* 1066c1cc push 4 */
  push32((uint32_t)(0x4u));
  /* 1066c1ce mov ecx, dword ptr [0x10690b60] */
  ECX = (r32((uint32_t)(0x10690b60)));
  /* 1066c1d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c1d5 call 0x106638b0 */
  push32(0x1066c1dau); f_106638b0();
  /* 1066c1da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c1dd mov dword ptr [0x1068f810], eax */
  w32((uint32_t)(0x1068f810), (EAX));
  /* 1066c1e2 cmp dword ptr [0x1068f810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c1e9 jne 0x1066c1f5 */
  if (!C.zf) goto L_1066c1f5;
  /* 1066c1eb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1066c1ed call 0x10662410 */
  push32(0x1066c1f2u); f_10662410();
  /* 1066c1f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066c1f5:;
  /* 1066c1f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066c1fc jmp 0x1066c207 */
  goto L_1066c207;
L_1066c1fe:;
  /* 1066c1fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c201 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c204 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1066c207:;
  /* 1066c207 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c20b jge 0x1066c226 */
  if ((C.sf==C.of)) goto L_1066c226;
  /* 1066c20d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c210 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066c213 add eax, 0x1068e120 */
  { uint32_t _a=(EAX),_b=(0x1068e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c21b mov edx, dword ptr [0x1068f810] */
  EDX = (r32((uint32_t)(0x1068f810)));
  /* 1066c221 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1066c224 jmp 0x1066c1fe */
  goto L_1066c1fe;
L_1066c226:;
  /* 1066c226 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066c22d jmp 0x1066c238 */
  goto L_1066c238;
L_1066c22f:;
  /* 1066c22f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c232 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c235 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066c238:;
  /* 1066c238 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c23c jge 0x1066c288 */
  if ((C.sf==C.of)) goto L_1066c288;
  /* 1066c23e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c241 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066c244 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c247 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066c24a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066c24d mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066c254 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c258 je 0x1066c276 */
  if (C.zf) goto L_1066c276;
  /* 1066c25a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c25d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066c260 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c263 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066c266 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066c269 mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066c270 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c274 jne 0x1066c286 */
  if (!C.zf) goto L_1066c286;
L_1066c276:;
  /* 1066c276 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c279 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066c27c mov dword ptr [ecx + 0x1068e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1068e130), (0xffffffffu));
L_1066c286:;
  /* 1066c286 jmp 0x1066c22f */
  goto L_1066c22f;
L_1066c288:;
  /* 1066c288 mov esp, ebp */
  ESP = (EBP);
  /* 1066c28a pop ebp */
  EBP = (pop32());
  /* 1066c28b ret  */
  ESPCHK(0x1066c160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c290 @ 0x1066c290 (26 bytes, 9 insns) */
void f_1066c290(void) {
  FTRACE(0x1066c290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c290 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c291 mov ebp, esp */
  EBP = (ESP);
  /* 1066c293 call 0x1066ce90 */
  push32(0x1066c298u); f_1066ce90();
  /* 1066c298 movsx eax, byte ptr [0x1068f4b4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1068f4b4))));
  /* 1066c29f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066c2a1 je 0x1066c2a8 */
  if (C.zf) goto L_1066c2a8;
  /* 1066c2a3 call 0x1066cc50 */
  push32(0x1066c2a8u); f_1066cc50();
L_1066c2a8:;
  /* 1066c2a8 pop ebp */
  EBP = (pop32());
  /* 1066c2a9 ret  */
  ESPCHK(0x1066c290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2b0 @ 0x1066c2b0 (61 bytes, 20 insns) */
void f_1066c2b0(void) {
  FTRACE(0x1066c2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1066c2b3 cmp dword ptr [ebp + 8], 0x1068e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1068e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c2ba jb 0x1066c2de */
  if (C.cf) goto L_1066c2de;
  /* 1066c2bc cmp dword ptr [ebp + 8], 0x1068e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1068e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c2c3 ja 0x1066c2de */
  if ((!C.cf&&!C.zf)) goto L_1066c2de;
  /* 1066c2c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c2c8 sub eax, 0x1068e120 */
  { uint32_t _a=(EAX),_b=(0x1068e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066c2cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066c2d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c2d3 push eax */
  push32((uint32_t)(EAX));
  /* 1066c2d4 call 0x10666ea0 */
  push32(0x1066c2d9u); f_10666ea0();
  /* 1066c2d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c2dc jmp 0x1066c2eb */
  goto L_1066c2eb;
L_1066c2de:;
  /* 1066c2de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c2e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c2e5 call dword ptr [0x10691344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691344))), 0x1066c2ebu);
L_1066c2eb:;
  /* 1066c2eb pop ebp */
  EBP = (pop32());
  /* 1066c2ec ret  */
  ESPCHK(0x1066c2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2f0 @ 0x1066c2f0 (41 bytes, 16 insns) */
void f_1066c2f0(void) {
  FTRACE(0x1066c2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1066c2f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c2f7 jge 0x1066c30a */
  if ((C.sf==C.of)) goto L_1066c30a;
  /* 1066c2f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c2fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c2ff push eax */
  push32((uint32_t)(EAX));
  /* 1066c300 call 0x10666ea0 */
  push32(0x1066c305u); f_10666ea0();
  /* 1066c305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c308 jmp 0x1066c317 */
  goto L_1066c317;
L_1066c30a:;
  /* 1066c30a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066c30d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c310 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c311 call dword ptr [0x10691344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691344))), 0x1066c317u);
L_1066c317:;
  /* 1066c317 pop ebp */
  EBP = (pop32());
  /* 1066c318 ret  */
  ESPCHK(0x1066c2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c320 @ 0x1066c320 (61 bytes, 20 insns) */
void f_1066c320(void) {
  FTRACE(0x1066c320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c320 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c321 mov ebp, esp */
  EBP = (ESP);
  /* 1066c323 cmp dword ptr [ebp + 8], 0x1068e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1068e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c32a jb 0x1066c34e */
  if (C.cf) goto L_1066c34e;
  /* 1066c32c cmp dword ptr [ebp + 8], 0x1068e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1068e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c333 ja 0x1066c34e */
  if ((!C.cf&&!C.zf)) goto L_1066c34e;
  /* 1066c335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c338 sub eax, 0x1068e120 */
  { uint32_t _a=(EAX),_b=(0x1068e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066c33d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066c340 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c343 push eax */
  push32((uint32_t)(EAX));
  /* 1066c344 call 0x10666f40 */
  push32(0x1066c349u); f_10666f40();
  /* 1066c349 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c34c jmp 0x1066c35b */
  goto L_1066c35b;
L_1066c34e:;
  /* 1066c34e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c351 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c354 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c355 call dword ptr [0x10691348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691348))), 0x1066c35bu);
L_1066c35b:;
  /* 1066c35b pop ebp */
  EBP = (pop32());
  /* 1066c35c ret  */
  ESPCHK(0x1066c320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c360 @ 0x1066c360 (41 bytes, 16 insns) */
void f_1066c360(void) {
  FTRACE(0x1066c360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c360 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c361 mov ebp, esp */
  EBP = (ESP);
  /* 1066c363 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c367 jge 0x1066c37a */
  if ((C.sf==C.of)) goto L_1066c37a;
  /* 1066c369 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c36c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c36f push eax */
  push32((uint32_t)(EAX));
  /* 1066c370 call 0x10666f40 */
  push32(0x1066c375u); f_10666f40();
  /* 1066c375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c378 jmp 0x1066c387 */
  goto L_1066c387;
L_1066c37a:;
  /* 1066c37a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066c37d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c380 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c381 call dword ptr [0x10691348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691348))), 0x1066c387u);
L_1066c387:;
  /* 1066c387 pop ebp */
  EBP = (pop32());
  /* 1066c388 ret  */
  ESPCHK(0x1066c360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x1066c390 (119 bytes, 34 insns) */
void f_1066c390(void) {
  FTRACE(0x1066c390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c390 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c391 mov ebp, esp */
  EBP = (ESP);
  /* 1066c393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066c396 push 0x1068f80c */
  push32((uint32_t)(0x1068f80cu));
  /* 1066c39b call dword ptr [0x106912c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912c8))), 0x1066c3a1u);
  /* 1066c3a1 cmp dword ptr [0x1068f7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c3a8 je 0x1066c3c8 */
  if (C.zf) goto L_1066c3c8;
  /* 1066c3aa push 0x1068f80c */
  push32((uint32_t)(0x1068f80cu));
  /* 1066c3af call dword ptr [0x106912b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b8))), 0x1066c3b5u);
  /* 1066c3b5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1066c3b7 call 0x10666ea0 */
  push32(0x1066c3bcu); f_10666ea0();
  /* 1066c3bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c3bf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1066c3c6 jmp 0x1066c3cf */
  goto L_1066c3cf;
L_1066c3c8:;
  /* 1066c3c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1066c3cf:;
  /* 1066c3cf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1066c3d3 push eax */
  push32((uint32_t)(EAX));
  /* 1066c3d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c3d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c3d8 call 0x1066c410 */
  push32(0x1066c3ddu); f_1066c410();
  /* 1066c3dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c3e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066c3e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c3e7 je 0x1066c3f5 */
  if (C.zf) goto L_1066c3f5;
  /* 1066c3e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1066c3eb call 0x10666f40 */
  push32(0x1066c3f0u); f_10666f40();
  /* 1066c3f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c3f3 jmp 0x1066c400 */
  goto L_1066c400;
L_1066c3f5:;
  /* 1066c3f5 push 0x1068f80c */
  push32((uint32_t)(0x1068f80cu));
  /* 1066c3fa call dword ptr [0x106912b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b8))), 0x1066c400u);
L_1066c400:;
  /* 1066c400 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066c403 mov esp, ebp */
  ESP = (EBP);
  /* 1066c405 pop ebp */
  EBP = (pop32());
  /* 1066c406 ret  */
  ESPCHK(0x1066c390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c410 @ 0x1066c410 (160 bytes, 50 insns) */
void f_1066c410(void) {
  FTRACE(0x1066c410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c410 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c411 mov ebp, esp */
  EBP = (ESP);
  /* 1066c413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066c416 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c41a jne 0x1066c423 */
  if (!C.zf) goto L_1066c423;
  /* 1066c41c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066c41e jmp 0x1066c4ac */
  goto L_1066c4ac;
L_1066c423:;
  /* 1066c423 cmp dword ptr [0x1068f680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c42a jne 0x1066c45a */
  if (!C.zf) goto L_1066c45a;
  /* 1066c42c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066c42f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066c434 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c439 jle 0x1066c44b */
  if ((C.zf||C.sf!=C.of)) goto L_1066c44b;
  /* 1066c43b call 0x1066b370 */
  push32(0x1066c440u); f_1066b370();
  /* 1066c440 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1066c446 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066c449 jmp 0x1066c4ac */
  goto L_1066c4ac;
L_1066c44b:;
  /* 1066c44b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c44e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1066c451 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1066c453 mov eax, 1 */
  EAX = (0x1u);
  /* 1066c458 jmp 0x1066c4ac */
  goto L_1066c4ac;
L_1066c45a:;
  /* 1066c45a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1066c461 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1066c464 push eax */
  push32((uint32_t)(EAX));
  /* 1066c465 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066c467 mov ecx, dword ptr [0x1068dea4] */
  ECX = (r32((uint32_t)(0x1068dea4)));
  /* 1066c46d push ecx */
  push32((uint32_t)(ECX));
  /* 1066c46e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c471 push edx */
  push32((uint32_t)(EDX));
  /* 1066c472 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066c474 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1066c477 push eax */
  push32((uint32_t)(EAX));
  /* 1066c478 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1066c47d mov ecx, dword ptr [0x1068f690] */
  ECX = (r32((uint32_t)(0x1068f690)));
  /* 1066c483 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c484 call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x1066c48au);
  /* 1066c48a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066c48d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c491 je 0x1066c499 */
  if (C.zf) goto L_1066c499;
  /* 1066c493 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c497 je 0x1066c4a9 */
  if (C.zf) goto L_1066c4a9;
L_1066c499:;
  /* 1066c499 call 0x1066b370 */
  push32(0x1066c49eu); f_1066b370();
  /* 1066c49e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1066c4a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066c4a7 jmp 0x1066c4ac */
  goto L_1066c4ac;
L_1066c4a9:;
  /* 1066c4a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1066c4ac:;
  /* 1066c4ac mov esp, ebp */
  ESP = (EBP);
  /* 1066c4ae pop ebp */
  EBP = (pop32());
  /* 1066c4af ret  */
  ESPCHK(0x1066c410u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1066c4b0 (32 bytes, 18 insns) */
void f_1066c4b0(void) {
  FTRACE(0x1066c4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1066c4b3 push ebx */
  push32((uint32_t)(EBX));
  /* 1066c4b4 push esi */
  push32((uint32_t)(ESI));
  /* 1066c4b5 push edi */
  push32((uint32_t)(EDI));
  /* 1066c4b6 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c4b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066c4b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066c4bb push 0x1066c4c8 */
  push32((uint32_t)(0x1066c4c8u));
  /* 1066c4c0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1066c4c3 call 0x10673bfc */
  push32(0x1066c4c8u); f_10673bfc();
  /* 1066c4c8 pop ebp */
  EBP = (pop32());
  /* 1066c4c9 pop edi */
  EDI = (pop32());
  /* 1066c4ca pop esi */
  ESI = (pop32());
  /* 1066c4cb pop ebx */
  EBX = (pop32());
  /* 1066c4cc mov esp, ebp */
  ESP = (EBP);
  /* 1066c4ce pop ebp */
  EBP = (pop32());
  /* 1066c4cf ret  */
  ESPCHK(0x1066c4b0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1066c4f2 (104 bytes, 33 insns) */
void f_1066c4f2(void) {
  FTRACE(0x1066c4f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c4f2 push ebx */
  push32((uint32_t)(EBX));
  /* 1066c4f3 push esi */
  push32((uint32_t)(ESI));
  /* 1066c4f4 push edi */
  push32((uint32_t)(EDI));
  /* 1066c4f5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1066c4f9 push eax */
  push32((uint32_t)(EAX));
  /* 1066c4fa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1066c4fc push 0x1066c4d0 */
  push32((uint32_t)(0x1066c4d0u));
  /* 1066c501 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1066c508 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1066c50f:;
  /* 1066c50f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1066c513 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1066c516 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1066c519 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c51c je 0x1066c54c */
  if (C.zf) goto L_1066c54c;
  /* 1066c51e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c522 je 0x1066c54c */
  if (C.zf) goto L_1066c54c;
  /* 1066c524 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1066c527 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1066c52a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1066c52e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1066c531 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c536 jne 0x1066c54a */
  if (!C.zf) goto L_1066c54a;
  /* 1066c538 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1066c53d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1066c541 call 0x1066c586 */
  push32(0x1066c546u); f_1066c586();
  /* 1066c546 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1066c54au);
L_1066c54a:;
  /* 1066c54a jmp 0x1066c50f */
  goto L_1066c50f;
L_1066c54c:;
  /* 1066c54c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1066c553 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c556 pop edi */
  EDI = (pop32());
  /* 1066c557 pop esi */
  ESI = (pop32());
  /* 1066c558 pop ebx */
  EBX = (pop32());
  /* 1066c559 ret  */
  ESPCHK(0x1066c4f2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c586 @ 0x1066c586 (24 bytes, 10 insns) */
void f_1066c586(void) {
  FTRACE(0x1066c586u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c586 push ebx */
  push32((uint32_t)(EBX));
  /* 1066c587 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c588 mov ebx, 0x1068e3b8 */
  EBX = (0x1068e3b8u);
  /* 1066c58d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c590 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1066c593 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1066c596 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1066c599 pop ecx */
  ECX = (pop32());
  /* 1066c59a pop ebx */
  EBX = (pop32());
  /* 1066c59b ret 4 */
  ESPCHK(0x1066c586u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c665 @ 0x1066c665 (27 bytes, 11 insns) */
void f_1066c665(void) {
  FTRACE(0x1066c665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c665 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c666 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1066c66a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1066c66c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1066c66f push eax */
  push32((uint32_t)(EAX));
  /* 1066c670 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1066c673 push eax */
  push32((uint32_t)(EAX));
  /* 1066c674 call 0x1066c4f2 */
  push32(0x1066c679u); f_1066c4f2();
  /* 1066c679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c67c pop ebp */
  EBP = (pop32());
  /* 1066c67d ret 4 */
  ESPCHK(0x1066c665u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c680 @ 0x1066c680 (482 bytes, 138 insns) */
void f_1066c680(void) {
  FTRACE(0x1066c680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c680 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c681 mov ebp, esp */
  EBP = (ESP);
  /* 1066c683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066c686 push esi */
  push32((uint32_t)(ESI));
  /* 1066c687 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1066c68e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1066c690 call 0x10666ea0 */
  push32(0x1066c695u); f_10666ea0();
  /* 1066c695 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c698 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1066c69f jmp 0x1066c6aa */
  goto L_1066c6aa;
L_1066c6a1:;
  /* 1066c6a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066c6a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c6a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1066c6aa:;
  /* 1066c6aa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c6ae jge 0x1066c850 */
  if ((C.sf==C.of)) goto L_1066c850;
  /* 1066c6b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066c6b7 cmp dword ptr [ecx*4 + 0x10690e60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10690e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c6bf je 0x1066c7b6 */
  if (C.zf) goto L_1066c7b6;
  /* 1066c6c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066c6c8 mov eax, dword ptr [edx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10690e60)));
  /* 1066c6cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066c6d2 jmp 0x1066c6dd */
  goto L_1066c6dd;
L_1066c6d4:;
  /* 1066c6d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c6d7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c6da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1066c6dd:;
  /* 1066c6dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066c6e0 mov eax, dword ptr [edx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10690e60)));
  /* 1066c6e7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c6ec cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c6ef jae 0x1066c7a6 */
  if (!C.cf) goto L_1066c7a6;
  /* 1066c6f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c6f8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1066c6fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1066c6ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066c701 jne 0x1066c7a1 */
  if (!C.zf) goto L_1066c7a1;
  /* 1066c707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c70a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c70e jne 0x1066c749 */
  if (!C.zf) goto L_1066c749;
  /* 1066c710 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1066c712 call 0x10666ea0 */
  push32(0x1066c717u); f_10666ea0();
  /* 1066c717 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c71a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c71d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c721 jne 0x1066c73f */
  if (!C.zf) goto L_1066c73f;
  /* 1066c723 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c726 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c729 push edx */
  push32((uint32_t)(EDX));
  /* 1066c72a call dword ptr [0x10691340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691340))), 0x1066c730u);
  /* 1066c730 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c733 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1066c736 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c73c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1066c73f:;
  /* 1066c73f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1066c741 call 0x10666f40 */
  push32(0x1066c746u); f_10666f40();
  /* 1066c746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066c749:;
  /* 1066c749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c74c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c74f push eax */
  push32((uint32_t)(EAX));
  /* 1066c750 call dword ptr [0x10691344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691344))), 0x1066c756u);
  /* 1066c756 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c759 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1066c75d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1066c760 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066c762 je 0x1066c776 */
  if (C.zf) goto L_1066c776;
  /* 1066c764 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c767 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c76a push eax */
  push32((uint32_t)(EAX));
  /* 1066c76b call dword ptr [0x10691348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691348))), 0x1066c771u);
  /* 1066c771 jmp 0x1066c6d4 */
  goto L_1066c6d4;
L_1066c776:;
  /* 1066c776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c779 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1066c77f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066c782 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066c785 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066c788 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c78b sub eax, dword ptr [edx*4 + 0x10690e60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10690e60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066c792 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1066c793 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1066c798 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1066c79a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c79c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066c79f jmp 0x1066c7a6 */
  goto L_1066c7a6;
L_1066c7a1:;
  /* 1066c7a1 jmp 0x1066c6d4 */
  goto L_1066c6d4;
L_1066c7a6:;
  /* 1066c7a6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c7aa je 0x1066c7b1 */
  if (C.zf) goto L_1066c7b1;
  /* 1066c7ac jmp 0x1066c850 */
  goto L_1066c850;
L_1066c7b1:;
  /* 1066c7b1 jmp 0x1066c84b */
  goto L_1066c84b;
L_1066c7b6:;
  /* 1066c7b6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1066c7b8 push 0x1068b044 */
  push32((uint32_t)(0x1068b044u));
  /* 1066c7bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1066c7bf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1066c7c4 call 0x106634a0 */
  push32(0x1066c7c9u); f_106634a0();
  /* 1066c7c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c7cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066c7cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c7d3 je 0x1066c849 */
  if (C.zf) goto L_1066c849;
  /* 1066c7d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066c7d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c7db mov dword ptr [eax*4 + 0x10690e60], ecx */
  w32((uint32_t)(EAX*4 + 0x10690e60), (ECX));
  /* 1066c7e2 mov edx, dword ptr [0x10690f9c] */
  EDX = (r32((uint32_t)(0x10690f9c)));
  /* 1066c7e8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c7eb mov dword ptr [0x10690f9c], edx */
  w32((uint32_t)(0x10690f9c), (EDX));
  /* 1066c7f1 jmp 0x1066c7fc */
  goto L_1066c7fc;
L_1066c7f3:;
  /* 1066c7f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c7f6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c7f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066c7fc:;
  /* 1066c7fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066c7ff mov edx, dword ptr [ecx*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066c806 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c80c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c80f jae 0x1066c834 */
  if (!C.cf) goto L_1066c834;
  /* 1066c811 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c814 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1066c818 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c81b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1066c821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c824 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1066c828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066c82b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1066c832 jmp 0x1066c7f3 */
  goto L_1066c7f3;
L_1066c834:;
  /* 1066c834 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066c837 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066c83a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066c83d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066c840 push edx */
  push32((uint32_t)(EDX));
  /* 1066c841 call 0x1066cb90 */
  push32(0x1066c846u); f_1066cb90();
  /* 1066c846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066c849:;
  /* 1066c849 jmp 0x1066c850 */
  goto L_1066c850;
L_1066c84b:;
  /* 1066c84b jmp 0x1066c6a1 */
  goto L_1066c6a1;
L_1066c850:;
  /* 1066c850 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1066c852 call 0x10666f40 */
  push32(0x1066c857u); f_10666f40();
  /* 1066c857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066c85a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066c85d pop esi */
  ESI = (pop32());
  /* 1066c85e mov esp, ebp */
  ESP = (EBP);
  /* 1066c860 pop ebp */
  EBP = (pop32());
  /* 1066c861 ret  */
  ESPCHK(0x1066c680u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1066c870 (183 bytes, 57 insns) */
void f_1066c870(void) {
  FTRACE(0x1066c870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c870 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c871 mov ebp, esp */
  EBP = (ESP);
  /* 1066c873 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c877 cmp eax, dword ptr [0x10690f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10690f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c87d jae 0x1066c90a */
  if (!C.cf) goto L_1066c90a;
  /* 1066c883 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c886 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066c889 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c88c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066c88f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066c892 mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066c899 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c89d jne 0x1066c90a */
  if (!C.zf) goto L_1066c90a;
  /* 1066c89f cmp dword ptr [0x1068f474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c8a6 jne 0x1066c8ea */
  if (!C.zf) goto L_1066c8ea;
  /* 1066c8a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c8ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066c8ae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c8b2 je 0x1066c8c2 */
  if (C.zf) goto L_1066c8c2;
  /* 1066c8b4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c8b8 je 0x1066c8d0 */
  if (C.zf) goto L_1066c8d0;
  /* 1066c8ba cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c8be je 0x1066c8de */
  if (C.zf) goto L_1066c8de;
  /* 1066c8c0 jmp 0x1066c8ea */
  goto L_1066c8ea;
L_1066c8c2:;
  /* 1066c8c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066c8c5 push edx */
  push32((uint32_t)(EDX));
  /* 1066c8c6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1066c8c8 call dword ptr [0x10691298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691298))), 0x1066c8ceu);
  /* 1066c8ce jmp 0x1066c8ea */
  goto L_1066c8ea;
L_1066c8d0:;
  /* 1066c8d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066c8d3 push eax */
  push32((uint32_t)(EAX));
  /* 1066c8d4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1066c8d6 call dword ptr [0x10691298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691298))), 0x1066c8dcu);
  /* 1066c8dc jmp 0x1066c8ea */
  goto L_1066c8ea;
L_1066c8de:;
  /* 1066c8de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066c8e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c8e2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1066c8e4 call dword ptr [0x10691298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691298))), 0x1066c8eau);
L_1066c8ea:;
  /* 1066c8ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c8ed sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1066c8f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c8f3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1066c8f6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066c8f9 mov ecx, dword ptr [edx*4 + 0x10690e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10690e60)));
  /* 1066c900 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066c903 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1066c906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066c908 jmp 0x1066c923 */
  goto L_1066c923;
L_1066c90a:;
  /* 1066c90a call 0x1066b370 */
  push32(0x1066c90fu); f_1066b370();
  /* 1066c90f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1066c915 call 0x1066b380 */
  push32(0x1066c91au); f_1066b380();
  /* 1066c91a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1066c920 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1066c923:;
  /* 1066c923 mov esp, ebp */
  ESP = (EBP);
  /* 1066c925 pop ebp */
  EBP = (pop32());
  /* 1066c926 ret  */
  ESPCHK(0x1066c870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c930 @ 0x1066c930 (216 bytes, 63 insns) */
void f_1066c930(void) {
  FTRACE(0x1066c930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066c930 push ebp */
  push32((uint32_t)(EBP));
  /* 1066c931 mov ebp, esp */
  EBP = (ESP);
  /* 1066c933 push ecx */
  push32((uint32_t)(ECX));
  /* 1066c934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c937 cmp eax, dword ptr [0x10690f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10690f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c93d jae 0x1066c9eb */
  if (!C.cf) goto L_1066c9eb;
  /* 1066c943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c946 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066c949 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c94c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066c94f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066c952 mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066c959 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1066c95e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1066c961 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066c963 je 0x1066c9eb */
  if (C.zf) goto L_1066c9eb;
  /* 1066c969 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c96c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1066c96f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c972 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1066c975 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066c978 mov ecx, dword ptr [edx*4 + 0x10690e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10690e60)));
  /* 1066c97f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c983 je 0x1066c9eb */
  if (C.zf) goto L_1066c9eb;
  /* 1066c985 cmp dword ptr [0x1068f474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c98c jne 0x1066c9ca */
  if (!C.zf) goto L_1066c9ca;
  /* 1066c98e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c991 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066c994 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c998 je 0x1066c9a8 */
  if (C.zf) goto L_1066c9a8;
  /* 1066c99a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c99e je 0x1066c9b4 */
  if (C.zf) goto L_1066c9b4;
  /* 1066c9a0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066c9a4 je 0x1066c9c0 */
  if (C.zf) goto L_1066c9c0;
  /* 1066c9a6 jmp 0x1066c9ca */
  goto L_1066c9ca;
L_1066c9a8:;
  /* 1066c9a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066c9aa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1066c9ac call dword ptr [0x10691298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691298))), 0x1066c9b2u);
  /* 1066c9b2 jmp 0x1066c9ca */
  goto L_1066c9ca;
L_1066c9b4:;
  /* 1066c9b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066c9b6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1066c9b8 call dword ptr [0x10691298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691298))), 0x1066c9beu);
  /* 1066c9be jmp 0x1066c9ca */
  goto L_1066c9ca;
L_1066c9c0:;
  /* 1066c9c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066c9c2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1066c9c4 call dword ptr [0x10691298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691298))), 0x1066c9cau);
L_1066c9ca:;
  /* 1066c9ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c9cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066c9d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066c9d3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1066c9d6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066c9d9 mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066c9e0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1066c9e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066c9e9 jmp 0x1066ca04 */
  goto L_1066ca04;
L_1066c9eb:;
  /* 1066c9eb call 0x1066b370 */
  push32(0x1066c9f0u); f_1066b370();
  /* 1066c9f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1066c9f6 call 0x1066b380 */
  push32(0x1066c9fbu); f_1066b380();
  /* 1066c9fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1066ca01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1066ca04:;
  /* 1066ca04 mov esp, ebp */
  ESP = (EBP);
  /* 1066ca06 pop ebp */
  EBP = (pop32());
  /* 1066ca07 ret  */
  ESPCHK(0x1066c930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca10 @ 0x1066ca10 (102 bytes, 30 insns) */
void f_1066ca10(void) {
  FTRACE(0x1066ca10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066ca10 push ebp */
  push32((uint32_t)(EBP));
  /* 1066ca11 mov ebp, esp */
  EBP = (ESP);
  /* 1066ca13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ca16 cmp eax, dword ptr [0x10690f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10690f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ca1c jae 0x1066ca5b */
  if (!C.cf) goto L_1066ca5b;
  /* 1066ca1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ca21 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066ca24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ca27 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066ca2a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066ca2d mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066ca34 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1066ca39 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1066ca3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066ca3e je 0x1066ca5b */
  if (C.zf) goto L_1066ca5b;
  /* 1066ca40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ca43 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1066ca46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ca49 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1066ca4c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066ca4f mov ecx, dword ptr [edx*4 + 0x10690e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10690e60)));
  /* 1066ca56 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1066ca59 jmp 0x1066ca74 */
  goto L_1066ca74;
L_1066ca5b:;
  /* 1066ca5b call 0x1066b370 */
  push32(0x1066ca60u); f_1066b370();
  /* 1066ca60 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1066ca66 call 0x1066b380 */
  push32(0x1066ca6bu); f_1066b380();
  /* 1066ca6b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1066ca71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1066ca74:;
  /* 1066ca74 pop ebp */
  EBP = (pop32());
  /* 1066ca75 ret  */
  ESPCHK(0x1066ca10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca80 @ 0x1066ca80 (260 bytes, 83 insns) */
void f_1066ca80(void) {
  FTRACE(0x1066ca80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066ca80 push ebp */
  push32((uint32_t)(EBP));
  /* 1066ca81 mov ebp, esp */
  EBP = (ESP);
  /* 1066ca83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ca86 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1066ca8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066ca8d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1066ca90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ca92 je 0x1066ca9d */
  if (C.zf) goto L_1066ca9d;
  /* 1066ca94 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1066ca97 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1066ca9a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1066ca9d:;
  /* 1066ca9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066caa0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1066caa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066caa8 je 0x1066cab2 */
  if (C.zf) goto L_1066cab2;
  /* 1066caaa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1066caad or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1066caaf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1066cab2:;
  /* 1066cab2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066cab5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1066cabb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066cabd je 0x1066cac8 */
  if (C.zf) goto L_1066cac8;
  /* 1066cabf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1066cac2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1066cac5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1066cac8:;
  /* 1066cac8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cacb push eax */
  push32((uint32_t)(EAX));
  /* 1066cacc call dword ptr [0x10691300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691300))), 0x1066cad2u);
  /* 1066cad2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066cad5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cad9 jne 0x1066caf2 */
  if (!C.zf) goto L_1066caf2;
  /* 1066cadb call dword ptr [0x106912f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f4))), 0x1066cae1u);
  /* 1066cae1 push eax */
  push32((uint32_t)(EAX));
  /* 1066cae2 call 0x1066b2d0 */
  push32(0x1066cae7u); f_1066b2d0();
  /* 1066cae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066caea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066caed jmp 0x1066cb80 */
  goto L_1066cb80;
L_1066caf2:;
  /* 1066caf2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066caf6 jne 0x1066cb03 */
  if (!C.zf) goto L_1066cb03;
  /* 1066caf8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1066cafb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1066cafe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1066cb01 jmp 0x1066cb12 */
  goto L_1066cb12;
L_1066cb03:;
  /* 1066cb03 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cb07 jne 0x1066cb12 */
  if (!C.zf) goto L_1066cb12;
  /* 1066cb09 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1066cb0c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1066cb0f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1066cb12:;
  /* 1066cb12 call 0x1066c680 */
  push32(0x1066cb17u); f_1066c680();
  /* 1066cb17 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066cb1a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cb1e jne 0x1066cb3b */
  if (!C.zf) goto L_1066cb3b;
  /* 1066cb20 call 0x1066b370 */
  push32(0x1066cb25u); f_1066b370();
  /* 1066cb25 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1066cb2b call 0x1066b380 */
  push32(0x1066cb30u); f_1066b380();
  /* 1066cb30 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1066cb36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066cb39 jmp 0x1066cb80 */
  goto L_1066cb80;
L_1066cb3b:;
  /* 1066cb3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cb3e push eax */
  push32((uint32_t)(EAX));
  /* 1066cb3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cb42 push ecx */
  push32((uint32_t)(ECX));
  /* 1066cb43 call 0x1066c870 */
  push32(0x1066cb48u); f_1066c870();
  /* 1066cb48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cb4b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1066cb4e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1066cb51 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1066cb54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cb57 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066cb5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cb5d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1066cb60 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066cb63 mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066cb6a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1066cb6d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1066cb71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cb74 push ecx */
  push32((uint32_t)(ECX));
  /* 1066cb75 call 0x1066cc20 */
  push32(0x1066cb7au); f_1066cc20();
  /* 1066cb7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cb7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1066cb80:;
  /* 1066cb80 mov esp, ebp */
  ESP = (EBP);
  /* 1066cb82 pop ebp */
  EBP = (pop32());
  /* 1066cb83 ret  */
  ESPCHK(0x1066ca80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb90 @ 0x1066cb90 (134 bytes, 44 insns) */
void f_1066cb90(void) {
  FTRACE(0x1066cb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066cb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1066cb91 mov ebp, esp */
  EBP = (ESP);
  /* 1066cb93 push ecx */
  push32((uint32_t)(ECX));
  /* 1066cb94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cb97 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066cb9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cb9d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1066cba0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066cba3 mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066cbaa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cbac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066cbaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066cbb2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cbb6 jne 0x1066cbf1 */
  if (!C.zf) goto L_1066cbf1;
  /* 1066cbb8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1066cbba call 0x10666ea0 */
  push32(0x1066cbbfu); f_10666ea0();
  /* 1066cbbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cbc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066cbc5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cbc9 jne 0x1066cbe7 */
  if (!C.zf) goto L_1066cbe7;
  /* 1066cbcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066cbce add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cbd1 push edx */
  push32((uint32_t)(EDX));
  /* 1066cbd2 call dword ptr [0x10691340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691340))), 0x1066cbd8u);
  /* 1066cbd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066cbdb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1066cbde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cbe1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066cbe4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1066cbe7:;
  /* 1066cbe7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1066cbe9 call 0x10666f40 */
  push32(0x1066cbeeu); f_10666f40();
  /* 1066cbee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066cbf1:;
  /* 1066cbf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cbf4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066cbf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cbfa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1066cbfd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066cc00 mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066cc07 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1066cc0b push eax */
  push32((uint32_t)(EAX));
  /* 1066cc0c call dword ptr [0x10691344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691344))), 0x1066cc12u);
  /* 1066cc12 mov esp, ebp */
  ESP = (EBP);
  /* 1066cc14 pop ebp */
  EBP = (pop32());
  /* 1066cc15 ret  */
  ESPCHK(0x1066cb90u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1066cc20 (38 bytes, 13 insns) */
void f_1066cc20(void) {
  FTRACE(0x1066cc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066cc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1066cc21 mov ebp, esp */
  EBP = (ESP);
  /* 1066cc23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cc26 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066cc29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cc2c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1066cc2f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066cc32 mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066cc39 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1066cc3d push eax */
  push32((uint32_t)(EAX));
  /* 1066cc3e call dword ptr [0x10691348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691348))), 0x1066cc44u);
  /* 1066cc44 pop ebp */
  EBP = (pop32());
  /* 1066cc45 ret  */
  ESPCHK(0x1066cc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc50 @ 0x1066cc50 (218 bytes, 63 insns) */
void f_1066cc50(void) {
  FTRACE(0x1066cc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066cc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1066cc51 mov ebp, esp */
  EBP = (ESP);
  /* 1066cc53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066cc56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066cc5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1066cc5f call 0x10666ea0 */
  push32(0x1066cc64u); f_10666ea0();
  /* 1066cc64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cc67 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1066cc6e jmp 0x1066cc79 */
  goto L_1066cc79;
L_1066cc70:;
  /* 1066cc70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cc73 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cc76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1066cc79:;
  /* 1066cc79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cc7c cmp ecx, dword ptr [0x10690b60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10690b60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cc82 jge 0x1066cd19 */
  if ((C.sf==C.of)) goto L_1066cd19;
  /* 1066cc88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cc8b mov eax, dword ptr [0x1068f810] */
  EAX = (r32((uint32_t)(0x1068f810)));
  /* 1066cc90 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cc94 je 0x1066cd14 */
  if (C.zf) goto L_1066cd14;
  /* 1066cc96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cc99 mov edx, dword ptr [0x1068f810] */
  EDX = (r32((uint32_t)(0x1068f810)));
  /* 1066cc9f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1066cca2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1066cca5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1066ccab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066ccad je 0x1066ccd1 */
  if (C.zf) goto L_1066ccd1;
  /* 1066ccaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ccb2 mov eax, dword ptr [0x1068f810] */
  EAX = (r32((uint32_t)(0x1068f810)));
  /* 1066ccb7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1066ccba push ecx */
  push32((uint32_t)(ECX));
  /* 1066ccbb call 0x1066da40 */
  push32(0x1066ccc0u); f_1066da40();
  /* 1066ccc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ccc3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ccc6 je 0x1066ccd1 */
  if (C.zf) goto L_1066ccd1;
  /* 1066ccc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066cccb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ccce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1066ccd1:;
  /* 1066ccd1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ccd5 jl 0x1066cd14 */
  if ((C.sf!=C.of)) goto L_1066cd14;
  /* 1066ccd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ccda mov ecx, dword ptr [0x1068f810] */
  ECX = (r32((uint32_t)(0x1068f810)));
  /* 1066cce0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1066cce3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cce6 push edx */
  push32((uint32_t)(EDX));
  /* 1066cce7 call dword ptr [0x10691250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691250))), 0x1066ccedu);
  /* 1066cced push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ccef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ccf2 mov ecx, dword ptr [0x1068f810] */
  ECX = (r32((uint32_t)(0x1068f810)));
  /* 1066ccf8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1066ccfb push edx */
  push32((uint32_t)(EDX));
  /* 1066ccfc call 0x10663f30 */
  push32(0x1066cd01u); f_10663f30();
  /* 1066cd01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cd04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cd07 mov ecx, dword ptr [0x1068f810] */
  ECX = (r32((uint32_t)(0x1068f810)));
  /* 1066cd0d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1066cd14:;
  /* 1066cd14 jmp 0x1066cc70 */
  goto L_1066cc70;
L_1066cd19:;
  /* 1066cd19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066cd1b call 0x10666f40 */
  push32(0x1066cd20u); f_10666f40();
  /* 1066cd20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cd23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066cd26 mov esp, ebp */
  ESP = (EBP);
  /* 1066cd28 pop ebp */
  EBP = (pop32());
  /* 1066cd29 ret  */
  ESPCHK(0x1066cc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd30 @ 0x1066cd30 (68 bytes, 26 insns) */
void f_1066cd30(void) {
  FTRACE(0x1066cd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066cd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1066cd31 mov ebp, esp */
  EBP = (ESP);
  /* 1066cd33 push ecx */
  push32((uint32_t)(ECX));
  /* 1066cd34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cd38 jne 0x1066cd46 */
  if (!C.zf) goto L_1066cd46;
  /* 1066cd3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066cd3c call 0x1066cea0 */
  push32(0x1066cd41u); f_1066cea0();
  /* 1066cd41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cd44 jmp 0x1066cd70 */
  goto L_1066cd70;
L_1066cd46:;
  /* 1066cd46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cd49 push eax */
  push32((uint32_t)(EAX));
  /* 1066cd4a call 0x1066c2b0 */
  push32(0x1066cd4fu); f_1066c2b0();
  /* 1066cd4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cd52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cd55 push ecx */
  push32((uint32_t)(ECX));
  /* 1066cd56 call 0x1066cd80 */
  push32(0x1066cd5bu); f_1066cd80();
  /* 1066cd5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cd5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066cd61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cd64 push edx */
  push32((uint32_t)(EDX));
  /* 1066cd65 call 0x1066c320 */
  push32(0x1066cd6au); f_1066c320();
  /* 1066cd6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cd6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1066cd70:;
  /* 1066cd70 mov esp, ebp */
  ESP = (EBP);
  /* 1066cd72 pop ebp */
  EBP = (pop32());
  /* 1066cd73 ret  */
  ESPCHK(0x1066cd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd80 @ 0x1066cd80 (65 bytes, 26 insns) */
void f_1066cd80(void) {
  FTRACE(0x1066cd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066cd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1066cd81 mov ebp, esp */
  EBP = (ESP);
  /* 1066cd83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cd86 push eax */
  push32((uint32_t)(EAX));
  /* 1066cd87 call 0x1066cdd0 */
  push32(0x1066cd8cu); f_1066cdd0();
  /* 1066cd8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cd8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066cd91 je 0x1066cd98 */
  if (C.zf) goto L_1066cd98;
  /* 1066cd93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066cd96 jmp 0x1066cdbf */
  goto L_1066cdbf;
L_1066cd98:;
  /* 1066cd98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cd9b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066cd9e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1066cda4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066cda6 je 0x1066cdbd */
  if (C.zf) goto L_1066cdbd;
  /* 1066cda8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cdab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1066cdae push ecx */
  push32((uint32_t)(ECX));
  /* 1066cdaf call 0x1066db90 */
  push32(0x1066cdb4u); f_1066db90();
  /* 1066cdb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cdb7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066cdb9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066cdbb jmp 0x1066cdbf */
  goto L_1066cdbf;
L_1066cdbd:;
  /* 1066cdbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1066cdbf:;
  /* 1066cdbf pop ebp */
  EBP = (pop32());
  /* 1066cdc0 ret  */
  ESPCHK(0x1066cd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdd0 @ 0x1066cdd0 (183 bytes, 62 insns) */
void f_1066cdd0(void) {
  FTRACE(0x1066cdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066cdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066cdd1 mov ebp, esp */
  EBP = (ESP);
  /* 1066cdd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066cdd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066cddd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066cde0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066cde3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cde6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066cde9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1066cdec cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cdef jne 0x1066ce6b */
  if (!C.zf) goto L_1066ce6b;
  /* 1066cdf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066cdf4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1066cdf7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1066cdfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066cdff je 0x1066ce6b */
  if (C.zf) goto L_1066ce6b;
  /* 1066ce01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce07 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1066ce09 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ce0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066ce0f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ce13 jle 0x1066ce6b */
  if ((C.zf||C.sf!=C.of)) goto L_1066ce6b;
  /* 1066ce15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066ce18 push edx */
  push32((uint32_t)(EDX));
  /* 1066ce19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1066ce1f push ecx */
  push32((uint32_t)(ECX));
  /* 1066ce20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce23 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1066ce26 push eax */
  push32((uint32_t)(EAX));
  /* 1066ce27 call 0x1066bd40 */
  push32(0x1066ce2cu); f_1066bd40();
  /* 1066ce2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ce2f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ce32 jne 0x1066ce55 */
  if (!C.zf) goto L_1066ce55;
  /* 1066ce34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce37 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066ce3a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1066ce40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066ce42 je 0x1066ce53 */
  if (C.zf) goto L_1066ce53;
  /* 1066ce44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce47 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1066ce4a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1066ce4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce50 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1066ce53:;
  /* 1066ce53 jmp 0x1066ce6b */
  goto L_1066ce6b;
L_1066ce55:;
  /* 1066ce55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce58 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1066ce5b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1066ce5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce61 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1066ce64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1066ce6b:;
  /* 1066ce6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce71 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1066ce74 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1066ce76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ce79 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1066ce80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ce83 mov esp, ebp */
  ESP = (EBP);
  /* 1066ce85 pop ebp */
  EBP = (pop32());
  /* 1066ce86 ret  */
  ESPCHK(0x1066cdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce90 @ 0x1066ce90 (15 bytes, 7 insns) */
void f_1066ce90(void) {
  FTRACE(0x1066ce90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066ce90 push ebp */
  push32((uint32_t)(EBP));
  /* 1066ce91 mov ebp, esp */
  EBP = (ESP);
  /* 1066ce93 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066ce95 call 0x1066cea0 */
  push32(0x1066ce9au); f_1066cea0();
  /* 1066ce9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ce9d pop ebp */
  EBP = (pop32());
  /* 1066ce9e ret  */
  ESPCHK(0x1066ce90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cea0 @ 0x1066cea0 (319 bytes, 94 insns) */
void f_1066cea0(void) {
  FTRACE(0x1066cea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066cea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066cea1 mov ebp, esp */
  EBP = (ESP);
  /* 1066cea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066cea6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066cead mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1066ceb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ceb6 call 0x10666ea0 */
  push32(0x1066cebbu); f_10666ea0();
  /* 1066cebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cebe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1066cec5 jmp 0x1066ced0 */
  goto L_1066ced0;
L_1066cec7:;
  /* 1066cec7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066ceca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cecd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1066ced0:;
  /* 1066ced0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066ced3 cmp ecx, dword ptr [0x10690b60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10690b60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ced9 jge 0x1066cfc3 */
  if ((C.sf==C.of)) goto L_1066cfc3;
  /* 1066cedf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066cee2 mov eax, dword ptr [0x1068f810] */
  EAX = (r32((uint32_t)(0x1068f810)));
  /* 1066cee7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ceeb je 0x1066cfbe */
  if (C.zf) goto L_1066cfbe;
  /* 1066cef1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066cef4 mov edx, dword ptr [0x1068f810] */
  EDX = (r32((uint32_t)(0x1068f810)));
  /* 1066cefa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1066cefd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1066cf00 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1066cf06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066cf08 je 0x1066cfbe */
  if (C.zf) goto L_1066cfbe;
  /* 1066cf0e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066cf11 mov eax, dword ptr [0x1068f810] */
  EAX = (r32((uint32_t)(0x1068f810)));
  /* 1066cf16 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1066cf19 push ecx */
  push32((uint32_t)(ECX));
  /* 1066cf1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066cf1d push edx */
  push32((uint32_t)(EDX));
  /* 1066cf1e call 0x1066c2f0 */
  push32(0x1066cf23u); f_1066c2f0();
  /* 1066cf23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cf26 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066cf29 mov ecx, dword ptr [0x1068f810] */
  ECX = (r32((uint32_t)(0x1068f810)));
  /* 1066cf2f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1066cf32 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1066cf35 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1066cf3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066cf3c je 0x1066cfa5 */
  if (C.zf) goto L_1066cfa5;
  /* 1066cf3e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cf42 jne 0x1066cf69 */
  if (!C.zf) goto L_1066cf69;
  /* 1066cf44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066cf47 mov edx, dword ptr [0x1068f810] */
  EDX = (r32((uint32_t)(0x1068f810)));
  /* 1066cf4d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1066cf50 push eax */
  push32((uint32_t)(EAX));
  /* 1066cf51 call 0x1066cd80 */
  push32(0x1066cf56u); f_1066cd80();
  /* 1066cf56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cf59 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cf5c je 0x1066cf67 */
  if (C.zf) goto L_1066cf67;
  /* 1066cf5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066cf61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cf64 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1066cf67:;
  /* 1066cf67 jmp 0x1066cfa5 */
  goto L_1066cfa5;
L_1066cf69:;
  /* 1066cf69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cf6d jne 0x1066cfa5 */
  if (!C.zf) goto L_1066cfa5;
  /* 1066cf6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066cf72 mov eax, dword ptr [0x1068f810] */
  EAX = (r32((uint32_t)(0x1068f810)));
  /* 1066cf77 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1066cf7a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066cf7d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1066cf80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066cf82 je 0x1066cfa5 */
  if (C.zf) goto L_1066cfa5;
  /* 1066cf84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066cf87 mov ecx, dword ptr [0x1068f810] */
  ECX = (r32((uint32_t)(0x1068f810)));
  /* 1066cf8d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1066cf90 push edx */
  push32((uint32_t)(EDX));
  /* 1066cf91 call 0x1066cd80 */
  push32(0x1066cf96u); f_1066cd80();
  /* 1066cf96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cf99 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cf9c jne 0x1066cfa5 */
  if (!C.zf) goto L_1066cfa5;
  /* 1066cf9e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1066cfa5:;
  /* 1066cfa5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066cfa8 mov ecx, dword ptr [0x1068f810] */
  ECX = (r32((uint32_t)(0x1068f810)));
  /* 1066cfae mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1066cfb1 push edx */
  push32((uint32_t)(EDX));
  /* 1066cfb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066cfb5 push eax */
  push32((uint32_t)(EAX));
  /* 1066cfb6 call 0x1066c360 */
  push32(0x1066cfbbu); f_1066c360();
  /* 1066cfbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066cfbe:;
  /* 1066cfbe jmp 0x1066cec7 */
  goto L_1066cec7;
L_1066cfc3:;
  /* 1066cfc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066cfc5 call 0x10666f40 */
  push32(0x1066cfcau); f_10666f40();
  /* 1066cfca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cfcd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cfd1 jne 0x1066cfd8 */
  if (!C.zf) goto L_1066cfd8;
  /* 1066cfd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066cfd6 jmp 0x1066cfdb */
  goto L_1066cfdb;
L_1066cfd8:;
  /* 1066cfd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1066cfdb:;
  /* 1066cfdb mov esp, ebp */
  ESP = (EBP);
  /* 1066cfdd pop ebp */
  EBP = (pop32());
  /* 1066cfde ret  */
  ESPCHK(0x1066cea0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1066cfe0 (15 bytes, 7 insns) */
void f_1066cfe0(void) {
  FTRACE(0x1066cfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066cfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066cfe1 mov ebp, esp */
  EBP = (ESP);
  /* 1066cfe3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066cfe5 call 0x10662410 */
  push32(0x1066cfeau); f_10662410();
  /* 1066cfea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066cfed pop ebp */
  EBP = (pop32());
  /* 1066cfee ret  */
  ESPCHK(0x1066cfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cff0 @ 0x1066cff0 (1007 bytes, 269 insns) */
void f_1066cff0(void) {
  FTRACE(0x1066cff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066cff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066cff1 mov ebp, esp */
  EBP = (ESP);
  /* 1066cff3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066cff9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066cffd jl 0x1066d005 */
  if ((C.sf!=C.of)) goto L_1066d005;
  /* 1066cfff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d003 jle 0x1066d00c */
  if ((C.zf||C.sf!=C.of)) goto L_1066d00c;
L_1066d005:;
  /* 1066d005 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d007 jmp 0x1066d3db */
  goto L_1066d3db;
L_1066d00c:;
  /* 1066d00c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1066d00e call 0x10666ea0 */
  push32(0x1066d013u); f_10666ea0();
  /* 1066d013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d016 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1066d01d mov eax, dword ptr [0x1068f7fc] */
  EAX = (r32((uint32_t)(0x1068f7fc)));
  /* 1066d022 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d025 mov dword ptr [0x1068f7fc], eax */
  w32((uint32_t)(0x1068f7fc), (EAX));
L_1066d02a:;
  /* 1066d02a cmp dword ptr [0x1068f80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d031 je 0x1066d03d */
  if (C.zf) goto L_1066d03d;
  /* 1066d033 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066d035 call dword ptr [0x10691288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691288))), 0x1066d03bu);
  /* 1066d03b jmp 0x1066d02a */
  goto L_1066d02a;
L_1066d03d:;
  /* 1066d03d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d041 je 0x1066d081 */
  if (C.zf) goto L_1066d081;
  /* 1066d043 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d047 je 0x1066d061 */
  if (C.zf) goto L_1066d061;
  /* 1066d049 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d04c push ecx */
  push32((uint32_t)(ECX));
  /* 1066d04d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d050 push edx */
  push32((uint32_t)(EDX));
  /* 1066d051 call 0x1066d3e0 */
  push32(0x1066d056u); f_1066d3e0();
  /* 1066d056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d059 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1066d05f jmp 0x1066d073 */
  goto L_1066d073;
L_1066d061:;
  /* 1066d061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d064 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d067 mov ecx, dword ptr [eax + 0x1068e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1068e4dc)));
  /* 1066d06d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1066d073:;
  /* 1066d073 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1066d079 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1066d07c jmp 0x1066d3bb */
  goto L_1066d3bb;
L_1066d081:;
  /* 1066d081 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1066d088 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1066d08f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d093 je 0x1066d3b3 */
  if (C.zf) goto L_1066d3b3;
  /* 1066d099 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d09c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066d09f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d0a2 jne 0x1066d2c4 */
  if (!C.zf) goto L_1066d2c4;
  /* 1066d0a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d0ab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1066d0af cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d0b2 jne 0x1066d2c4 */
  if (!C.zf) goto L_1066d2c4;
  /* 1066d0b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d0bb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1066d0bf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d0c2 jne 0x1066d2c4 */
  if (!C.zf) goto L_1066d2c4;
  /* 1066d0c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d0cb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1066d0d1:;
  /* 1066d0d1 push 0x1068b094 */
  push32((uint32_t)(0x1068b094u));
  /* 1066d0d6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1066d0dc push ecx */
  push32((uint32_t)(ECX));
  /* 1066d0dd call 0x1066f240 */
  push32(0x1066d0e2u); f_1066f240();
  /* 1066d0e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d0e5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1066d0eb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d0f2 je 0x1066d11d */
  if (C.zf) goto L_1066d11d;
  /* 1066d0f4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1066d0fa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066d100 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1066d106 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d10d je 0x1066d11d */
  if (C.zf) goto L_1066d11d;
  /* 1066d10f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1066d115 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066d118 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d11b jne 0x1066d143 */
  if (!C.zf) goto L_1066d143;
L_1066d11d:;
  /* 1066d11d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d121 je 0x1066d13c */
  if (C.zf) goto L_1066d13c;
  /* 1066d123 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1066d125 call 0x10666f40 */
  push32(0x1066d12au); f_10666f40();
  /* 1066d12a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d12d mov edx, dword ptr [0x1068f7fc] */
  EDX = (r32((uint32_t)(0x1068f7fc)));
  /* 1066d133 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066d136 mov dword ptr [0x1068f7fc], edx */
  w32((uint32_t)(0x1068f7fc), (EDX));
L_1066d13c:;
  /* 1066d13c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d13e jmp 0x1066d3db */
  goto L_1066d3db;
L_1066d143:;
  /* 1066d143 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1066d14a jmp 0x1066d155 */
  goto L_1066d155;
L_1066d14c:;
  /* 1066d14c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066d14f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d152 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1066d155:;
  /* 1066d155 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d159 jg 0x1066d1a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1066d1a3;
  /* 1066d15b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1066d161 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d162 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1066d168 push edx */
  push32((uint32_t)(EDX));
  /* 1066d169 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066d16c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d16f mov ecx, dword ptr [eax + 0x1068e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1068e4d8)));
  /* 1066d175 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d176 call 0x1066f200 */
  push32(0x1066d17bu); f_1066f200();
  /* 1066d17b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d17e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d180 jne 0x1066d1a1 */
  if (!C.zf) goto L_1066d1a1;
  /* 1066d182 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066d185 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d188 mov eax, dword ptr [edx + 0x1068e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1068e4d8)));
  /* 1066d18e push eax */
  push32((uint32_t)(EAX));
  /* 1066d18f call 0x106662d0 */
  push32(0x1066d194u); f_106662d0();
  /* 1066d194 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d197 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d19d jne 0x1066d1a1 */
  if (!C.zf) goto L_1066d1a1;
  /* 1066d19f jmp 0x1066d1a3 */
  goto L_1066d1a3;
L_1066d1a1:;
  /* 1066d1a1 jmp 0x1066d14c */
  goto L_1066d14c;
L_1066d1a3:;
  /* 1066d1a3 push 0x1068b090 */
  push32((uint32_t)(0x1068b090u));
  /* 1066d1a8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1066d1ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d1b1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1066d1b7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1066d1bd push edx */
  push32((uint32_t)(EDX));
  /* 1066d1be call 0x1066f1c0 */
  push32(0x1066d1c3u); f_1066f1c0();
  /* 1066d1c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d1c6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1066d1cc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d1d3 jne 0x1066d209 */
  if (!C.zf) goto L_1066d209;
  /* 1066d1d5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1066d1db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066d1de cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d1e1 je 0x1066d209 */
  if (C.zf) goto L_1066d209;
  /* 1066d1e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d1e7 je 0x1066d202 */
  if (C.zf) goto L_1066d202;
  /* 1066d1e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1066d1eb call 0x10666f40 */
  push32(0x1066d1f0u); f_10666f40();
  /* 1066d1f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d1f3 mov edx, dword ptr [0x1068f7fc] */
  EDX = (r32((uint32_t)(0x1068f7fc)));
  /* 1066d1f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066d1fc mov dword ptr [0x1068f7fc], edx */
  w32((uint32_t)(0x1068f7fc), (EDX));
L_1066d202:;
  /* 1066d202 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d204 jmp 0x1066d3db */
  goto L_1066d3db;
L_1066d209:;
  /* 1066d209 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d20d jg 0x1066d25a */
  if ((!C.zf&&C.sf==C.of)) goto L_1066d25a;
  /* 1066d20f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1066d215 push eax */
  push32((uint32_t)(EAX));
  /* 1066d216 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1066d21c push ecx */
  push32((uint32_t)(ECX));
  /* 1066d21d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1066d223 push edx */
  push32((uint32_t)(EDX));
  /* 1066d224 call 0x10666cc0 */
  push32(0x1066d229u); f_10666cc0();
  /* 1066d229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d22c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1066d232 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1066d23a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1066d240 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d241 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066d244 push edx */
  push32((uint32_t)(EDX));
  /* 1066d245 call 0x1066d3e0 */
  push32(0x1066d24au); f_1066d3e0();
  /* 1066d24a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d24d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d24f je 0x1066d25a */
  if (C.zf) goto L_1066d25a;
  /* 1066d251 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066d254 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d257 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1066d25a:;
  /* 1066d25a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1066d260 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d266 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1066d26c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1066d272 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1066d275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d277 je 0x1066d288 */
  if (C.zf) goto L_1066d288;
  /* 1066d279 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1066d27f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d282 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1066d288:;
  /* 1066d288 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1066d28e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1066d291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d293 jne 0x1066d0d1 */
  if (!C.zf) goto L_1066d0d1;
  /* 1066d299 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d29d je 0x1066d2ac */
  if (C.zf) goto L_1066d2ac;
  /* 1066d29f call 0x1066d580 */
  push32(0x1066d2a4u); f_1066d580();
  /* 1066d2a4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1066d2aa jmp 0x1066d2b6 */
  goto L_1066d2b6;
L_1066d2ac:;
  /* 1066d2ac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1066d2b6:;
  /* 1066d2b6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1066d2bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066d2bf jmp 0x1066d3b1 */
  goto L_1066d3b1;
L_1066d2c4:;
  /* 1066d2c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d2c7 push edx */
  push32((uint32_t)(EDX));
  /* 1066d2c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066d2ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1066d2cc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1066d2d2 push eax */
  push32((uint32_t)(EAX));
  /* 1066d2d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d2d7 call 0x1066d680 */
  push32(0x1066d2dcu); f_1066d680();
  /* 1066d2dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d2df mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066d2e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d2e6 je 0x1066d3b1 */
  if (C.zf) goto L_1066d3b1;
  /* 1066d2ec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1066d2f3 jmp 0x1066d2fe */
  goto L_1066d2fe;
L_1066d2f5:;
  /* 1066d2f5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066d2f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d2fb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1066d2fe:;
  /* 1066d2fe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d302 jg 0x1066d360 */
  if ((!C.zf&&C.sf==C.of)) goto L_1066d360;
  /* 1066d304 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d308 je 0x1066d35e */
  if (C.zf) goto L_1066d35e;
  /* 1066d30a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066d30d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d310 mov ecx, dword ptr [eax + 0x1068e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1068e4dc)));
  /* 1066d316 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d317 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1066d31d push edx */
  push32((uint32_t)(EDX));
  /* 1066d31e call 0x1066f130 */
  push32(0x1066d323u); f_1066f130();
  /* 1066d323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d328 je 0x1066d355 */
  if (C.zf) goto L_1066d355;
  /* 1066d32a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1066d330 push eax */
  push32((uint32_t)(EAX));
  /* 1066d331 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066d334 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d335 call 0x1066d3e0 */
  push32(0x1066d33au); f_1066d3e0();
  /* 1066d33a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d33d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d33f je 0x1066d34c */
  if (C.zf) goto L_1066d34c;
  /* 1066d341 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066d344 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d347 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1066d34a jmp 0x1066d353 */
  goto L_1066d353;
L_1066d34c:;
  /* 1066d34c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1066d353:;
  /* 1066d353 jmp 0x1066d35e */
  goto L_1066d35e;
L_1066d355:;
  /* 1066d355 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066d358 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d35b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1066d35e:;
  /* 1066d35e jmp 0x1066d2f5 */
  goto L_1066d2f5;
L_1066d360:;
  /* 1066d360 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d364 je 0x1066d38b */
  if (C.zf) goto L_1066d38b;
  /* 1066d366 call 0x1066d580 */
  push32(0x1066d36bu); f_1066d580();
  /* 1066d36b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066d36e push 2 */
  push32((uint32_t)(0x2u));
  /* 1066d370 mov ecx, dword ptr [0x1068e4dc] */
  ECX = (r32((uint32_t)(0x1068e4dc)));
  /* 1066d376 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d377 call 0x10663f30 */
  push32(0x1066d37cu); f_10663f30();
  /* 1066d37c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d37f mov dword ptr [0x1068e4dc], 0 */
  w32((uint32_t)(0x1068e4dc), (0x0u));
  /* 1066d389 jmp 0x1066d3b1 */
  goto L_1066d3b1;
L_1066d38b:;
  /* 1066d38b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d38f je 0x1066d39e */
  if (C.zf) goto L_1066d39e;
  /* 1066d391 call 0x1066d580 */
  push32(0x1066d396u); f_1066d580();
  /* 1066d396 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1066d39c jmp 0x1066d3a8 */
  goto L_1066d3a8;
L_1066d39e:;
  /* 1066d39e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1066d3a8:;
  /* 1066d3a8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1066d3ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1066d3b1:;
  /* 1066d3b1 jmp 0x1066d3bb */
  goto L_1066d3bb;
L_1066d3b3:;
  /* 1066d3b3 call 0x1066d580 */
  push32(0x1066d3b8u); f_1066d580();
  /* 1066d3b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1066d3bb:;
  /* 1066d3bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d3bf je 0x1066d3d8 */
  if (C.zf) goto L_1066d3d8;
  /* 1066d3c1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1066d3c3 call 0x10666f40 */
  push32(0x1066d3c8u); f_10666f40();
  /* 1066d3c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d3cb mov eax, dword ptr [0x1068f7fc] */
  EAX = (r32((uint32_t)(0x1068f7fc)));
  /* 1066d3d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066d3d3 mov dword ptr [0x1068f7fc], eax */
  w32((uint32_t)(0x1068f7fc), (EAX));
L_1066d3d8:;
  /* 1066d3d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1066d3db:;
  /* 1066d3db mov esp, ebp */
  ESP = (EBP);
  /* 1066d3dd pop ebp */
  EBP = (pop32());
  /* 1066d3de ret  */
  ESPCHK(0x1066cff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3e0 @ 0x1066d3e0 (403 bytes, 117 insns) */
void f_1066d3e0(void) {
  FTRACE(0x1066d3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066d3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066d3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1066d3e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066d3e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d3ec push eax */
  push32((uint32_t)(EAX));
  /* 1066d3ed lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1066d3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d3f4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1066d3fa push edx */
  push32((uint32_t)(EDX));
  /* 1066d3fb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1066d401 push eax */
  push32((uint32_t)(EAX));
  /* 1066d402 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d405 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d406 call 0x1066d680 */
  push32(0x1066d40bu); f_1066d680();
  /* 1066d40b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d410 jne 0x1066d419 */
  if (!C.zf) goto L_1066d419;
  /* 1066d412 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d414 jmp 0x1066d56f */
  goto L_1066d56f;
L_1066d419:;
  /* 1066d419 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1066d41e push 0x1068b098 */
  push32((uint32_t)(0x1068b098u));
  /* 1066d423 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066d425 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1066d42b push edx */
  push32((uint32_t)(EDX));
  /* 1066d42c call 0x106662d0 */
  push32(0x1066d431u); f_106662d0();
  /* 1066d431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d434 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d437 push eax */
  push32((uint32_t)(EAX));
  /* 1066d438 call 0x106634a0 */
  push32(0x1066d43du); f_106634a0();
  /* 1066d43d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d440 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066d443 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d447 jne 0x1066d450 */
  if (!C.zf) goto L_1066d450;
  /* 1066d449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d44b jmp 0x1066d56f */
  goto L_1066d56f;
L_1066d450:;
  /* 1066d450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d453 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d456 mov ecx, dword ptr [eax + 0x1068e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1068e4dc)));
  /* 1066d45c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066d45f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d462 mov eax, dword ptr [edx*4 + 0x1068f678] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1068f678)));
  /* 1066d469 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066d46c push 6 */
  push32((uint32_t)(0x6u));
  /* 1066d46e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d471 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d474 add ecx, 0x1068f6c8 */
  { uint32_t _a=(ECX),_b=(0x1068f6c8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d47a push ecx */
  push32((uint32_t)(ECX));
  /* 1066d47b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1066d47e push edx */
  push32((uint32_t)(EDX));
  /* 1066d47f call 0x10669d80 */
  push32(0x1066d484u); f_10669d80();
  /* 1066d484 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d487 mov eax, dword ptr [0x1068f690] */
  EAX = (r32((uint32_t)(0x1068f690)));
  /* 1066d48c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1066d48f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1066d495 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d496 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066d499 push edx */
  push32((uint32_t)(EDX));
  /* 1066d49a call 0x10666450 */
  push32(0x1066d49fu); f_10666450();
  /* 1066d49f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d4a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d4a5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d4a8 mov dword ptr [ecx + 0x1068e4dc], eax */
  w32((uint32_t)(ECX + 0x1068e4dc), (EAX));
  /* 1066d4ae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1066d4b4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1066d4ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d4bd mov dword ptr [eax*4 + 0x1068f678], edx */
  w32((uint32_t)(EAX*4 + 0x1068f678), (EDX));
  /* 1066d4c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1066d4c6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1066d4cc push ecx */
  push32((uint32_t)(ECX));
  /* 1066d4cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d4d0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d4d3 add edx, 0x1068f6c8 */
  { uint32_t _a=(EDX),_b=(0x1068f6c8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d4d9 push edx */
  push32((uint32_t)(EDX));
  /* 1066d4da call 0x10669d80 */
  push32(0x1066d4dfu); f_10669d80();
  /* 1066d4df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d4e2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d4e6 jne 0x1066d4f3 */
  if (!C.zf) goto L_1066d4f3;
  /* 1066d4e8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1066d4ee mov dword ptr [0x1068f690], eax */
  w32((uint32_t)(0x1068f690), (EAX));
L_1066d4f3:;
  /* 1066d4f3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d4f7 jne 0x1066d505 */
  if (!C.zf) goto L_1066d505;
  /* 1066d4f9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1066d4ff mov dword ptr [0x1068f694], ecx */
  w32((uint32_t)(0x1068f694), (ECX));
L_1066d505:;
  /* 1066d505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d508 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d50b call dword ptr [edx + 0x1068e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1068e4e0))), 0x1066d511u);
  /* 1066d511 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d513 je 0x1066d54c */
  if (C.zf) goto L_1066d54c;
  /* 1066d515 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d518 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d51b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066d51e mov dword ptr [eax + 0x1068e4dc], ecx */
  w32((uint32_t)(EAX + 0x1068e4dc), (ECX));
  /* 1066d524 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066d526 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066d529 push edx */
  push32((uint32_t)(EDX));
  /* 1066d52a call 0x10663f30 */
  push32(0x1066d52fu); f_10663f30();
  /* 1066d52f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d532 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d535 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066d538 mov dword ptr [eax*4 + 0x1068f678], ecx */
  w32((uint32_t)(EAX*4 + 0x1068f678), (ECX));
  /* 1066d53f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066d542 mov dword ptr [0x1068f690], edx */
  w32((uint32_t)(0x1068f690), (EDX));
  /* 1066d548 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d54a jmp 0x1066d56f */
  goto L_1066d56f;
L_1066d54c:;
  /* 1066d54c cmp dword ptr [ebp - 0xc], 0x1068e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1068e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d553 je 0x1066d563 */
  if (C.zf) goto L_1066d563;
  /* 1066d555 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066d557 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066d55a push eax */
  push32((uint32_t)(EAX));
  /* 1066d55b call 0x10663f30 */
  push32(0x1066d560u); f_10663f30();
  /* 1066d560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066d563:;
  /* 1066d563 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d566 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d569 mov eax, dword ptr [ecx + 0x1068e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1068e4dc)));
L_1066d56f:;
  /* 1066d56f mov esp, ebp */
  ESP = (EBP);
  /* 1066d571 pop ebp */
  EBP = (pop32());
  /* 1066d572 ret  */
  ESPCHK(0x1066d3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d580 @ 0x1066d580 (256 bytes, 72 insns) */
void f_1066d580(void) {
  FTRACE(0x1066d580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066d580 push ebp */
  push32((uint32_t)(EBP));
  /* 1066d581 mov ebp, esp */
  EBP = (ESP);
  /* 1066d583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066d586 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1066d58d cmp dword ptr [0x1068e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d594 jne 0x1066d5b4 */
  if (!C.zf) goto L_1066d5b4;
  /* 1066d596 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1066d59b push 0x1068b098 */
  push32((uint32_t)(0x1068b098u));
  /* 1066d5a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066d5a2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1066d5a7 call 0x106634a0 */
  push32(0x1066d5acu); f_106634a0();
  /* 1066d5ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d5af mov dword ptr [0x1068e4dc], eax */
  w32((uint32_t)(0x1068e4dc), (EAX));
L_1066d5b4:;
  /* 1066d5b4 mov eax, dword ptr [0x1068e4dc] */
  EAX = (r32((uint32_t)(0x1068e4dc)));
  /* 1066d5b9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1066d5bc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1066d5c3 jmp 0x1066d5ce */
  goto L_1066d5ce;
L_1066d5c5:;
  /* 1066d5c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066d5c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d5cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1066d5ce:;
  /* 1066d5ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066d5d1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d5d4 mov eax, dword ptr [edx + 0x1068e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1068e4dc)));
  /* 1066d5da push eax */
  push32((uint32_t)(EAX));
  /* 1066d5db push 0x1068b0a4 */
  push32((uint32_t)(0x1068b0a4u));
  /* 1066d5e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066d5e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d5e6 mov edx, dword ptr [ecx + 0x1068e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1068e4d8)));
  /* 1066d5ec push edx */
  push32((uint32_t)(EDX));
  /* 1066d5ed push 3 */
  push32((uint32_t)(0x3u));
  /* 1066d5ef mov eax, dword ptr [0x1068e4dc] */
  EAX = (r32((uint32_t)(0x1068e4dc)));
  /* 1066d5f4 push eax */
  push32((uint32_t)(EAX));
  /* 1066d5f5 call 0x1066d820 */
  push32(0x1066d5fau); f_1066d820();
  /* 1066d5fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d5fd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d601 jge 0x1066d649 */
  if ((C.sf==C.of)) goto L_1066d649;
  /* 1066d603 push 0x1068b090 */
  push32((uint32_t)(0x1068b090u));
  /* 1066d608 mov ecx, dword ptr [0x1068e4dc] */
  ECX = (r32((uint32_t)(0x1068e4dc)));
  /* 1066d60e push ecx */
  push32((uint32_t)(ECX));
  /* 1066d60f call 0x10666460 */
  push32(0x1066d614u); f_10666460();
  /* 1066d614 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d617 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066d61a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d61d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d620 mov eax, dword ptr [edx + 0x1068e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1068e4dc)));
  /* 1066d626 push eax */
  push32((uint32_t)(EAX));
  /* 1066d627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066d62a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066d62d mov edx, dword ptr [ecx + 0x1068e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1068e4dc)));
  /* 1066d633 push edx */
  push32((uint32_t)(EDX));
  /* 1066d634 call 0x1066f130 */
  push32(0x1066d639u); f_1066f130();
  /* 1066d639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d63c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d63e je 0x1066d647 */
  if (C.zf) goto L_1066d647;
  /* 1066d640 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1066d647:;
  /* 1066d647 jmp 0x1066d677 */
  goto L_1066d677;
L_1066d649:;
  /* 1066d649 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d64d jne 0x1066d656 */
  if (!C.zf) goto L_1066d656;
  /* 1066d64f mov eax, dword ptr [0x1068e4dc] */
  EAX = (r32((uint32_t)(0x1068e4dc)));
  /* 1066d654 jmp 0x1066d67c */
  goto L_1066d67c;
L_1066d656:;
  /* 1066d656 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066d658 mov eax, dword ptr [0x1068e4dc] */
  EAX = (r32((uint32_t)(0x1068e4dc)));
  /* 1066d65d push eax */
  push32((uint32_t)(EAX));
  /* 1066d65e call 0x10663f30 */
  push32(0x1066d663u); f_10663f30();
  /* 1066d663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d666 mov dword ptr [0x1068e4dc], 0 */
  w32((uint32_t)(0x1068e4dc), (0x0u));
  /* 1066d670 mov eax, dword ptr [0x1068e4f4] */
  EAX = (r32((uint32_t)(0x1068e4f4)));
  /* 1066d675 jmp 0x1066d67c */
  goto L_1066d67c;
L_1066d677:;
  /* 1066d677 jmp 0x1066d5c5 */
  goto L_1066d5c5;
L_1066d67c:;
  /* 1066d67c mov esp, ebp */
  ESP = (EBP);
  /* 1066d67e pop ebp */
  EBP = (pop32());
  /* 1066d67f ret  */
  ESPCHK(0x1066d580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d680 @ 0x1066d680 (388 bytes, 115 insns) */
void f_1066d680(void) {
  FTRACE(0x1066d680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066d680 push ebp */
  push32((uint32_t)(EBP));
  /* 1066d681 mov ebp, esp */
  EBP = (ESP);
  /* 1066d683 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066d689 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d68d jne 0x1066d696 */
  if (!C.zf) goto L_1066d696;
  /* 1066d68f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d691 jmp 0x1066d800 */
  goto L_1066d800;
L_1066d696:;
  /* 1066d696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d699 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066d69c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d69f jne 0x1066d6f0 */
  if (!C.zf) goto L_1066d6f0;
  /* 1066d6a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d6a4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1066d6a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d6aa jne 0x1066d6f0 */
  if (!C.zf) goto L_1066d6f0;
  /* 1066d6ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d6af mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1066d6b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d6b5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1066d6b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d6bd je 0x1066d6d9 */
  if (C.zf) goto L_1066d6d9;
  /* 1066d6bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066d6c2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1066d6c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066d6ca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1066d6d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066d6d3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1066d6d9:;
  /* 1066d6d9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d6dd je 0x1066d6e8 */
  if (C.zf) goto L_1066d6e8;
  /* 1066d6df mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066d6e2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1066d6e8:;
  /* 1066d6e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d6eb jmp 0x1066d800 */
  goto L_1066d800;
L_1066d6f0:;
  /* 1066d6f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d6f4 push 0x1068e450 */
  push32((uint32_t)(0x1068e450u));
  /* 1066d6f9 call 0x1066f130 */
  push32(0x1066d6feu); f_1066f130();
  /* 1066d6fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d703 je 0x1066d7b8 */
  if (C.zf) goto L_1066d7b8;
  /* 1066d709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d70c push edx */
  push32((uint32_t)(EDX));
  /* 1066d70d push 0x1068e3cc */
  push32((uint32_t)(0x1068e3ccu));
  /* 1066d712 call 0x1066f130 */
  push32(0x1066d717u); f_1066f130();
  /* 1066d717 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d71a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d71c je 0x1066d7b8 */
  if (C.zf) goto L_1066d7b8;
  /* 1066d722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d725 push eax */
  push32((uint32_t)(EAX));
  /* 1066d726 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1066d72c push ecx */
  push32((uint32_t)(ECX));
  /* 1066d72d call 0x1066d870 */
  push32(0x1066d732u); f_1066d870();
  /* 1066d732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d735 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d737 je 0x1066d740 */
  if (C.zf) goto L_1066d740;
  /* 1066d739 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d73b jmp 0x1066d800 */
  goto L_1066d800;
L_1066d740:;
  /* 1066d740 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1066d746 push edx */
  push32((uint32_t)(EDX));
  /* 1066d747 push 0x1068f6a0 */
  push32((uint32_t)(0x1068f6a0u));
  /* 1066d74c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1066d752 push eax */
  push32((uint32_t)(EAX));
  /* 1066d753 call 0x1066f280 */
  push32(0x1066d758u); f_1066f280();
  /* 1066d758 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d75b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d75d jne 0x1066d766 */
  if (!C.zf) goto L_1066d766;
  /* 1066d75f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d761 jmp 0x1066d800 */
  goto L_1066d800;
L_1066d766:;
  /* 1066d766 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066d768 mov cx, word ptr [0x1068f6a4] */
  CX = (r16((uint32_t)(0x1068f6a4)));
  /* 1066d76f mov dword ptr [0x1068f6a8], ecx */
  w32((uint32_t)(0x1068f6a8), (ECX));
  /* 1066d775 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1066d77b push edx */
  push32((uint32_t)(EDX));
  /* 1066d77c push 0x1068e450 */
  push32((uint32_t)(0x1068e450u));
  /* 1066d781 call 0x1066d9d0 */
  push32(0x1066d786u); f_1066d9d0();
  /* 1066d786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d789 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d78c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066d78f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066d791 je 0x1066d7a6 */
  if (C.zf) goto L_1066d7a6;
  /* 1066d793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d796 push edx */
  push32((uint32_t)(EDX));
  /* 1066d797 push 0x1068e3cc */
  push32((uint32_t)(0x1068e3ccu));
  /* 1066d79c call 0x10666450 */
  push32(0x1066d7a1u); f_10666450();
  /* 1066d7a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d7a4 jmp 0x1066d7b8 */
  goto L_1066d7b8;
L_1066d7a6:;
  /* 1066d7a6 push 0x1068e450 */
  push32((uint32_t)(0x1068e450u));
  /* 1066d7ab push 0x1068e3cc */
  push32((uint32_t)(0x1068e3ccu));
  /* 1066d7b0 call 0x10666450 */
  push32(0x1066d7b5u); f_10666450();
  /* 1066d7b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066d7b8:;
  /* 1066d7b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d7bc je 0x1066d7d1 */
  if (C.zf) goto L_1066d7d1;
  /* 1066d7be push 6 */
  push32((uint32_t)(0x6u));
  /* 1066d7c0 push 0x1068f6a0 */
  push32((uint32_t)(0x1068f6a0u));
  /* 1066d7c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066d7c8 push eax */
  push32((uint32_t)(EAX));
  /* 1066d7c9 call 0x10669d80 */
  push32(0x1066d7ceu); f_10669d80();
  /* 1066d7ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066d7d1:;
  /* 1066d7d1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d7d5 je 0x1066d7ea */
  if (C.zf) goto L_1066d7ea;
  /* 1066d7d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1066d7d9 push 0x1068f6a8 */
  push32((uint32_t)(0x1068f6a8u));
  /* 1066d7de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066d7e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d7e2 call 0x10669d80 */
  push32(0x1066d7e7u); f_10669d80();
  /* 1066d7e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066d7ea:;
  /* 1066d7ea push 0x1068e450 */
  push32((uint32_t)(0x1068e450u));
  /* 1066d7ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d7f2 push edx */
  push32((uint32_t)(EDX));
  /* 1066d7f3 call 0x10666450 */
  push32(0x1066d7f8u); f_10666450();
  /* 1066d7f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d7fb mov eax, 0x1068e450 */
  EAX = (0x1068e450u);
L_1066d800:;
  /* 1066d800 mov esp, ebp */
  ESP = (EBP);
  /* 1066d802 pop ebp */
  EBP = (pop32());
  /* 1066d803 ret  */
  ESPCHK(0x1066d680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d810 @ 0x1066d810 (7 bytes, 5 insns) */
void f_1066d810(void) {
  FTRACE(0x1066d810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066d810 push ebp */
  push32((uint32_t)(EBP));
  /* 1066d811 mov ebp, esp */
  EBP = (ESP);
  /* 1066d813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d815 pop ebp */
  EBP = (pop32());
  /* 1066d816 ret  */
  ESPCHK(0x1066d810u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1066d820 (79 bytes, 28 insns) */
void f_1066d820(void) {
  FTRACE(0x1066d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066d820 push ebp */
  push32((uint32_t)(EBP));
  /* 1066d821 mov ebp, esp */
  EBP = (ESP);
  /* 1066d823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066d826 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1066d829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066d82c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1066d833 jmp 0x1066d83e */
  goto L_1066d83e;
L_1066d835:;
  /* 1066d835 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066d838 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d83b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1066d83e:;
  /* 1066d83e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066d841 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d844 jge 0x1066d864 */
  if ((C.sf==C.of)) goto L_1066d864;
  /* 1066d846 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066d849 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d84c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066d84f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066d852 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1066d855 push edx */
  push32((uint32_t)(EDX));
  /* 1066d856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d859 push eax */
  push32((uint32_t)(EAX));
  /* 1066d85a call 0x10666460 */
  push32(0x1066d85fu); f_10666460();
  /* 1066d85f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d862 jmp 0x1066d835 */
  goto L_1066d835;
L_1066d864:;
  /* 1066d864 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066d86b mov esp, ebp */
  ESP = (EBP);
  /* 1066d86d pop ebp */
  EBP = (pop32());
  /* 1066d86e ret  */
  ESPCHK(0x1066d820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d870 @ 0x1066d870 (349 bytes, 122 insns) */
void f_1066d870(void) {
  FTRACE(0x1066d870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066d870 push ebp */
  push32((uint32_t)(EBP));
  /* 1066d871 mov ebp, esp */
  EBP = (ESP);
  /* 1066d873 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066d876 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1066d87b push 0 */
  push32((uint32_t)(0x0u));
  /* 1066d87d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d880 push eax */
  push32((uint32_t)(EAX));
  /* 1066d881 call 0x10667210 */
  push32(0x1066d886u); f_10667210();
  /* 1066d886 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d889 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d88c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066d88f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066d891 jne 0x1066d89a */
  if (!C.zf) goto L_1066d89a;
  /* 1066d893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d895 jmp 0x1066d9c9 */
  goto L_1066d9c9;
L_1066d89a:;
  /* 1066d89a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d89d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066d8a0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d8a3 jne 0x1066d8d0 */
  if (!C.zf) goto L_1066d8d0;
  /* 1066d8a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d8a8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1066d8ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d8ae je 0x1066d8d0 */
  if (C.zf) goto L_1066d8d0;
  /* 1066d8b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d8b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d8b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d8b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d8ba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d8c0 push edx */
  push32((uint32_t)(EDX));
  /* 1066d8c1 call 0x10666450 */
  push32(0x1066d8c6u); f_10666450();
  /* 1066d8c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d8c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066d8cb jmp 0x1066d9c9 */
  goto L_1066d9c9;
L_1066d8d0:;
  /* 1066d8d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1066d8d7 jmp 0x1066d8e2 */
  goto L_1066d8e2;
L_1066d8d9:;
  /* 1066d8d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066d8dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d8df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066d8e2:;
  /* 1066d8e2 push 0x1068b0a8 */
  push32((uint32_t)(0x1068b0a8u));
  /* 1066d8e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d8ea push ecx */
  push32((uint32_t)(ECX));
  /* 1066d8eb call 0x1066f1c0 */
  push32(0x1066d8f0u); f_1066f1c0();
  /* 1066d8f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d8f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1066d8f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d8fa jne 0x1066d904 */
  if (!C.zf) goto L_1066d904;
  /* 1066d8fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066d8ff jmp 0x1066d9c9 */
  goto L_1066d9c9;
L_1066d904:;
  /* 1066d904 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d907 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d90a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1066d90c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1066d90f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d913 jne 0x1066d93a */
  if (!C.zf) goto L_1066d93a;
  /* 1066d915 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d919 jge 0x1066d93a */
  if ((C.sf==C.of)) goto L_1066d93a;
  /* 1066d91b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066d91f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d922 je 0x1066d93a */
  if (C.zf) goto L_1066d93a;
  /* 1066d924 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066d927 push edx */
  push32((uint32_t)(EDX));
  /* 1066d928 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d92b push eax */
  push32((uint32_t)(EAX));
  /* 1066d92c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d92f push ecx */
  push32((uint32_t)(ECX));
  /* 1066d930 call 0x10666cc0 */
  push32(0x1066d935u); f_10666cc0();
  /* 1066d935 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d938 jmp 0x1066d9a0 */
  goto L_1066d9a0;
L_1066d93a:;
  /* 1066d93a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d93e jne 0x1066d968 */
  if (!C.zf) goto L_1066d968;
  /* 1066d940 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d944 jge 0x1066d968 */
  if ((C.sf==C.of)) goto L_1066d968;
  /* 1066d946 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066d94a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d94d je 0x1066d968 */
  if (C.zf) goto L_1066d968;
  /* 1066d94f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066d952 push eax */
  push32((uint32_t)(EAX));
  /* 1066d953 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d956 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d957 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d95a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d95d push edx */
  push32((uint32_t)(EDX));
  /* 1066d95e call 0x10666cc0 */
  push32(0x1066d963u); f_10666cc0();
  /* 1066d963 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d966 jmp 0x1066d9a0 */
  goto L_1066d9a0;
L_1066d968:;
  /* 1066d968 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d96c jne 0x1066d99b */
  if (!C.zf) goto L_1066d99b;
  /* 1066d96e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066d972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d974 je 0x1066d97f */
  if (C.zf) goto L_1066d97f;
  /* 1066d976 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066d97a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d97d jne 0x1066d99b */
  if (!C.zf) goto L_1066d99b;
L_1066d97f:;
  /* 1066d97f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066d982 push edx */
  push32((uint32_t)(EDX));
  /* 1066d983 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d986 push eax */
  push32((uint32_t)(EAX));
  /* 1066d987 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d98a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d990 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d991 call 0x10666cc0 */
  push32(0x1066d996u); f_10666cc0();
  /* 1066d996 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d999 jmp 0x1066d9a0 */
  goto L_1066d9a0;
L_1066d99b:;
  /* 1066d99b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066d99e jmp 0x1066d9c9 */
  goto L_1066d9c9;
L_1066d9a0:;
  /* 1066d9a0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066d9a4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066d9a7 jne 0x1066d9ab */
  if (!C.zf) goto L_1066d9ab;
  /* 1066d9a9 jmp 0x1066d9c7 */
  goto L_1066d9c7;
L_1066d9ab:;
  /* 1066d9ab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066d9af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d9b1 jne 0x1066d9b5 */
  if (!C.zf) goto L_1066d9b5;
  /* 1066d9b3 jmp 0x1066d9c7 */
  goto L_1066d9c7;
L_1066d9b5:;
  /* 1066d9b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066d9b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d9bb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1066d9bf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1066d9c2 jmp 0x1066d8d9 */
  goto L_1066d8d9;
L_1066d9c7:;
  /* 1066d9c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1066d9c9:;
  /* 1066d9c9 mov esp, ebp */
  ESP = (EBP);
  /* 1066d9cb pop ebp */
  EBP = (pop32());
  /* 1066d9cc ret  */
  ESPCHK(0x1066d870u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1066d9d0 (101 bytes, 36 insns) */
void f_1066d9d0(void) {
  FTRACE(0x1066d9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066d9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066d9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1066d9d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d9d6 push eax */
  push32((uint32_t)(EAX));
  /* 1066d9d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d9da push ecx */
  push32((uint32_t)(ECX));
  /* 1066d9db call 0x10666450 */
  push32(0x1066d9e0u); f_10666450();
  /* 1066d9e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d9e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d9e6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1066d9ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066d9ec je 0x1066da08 */
  if (C.zf) goto L_1066da08;
  /* 1066d9ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066d9f1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066d9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1066d9f5 push 0x1068b0b0 */
  push32((uint32_t)(0x1068b0b0u));
  /* 1066d9fa push 2 */
  push32((uint32_t)(0x2u));
  /* 1066d9fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066d9ff push edx */
  push32((uint32_t)(EDX));
  /* 1066da00 call 0x1066d820 */
  push32(0x1066da05u); f_1066d820();
  /* 1066da05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066da08:;
  /* 1066da08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066da0b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1066da12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066da14 je 0x1066da33 */
  if (C.zf) goto L_1066da33;
  /* 1066da16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066da19 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066da1f push edx */
  push32((uint32_t)(EDX));
  /* 1066da20 push 0x1068b0ac */
  push32((uint32_t)(0x1068b0acu));
  /* 1066da25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066da27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066da2a push eax */
  push32((uint32_t)(EAX));
  /* 1066da2b call 0x1066d820 */
  push32(0x1066da30u); f_1066d820();
  /* 1066da30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066da33:;
  /* 1066da33 pop ebp */
  EBP = (pop32());
  /* 1066da34 ret  */
  ESPCHK(0x1066d9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x1066da40 (130 bytes, 50 insns) */
void f_1066da40(void) {
  FTRACE(0x1066da40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066da40 push ebp */
  push32((uint32_t)(EBP));
  /* 1066da41 mov ebp, esp */
  EBP = (ESP);
  /* 1066da43 push ecx */
  push32((uint32_t)(ECX));
  /* 1066da44 push ebx */
  push32((uint32_t)(EBX));
  /* 1066da45 push esi */
  push32((uint32_t)(ESI));
  /* 1066da46 push edi */
  push32((uint32_t)(EDI));
  /* 1066da47 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1066da4e:;
  /* 1066da4e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066da52 jne 0x1066da72 */
  if (!C.zf) goto L_1066da72;
  /* 1066da54 push 0x1068b0c0 */
  push32((uint32_t)(0x1068b0c0u));
  /* 1066da59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066da5b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1066da5d push 0x1068b0b4 */
  push32((uint32_t)(0x1068b0b4u));
  /* 1066da62 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066da64 call 0x10662560 */
  push32(0x1066da69u); f_10662560();
  /* 1066da69 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066da6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066da6f jne 0x1066da72 */
  if (!C.zf) goto L_1066da72;
  /* 1066da71 int3  */
  x86_unimpl("int3 @ 0x1066da71");
L_1066da72:;
  /* 1066da72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066da74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066da76 jne 0x1066da4e */
  if (!C.zf) goto L_1066da4e;
  /* 1066da78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066da7b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066da7e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1066da81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066da83 je 0x1066da91 */
  if (C.zf) goto L_1066da91;
  /* 1066da85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066da88 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1066da8f jmp 0x1066dab8 */
  goto L_1066dab8;
L_1066da91:;
  /* 1066da91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066da94 push ecx */
  push32((uint32_t)(ECX));
  /* 1066da95 call 0x1066c2b0 */
  push32(0x1066da9au); f_1066c2b0();
  /* 1066da9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066da9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066daa0 push edx */
  push32((uint32_t)(EDX));
  /* 1066daa1 call 0x1066dad0 */
  push32(0x1066daa6u); f_1066dad0();
  /* 1066daa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066daa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066daac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066daaf push eax */
  push32((uint32_t)(EAX));
  /* 1066dab0 call 0x1066c320 */
  push32(0x1066dab5u); f_1066c320();
  /* 1066dab5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066dab8:;
  /* 1066dab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dabb pop edi */
  EDI = (pop32());
  /* 1066dabc pop esi */
  ESI = (pop32());
  /* 1066dabd pop ebx */
  EBX = (pop32());
  /* 1066dabe mov esp, ebp */
  ESP = (EBP);
  /* 1066dac0 pop ebp */
  EBP = (pop32());
  /* 1066dac1 ret  */
  ESPCHK(0x1066da40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dad0 @ 0x1066dad0 (190 bytes, 67 insns) */
void f_1066dad0(void) {
  FTRACE(0x1066dad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066dad0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066dad1 mov ebp, esp */
  EBP = (ESP);
  /* 1066dad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066dad6 push ebx */
  push32((uint32_t)(EBX));
  /* 1066dad7 push esi */
  push32((uint32_t)(ESI));
  /* 1066dad8 push edi */
  push32((uint32_t)(EDI));
  /* 1066dad9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1066dae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dae3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1066dae6:;
  /* 1066dae6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066daea jne 0x1066db0a */
  if (!C.zf) goto L_1066db0a;
  /* 1066daec push 0x1068af60 */
  push32((uint32_t)(0x1068af60u));
  /* 1066daf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066daf3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1066daf5 push 0x1068b0b4 */
  push32((uint32_t)(0x1068b0b4u));
  /* 1066dafa push 2 */
  push32((uint32_t)(0x2u));
  /* 1066dafc call 0x10662560 */
  push32(0x1066db01u); f_10662560();
  /* 1066db01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066db04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066db07 jne 0x1066db0a */
  if (!C.zf) goto L_1066db0a;
  /* 1066db09 int3  */
  x86_unimpl("int3 @ 0x1066db09");
L_1066db0a:;
  /* 1066db0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066db0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066db0e jne 0x1066dae6 */
  if (!C.zf) goto L_1066dae6;
  /* 1066db10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066db13 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1066db16 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1066db1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066db1d je 0x1066db7a */
  if (C.zf) goto L_1066db7a;
  /* 1066db1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066db22 push ecx */
  push32((uint32_t)(ECX));
  /* 1066db23 call 0x1066cdd0 */
  push32(0x1066db28u); f_1066cdd0();
  /* 1066db28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066db2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066db2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066db31 push edx */
  push32((uint32_t)(EDX));
  /* 1066db32 call 0x10670150 */
  push32(0x1066db37u); f_10670150();
  /* 1066db37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066db3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066db3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1066db40 push ecx */
  push32((uint32_t)(ECX));
  /* 1066db41 call 0x10670020 */
  push32(0x1066db46u); f_10670020();
  /* 1066db46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066db49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066db4b jge 0x1066db56 */
  if ((C.sf==C.of)) goto L_1066db56;
  /* 1066db4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1066db54 jmp 0x1066db7a */
  goto L_1066db7a;
L_1066db56:;
  /* 1066db56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066db59 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066db5d je 0x1066db7a */
  if (C.zf) goto L_1066db7a;
  /* 1066db5f push 2 */
  push32((uint32_t)(0x2u));
  /* 1066db61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066db64 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1066db67 push ecx */
  push32((uint32_t)(ECX));
  /* 1066db68 call 0x10663f30 */
  push32(0x1066db6du); f_10663f30();
  /* 1066db6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066db70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066db73 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1066db7a:;
  /* 1066db7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066db7d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1066db84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066db87 pop edi */
  EDI = (pop32());
  /* 1066db88 pop esi */
  ESI = (pop32());
  /* 1066db89 pop ebx */
  EBX = (pop32());
  /* 1066db8a mov esp, ebp */
  ESP = (EBP);
  /* 1066db8c pop ebp */
  EBP = (pop32());
  /* 1066db8d ret  */
  ESPCHK(0x1066dad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db90 @ 0x1066db90 (210 bytes, 63 insns) */
void f_1066db90(void) {
  FTRACE(0x1066db90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066db90 push ebp */
  push32((uint32_t)(EBP));
  /* 1066db91 mov ebp, esp */
  EBP = (ESP);
  /* 1066db93 push ecx */
  push32((uint32_t)(ECX));
  /* 1066db94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066db97 cmp eax, dword ptr [0x10690f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10690f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066db9d jae 0x1066dbc1 */
  if (!C.cf) goto L_1066dbc1;
  /* 1066db9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dba2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1066dba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dba8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1066dbab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066dbae mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066dbb5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1066dbba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1066dbbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066dbbf jne 0x1066dbd4 */
  if (!C.zf) goto L_1066dbd4;
L_1066dbc1:;
  /* 1066dbc1 call 0x1066b370 */
  push32(0x1066dbc6u); f_1066b370();
  /* 1066dbc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1066dbcc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066dbcf jmp 0x1066dc5e */
  goto L_1066dc5e;
L_1066dbd4:;
  /* 1066dbd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dbd7 push edx */
  push32((uint32_t)(EDX));
  /* 1066dbd8 call 0x1066cb90 */
  push32(0x1066dbddu); f_1066cb90();
  /* 1066dbdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dbe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dbe3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1066dbe6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dbe9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1066dbec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066dbef mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066dbf6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1066dbfb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1066dbfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066dc00 je 0x1066dc3d */
  if (C.zf) goto L_1066dc3d;
  /* 1066dc02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dc05 push ecx */
  push32((uint32_t)(ECX));
  /* 1066dc06 call 0x1066ca10 */
  push32(0x1066dc0bu); f_1066ca10();
  /* 1066dc0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dc0e push eax */
  push32((uint32_t)(EAX));
  /* 1066dc0f call dword ptr [0x10691284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691284))), 0x1066dc15u);
  /* 1066dc15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066dc17 jne 0x1066dc24 */
  if (!C.zf) goto L_1066dc24;
  /* 1066dc19 call dword ptr [0x106912f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f4))), 0x1066dc1fu);
  /* 1066dc1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066dc22 jmp 0x1066dc2b */
  goto L_1066dc2b;
L_1066dc24:;
  /* 1066dc24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1066dc2b:;
  /* 1066dc2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066dc2f jne 0x1066dc33 */
  if (!C.zf) goto L_1066dc33;
  /* 1066dc31 jmp 0x1066dc4f */
  goto L_1066dc4f;
L_1066dc33:;
  /* 1066dc33 call 0x1066b380 */
  push32(0x1066dc38u); f_1066b380();
  /* 1066dc38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dc3b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1066dc3d:;
  /* 1066dc3d call 0x1066b370 */
  push32(0x1066dc42u); f_1066b370();
  /* 1066dc42 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1066dc48 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1066dc4f:;
  /* 1066dc4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dc52 push eax */
  push32((uint32_t)(EAX));
  /* 1066dc53 call 0x1066cc20 */
  push32(0x1066dc58u); f_1066cc20();
  /* 1066dc58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dc5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1066dc5e:;
  /* 1066dc5e mov esp, ebp */
  ESP = (EBP);
  /* 1066dc60 pop ebp */
  EBP = (pop32());
  /* 1066dc61 ret  */
  ESPCHK(0x1066db90u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1066dc70 (219 bytes, 64 insns) */
void f_1066dc70(void) {
  FTRACE(0x1066dc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066dc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1066dc71 mov ebp, esp */
  EBP = (ESP);
  /* 1066dc73 push ecx */
  push32((uint32_t)(ECX));
  /* 1066dc74 cmp dword ptr [0x1068f68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066dc7b je 0x1066dd11 */
  if (C.zf) goto L_1066dd11;
  /* 1066dc81 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1066dc83 push 0x1068b0d0 */
  push32((uint32_t)(0x1068b0d0u));
  /* 1066dc88 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066dc8a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1066dc8f push 1 */
  push32((uint32_t)(0x1u));
  /* 1066dc91 call 0x106638b0 */
  push32(0x1066dc96u); f_106638b0();
  /* 1066dc96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dc99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066dc9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066dca0 jne 0x1066dcac */
  if (!C.zf) goto L_1066dcac;
  /* 1066dca2 mov eax, 1 */
  EAX = (0x1u);
  /* 1066dca7 jmp 0x1066dd47 */
  goto L_1066dd47;
L_1066dcac:;
  /* 1066dcac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dcaf push eax */
  push32((uint32_t)(EAX));
  /* 1066dcb0 call 0x1066dd50 */
  push32(0x1066dcb5u); f_1066dd50();
  /* 1066dcb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dcb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066dcba je 0x1066dcdd */
  if (C.zf) goto L_1066dcdd;
  /* 1066dcbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dcbf push ecx */
  push32((uint32_t)(ECX));
  /* 1066dcc0 call 0x1066e2e0 */
  push32(0x1066dcc5u); f_1066e2e0();
  /* 1066dcc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dcc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066dcca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dccd push edx */
  push32((uint32_t)(EDX));
  /* 1066dcce call 0x10663f30 */
  push32(0x1066dcd3u); f_10663f30();
  /* 1066dcd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dcd6 mov eax, 1 */
  EAX = (0x1u);
  /* 1066dcdb jmp 0x1066dd47 */
  goto L_1066dd47;
L_1066dcdd:;
  /* 1066dcdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dce0 mov dword ptr [0x1068ec98], eax */
  w32((uint32_t)(0x1068ec98), (EAX));
  /* 1066dce5 mov ecx, dword ptr [0x1068f6ac] */
  ECX = (r32((uint32_t)(0x1068f6ac)));
  /* 1066dceb push ecx */
  push32((uint32_t)(ECX));
  /* 1066dcec call 0x1066e2e0 */
  push32(0x1066dcf1u); f_1066e2e0();
  /* 1066dcf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dcf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066dcf6 mov edx, dword ptr [0x1068f6ac] */
  EDX = (r32((uint32_t)(0x1068f6ac)));
  /* 1066dcfc push edx */
  push32((uint32_t)(EDX));
  /* 1066dcfd call 0x10663f30 */
  push32(0x1066dd02u); f_10663f30();
  /* 1066dd02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dd05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dd08 mov dword ptr [0x1068f6ac], eax */
  w32((uint32_t)(0x1068f6ac), (EAX));
  /* 1066dd0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066dd0f jmp 0x1066dd47 */
  goto L_1066dd47;
L_1066dd11:;
  /* 1066dd11 mov dword ptr [0x1068ec98], 0x1068eca0 */
  w32((uint32_t)(0x1068ec98), (0x1068eca0u));
  /* 1066dd1b mov ecx, dword ptr [0x1068f6ac] */
  ECX = (r32((uint32_t)(0x1068f6ac)));
  /* 1066dd21 push ecx */
  push32((uint32_t)(ECX));
  /* 1066dd22 call 0x1066e2e0 */
  push32(0x1066dd27u); f_1066e2e0();
  /* 1066dd27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dd2a push 2 */
  push32((uint32_t)(0x2u));
  /* 1066dd2c mov edx, dword ptr [0x1068f6ac] */
  EDX = (r32((uint32_t)(0x1068f6ac)));
  /* 1066dd32 push edx */
  push32((uint32_t)(EDX));
  /* 1066dd33 call 0x10663f30 */
  push32(0x1066dd38u); f_10663f30();
  /* 1066dd38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dd3b mov dword ptr [0x1068f6ac], 0 */
  w32((uint32_t)(0x1068f6ac), (0x0u));
  /* 1066dd45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1066dd47:;
  /* 1066dd47 mov esp, ebp */
  ESP = (EBP);
  /* 1066dd49 pop ebp */
  EBP = (pop32());
  /* 1066dd4a ret  */
  ESPCHK(0x1066dc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd50 @ 0x1066dd50 (1423 bytes, 533 insns) */
void f_1066dd50(void) {
  FTRACE(0x1066dd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066dd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1066dd51 mov ebp, esp */
  EBP = (ESP);
  /* 1066dd53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066dd56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1066dd5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066dd5f mov ax, word ptr [0x1068f6e6] */
  AX = (r16((uint32_t)(0x1068f6e6)));
  /* 1066dd65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066dd68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066dd6a mov cx, word ptr [0x1068f6e8] */
  CX = (r16((uint32_t)(0x1068f6e8)));
  /* 1066dd71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066dd74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066dd78 jne 0x1066dd82 */
  if (!C.zf) goto L_1066dd82;
  /* 1066dd7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066dd7d jmp 0x1066e2db */
  goto L_1066e2db;
L_1066dd82:;
  /* 1066dd82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dd85 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dd88 push edx */
  push32((uint32_t)(EDX));
  /* 1066dd89 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1066dd8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dd8e push eax */
  push32((uint32_t)(EAX));
  /* 1066dd8f push 1 */
  push32((uint32_t)(0x1u));
  /* 1066dd91 call 0x10671660 */
  push32(0x1066dd96u); f_10671660();
  /* 1066dd96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dd99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066dd9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066dd9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066dda1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dda4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dda7 push edx */
  push32((uint32_t)(EDX));
  /* 1066dda8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1066ddaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ddad push eax */
  push32((uint32_t)(EAX));
  /* 1066ddae push 1 */
  push32((uint32_t)(0x1u));
  /* 1066ddb0 call 0x10671660 */
  push32(0x1066ddb5u); f_10671660();
  /* 1066ddb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ddb8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066ddbb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ddbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066ddc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ddc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ddc6 push edx */
  push32((uint32_t)(EDX));
  /* 1066ddc7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1066ddc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ddcc push eax */
  push32((uint32_t)(EAX));
  /* 1066ddcd push 1 */
  push32((uint32_t)(0x1u));
  /* 1066ddcf call 0x10671660 */
  push32(0x1066ddd4u); f_10671660();
  /* 1066ddd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ddd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066ddda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066dddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066dddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dde2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dde5 push edx */
  push32((uint32_t)(EDX));
  /* 1066dde6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1066dde8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ddeb push eax */
  push32((uint32_t)(EAX));
  /* 1066ddec push 1 */
  push32((uint32_t)(0x1u));
  /* 1066ddee call 0x10671660 */
  push32(0x1066ddf3u); f_10671660();
  /* 1066ddf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ddf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066ddf9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ddfb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066ddfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066de01 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066de04 push edx */
  push32((uint32_t)(EDX));
  /* 1066de05 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1066de07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066de0a push eax */
  push32((uint32_t)(EAX));
  /* 1066de0b push 1 */
  push32((uint32_t)(0x1u));
  /* 1066de0d call 0x10671660 */
  push32(0x1066de12u); f_10671660();
  /* 1066de12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066de15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066de18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066de1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066de1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066de20 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066de23 push edx */
  push32((uint32_t)(EDX));
  /* 1066de24 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1066de26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066de29 push eax */
  push32((uint32_t)(EAX));
  /* 1066de2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1066de2c call 0x10671660 */
  push32(0x1066de31u); f_10671660();
  /* 1066de31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066de34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066de37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066de39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066de3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066de3f push edx */
  push32((uint32_t)(EDX));
  /* 1066de40 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1066de42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066de45 push eax */
  push32((uint32_t)(EAX));
  /* 1066de46 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066de48 call 0x10671660 */
  push32(0x1066de4du); f_10671660();
  /* 1066de4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066de50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066de53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066de55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066de58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066de5b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066de5e push edx */
  push32((uint32_t)(EDX));
  /* 1066de5f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1066de61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066de64 push eax */
  push32((uint32_t)(EAX));
  /* 1066de65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066de67 call 0x10671660 */
  push32(0x1066de6cu); f_10671660();
  /* 1066de6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066de6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066de72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066de74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066de77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066de7a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066de7d push edx */
  push32((uint32_t)(EDX));
  /* 1066de7e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1066de80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066de83 push eax */
  push32((uint32_t)(EAX));
  /* 1066de84 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066de86 call 0x10671660 */
  push32(0x1066de8bu); f_10671660();
  /* 1066de8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066de8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066de91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066de93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066de96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066de99 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066de9c push edx */
  push32((uint32_t)(EDX));
  /* 1066de9d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1066de9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dea2 push eax */
  push32((uint32_t)(EAX));
  /* 1066dea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066dea5 call 0x10671660 */
  push32(0x1066deaau); f_10671660();
  /* 1066deaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dead mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066deb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066deb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066deb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066deb8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066debb push edx */
  push32((uint32_t)(EDX));
  /* 1066debc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1066debe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dec1 push eax */
  push32((uint32_t)(EAX));
  /* 1066dec2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066dec4 call 0x10671660 */
  push32(0x1066dec9u); f_10671660();
  /* 1066dec9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066decc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066decf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ded1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066ded4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ded7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066deda push edx */
  push32((uint32_t)(EDX));
  /* 1066dedb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1066dedd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dee0 push eax */
  push32((uint32_t)(EAX));
  /* 1066dee1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066dee3 call 0x10671660 */
  push32(0x1066dee8u); f_10671660();
  /* 1066dee8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066deeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066deee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066def0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066def3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066def6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066def9 push edx */
  push32((uint32_t)(EDX));
  /* 1066defa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1066defc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066deff push eax */
  push32((uint32_t)(EAX));
  /* 1066df00 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066df02 call 0x10671660 */
  push32(0x1066df07u); f_10671660();
  /* 1066df07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066df0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066df0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066df0f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066df12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066df15 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066df18 push edx */
  push32((uint32_t)(EDX));
  /* 1066df19 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1066df1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066df1e push eax */
  push32((uint32_t)(EAX));
  /* 1066df1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1066df21 call 0x10671660 */
  push32(0x1066df26u); f_10671660();
  /* 1066df26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066df29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066df2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066df2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066df31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066df34 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066df37 push edx */
  push32((uint32_t)(EDX));
  /* 1066df38 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1066df3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066df3d push eax */
  push32((uint32_t)(EAX));
  /* 1066df3e push 1 */
  push32((uint32_t)(0x1u));
  /* 1066df40 call 0x10671660 */
  push32(0x1066df45u); f_10671660();
  /* 1066df45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066df48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066df4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066df4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066df50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066df53 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066df56 push edx */
  push32((uint32_t)(EDX));
  /* 1066df57 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1066df59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066df5c push eax */
  push32((uint32_t)(EAX));
  /* 1066df5d push 1 */
  push32((uint32_t)(0x1u));
  /* 1066df5f call 0x10671660 */
  push32(0x1066df64u); f_10671660();
  /* 1066df64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066df67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066df6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066df6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066df6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066df72 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066df75 push edx */
  push32((uint32_t)(EDX));
  /* 1066df76 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1066df78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066df7b push eax */
  push32((uint32_t)(EAX));
  /* 1066df7c push 1 */
  push32((uint32_t)(0x1u));
  /* 1066df7e call 0x10671660 */
  push32(0x1066df83u); f_10671660();
  /* 1066df83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066df86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066df89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066df8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066df8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066df91 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066df94 push edx */
  push32((uint32_t)(EDX));
  /* 1066df95 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1066df97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066df9a push eax */
  push32((uint32_t)(EAX));
  /* 1066df9b push 1 */
  push32((uint32_t)(0x1u));
  /* 1066df9d call 0x10671660 */
  push32(0x1066dfa2u); f_10671660();
  /* 1066dfa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dfa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066dfa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066dfaa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066dfad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dfb0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dfb3 push edx */
  push32((uint32_t)(EDX));
  /* 1066dfb4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1066dfb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dfb9 push eax */
  push32((uint32_t)(EAX));
  /* 1066dfba push 1 */
  push32((uint32_t)(0x1u));
  /* 1066dfbc call 0x10671660 */
  push32(0x1066dfc1u); f_10671660();
  /* 1066dfc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dfc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066dfc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066dfc9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066dfcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dfcf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dfd2 push edx */
  push32((uint32_t)(EDX));
  /* 1066dfd3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1066dfd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dfd8 push eax */
  push32((uint32_t)(EAX));
  /* 1066dfd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066dfdb call 0x10671660 */
  push32(0x1066dfe0u); f_10671660();
  /* 1066dfe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dfe3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066dfe6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066dfe8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066dfeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066dfee add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066dff1 push edx */
  push32((uint32_t)(EDX));
  /* 1066dff2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1066dff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066dff7 push eax */
  push32((uint32_t)(EAX));
  /* 1066dff8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066dffa call 0x10671660 */
  push32(0x1066dfffu); f_10671660();
  /* 1066dfff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e002 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e005 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e007 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e00a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e00d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e010 push edx */
  push32((uint32_t)(EDX));
  /* 1066e011 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1066e013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e016 push eax */
  push32((uint32_t)(EAX));
  /* 1066e017 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e019 call 0x10671660 */
  push32(0x1066e01eu); f_10671660();
  /* 1066e01e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e021 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e024 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e026 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e02c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e02f push edx */
  push32((uint32_t)(EDX));
  /* 1066e030 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1066e032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e035 push eax */
  push32((uint32_t)(EAX));
  /* 1066e036 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e038 call 0x10671660 */
  push32(0x1066e03du); f_10671660();
  /* 1066e03d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e040 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e043 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e045 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e04b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e04e push edx */
  push32((uint32_t)(EDX));
  /* 1066e04f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1066e051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e054 push eax */
  push32((uint32_t)(EAX));
  /* 1066e055 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e057 call 0x10671660 */
  push32(0x1066e05cu); f_10671660();
  /* 1066e05c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e05f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e062 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e064 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e06a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e06d push edx */
  push32((uint32_t)(EDX));
  /* 1066e06e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1066e070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e073 push eax */
  push32((uint32_t)(EAX));
  /* 1066e074 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e076 call 0x10671660 */
  push32(0x1066e07bu); f_10671660();
  /* 1066e07b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e07e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e081 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e083 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e086 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e089 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e08c push edx */
  push32((uint32_t)(EDX));
  /* 1066e08d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1066e08f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e092 push eax */
  push32((uint32_t)(EAX));
  /* 1066e093 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e095 call 0x10671660 */
  push32(0x1066e09au); f_10671660();
  /* 1066e09a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e09d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e0a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e0a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e0a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e0a8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e0ab push edx */
  push32((uint32_t)(EDX));
  /* 1066e0ac push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1066e0ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e0b1 push eax */
  push32((uint32_t)(EAX));
  /* 1066e0b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e0b4 call 0x10671660 */
  push32(0x1066e0b9u); f_10671660();
  /* 1066e0b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e0bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e0bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e0c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e0c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e0c7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e0ca push edx */
  push32((uint32_t)(EDX));
  /* 1066e0cb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1066e0cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e0d0 push eax */
  push32((uint32_t)(EAX));
  /* 1066e0d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e0d3 call 0x10671660 */
  push32(0x1066e0d8u); f_10671660();
  /* 1066e0d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e0db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e0de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e0e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e0e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e0e6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e0e9 push edx */
  push32((uint32_t)(EDX));
  /* 1066e0ea push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1066e0ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e0ef push eax */
  push32((uint32_t)(EAX));
  /* 1066e0f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e0f2 call 0x10671660 */
  push32(0x1066e0f7u); f_10671660();
  /* 1066e0f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e0fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e0fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e0ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e102 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e105 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e108 push edx */
  push32((uint32_t)(EDX));
  /* 1066e109 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1066e10b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e10e push eax */
  push32((uint32_t)(EAX));
  /* 1066e10f push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e111 call 0x10671660 */
  push32(0x1066e116u); f_10671660();
  /* 1066e116 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e119 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e11c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e11e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e124 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e127 push edx */
  push32((uint32_t)(EDX));
  /* 1066e128 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1066e12a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e12d push eax */
  push32((uint32_t)(EAX));
  /* 1066e12e push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e130 call 0x10671660 */
  push32(0x1066e135u); f_10671660();
  /* 1066e135 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e138 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e13b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e13d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e140 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e143 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e146 push edx */
  push32((uint32_t)(EDX));
  /* 1066e147 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1066e149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e14c push eax */
  push32((uint32_t)(EAX));
  /* 1066e14d push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e14f call 0x10671660 */
  push32(0x1066e154u); f_10671660();
  /* 1066e154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e15a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e15c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e15f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e162 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e168 push edx */
  push32((uint32_t)(EDX));
  /* 1066e169 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1066e16b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e16e push eax */
  push32((uint32_t)(EAX));
  /* 1066e16f push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e171 call 0x10671660 */
  push32(0x1066e176u); f_10671660();
  /* 1066e176 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e179 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e17c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e17e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e184 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e18a push edx */
  push32((uint32_t)(EDX));
  /* 1066e18b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1066e18d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e190 push eax */
  push32((uint32_t)(EAX));
  /* 1066e191 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e193 call 0x10671660 */
  push32(0x1066e198u); f_10671660();
  /* 1066e198 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e19b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e19e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e1a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e1a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e1a6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e1ac push edx */
  push32((uint32_t)(EDX));
  /* 1066e1ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1066e1af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e1b2 push eax */
  push32((uint32_t)(EAX));
  /* 1066e1b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e1b5 call 0x10671660 */
  push32(0x1066e1bau); f_10671660();
  /* 1066e1ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e1bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e1c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e1c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e1c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e1c8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e1ce push edx */
  push32((uint32_t)(EDX));
  /* 1066e1cf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1066e1d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e1d4 push eax */
  push32((uint32_t)(EAX));
  /* 1066e1d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e1d7 call 0x10671660 */
  push32(0x1066e1dcu); f_10671660();
  /* 1066e1dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e1df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e1e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e1e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e1e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e1ea add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e1f0 push edx */
  push32((uint32_t)(EDX));
  /* 1066e1f1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1066e1f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e1f6 push eax */
  push32((uint32_t)(EAX));
  /* 1066e1f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e1f9 call 0x10671660 */
  push32(0x1066e1feu); f_10671660();
  /* 1066e1fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e201 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e204 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e206 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e20c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e212 push edx */
  push32((uint32_t)(EDX));
  /* 1066e213 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1066e215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e218 push eax */
  push32((uint32_t)(EAX));
  /* 1066e219 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e21b call 0x10671660 */
  push32(0x1066e220u); f_10671660();
  /* 1066e220 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e223 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e226 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e228 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e22b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e22e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e234 push edx */
  push32((uint32_t)(EDX));
  /* 1066e235 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1066e237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e23a push eax */
  push32((uint32_t)(EAX));
  /* 1066e23b push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e23d call 0x10671660 */
  push32(0x1066e242u); f_10671660();
  /* 1066e242 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e245 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e248 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e24a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e24d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e250 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e256 push edx */
  push32((uint32_t)(EDX));
  /* 1066e257 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1066e259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e25c push eax */
  push32((uint32_t)(EAX));
  /* 1066e25d push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e25f call 0x10671660 */
  push32(0x1066e264u); f_10671660();
  /* 1066e264 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e267 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e26a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e26c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e26f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e272 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e278 push edx */
  push32((uint32_t)(EDX));
  /* 1066e279 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1066e27b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066e27e push eax */
  push32((uint32_t)(EAX));
  /* 1066e27f push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e281 call 0x10671660 */
  push32(0x1066e286u); f_10671660();
  /* 1066e286 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e289 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e28c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e28e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e294 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e29a push edx */
  push32((uint32_t)(EDX));
  /* 1066e29b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1066e29d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066e2a0 push eax */
  push32((uint32_t)(EAX));
  /* 1066e2a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e2a3 call 0x10671660 */
  push32(0x1066e2a8u); f_10671660();
  /* 1066e2a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e2ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e2ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e2b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e2b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e2b6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e2bc push edx */
  push32((uint32_t)(EDX));
  /* 1066e2bd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1066e2c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066e2c5 push eax */
  push32((uint32_t)(EAX));
  /* 1066e2c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e2c8 call 0x10671660 */
  push32(0x1066e2cdu); f_10671660();
  /* 1066e2cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e2d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066e2d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e2d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066e2d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1066e2db:;
  /* 1066e2db mov esp, ebp */
  ESP = (EBP);
  /* 1066e2dd pop ebp */
  EBP = (pop32());
  /* 1066e2de ret  */
  ESPCHK(0x1066dd50u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1066e2e0 (779 bytes, 265 insns) */
void f_1066e2e0(void) {
  FTRACE(0x1066e2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066e2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066e2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1066e2e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e2e7 jne 0x1066e2ee */
  if (!C.zf) goto L_1066e2ee;
  /* 1066e2e9 jmp 0x1066e5e9 */
  goto L_1066e5e9;
L_1066e2ee:;
  /* 1066e2ee push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e2f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e2f3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1066e2f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e2f7 call 0x10663f30 */
  push32(0x1066e2fcu); f_10663f30();
  /* 1066e2fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e2ff push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e301 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e304 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1066e307 push eax */
  push32((uint32_t)(EAX));
  /* 1066e308 call 0x10663f30 */
  push32(0x1066e30du); f_10663f30();
  /* 1066e30d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e310 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e312 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e315 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066e318 push edx */
  push32((uint32_t)(EDX));
  /* 1066e319 call 0x10663f30 */
  push32(0x1066e31eu); f_10663f30();
  /* 1066e31e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e321 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e326 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1066e329 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e32a call 0x10663f30 */
  push32(0x1066e32fu); f_10663f30();
  /* 1066e32f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e332 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e334 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e337 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1066e33a push eax */
  push32((uint32_t)(EAX));
  /* 1066e33b call 0x10663f30 */
  push32(0x1066e340u); f_10663f30();
  /* 1066e340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e343 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e345 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e348 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1066e34b push edx */
  push32((uint32_t)(EDX));
  /* 1066e34c call 0x10663f30 */
  push32(0x1066e351u); f_10663f30();
  /* 1066e351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e354 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e359 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1066e35b push ecx */
  push32((uint32_t)(ECX));
  /* 1066e35c call 0x10663f30 */
  push32(0x1066e361u); f_10663f30();
  /* 1066e361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e364 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e366 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e369 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1066e36c push eax */
  push32((uint32_t)(EAX));
  /* 1066e36d call 0x10663f30 */
  push32(0x1066e372u); f_10663f30();
  /* 1066e372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e375 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e377 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e37a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1066e37d push edx */
  push32((uint32_t)(EDX));
  /* 1066e37e call 0x10663f30 */
  push32(0x1066e383u); f_10663f30();
  /* 1066e383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e386 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e388 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e38b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1066e38e push ecx */
  push32((uint32_t)(ECX));
  /* 1066e38f call 0x10663f30 */
  push32(0x1066e394u); f_10663f30();
  /* 1066e394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e397 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e39c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1066e39f push eax */
  push32((uint32_t)(EAX));
  /* 1066e3a0 call 0x10663f30 */
  push32(0x1066e3a5u); f_10663f30();
  /* 1066e3a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e3a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e3aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e3ad mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1066e3b0 push edx */
  push32((uint32_t)(EDX));
  /* 1066e3b1 call 0x10663f30 */
  push32(0x1066e3b6u); f_10663f30();
  /* 1066e3b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e3b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e3bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e3be mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1066e3c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e3c2 call 0x10663f30 */
  push32(0x1066e3c7u); f_10663f30();
  /* 1066e3c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e3ca push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e3cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e3cf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1066e3d2 push eax */
  push32((uint32_t)(EAX));
  /* 1066e3d3 call 0x10663f30 */
  push32(0x1066e3d8u); f_10663f30();
  /* 1066e3d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e3db push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e3dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e3e0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1066e3e3 push edx */
  push32((uint32_t)(EDX));
  /* 1066e3e4 call 0x10663f30 */
  push32(0x1066e3e9u); f_10663f30();
  /* 1066e3e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e3ec push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e3ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e3f1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1066e3f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e3f5 call 0x10663f30 */
  push32(0x1066e3fau); f_10663f30();
  /* 1066e3fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e3fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e3ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e402 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1066e405 push eax */
  push32((uint32_t)(EAX));
  /* 1066e406 call 0x10663f30 */
  push32(0x1066e40bu); f_10663f30();
  /* 1066e40b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e40e push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e413 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1066e416 push edx */
  push32((uint32_t)(EDX));
  /* 1066e417 call 0x10663f30 */
  push32(0x1066e41cu); f_10663f30();
  /* 1066e41c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e41f push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e421 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e424 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1066e427 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e428 call 0x10663f30 */
  push32(0x1066e42du); f_10663f30();
  /* 1066e42d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e430 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e435 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1066e438 push eax */
  push32((uint32_t)(EAX));
  /* 1066e439 call 0x10663f30 */
  push32(0x1066e43eu); f_10663f30();
  /* 1066e43e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e441 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e443 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e446 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1066e449 push edx */
  push32((uint32_t)(EDX));
  /* 1066e44a call 0x10663f30 */
  push32(0x1066e44fu); f_10663f30();
  /* 1066e44f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e452 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e457 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1066e45a push ecx */
  push32((uint32_t)(ECX));
  /* 1066e45b call 0x10663f30 */
  push32(0x1066e460u); f_10663f30();
  /* 1066e460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e463 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e468 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1066e46b push eax */
  push32((uint32_t)(EAX));
  /* 1066e46c call 0x10663f30 */
  push32(0x1066e471u); f_10663f30();
  /* 1066e471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e474 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e479 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1066e47c push edx */
  push32((uint32_t)(EDX));
  /* 1066e47d call 0x10663f30 */
  push32(0x1066e482u); f_10663f30();
  /* 1066e482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e485 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e48a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1066e48d push ecx */
  push32((uint32_t)(ECX));
  /* 1066e48e call 0x10663f30 */
  push32(0x1066e493u); f_10663f30();
  /* 1066e493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e496 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e498 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e49b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1066e49e push eax */
  push32((uint32_t)(EAX));
  /* 1066e49f call 0x10663f30 */
  push32(0x1066e4a4u); f_10663f30();
  /* 1066e4a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e4a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e4a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e4ac mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1066e4af push edx */
  push32((uint32_t)(EDX));
  /* 1066e4b0 call 0x10663f30 */
  push32(0x1066e4b5u); f_10663f30();
  /* 1066e4b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e4b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e4ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e4bd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1066e4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e4c1 call 0x10663f30 */
  push32(0x1066e4c6u); f_10663f30();
  /* 1066e4c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e4c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e4cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e4ce mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1066e4d1 push eax */
  push32((uint32_t)(EAX));
  /* 1066e4d2 call 0x10663f30 */
  push32(0x1066e4d7u); f_10663f30();
  /* 1066e4d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e4da push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e4dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e4df mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1066e4e2 push edx */
  push32((uint32_t)(EDX));
  /* 1066e4e3 call 0x10663f30 */
  push32(0x1066e4e8u); f_10663f30();
  /* 1066e4e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e4eb push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e4ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e4f0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1066e4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e4f4 call 0x10663f30 */
  push32(0x1066e4f9u); f_10663f30();
  /* 1066e4f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e4fc push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e4fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e501 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1066e504 push eax */
  push32((uint32_t)(EAX));
  /* 1066e505 call 0x10663f30 */
  push32(0x1066e50au); f_10663f30();
  /* 1066e50a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e50d push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e50f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e512 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1066e518 push edx */
  push32((uint32_t)(EDX));
  /* 1066e519 call 0x10663f30 */
  push32(0x1066e51eu); f_10663f30();
  /* 1066e51e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e521 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e526 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1066e52c push ecx */
  push32((uint32_t)(ECX));
  /* 1066e52d call 0x10663f30 */
  push32(0x1066e532u); f_10663f30();
  /* 1066e532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e535 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e537 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e53a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1066e540 push eax */
  push32((uint32_t)(EAX));
  /* 1066e541 call 0x10663f30 */
  push32(0x1066e546u); f_10663f30();
  /* 1066e546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e549 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e54b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e54e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1066e554 push edx */
  push32((uint32_t)(EDX));
  /* 1066e555 call 0x10663f30 */
  push32(0x1066e55au); f_10663f30();
  /* 1066e55a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e55d push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e55f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e562 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1066e568 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e569 call 0x10663f30 */
  push32(0x1066e56eu); f_10663f30();
  /* 1066e56e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e571 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e573 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e576 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1066e57c push eax */
  push32((uint32_t)(EAX));
  /* 1066e57d call 0x10663f30 */
  push32(0x1066e582u); f_10663f30();
  /* 1066e582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e585 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e58a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1066e590 push edx */
  push32((uint32_t)(EDX));
  /* 1066e591 call 0x10663f30 */
  push32(0x1066e596u); f_10663f30();
  /* 1066e596 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e599 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e59b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e59e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1066e5a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e5a5 call 0x10663f30 */
  push32(0x1066e5aau); f_10663f30();
  /* 1066e5aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e5ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e5af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e5b2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1066e5b8 push eax */
  push32((uint32_t)(EAX));
  /* 1066e5b9 call 0x10663f30 */
  push32(0x1066e5beu); f_10663f30();
  /* 1066e5be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e5c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e5c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e5c6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1066e5cc push edx */
  push32((uint32_t)(EDX));
  /* 1066e5cd call 0x10663f30 */
  push32(0x1066e5d2u); f_10663f30();
  /* 1066e5d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e5d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e5d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e5da mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1066e5e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e5e1 call 0x10663f30 */
  push32(0x1066e5e6u); f_10663f30();
  /* 1066e5e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066e5e9:;
  /* 1066e5e9 pop ebp */
  EBP = (pop32());
  /* 1066e5ea ret  */
  ESPCHK(0x1066e2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5f0 @ 0x1066e5f0 (678 bytes, 180 insns) */
void f_1066e5f0(void) {
  FTRACE(0x1066e5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066e5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066e5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1066e5f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066e5f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1066e5fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066e5ff mov ax, word ptr [0x1068f6e2] */
  AX = (r16((uint32_t)(0x1068f6e2)));
  /* 1066e605 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066e608 cmp dword ptr [0x1068f688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e60f je 0x1066e76a */
  if (C.zf) goto L_1066e76a;
  /* 1066e615 push 0x1068f6b0 */
  push32((uint32_t)(0x1068f6b0u));
  /* 1066e61a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1066e61c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e61f push ecx */
  push32((uint32_t)(ECX));
  /* 1066e620 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e622 call 0x10671660 */
  push32(0x1066e627u); f_10671660();
  /* 1066e627 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e62a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066e62d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1066e62f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1066e632 push 0x1068f6b4 */
  push32((uint32_t)(0x1068f6b4u));
  /* 1066e637 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1066e639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e63c push eax */
  push32((uint32_t)(EAX));
  /* 1066e63d push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e63f call 0x10671660 */
  push32(0x1066e644u); f_10671660();
  /* 1066e644 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e647 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066e64a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e64c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066e64f push 0x1068f6b8 */
  push32((uint32_t)(0x1068f6b8u));
  /* 1066e654 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1066e656 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e659 push edx */
  push32((uint32_t)(EDX));
  /* 1066e65a push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e65c call 0x10671660 */
  push32(0x1066e661u); f_10671660();
  /* 1066e661 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e664 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066e667 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066e669 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066e66c mov edx, dword ptr [0x1068f6b8] */
  EDX = (r32((uint32_t)(0x1068f6b8)));
  /* 1066e672 push edx */
  push32((uint32_t)(EDX));
  /* 1066e673 call 0x1066e8a0 */
  push32(0x1066e678u); f_1066e8a0();
  /* 1066e678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e67b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e67f je 0x1066e6d9 */
  if (C.zf) goto L_1066e6d9;
  /* 1066e681 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e683 mov eax, dword ptr [0x1068f6b0] */
  EAX = (r32((uint32_t)(0x1068f6b0)));
  /* 1066e688 push eax */
  push32((uint32_t)(EAX));
  /* 1066e689 call 0x10663f30 */
  push32(0x1066e68eu); f_10663f30();
  /* 1066e68e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e691 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e693 mov ecx, dword ptr [0x1068f6b4] */
  ECX = (r32((uint32_t)(0x1068f6b4)));
  /* 1066e699 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e69a call 0x10663f30 */
  push32(0x1066e69fu); f_10663f30();
  /* 1066e69f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e6a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e6a4 mov edx, dword ptr [0x1068f6b8] */
  EDX = (r32((uint32_t)(0x1068f6b8)));
  /* 1066e6aa push edx */
  push32((uint32_t)(EDX));
  /* 1066e6ab call 0x10663f30 */
  push32(0x1066e6b0u); f_10663f30();
  /* 1066e6b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e6b3 mov dword ptr [0x1068f6b0], 0 */
  w32((uint32_t)(0x1068f6b0), (0x0u));
  /* 1066e6bd mov dword ptr [0x1068f6b4], 0 */
  w32((uint32_t)(0x1068f6b4), (0x0u));
  /* 1066e6c7 mov dword ptr [0x1068f6b8], 0 */
  w32((uint32_t)(0x1068f6b8), (0x0u));
  /* 1066e6d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066e6d4 jmp 0x1066e892 */
  goto L_1066e892;
L_1066e6d9:;
  /* 1066e6d9 mov eax, dword ptr [0x1068ed88] */
  EAX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e6de cmp dword ptr [eax], 0x1068ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1068ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e6e4 je 0x1066e720 */
  if (C.zf) goto L_1066e720;
  /* 1066e6e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e6e8 mov ecx, dword ptr [0x1068ed88] */
  ECX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e6ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1066e6f0 push edx */
  push32((uint32_t)(EDX));
  /* 1066e6f1 call 0x10663f30 */
  push32(0x1066e6f6u); f_10663f30();
  /* 1066e6f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e6f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e6fb mov eax, dword ptr [0x1068ed88] */
  EAX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e700 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1066e703 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e704 call 0x10663f30 */
  push32(0x1066e709u); f_10663f30();
  /* 1066e709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e70c push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e70e mov edx, dword ptr [0x1068ed88] */
  EDX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e714 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1066e717 push eax */
  push32((uint32_t)(EAX));
  /* 1066e718 call 0x10663f30 */
  push32(0x1066e71du); f_10663f30();
  /* 1066e71d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066e720:;
  /* 1066e720 mov ecx, dword ptr [0x1068ed88] */
  ECX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e726 mov edx, dword ptr [0x1068f6b0] */
  EDX = (r32((uint32_t)(0x1068f6b0)));
  /* 1066e72c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1066e72e mov eax, dword ptr [0x1068ed88] */
  EAX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e733 mov ecx, dword ptr [0x1068f6b4] */
  ECX = (r32((uint32_t)(0x1068f6b4)));
  /* 1066e739 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1066e73c mov edx, dword ptr [0x1068ed88] */
  EDX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e742 mov eax, dword ptr [0x1068f6b8] */
  EAX = (r32((uint32_t)(0x1068f6b8)));
  /* 1066e747 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1066e74a mov ecx, dword ptr [0x1068ed88] */
  ECX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e750 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1066e752 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1066e754 mov byte ptr [0x1068dea8], al */
  w8((uint32_t)(0x1068dea8), (AL));
  /* 1066e759 mov dword ptr [0x1068deac], 1 */
  w32((uint32_t)(0x1068deac), (0x1u));
  /* 1066e763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066e765 jmp 0x1066e892 */
  goto L_1066e892;
L_1066e76a:;
  /* 1066e76a push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e76c mov ecx, dword ptr [0x1068f6b0] */
  ECX = (r32((uint32_t)(0x1068f6b0)));
  /* 1066e772 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e773 call 0x10663f30 */
  push32(0x1066e778u); f_10663f30();
  /* 1066e778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e77b push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e77d mov edx, dword ptr [0x1068f6b4] */
  EDX = (r32((uint32_t)(0x1068f6b4)));
  /* 1066e783 push edx */
  push32((uint32_t)(EDX));
  /* 1066e784 call 0x10663f30 */
  push32(0x1066e789u); f_10663f30();
  /* 1066e789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e78c push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e78e mov eax, dword ptr [0x1068f6b8] */
  EAX = (r32((uint32_t)(0x1068f6b8)));
  /* 1066e793 push eax */
  push32((uint32_t)(EAX));
  /* 1066e794 call 0x10663f30 */
  push32(0x1066e799u); f_10663f30();
  /* 1066e799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e79c mov dword ptr [0x1068f6b0], 0 */
  w32((uint32_t)(0x1068f6b0), (0x0u));
  /* 1066e7a6 mov dword ptr [0x1068f6b4], 0 */
  w32((uint32_t)(0x1068f6b4), (0x0u));
  /* 1066e7b0 mov dword ptr [0x1068f6b8], 0 */
  w32((uint32_t)(0x1068f6b8), (0x0u));
  /* 1066e7ba push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1066e7bf push 0x1068b0dc */
  push32((uint32_t)(0x1068b0dcu));
  /* 1066e7c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e7c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e7c8 call 0x106634a0 */
  push32(0x1066e7cdu); f_106634a0();
  /* 1066e7cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e7d0 mov ecx, dword ptr [0x1068ed88] */
  ECX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e7d6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1066e7d8 mov edx, dword ptr [0x1068ed88] */
  EDX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e7de cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e7e1 jne 0x1066e7eb */
  if (!C.zf) goto L_1066e7eb;
  /* 1066e7e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066e7e6 jmp 0x1066e892 */
  goto L_1066e892;
L_1066e7eb:;
  /* 1066e7eb push 0x1068b0ac */
  push32((uint32_t)(0x1068b0acu));
  /* 1066e7f0 mov eax, dword ptr [0x1068ed88] */
  EAX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e7f5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1066e7f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e7f8 call 0x10666450 */
  push32(0x1066e7fdu); f_10666450();
  /* 1066e7fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e800 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1066e805 push 0x1068b0dc */
  push32((uint32_t)(0x1068b0dcu));
  /* 1066e80a push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e80c push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e80e call 0x106634a0 */
  push32(0x1066e813u); f_106634a0();
  /* 1066e813 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e816 mov edx, dword ptr [0x1068ed88] */
  EDX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e81c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1066e81f mov eax, dword ptr [0x1068ed88] */
  EAX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e824 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e828 jne 0x1066e82f */
  if (!C.zf) goto L_1066e82f;
  /* 1066e82a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066e82d jmp 0x1066e892 */
  goto L_1066e892;
L_1066e82f:;
  /* 1066e82f mov ecx, dword ptr [0x1068ed88] */
  ECX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e835 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1066e838 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1066e83b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1066e840 push 0x1068b0dc */
  push32((uint32_t)(0x1068b0dcu));
  /* 1066e845 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e847 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e849 call 0x106634a0 */
  push32(0x1066e84eu); f_106634a0();
  /* 1066e84e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e851 mov ecx, dword ptr [0x1068ed88] */
  ECX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e857 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1066e85a mov edx, dword ptr [0x1068ed88] */
  EDX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e860 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e864 jne 0x1066e86b */
  if (!C.zf) goto L_1066e86b;
  /* 1066e866 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066e869 jmp 0x1066e892 */
  goto L_1066e892;
L_1066e86b:;
  /* 1066e86b mov eax, dword ptr [0x1068ed88] */
  EAX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e870 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1066e873 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1066e876 mov edx, dword ptr [0x1068ed88] */
  EDX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e87c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1066e87e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1066e880 mov byte ptr [0x1068dea8], cl */
  w8((uint32_t)(0x1068dea8), (CL));
  /* 1066e886 mov dword ptr [0x1068deac], 1 */
  w32((uint32_t)(0x1068deac), (0x1u));
  /* 1066e890 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1066e892:;
  /* 1066e892 mov esp, ebp */
  ESP = (EBP);
  /* 1066e894 pop ebp */
  EBP = (pop32());
  /* 1066e895 ret  */
  ESPCHK(0x1066e5f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1066e8a0 (125 bytes, 49 insns) */
void f_1066e8a0(void) {
  FTRACE(0x1066e8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066e8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066e8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1066e8a3 push ecx */
  push32((uint32_t)(ECX));
L_1066e8a4:;
  /* 1066e8a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e8a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066e8aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066e8ac je 0x1066e919 */
  if (C.zf) goto L_1066e919;
  /* 1066e8ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e8b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1066e8b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e8b7 jl 0x1066e8dd */
  if ((C.sf!=C.of)) goto L_1066e8dd;
  /* 1066e8b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e8bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066e8bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e8c2 jg 0x1066e8dd */
  if ((!C.zf&&C.sf==C.of)) goto L_1066e8dd;
  /* 1066e8c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e8c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066e8ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066e8cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e8d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1066e8d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e8d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e8d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1066e8db jmp 0x1066e917 */
  goto L_1066e917;
L_1066e8dd:;
  /* 1066e8dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e8e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066e8e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e8e6 jne 0x1066e90e */
  if (!C.zf) goto L_1066e90e;
  /* 1066e8e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e8eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066e8ee:;
  /* 1066e8ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e8f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e8f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1066e8f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1066e8f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e8fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e8ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066e902 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e905 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1066e908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066e90a jne 0x1066e8ee */
  if (!C.zf) goto L_1066e8ee;
  /* 1066e90c jmp 0x1066e917 */
  goto L_1066e917;
L_1066e90e:;
  /* 1066e90e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066e911 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e914 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1066e917:;
  /* 1066e917 jmp 0x1066e8a4 */
  goto L_1066e8a4;
L_1066e919:;
  /* 1066e919 mov esp, ebp */
  ESP = (EBP);
  /* 1066e91b pop ebp */
  EBP = (pop32());
  /* 1066e91c ret  */
  ESPCHK(0x1066e8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e920 @ 0x1066e920 (304 bytes, 85 insns) */
void f_1066e920(void) {
  FTRACE(0x1066e920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066e920 push ebp */
  push32((uint32_t)(EBP));
  /* 1066e921 mov ebp, esp */
  EBP = (ESP);
  /* 1066e923 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e924 cmp dword ptr [0x1068f684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e92b je 0x1066e9ec */
  if (C.zf) goto L_1066e9ec;
  /* 1066e931 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1066e933 push 0x1068b0e8 */
  push32((uint32_t)(0x1068b0e8u));
  /* 1066e938 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e93a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1066e93c push 1 */
  push32((uint32_t)(0x1u));
  /* 1066e93e call 0x106638b0 */
  push32(0x1066e943u); f_106638b0();
  /* 1066e943 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e946 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066e949 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066e94d jne 0x1066e959 */
  if (!C.zf) goto L_1066e959;
  /* 1066e94f mov eax, 1 */
  EAX = (0x1u);
  /* 1066e954 jmp 0x1066ea4c */
  goto L_1066ea4c;
L_1066e959:;
  /* 1066e959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e95c push eax */
  push32((uint32_t)(EAX));
  /* 1066e95d call 0x1066ea50 */
  push32(0x1066e962u); f_1066ea50();
  /* 1066e962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e965 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066e967 je 0x1066e98d */
  if (C.zf) goto L_1066e98d;
  /* 1066e969 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e96c push ecx */
  push32((uint32_t)(ECX));
  /* 1066e96d call 0x1066ece0 */
  push32(0x1066e972u); f_1066ece0();
  /* 1066e972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e975 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e977 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e97a push edx */
  push32((uint32_t)(EDX));
  /* 1066e97b call 0x10663f30 */
  push32(0x1066e980u); f_10663f30();
  /* 1066e980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e983 mov eax, 1 */
  EAX = (0x1u);
  /* 1066e988 jmp 0x1066ea4c */
  goto L_1066ea4c;
L_1066e98d:;
  /* 1066e98d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e990 mov ecx, dword ptr [0x1068ed88] */
  ECX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1066e998 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1066e99a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e99d mov ecx, dword ptr [0x1068ed88] */
  ECX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e9a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1066e9a6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1066e9a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e9ac mov ecx, dword ptr [0x1068ed88] */
  ECX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e9b2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1066e9b5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1066e9b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e9bb mov dword ptr [0x1068ed88], eax */
  w32((uint32_t)(0x1068ed88), (EAX));
  /* 1066e9c0 mov ecx, dword ptr [0x1068f6bc] */
  ECX = (r32((uint32_t)(0x1068f6bc)));
  /* 1066e9c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1066e9c7 call 0x1066ece0 */
  push32(0x1066e9ccu); f_1066ece0();
  /* 1066e9cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e9cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1066e9d1 mov edx, dword ptr [0x1068f6bc] */
  EDX = (r32((uint32_t)(0x1068f6bc)));
  /* 1066e9d7 push edx */
  push32((uint32_t)(EDX));
  /* 1066e9d8 call 0x10663f30 */
  push32(0x1066e9ddu); f_10663f30();
  /* 1066e9dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066e9e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066e9e3 mov dword ptr [0x1068f6bc], eax */
  w32((uint32_t)(0x1068f6bc), (EAX));
  /* 1066e9e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066e9ea jmp 0x1066ea4c */
  goto L_1066ea4c;
L_1066e9ec:;
  /* 1066e9ec mov ecx, dword ptr [0x1068ed88] */
  ECX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e9f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1066e9f4 mov dword ptr [0x1068ed58], edx */
  w32((uint32_t)(0x1068ed58), (EDX));
  /* 1066e9fa mov eax, dword ptr [0x1068ed88] */
  EAX = (r32((uint32_t)(0x1068ed88)));
  /* 1066e9ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1066ea02 mov dword ptr [0x1068ed5c], ecx */
  w32((uint32_t)(0x1068ed5c), (ECX));
  /* 1066ea08 mov edx, dword ptr [0x1068ed88] */
  EDX = (r32((uint32_t)(0x1068ed88)));
  /* 1066ea0e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1066ea11 mov dword ptr [0x1068ed60], eax */
  w32((uint32_t)(0x1068ed60), (EAX));
  /* 1066ea16 mov dword ptr [0x1068ed88], 0x1068ed58 */
  w32((uint32_t)(0x1068ed88), (0x1068ed58u));
  /* 1066ea20 mov ecx, dword ptr [0x1068f6bc] */
  ECX = (r32((uint32_t)(0x1068f6bc)));
  /* 1066ea26 push ecx */
  push32((uint32_t)(ECX));
  /* 1066ea27 call 0x1066ece0 */
  push32(0x1066ea2cu); f_1066ece0();
  /* 1066ea2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ea2f push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ea31 mov edx, dword ptr [0x1068f6bc] */
  EDX = (r32((uint32_t)(0x1068f6bc)));
  /* 1066ea37 push edx */
  push32((uint32_t)(EDX));
  /* 1066ea38 call 0x10663f30 */
  push32(0x1066ea3du); f_10663f30();
  /* 1066ea3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ea40 mov dword ptr [0x1068f6bc], 0 */
  w32((uint32_t)(0x1068f6bc), (0x0u));
  /* 1066ea4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1066ea4c:;
  /* 1066ea4c mov esp, ebp */
  ESP = (EBP);
  /* 1066ea4e pop ebp */
  EBP = (pop32());
  /* 1066ea4f ret  */
  ESPCHK(0x1066e920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea50 @ 0x1066ea50 (525 bytes, 200 insns) */
void f_1066ea50(void) {
  FTRACE(0x1066ea50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066ea50 push ebp */
  push32((uint32_t)(EBP));
  /* 1066ea51 mov ebp, esp */
  EBP = (ESP);
  /* 1066ea53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ea56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1066ea5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066ea5f mov ax, word ptr [0x1068f6dc] */
  AX = (r16((uint32_t)(0x1068f6dc)));
  /* 1066ea65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066ea68 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ea6c jne 0x1066ea76 */
  if (!C.zf) goto L_1066ea76;
  /* 1066ea6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066ea71 jmp 0x1066ec59 */
  goto L_1066ec59;
L_1066ea76:;
  /* 1066ea76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ea79 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ea7c push ecx */
  push32((uint32_t)(ECX));
  /* 1066ea7d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1066ea7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ea82 push edx */
  push32((uint32_t)(EDX));
  /* 1066ea83 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066ea85 call 0x10671660 */
  push32(0x1066ea8au); f_10671660();
  /* 1066ea8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ea8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ea90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ea92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066ea95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ea98 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ea9b push edx */
  push32((uint32_t)(EDX));
  /* 1066ea9c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1066ea9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066eaa1 push eax */
  push32((uint32_t)(EAX));
  /* 1066eaa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066eaa4 call 0x10671660 */
  push32(0x1066eaa9u); f_10671660();
  /* 1066eaa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eaac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066eaaf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066eab1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066eab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066eab7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eaba push edx */
  push32((uint32_t)(EDX));
  /* 1066eabb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1066eabd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066eac0 push eax */
  push32((uint32_t)(EAX));
  /* 1066eac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066eac3 call 0x10671660 */
  push32(0x1066eac8u); f_10671660();
  /* 1066eac8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eacb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066eace or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ead0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066ead3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ead6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ead9 push edx */
  push32((uint32_t)(EDX));
  /* 1066eada push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1066eadc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066eadf push eax */
  push32((uint32_t)(EAX));
  /* 1066eae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066eae2 call 0x10671660 */
  push32(0x1066eae7u); f_10671660();
  /* 1066eae7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eaea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066eaed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066eaef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066eaf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066eaf5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eaf8 push edx */
  push32((uint32_t)(EDX));
  /* 1066eaf9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1066eafb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066eafe push eax */
  push32((uint32_t)(EAX));
  /* 1066eaff push 1 */
  push32((uint32_t)(0x1u));
  /* 1066eb01 call 0x10671660 */
  push32(0x1066eb06u); f_10671660();
  /* 1066eb06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eb09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066eb0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066eb0e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066eb11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066eb14 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1066eb17 push eax */
  push32((uint32_t)(EAX));
  /* 1066eb18 call 0x1066ec60 */
  push32(0x1066eb1du); f_1066ec60();
  /* 1066eb1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eb20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066eb23 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eb26 push ecx */
  push32((uint32_t)(ECX));
  /* 1066eb27 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1066eb29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066eb2c push edx */
  push32((uint32_t)(EDX));
  /* 1066eb2d push 1 */
  push32((uint32_t)(0x1u));
  /* 1066eb2f call 0x10671660 */
  push32(0x1066eb34u); f_10671660();
  /* 1066eb34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eb37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066eb3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066eb3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066eb3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066eb42 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eb45 push edx */
  push32((uint32_t)(EDX));
  /* 1066eb46 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1066eb48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066eb4b push eax */
  push32((uint32_t)(EAX));
  /* 1066eb4c push 1 */
  push32((uint32_t)(0x1u));
  /* 1066eb4e call 0x10671660 */
  push32(0x1066eb53u); f_10671660();
  /* 1066eb53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eb56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066eb59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066eb5b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066eb5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066eb61 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eb64 push edx */
  push32((uint32_t)(EDX));
  /* 1066eb65 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1066eb67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066eb6a push eax */
  push32((uint32_t)(EAX));
  /* 1066eb6b push 0 */
  push32((uint32_t)(0x0u));
  /* 1066eb6d call 0x10671660 */
  push32(0x1066eb72u); f_10671660();
  /* 1066eb72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eb75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066eb78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066eb7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066eb7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066eb80 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eb83 push edx */
  push32((uint32_t)(EDX));
  /* 1066eb84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1066eb86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066eb89 push eax */
  push32((uint32_t)(EAX));
  /* 1066eb8a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066eb8c call 0x10671660 */
  push32(0x1066eb91u); f_10671660();
  /* 1066eb91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eb94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066eb97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066eb99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066eb9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066eb9f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eba2 push edx */
  push32((uint32_t)(EDX));
  /* 1066eba3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1066eba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066eba8 push eax */
  push32((uint32_t)(EAX));
  /* 1066eba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ebab call 0x10671660 */
  push32(0x1066ebb0u); f_10671660();
  /* 1066ebb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ebb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ebb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ebb8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066ebbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ebbe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ebc1 push edx */
  push32((uint32_t)(EDX));
  /* 1066ebc2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1066ebc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ebc7 push eax */
  push32((uint32_t)(EAX));
  /* 1066ebc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ebca call 0x10671660 */
  push32(0x1066ebcfu); f_10671660();
  /* 1066ebcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ebd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ebd5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ebd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066ebda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ebdd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ebe0 push edx */
  push32((uint32_t)(EDX));
  /* 1066ebe1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1066ebe3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ebe6 push eax */
  push32((uint32_t)(EAX));
  /* 1066ebe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ebe9 call 0x10671660 */
  push32(0x1066ebeeu); f_10671660();
  /* 1066ebee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ebf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ebf4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ebf6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066ebf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ebfc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ebff push edx */
  push32((uint32_t)(EDX));
  /* 1066ec00 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1066ec02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ec05 push eax */
  push32((uint32_t)(EAX));
  /* 1066ec06 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ec08 call 0x10671660 */
  push32(0x1066ec0du); f_10671660();
  /* 1066ec0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ec10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ec13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ec15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066ec18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ec1b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ec1e push edx */
  push32((uint32_t)(EDX));
  /* 1066ec1f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1066ec21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ec24 push eax */
  push32((uint32_t)(EAX));
  /* 1066ec25 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ec27 call 0x10671660 */
  push32(0x1066ec2cu); f_10671660();
  /* 1066ec2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ec2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ec32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ec34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066ec37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ec3a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ec3d push edx */
  push32((uint32_t)(EDX));
  /* 1066ec3e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1066ec40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ec43 push eax */
  push32((uint32_t)(EAX));
  /* 1066ec44 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ec46 call 0x10671660 */
  push32(0x1066ec4bu); f_10671660();
  /* 1066ec4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ec4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066ec51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ec53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066ec56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1066ec59:;
  /* 1066ec59 mov esp, ebp */
  ESP = (EBP);
  /* 1066ec5b pop ebp */
  EBP = (pop32());
  /* 1066ec5c ret  */
  ESPCHK(0x1066ea50u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1066ec60 (125 bytes, 49 insns) */
void f_1066ec60(void) {
  FTRACE(0x1066ec60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066ec60 push ebp */
  push32((uint32_t)(EBP));
  /* 1066ec61 mov ebp, esp */
  EBP = (ESP);
  /* 1066ec63 push ecx */
  push32((uint32_t)(ECX));
L_1066ec64:;
  /* 1066ec64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ec67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066ec6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066ec6c je 0x1066ecd9 */
  if (C.zf) goto L_1066ecd9;
  /* 1066ec6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ec71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1066ec74 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ec77 jl 0x1066ec9d */
  if ((C.sf!=C.of)) goto L_1066ec9d;
  /* 1066ec79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ec7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066ec7f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ec82 jg 0x1066ec9d */
  if ((!C.zf&&C.sf==C.of)) goto L_1066ec9d;
  /* 1066ec84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ec87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066ec8a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ec8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ec90 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1066ec92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ec95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ec98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1066ec9b jmp 0x1066ecd7 */
  goto L_1066ecd7;
L_1066ec9d:;
  /* 1066ec9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066eca0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066eca3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066eca6 jne 0x1066ecce */
  if (!C.zf) goto L_1066ecce;
  /* 1066eca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ecab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066ecae:;
  /* 1066ecae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ecb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ecb4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1066ecb7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1066ecb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ecbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ecbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066ecc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ecc5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1066ecc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ecca jne 0x1066ecae */
  if (!C.zf) goto L_1066ecae;
  /* 1066eccc jmp 0x1066ecd7 */
  goto L_1066ecd7;
L_1066ecce:;
  /* 1066ecce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ecd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ecd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1066ecd7:;
  /* 1066ecd7 jmp 0x1066ec64 */
  goto L_1066ec64;
L_1066ecd9:;
  /* 1066ecd9 mov esp, ebp */
  ESP = (EBP);
  /* 1066ecdb pop ebp */
  EBP = (pop32());
  /* 1066ecdc ret  */
  ESPCHK(0x1066ec60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ece0 @ 0x1066ece0 (147 bytes, 52 insns) */
void f_1066ece0(void) {
  FTRACE(0x1066ece0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066ece0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066ece1 mov ebp, esp */
  EBP = (ESP);
  /* 1066ece3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ece7 jne 0x1066ecee */
  if (!C.zf) goto L_1066ecee;
  /* 1066ece9 jmp 0x1066ed71 */
  goto L_1066ed71;
L_1066ecee:;
  /* 1066ecee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ecf1 cmp dword ptr [eax + 0xc], 0x1068f718 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1068f718u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ecf8 je 0x1066ed71 */
  if (C.zf) goto L_1066ed71;
  /* 1066ecfa push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ecfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ecff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066ed02 push edx */
  push32((uint32_t)(EDX));
  /* 1066ed03 call 0x10663f30 */
  push32(0x1066ed08u); f_10663f30();
  /* 1066ed08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ed0b push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ed0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ed10 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1066ed13 push ecx */
  push32((uint32_t)(ECX));
  /* 1066ed14 call 0x10663f30 */
  push32(0x1066ed19u); f_10663f30();
  /* 1066ed19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ed1c push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ed1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ed21 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1066ed24 push eax */
  push32((uint32_t)(EAX));
  /* 1066ed25 call 0x10663f30 */
  push32(0x1066ed2au); f_10663f30();
  /* 1066ed2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ed2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ed2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ed32 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1066ed35 push edx */
  push32((uint32_t)(EDX));
  /* 1066ed36 call 0x10663f30 */
  push32(0x1066ed3bu); f_10663f30();
  /* 1066ed3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ed3e push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ed40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ed43 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1066ed46 push ecx */
  push32((uint32_t)(ECX));
  /* 1066ed47 call 0x10663f30 */
  push32(0x1066ed4cu); f_10663f30();
  /* 1066ed4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ed4f push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ed51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ed54 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1066ed57 push eax */
  push32((uint32_t)(EAX));
  /* 1066ed58 call 0x10663f30 */
  push32(0x1066ed5du); f_10663f30();
  /* 1066ed5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ed60 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ed62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ed65 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1066ed68 push edx */
  push32((uint32_t)(EDX));
  /* 1066ed69 call 0x10663f30 */
  push32(0x1066ed6eu); f_10663f30();
  /* 1066ed6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066ed71:;
  /* 1066ed71 pop ebp */
  EBP = (pop32());
  /* 1066ed72 ret  */
  ESPCHK(0x1066ece0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed80 @ 0x1066ed80 (928 bytes, 284 insns) */
void f_1066ed80(void) {
  FTRACE(0x1066ed80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066ed80 push ebp */
  push32((uint32_t)(EBP));
  /* 1066ed81 mov ebp, esp */
  EBP = (ESP);
  /* 1066ed83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ed86 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1066ed8d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1066ed94 cmp dword ptr [0x1068f680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ed9b je 0x1066f0d1 */
  if (C.zf) goto L_1066f0d1;
  /* 1066eda1 cmp dword ptr [0x1068f690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066eda8 jne 0x1066edd0 */
  if (!C.zf) goto L_1066edd0;
  /* 1066edaa push 0x1068f690 */
  push32((uint32_t)(0x1068f690u));
  /* 1066edaf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1066edb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066edb6 mov ax, word ptr [0x1068f6d4] */
  AX = (r16((uint32_t)(0x1068f6d4)));
  /* 1066edbc push eax */
  push32((uint32_t)(EAX));
  /* 1066edbd push 0 */
  push32((uint32_t)(0x0u));
  /* 1066edbf call 0x10671660 */
  push32(0x1066edc4u); f_10671660();
  /* 1066edc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066edc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066edc9 je 0x1066edd0 */
  if (C.zf) goto L_1066edd0;
  /* 1066edcb jmp 0x1066f092 */
  goto L_1066f092;
L_1066edd0:;
  /* 1066edd0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1066edd2 push 0x1068b0f4 */
  push32((uint32_t)(0x1068b0f4u));
  /* 1066edd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066edd9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1066edde call 0x106634a0 */
  push32(0x1066ede3u); f_106634a0();
  /* 1066ede3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ede6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1066ede9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1066edeb push 0x1068b0f4 */
  push32((uint32_t)(0x1068b0f4u));
  /* 1066edf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066edf2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1066edf7 call 0x106634a0 */
  push32(0x1066edfcu); f_106634a0();
  /* 1066edfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066edff mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1066ee02 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1066ee04 push 0x1068b0f4 */
  push32((uint32_t)(0x1068b0f4u));
  /* 1066ee09 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ee0b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1066ee10 call 0x106634a0 */
  push32(0x1066ee15u); f_106634a0();
  /* 1066ee15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ee18 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1066ee1b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1066ee1d push 0x1068b0f4 */
  push32((uint32_t)(0x1068b0f4u));
  /* 1066ee22 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066ee24 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1066ee29 call 0x106634a0 */
  push32(0x1066ee2eu); f_106634a0();
  /* 1066ee2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ee31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1066ee34 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ee38 je 0x1066ee4c */
  if (C.zf) goto L_1066ee4c;
  /* 1066ee3a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ee3e je 0x1066ee4c */
  if (C.zf) goto L_1066ee4c;
  /* 1066ee40 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ee44 je 0x1066ee4c */
  if (C.zf) goto L_1066ee4c;
  /* 1066ee46 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ee4a jne 0x1066ee51 */
  if (!C.zf) goto L_1066ee51;
L_1066ee4c:;
  /* 1066ee4c jmp 0x1066f092 */
  goto L_1066f092;
L_1066ee51:;
  /* 1066ee51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066ee54 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1066ee57 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1066ee5e jmp 0x1066ee69 */
  goto L_1066ee69;
L_1066ee60:;
  /* 1066ee60 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ee63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ee66 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1066ee69:;
  /* 1066ee69 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ee70 jge 0x1066ee85 */
  if ((C.sf==C.of)) goto L_1066ee85;
  /* 1066ee72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066ee75 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1066ee78 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1066ee7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066ee7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ee80 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1066ee83 jmp 0x1066ee60 */
  goto L_1066ee60;
L_1066ee85:;
  /* 1066ee85 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1066ee88 push eax */
  push32((uint32_t)(EAX));
  /* 1066ee89 mov ecx, dword ptr [0x1068f690] */
  ECX = (r32((uint32_t)(0x1068f690)));
  /* 1066ee8f push ecx */
  push32((uint32_t)(ECX));
  /* 1066ee90 call dword ptr [0x1069135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069135c))), 0x1066ee96u);
  /* 1066ee96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ee98 jne 0x1066ee9f */
  if (!C.zf) goto L_1066ee9f;
  /* 1066ee9a jmp 0x1066f092 */
  goto L_1066f092;
L_1066ee9f:;
  /* 1066ee9f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066eea3 jbe 0x1066eeaa */
  if ((C.cf||C.zf)) goto L_1066eeaa;
  /* 1066eea5 jmp 0x1066f092 */
  goto L_1066f092;
L_1066eeaa:;
  /* 1066eeaa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066eead and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1066eeb3 mov dword ptr [0x1068dea4], edx */
  w32((uint32_t)(0x1068dea4), (EDX));
  /* 1066eeb9 cmp dword ptr [0x1068dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066eec0 jle 0x1066ef19 */
  if ((C.zf||C.sf!=C.of)) goto L_1066ef19;
  /* 1066eec2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1066eec5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1066eec8 jmp 0x1066eed3 */
  goto L_1066eed3;
L_1066eeca:;
  /* 1066eeca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066eecd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eed0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1066eed3:;
  /* 1066eed3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066eed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066eed8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1066eeda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066eedc je 0x1066ef19 */
  if (C.zf) goto L_1066ef19;
  /* 1066eede mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066eee1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066eee3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1066eee6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066eee8 je 0x1066ef19 */
  if (C.zf) goto L_1066ef19;
  /* 1066eeea mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066eeed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066eeef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1066eef1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1066eef4 jmp 0x1066eeff */
  goto L_1066eeff;
L_1066eef6:;
  /* 1066eef6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066eef9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eefc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1066eeff:;
  /* 1066eeff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066ef02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066ef04 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1066ef07 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ef0a jg 0x1066ef17 */
  if ((!C.zf&&C.sf==C.of)) goto L_1066ef17;
  /* 1066ef0c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066ef0f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ef12 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1066ef15 jmp 0x1066eef6 */
  goto L_1066eef6;
L_1066ef17:;
  /* 1066ef17 jmp 0x1066eeca */
  goto L_1066eeca;
L_1066ef19:;
  /* 1066ef19 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ef1b push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ef1d push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ef1f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066ef22 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ef25 push eax */
  push32((uint32_t)(EAX));
  /* 1066ef26 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1066ef2b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066ef2e push ecx */
  push32((uint32_t)(ECX));
  /* 1066ef2f push 1 */
  push32((uint32_t)(0x1u));
  /* 1066ef31 call 0x1066b6d0 */
  push32(0x1066ef36u); f_1066b6d0();
  /* 1066ef36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ef39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066ef3b jne 0x1066ef42 */
  if (!C.zf) goto L_1066ef42;
  /* 1066ef3d jmp 0x1066f092 */
  goto L_1066f092;
L_1066ef42:;
  /* 1066ef42 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066ef45 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1066ef4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066ef4d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1066ef50 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1066ef57 jmp 0x1066ef62 */
  goto L_1066ef62;
L_1066ef59:;
  /* 1066ef59 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066ef5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ef5f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1066ef62:;
  /* 1066ef62 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ef69 jge 0x1066ef80 */
  if ((C.sf==C.of)) goto L_1066ef80;
  /* 1066ef6b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066ef6e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1066ef72 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1066ef75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066ef78 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ef7b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1066ef7e jmp 0x1066ef59 */
  goto L_1066ef59;
L_1066ef80:;
  /* 1066ef80 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ef82 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066ef84 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066ef87 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ef8a push edx */
  push32((uint32_t)(EDX));
  /* 1066ef8b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1066ef90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066ef93 push eax */
  push32((uint32_t)(EAX));
  /* 1066ef94 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066ef96 call 0x10671900 */
  push32(0x1066ef9bu); f_10671900();
  /* 1066ef9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ef9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066efa0 jne 0x1066efa7 */
  if (!C.zf) goto L_1066efa7;
  /* 1066efa2 jmp 0x1066f092 */
  goto L_1066f092;
L_1066efa7:;
  /* 1066efa7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066efaa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1066efaf cmp dword ptr [0x1068dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066efb6 jle 0x1066f013 */
  if ((C.zf||C.sf!=C.of)) goto L_1066f013;
  /* 1066efb8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1066efbb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1066efbe jmp 0x1066efc9 */
  goto L_1066efc9;
L_1066efc0:;
  /* 1066efc0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066efc3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066efc6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1066efc9:;
  /* 1066efc9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066efcc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066efce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1066efd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066efd2 je 0x1066f013 */
  if (C.zf) goto L_1066f013;
  /* 1066efd4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066efd7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066efd9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1066efdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066efde je 0x1066f013 */
  if (C.zf) goto L_1066f013;
  /* 1066efe0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066efe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066efe5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1066efe7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1066efea jmp 0x1066eff5 */
  goto L_1066eff5;
L_1066efec:;
  /* 1066efec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066efef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066eff2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1066eff5:;
  /* 1066eff5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066eff8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066effa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1066effd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f000 jg 0x1066f011 */
  if ((!C.zf&&C.sf==C.of)) goto L_1066f011;
  /* 1066f002 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1066f005 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066f008 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1066f00f jmp 0x1066efec */
  goto L_1066efec;
L_1066f011:;
  /* 1066f011 jmp 0x1066efc0 */
  goto L_1066efc0;
L_1066f013:;
  /* 1066f013 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066f016 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f019 mov dword ptr [0x1068dc98], eax */
  w32((uint32_t)(0x1068dc98), (EAX));
  /* 1066f01e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066f021 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f024 mov dword ptr [0x1068dc9c], ecx */
  w32((uint32_t)(0x1068dc9c), (ECX));
  /* 1066f02a cmp dword ptr [0x1068f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f031 je 0x1066f044 */
  if (C.zf) goto L_1066f044;
  /* 1066f033 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066f035 mov edx, dword ptr [0x1068f6c0] */
  EDX = (r32((uint32_t)(0x1068f6c0)));
  /* 1066f03b push edx */
  push32((uint32_t)(EDX));
  /* 1066f03c call 0x10663f30 */
  push32(0x1066f041u); f_10663f30();
  /* 1066f041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066f044:;
  /* 1066f044 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066f047 mov dword ptr [0x1068f6c0], eax */
  w32((uint32_t)(0x1068f6c0), (EAX));
  /* 1066f04c cmp dword ptr [0x1068f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f053 je 0x1066f066 */
  if (C.zf) goto L_1066f066;
  /* 1066f055 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066f057 mov ecx, dword ptr [0x1068f6c4] */
  ECX = (r32((uint32_t)(0x1068f6c4)));
  /* 1066f05d push ecx */
  push32((uint32_t)(ECX));
  /* 1066f05e call 0x10663f30 */
  push32(0x1066f063u); f_10663f30();
  /* 1066f063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066f066:;
  /* 1066f066 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066f069 mov dword ptr [0x1068f6c4], edx */
  w32((uint32_t)(0x1068f6c4), (EDX));
  /* 1066f06f push 2 */
  push32((uint32_t)(0x2u));
  /* 1066f071 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066f074 push eax */
  push32((uint32_t)(EAX));
  /* 1066f075 call 0x10663f30 */
  push32(0x1066f07au); f_10663f30();
  /* 1066f07a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f07d push 2 */
  push32((uint32_t)(0x2u));
  /* 1066f07f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066f082 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f083 call 0x10663f30 */
  push32(0x1066f088u); f_10663f30();
  /* 1066f088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f08b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f08d jmp 0x1066f11c */
  goto L_1066f11c;
L_1066f092:;
  /* 1066f092 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066f094 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1066f097 push edx */
  push32((uint32_t)(EDX));
  /* 1066f098 call 0x10663f30 */
  push32(0x1066f09du); f_10663f30();
  /* 1066f09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f0a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066f0a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1066f0a5 push eax */
  push32((uint32_t)(EAX));
  /* 1066f0a6 call 0x10663f30 */
  push32(0x1066f0abu); f_10663f30();
  /* 1066f0ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f0ae push 2 */
  push32((uint32_t)(0x2u));
  /* 1066f0b0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1066f0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f0b4 call 0x10663f30 */
  push32(0x1066f0b9u); f_10663f30();
  /* 1066f0b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f0bc push 2 */
  push32((uint32_t)(0x2u));
  /* 1066f0be mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066f0c1 push edx */
  push32((uint32_t)(EDX));
  /* 1066f0c2 call 0x10663f30 */
  push32(0x1066f0c7u); f_10663f30();
  /* 1066f0c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f0ca mov eax, 1 */
  EAX = (0x1u);
  /* 1066f0cf jmp 0x1066f11c */
  goto L_1066f11c;
L_1066f0d1:;
  /* 1066f0d1 mov dword ptr [0x1068dc98], 0x1068dca2 */
  w32((uint32_t)(0x1068dc98), (0x1068dca2u));
  /* 1066f0db mov dword ptr [0x1068dc9c], 0x1068dca2 */
  w32((uint32_t)(0x1068dc9c), (0x1068dca2u));
  /* 1066f0e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066f0e7 mov eax, dword ptr [0x1068f6c0] */
  EAX = (r32((uint32_t)(0x1068f6c0)));
  /* 1066f0ec push eax */
  push32((uint32_t)(EAX));
  /* 1066f0ed call 0x10663f30 */
  push32(0x1066f0f2u); f_10663f30();
  /* 1066f0f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f0f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066f0f7 mov ecx, dword ptr [0x1068f6c4] */
  ECX = (r32((uint32_t)(0x1068f6c4)));
  /* 1066f0fd push ecx */
  push32((uint32_t)(ECX));
  /* 1066f0fe call 0x10663f30 */
  push32(0x1066f103u); f_10663f30();
  /* 1066f103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f106 mov dword ptr [0x1068f6c0], 0 */
  w32((uint32_t)(0x1068f6c0), (0x0u));
  /* 1066f110 mov dword ptr [0x1068f6c4], 0 */
  w32((uint32_t)(0x1068f6c4), (0x0u));
  /* 1066f11a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1066f11c:;
  /* 1066f11c mov esp, ebp */
  ESP = (EBP);
  /* 1066f11e pop ebp */
  EBP = (pop32());
  /* 1066f11f ret  */
  ESPCHK(0x1066ed80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f120 @ 0x1066f120 (7 bytes, 5 insns) */
void f_1066f120(void) {
  FTRACE(0x1066f120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f120 push ebp */
  push32((uint32_t)(EBP));
  /* 1066f121 mov ebp, esp */
  EBP = (ESP);
  /* 1066f123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f125 pop ebp */
  EBP = (pop32());
  /* 1066f126 ret  */
  ESPCHK(0x1066f120u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1066f130 (129 bytes, 56 insns) */
void f_1066f130(void) {
  FTRACE(0x1066f130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f130 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1066f134 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1066f138 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1066f13e jne 0x1066f17c */
  if (!C.zf) goto L_1066f17c;
L_1066f140:;
  /* 1066f140 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1066f142 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1066f144 jne 0x1066f174 */
  if (!C.zf) goto L_1066f174;
  /* 1066f146 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1066f148 je 0x1066f170 */
  if (C.zf) goto L_1066f170;
  /* 1066f14a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1066f14d jne 0x1066f174 */
  if (!C.zf) goto L_1066f174;
  /* 1066f14f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1066f151 je 0x1066f170 */
  if (C.zf) goto L_1066f170;
  /* 1066f153 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1066f156 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1066f159 jne 0x1066f174 */
  if (!C.zf) goto L_1066f174;
  /* 1066f15b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1066f15d je 0x1066f170 */
  if (C.zf) goto L_1066f170;
  /* 1066f15f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1066f162 jne 0x1066f174 */
  if (!C.zf) goto L_1066f174;
  /* 1066f164 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f167 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f16a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1066f16c jne 0x1066f140 */
  if (!C.zf) goto L_1066f140;
  /* 1066f16e mov edi, edi */
  EDI = (EDI);
L_1066f170:;
  /* 1066f170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f172 ret  */
  ESPCHK(0x1066f130u, _esp0);
  ESP += 4; return;
  /* 1066f173 nop  */
  /* nop */
L_1066f174:;
  /* 1066f174 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f176 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1066f178 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1066f179 ret  */
  ESPCHK(0x1066f130u, _esp0);
  ESP += 4; return;
  /* 1066f17a mov edi, edi */
  EDI = (EDI);
L_1066f17c:;
  /* 1066f17c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1066f182 je 0x1066f198 */
  if (C.zf) goto L_1066f198;
  /* 1066f184 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1066f186 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1066f187 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1066f189 jne 0x1066f174 */
  if (!C.zf) goto L_1066f174;
  /* 1066f18b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1066f18c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1066f18e je 0x1066f170 */
  if (C.zf) goto L_1066f170;
  /* 1066f190 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1066f196 je 0x1066f140 */
  if (C.zf) goto L_1066f140;
L_1066f198:;
  /* 1066f198 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1066f19b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f19e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1066f1a0 jne 0x1066f174 */
  if (!C.zf) goto L_1066f174;
  /* 1066f1a2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1066f1a4 je 0x1066f170 */
  if (C.zf) goto L_1066f170;
  /* 1066f1a6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1066f1a9 jne 0x1066f174 */
  if (!C.zf) goto L_1066f174;
  /* 1066f1ab or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1066f1ad je 0x1066f170 */
  if (C.zf) goto L_1066f170;
  /* 1066f1af add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f1b2 jmp 0x1066f140 */
  goto L_1066f140;
}

/* FUN_1000f1c0 @ 0x1066f1c0 (62 bytes, 35 insns) */
void f_1066f1c0(void) {
  FTRACE(0x1066f1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066f1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1066f1c3 push esi */
  push32((uint32_t)(ESI));
  /* 1066f1c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f1c6 push eax */
  push32((uint32_t)(EAX));
  /* 1066f1c7 push eax */
  push32((uint32_t)(EAX));
  /* 1066f1c8 push eax */
  push32((uint32_t)(EAX));
  /* 1066f1c9 push eax */
  push32((uint32_t)(EAX));
  /* 1066f1ca push eax */
  push32((uint32_t)(EAX));
  /* 1066f1cb push eax */
  push32((uint32_t)(EAX));
  /* 1066f1cc push eax */
  push32((uint32_t)(EAX));
  /* 1066f1cd push eax */
  push32((uint32_t)(EAX));
  /* 1066f1ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066f1d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1066f1d4:;
  /* 1066f1d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1066f1d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1066f1d8 je 0x1066f1e1 */
  if (C.zf) goto L_1066f1e1;
  /* 1066f1da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1066f1db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1066f1db");
  /* 1066f1df jmp 0x1066f1d4 */
  goto L_1066f1d4;
L_1066f1e1:;
  /* 1066f1e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1066f1e4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1066f1e7 nop  */
  /* nop */
L_1066f1e8:;
  /* 1066f1e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1066f1e9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1066f1eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1066f1ed je 0x1066f1f6 */
  if (C.zf) goto L_1066f1f6;
  /* 1066f1ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1066f1f0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1066f1f0");
  /* 1066f1f4 jae 0x1066f1e8 */
  if (!C.cf) goto L_1066f1e8;
L_1066f1f6:;
  /* 1066f1f6 mov eax, ecx */
  EAX = (ECX);
  /* 1066f1f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f1fb pop esi */
  ESI = (pop32());
  /* 1066f1fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066f1fd ret  */
  ESPCHK(0x1066f1c0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1066f200 (56 bytes, 31 insns) */
void f_1066f200(void) {
  FTRACE(0x1066f200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f200 push ebp */
  push32((uint32_t)(EBP));
  /* 1066f201 mov ebp, esp */
  EBP = (ESP);
  /* 1066f203 push edi */
  push32((uint32_t)(EDI));
  /* 1066f204 push esi */
  push32((uint32_t)(ESI));
  /* 1066f205 push ebx */
  push32((uint32_t)(EBX));
  /* 1066f206 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066f209 jecxz 0x1066f231 */
  x86_unimpl("jecxz @ 0x1066f209");
  /* 1066f20b mov ebx, ecx */
  EBX = (ECX);
  /* 1066f20d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1066f210 mov esi, edi */
  ESI = (EDI);
  /* 1066f212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f214 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1066f216 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066f218 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f21a mov edi, esi */
  EDI = (ESI);
  /* 1066f21c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1066f21f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1066f221 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1066f224 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066f226 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1066f229 ja 0x1066f22f */
  if ((!C.cf&&!C.zf)) goto L_1066f22f;
  /* 1066f22b je 0x1066f231 */
  if (C.zf) goto L_1066f231;
  /* 1066f22d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1066f22e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1066f22f:;
  /* 1066f22f not ecx */
  ECX = (~(ECX));
L_1066f231:;
  /* 1066f231 mov eax, ecx */
  EAX = (ECX);
  /* 1066f233 pop ebx */
  EBX = (pop32());
  /* 1066f234 pop esi */
  ESI = (pop32());
  /* 1066f235 pop edi */
  EDI = (pop32());
  /* 1066f236 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066f237 ret  */
  ESPCHK(0x1066f200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f240 @ 0x1066f240 (58 bytes, 32 insns) */
void f_1066f240(void) {
  FTRACE(0x1066f240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f240 push ebp */
  push32((uint32_t)(EBP));
  /* 1066f241 mov ebp, esp */
  EBP = (ESP);
  /* 1066f243 push esi */
  push32((uint32_t)(ESI));
  /* 1066f244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f246 push eax */
  push32((uint32_t)(EAX));
  /* 1066f247 push eax */
  push32((uint32_t)(EAX));
  /* 1066f248 push eax */
  push32((uint32_t)(EAX));
  /* 1066f249 push eax */
  push32((uint32_t)(EAX));
  /* 1066f24a push eax */
  push32((uint32_t)(EAX));
  /* 1066f24b push eax */
  push32((uint32_t)(EAX));
  /* 1066f24c push eax */
  push32((uint32_t)(EAX));
  /* 1066f24d push eax */
  push32((uint32_t)(EAX));
  /* 1066f24e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066f251 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1066f254:;
  /* 1066f254 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1066f256 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1066f258 je 0x1066f261 */
  if (C.zf) goto L_1066f261;
  /* 1066f25a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1066f25b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1066f25b");
  /* 1066f25f jmp 0x1066f254 */
  goto L_1066f254;
L_1066f261:;
  /* 1066f261 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1066f264:;
  /* 1066f264 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1066f266 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1066f268 je 0x1066f274 */
  if (C.zf) goto L_1066f274;
  /* 1066f26a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1066f26b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1066f26b");
  /* 1066f26f jae 0x1066f264 */
  if (!C.cf) goto L_1066f264;
  /* 1066f271 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1066f274:;
  /* 1066f274 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f277 pop esi */
  ESI = (pop32());
  /* 1066f278 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1066f279 ret  */
  ESPCHK(0x1066f240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f280 @ 0x1066f280 (512 bytes, 147 insns) */
void f_1066f280(void) {
  FTRACE(0x1066f280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f280 push ebp */
  push32((uint32_t)(EBP));
  /* 1066f281 mov ebp, esp */
  EBP = (ESP);
  /* 1066f283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f286 cmp dword ptr [0x1068f70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f28d jne 0x1066f2b2 */
  if (!C.zf) goto L_1066f2b2;
  /* 1066f28f call 0x1066fd50 */
  push32(0x1066f294u); f_1066fd50();
  /* 1066f294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f296 je 0x1066f2a2 */
  if (C.zf) goto L_1066f2a2;
  /* 1066f298 mov eax, dword ptr [0x10691278] */
  EAX = (r32((uint32_t)(0x10691278)));
  /* 1066f29d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066f2a0 jmp 0x1066f2a9 */
  goto L_1066f2a9;
L_1066f2a2:;
  /* 1066f2a2 mov dword ptr [ebp - 8], 0x1066fda0 */
  w32((uint32_t)(EBP + -0x8), (0x1066fda0u));
L_1066f2a9:;
  /* 1066f2a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066f2ac mov dword ptr [0x1068f70c], ecx */
  w32((uint32_t)(0x1068f70c), (ECX));
L_1066f2b2:;
  /* 1066f2b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f2b6 jne 0x1066f2c2 */
  if (!C.zf) goto L_1066f2c2;
  /* 1066f2b8 call 0x1066fba0 */
  push32(0x1066f2bdu); f_1066fba0();
  /* 1066f2bd jmp 0x1066f38e */
  goto L_1066f38e;
L_1066f2c2:;
  /* 1066f2c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066f2c5 mov dword ptr [0x1068f6fc], edx */
  w32((uint32_t)(0x1068f6fc), (EDX));
  /* 1066f2cb cmp dword ptr [0x1068f6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f2d2 je 0x1066f2f4 */
  if (C.zf) goto L_1066f2f4;
  /* 1066f2d4 mov eax, dword ptr [0x1068f6fc] */
  EAX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f2d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066f2dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066f2de je 0x1066f2f4 */
  if (C.zf) goto L_1066f2f4;
  /* 1066f2e0 push 0x1068f6fc */
  push32((uint32_t)(0x1068f6fcu));
  /* 1066f2e5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1066f2e7 push 0x1068ea90 */
  push32((uint32_t)(0x1068ea90u));
  /* 1066f2ec call 0x1066f480 */
  push32(0x1066f2f1u); f_1066f480();
  /* 1066f2f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066f2f4:;
  /* 1066f2f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066f2f7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f2fa mov dword ptr [0x1068f700], edx */
  w32((uint32_t)(0x1068f700), (EDX));
  /* 1066f300 cmp dword ptr [0x1068f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f307 je 0x1066f329 */
  if (C.zf) goto L_1066f329;
  /* 1066f309 mov eax, dword ptr [0x1068f700] */
  EAX = (r32((uint32_t)(0x1068f700)));
  /* 1066f30e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066f311 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066f313 je 0x1066f329 */
  if (C.zf) goto L_1066f329;
  /* 1066f315 push 0x1068f700 */
  push32((uint32_t)(0x1068f700u));
  /* 1066f31a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1066f31c push 0x1068e9d8 */
  push32((uint32_t)(0x1068e9d8u));
  /* 1066f321 call 0x1066f480 */
  push32(0x1066f326u); f_1066f480();
  /* 1066f326 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066f329:;
  /* 1066f329 mov dword ptr [0x1068f704], 0 */
  w32((uint32_t)(0x1068f704), (0x0u));
  /* 1066f333 cmp dword ptr [0x1068f6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f33a je 0x1066f36d */
  if (C.zf) goto L_1066f36d;
  /* 1066f33c mov edx, dword ptr [0x1068f6fc] */
  EDX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f342 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1066f345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f347 je 0x1066f36d */
  if (C.zf) goto L_1066f36d;
  /* 1066f349 cmp dword ptr [0x1068f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f350 je 0x1066f366 */
  if (C.zf) goto L_1066f366;
  /* 1066f352 mov ecx, dword ptr [0x1068f700] */
  ECX = (r32((uint32_t)(0x1068f700)));
  /* 1066f358 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1066f35b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066f35d je 0x1066f366 */
  if (C.zf) goto L_1066f366;
  /* 1066f35f call 0x1066f510 */
  push32(0x1066f364u); f_1066f510();
  /* 1066f364 jmp 0x1066f36b */
  goto L_1066f36b;
L_1066f366:;
  /* 1066f366 call 0x1066f900 */
  push32(0x1066f36bu); f_1066f900();
L_1066f36b:;
  /* 1066f36b jmp 0x1066f38e */
  goto L_1066f38e;
L_1066f36d:;
  /* 1066f36d cmp dword ptr [0x1068f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f374 je 0x1066f389 */
  if (C.zf) goto L_1066f389;
  /* 1066f376 mov eax, dword ptr [0x1068f700] */
  EAX = (r32((uint32_t)(0x1068f700)));
  /* 1066f37b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066f37e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066f380 je 0x1066f389 */
  if (C.zf) goto L_1066f389;
  /* 1066f382 call 0x1066faa0 */
  push32(0x1066f387u); f_1066faa0();
  /* 1066f387 jmp 0x1066f38e */
  goto L_1066f38e;
L_1066f389:;
  /* 1066f389 call 0x1066fba0 */
  push32(0x1066f38eu); f_1066fba0();
L_1066f38e:;
  /* 1066f38e cmp dword ptr [0x1068f704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f395 jne 0x1066f39e */
  if (!C.zf) goto L_1066f39e;
  /* 1066f397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f399 jmp 0x1066f47c */
  goto L_1066f47c;
L_1066f39e:;
  /* 1066f39e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066f3a1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f3a7 push edx */
  push32((uint32_t)(EDX));
  /* 1066f3a8 call 0x1066fbd0 */
  push32(0x1066f3adu); f_1066fbd0();
  /* 1066f3ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f3b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066f3b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f3b7 je 0x1066f3cc */
  if (C.zf) goto L_1066f3cc;
  /* 1066f3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066f3bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066f3c1 push eax */
  push32((uint32_t)(EAX));
  /* 1066f3c2 call dword ptr [0x1069127c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069127c))), 0x1066f3c8u);
  /* 1066f3c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f3ca jne 0x1066f3d3 */
  if (!C.zf) goto L_1066f3d3;
L_1066f3cc:;
  /* 1066f3cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f3ce jmp 0x1066f47c */
  goto L_1066f47c;
L_1066f3d3:;
  /* 1066f3d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066f3d5 mov ecx, dword ptr [0x1068f6ec] */
  ECX = (r32((uint32_t)(0x1068f6ec)));
  /* 1066f3db push ecx */
  push32((uint32_t)(ECX));
  /* 1066f3dc call dword ptr [0x1069128c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069128c))), 0x1066f3e2u);
  /* 1066f3e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f3e4 jne 0x1066f3ed */
  if (!C.zf) goto L_1066f3ed;
  /* 1066f3e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f3e8 jmp 0x1066f47c */
  goto L_1066f47c;
L_1066f3ed:;
  /* 1066f3ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f3f1 je 0x1066f418 */
  if (C.zf) goto L_1066f418;
  /* 1066f3f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066f3f6 mov ax, word ptr [0x1068f6ec] */
  AX = (r16((uint32_t)(0x1068f6ec)));
  /* 1066f3fc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1066f3ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066f402 mov dx, word ptr [0x1068f708] */
  DX = (r16((uint32_t)(0x1068f708)));
  /* 1066f409 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1066f40d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066f410 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1066f414 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1066f418:;
  /* 1066f418 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f41c je 0x1066f477 */
  if (C.zf) goto L_1066f477;
  /* 1066f41e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1066f420 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066f423 push edx */
  push32((uint32_t)(EDX));
  /* 1066f424 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1066f429 mov eax, dword ptr [0x1068f6ec] */
  EAX = (r32((uint32_t)(0x1068f6ec)));
  /* 1066f42e push eax */
  push32((uint32_t)(EAX));
  /* 1066f42f call dword ptr [0x1068f70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f70c))), 0x1066f435u);
  /* 1066f435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f437 jne 0x1066f43d */
  if (!C.zf) goto L_1066f43d;
  /* 1066f439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f43b jmp 0x1066f47c */
  goto L_1066f47c;
L_1066f43d:;
  /* 1066f43d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1066f43f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066f442 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f445 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f446 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1066f44b mov edx, dword ptr [0x1068f708] */
  EDX = (r32((uint32_t)(0x1068f708)));
  /* 1066f451 push edx */
  push32((uint32_t)(EDX));
  /* 1066f452 call dword ptr [0x1068f70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f70c))), 0x1066f458u);
  /* 1066f458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f45a jne 0x1066f460 */
  if (!C.zf) goto L_1066f460;
  /* 1066f45c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066f45e jmp 0x1066f47c */
  goto L_1066f47c;
L_1066f460:;
  /* 1066f460 push 0xa */
  push32((uint32_t)(0xau));
  /* 1066f462 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066f465 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f46a push eax */
  push32((uint32_t)(EAX));
  /* 1066f46b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066f46e push ecx */
  push32((uint32_t)(ECX));
  /* 1066f46f call 0x10665fe0 */
  push32(0x1066f474u); f_10665fe0();
  /* 1066f474 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066f477:;
  /* 1066f477 mov eax, 1 */
  EAX = (0x1u);
L_1066f47c:;
  /* 1066f47c mov esp, ebp */
  ESP = (EBP);
  /* 1066f47e pop ebp */
  EBP = (pop32());
  /* 1066f47f ret  */
  ESPCHK(0x1066f280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f480 @ 0x1066f480 (130 bytes, 47 insns) */
void f_1066f480(void) {
  FTRACE(0x1066f480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f480 push ebp */
  push32((uint32_t)(EBP));
  /* 1066f481 mov ebp, esp */
  EBP = (ESP);
  /* 1066f483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f486 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1066f48d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1066f494:;
  /* 1066f494 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066f497 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f49a jg 0x1066f4fe */
  if ((!C.zf&&C.sf==C.of)) goto L_1066f4fe;
  /* 1066f49c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f4a0 je 0x1066f4fe */
  if (C.zf) goto L_1066f4fe;
  /* 1066f4a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066f4a5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f4a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1066f4a9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f4ab sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1066f4ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066f4b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066f4b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066f4b6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1066f4b9 push eax */
  push32((uint32_t)(EAX));
  /* 1066f4ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066f4bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1066f4bf push edx */
  push32((uint32_t)(EDX));
  /* 1066f4c0 call 0x10671b70 */
  push32(0x1066f4c5u); f_10671b70();
  /* 1066f4c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f4c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066f4cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f4cf jne 0x1066f4e2 */
  if (!C.zf) goto L_1066f4e2;
  /* 1066f4d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066f4d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066f4d7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1066f4db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066f4de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1066f4e0 jmp 0x1066f4fc */
  goto L_1066f4fc;
L_1066f4e2:;
  /* 1066f4e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f4e6 jge 0x1066f4f3 */
  if ((C.sf==C.of)) goto L_1066f4f3;
  /* 1066f4e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066f4eb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f4ee mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1066f4f1 jmp 0x1066f4fc */
  goto L_1066f4fc;
L_1066f4f3:;
  /* 1066f4f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066f4f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f4f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1066f4fc:;
  /* 1066f4fc jmp 0x1066f494 */
  goto L_1066f494;
L_1066f4fe:;
  /* 1066f4fe mov esp, ebp */
  ESP = (EBP);
  /* 1066f500 pop ebp */
  EBP = (pop32());
  /* 1066f501 ret  */
  ESPCHK(0x1066f480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f510 @ 0x1066f510 (186 bytes, 50 insns) */
void f_1066f510(void) {
  FTRACE(0x1066f510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f510 push ebp */
  push32((uint32_t)(EBP));
  /* 1066f511 mov ebp, esp */
  EBP = (ESP);
  /* 1066f513 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f514 mov eax, dword ptr [0x1068f6fc] */
  EAX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f519 push eax */
  push32((uint32_t)(EAX));
  /* 1066f51a call 0x106662d0 */
  push32(0x1066f51fu); f_106662d0();
  /* 1066f51f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f522 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066f524 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f527 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1066f52a mov dword ptr [0x1068f6f8], ecx */
  w32((uint32_t)(0x1068f6f8), (ECX));
  /* 1066f530 mov edx, dword ptr [0x1068f700] */
  EDX = (r32((uint32_t)(0x1068f700)));
  /* 1066f536 push edx */
  push32((uint32_t)(EDX));
  /* 1066f537 call 0x106662d0 */
  push32(0x1066f53cu); f_106662d0();
  /* 1066f53c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f53f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066f541 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f544 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1066f547 mov dword ptr [0x1068f6f0], ecx */
  w32((uint32_t)(0x1068f6f0), (ECX));
  /* 1066f54d mov dword ptr [0x1068f6ec], 0 */
  w32((uint32_t)(0x1068f6ec), (0x0u));
  /* 1066f557 cmp dword ptr [0x1068f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f55e je 0x1066f569 */
  if (C.zf) goto L_1066f569;
  /* 1066f560 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1066f567 jmp 0x1066f57b */
  goto L_1066f57b;
L_1066f569:;
  /* 1066f569 mov edx, dword ptr [0x1068f6fc] */
  EDX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f56f push edx */
  push32((uint32_t)(EDX));
  /* 1066f570 call 0x1066ffb0 */
  push32(0x1066f575u); f_1066ffb0();
  /* 1066f575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f578 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066f57b:;
  /* 1066f57b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066f57e mov dword ptr [0x1068f6f4], eax */
  w32((uint32_t)(0x1068f6f4), (EAX));
  /* 1066f583 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066f585 push 0x1066f5d0 */
  push32((uint32_t)(0x1066f5d0u));
  /* 1066f58a call dword ptr [0x10691280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691280))), 0x1066f590u);
  /* 1066f590 mov ecx, dword ptr [0x1068f704] */
  ECX = (r32((uint32_t)(0x1068f704)));
  /* 1066f596 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1066f59c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066f59e je 0x1066f5bc */
  if (C.zf) goto L_1066f5bc;
  /* 1066f5a0 mov edx, dword ptr [0x1068f704] */
  EDX = (r32((uint32_t)(0x1068f704)));
  /* 1066f5a6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1066f5ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066f5ae je 0x1066f5bc */
  if (C.zf) goto L_1066f5bc;
  /* 1066f5b0 mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066f5b5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1066f5b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f5ba jne 0x1066f5c6 */
  if (!C.zf) goto L_1066f5c6;
L_1066f5bc:;
  /* 1066f5bc mov dword ptr [0x1068f704], 0 */
  w32((uint32_t)(0x1068f704), (0x0u));
L_1066f5c6:;
  /* 1066f5c6 mov esp, ebp */
  ESP = (EBP);
  /* 1066f5c8 pop ebp */
  EBP = (pop32());
  /* 1066f5c9 ret  */
  ESPCHK(0x1066f510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5d0 @ 0x1066f5d0 (804 bytes, 220 insns) */
void f_1066f5d0(void) {
  FTRACE(0x1066f5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066f5d1 mov ebp, esp */
  EBP = (ESP);
  /* 1066f5d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f5d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066f5d9 push eax */
  push32((uint32_t)(EAX));
  /* 1066f5da call 0x1066ff30 */
  push32(0x1066f5dfu); f_1066ff30();
  /* 1066f5df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f5e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1066f5e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1066f5e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1066f5ea push ecx */
  push32((uint32_t)(ECX));
  /* 1066f5eb mov edx, dword ptr [0x1068f6f0] */
  EDX = (r32((uint32_t)(0x1068f6f0)));
  /* 1066f5f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066f5f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f5f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1066f5fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f601 push edx */
  push32((uint32_t)(EDX));
  /* 1066f602 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f605 push eax */
  push32((uint32_t)(EAX));
  /* 1066f606 call dword ptr [0x1068f70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f70c))), 0x1066f60cu);
  /* 1066f60c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f60e jne 0x1066f624 */
  if (!C.zf) goto L_1066f624;
  /* 1066f610 mov dword ptr [0x1068f704], 0 */
  w32((uint32_t)(0x1068f704), (0x0u));
  /* 1066f61a mov eax, 1 */
  EAX = (0x1u);
  /* 1066f61f jmp 0x1066f8ee */
  goto L_1066f8ee;
L_1066f624:;
  /* 1066f624 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1066f627 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f628 mov edx, dword ptr [0x1068f700] */
  EDX = (r32((uint32_t)(0x1068f700)));
  /* 1066f62e push edx */
  push32((uint32_t)(EDX));
  /* 1066f62f call 0x10671b70 */
  push32(0x1066f634u); f_10671b70();
  /* 1066f634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f639 jne 0x1066f75f */
  if (!C.zf) goto L_1066f75f;
  /* 1066f63f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1066f641 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1066f644 push eax */
  push32((uint32_t)(EAX));
  /* 1066f645 mov ecx, dword ptr [0x1068f6f8] */
  ECX = (r32((uint32_t)(0x1068f6f8)));
  /* 1066f64b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066f64d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f64f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1066f655 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f65b push ecx */
  push32((uint32_t)(ECX));
  /* 1066f65c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f65f push edx */
  push32((uint32_t)(EDX));
  /* 1066f660 call dword ptr [0x1068f70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f70c))), 0x1066f666u);
  /* 1066f666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f668 jne 0x1066f67e */
  if (!C.zf) goto L_1066f67e;
  /* 1066f66a mov dword ptr [0x1068f704], 0 */
  w32((uint32_t)(0x1068f704), (0x0u));
  /* 1066f674 mov eax, 1 */
  EAX = (0x1u);
  /* 1066f679 jmp 0x1066f8ee */
  goto L_1066f8ee;
L_1066f67e:;
  /* 1066f67e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1066f681 push eax */
  push32((uint32_t)(EAX));
  /* 1066f682 mov ecx, dword ptr [0x1068f6fc] */
  ECX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f688 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f689 call 0x10671b70 */
  push32(0x1066f68eu); f_10671b70();
  /* 1066f68e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f693 jne 0x1066f6c0 */
  if (!C.zf) goto L_1066f6c0;
  /* 1066f695 mov edx, dword ptr [0x1068f704] */
  EDX = (r32((uint32_t)(0x1068f704)));
  /* 1066f69b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1066f6a1 mov dword ptr [0x1068f704], edx */
  w32((uint32_t)(0x1068f704), (EDX));
  /* 1066f6a7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f6aa mov dword ptr [0x1068f708], eax */
  w32((uint32_t)(0x1068f708), (EAX));
  /* 1066f6af mov ecx, dword ptr [0x1068f708] */
  ECX = (r32((uint32_t)(0x1068f708)));
  /* 1066f6b5 mov dword ptr [0x1068f6ec], ecx */
  w32((uint32_t)(0x1068f6ec), (ECX));
  /* 1066f6bb jmp 0x1066f75f */
  goto L_1066f75f;
L_1066f6c0:;
  /* 1066f6c0 mov edx, dword ptr [0x1068f704] */
  EDX = (r32((uint32_t)(0x1068f704)));
  /* 1066f6c6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1066f6c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066f6cb jne 0x1066f75f */
  if (!C.zf) goto L_1066f75f;
  /* 1066f6d1 cmp dword ptr [0x1068f6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f6d8 je 0x1066f72d */
  if (C.zf) goto L_1066f72d;
  /* 1066f6da mov eax, dword ptr [0x1068f6f4] */
  EAX = (r32((uint32_t)(0x1068f6f4)));
  /* 1066f6df push eax */
  push32((uint32_t)(EAX));
  /* 1066f6e0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1066f6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f6e4 mov edx, dword ptr [0x1068f6fc] */
  EDX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f6ea push edx */
  push32((uint32_t)(EDX));
  /* 1066f6eb call 0x10671c40 */
  push32(0x1066f6f0u); f_10671c40();
  /* 1066f6f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f6f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f6f5 jne 0x1066f72d */
  if (!C.zf) goto L_1066f72d;
  /* 1066f6f7 mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066f6fc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1066f6fe mov dword ptr [0x1068f704], eax */
  w32((uint32_t)(0x1068f704), (EAX));
  /* 1066f703 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f706 mov dword ptr [0x1068f708], ecx */
  w32((uint32_t)(0x1068f708), (ECX));
  /* 1066f70c mov edx, dword ptr [0x1068f6fc] */
  EDX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f712 push edx */
  push32((uint32_t)(EDX));
  /* 1066f713 call 0x106662d0 */
  push32(0x1066f718u); f_106662d0();
  /* 1066f718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f71b cmp eax, dword ptr [0x1068f6f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068f6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f721 jne 0x1066f72b */
  if (!C.zf) goto L_1066f72b;
  /* 1066f723 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f726 mov dword ptr [0x1068f6ec], eax */
  w32((uint32_t)(0x1068f6ec), (EAX));
L_1066f72b:;
  /* 1066f72b jmp 0x1066f75f */
  goto L_1066f75f;
L_1066f72d:;
  /* 1066f72d mov ecx, dword ptr [0x1068f704] */
  ECX = (r32((uint32_t)(0x1068f704)));
  /* 1066f733 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1066f736 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066f738 jne 0x1066f75f */
  if (!C.zf) goto L_1066f75f;
  /* 1066f73a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f73d push edx */
  push32((uint32_t)(EDX));
  /* 1066f73e call 0x1066fc70 */
  push32(0x1066f743u); f_1066fc70();
  /* 1066f743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f748 je 0x1066f75f */
  if (C.zf) goto L_1066f75f;
  /* 1066f74a mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066f74f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1066f751 mov dword ptr [0x1068f704], eax */
  w32((uint32_t)(0x1068f704), (EAX));
  /* 1066f756 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f759 mov dword ptr [0x1068f708], ecx */
  w32((uint32_t)(0x1068f708), (ECX));
L_1066f75f:;
  /* 1066f75f mov edx, dword ptr [0x1068f704] */
  EDX = (r32((uint32_t)(0x1068f704)));
  /* 1066f765 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1066f76b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f771 je 0x1066f8e1 */
  if (C.zf) goto L_1066f8e1;
  /* 1066f777 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1066f779 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1066f77c push eax */
  push32((uint32_t)(EAX));
  /* 1066f77d mov ecx, dword ptr [0x1068f6f8] */
  ECX = (r32((uint32_t)(0x1068f6f8)));
  /* 1066f783 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066f785 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f787 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1066f78d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f793 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f794 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f797 push edx */
  push32((uint32_t)(EDX));
  /* 1066f798 call dword ptr [0x1068f70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f70c))), 0x1066f79eu);
  /* 1066f79e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f7a0 jne 0x1066f7b6 */
  if (!C.zf) goto L_1066f7b6;
  /* 1066f7a2 mov dword ptr [0x1068f704], 0 */
  w32((uint32_t)(0x1068f704), (0x0u));
  /* 1066f7ac mov eax, 1 */
  EAX = (0x1u);
  /* 1066f7b1 jmp 0x1066f8ee */
  goto L_1066f8ee;
L_1066f7b6:;
  /* 1066f7b6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1066f7b9 push eax */
  push32((uint32_t)(EAX));
  /* 1066f7ba mov ecx, dword ptr [0x1068f6fc] */
  ECX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f7c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f7c1 call 0x10671b70 */
  push32(0x1066f7c6u); f_10671b70();
  /* 1066f7c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f7c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f7cb jne 0x1066f880 */
  if (!C.zf) goto L_1066f880;
  /* 1066f7d1 mov edx, dword ptr [0x1068f704] */
  EDX = (r32((uint32_t)(0x1068f704)));
  /* 1066f7d7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1066f7da mov dword ptr [0x1068f704], edx */
  w32((uint32_t)(0x1068f704), (EDX));
  /* 1066f7e0 cmp dword ptr [0x1068f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f7e7 je 0x1066f80a */
  if (C.zf) goto L_1066f80a;
  /* 1066f7e9 mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066f7ee or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1066f7f1 mov dword ptr [0x1068f704], eax */
  w32((uint32_t)(0x1068f704), (EAX));
  /* 1066f7f6 cmp dword ptr [0x1068f6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f7fd jne 0x1066f808 */
  if (!C.zf) goto L_1066f808;
  /* 1066f7ff mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f802 mov dword ptr [0x1068f6ec], ecx */
  w32((uint32_t)(0x1068f6ec), (ECX));
L_1066f808:;
  /* 1066f808 jmp 0x1066f87e */
  goto L_1066f87e;
L_1066f80a:;
  /* 1066f80a cmp dword ptr [0x1068f6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f811 je 0x1066f85f */
  if (C.zf) goto L_1066f85f;
  /* 1066f813 mov edx, dword ptr [0x1068f6fc] */
  EDX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f819 push edx */
  push32((uint32_t)(EDX));
  /* 1066f81a call 0x106662d0 */
  push32(0x1066f81fu); f_106662d0();
  /* 1066f81f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f822 cmp eax, dword ptr [0x1068f6f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068f6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f828 jne 0x1066f85f */
  if (!C.zf) goto L_1066f85f;
  /* 1066f82a push 1 */
  push32((uint32_t)(0x1u));
  /* 1066f82c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f82f push eax */
  push32((uint32_t)(EAX));
  /* 1066f830 call 0x1066fcc0 */
  push32(0x1066f835u); f_1066fcc0();
  /* 1066f835 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f838 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f83a je 0x1066f85d */
  if (C.zf) goto L_1066f85d;
  /* 1066f83c mov ecx, dword ptr [0x1068f704] */
  ECX = (r32((uint32_t)(0x1068f704)));
  /* 1066f842 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1066f845 mov dword ptr [0x1068f704], ecx */
  w32((uint32_t)(0x1068f704), (ECX));
  /* 1066f84b cmp dword ptr [0x1068f6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f852 jne 0x1066f85d */
  if (!C.zf) goto L_1066f85d;
  /* 1066f854 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f857 mov dword ptr [0x1068f6ec], edx */
  w32((uint32_t)(0x1068f6ec), (EDX));
L_1066f85d:;
  /* 1066f85d jmp 0x1066f87e */
  goto L_1066f87e;
L_1066f85f:;
  /* 1066f85f mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066f864 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1066f867 mov dword ptr [0x1068f704], eax */
  w32((uint32_t)(0x1068f704), (EAX));
  /* 1066f86c cmp dword ptr [0x1068f6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f873 jne 0x1066f87e */
  if (!C.zf) goto L_1066f87e;
  /* 1066f875 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f878 mov dword ptr [0x1068f6ec], ecx */
  w32((uint32_t)(0x1068f6ec), (ECX));
L_1066f87e:;
  /* 1066f87e jmp 0x1066f8e1 */
  goto L_1066f8e1;
L_1066f880:;
  /* 1066f880 cmp dword ptr [0x1068f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f887 jne 0x1066f8e1 */
  if (!C.zf) goto L_1066f8e1;
  /* 1066f889 cmp dword ptr [0x1068f6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f890 je 0x1066f8e1 */
  if (C.zf) goto L_1066f8e1;
  /* 1066f892 mov edx, dword ptr [0x1068f6f4] */
  EDX = (r32((uint32_t)(0x1068f6f4)));
  /* 1066f898 push edx */
  push32((uint32_t)(EDX));
  /* 1066f899 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1066f89c push eax */
  push32((uint32_t)(EAX));
  /* 1066f89d mov ecx, dword ptr [0x1068f6fc] */
  ECX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f8a4 call 0x10671c40 */
  push32(0x1066f8a9u); f_10671c40();
  /* 1066f8a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f8ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f8ae jne 0x1066f8e1 */
  if (!C.zf) goto L_1066f8e1;
  /* 1066f8b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066f8b2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f8b5 push edx */
  push32((uint32_t)(EDX));
  /* 1066f8b6 call 0x1066fcc0 */
  push32(0x1066f8bbu); f_1066fcc0();
  /* 1066f8bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f8be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f8c0 je 0x1066f8e1 */
  if (C.zf) goto L_1066f8e1;
  /* 1066f8c2 mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066f8c7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1066f8ca mov dword ptr [0x1068f704], eax */
  w32((uint32_t)(0x1068f704), (EAX));
  /* 1066f8cf cmp dword ptr [0x1068f6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f8d6 jne 0x1066f8e1 */
  if (!C.zf) goto L_1066f8e1;
  /* 1066f8d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f8db mov dword ptr [0x1068f6ec], ecx */
  w32((uint32_t)(0x1068f6ec), (ECX));
L_1066f8e1:;
  /* 1066f8e1 mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066f8e6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1066f8e9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066f8eb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f8ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1066f8ee:;
  /* 1066f8ee mov esp, ebp */
  ESP = (EBP);
  /* 1066f8f0 pop ebp */
  EBP = (pop32());
  /* 1066f8f1 ret 4 */
  ESPCHK(0x1066f5d0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f900 @ 0x1066f900 (116 bytes, 33 insns) */
void f_1066f900(void) {
  FTRACE(0x1066f900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f900 push ebp */
  push32((uint32_t)(EBP));
  /* 1066f901 mov ebp, esp */
  EBP = (ESP);
  /* 1066f903 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f904 mov eax, dword ptr [0x1068f6fc] */
  EAX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f909 push eax */
  push32((uint32_t)(EAX));
  /* 1066f90a call 0x106662d0 */
  push32(0x1066f90fu); f_106662d0();
  /* 1066f90f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f912 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066f914 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f917 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1066f91a mov dword ptr [0x1068f6f8], ecx */
  w32((uint32_t)(0x1068f6f8), (ECX));
  /* 1066f920 cmp dword ptr [0x1068f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f927 je 0x1066f932 */
  if (C.zf) goto L_1066f932;
  /* 1066f929 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1066f930 jmp 0x1066f944 */
  goto L_1066f944;
L_1066f932:;
  /* 1066f932 mov edx, dword ptr [0x1068f6fc] */
  EDX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f938 push edx */
  push32((uint32_t)(EDX));
  /* 1066f939 call 0x1066ffb0 */
  push32(0x1066f93eu); f_1066ffb0();
  /* 1066f93e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f941 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066f944:;
  /* 1066f944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066f947 mov dword ptr [0x1068f6f4], eax */
  w32((uint32_t)(0x1068f6f4), (EAX));
  /* 1066f94c push 1 */
  push32((uint32_t)(0x1u));
  /* 1066f94e push 0x1066f980 */
  push32((uint32_t)(0x1066f980u));
  /* 1066f953 call dword ptr [0x10691280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691280))), 0x1066f959u);
  /* 1066f959 mov ecx, dword ptr [0x1068f704] */
  ECX = (r32((uint32_t)(0x1068f704)));
  /* 1066f95f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1066f962 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066f964 jne 0x1066f970 */
  if (!C.zf) goto L_1066f970;
  /* 1066f966 mov dword ptr [0x1068f704], 0 */
  w32((uint32_t)(0x1068f704), (0x0u));
L_1066f970:;
  /* 1066f970 mov esp, ebp */
  ESP = (EBP);
  /* 1066f972 pop ebp */
  EBP = (pop32());
  /* 1066f973 ret  */
  ESPCHK(0x1066f900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f980 @ 0x1066f980 (287 bytes, 86 insns) */
void f_1066f980(void) {
  FTRACE(0x1066f980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066f980 push ebp */
  push32((uint32_t)(EBP));
  /* 1066f981 mov ebp, esp */
  EBP = (ESP);
  /* 1066f983 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066f989 push eax */
  push32((uint32_t)(EAX));
  /* 1066f98a call 0x1066ff30 */
  push32(0x1066f98fu); f_1066ff30();
  /* 1066f98f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f992 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1066f995 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1066f997 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1066f99a push ecx */
  push32((uint32_t)(ECX));
  /* 1066f99b mov edx, dword ptr [0x1068f6f8] */
  EDX = (r32((uint32_t)(0x1068f6f8)));
  /* 1066f9a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066f9a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066f9a5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1066f9ab add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f9b1 push edx */
  push32((uint32_t)(EDX));
  /* 1066f9b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f9b5 push eax */
  push32((uint32_t)(EAX));
  /* 1066f9b6 call dword ptr [0x1068f70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f70c))), 0x1066f9bcu);
  /* 1066f9bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f9be jne 0x1066f9d4 */
  if (!C.zf) goto L_1066f9d4;
  /* 1066f9c0 mov dword ptr [0x1068f704], 0 */
  w32((uint32_t)(0x1068f704), (0x0u));
  /* 1066f9ca mov eax, 1 */
  EAX = (0x1u);
  /* 1066f9cf jmp 0x1066fa99 */
  goto L_1066fa99;
L_1066f9d4:;
  /* 1066f9d4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1066f9d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1066f9d8 mov edx, dword ptr [0x1068f6fc] */
  EDX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066f9de push edx */
  push32((uint32_t)(EDX));
  /* 1066f9df call 0x10671b70 */
  push32(0x1066f9e4u); f_10671b70();
  /* 1066f9e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066f9e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066f9e9 jne 0x1066fa29 */
  if (!C.zf) goto L_1066fa29;
  /* 1066f9eb cmp dword ptr [0x1068f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066f9f2 jne 0x1066fa06 */
  if (!C.zf) goto L_1066fa06;
  /* 1066f9f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1066f9f6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066f9f9 push eax */
  push32((uint32_t)(EAX));
  /* 1066f9fa call 0x1066fcc0 */
  push32(0x1066f9ffu); f_1066fcc0();
  /* 1066f9ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fa02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fa04 je 0x1066fa27 */
  if (C.zf) goto L_1066fa27;
L_1066fa06:;
  /* 1066fa06 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066fa09 mov dword ptr [0x1068f708], ecx */
  w32((uint32_t)(0x1068f708), (ECX));
  /* 1066fa0f mov edx, dword ptr [0x1068f708] */
  EDX = (r32((uint32_t)(0x1068f708)));
  /* 1066fa15 mov dword ptr [0x1068f6ec], edx */
  w32((uint32_t)(0x1068f6ec), (EDX));
  /* 1066fa1b mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066fa20 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1066fa22 mov dword ptr [0x1068f704], eax */
  w32((uint32_t)(0x1068f704), (EAX));
L_1066fa27:;
  /* 1066fa27 jmp 0x1066fa8c */
  goto L_1066fa8c;
L_1066fa29:;
  /* 1066fa29 cmp dword ptr [0x1068f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fa30 jne 0x1066fa8c */
  if (!C.zf) goto L_1066fa8c;
  /* 1066fa32 cmp dword ptr [0x1068f6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fa39 je 0x1066fa8c */
  if (C.zf) goto L_1066fa8c;
  /* 1066fa3b mov ecx, dword ptr [0x1068f6f4] */
  ECX = (r32((uint32_t)(0x1068f6f4)));
  /* 1066fa41 push ecx */
  push32((uint32_t)(ECX));
  /* 1066fa42 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1066fa45 push edx */
  push32((uint32_t)(EDX));
  /* 1066fa46 mov eax, dword ptr [0x1068f6fc] */
  EAX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066fa4b push eax */
  push32((uint32_t)(EAX));
  /* 1066fa4c call 0x10671c40 */
  push32(0x1066fa51u); f_10671c40();
  /* 1066fa51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fa54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fa56 jne 0x1066fa8c */
  if (!C.zf) goto L_1066fa8c;
  /* 1066fa58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066fa5a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066fa5d push ecx */
  push32((uint32_t)(ECX));
  /* 1066fa5e call 0x1066fcc0 */
  push32(0x1066fa63u); f_1066fcc0();
  /* 1066fa63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fa66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fa68 je 0x1066fa8c */
  if (C.zf) goto L_1066fa8c;
  /* 1066fa6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066fa6d mov dword ptr [0x1068f708], edx */
  w32((uint32_t)(0x1068f708), (EDX));
  /* 1066fa73 mov eax, dword ptr [0x1068f708] */
  EAX = (r32((uint32_t)(0x1068f708)));
  /* 1066fa78 mov dword ptr [0x1068f6ec], eax */
  w32((uint32_t)(0x1068f6ec), (EAX));
  /* 1066fa7d mov ecx, dword ptr [0x1068f704] */
  ECX = (r32((uint32_t)(0x1068f704)));
  /* 1066fa83 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1066fa86 mov dword ptr [0x1068f704], ecx */
  w32((uint32_t)(0x1068f704), (ECX));
L_1066fa8c:;
  /* 1066fa8c mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066fa91 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1066fa94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066fa96 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066fa98 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1066fa99:;
  /* 1066fa99 mov esp, ebp */
  ESP = (EBP);
  /* 1066fa9b pop ebp */
  EBP = (pop32());
  /* 1066fa9c ret 4 */
  ESPCHK(0x1066f980u, _esp0);
  ESP += 8; return;
}

/* FUN_1000faa0 @ 0x1066faa0 (69 bytes, 20 insns) */
void f_1066faa0(void) {
  FTRACE(0x1066faa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066faa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066faa1 mov ebp, esp */
  EBP = (ESP);
  /* 1066faa3 mov eax, dword ptr [0x1068f700] */
  EAX = (r32((uint32_t)(0x1068f700)));
  /* 1066faa8 push eax */
  push32((uint32_t)(EAX));
  /* 1066faa9 call 0x106662d0 */
  push32(0x1066faaeu); f_106662d0();
  /* 1066faae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fab1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066fab3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fab6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1066fab9 mov dword ptr [0x1068f6f0], ecx */
  w32((uint32_t)(0x1068f6f0), (ECX));
  /* 1066fabf push 1 */
  push32((uint32_t)(0x1u));
  /* 1066fac1 push 0x1066faf0 */
  push32((uint32_t)(0x1066faf0u));
  /* 1066fac6 call dword ptr [0x10691280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691280))), 0x1066faccu);
  /* 1066facc mov edx, dword ptr [0x1068f704] */
  EDX = (r32((uint32_t)(0x1068f704)));
  /* 1066fad2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1066fad5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066fad7 jne 0x1066fae3 */
  if (!C.zf) goto L_1066fae3;
  /* 1066fad9 mov dword ptr [0x1068f704], 0 */
  w32((uint32_t)(0x1068f704), (0x0u));
L_1066fae3:;
  /* 1066fae3 pop ebp */
  EBP = (pop32());
  /* 1066fae4 ret  */
  ESPCHK(0x1066faa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x1066faf0 (172 bytes, 54 insns) */
void f_1066faf0(void) {
  FTRACE(0x1066faf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066faf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066faf1 mov ebp, esp */
  EBP = (ESP);
  /* 1066faf3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066faf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066faf9 push eax */
  push32((uint32_t)(EAX));
  /* 1066fafa call 0x1066ff30 */
  push32(0x1066faffu); f_1066ff30();
  /* 1066faff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fb02 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1066fb05 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1066fb07 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1066fb0a push ecx */
  push32((uint32_t)(ECX));
  /* 1066fb0b mov edx, dword ptr [0x1068f6f0] */
  EDX = (r32((uint32_t)(0x1068f6f0)));
  /* 1066fb11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066fb13 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066fb15 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1066fb1b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fb21 push edx */
  push32((uint32_t)(EDX));
  /* 1066fb22 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066fb25 push eax */
  push32((uint32_t)(EAX));
  /* 1066fb26 call dword ptr [0x1068f70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f70c))), 0x1066fb2cu);
  /* 1066fb2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fb2e jne 0x1066fb41 */
  if (!C.zf) goto L_1066fb41;
  /* 1066fb30 mov dword ptr [0x1068f704], 0 */
  w32((uint32_t)(0x1068f704), (0x0u));
  /* 1066fb3a mov eax, 1 */
  EAX = (0x1u);
  /* 1066fb3f jmp 0x1066fb96 */
  goto L_1066fb96;
L_1066fb41:;
  /* 1066fb41 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1066fb44 push ecx */
  push32((uint32_t)(ECX));
  /* 1066fb45 mov edx, dword ptr [0x1068f700] */
  EDX = (r32((uint32_t)(0x1068f700)));
  /* 1066fb4b push edx */
  push32((uint32_t)(EDX));
  /* 1066fb4c call 0x10671b70 */
  push32(0x1066fb51u); f_10671b70();
  /* 1066fb51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fb54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fb56 jne 0x1066fb89 */
  if (!C.zf) goto L_1066fb89;
  /* 1066fb58 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066fb5b push eax */
  push32((uint32_t)(EAX));
  /* 1066fb5c call 0x1066fc70 */
  push32(0x1066fb61u); f_1066fc70();
  /* 1066fb61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fb64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fb66 je 0x1066fb89 */
  if (C.zf) goto L_1066fb89;
  /* 1066fb68 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1066fb6b mov dword ptr [0x1068f708], ecx */
  w32((uint32_t)(0x1068f708), (ECX));
  /* 1066fb71 mov edx, dword ptr [0x1068f708] */
  EDX = (r32((uint32_t)(0x1068f708)));
  /* 1066fb77 mov dword ptr [0x1068f6ec], edx */
  w32((uint32_t)(0x1068f6ec), (EDX));
  /* 1066fb7d mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066fb82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1066fb84 mov dword ptr [0x1068f704], eax */
  w32((uint32_t)(0x1068f704), (EAX));
L_1066fb89:;
  /* 1066fb89 mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066fb8e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1066fb91 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066fb93 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066fb95 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1066fb96:;
  /* 1066fb96 mov esp, ebp */
  ESP = (EBP);
  /* 1066fb98 pop ebp */
  EBP = (pop32());
  /* 1066fb99 ret 4 */
  ESPCHK(0x1066faf0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fba0 @ 0x1066fba0 (43 bytes, 11 insns) */
void f_1066fba0(void) {
  FTRACE(0x1066fba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066fba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066fba1 mov ebp, esp */
  EBP = (ESP);
  /* 1066fba3 mov eax, dword ptr [0x1068f704] */
  EAX = (r32((uint32_t)(0x1068f704)));
  /* 1066fba8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1066fbad mov dword ptr [0x1068f704], eax */
  w32((uint32_t)(0x1068f704), (EAX));
  /* 1066fbb2 call dword ptr [0x10691270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691270))), 0x1066fbb8u);
  /* 1066fbb8 mov dword ptr [0x1068f708], eax */
  w32((uint32_t)(0x1068f708), (EAX));
  /* 1066fbbd mov ecx, dword ptr [0x1068f708] */
  ECX = (r32((uint32_t)(0x1068f708)));
  /* 1066fbc3 mov dword ptr [0x1068f6ec], ecx */
  w32((uint32_t)(0x1068f6ec), (ECX));
  /* 1066fbc9 pop ebp */
  EBP = (pop32());
  /* 1066fbca ret  */
  ESPCHK(0x1066fba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbd0 @ 0x1066fbd0 (155 bytes, 57 insns) */
void f_1066fbd0(void) {
  FTRACE(0x1066fbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066fbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066fbd1 mov ebp, esp */
  EBP = (ESP);
  /* 1066fbd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066fbd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fbda je 0x1066fbfb */
  if (C.zf) goto L_1066fbfb;
  /* 1066fbdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066fbdf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066fbe2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066fbe4 je 0x1066fbfb */
  if (C.zf) goto L_1066fbfb;
  /* 1066fbe6 push 0x1068b784 */
  push32((uint32_t)(0x1068b784u));
  /* 1066fbeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066fbee push edx */
  push32((uint32_t)(EDX));
  /* 1066fbef call 0x1066f130 */
  push32(0x1066fbf4u); f_1066f130();
  /* 1066fbf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fbf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fbf9 jne 0x1066fc23 */
  if (!C.zf) goto L_1066fc23;
L_1066fbfb:;
  /* 1066fbfb push 8 */
  push32((uint32_t)(0x8u));
  /* 1066fbfd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1066fc00 push eax */
  push32((uint32_t)(EAX));
  /* 1066fc01 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1066fc06 mov ecx, dword ptr [0x1068f708] */
  ECX = (r32((uint32_t)(0x1068f708)));
  /* 1066fc0c push ecx */
  push32((uint32_t)(ECX));
  /* 1066fc0d call dword ptr [0x1068f70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f70c))), 0x1066fc13u);
  /* 1066fc13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fc15 jne 0x1066fc1b */
  if (!C.zf) goto L_1066fc1b;
  /* 1066fc17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066fc19 jmp 0x1066fc67 */
  goto L_1066fc67;
L_1066fc1b:;
  /* 1066fc1b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1066fc1e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1066fc21 jmp 0x1066fc5b */
  goto L_1066fc5b;
L_1066fc23:;
  /* 1066fc23 push 0x1068b780 */
  push32((uint32_t)(0x1068b780u));
  /* 1066fc28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066fc2b push eax */
  push32((uint32_t)(EAX));
  /* 1066fc2c call 0x1066f130 */
  push32(0x1066fc31u); f_1066f130();
  /* 1066fc31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fc34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fc36 jne 0x1066fc5b */
  if (!C.zf) goto L_1066fc5b;
  /* 1066fc38 push 8 */
  push32((uint32_t)(0x8u));
  /* 1066fc3a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1066fc3d push ecx */
  push32((uint32_t)(ECX));
  /* 1066fc3e push 0xb */
  push32((uint32_t)(0xbu));
  /* 1066fc40 mov edx, dword ptr [0x1068f708] */
  EDX = (r32((uint32_t)(0x1068f708)));
  /* 1066fc46 push edx */
  push32((uint32_t)(EDX));
  /* 1066fc47 call dword ptr [0x1068f70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f70c))), 0x1066fc4du);
  /* 1066fc4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fc4f jne 0x1066fc55 */
  if (!C.zf) goto L_1066fc55;
  /* 1066fc51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066fc53 jmp 0x1066fc67 */
  goto L_1066fc67;
L_1066fc55:;
  /* 1066fc55 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1066fc58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1066fc5b:;
  /* 1066fc5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066fc5e push ecx */
  push32((uint32_t)(ECX));
  /* 1066fc5f call 0x10671d50 */
  push32(0x1066fc64u); f_10671d50();
  /* 1066fc64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066fc67:;
  /* 1066fc67 mov esp, ebp */
  ESP = (EBP);
  /* 1066fc69 pop ebp */
  EBP = (pop32());
  /* 1066fc6a ret  */
  ESPCHK(0x1066fbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc70 @ 0x1066fc70 (79 bytes, 26 insns) */
void f_1066fc70(void) {
  FTRACE(0x1066fc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066fc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1066fc71 mov ebp, esp */
  EBP = (ESP);
  /* 1066fc73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066fc76 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1066fc7a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1066fc7e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1066fc85 jmp 0x1066fc90 */
  goto L_1066fc90;
L_1066fc87:;
  /* 1066fc87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066fc8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fc8d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1066fc90:;
  /* 1066fc90 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fc94 jae 0x1066fcb6 */
  if (!C.cf) goto L_1066fcb6;
  /* 1066fc96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066fc99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1066fc9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066fca2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066fca4 mov cx, word ptr [eax*2 + 0x1068e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1068e9c4)));
  /* 1066fcac cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fcae jne 0x1066fcb4 */
  if (!C.zf) goto L_1066fcb4;
  /* 1066fcb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066fcb2 jmp 0x1066fcbb */
  goto L_1066fcbb;
L_1066fcb4:;
  /* 1066fcb4 jmp 0x1066fc87 */
  goto L_1066fc87;
L_1066fcb6:;
  /* 1066fcb6 mov eax, 1 */
  EAX = (0x1u);
L_1066fcbb:;
  /* 1066fcbb mov esp, ebp */
  ESP = (EBP);
  /* 1066fcbd pop ebp */
  EBP = (pop32());
  /* 1066fcbe ret  */
  ESPCHK(0x1066fc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcc0 @ 0x1066fcc0 (135 bytes, 48 insns) */
void f_1066fcc0(void) {
  FTRACE(0x1066fcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066fcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066fcc1 mov ebp, esp */
  EBP = (ESP);
  /* 1066fcc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066fcc6 push esi */
  push32((uint32_t)(ESI));
  /* 1066fcc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066fcca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066fccf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066fcd4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066fcd9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1066fcdc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066fce1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066fce4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1066fce6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1066fce9 push ecx */
  push32((uint32_t)(ECX));
  /* 1066fcea push 1 */
  push32((uint32_t)(0x1u));
  /* 1066fcec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066fcef push edx */
  push32((uint32_t)(EDX));
  /* 1066fcf0 call dword ptr [0x1068f70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f70c))), 0x1066fcf6u);
  /* 1066fcf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fcf8 jne 0x1066fcfe */
  if (!C.zf) goto L_1066fcfe;
  /* 1066fcfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066fcfc jmp 0x1066fd42 */
  goto L_1066fd42;
L_1066fcfe:;
  /* 1066fcfe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1066fd01 push eax */
  push32((uint32_t)(EAX));
  /* 1066fd02 call 0x1066ff30 */
  push32(0x1066fd07u); f_1066ff30();
  /* 1066fd07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fd0a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fd0d je 0x1066fd3d */
  if (C.zf) goto L_1066fd3d;
  /* 1066fd0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fd13 je 0x1066fd3d */
  if (C.zf) goto L_1066fd3d;
  /* 1066fd15 mov ecx, dword ptr [0x1068f6fc] */
  ECX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066fd1b push ecx */
  push32((uint32_t)(ECX));
  /* 1066fd1c call 0x1066ffb0 */
  push32(0x1066fd21u); f_1066ffb0();
  /* 1066fd21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fd24 mov esi, eax */
  ESI = (EAX);
  /* 1066fd26 mov edx, dword ptr [0x1068f6fc] */
  EDX = (r32((uint32_t)(0x1068f6fc)));
  /* 1066fd2c push edx */
  push32((uint32_t)(EDX));
  /* 1066fd2d call 0x106662d0 */
  push32(0x1066fd32u); f_106662d0();
  /* 1066fd32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fd35 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fd37 jne 0x1066fd3d */
  if (!C.zf) goto L_1066fd3d;
  /* 1066fd39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066fd3b jmp 0x1066fd42 */
  goto L_1066fd42;
L_1066fd3d:;
  /* 1066fd3d mov eax, 1 */
  EAX = (0x1u);
L_1066fd42:;
  /* 1066fd42 pop esi */
  ESI = (pop32());
  /* 1066fd43 mov esp, ebp */
  ESP = (EBP);
  /* 1066fd45 pop ebp */
  EBP = (pop32());
  /* 1066fd46 ret  */
  ESPCHK(0x1066fcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd50 @ 0x1066fd50 (77 bytes, 18 insns) */
void f_1066fd50(void) {
  FTRACE(0x1066fd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066fd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1066fd51 mov ebp, esp */
  EBP = (ESP);
  /* 1066fd53 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066fd59 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1066fd63 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1066fd69 push eax */
  push32((uint32_t)(EAX));
  /* 1066fd6a call dword ptr [0x1069126c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069126c))), 0x1066fd70u);
  /* 1066fd70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066fd72 je 0x1066fd89 */
  if (C.zf) goto L_1066fd89;
  /* 1066fd74 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fd7b jne 0x1066fd89 */
  if (!C.zf) goto L_1066fd89;
  /* 1066fd7d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1066fd87 jmp 0x1066fd93 */
  goto L_1066fd93;
L_1066fd89:;
  /* 1066fd89 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1066fd93:;
  /* 1066fd93 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1066fd99 mov esp, ebp */
  ESP = (EBP);
  /* 1066fd9b pop ebp */
  EBP = (pop32());
  /* 1066fd9c ret  */
  ESPCHK(0x1066fd50u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1066fda0 (388 bytes, 118 insns) */
void f_1066fda0(void) {
  FTRACE(0x1066fda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066fda0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066fda1 mov ebp, esp */
  EBP = (ESP);
  /* 1066fda3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066fda6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1066fdad mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1066fdb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1066fdbb:;
  /* 1066fdbb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066fdbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fdc1 jg 0x1066ff08 */
  if ((!C.zf&&C.sf==C.of)) goto L_1066ff08;
  /* 1066fdc7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066fdca add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fdcd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1066fdce sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066fdd0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1066fdd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1066fdd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fdd8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066fddb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066fdde cmp edx, dword ptr [ecx + 0x1068e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1068e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fde4 jne 0x1066fede */
  if (!C.zf) goto L_1066fede;
  /* 1066fdea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066fded mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1066fdf0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fdf4 ja 0x1066fe17 */
  if ((!C.cf&&!C.zf)) goto L_1066fe17;
  /* 1066fdf6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fdfa je 0x1066fe89 */
  if (C.zf) goto L_1066fe89;
  /* 1066fe00 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fe04 je 0x1066fe34 */
  if (C.zf) goto L_1066fe34;
  /* 1066fe06 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fe0a je 0x1066fe56 */
  if (C.zf) goto L_1066fe56;
  /* 1066fe0c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fe10 je 0x1066fe78 */
  if (C.zf) goto L_1066fe78;
  /* 1066fe12 jmp 0x1066fea8 */
  goto L_1066fea8;
L_1066fe17:;
  /* 1066fe17 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fe1e je 0x1066fe45 */
  if (C.zf) goto L_1066fe45;
  /* 1066fe20 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fe27 je 0x1066fe67 */
  if (C.zf) goto L_1066fe67;
  /* 1066fe29 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fe30 je 0x1066fe9a */
  if (C.zf) goto L_1066fe9a;
  /* 1066fe32 jmp 0x1066fea8 */
  goto L_1066fea8;
L_1066fe34:;
  /* 1066fe34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fe37 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066fe3a add ecx, 0x1068e524 */
  { uint32_t _a=(ECX),_b=(0x1068e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fe40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066fe43 jmp 0x1066fea8 */
  goto L_1066fea8;
L_1066fe45:;
  /* 1066fe45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fe48 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066fe4b mov eax, dword ptr [edx + 0x1068e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1068e52c)));
  /* 1066fe51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066fe54 jmp 0x1066fea8 */
  goto L_1066fea8;
L_1066fe56:;
  /* 1066fe56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fe59 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066fe5c add ecx, 0x1068e530 */
  { uint32_t _a=(ECX),_b=(0x1068e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fe62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066fe65 jmp 0x1066fea8 */
  goto L_1066fea8;
L_1066fe67:;
  /* 1066fe67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fe6a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066fe6d mov eax, dword ptr [edx + 0x1068e534] */
  EAX = (r32((uint32_t)(EDX + 0x1068e534)));
  /* 1066fe73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066fe76 jmp 0x1066fea8 */
  goto L_1066fea8;
L_1066fe78:;
  /* 1066fe78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fe7b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066fe7e add ecx, 0x1068e538 */
  { uint32_t _a=(ECX),_b=(0x1068e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fe84 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066fe87 jmp 0x1066fea8 */
  goto L_1066fea8;
L_1066fe89:;
  /* 1066fe89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fe8c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066fe8f add edx, 0x1068e53c */
  { uint32_t _a=(EDX),_b=(0x1068e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fe95 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1066fe98 jmp 0x1066fea8 */
  goto L_1066fea8;
L_1066fe9a:;
  /* 1066fe9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fe9d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066fea0 add eax, 0x1068e544 */
  { uint32_t _a=(EAX),_b=(0x1068e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fea5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1066fea8:;
  /* 1066fea8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066feac je 0x1066feb4 */
  if (C.zf) goto L_1066feb4;
  /* 1066feae cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066feb2 jge 0x1066feb6 */
  if ((C.sf==C.of)) goto L_1066feb6;
L_1066feb4:;
  /* 1066feb4 jmp 0x1066ff08 */
  goto L_1066ff08;
L_1066feb6:;
  /* 1066feb6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066feb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066febc push ecx */
  push32((uint32_t)(ECX));
  /* 1066febd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066fec0 push edx */
  push32((uint32_t)(EDX));
  /* 1066fec1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066fec4 push eax */
  push32((uint32_t)(EAX));
  /* 1066fec5 call 0x10666cc0 */
  push32(0x1066fecau); f_10666cc0();
  /* 1066feca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fecd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066fed0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fed3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1066fed7 mov eax, 1 */
  EAX = (0x1u);
  /* 1066fedc jmp 0x1066ff1e */
  goto L_1066ff1e;
L_1066fede:;
  /* 1066fede mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fee1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066fee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066fee7 cmp eax, dword ptr [edx + 0x1068e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1068e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066feed jae 0x1066fefa */
  if (!C.cf) goto L_1066fefa;
  /* 1066feef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fef2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066fef5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066fef8 jmp 0x1066ff03 */
  goto L_1066ff03;
L_1066fefa:;
  /* 1066fefa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066fefd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ff00 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1066ff03:;
  /* 1066ff03 jmp 0x1066fdbb */
  goto L_1066fdbb;
L_1066ff08:;
  /* 1066ff08 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066ff0b push eax */
  push32((uint32_t)(EAX));
  /* 1066ff0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066ff0f push ecx */
  push32((uint32_t)(ECX));
  /* 1066ff10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066ff13 push edx */
  push32((uint32_t)(EDX));
  /* 1066ff14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ff17 push eax */
  push32((uint32_t)(EAX));
  /* 1066ff18 call dword ptr [0x10691278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691278))), 0x1066ff1eu);
L_1066ff1e:;
  /* 1066ff1e mov esp, ebp */
  ESP = (EBP);
  /* 1066ff20 pop ebp */
  EBP = (pop32());
  /* 1066ff21 ret 0x10 */
  ESPCHK(0x1066fda0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000ff30 @ 0x1066ff30 (118 bytes, 42 insns) */
void f_1066ff30(void) {
  FTRACE(0x1066ff30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066ff30 push ebp */
  push32((uint32_t)(EBP));
  /* 1066ff31 mov ebp, esp */
  EBP = (ESP);
  /* 1066ff33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ff36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1066ff3d:;
  /* 1066ff3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ff40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1066ff42 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1066ff45 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066ff49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ff4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ff4f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1066ff52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066ff54 je 0x1066ff9f */
  if (C.zf) goto L_1066ff9f;
  /* 1066ff56 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066ff5a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ff5d jl 0x1066ff72 */
  if ((C.sf!=C.of)) goto L_1066ff72;
  /* 1066ff5f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066ff63 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ff66 jg 0x1066ff72 */
  if ((!C.zf&&C.sf==C.of)) goto L_1066ff72;
  /* 1066ff68 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1066ff6b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1066ff6d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1066ff70 jmp 0x1066ff8c */
  goto L_1066ff8c;
L_1066ff72:;
  /* 1066ff72 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066ff76 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ff79 jl 0x1066ff8c */
  if ((C.sf!=C.of)) goto L_1066ff8c;
  /* 1066ff7b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066ff7f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ff82 jg 0x1066ff8c */
  if ((!C.zf&&C.sf==C.of)) goto L_1066ff8c;
  /* 1066ff84 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1066ff87 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1066ff89 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1066ff8c:;
  /* 1066ff8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ff8f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1066ff92 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1066ff96 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1066ff9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066ff9d jmp 0x1066ff3d */
  goto L_1066ff3d;
L_1066ff9f:;
  /* 1066ff9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066ffa2 mov esp, ebp */
  ESP = (EBP);
  /* 1066ffa4 pop ebp */
  EBP = (pop32());
  /* 1066ffa5 ret  */
  ESPCHK(0x1066ff30u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x1066ffb0 (101 bytes, 36 insns) */
void f_1066ffb0(void) {
  FTRACE(0x1066ffb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066ffb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1066ffb1 mov ebp, esp */
  EBP = (ESP);
  /* 1066ffb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066ffb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1066ffbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ffc0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1066ffc2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1066ffc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066ffc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066ffcb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1066ffce:;
  /* 1066ffce movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1066ffd2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ffd5 jl 0x1066ffe0 */
  if ((C.sf!=C.of)) goto L_1066ffe0;
  /* 1066ffd7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1066ffdb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ffde jle 0x1066fff2 */
  if ((C.zf||C.sf!=C.of)) goto L_1066fff2;
L_1066ffe0:;
  /* 1066ffe0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1066ffe4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066ffe7 jl 0x1067000e */
  if ((C.sf!=C.of)) goto L_1067000e;
  /* 1066ffe9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1066ffed cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066fff0 jg 0x1067000e */
  if ((!C.zf&&C.sf==C.of)) goto L_1067000e;
L_1066fff2:;
  /* 1066fff2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066fff5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066fff8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1066fffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066fffe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10670000 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10670003 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670006 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670009 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1067000c jmp 0x1066ffce */
  goto L_1066ffce;
L_1067000e:;
  /* 1067000e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10670011 mov esp, ebp */
  ESP = (EBP);
  /* 10670013 pop ebp */
  EBP = (pop32());
  /* 10670014 ret  */
  ESPCHK(0x1066ffb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010020 @ 0x10670020 (122 bytes, 39 insns) */
void f_10670020(void) {
  FTRACE(0x10670020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10670020 push ebp */
  push32((uint32_t)(EBP));
  /* 10670021 mov ebp, esp */
  EBP = (ESP);
  /* 10670023 push ecx */
  push32((uint32_t)(ECX));
  /* 10670024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670027 cmp eax, dword ptr [0x10690f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10690f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067002d jae 0x10670051 */
  if (!C.cf) goto L_10670051;
  /* 1067002f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670032 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10670035 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670038 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1067003b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1067003e mov eax, dword ptr [ecx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 10670045 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1067004a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1067004d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1067004f jne 0x1067006c */
  if (!C.zf) goto L_1067006c;
L_10670051:;
  /* 10670051 call 0x1066b370 */
  push32(0x10670056u); f_1066b370();
  /* 10670056 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1067005c call 0x1066b380 */
  push32(0x10670061u); f_1066b380();
  /* 10670061 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10670067 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1067006a jmp 0x10670096 */
  goto L_10670096;
L_1067006c:;
  /* 1067006c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067006f push edx */
  push32((uint32_t)(EDX));
  /* 10670070 call 0x1066cb90 */
  push32(0x10670075u); f_1066cb90();
  /* 10670075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670078 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067007b push eax */
  push32((uint32_t)(EAX));
  /* 1067007c call 0x106700a0 */
  push32(0x10670081u); f_106700a0();
  /* 10670081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670084 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10670087 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067008a push ecx */
  push32((uint32_t)(ECX));
  /* 1067008b call 0x1066cc20 */
  push32(0x10670090u); f_1066cc20();
  /* 10670090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670093 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10670096:;
  /* 10670096 mov esp, ebp */
  ESP = (EBP);
  /* 10670098 pop ebp */
  EBP = (pop32());
  /* 10670099 ret  */
  ESPCHK(0x10670020u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x106700a0 (170 bytes, 59 insns) */
void f_106700a0(void) {
  FTRACE(0x106700a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106700a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106700a1 mov ebp, esp */
  EBP = (ESP);
  /* 106700a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106700a4 push esi */
  push32((uint32_t)(ESI));
  /* 106700a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106700a8 push eax */
  push32((uint32_t)(EAX));
  /* 106700a9 call 0x1066ca10 */
  push32(0x106700aeu); f_1066ca10();
  /* 106700ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106700b1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106700b4 je 0x106700f3 */
  if (C.zf) goto L_106700f3;
  /* 106700b6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106700ba je 0x106700c2 */
  if (C.zf) goto L_106700c2;
  /* 106700bc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106700c0 jne 0x106700dc */
  if (!C.zf) goto L_106700dc;
L_106700c2:;
  /* 106700c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 106700c4 call 0x1066ca10 */
  push32(0x106700c9u); f_1066ca10();
  /* 106700c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106700cc mov esi, eax */
  ESI = (EAX);
  /* 106700ce push 2 */
  push32((uint32_t)(0x2u));
  /* 106700d0 call 0x1066ca10 */
  push32(0x106700d5u); f_1066ca10();
  /* 106700d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106700d8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106700da je 0x106700f3 */
  if (C.zf) goto L_106700f3;
L_106700dc:;
  /* 106700dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106700df push ecx */
  push32((uint32_t)(ECX));
  /* 106700e0 call 0x1066ca10 */
  push32(0x106700e5u); f_1066ca10();
  /* 106700e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106700e8 push eax */
  push32((uint32_t)(EAX));
  /* 106700e9 call dword ptr [0x10691274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691274))), 0x106700efu);
  /* 106700ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106700f1 je 0x106700fc */
  if (C.zf) goto L_106700fc;
L_106700f3:;
  /* 106700f3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106700fa jmp 0x10670105 */
  goto L_10670105;
L_106700fc:;
  /* 106700fc call dword ptr [0x106912f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f4))), 0x10670102u);
  /* 10670102 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10670105:;
  /* 10670105 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670108 push edx */
  push32((uint32_t)(EDX));
  /* 10670109 call 0x1066c930 */
  push32(0x1067010eu); f_1066c930();
  /* 1067010e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670114 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10670117 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067011a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1067011d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10670120 mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 10670127 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1067012c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670130 je 0x10670143 */
  if (C.zf) goto L_10670143;
  /* 10670132 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10670135 push eax */
  push32((uint32_t)(EAX));
  /* 10670136 call 0x1066b2d0 */
  push32(0x1067013bu); f_1066b2d0();
  /* 1067013b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067013e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10670141 jmp 0x10670145 */
  goto L_10670145;
L_10670143:;
  /* 10670143 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10670145:;
  /* 10670145 pop esi */
  ESI = (pop32());
  /* 10670146 mov esp, ebp */
  ESP = (EBP);
  /* 10670148 pop ebp */
  EBP = (pop32());
  /* 10670149 ret  */
  ESPCHK(0x106700a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010150 @ 0x10670150 (146 bytes, 52 insns) */
void f_10670150(void) {
  FTRACE(0x10670150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10670150 push ebp */
  push32((uint32_t)(EBP));
  /* 10670151 mov ebp, esp */
  EBP = (ESP);
  /* 10670153 push ebx */
  push32((uint32_t)(EBX));
  /* 10670154 push esi */
  push32((uint32_t)(ESI));
  /* 10670155 push edi */
  push32((uint32_t)(EDI));
L_10670156:;
  /* 10670156 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067015a jne 0x1067017a */
  if (!C.zf) goto L_1067017a;
  /* 1067015c push 0x1068b0c0 */
  push32((uint32_t)(0x1068b0c0u));
  /* 10670161 push 0 */
  push32((uint32_t)(0x0u));
  /* 10670163 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10670165 push 0x1068b788 */
  push32((uint32_t)(0x1068b788u));
  /* 1067016a push 2 */
  push32((uint32_t)(0x2u));
  /* 1067016c call 0x10662560 */
  push32(0x10670171u); f_10662560();
  /* 10670171 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670174 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670177 jne 0x1067017a */
  if (!C.zf) goto L_1067017a;
  /* 10670179 int3  */
  x86_unimpl("int3 @ 0x10670179");
L_1067017a:;
  /* 1067017a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1067017c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1067017e jne 0x10670156 */
  if (!C.zf) goto L_10670156;
  /* 10670180 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670183 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10670186 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1067018c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1067018e je 0x106701dd */
  if (C.zf) goto L_106701dd;
  /* 10670190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670193 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10670196 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10670199 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1067019b je 0x106701dd */
  if (C.zf) goto L_106701dd;
  /* 1067019d push 2 */
  push32((uint32_t)(0x2u));
  /* 1067019f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106701a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106701a5 push eax */
  push32((uint32_t)(EAX));
  /* 106701a6 call 0x10663f30 */
  push32(0x106701abu); f_10663f30();
  /* 106701ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106701ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106701b1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106701b4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 106701ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106701bd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106701c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106701c3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 106701c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106701cc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 106701d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106701d6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_106701dd:;
  /* 106701dd pop edi */
  EDI = (pop32());
  /* 106701de pop esi */
  ESI = (pop32());
  /* 106701df pop ebx */
  EBX = (pop32());
  /* 106701e0 pop ebp */
  EBP = (pop32());
  /* 106701e1 ret  */
  ESPCHK(0x10670150u, _esp0);
  ESP += 4; return;
}

