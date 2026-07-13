#include "recomp.h"

/* FUN_10007440 @ 0x12ea7440 (13 bytes, 6 insns) */
void f_12ea7440(void) {
  FTRACE(0x12ea7440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7440 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7441 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7443 call 0x12ea3730 */
  push32(0x12ea7448u); f_12ea3730();
  /* 12ea7448 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea744b pop ebp */
  EBP = (pop32());
  /* 12ea744c ret  */
  ESPCHK(0x12ea7440u, _esp0);
  ESP += 4; return;
}

/* FUN_10007450 @ 0x12ea7450 (187 bytes, 54 insns) */
void f_12ea7450(void) {
  FTRACE(0x12ea7450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7450 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7451 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea7456 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea745d cmp dword ptr [0x12ebf748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7464 jne 0x12ea74c3 */
  if (!C.zf) goto L_12ea74c3;
  /* 12ea7466 push 0x12eba428 */
  push32((uint32_t)(0x12eba428u));
  /* 12ea746b call dword ptr [0x12ec2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2334))), 0x12ea7471u);
  /* 12ea7471 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea7474 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7478 je 0x12ea7497 */
  if (C.zf) goto L_12ea7497;
  /* 12ea747a push 0x12ebb02c */
  push32((uint32_t)(0x12ebb02cu));
  /* 12ea747f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7482 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7483 call dword ptr [0x12ec2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2330))), 0x12ea7489u);
  /* 12ea7489 mov dword ptr [0x12ebf748], eax */
  w32((uint32_t)(0x12ebf748), (EAX));
  /* 12ea748e cmp dword ptr [0x12ebf748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7495 jne 0x12ea749b */
  if (!C.zf) goto L_12ea749b;
L_12ea7497:;
  /* 12ea7497 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7499 jmp 0x12ea7507 */
  goto L_12ea7507;
L_12ea749b:;
  /* 12ea749b push 0x12ebb01c */
  push32((uint32_t)(0x12ebb01cu));
  /* 12ea74a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea74a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea74a4 call dword ptr [0x12ec2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2330))), 0x12ea74aau);
  /* 12ea74aa mov dword ptr [0x12ebf74c], eax */
  w32((uint32_t)(0x12ebf74c), (EAX));
  /* 12ea74af push 0x12ebb008 */
  push32((uint32_t)(0x12ebb008u));
  /* 12ea74b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea74b7 push edx */
  push32((uint32_t)(EDX));
  /* 12ea74b8 call dword ptr [0x12ec2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2330))), 0x12ea74beu);
  /* 12ea74be mov dword ptr [0x12ebf750], eax */
  w32((uint32_t)(0x12ebf750), (EAX));
L_12ea74c3:;
  /* 12ea74c3 cmp dword ptr [0x12ebf74c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf74c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea74ca je 0x12ea74d5 */
  if (C.zf) goto L_12ea74d5;
  /* 12ea74cc call dword ptr [0x12ebf74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf74c))), 0x12ea74d2u);
  /* 12ea74d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea74d5:;
  /* 12ea74d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea74d9 je 0x12ea74f1 */
  if (C.zf) goto L_12ea74f1;
  /* 12ea74db cmp dword ptr [0x12ebf750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea74e2 je 0x12ea74f1 */
  if (C.zf) goto L_12ea74f1;
  /* 12ea74e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea74e7 push eax */
  push32((uint32_t)(EAX));
  /* 12ea74e8 call dword ptr [0x12ebf750] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf750))), 0x12ea74eeu);
  /* 12ea74ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea74f1:;
  /* 12ea74f1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea74f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea74f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea74f8 push edx */
  push32((uint32_t)(EDX));
  /* 12ea74f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea74fc push eax */
  push32((uint32_t)(EAX));
  /* 12ea74fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7500 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7501 call dword ptr [0x12ebf748] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf748))), 0x12ea7507u);
L_12ea7507:;
  /* 12ea7507 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7509 pop ebp */
  EBP = (pop32());
  /* 12ea750a ret  */
  ESPCHK(0x12ea7450u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12ea7510 (254 bytes, 109 insns) */
void f_12ea7510(void) {
  FTRACE(0x12ea7510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7510 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12ea7514 push edi */
  push32((uint32_t)(EDI));
  /* 12ea7515 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea7517 je 0x12ea7593 */
  if (C.zf) goto L_12ea7593;
  /* 12ea7519 push esi */
  push32((uint32_t)(ESI));
  /* 12ea751a push ebx */
  push32((uint32_t)(EBX));
  /* 12ea751b mov ebx, ecx */
  EBX = (ECX);
  /* 12ea751d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12ea7521 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12ea7527 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12ea752b jne 0x12ea7534 */
  if (!C.zf) goto L_12ea7534;
  /* 12ea752d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12ea7530 jne 0x12ea75a1 */
  if (!C.zf) goto L_12ea75a1;
  /* 12ea7532 jmp 0x12ea7555 */
  goto L_12ea7555;
L_12ea7534:;
  /* 12ea7534 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12ea7536 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12ea7537 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12ea7539 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ea753a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12ea753b je 0x12ea7562 */
  if (C.zf) goto L_12ea7562;
  /* 12ea753d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12ea753f je 0x12ea756a */
  if (C.zf) goto L_12ea756a;
  /* 12ea7541 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12ea7547 jne 0x12ea7534 */
  if (!C.zf) goto L_12ea7534;
  /* 12ea7549 mov ebx, ecx */
  EBX = (ECX);
  /* 12ea754b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12ea754e jne 0x12ea75a1 */
  if (!C.zf) goto L_12ea75a1;
L_12ea7550:;
  /* 12ea7550 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12ea7553 je 0x12ea7562 */
  if (C.zf) goto L_12ea7562;
L_12ea7555:;
  /* 12ea7555 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12ea7557 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12ea7558 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12ea755a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ea755b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12ea755d je 0x12ea758e */
  if (C.zf) goto L_12ea758e;
  /* 12ea755f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12ea7560 jne 0x12ea7555 */
  if (!C.zf) goto L_12ea7555;
L_12ea7562:;
  /* 12ea7562 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12ea7566 pop ebx */
  EBX = (pop32());
  /* 12ea7567 pop esi */
  ESI = (pop32());
  /* 12ea7568 pop edi */
  EDI = (pop32());
  /* 12ea7569 ret  */
  ESPCHK(0x12ea7510u, _esp0);
  ESP += 4; return;
L_12ea756a:;
  /* 12ea756a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12ea7570 je 0x12ea7584 */
  if (C.zf) goto L_12ea7584;
L_12ea7572:;
  /* 12ea7572 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12ea7574 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ea7575 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12ea7576 je 0x12ea7606 */
  if (C.zf) goto L_12ea7606;
  /* 12ea757c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12ea7582 jne 0x12ea7572 */
  if (!C.zf) goto L_12ea7572;
L_12ea7584:;
  /* 12ea7584 mov ebx, ecx */
  EBX = (ECX);
  /* 12ea7586 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12ea7589 jne 0x12ea75f7 */
  if (!C.zf) goto L_12ea75f7;
L_12ea758b:;
  /* 12ea758b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12ea758d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12ea758e:;
  /* 12ea758e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12ea758f jne 0x12ea758b */
  if (!C.zf) goto L_12ea758b;
  /* 12ea7591 pop ebx */
  EBX = (pop32());
  /* 12ea7592 pop esi */
  ESI = (pop32());
L_12ea7593:;
  /* 12ea7593 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ea7597 pop edi */
  EDI = (pop32());
  /* 12ea7598 ret  */
  ESPCHK(0x12ea7510u, _esp0);
  ESP += 4; return;
L_12ea7599:;
  /* 12ea7599 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12ea759b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea759e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12ea759f je 0x12ea7550 */
  if (C.zf) goto L_12ea7550;
L_12ea75a1:;
  /* 12ea75a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12ea75a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12ea75a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea75aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea75ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea75af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12ea75b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea75b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12ea75b9 je 0x12ea7599 */
  if (C.zf) goto L_12ea7599;
  /* 12ea75bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12ea75bd je 0x12ea75eb */
  if (C.zf) goto L_12ea75eb;
  /* 12ea75bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12ea75c1 je 0x12ea75e1 */
  if (C.zf) goto L_12ea75e1;
  /* 12ea75c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12ea75c9 je 0x12ea75d7 */
  if (C.zf) goto L_12ea75d7;
  /* 12ea75cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12ea75d1 jne 0x12ea7599 */
  if (!C.zf) goto L_12ea7599;
  /* 12ea75d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12ea75d5 jmp 0x12ea75ef */
  goto L_12ea75ef;
L_12ea75d7:;
  /* 12ea75d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea75dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12ea75df jmp 0x12ea75ef */
  goto L_12ea75ef;
L_12ea75e1:;
  /* 12ea75e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea75e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12ea75e9 jmp 0x12ea75ef */
  goto L_12ea75ef;
L_12ea75eb:;
  /* 12ea75eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea75ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12ea75ef:;
  /* 12ea75ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea75f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea75f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12ea75f5 je 0x12ea7601 */
  if (C.zf) goto L_12ea7601;
L_12ea75f7:;
  /* 12ea75f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea75f9:;
  /* 12ea75f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12ea75fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea75fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12ea75ff jne 0x12ea75f9 */
  if (!C.zf) goto L_12ea75f9;
L_12ea7601:;
  /* 12ea7601 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12ea7604 jne 0x12ea758b */
  if (!C.zf) goto L_12ea758b;
L_12ea7606:;
  /* 12ea7606 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12ea760a pop ebx */
  EBX = (pop32());
  /* 12ea760b pop esi */
  ESI = (pop32());
  /* 12ea760c pop edi */
  EDI = (pop32());
  /* 12ea760d ret  */
  ESPCHK(0x12ea7510u, _esp0);
  ESP += 4; return;
}

/* FUN_10007610 @ 0x12ea7610 (55 bytes, 16 insns) */
void f_12ea7610(void) {
  FTRACE(0x12ea7610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7610 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7611 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7613 mov eax, dword ptr [0x12ebdba4] */
  EAX = (r32((uint32_t)(0x12ebdba4)));
  /* 12ea7618 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7619 call dword ptr [0x12ec235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec235c))), 0x12ea761fu);
  /* 12ea761f mov ecx, dword ptr [0x12ebdb94] */
  ECX = (r32((uint32_t)(0x12ebdb94)));
  /* 12ea7625 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7626 call dword ptr [0x12ec235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec235c))), 0x12ea762cu);
  /* 12ea762c mov edx, dword ptr [0x12ebdb84] */
  EDX = (r32((uint32_t)(0x12ebdb84)));
  /* 12ea7632 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7633 call dword ptr [0x12ec235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec235c))), 0x12ea7639u);
  /* 12ea7639 mov eax, dword ptr [0x12ebdb64] */
  EAX = (r32((uint32_t)(0x12ebdb64)));
  /* 12ea763e push eax */
  push32((uint32_t)(EAX));
  /* 12ea763f call dword ptr [0x12ec235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec235c))), 0x12ea7645u);
  /* 12ea7645 pop ebp */
  EBP = (pop32());
  /* 12ea7646 ret  */
  ESPCHK(0x12ea7610u, _esp0);
  ESP += 4; return;
}

/* FUN_10007650 @ 0x12ea7650 (159 bytes, 47 insns) */
void f_12ea7650(void) {
  FTRACE(0x12ea7650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7650 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7651 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7653 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7654 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea765b jmp 0x12ea7666 */
  goto L_12ea7666;
L_12ea765d:;
  /* 12ea765d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7660 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7663 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea7666:;
  /* 12ea7666 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea766a jge 0x12ea76b9 */
  if ((C.sf==C.of)) goto L_12ea76b9;
  /* 12ea766c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea766f cmp dword ptr [ecx*4 + 0x12ebdb60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12ebdb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7677 je 0x12ea76b7 */
  if (C.zf) goto L_12ea76b7;
  /* 12ea7679 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea767d je 0x12ea76b7 */
  if (C.zf) goto L_12ea76b7;
  /* 12ea767f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7683 je 0x12ea76b7 */
  if (C.zf) goto L_12ea76b7;
  /* 12ea7685 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7689 je 0x12ea76b7 */
  if (C.zf) goto L_12ea76b7;
  /* 12ea768b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea768f je 0x12ea76b7 */
  if (C.zf) goto L_12ea76b7;
  /* 12ea7691 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7694 mov eax, dword ptr [edx*4 + 0x12ebdb60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ebdb60)));
  /* 12ea769b push eax */
  push32((uint32_t)(EAX));
  /* 12ea769c call dword ptr [0x12ec2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2378))), 0x12ea76a2u);
  /* 12ea76a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea76a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea76a7 mov edx, dword ptr [ecx*4 + 0x12ebdb60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebdb60)));
  /* 12ea76ae push edx */
  push32((uint32_t)(EDX));
  /* 12ea76af call 0x12ea4780 */
  push32(0x12ea76b4u); f_12ea4780();
  /* 12ea76b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea76b7:;
  /* 12ea76b7 jmp 0x12ea765d */
  goto L_12ea765d;
L_12ea76b9:;
  /* 12ea76b9 mov eax, dword ptr [0x12ebdb84] */
  EAX = (r32((uint32_t)(0x12ebdb84)));
  /* 12ea76be push eax */
  push32((uint32_t)(EAX));
  /* 12ea76bf call dword ptr [0x12ec2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2378))), 0x12ea76c5u);
  /* 12ea76c5 mov ecx, dword ptr [0x12ebdb94] */
  ECX = (r32((uint32_t)(0x12ebdb94)));
  /* 12ea76cb push ecx */
  push32((uint32_t)(ECX));
  /* 12ea76cc call dword ptr [0x12ec2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2378))), 0x12ea76d2u);
  /* 12ea76d2 mov edx, dword ptr [0x12ebdba4] */
  EDX = (r32((uint32_t)(0x12ebdba4)));
  /* 12ea76d8 push edx */
  push32((uint32_t)(EDX));
  /* 12ea76d9 call dword ptr [0x12ec2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2378))), 0x12ea76dfu);
  /* 12ea76df mov eax, dword ptr [0x12ebdb64] */
  EAX = (r32((uint32_t)(0x12ebdb64)));
  /* 12ea76e4 push eax */
  push32((uint32_t)(EAX));
  /* 12ea76e5 call dword ptr [0x12ec2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2378))), 0x12ea76ebu);
  /* 12ea76eb mov esp, ebp */
  ESP = (EBP);
  /* 12ea76ed pop ebp */
  EBP = (pop32());
  /* 12ea76ee ret  */
  ESPCHK(0x12ea7650u, _esp0);
  ESP += 4; return;
}

/* FUN_100076f0 @ 0x12ea76f0 (151 bytes, 46 insns) */
void f_12ea76f0(void) {
  FTRACE(0x12ea76f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea76f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea76f1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea76f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea76f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea76f7 cmp dword ptr [eax*4 + 0x12ebdb60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12ebdb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea76ff jne 0x12ea7772 */
  if (!C.zf) goto L_12ea7772;
  /* 12ea7701 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12ea7706 push 0x12ebb038 */
  push32((uint32_t)(0x12ebb038u));
  /* 12ea770b push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea770d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12ea770f call 0x12ea3cf0 */
  push32(0x12ea7714u); f_12ea3cf0();
  /* 12ea7714 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7717 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea771a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea771e jne 0x12ea772a */
  if (!C.zf) goto L_12ea772a;
  /* 12ea7720 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12ea7722 call 0x12ea2c60 */
  push32(0x12ea7727u); f_12ea2c60();
  /* 12ea7727 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea772a:;
  /* 12ea772a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12ea772c call 0x12ea76f0 */
  push32(0x12ea7731u); f_12ea76f0();
  /* 12ea7731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7734 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7737 cmp dword ptr [ecx*4 + 0x12ebdb60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12ebdb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea773f jne 0x12ea775a */
  if (!C.zf) goto L_12ea775a;
  /* 12ea7741 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7744 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7745 call dword ptr [0x12ec235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec235c))), 0x12ea774bu);
  /* 12ea774b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea774e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7751 mov dword ptr [eax*4 + 0x12ebdb60], ecx */
  w32((uint32_t)(EAX*4 + 0x12ebdb60), (ECX));
  /* 12ea7758 jmp 0x12ea7768 */
  goto L_12ea7768;
L_12ea775a:;
  /* 12ea775a push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea775c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea775f push edx */
  push32((uint32_t)(EDX));
  /* 12ea7760 call 0x12ea4780 */
  push32(0x12ea7765u); f_12ea4780();
  /* 12ea7765 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea7768:;
  /* 12ea7768 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12ea776a call 0x12ea7790 */
  push32(0x12ea776fu); f_12ea7790();
  /* 12ea776f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea7772:;
  /* 12ea7772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7775 mov ecx, dword ptr [eax*4 + 0x12ebdb60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ebdb60)));
  /* 12ea777c push ecx */
  push32((uint32_t)(ECX));
  /* 12ea777d call dword ptr [0x12ec2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2310))), 0x12ea7783u);
  /* 12ea7783 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7785 pop ebp */
  EBP = (pop32());
  /* 12ea7786 ret  */
  ESPCHK(0x12ea76f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007790 @ 0x12ea7790 (22 bytes, 8 insns) */
void f_12ea7790(void) {
  FTRACE(0x12ea7790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7790 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7791 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7796 mov ecx, dword ptr [eax*4 + 0x12ebdb60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ebdb60)));
  /* 12ea779d push ecx */
  push32((uint32_t)(ECX));
  /* 12ea779e call dword ptr [0x12ec230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec230c))), 0x12ea77a4u);
  /* 12ea77a4 pop ebp */
  EBP = (pop32());
  /* 12ea77a5 ret  */
  ESPCHK(0x12ea7790u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x12ea77b0 (26 bytes, 10 insns) */
void f_12ea77b0(void) {
  FTRACE(0x12ea77b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea77b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea77b1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea77b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea77b6 push eax */
  push32((uint32_t)(EAX));
  /* 12ea77b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea77b9 call dword ptr [0x12ec2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2308))), 0x12ea77bfu);
  /* 12ea77bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12ea77c4 call dword ptr [0x12ec2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2340))), 0x12ea77cau);
  /* 12ea77ca pop ebp */
  EBP = (pop32());
  /* 12ea77cb ret  */
  ESPCHK(0x12ea77b0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12ea77d0 (446 bytes, 130 insns) */
void f_12ea77d0(void) {
  FTRACE(0x12ea77d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea77d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea77d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea77d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea77d6 call 0x12ea3730 */
  push32(0x12ea77dbu); f_12ea3730();
  /* 12ea77db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea77de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea77e1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12ea77e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea77e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea77e8 push edx */
  push32((uint32_t)(EDX));
  /* 12ea77e9 call 0x12ea7990 */
  push32(0x12ea77eeu); f_12ea7990();
  /* 12ea77ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea77f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ea77f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea77f8 je 0x12ea7803 */
  if (C.zf) goto L_12ea7803;
  /* 12ea77fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea77fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7801 jne 0x12ea7812 */
  if (!C.zf) goto L_12ea7812;
L_12ea7803:;
  /* 12ea7803 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7806 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7807 call dword ptr [0x12ec2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2304))), 0x12ea780du);
  /* 12ea780d jmp 0x12ea798a */
  goto L_12ea798a;
L_12ea7812:;
  /* 12ea7812 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea7815 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7819 jne 0x12ea782f */
  if (!C.zf) goto L_12ea782f;
  /* 12ea781b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea781e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12ea7825 mov eax, 1 */
  EAX = (0x1u);
  /* 12ea782a jmp 0x12ea798a */
  goto L_12ea798a;
L_12ea782f:;
  /* 12ea782f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea7832 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7836 jne 0x12ea7840 */
  if (!C.zf) goto L_12ea7840;
  /* 12ea7838 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea783b jmp 0x12ea798a */
  goto L_12ea798a;
L_12ea7840:;
  /* 12ea7840 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea7843 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12ea7846 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea7849 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea784c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12ea784f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12ea7852 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7855 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7858 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12ea785b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea785e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7862 jne 0x12ea7967 */
  if (!C.zf) goto L_12ea7967;
  /* 12ea7868 mov eax, dword ptr [0x12ebdc98] */
  EAX = (r32((uint32_t)(0x12ebdc98)));
  /* 12ea786d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ea7870 jmp 0x12ea787b */
  goto L_12ea787b;
L_12ea7872:;
  /* 12ea7872 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea7875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7878 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12ea787b:;
  /* 12ea787b mov edx, dword ptr [0x12ebdc98] */
  EDX = (r32((uint32_t)(0x12ebdc98)));
  /* 12ea7881 add edx, dword ptr [0x12ebdc9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ebdc9c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7887 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea788a jge 0x12ea78a2 */
  if ((C.sf==C.of)) goto L_12ea78a2;
  /* 12ea788c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea788f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea7892 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7895 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12ea7898 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12ea78a0 jmp 0x12ea7872 */
  goto L_12ea7872;
L_12ea78a2:;
  /* 12ea78a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea78a5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12ea78a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ea78ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea78ae cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea78b4 jne 0x12ea78c5 */
  if (!C.zf) goto L_12ea78c5;
  /* 12ea78b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea78b9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12ea78c0 jmp 0x12ea794d */
  goto L_12ea794d;
L_12ea78c5:;
  /* 12ea78c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea78c8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea78ce jne 0x12ea78dc */
  if (!C.zf) goto L_12ea78dc;
  /* 12ea78d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea78d3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12ea78da jmp 0x12ea794d */
  goto L_12ea794d;
L_12ea78dc:;
  /* 12ea78dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea78df cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea78e5 jne 0x12ea78f3 */
  if (!C.zf) goto L_12ea78f3;
  /* 12ea78e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea78ea mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12ea78f1 jmp 0x12ea794d */
  goto L_12ea794d;
L_12ea78f3:;
  /* 12ea78f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea78f6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea78fc jne 0x12ea790a */
  if (!C.zf) goto L_12ea790a;
  /* 12ea78fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7901 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12ea7908 jmp 0x12ea794d */
  goto L_12ea794d;
L_12ea790a:;
  /* 12ea790a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea790d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7913 jne 0x12ea7921 */
  if (!C.zf) goto L_12ea7921;
  /* 12ea7915 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7918 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12ea791f jmp 0x12ea794d */
  goto L_12ea794d;
L_12ea7921:;
  /* 12ea7921 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea7924 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea792a jne 0x12ea7938 */
  if (!C.zf) goto L_12ea7938;
  /* 12ea792c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea792f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12ea7936 jmp 0x12ea794d */
  goto L_12ea794d;
L_12ea7938:;
  /* 12ea7938 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea793b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7941 jne 0x12ea794d */
  if (!C.zf) goto L_12ea794d;
  /* 12ea7943 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7946 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12ea794d:;
  /* 12ea794d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7950 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12ea7953 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7954 push 8 */
  push32((uint32_t)(0x8u));
  /* 12ea7956 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12ea7959u);
  /* 12ea7959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea795c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea795f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea7962 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12ea7965 jmp 0x12ea797e */
  goto L_12ea797e;
L_12ea7967:;
  /* 12ea7967 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea796a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12ea7971 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea7974 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea7977 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7978 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12ea797bu);
  /* 12ea797b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea797e:;
  /* 12ea797e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7981 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea7984 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12ea7987 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12ea798a:;
  /* 12ea798a mov esp, ebp */
  ESP = (EBP);
  /* 12ea798c pop ebp */
  EBP = (pop32());
  /* 12ea798d ret  */
  ESPCHK(0x12ea77d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007990 @ 0x12ea7990 (89 bytes, 35 insns) */
void f_12ea7990(void) {
  FTRACE(0x12ea7990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7990 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7991 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7993 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7994 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7997 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea799a:;
  /* 12ea799a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea799d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea799f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea79a2 je 0x12ea79c2 */
  if (C.zf) goto L_12ea79c2;
  /* 12ea79a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea79a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea79aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea79ad mov ecx, dword ptr [0x12ebdca4] */
  ECX = (r32((uint32_t)(0x12ebdca4)));
  /* 12ea79b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea79b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea79b9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea79bb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea79be jae 0x12ea79c2 */
  if (!C.cf) goto L_12ea79c2;
  /* 12ea79c0 jmp 0x12ea799a */
  goto L_12ea799a;
L_12ea79c2:;
  /* 12ea79c2 mov eax, dword ptr [0x12ebdca4] */
  EAX = (r32((uint32_t)(0x12ebdca4)));
  /* 12ea79c7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea79ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea79cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea79cf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea79d2 jae 0x12ea79de */
  if (!C.cf) goto L_12ea79de;
  /* 12ea79d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea79d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea79d9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea79dc je 0x12ea79e2 */
  if (C.zf) goto L_12ea79e2;
L_12ea79de:;
  /* 12ea79de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea79e0 jmp 0x12ea79e5 */
  goto L_12ea79e5;
L_12ea79e2:;
  /* 12ea79e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ea79e5:;
  /* 12ea79e5 mov esp, ebp */
  ESP = (EBP);
  /* 12ea79e7 pop ebp */
  EBP = (pop32());
  /* 12ea79e8 ret  */
  ESPCHK(0x12ea7990u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12ea79f0 (48 bytes, 17 insns) */
void f_12ea79f0(void) {
  FTRACE(0x12ea79f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea79f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea79f1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea79f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea79f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea79f6 call 0x12ea76f0 */
  push32(0x12ea79fbu); f_12ea76f0();
  /* 12ea79fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea79fe mov eax, dword ptr [0x12ebf7bc] */
  EAX = (r32((uint32_t)(0x12ebf7bc)));
  /* 12ea7a03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea7a06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7a09 mov dword ptr [0x12ebf7bc], ecx */
  w32((uint32_t)(0x12ebf7bc), (ECX));
  /* 12ea7a0f push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7a11 call 0x12ea7790 */
  push32(0x12ea7a16u); f_12ea7790();
  /* 12ea7a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7a19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7a1c mov esp, ebp */
  ESP = (EBP);
  /* 12ea7a1e pop ebp */
  EBP = (pop32());
  /* 12ea7a1f ret  */
  ESPCHK(0x12ea79f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a20 @ 0x12ea7a20 (10 bytes, 5 insns) */
void f_12ea7a20(void) {
  FTRACE(0x12ea7a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7a21 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7a23 mov eax, dword ptr [0x12ebf7bc] */
  EAX = (r32((uint32_t)(0x12ebf7bc)));
  /* 12ea7a28 pop ebp */
  EBP = (pop32());
  /* 12ea7a29 ret  */
  ESPCHK(0x12ea7a20u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12ea7a30 (45 bytes, 19 insns) */
void f_12ea7a30(void) {
  FTRACE(0x12ea7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7a31 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7a34 mov eax, dword ptr [0x12ebf7bc] */
  EAX = (r32((uint32_t)(0x12ebf7bc)));
  /* 12ea7a39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea7a3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7a40 je 0x12ea7a50 */
  if (C.zf) goto L_12ea7a50;
  /* 12ea7a42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7a45 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7a46 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12ea7a49u);
  /* 12ea7a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea7a4e jne 0x12ea7a54 */
  if (!C.zf) goto L_12ea7a54;
L_12ea7a50:;
  /* 12ea7a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7a52 jmp 0x12ea7a59 */
  goto L_12ea7a59;
L_12ea7a54:;
  /* 12ea7a54 mov eax, 1 */
  EAX = (0x1u);
L_12ea7a59:;
  /* 12ea7a59 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7a5b pop ebp */
  EBP = (pop32());
  /* 12ea7a5c ret  */
  ESPCHK(0x12ea7a30u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12ea7a60 (88 bytes, 40 insns) */
void f_12ea7a60(void) {
  FTRACE(0x12ea7a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7a60 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12ea7a64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12ea7a68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea7a6a je 0x12ea7ab3 */
  if (C.zf) goto L_12ea7ab3;
  /* 12ea7a6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7a6e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12ea7a72 push edi */
  push32((uint32_t)(EDI));
  /* 12ea7a73 mov edi, ecx */
  EDI = (ECX);
  /* 12ea7a75 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7a78 jb 0x12ea7aa7 */
  if (C.cf) goto L_12ea7aa7;
  /* 12ea7a7a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ea7a7c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea7a7f je 0x12ea7a89 */
  if (C.zf) goto L_12ea7a89;
  /* 12ea7a81 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12ea7a83:;
  /* 12ea7a83 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12ea7a85 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ea7a86 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12ea7a87 jne 0x12ea7a83 */
  if (!C.zf) goto L_12ea7a83;
L_12ea7a89:;
  /* 12ea7a89 mov ecx, eax */
  ECX = (EAX);
  /* 12ea7a8b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12ea7a8e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7a90 mov ecx, eax */
  ECX = (EAX);
  /* 12ea7a92 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12ea7a95 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7a97 mov ecx, edx */
  ECX = (EDX);
  /* 12ea7a99 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12ea7a9c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12ea7a9f je 0x12ea7aa7 */
  if (C.zf) goto L_12ea7aa7;
  /* 12ea7aa1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea7aa3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea7aa5 je 0x12ea7aad */
  if (C.zf) goto L_12ea7aad;
L_12ea7aa7:;
  /* 12ea7aa7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12ea7aa9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ea7aaa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12ea7aab jne 0x12ea7aa7 */
  if (!C.zf) goto L_12ea7aa7;
L_12ea7aad:;
  /* 12ea7aad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ea7ab1 pop edi */
  EDI = (pop32());
  /* 12ea7ab2 ret  */
  ESPCHK(0x12ea7a60u, _esp0);
  ESP += 4; return;
L_12ea7ab3:;
  /* 12ea7ab3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12ea7ab7 ret  */
  ESPCHK(0x12ea7a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ac0 @ 0x12ea7ac0 (23 bytes, 10 insns) */
void f_12ea7ac0(void) {
  FTRACE(0x12ea7ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7ac3 mov eax, dword ptr [0x12ebf7b8] */
  EAX = (r32((uint32_t)(0x12ebf7b8)));
  /* 12ea7ac8 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7ac9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7acc push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7acd call 0x12ea7ae0 */
  push32(0x12ea7ad2u); f_12ea7ae0();
  /* 12ea7ad2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7ad5 pop ebp */
  EBP = (pop32());
  /* 12ea7ad6 ret  */
  ESPCHK(0x12ea7ac0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12ea7ae0 (87 bytes, 34 insns) */
void f_12ea7ae0(void) {
  FTRACE(0x12ea7ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7ae4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7ae8 jbe 0x12ea7aee */
  if ((C.cf||C.zf)) goto L_12ea7aee;
  /* 12ea7aea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7aec jmp 0x12ea7b33 */
  goto L_12ea7b33;
L_12ea7aee:;
  /* 12ea7aee cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7af2 ja 0x12ea7b05 */
  if ((!C.cf&&!C.zf)) goto L_12ea7b05;
  /* 12ea7af4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7af7 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7af8 call 0x12ea7b40 */
  push32(0x12ea7afdu); f_12ea7b40();
  /* 12ea7afd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7b00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea7b03 jmp 0x12ea7b0c */
  goto L_12ea7b0c;
L_12ea7b05:;
  /* 12ea7b05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12ea7b0c:;
  /* 12ea7b0c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7b10 jne 0x12ea7b18 */
  if (!C.zf) goto L_12ea7b18;
  /* 12ea7b12 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7b16 jne 0x12ea7b1d */
  if (!C.zf) goto L_12ea7b1d;
L_12ea7b18:;
  /* 12ea7b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7b1b jmp 0x12ea7b33 */
  goto L_12ea7b33;
L_12ea7b1d:;
  /* 12ea7b1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7b20 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7b21 call 0x12ea7a30 */
  push32(0x12ea7b26u); f_12ea7a30();
  /* 12ea7b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea7b2b jne 0x12ea7b31 */
  if (!C.zf) goto L_12ea7b31;
  /* 12ea7b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7b2f jmp 0x12ea7b33 */
  goto L_12ea7b33;
L_12ea7b31:;
  /* 12ea7b31 jmp 0x12ea7aee */
  goto L_12ea7aee;
L_12ea7b33:;
  /* 12ea7b33 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7b35 pop ebp */
  EBP = (pop32());
  /* 12ea7b36 ret  */
  ESPCHK(0x12ea7ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b40 @ 0x12ea7b40 (109 bytes, 37 insns) */
void f_12ea7b40(void) {
  FTRACE(0x12ea7b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7b41 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7b47 cmp eax, dword ptr [0x12ebdcb4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebdcb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7b4d ja 0x12ea7b7d */
  if ((!C.cf&&!C.zf)) goto L_12ea7b7d;
  /* 12ea7b4f push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7b51 call 0x12ea76f0 */
  push32(0x12ea7b56u); f_12ea76f0();
  /* 12ea7b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7b59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7b5c push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7b5d call 0x12ea8680 */
  push32(0x12ea7b62u); f_12ea8680();
  /* 12ea7b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7b65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea7b68 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7b6a call 0x12ea7790 */
  push32(0x12ea7b6fu); f_12ea7790();
  /* 12ea7b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7b72 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7b76 je 0x12ea7b7d */
  if (C.zf) goto L_12ea7b7d;
  /* 12ea7b78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7b7b jmp 0x12ea7ba9 */
  goto L_12ea7ba9;
L_12ea7b7d:;
  /* 12ea7b7d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7b81 jne 0x12ea7b8a */
  if (!C.zf) goto L_12ea7b8a;
  /* 12ea7b83 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12ea7b8a:;
  /* 12ea7b8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7b8d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7b90 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12ea7b93 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ea7b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7b99 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea7b9c mov ecx, dword ptr [0x12ec0f6c] */
  ECX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea7ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7ba3 call dword ptr [0x12ec2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2300))), 0x12ea7ba9u);
L_12ea7ba9:;
  /* 12ea7ba9 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7bab pop ebp */
  EBP = (pop32());
  /* 12ea7bac ret  */
  ESPCHK(0x12ea7b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb0 @ 0x12ea7bb0 (10 bytes, 5 insns) */
void f_12ea7bb0(void) {
  FTRACE(0x12ea7bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7bb3 mov eax, 1 */
  EAX = (0x1u);
  /* 12ea7bb8 pop ebp */
  EBP = (pop32());
  /* 12ea7bb9 ret  */
  ESPCHK(0x12ea7bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bc0 @ 0x12ea7bc0 (173 bytes, 59 insns) */
void f_12ea7bc0(void) {
  FTRACE(0x12ea7bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea7bc6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7bca jbe 0x12ea7bd3 */
  if ((C.cf||C.zf)) goto L_12ea7bd3;
  /* 12ea7bcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7bce jmp 0x12ea7c69 */
  goto L_12ea7c69;
L_12ea7bd3:;
  /* 12ea7bd3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7bd5 call 0x12ea76f0 */
  push32(0x12ea7bdau); f_12ea76f0();
  /* 12ea7bda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7bdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7be0 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7be1 call 0x12ea7ff0 */
  push32(0x12ea7be6u); f_12ea7ff0();
  /* 12ea7be6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7be9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea7bec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7bf0 je 0x12ea7c31 */
  if (C.zf) goto L_12ea7c31;
  /* 12ea7bf2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea7bf9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7bfc cmp ecx, dword ptr [0x12ebdcb4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ebdcb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7c02 ja 0x12ea7c22 */
  if ((!C.cf&&!C.zf)) goto L_12ea7c22;
  /* 12ea7c04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7c07 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7c08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7c0b push eax */
  push32((uint32_t)(EAX));
  /* 12ea7c0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7c0f push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7c10 call 0x12ea8ec0 */
  push32(0x12ea7c15u); f_12ea8ec0();
  /* 12ea7c15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea7c1a je 0x12ea7c22 */
  if (C.zf) goto L_12ea7c22;
  /* 12ea7c1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7c1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12ea7c22:;
  /* 12ea7c22 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7c24 call 0x12ea7790 */
  push32(0x12ea7c29u); f_12ea7790();
  /* 12ea7c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7c2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7c2f jmp 0x12ea7c69 */
  goto L_12ea7c69;
L_12ea7c31:;
  /* 12ea7c31 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7c33 call 0x12ea7790 */
  push32(0x12ea7c38u); f_12ea7790();
  /* 12ea7c38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7c3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7c3f jne 0x12ea7c48 */
  if (!C.zf) goto L_12ea7c48;
  /* 12ea7c41 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12ea7c48:;
  /* 12ea7c48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7c4b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7c4e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12ea7c50 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12ea7c53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7c56 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7c5a push edx */
  push32((uint32_t)(EDX));
  /* 12ea7c5b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12ea7c5d mov eax, dword ptr [0x12ec0f6c] */
  EAX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea7c62 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7c63 call dword ptr [0x12ec22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22fc))), 0x12ea7c69u);
L_12ea7c69:;
  /* 12ea7c69 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7c6b pop ebp */
  EBP = (pop32());
  /* 12ea7c6c ret  */
  ESPCHK(0x12ea7bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x12ea7c70 (490 bytes, 165 insns) */
void f_12ea7c70(void) {
  FTRACE(0x12ea7c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7c71 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7c73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea7c76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7c7a jne 0x12ea7c8d */
  if (!C.zf) goto L_12ea7c8d;
  /* 12ea7c7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7c7f push eax */
  push32((uint32_t)(EAX));
  /* 12ea7c80 call 0x12ea7ac0 */
  push32(0x12ea7c85u); f_12ea7ac0();
  /* 12ea7c85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7c88 jmp 0x12ea7e56 */
  goto L_12ea7e56;
L_12ea7c8d:;
  /* 12ea7c8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7c91 jne 0x12ea7ca6 */
  if (!C.zf) goto L_12ea7ca6;
  /* 12ea7c93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7c96 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7c97 call 0x12ea7e60 */
  push32(0x12ea7c9cu); f_12ea7e60();
  /* 12ea7c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7c9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7ca1 jmp 0x12ea7e56 */
  goto L_12ea7e56;
L_12ea7ca6:;
  /* 12ea7ca6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ea7cad cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7cb1 ja 0x12ea7e29 */
  if ((!C.cf&&!C.zf)) goto L_12ea7e29;
  /* 12ea7cb7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7cb9 call 0x12ea76f0 */
  push32(0x12ea7cbeu); f_12ea76f0();
  /* 12ea7cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7cc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7cc4 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7cc5 call 0x12ea7ff0 */
  push32(0x12ea7ccau); f_12ea7ff0();
  /* 12ea7cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7ccd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea7cd0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7cd4 je 0x12ea7dec */
  if (C.zf) goto L_12ea7dec;
  /* 12ea7cda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7cdd cmp eax, dword ptr [0x12ebdcb4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebdcb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7ce3 ja 0x12ea7d60 */
  if ((!C.cf&&!C.zf)) goto L_12ea7d60;
  /* 12ea7ce5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7cec push edx */
  push32((uint32_t)(EDX));
  /* 12ea7ced mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea7cf0 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7cf1 call 0x12ea8ec0 */
  push32(0x12ea7cf6u); f_12ea8ec0();
  /* 12ea7cf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea7cfb je 0x12ea7d05 */
  if (C.zf) goto L_12ea7d05;
  /* 12ea7cfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7d00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ea7d03 jmp 0x12ea7d60 */
  goto L_12ea7d60;
L_12ea7d05:;
  /* 12ea7d05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7d08 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7d09 call 0x12ea8680 */
  push32(0x12ea7d0eu); f_12ea8680();
  /* 12ea7d0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7d11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea7d14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7d18 je 0x12ea7d60 */
  if (C.zf) goto L_12ea7d60;
  /* 12ea7d1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7d1d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12ea7d20 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea7d23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea7d26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7d29 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7d2c jae 0x12ea7d36 */
  if (!C.cf) goto L_12ea7d36;
  /* 12ea7d2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7d31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ea7d34 jmp 0x12ea7d3c */
  goto L_12ea7d3c;
L_12ea7d36:;
  /* 12ea7d36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7d39 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12ea7d3c:;
  /* 12ea7d3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea7d3f push edx */
  push32((uint32_t)(EDX));
  /* 12ea7d40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7d43 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7d44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7d47 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7d48 call 0x12eaa5d0 */
  push32(0x12ea7d4du); f_12eaa5d0();
  /* 12ea7d4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7d50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7d53 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7d54 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea7d57 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7d58 call 0x12ea80b0 */
  push32(0x12ea7d5du); f_12ea80b0();
  /* 12ea7d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea7d60:;
  /* 12ea7d60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7d64 jne 0x12ea7de0 */
  if (!C.zf) goto L_12ea7de0;
  /* 12ea7d66 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7d6a jne 0x12ea7d73 */
  if (!C.zf) goto L_12ea7d73;
  /* 12ea7d6c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12ea7d73:;
  /* 12ea7d73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7d76 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7d79 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea7d7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12ea7d7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7d82 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea7d85 mov eax, dword ptr [0x12ec0f6c] */
  EAX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea7d8a push eax */
  push32((uint32_t)(EAX));
  /* 12ea7d8b call dword ptr [0x12ec2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2300))), 0x12ea7d91u);
  /* 12ea7d91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea7d94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7d98 je 0x12ea7de0 */
  if (C.zf) goto L_12ea7de0;
  /* 12ea7d9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7d9d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12ea7da0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea7da3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea7da6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7da9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7dac jae 0x12ea7db6 */
  if (!C.cf) goto L_12ea7db6;
  /* 12ea7dae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7db1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ea7db4 jmp 0x12ea7dbc */
  goto L_12ea7dbc;
L_12ea7db6:;
  /* 12ea7db6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7db9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12ea7dbc:;
  /* 12ea7dbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea7dbf push eax */
  push32((uint32_t)(EAX));
  /* 12ea7dc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7dc4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7dc7 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7dc8 call 0x12eaa5d0 */
  push32(0x12ea7dcdu); f_12eaa5d0();
  /* 12ea7dcd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7dd3 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7dd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea7dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7dd8 call 0x12ea80b0 */
  push32(0x12ea7dddu); f_12ea80b0();
  /* 12ea7ddd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea7de0:;
  /* 12ea7de0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7de2 call 0x12ea7790 */
  push32(0x12ea7de7u); f_12ea7790();
  /* 12ea7de7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7dea jmp 0x12ea7e29 */
  goto L_12ea7e29;
L_12ea7dec:;
  /* 12ea7dec push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7dee call 0x12ea7790 */
  push32(0x12ea7df3u); f_12ea7790();
  /* 12ea7df3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7df6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7dfa jne 0x12ea7e03 */
  if (!C.zf) goto L_12ea7e03;
  /* 12ea7dfc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12ea7e03:;
  /* 12ea7e03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7e06 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7e09 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12ea7e0c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12ea7e0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7e12 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7e13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7e16 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea7e19 mov edx, dword ptr [0x12ec0f6c] */
  EDX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea7e1f push edx */
  push32((uint32_t)(EDX));
  /* 12ea7e20 call dword ptr [0x12ec22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22fc))), 0x12ea7e26u);
  /* 12ea7e26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ea7e29:;
  /* 12ea7e29 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7e2d jne 0x12ea7e38 */
  if (!C.zf) goto L_12ea7e38;
  /* 12ea7e2f cmp dword ptr [0x12ebf7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7e36 jne 0x12ea7e3d */
  if (!C.zf) goto L_12ea7e3d;
L_12ea7e38:;
  /* 12ea7e38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7e3b jmp 0x12ea7e56 */
  goto L_12ea7e56;
L_12ea7e3d:;
  /* 12ea7e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea7e40 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7e41 call 0x12ea7a30 */
  push32(0x12ea7e46u); f_12ea7a30();
  /* 12ea7e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7e49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea7e4b jne 0x12ea7e51 */
  if (!C.zf) goto L_12ea7e51;
  /* 12ea7e4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7e4f jmp 0x12ea7e56 */
  goto L_12ea7e56;
L_12ea7e51:;
  /* 12ea7e51 jmp 0x12ea7ca6 */
  goto L_12ea7ca6;
L_12ea7e56:;
  /* 12ea7e56 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7e58 pop ebp */
  EBP = (pop32());
  /* 12ea7e59 ret  */
  ESPCHK(0x12ea7c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x12ea7e60 (104 bytes, 38 insns) */
void f_12ea7e60(void) {
  FTRACE(0x12ea7e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7e61 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7e64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7e68 jne 0x12ea7e6c */
  if (!C.zf) goto L_12ea7e6c;
  /* 12ea7e6a jmp 0x12ea7ec4 */
  goto L_12ea7ec4;
L_12ea7e6c:;
  /* 12ea7e6c push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7e6e call 0x12ea76f0 */
  push32(0x12ea7e73u); f_12ea76f0();
  /* 12ea7e73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7e79 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7e7a call 0x12ea7ff0 */
  push32(0x12ea7e7fu); f_12ea7ff0();
  /* 12ea7e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7e82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea7e85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7e89 je 0x12ea7ea7 */
  if (C.zf) goto L_12ea7ea7;
  /* 12ea7e8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7e8e push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7e8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7e92 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7e93 call 0x12ea80b0 */
  push32(0x12ea7e98u); f_12ea80b0();
  /* 12ea7e98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7e9b push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7e9d call 0x12ea7790 */
  push32(0x12ea7ea2u); f_12ea7790();
  /* 12ea7ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7ea5 jmp 0x12ea7ec4 */
  goto L_12ea7ec4;
L_12ea7ea7:;
  /* 12ea7ea7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7ea9 call 0x12ea7790 */
  push32(0x12ea7eaeu); f_12ea7790();
  /* 12ea7eae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7eb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7eb4 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea7eb7 mov ecx, dword ptr [0x12ec0f6c] */
  ECX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea7ebd push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7ebe call dword ptr [0x12ec23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a0))), 0x12ea7ec4u);
L_12ea7ec4:;
  /* 12ea7ec4 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7ec6 pop ebp */
  EBP = (pop32());
  /* 12ea7ec7 ret  */
  ESPCHK(0x12ea7e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed0 @ 0x12ea7ed0 (116 bytes, 34 insns) */
void f_12ea7ed0(void) {
  FTRACE(0x12ea7ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea7ed4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12ea7edb push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7edd call 0x12ea76f0 */
  push32(0x12ea7ee2u); f_12ea76f0();
  /* 12ea7ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7ee5 call 0x12ea95e0 */
  push32(0x12ea7eeau); f_12ea95e0();
  /* 12ea7eea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea7eec jge 0x12ea7ef5 */
  if ((C.sf==C.of)) goto L_12ea7ef5;
  /* 12ea7eee mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12ea7ef5:;
  /* 12ea7ef5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea7ef7 call 0x12ea7790 */
  push32(0x12ea7efcu); f_12ea7790();
  /* 12ea7efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7eff push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea7f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea7f03 mov eax, dword ptr [0x12ec0f6c] */
  EAX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea7f08 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7f09 call dword ptr [0x12ec2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2384))), 0x12ea7f0fu);
  /* 12ea7f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea7f11 jne 0x12ea7f3d */
  if (!C.zf) goto L_12ea7f3d;
  /* 12ea7f13 call dword ptr [0x12ec2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2364))), 0x12ea7f19u);
  /* 12ea7f19 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7f1c jne 0x12ea7f36 */
  if (!C.zf) goto L_12ea7f36;
  /* 12ea7f1e call 0x12eabbd0 */
  push32(0x12ea7f23u); f_12eabbd0();
  /* 12ea7f23 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12ea7f29 call 0x12eabbc0 */
  push32(0x12ea7f2eu); f_12eabbc0();
  /* 12ea7f2e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12ea7f34 jmp 0x12ea7f3d */
  goto L_12ea7f3d;
L_12ea7f36:;
  /* 12ea7f36 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12ea7f3d:;
  /* 12ea7f3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7f40 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7f42 pop ebp */
  EBP = (pop32());
  /* 12ea7f43 ret  */
  ESPCHK(0x12ea7ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f50 @ 0x12ea7f50 (10 bytes, 5 insns) */
void f_12ea7f50(void) {
  FTRACE(0x12ea7f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7f51 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7f53 call 0x12ea7ed0 */
  push32(0x12ea7f58u); f_12ea7ed0();
  /* 12ea7f58 pop ebp */
  EBP = (pop32());
  /* 12ea7f59 ret  */
  ESPCHK(0x12ea7f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f60 @ 0x12ea7f60 (10 bytes, 5 insns) */
void f_12ea7f60(void) {
  FTRACE(0x12ea7f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7f61 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7f63 mov eax, dword ptr [0x12ebdcb4] */
  EAX = (r32((uint32_t)(0x12ebdcb4)));
  /* 12ea7f68 pop ebp */
  EBP = (pop32());
  /* 12ea7f69 ret  */
  ESPCHK(0x12ea7f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f70 @ 0x12ea7f70 (31 bytes, 11 insns) */
void f_12ea7f70(void) {
  FTRACE(0x12ea7f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7f71 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7f73 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7f7a jbe 0x12ea7f80 */
  if ((C.cf||C.zf)) goto L_12ea7f80;
  /* 12ea7f7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7f7e jmp 0x12ea7f8d */
  goto L_12ea7f8d;
L_12ea7f80:;
  /* 12ea7f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7f83 mov dword ptr [0x12ebdcb4], eax */
  w32((uint32_t)(0x12ebdcb4), (EAX));
  /* 12ea7f88 mov eax, 1 */
  EAX = (0x1u);
L_12ea7f8d:;
  /* 12ea7f8d pop ebp */
  EBP = (pop32());
  /* 12ea7f8e ret  */
  ESPCHK(0x12ea7f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f90 @ 0x12ea7f90 (89 bytes, 20 insns) */
void f_12ea7f90(void) {
  FTRACE(0x12ea7f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7f91 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7f93 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12ea7f98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea7f9a mov eax, dword ptr [0x12ec0f6c] */
  EAX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea7f9f push eax */
  push32((uint32_t)(EAX));
  /* 12ea7fa0 call dword ptr [0x12ec2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2300))), 0x12ea7fa6u);
  /* 12ea7fa6 mov dword ptr [0x12ec0f68], eax */
  w32((uint32_t)(0x12ec0f68), (EAX));
  /* 12ea7fab cmp dword ptr [0x12ec0f68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec0f68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7fb2 jne 0x12ea7fb8 */
  if (!C.zf) goto L_12ea7fb8;
  /* 12ea7fb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7fb6 jmp 0x12ea7fe7 */
  goto L_12ea7fe7;
L_12ea7fb8:;
  /* 12ea7fb8 mov ecx, dword ptr [0x12ec0f68] */
  ECX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea7fbe mov dword ptr [0x12ec0f5c], ecx */
  w32((uint32_t)(0x12ec0f5c), (ECX));
  /* 12ea7fc4 mov dword ptr [0x12ec0f60], 0 */
  w32((uint32_t)(0x12ec0f60), (0x0u));
  /* 12ea7fce mov dword ptr [0x12ec0f64], 0 */
  w32((uint32_t)(0x12ec0f64), (0x0u));
  /* 12ea7fd8 mov dword ptr [0x12ec0f48], 0x10 */
  w32((uint32_t)(0x12ec0f48), (0x10u));
  /* 12ea7fe2 mov eax, 1 */
  EAX = (0x1u);
L_12ea7fe7:;
  /* 12ea7fe7 pop ebp */
  EBP = (pop32());
  /* 12ea7fe8 ret  */
  ESPCHK(0x12ea7f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff0 @ 0x12ea7ff0 (85 bytes, 29 insns) */
void f_12ea7ff0(void) {
  FTRACE(0x12ea7ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7ff3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea7ff6 mov eax, dword ptr [0x12ec0f64] */
  EAX = (r32((uint32_t)(0x12ec0f64)));
  /* 12ea7ffb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea7ffe mov ecx, dword ptr [0x12ec0f68] */
  ECX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea8004 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8006 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ea8009 mov edx, dword ptr [0x12ec0f68] */
  EDX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea800f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12ea8012:;
  /* 12ea8012 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea8015 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8018 jae 0x12ea803f */
  if (!C.cf) goto L_12ea803f;
  /* 12ea801a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea801d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8020 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8023 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea8026 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea802d jae 0x12ea8034 */
  if (!C.cf) goto L_12ea8034;
  /* 12ea802f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea8032 jmp 0x12ea8041 */
  goto L_12ea8041;
L_12ea8034:;
  /* 12ea8034 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea8037 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea803a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea803d jmp 0x12ea8012 */
  goto L_12ea8012;
L_12ea803f:;
  /* 12ea803f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea8041:;
  /* 12ea8041 mov esp, ebp */
  ESP = (EBP);
  /* 12ea8043 pop ebp */
  EBP = (pop32());
  /* 12ea8044 ret  */
  ESPCHK(0x12ea7ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008050 @ 0x12ea8050 (95 bytes, 33 insns) */
void f_12ea8050(void) {
  FTRACE(0x12ea8050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea8050 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea8051 mov ebp, esp */
  EBP = (ESP);
  /* 12ea8053 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8059 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea805c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea805f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ea8062 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea8065 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12ea8068 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea806b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea8070 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8073 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea8075 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8078 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ea807b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea807d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea807f jne 0x12ea80a1 */
  if (!C.zf) goto L_12ea80a1;
  /* 12ea8081 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea8084 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8087 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea8089 jne 0x12ea80a1 */
  if (!C.zf) goto L_12ea80a1;
  /* 12ea808b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea808e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea8094 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea8096 je 0x12ea80a1 */
  if (C.zf) goto L_12ea80a1;
  /* 12ea8098 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12ea809f jmp 0x12ea80a8 */
  goto L_12ea80a8;
L_12ea80a1:;
  /* 12ea80a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12ea80a8:;
  /* 12ea80a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea80ab mov esp, ebp */
  ESP = (EBP);
  /* 12ea80ad pop ebp */
  EBP = (pop32());
  /* 12ea80ae ret  */
  ESPCHK(0x12ea8050u, _esp0);
  ESP += 4; return;
}

/* FUN_100080b0 @ 0x12ea80b0 (1485 bytes, 453 insns) */
void f_12ea80b0(void) {
  FTRACE(0x12ea80b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea80b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea80b1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea80b3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea80b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea80b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea80bc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12ea80bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea80c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea80c5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea80c8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ea80cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea80ce shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12ea80d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea80d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea80d7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea80dd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea80e0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12ea80e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ea80ea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea80ed sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea80f0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12ea80f3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea80f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea80f8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea80fb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12ea80fe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea8101 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8104 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12ea8107 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea810a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea810c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ea810f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea8112 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12ea8115 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea8118 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea811b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea811e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea8120 jne 0x12ea8248 */
  if (!C.zf) goto L_12ea8248;
  /* 12ea8126 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8129 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12ea812c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea812f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12ea8132 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8136 jbe 0x12ea813f */
  if ((C.cf||C.zf)) goto L_12ea813f;
  /* 12ea8138 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12ea813f:;
  /* 12ea813f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8142 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8145 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea8148 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea814b jne 0x12ea8221 */
  if (!C.zf) goto L_12ea8221;
  /* 12ea8151 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8155 jae 0x12ea81b6 */
  if (!C.cf) goto L_12ea81b6;
  /* 12ea8157 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea815c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea815f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea8161 not eax */
  EAX = (~(EAX));
  /* 12ea8163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8166 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8169 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12ea816d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea816f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8172 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8175 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12ea8179 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea817c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea817f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12ea8182 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea8185 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8188 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea818b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12ea818e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8191 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8194 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12ea8198 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea819a jne 0x12ea81b4 */
  if (!C.zf) goto L_12ea81b4;
  /* 12ea819c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea81a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea81a4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea81a6 not eax */
  EAX = (~(EAX));
  /* 12ea81a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea81ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea81ad and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea81af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea81b2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ea81b4:;
  /* 12ea81b4 jmp 0x12ea8221 */
  goto L_12ea8221;
L_12ea81b6:;
  /* 12ea81b6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea81b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea81bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea81c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea81c3 not edx */
  EDX = (~(EDX));
  /* 12ea81c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea81c8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea81cb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12ea81d2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea81d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea81d7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea81da mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12ea81e1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea81e4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea81e7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea81ea sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea81ed mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea81f0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea81f3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12ea81f6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea81f9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea81fc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12ea8200 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea8202 jne 0x12ea8221 */
  if (!C.zf) goto L_12ea8221;
  /* 12ea8204 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea8207 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea820a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea820f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea8211 not edx */
  EDX = (~(EDX));
  /* 12ea8213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8216 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea8219 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea821b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea821e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12ea8221:;
  /* 12ea8221 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8224 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ea8227 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea822a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea822d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12ea8230 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8233 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea8236 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8239 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ea823c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12ea823f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8242 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8245 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12ea8248:;
  /* 12ea8248 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea824b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12ea824e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8251 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12ea8254 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8258 jbe 0x12ea8261 */
  if ((C.cf||C.zf)) goto L_12ea8261;
  /* 12ea825a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12ea8261:;
  /* 12ea8261 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea8264 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea8267 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea8269 jne 0x12ea83c5 */
  if (!C.zf) goto L_12ea83c5;
  /* 12ea826f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea8272 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8275 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12ea8278 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea827b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12ea827e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8281 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12ea8284 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8288 jbe 0x12ea8291 */
  if ((C.cf||C.zf)) goto L_12ea8291;
  /* 12ea828a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12ea8291:;
  /* 12ea8291 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8294 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8297 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12ea829a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea829d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12ea82a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea82a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12ea82a6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea82aa jbe 0x12ea82b3 */
  if ((C.cf||C.zf)) goto L_12ea82b3;
  /* 12ea82ac mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12ea82b3:;
  /* 12ea82b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea82b6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea82b9 je 0x12ea83bf */
  if (C.zf) goto L_12ea83bf;
  /* 12ea82bf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea82c2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea82c5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea82c8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea82cb jne 0x12ea83a1 */
  if (!C.zf) goto L_12ea83a1;
  /* 12ea82d1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea82d5 jae 0x12ea8336 */
  if (!C.cf) goto L_12ea8336;
  /* 12ea82d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea82dc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea82df shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea82e1 not edx */
  EDX = (~(EDX));
  /* 12ea82e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea82e6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea82e9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12ea82ed and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea82ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea82f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea82f5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12ea82f9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea82fc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea82ff mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea8302 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea8305 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8308 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea830b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12ea830e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8311 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8314 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12ea8318 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea831a jne 0x12ea8334 */
  if (!C.zf) goto L_12ea8334;
  /* 12ea831c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea8321 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8324 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea8326 not edx */
  EDX = (~(EDX));
  /* 12ea8328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea832b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea832d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea832f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8332 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ea8334:;
  /* 12ea8334 jmp 0x12ea83a1 */
  goto L_12ea83a1;
L_12ea8336:;
  /* 12ea8336 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8339 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea833c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea8341 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea8343 not eax */
  EAX = (~(EAX));
  /* 12ea8345 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8348 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea834b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12ea8352 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea8354 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8357 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea835a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12ea8361 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8364 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8367 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12ea836a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea836d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8370 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8373 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12ea8376 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8379 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea837c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12ea8380 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea8382 jne 0x12ea83a1 */
  if (!C.zf) goto L_12ea83a1;
  /* 12ea8384 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8387 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea838a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea838f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea8391 not eax */
  EAX = (~(EAX));
  /* 12ea8393 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8396 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea8399 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea839b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea839e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12ea83a1:;
  /* 12ea83a1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea83a4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ea83a7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea83aa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea83ad mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12ea83b0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea83b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea83b6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea83b9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ea83bc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12ea83bf:;
  /* 12ea83bf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea83c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12ea83c5:;
  /* 12ea83c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea83c8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea83cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea83cd jne 0x12ea83db */
  if (!C.zf) goto L_12ea83db;
  /* 12ea83cf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea83d2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea83d5 je 0x12ea84eb */
  if (C.zf) goto L_12ea84eb;
L_12ea83db:;
  /* 12ea83db mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea83de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea83e1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12ea83e4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12ea83e7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea83ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea83ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea83f0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12ea83f3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea83f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea83f9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12ea83fc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea83ff mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea8402 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12ea8405 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea8408 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea840b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea840e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12ea8411 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea8414 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea8417 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea841a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea841d jne 0x12ea84eb */
  if (!C.zf) goto L_12ea84eb;
  /* 12ea8423 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8427 jae 0x12ea8484 */
  if (!C.cf) goto L_12ea8484;
  /* 12ea8429 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea842c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea842f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12ea8433 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8436 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8439 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea843c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ea843f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8442 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8445 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12ea8448 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea844a jne 0x12ea8462 */
  if (!C.zf) goto L_12ea8462;
  /* 12ea844c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea8451 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea8454 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea8456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8459 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea845b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea845d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8460 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ea8462:;
  /* 12ea8462 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea8467 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea846a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea846c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea846f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8472 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12ea8476 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea8478 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea847b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea847e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12ea8482 jmp 0x12ea84eb */
  goto L_12ea84eb;
L_12ea8484:;
  /* 12ea8484 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8487 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea848a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12ea848e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea8491 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8494 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea8497 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ea849a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea849d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea84a0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12ea84a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea84a5 jne 0x12ea84c2 */
  if (!C.zf) goto L_12ea84c2;
  /* 12ea84a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea84aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea84ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea84b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea84b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea84b7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea84ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea84bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea84bf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12ea84c2:;
  /* 12ea84c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea84c5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea84c8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea84cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea84cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea84d2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea84d5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12ea84dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea84de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea84e1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12ea84e4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12ea84eb:;
  /* 12ea84eb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea84ee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea84f1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12ea84f3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea84f6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea84f9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea84fc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12ea84ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea8502 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea8504 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8507 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea850a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ea850c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea850f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8512 jne 0x12ea8679 */
  if (!C.zf) goto L_12ea8679;
  /* 12ea8518 cmp dword ptr [0x12ec0f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec0f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea851f je 0x12ea8668 */
  if (C.zf) goto L_12ea8668;
  /* 12ea8525 mov eax, dword ptr [0x12ec0f58] */
  EAX = (r32((uint32_t)(0x12ec0f58)));
  /* 12ea852a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12ea852d mov ecx, dword ptr [0x12ec0f60] */
  ECX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea8533 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ea8536 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8538 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12ea853b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12ea8540 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12ea8545 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8548 push eax */
  push32((uint32_t)(EAX));
  /* 12ea8549 call dword ptr [0x12ec23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a4))), 0x12ea854fu);
  /* 12ea854f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea8554 mov ecx, dword ptr [0x12ec0f58] */
  ECX = (r32((uint32_t)(0x12ec0f58)));
  /* 12ea855a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea855c mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea8561 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ea8564 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea8566 mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea856c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12ea856f mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea8574 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea8577 mov edx, dword ptr [0x12ec0f58] */
  EDX = (r32((uint32_t)(0x12ec0f58)));
  /* 12ea857d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12ea8588 mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea858d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea8590 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12ea8593 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea8596 mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea859b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea859e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12ea85a1 mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea85a7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea85aa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12ea85ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea85b0 jne 0x12ea85c6 */
  if (!C.zf) goto L_12ea85c6;
  /* 12ea85b2 mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea85b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea85bb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12ea85bd mov ecx, dword ptr [0x12ec0f60] */
  ECX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea85c3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12ea85c6:;
  /* 12ea85c6 mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea85cc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea85d0 jne 0x12ea8668 */
  if (!C.zf) goto L_12ea8668;
  /* 12ea85d6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12ea85db push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea85dd mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea85e2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12ea85e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea85e6 call dword ptr [0x12ec23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a4))), 0x12ea85ecu);
  /* 12ea85ec mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea85f2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea85f5 push eax */
  push32((uint32_t)(EAX));
  /* 12ea85f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea85f8 mov ecx, dword ptr [0x12ec0f6c] */
  ECX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea85fe push ecx */
  push32((uint32_t)(ECX));
  /* 12ea85ff call dword ptr [0x12ec23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a0))), 0x12ea8605u);
  /* 12ea8605 mov edx, dword ptr [0x12ec0f64] */
  EDX = (r32((uint32_t)(0x12ec0f64)));
  /* 12ea860b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea860e mov eax, dword ptr [0x12ec0f68] */
  EAX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea8613 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8615 mov ecx, dword ptr [0x12ec0f60] */
  ECX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea861b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea861e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8620 push eax */
  push32((uint32_t)(EAX));
  /* 12ea8621 mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea8627 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea862a push edx */
  push32((uint32_t)(EDX));
  /* 12ea862b mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea8630 push eax */
  push32((uint32_t)(EAX));
  /* 12ea8631 call 0x12eabbe0 */
  push32(0x12ea8636u); f_12eabbe0();
  /* 12ea8636 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8639 mov ecx, dword ptr [0x12ec0f64] */
  ECX = (r32((uint32_t)(0x12ec0f64)));
  /* 12ea863f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8642 mov dword ptr [0x12ec0f64], ecx */
  w32((uint32_t)(0x12ec0f64), (ECX));
  /* 12ea8648 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea864b cmp edx, dword ptr [0x12ec0f60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ec0f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8651 jbe 0x12ea865c */
  if ((C.cf||C.zf)) goto L_12ea865c;
  /* 12ea8653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8656 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8659 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12ea865c:;
  /* 12ea865c mov ecx, dword ptr [0x12ec0f68] */
  ECX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea8662 mov dword ptr [0x12ec0f5c], ecx */
  w32((uint32_t)(0x12ec0f5c), (ECX));
L_12ea8668:;
  /* 12ea8668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea866b mov dword ptr [0x12ec0f60], edx */
  w32((uint32_t)(0x12ec0f60), (EDX));
  /* 12ea8671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8674 mov dword ptr [0x12ec0f58], eax */
  w32((uint32_t)(0x12ec0f58), (EAX));
L_12ea8679:;
  /* 12ea8679 mov esp, ebp */
  ESP = (EBP);
  /* 12ea867b pop ebp */
  EBP = (pop32());
  /* 12ea867c ret  */
  ESPCHK(0x12ea80b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008680 @ 0x12ea8680 (1334 bytes, 427 insns) */
void f_12ea8680(void) {
  FTRACE(0x12ea8680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea8680 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea8681 mov ebp, esp */
  EBP = (ESP);
  /* 12ea8683 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8686 push esi */
  push32((uint32_t)(ESI));
  /* 12ea8687 mov eax, dword ptr [0x12ec0f64] */
  EAX = (r32((uint32_t)(0x12ec0f64)));
  /* 12ea868c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea868f mov ecx, dword ptr [0x12ec0f68] */
  ECX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea8695 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8697 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12ea869a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea869d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea86a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12ea86a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12ea86a6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea86a9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12ea86ac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea86af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12ea86b2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea86b6 jge 0x12ea86cc */
  if ((C.sf==C.of)) goto L_12ea86cc;
  /* 12ea86b8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea86bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea86be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea86c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12ea86c3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12ea86ca jmp 0x12ea86e1 */
  goto L_12ea86e1;
L_12ea86cc:;
  /* 12ea86cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12ea86d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea86d6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea86d9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea86dc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea86de mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12ea86e1:;
  /* 12ea86e1 mov ecx, dword ptr [0x12ec0f5c] */
  ECX = (r32((uint32_t)(0x12ec0f5c)));
  /* 12ea86e7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12ea86ea:;
  /* 12ea86ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea86ed cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea86f0 jae 0x12ea8716 */
  if (!C.cf) goto L_12ea8716;
  /* 12ea86f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea86f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea86f8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12ea86fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea86fd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea8700 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8703 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea8705 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea8707 je 0x12ea870b */
  if (C.zf) goto L_12ea870b;
  /* 12ea8709 jmp 0x12ea8716 */
  goto L_12ea8716;
L_12ea870b:;
  /* 12ea870b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea870e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8711 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12ea8714 jmp 0x12ea86ea */
  goto L_12ea86ea;
L_12ea8716:;
  /* 12ea8716 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8719 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea871c jne 0x12ea87fd */
  if (!C.zf) goto L_12ea87fd;
  /* 12ea8722 mov eax, dword ptr [0x12ec0f68] */
  EAX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea8727 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12ea872a:;
  /* 12ea872a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea872d cmp ecx, dword ptr [0x12ec0f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ec0f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8733 jae 0x12ea8759 */
  if (!C.cf) goto L_12ea8759;
  /* 12ea8735 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8738 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea873b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12ea873d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8740 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea8743 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12ea8746 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea874a je 0x12ea874e */
  if (C.zf) goto L_12ea874e;
  /* 12ea874c jmp 0x12ea8759 */
  goto L_12ea8759;
L_12ea874e:;
  /* 12ea874e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8751 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8754 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea8757 jmp 0x12ea872a */
  goto L_12ea872a;
L_12ea8759:;
  /* 12ea8759 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea875c cmp ecx, dword ptr [0x12ec0f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ec0f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8762 jne 0x12ea87fd */
  if (!C.zf) goto L_12ea87fd;
L_12ea8768:;
  /* 12ea8768 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea876b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea876e jae 0x12ea8786 */
  if (!C.cf) goto L_12ea8786;
  /* 12ea8770 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8773 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8777 je 0x12ea877b */
  if (C.zf) goto L_12ea877b;
  /* 12ea8779 jmp 0x12ea8786 */
  goto L_12ea8786;
L_12ea877b:;
  /* 12ea877b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea877e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8781 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12ea8784 jmp 0x12ea8768 */
  goto L_12ea8768;
L_12ea8786:;
  /* 12ea8786 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8789 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea878c jne 0x12ea87d7 */
  if (!C.zf) goto L_12ea87d7;
  /* 12ea878e mov eax, dword ptr [0x12ec0f68] */
  EAX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea8793 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12ea8796:;
  /* 12ea8796 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8799 cmp ecx, dword ptr [0x12ec0f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ec0f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea879f jae 0x12ea87b7 */
  if (!C.cf) goto L_12ea87b7;
  /* 12ea87a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea87a4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea87a8 je 0x12ea87ac */
  if (C.zf) goto L_12ea87ac;
  /* 12ea87aa jmp 0x12ea87b7 */
  goto L_12ea87b7;
L_12ea87ac:;
  /* 12ea87ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea87af add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea87b2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea87b5 jmp 0x12ea8796 */
  goto L_12ea8796;
L_12ea87b7:;
  /* 12ea87b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea87ba cmp ecx, dword ptr [0x12ec0f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ec0f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea87c0 jne 0x12ea87d7 */
  if (!C.zf) goto L_12ea87d7;
  /* 12ea87c2 call 0x12ea8bc0 */
  push32(0x12ea87c7u); f_12ea8bc0();
  /* 12ea87c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea87ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea87ce jne 0x12ea87d7 */
  if (!C.zf) goto L_12ea87d7;
  /* 12ea87d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea87d2 jmp 0x12ea8bb1 */
  goto L_12ea8bb1;
L_12ea87d7:;
  /* 12ea87d7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea87da push edx */
  push32((uint32_t)(EDX));
  /* 12ea87db call 0x12ea8cd0 */
  push32(0x12ea87e0u); f_12ea8cd0();
  /* 12ea87e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea87e3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea87e6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12ea87e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12ea87eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea87ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea87f1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea87f4 jne 0x12ea87fd */
  if (!C.zf) goto L_12ea87fd;
  /* 12ea87f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea87f8 jmp 0x12ea8bb1 */
  goto L_12ea8bb1;
L_12ea87fd:;
  /* 12ea87fd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8800 mov dword ptr [0x12ec0f5c], edx */
  w32((uint32_t)(0x12ec0f5c), (EDX));
  /* 12ea8806 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8809 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea880c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12ea880f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8812 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea8814 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12ea8817 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea881b je 0x12ea8840 */
  if (C.zf) goto L_12ea8840;
  /* 12ea881d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8820 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8823 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea8826 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12ea882a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea882d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8830 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea8833 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12ea883a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12ea883c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea883e jne 0x12ea8875 */
  if (!C.zf) goto L_12ea8875;
L_12ea8840:;
  /* 12ea8840 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12ea8847:;
  /* 12ea8847 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea884a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea884d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea8850 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12ea8854 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8857 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea885a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea885d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12ea8864 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12ea8866 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea8868 jne 0x12ea8875 */
  if (!C.zf) goto L_12ea8875;
  /* 12ea886a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea886d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8870 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12ea8873 jmp 0x12ea8847 */
  goto L_12ea8847;
L_12ea8875:;
  /* 12ea8875 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8878 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea887e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8881 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12ea8888 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea888b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12ea8892 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8895 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8898 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea889b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12ea889f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12ea88a2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea88a6 jne 0x12ea88c2 */
  if (!C.zf) goto L_12ea88c2;
  /* 12ea88a8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12ea88af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea88b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea88b5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea88b8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12ea88bf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12ea88c2:;
  /* 12ea88c2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea88c6 jl 0x12ea88db */
  if ((C.sf!=C.of)) goto L_12ea88db;
  /* 12ea88c8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea88cb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ea88cd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ea88d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea88d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea88d6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12ea88d9 jmp 0x12ea88c2 */
  goto L_12ea88c2;
L_12ea88db:;
  /* 12ea88db mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea88de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea88e1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12ea88e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ea88e8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea88eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea88ed sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea88f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea88f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea88f6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12ea88f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea88fc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ea88ff cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8903 jle 0x12ea890c */
  if ((C.zf||C.sf!=C.of)) goto L_12ea890c;
  /* 12ea8905 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12ea890c:;
  /* 12ea890c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea890f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8912 je 0x12ea8b30 */
  if (C.zf) goto L_12ea8b30;
  /* 12ea8918 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea891b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea891e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea8921 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8924 jne 0x12ea89fa */
  if (!C.zf) goto L_12ea89fa;
  /* 12ea892a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea892e jge 0x12ea898f */
  if ((C.sf==C.of)) goto L_12ea898f;
  /* 12ea8930 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea8935 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea8938 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea893a not eax */
  EAX = (~(EAX));
  /* 12ea893c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea893f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8942 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12ea8946 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea8948 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea894b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea894e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12ea8952 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8955 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8958 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12ea895b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea895e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8961 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8964 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12ea8967 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea896a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea896d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12ea8971 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea8973 jne 0x12ea898d */
  if (!C.zf) goto L_12ea898d;
  /* 12ea8975 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea897a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea897d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea897f not eax */
  EAX = (~(EAX));
  /* 12ea8981 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8984 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea8986 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea8988 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea898b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ea898d:;
  /* 12ea898d jmp 0x12ea89fa */
  goto L_12ea89fa;
L_12ea898f:;
  /* 12ea898f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea8992 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8995 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea899a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea899c not edx */
  EDX = (~(EDX));
  /* 12ea899e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea89a1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea89a4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12ea89ab and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea89ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea89b0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea89b3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12ea89ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea89bd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea89c0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea89c3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea89c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea89c9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea89cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12ea89cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea89d2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea89d5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12ea89d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea89db jne 0x12ea89fa */
  if (!C.zf) goto L_12ea89fa;
  /* 12ea89dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea89e0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea89e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea89e8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea89ea not edx */
  EDX = (~(EDX));
  /* 12ea89ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea89ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea89f2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea89f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea89f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12ea89fa:;
  /* 12ea89fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea89fd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ea8a00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8a03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea8a06 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12ea8a09 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8a0c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea8a0f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8a12 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ea8a15 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12ea8a18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8a1c je 0x12ea8b30 */
  if (C.zf) goto L_12ea8b30;
  /* 12ea8a22 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8a28 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12ea8a2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ea8a2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8a31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea8a34 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea8a37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12ea8a3a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8a3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea8a40 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12ea8a43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea8a46 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8a49 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12ea8a4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8a4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea8a52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8a55 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12ea8a58 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8a5b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8a5e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea8a61 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8a64 jne 0x12ea8b30 */
  if (!C.zf) goto L_12ea8b30;
  /* 12ea8a6a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8a6e jge 0x12ea8aca */
  if ((C.sf==C.of)) goto L_12ea8aca;
  /* 12ea8a70 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8a73 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8a76 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12ea8a7a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8a7d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8a80 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12ea8a83 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ea8a85 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8a88 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8a8b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12ea8a8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea8a90 jne 0x12ea8aa8 */
  if (!C.zf) goto L_12ea8aa8;
  /* 12ea8a92 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea8a97 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8a9a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea8a9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8a9f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea8aa1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea8aa3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8aa6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ea8aa8:;
  /* 12ea8aa8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea8aad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8ab0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea8ab2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8ab5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8ab8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12ea8abc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8abe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8ac1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8ac4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12ea8ac8 jmp 0x12ea8b30 */
  goto L_12ea8b30;
L_12ea8aca:;
  /* 12ea8aca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8acd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8ad0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12ea8ad4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8ad7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8ada mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12ea8add add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ea8adf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8ae2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8ae5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12ea8ae8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea8aea jne 0x12ea8b07 */
  if (!C.zf) goto L_12ea8b07;
  /* 12ea8aec mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8aef sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8af2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea8af7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea8af9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8afc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea8aff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea8b01 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8b04 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12ea8b07:;
  /* 12ea8b07 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8b0a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8b0d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea8b12 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea8b14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8b17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8b1a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12ea8b21 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8b23 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8b26 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8b29 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12ea8b30:;
  /* 12ea8b30 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8b34 je 0x12ea8b4a */
  if (C.zf) goto L_12ea8b4a;
  /* 12ea8b36 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8b39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea8b3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12ea8b3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8b41 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8b44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea8b47 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12ea8b4a:;
  /* 12ea8b4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8b4d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8b50 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ea8b53 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea8b56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8b59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8b5c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ea8b5e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea8b61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8b64 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8b67 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8b6a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12ea8b6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8b70 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea8b72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8b75 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea8b77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8b7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8b7d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12ea8b7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea8b81 jne 0x12ea8ba3 */
  if (!C.zf) goto L_12ea8ba3;
  /* 12ea8b83 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8b86 cmp eax, dword ptr [0x12ec0f60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ec0f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8b8c jne 0x12ea8ba3 */
  if (!C.zf) goto L_12ea8ba3;
  /* 12ea8b8e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8b91 cmp ecx, dword ptr [0x12ec0f58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ec0f58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8b97 jne 0x12ea8ba3 */
  if (!C.zf) goto L_12ea8ba3;
  /* 12ea8b99 mov dword ptr [0x12ec0f60], 0 */
  w32((uint32_t)(0x12ec0f60), (0x0u));
L_12ea8ba3:;
  /* 12ea8ba3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12ea8ba6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8ba9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12ea8bab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8bae add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12ea8bb1:;
  /* 12ea8bb1 pop esi */
  ESI = (pop32());
  /* 12ea8bb2 mov esp, ebp */
  ESP = (EBP);
  /* 12ea8bb4 pop ebp */
  EBP = (pop32());
  /* 12ea8bb5 ret  */
  ESPCHK(0x12ea8680u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bc0 @ 0x12ea8bc0 (271 bytes, 78 insns) */
void f_12ea8bc0(void) {
  FTRACE(0x12ea8bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea8bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea8bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea8bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea8bc4 mov eax, dword ptr [0x12ec0f64] */
  EAX = (r32((uint32_t)(0x12ec0f64)));
  /* 12ea8bc9 cmp eax, dword ptr [0x12ec0f48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ec0f48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8bcf jne 0x12ea8c1b */
  if (!C.zf) goto L_12ea8c1b;
  /* 12ea8bd1 mov ecx, dword ptr [0x12ec0f48] */
  ECX = (r32((uint32_t)(0x12ec0f48)));
  /* 12ea8bd7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8bda imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea8bdd push ecx */
  push32((uint32_t)(ECX));
  /* 12ea8bde mov edx, dword ptr [0x12ec0f68] */
  EDX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea8be4 push edx */
  push32((uint32_t)(EDX));
  /* 12ea8be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea8be7 mov eax, dword ptr [0x12ec0f6c] */
  EAX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea8bec push eax */
  push32((uint32_t)(EAX));
  /* 12ea8bed call dword ptr [0x12ec22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22fc))), 0x12ea8bf3u);
  /* 12ea8bf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea8bf6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8bfa jne 0x12ea8c03 */
  if (!C.zf) goto L_12ea8c03;
  /* 12ea8bfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8bfe jmp 0x12ea8ccb */
  goto L_12ea8ccb;
L_12ea8c03:;
  /* 12ea8c03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8c06 mov dword ptr [0x12ec0f68], ecx */
  w32((uint32_t)(0x12ec0f68), (ECX));
  /* 12ea8c0c mov edx, dword ptr [0x12ec0f48] */
  EDX = (r32((uint32_t)(0x12ec0f48)));
  /* 12ea8c12 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8c15 mov dword ptr [0x12ec0f48], edx */
  w32((uint32_t)(0x12ec0f48), (EDX));
L_12ea8c1b:;
  /* 12ea8c1b mov eax, dword ptr [0x12ec0f64] */
  EAX = (r32((uint32_t)(0x12ec0f64)));
  /* 12ea8c20 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea8c23 mov ecx, dword ptr [0x12ec0f68] */
  ECX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea8c29 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8c2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea8c2e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12ea8c33 push 8 */
  push32((uint32_t)(0x8u));
  /* 12ea8c35 mov edx, dword ptr [0x12ec0f6c] */
  EDX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea8c3b push edx */
  push32((uint32_t)(EDX));
  /* 12ea8c3c call dword ptr [0x12ec2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2300))), 0x12ea8c42u);
  /* 12ea8c42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8c45 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12ea8c48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8c4b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8c4f jne 0x12ea8c55 */
  if (!C.zf) goto L_12ea8c55;
  /* 12ea8c51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8c53 jmp 0x12ea8ccb */
  goto L_12ea8ccb;
L_12ea8c55:;
  /* 12ea8c55 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea8c57 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12ea8c5c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12ea8c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea8c63 call dword ptr [0x12ec22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22f8))), 0x12ea8c69u);
  /* 12ea8c69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8c6c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12ea8c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8c72 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8c76 jne 0x12ea8c92 */
  if (!C.zf) goto L_12ea8c92;
  /* 12ea8c78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8c7b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea8c7e push ecx */
  push32((uint32_t)(ECX));
  /* 12ea8c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea8c81 mov edx, dword ptr [0x12ec0f6c] */
  EDX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea8c87 push edx */
  push32((uint32_t)(EDX));
  /* 12ea8c88 call dword ptr [0x12ec23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a0))), 0x12ea8c8eu);
  /* 12ea8c8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8c90 jmp 0x12ea8ccb */
  goto L_12ea8ccb;
L_12ea8c92:;
  /* 12ea8c92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8c95 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ea8c9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8c9e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12ea8ca5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8ca8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12ea8caf mov eax, dword ptr [0x12ec0f64] */
  EAX = (r32((uint32_t)(0x12ec0f64)));
  /* 12ea8cb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8cb7 mov dword ptr [0x12ec0f64], eax */
  w32((uint32_t)(0x12ec0f64), (EAX));
  /* 12ea8cbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8cbf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12ea8cc2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12ea8cc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ea8ccb:;
  /* 12ea8ccb mov esp, ebp */
  ESP = (EBP);
  /* 12ea8ccd pop ebp */
  EBP = (pop32());
  /* 12ea8cce ret  */
  ESPCHK(0x12ea8bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cd0 @ 0x12ea8cd0 (494 bytes, 149 insns) */
void f_12ea8cd0(void) {
  FTRACE(0x12ea8cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea8cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea8cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea8cd3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8cd9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea8cdc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12ea8cdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8ce2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12ea8ce5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea8ce8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12ea8cef:;
  /* 12ea8cef cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8cf3 jl 0x12ea8d08 */
  if ((C.sf!=C.of)) goto L_12ea8d08;
  /* 12ea8cf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea8cf8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12ea8cfa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ea8cfd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea8d00 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8d03 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12ea8d06 jmp 0x12ea8cef */
  goto L_12ea8cef;
L_12ea8d08:;
  /* 12ea8d08 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea8d0b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea8d11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8d14 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12ea8d1b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ea8d1e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12ea8d25 jmp 0x12ea8d30 */
  goto L_12ea8d30;
L_12ea8d27:;
  /* 12ea8d27 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea8d2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8d2d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12ea8d30:;
  /* 12ea8d30 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8d34 jge 0x12ea8d56 */
  if ((C.sf==C.of)) goto L_12ea8d56;
  /* 12ea8d36 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea8d39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea8d3c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12ea8d3f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea8d42 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8d45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8d48 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12ea8d4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8d4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8d51 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12ea8d54 jmp 0x12ea8d27 */
  goto L_12ea8d27;
L_12ea8d56:;
  /* 12ea8d56 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea8d59 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12ea8d5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8d5f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12ea8d62 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8d64 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ea8d67 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea8d69 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12ea8d6e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12ea8d73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8d76 push edx */
  push32((uint32_t)(EDX));
  /* 12ea8d77 call dword ptr [0x12ec22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22f8))), 0x12ea8d7du);
  /* 12ea8d7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea8d7f jne 0x12ea8d89 */
  if (!C.zf) goto L_12ea8d89;
  /* 12ea8d81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8d84 jmp 0x12ea8eba */
  goto L_12ea8eba;
L_12ea8d89:;
  /* 12ea8d89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8d8c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8d91 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ea8d94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8d97 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea8d9a jmp 0x12ea8da8 */
  goto L_12ea8da8;
L_12ea8d9c:;
  /* 12ea8d9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8d9f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8da5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12ea8da8:;
  /* 12ea8da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8dab cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8dae ja 0x12ea8e0d */
  if ((!C.cf&&!C.zf)) goto L_12ea8e0d;
  /* 12ea8db0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8db3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12ea8dba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8dbd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12ea8dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8dca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8dcd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea8dd0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8dd3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12ea8dd9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8ddc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8de2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8de5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12ea8de8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8deb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8df1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8df4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12ea8df7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8dfa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8dff mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12ea8e02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea8e05 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12ea8e0b jmp 0x12ea8d9c */
  goto L_12ea8d9c;
L_12ea8e0d:;
  /* 12ea8e0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea8e10 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8e16 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ea8e19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8e1c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8e1f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8e22 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12ea8e25 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8e28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea8e2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea8e2e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8e31 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8e34 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12ea8e37 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea8e3a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8e3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8e40 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12ea8e43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8e46 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12ea8e49 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea8e4c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea8e4f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8e52 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12ea8e55 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea8e58 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8e5b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12ea8e63 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea8e66 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8e69 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12ea8e74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8e77 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12ea8e7b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8e7e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12ea8e81 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ea8e84 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8e87 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12ea8e8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea8e8c jne 0x12ea8e9d */
  if (!C.zf) goto L_12ea8e9d;
  /* 12ea8e8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8e91 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea8e94 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12ea8e97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8e9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12ea8e9d:;
  /* 12ea8e9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea8ea2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea8ea5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea8ea7 not edx */
  EDX = (~(EDX));
  /* 12ea8ea9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8eac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ea8eaf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea8eb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8eb4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12ea8eb7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12ea8eba:;
  /* 12ea8eba mov esp, ebp */
  ESP = (EBP);
  /* 12ea8ebc pop ebp */
  EBP = (pop32());
  /* 12ea8ebd ret  */
  ESPCHK(0x12ea8cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ec0 @ 0x12ea8ec0 (1515 bytes, 489 insns) */
void f_12ea8ec0(void) {
  FTRACE(0x12ea8ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea8ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea8ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea8ec3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8ec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea8ec9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8ecc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12ea8ece mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ea8ed1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8ed4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12ea8ed7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12ea8eda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8edd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea8ee0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8ee3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ea8ee6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea8ee9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12ea8eec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea8eef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8ef2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea8ef8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8efb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12ea8f02 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ea8f05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea8f08 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8f0b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ea8f0e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8f11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea8f13 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8f16 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12ea8f19 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea8f1c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8f1f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12ea8f22 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8f25 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea8f27 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12ea8f2a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea8f2d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8f30 jle 0x12ea91e6 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea91e6;
  /* 12ea8f36 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8f39 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea8f3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea8f3e jne 0x12ea8f4b */
  if (!C.zf) goto L_12ea8f4b;
  /* 12ea8f40 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea8f43 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8f46 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8f49 jle 0x12ea8f52 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea8f52;
L_12ea8f4b:;
  /* 12ea8f4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8f4d jmp 0x12ea94a7 */
  goto L_12ea94a7;
L_12ea8f52:;
  /* 12ea8f52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea8f55 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12ea8f58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8f5b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12ea8f5e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8f62 jbe 0x12ea8f6b */
  if ((C.cf||C.zf)) goto L_12ea8f6b;
  /* 12ea8f64 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12ea8f6b:;
  /* 12ea8f6b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8f6e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea8f71 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea8f74 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8f77 jne 0x12ea904d */
  if (!C.zf) goto L_12ea904d;
  /* 12ea8f7d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea8f81 jae 0x12ea8fe2 */
  if (!C.cf) goto L_12ea8fe2;
  /* 12ea8f83 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea8f88 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea8f8b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea8f8d not edx */
  EDX = (~(EDX));
  /* 12ea8f8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8f92 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8f95 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12ea8f99 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea8f9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8f9e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8fa1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12ea8fa5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8fa8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8fab mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea8fae sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea8fb1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8fb4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8fb7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12ea8fba mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8fbd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea8fc0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12ea8fc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea8fc6 jne 0x12ea8fe0 */
  if (!C.zf) goto L_12ea8fe0;
  /* 12ea8fc8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea8fcd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea8fd0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea8fd2 not edx */
  EDX = (~(EDX));
  /* 12ea8fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8fd7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea8fd9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea8fdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea8fde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ea8fe0:;
  /* 12ea8fe0 jmp 0x12ea904d */
  goto L_12ea904d;
L_12ea8fe2:;
  /* 12ea8fe2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea8fe5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea8fe8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea8fed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea8fef not eax */
  EAX = (~(EAX));
  /* 12ea8ff1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea8ff4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea8ff7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12ea8ffe and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9000 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9003 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9006 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12ea900d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9010 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9013 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12ea9016 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea9019 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea901c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea901f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12ea9022 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9025 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9028 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12ea902c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea902e jne 0x12ea904d */
  if (!C.zf) goto L_12ea904d;
  /* 12ea9030 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea9033 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9036 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea903b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea903d not eax */
  EAX = (~(EAX));
  /* 12ea903f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9042 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea9045 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea9047 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea904a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12ea904d:;
  /* 12ea904d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea9050 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ea9053 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea9056 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea9059 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12ea905c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea905f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea9062 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea9065 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ea9068 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12ea906b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea906e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9071 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9074 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ea9077 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea907b jle 0x12ea91c7 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea91c7;
  /* 12ea9081 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea9084 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9087 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12ea908a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea908d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12ea9090 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9093 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12ea9096 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea909a jbe 0x12ea90a3 */
  if ((C.cf||C.zf)) goto L_12ea90a3;
  /* 12ea909c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12ea90a3:;
  /* 12ea90a3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea90a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea90a9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12ea90ac mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12ea90af mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea90b2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea90b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea90b8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12ea90bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea90be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea90c1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12ea90c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea90c7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea90ca mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12ea90cd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea90d0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea90d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea90d6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12ea90d9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea90dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea90df mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea90e2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea90e5 jne 0x12ea91b3 */
  if (!C.zf) goto L_12ea91b3;
  /* 12ea90eb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea90ef jae 0x12ea914c */
  if (!C.cf) goto L_12ea914c;
  /* 12ea90f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea90f4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea90f7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12ea90fb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea90fe add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9101 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea9104 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ea9107 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea910a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea910d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12ea9110 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea9112 jne 0x12ea912a */
  if (!C.zf) goto L_12ea912a;
  /* 12ea9114 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea9119 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea911c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea911e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9121 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea9123 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9128 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ea912a:;
  /* 12ea912a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea912f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea9132 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea9134 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9137 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea913a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12ea913e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9140 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9143 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9146 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12ea914a jmp 0x12ea91b3 */
  goto L_12ea91b3;
L_12ea914c:;
  /* 12ea914c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea914f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9152 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12ea9156 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9159 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea915c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea915f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ea9162 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9165 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9168 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12ea916b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea916d jne 0x12ea918a */
  if (!C.zf) goto L_12ea918a;
  /* 12ea916f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea9172 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9175 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea917a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea917c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea917f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea9182 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9184 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9187 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12ea918a:;
  /* 12ea918a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea918d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9190 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea9195 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea9197 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea919a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea919d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12ea91a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea91a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea91a9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea91ac mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12ea91b3:;
  /* 12ea91b3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea91b6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea91b9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12ea91bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea91be add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea91c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea91c4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12ea91c7:;
  /* 12ea91c7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea91ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea91cd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea91d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ea91d2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea91d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea91d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea91db add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea91de mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12ea91e1 jmp 0x12ea94a2 */
  goto L_12ea94a2;
L_12ea91e6:;
  /* 12ea91e6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea91e9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea91ec jge 0x12ea94a2 */
  if ((C.sf==C.of)) goto L_12ea94a2;
  /* 12ea91f2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea91f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea91f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea91fb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ea91fd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ea9200 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9203 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea9206 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9209 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12ea920c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea920f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9212 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ea9215 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea9218 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea921b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12ea921e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea9221 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12ea9224 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9227 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12ea922a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea922e jbe 0x12ea9237 */
  if ((C.cf||C.zf)) goto L_12ea9237;
  /* 12ea9230 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12ea9237:;
  /* 12ea9237 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea923a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12ea923d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea923f jne 0x12ea9380 */
  if (!C.zf) goto L_12ea9380;
  /* 12ea9245 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea9248 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12ea924b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea924e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12ea9251 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9255 jbe 0x12ea925e */
  if ((C.cf||C.zf)) goto L_12ea925e;
  /* 12ea9257 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12ea925e:;
  /* 12ea925e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea9261 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea9264 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea9267 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea926a jne 0x12ea9340 */
  if (!C.zf) goto L_12ea9340;
  /* 12ea9270 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9274 jae 0x12ea92d5 */
  if (!C.cf) goto L_12ea92d5;
  /* 12ea9276 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea927b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea927e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea9280 not edx */
  EDX = (~(EDX));
  /* 12ea9282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9285 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9288 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12ea928c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea928e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9291 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9294 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12ea9298 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea929b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea929e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea92a1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea92a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea92a7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea92aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12ea92ad mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea92b0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea92b3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12ea92b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea92b9 jne 0x12ea92d3 */
  if (!C.zf) goto L_12ea92d3;
  /* 12ea92bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea92c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea92c3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea92c5 not edx */
  EDX = (~(EDX));
  /* 12ea92c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea92ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea92cc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea92ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea92d1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ea92d3:;
  /* 12ea92d3 jmp 0x12ea9340 */
  goto L_12ea9340;
L_12ea92d5:;
  /* 12ea92d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea92d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea92db mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea92e0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea92e2 not eax */
  EAX = (~(EAX));
  /* 12ea92e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea92e7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea92ea mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12ea92f1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea92f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea92f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea92f9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12ea9300 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9303 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9306 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12ea9309 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea930c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea930f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9312 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12ea9315 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9318 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea931b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12ea931f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea9321 jne 0x12ea9340 */
  if (!C.zf) goto L_12ea9340;
  /* 12ea9323 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea9326 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9329 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea932e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea9330 not eax */
  EAX = (~(EAX));
  /* 12ea9332 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9335 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea9338 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea933a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea933d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12ea9340:;
  /* 12ea9340 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea9343 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ea9346 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea9349 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea934c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12ea934f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea9352 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea9355 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea9358 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ea935b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12ea935e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea9361 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9364 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12ea9367 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea936a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12ea936d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9370 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12ea9373 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9377 jbe 0x12ea9380 */
  if ((C.cf||C.zf)) goto L_12ea9380;
  /* 12ea9379 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12ea9380:;
  /* 12ea9380 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9383 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea9386 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12ea9389 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12ea938c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea938f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea9392 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea9395 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12ea9398 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea939b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea939e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12ea93a1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea93a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea93a7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12ea93aa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea93ad mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea93b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea93b3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12ea93b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea93b9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea93bc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea93bf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea93c2 jne 0x12ea948e */
  if (!C.zf) goto L_12ea948e;
  /* 12ea93c8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea93cc jae 0x12ea9428 */
  if (!C.cf) goto L_12ea9428;
  /* 12ea93ce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea93d1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea93d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12ea93d8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea93db add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea93de mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12ea93e1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ea93e3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea93e6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea93e9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12ea93ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea93ee jne 0x12ea9406 */
  if (!C.zf) goto L_12ea9406;
  /* 12ea93f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea93f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea93f8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea93fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea93fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea93ff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea9401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9404 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ea9406:;
  /* 12ea9406 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea940b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea940e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea9410 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9413 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9416 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12ea941a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea941c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea941f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9422 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12ea9426 jmp 0x12ea948e */
  goto L_12ea948e;
L_12ea9428:;
  /* 12ea9428 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea942b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea942e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12ea9432 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9435 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9438 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12ea943b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ea943d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9440 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9443 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12ea9446 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea9448 jne 0x12ea9465 */
  if (!C.zf) goto L_12ea9465;
  /* 12ea944a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea944d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9450 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12ea9455 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12ea9457 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea945a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea945d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea945f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9462 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12ea9465:;
  /* 12ea9465 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9468 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea946b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea9470 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea9472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9475 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9478 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12ea947f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9481 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9484 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ea9487 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12ea948e:;
  /* 12ea948e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea9491 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea9494 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12ea9496 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea9499 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea949c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea949f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12ea94a2:;
  /* 12ea94a2 mov eax, 1 */
  EAX = (0x1u);
L_12ea94a7:;
  /* 12ea94a7 mov esp, ebp */
  ESP = (EBP);
  /* 12ea94a9 pop ebp */
  EBP = (pop32());
  /* 12ea94aa ret  */
  ESPCHK(0x12ea8ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094b0 @ 0x12ea94b0 (304 bytes, 79 insns) */
void f_12ea94b0(void) {
  FTRACE(0x12ea94b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea94b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea94b1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea94b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea94b4 cmp dword ptr [0x12ec0f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec0f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea94bb je 0x12ea95dc */
  if (C.zf) goto L_12ea95dc;
  /* 12ea94c1 mov eax, dword ptr [0x12ec0f58] */
  EAX = (r32((uint32_t)(0x12ec0f58)));
  /* 12ea94c6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12ea94c9 mov ecx, dword ptr [0x12ec0f60] */
  ECX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea94cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ea94d2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea94d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea94d7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12ea94dc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12ea94e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea94e4 push eax */
  push32((uint32_t)(EAX));
  /* 12ea94e5 call dword ptr [0x12ec23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a4))), 0x12ea94ebu);
  /* 12ea94eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea94f0 mov ecx, dword ptr [0x12ec0f58] */
  ECX = (r32((uint32_t)(0x12ec0f58)));
  /* 12ea94f6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea94f8 mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea94fd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ea9500 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9502 mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea9508 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12ea950b mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea9510 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea9513 mov edx, dword ptr [0x12ec0f58] */
  EDX = (r32((uint32_t)(0x12ec0f58)));
  /* 12ea9519 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12ea9524 mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea9529 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea952c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12ea952f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ea9532 mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea9537 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea953a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12ea953d mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea9543 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea9546 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12ea954a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea954c jne 0x12ea9562 */
  if (!C.zf) goto L_12ea9562;
  /* 12ea954e mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea9554 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea9557 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12ea9559 mov ecx, dword ptr [0x12ec0f60] */
  ECX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea955f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12ea9562:;
  /* 12ea9562 mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea9568 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea956c jne 0x12ea95d2 */
  if (!C.zf) goto L_12ea95d2;
  /* 12ea956e cmp dword ptr [0x12ec0f64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ec0f64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9575 jle 0x12ea95d2 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea95d2;
  /* 12ea9577 mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea957c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea957f push ecx */
  push32((uint32_t)(ECX));
  /* 12ea9580 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea9582 mov edx, dword ptr [0x12ec0f6c] */
  EDX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea9588 push edx */
  push32((uint32_t)(EDX));
  /* 12ea9589 call dword ptr [0x12ec23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a0))), 0x12ea958fu);
  /* 12ea958f mov eax, dword ptr [0x12ec0f64] */
  EAX = (r32((uint32_t)(0x12ec0f64)));
  /* 12ea9594 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea9597 mov ecx, dword ptr [0x12ec0f68] */
  ECX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea959d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea959f mov edx, dword ptr [0x12ec0f60] */
  EDX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea95a5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea95a8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea95aa push ecx */
  push32((uint32_t)(ECX));
  /* 12ea95ab mov eax, dword ptr [0x12ec0f60] */
  EAX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea95b0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea95b3 push eax */
  push32((uint32_t)(EAX));
  /* 12ea95b4 mov ecx, dword ptr [0x12ec0f60] */
  ECX = (r32((uint32_t)(0x12ec0f60)));
  /* 12ea95ba push ecx */
  push32((uint32_t)(ECX));
  /* 12ea95bb call 0x12eabbe0 */
  push32(0x12ea95c0u); f_12eabbe0();
  /* 12ea95c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea95c3 mov edx, dword ptr [0x12ec0f64] */
  EDX = (r32((uint32_t)(0x12ec0f64)));
  /* 12ea95c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea95cc mov dword ptr [0x12ec0f64], edx */
  w32((uint32_t)(0x12ec0f64), (EDX));
L_12ea95d2:;
  /* 12ea95d2 mov dword ptr [0x12ec0f60], 0 */
  w32((uint32_t)(0x12ec0f60), (0x0u));
L_12ea95dc:;
  /* 12ea95dc mov esp, ebp */
  ESP = (EBP);
  /* 12ea95de pop ebp */
  EBP = (pop32());
  /* 12ea95df ret  */
  ESPCHK(0x12ea94b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095e0 @ 0x12ea95e0 (1565 bytes, 343 insns) */
void f_12ea95e0(void) {
  FTRACE(0x12ea95e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea95e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea95e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea95e3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea95e9 mov eax, dword ptr [0x12ec0f64] */
  EAX = (r32((uint32_t)(0x12ec0f64)));
  /* 12ea95ee imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea95f1 push eax */
  push32((uint32_t)(EAX));
  /* 12ea95f2 mov ecx, dword ptr [0x12ec0f68] */
  ECX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea95f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea95f9 call dword ptr [0x12ec237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec237c))), 0x12ea95ffu);
  /* 12ea95ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea9601 je 0x12ea960b */
  if (C.zf) goto L_12ea960b;
  /* 12ea9603 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9606 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea960b:;
  /* 12ea960b mov edx, dword ptr [0x12ec0f68] */
  EDX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea9611 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12ea9617 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12ea9621 jmp 0x12ea9632 */
  goto L_12ea9632;
L_12ea9623:;
  /* 12ea9623 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12ea9629 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea962c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12ea9632:;
  /* 12ea9632 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12ea9638 cmp ecx, dword ptr [0x12ec0f64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ec0f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea963e jge 0x12ea9bf7 */
  if ((C.sf==C.of)) goto L_12ea9bf7;
  /* 12ea9644 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12ea964a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea964d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12ea9653 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12ea9658 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12ea965e push ecx */
  push32((uint32_t)(ECX));
  /* 12ea965f call dword ptr [0x12ec237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec237c))), 0x12ea9665u);
  /* 12ea9665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea9667 je 0x12ea9673 */
  if (C.zf) goto L_12ea9673;
  /* 12ea9669 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12ea966e jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea9673:;
  /* 12ea9673 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12ea9679 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12ea967c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12ea9682 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12ea9688 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea968e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12ea9691 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12ea9697 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12ea969a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea969d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12ea96a7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12ea96b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ea96b8 jmp 0x12ea96c3 */
  goto L_12ea96c3;
L_12ea96ba:;
  /* 12ea96ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea96bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea96c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12ea96c3:;
  /* 12ea96c3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea96c7 jge 0x12ea9bbb */
  if ((C.sf==C.of)) goto L_12ea9bbb;
  /* 12ea96cd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12ea96d7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12ea96e1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12ea96eb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12ea96f5 jmp 0x12ea9706 */
  goto L_12ea9706;
L_12ea96f7:;
  /* 12ea96f7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12ea96fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9700 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12ea9706:;
  /* 12ea9706 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea970d jge 0x12ea9722 */
  if ((C.sf==C.of)) goto L_12ea9722;
  /* 12ea970f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12ea9715 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12ea9720 jmp 0x12ea96f7 */
  goto L_12ea96f7;
L_12ea9722:;
  /* 12ea9722 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9726 jl 0x12ea9b5d */
  if ((C.sf!=C.of)) goto L_12ea9b5d;
  /* 12ea972c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12ea9731 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12ea9737 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea9738 call dword ptr [0x12ec237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec237c))), 0x12ea973eu);
  /* 12ea973e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea9740 je 0x12ea974c */
  if (C.zf) goto L_12ea974c;
  /* 12ea9742 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12ea9747 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea974c:;
  /* 12ea974c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12ea9752 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ea9755 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12ea975f jmp 0x12ea9770 */
  goto L_12ea9770;
L_12ea9761:;
  /* 12ea9761 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12ea9767 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea976a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12ea9770:;
  /* 12ea9770 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9777 jge 0x12ea98f4 */
  if ((C.sf==C.of)) goto L_12ea98f4;
  /* 12ea977d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea9780 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9783 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12ea9789 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12ea978f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9795 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12ea979b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12ea97a1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea97a5 jne 0x12ea97b2 */
  if (!C.zf) goto L_12ea97b2;
  /* 12ea97a7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12ea97ad cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea97b0 je 0x12ea97bc */
  if (C.zf) goto L_12ea97bc;
L_12ea97b2:;
  /* 12ea97b2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12ea97b7 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea97bc:;
  /* 12ea97bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12ea97c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea97c4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12ea97ca mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12ea97d0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12ea97d6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12ea97dc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12ea97df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea97e1 je 0x12ea9819 */
  if (C.zf) goto L_12ea9819;
  /* 12ea97e3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12ea97e9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea97ec mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12ea97f2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea97fc jle 0x12ea9808 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea9808;
  /* 12ea97fe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12ea9803 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea9808:;
  /* 12ea9808 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12ea980e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9811 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12ea9817 jmp 0x12ea985b */
  goto L_12ea985b;
L_12ea9819:;
  /* 12ea9819 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12ea981f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12ea9822 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9825 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12ea982b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9832 jle 0x12ea983e */
  if ((C.zf||C.sf!=C.of)) goto L_12ea983e;
  /* 12ea9834 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12ea983e:;
  /* 12ea983e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12ea9844 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12ea984b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea984e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12ea9854 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12ea985b:;
  /* 12ea985b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9862 jl 0x12ea987d */
  if ((C.sf!=C.of)) goto L_12ea987d;
  /* 12ea9864 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12ea986a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea986d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea986f jne 0x12ea987d */
  if (!C.zf) goto L_12ea987d;
  /* 12ea9871 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea987b jle 0x12ea9887 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea9887;
L_12ea987d:;
  /* 12ea987d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12ea9882 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea9887:;
  /* 12ea9887 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12ea988d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9893 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12ea9896 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea989c je 0x12ea98a8 */
  if (C.zf) goto L_12ea98a8;
  /* 12ea989e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12ea98a3 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea98a8:;
  /* 12ea98a8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12ea98ae add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea98b4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12ea98ba mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12ea98c0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea98c6 jb 0x12ea97bc */
  if (C.cf) goto L_12ea97bc;
  /* 12ea98cc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12ea98d2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea98d8 je 0x12ea98e4 */
  if (C.zf) goto L_12ea98e4;
  /* 12ea98da mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12ea98df jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea98e4:;
  /* 12ea98e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea98e7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea98ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea98ef jmp 0x12ea9761 */
  goto L_12ea9761;
L_12ea98f4:;
  /* 12ea98f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea98f7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea98f9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea98ff je 0x12ea990b */
  if (C.zf) goto L_12ea990b;
  /* 12ea9901 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12ea9906 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea990b:;
  /* 12ea990b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea990e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12ea9914 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12ea991b jmp 0x12ea9926 */
  goto L_12ea9926;
L_12ea991d:;
  /* 12ea991d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea9920 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9923 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12ea9926:;
  /* 12ea9926 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea992a jge 0x12ea9b5d */
  if ((C.sf==C.of)) goto L_12ea9b5d;
  /* 12ea9930 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12ea993a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12ea9940 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12ea9946:;
  /* 12ea9946 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12ea994c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea994f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12ea9955 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12ea995b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9961 je 0x12ea9a8a */
  if (C.zf) goto L_12ea9a8a;
  /* 12ea9967 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea996a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12ea9970 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9977 je 0x12ea9a8a */
  if (C.zf) goto L_12ea9a8a;
  /* 12ea997d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12ea9983 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9989 jb 0x12ea999e */
  if (C.cf) goto L_12ea999e;
  /* 12ea998b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12ea9991 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9996 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea999c jb 0x12ea99a8 */
  if (C.cf) goto L_12ea99a8;
L_12ea999e:;
  /* 12ea999e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12ea99a3 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea99a8:;
  /* 12ea99a8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12ea99ae and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea99b4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12ea99ba mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12ea99c0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea99c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12ea99c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea99c9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea99ce mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12ea99d4:;
  /* 12ea99d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea99d7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea99dd je 0x12ea99fe */
  if (C.zf) goto L_12ea99fe;
  /* 12ea99df mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea99e2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea99e8 jne 0x12ea99ec */
  if (!C.zf) goto L_12ea99ec;
  /* 12ea99ea jmp 0x12ea99fe */
  goto L_12ea99fe;
L_12ea99ec:;
  /* 12ea99ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea99ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea99f1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea99f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea99f7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea99f9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12ea99fc jmp 0x12ea99d4 */
  goto L_12ea99d4;
L_12ea99fe:;
  /* 12ea99fe mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea9a01 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9a07 jne 0x12ea9a13 */
  if (!C.zf) goto L_12ea9a13;
  /* 12ea9a09 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12ea9a0e jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea9a13:;
  /* 12ea9a13 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12ea9a19 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea9a1b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12ea9a1e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9a21 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12ea9a27 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9a2e jle 0x12ea9a3a */
  if ((C.zf||C.sf!=C.of)) goto L_12ea9a3a;
  /* 12ea9a30 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12ea9a3a:;
  /* 12ea9a3a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12ea9a40 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9a43 je 0x12ea9a4f */
  if (C.zf) goto L_12ea9a4f;
  /* 12ea9a45 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12ea9a4a jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea9a4f:;
  /* 12ea9a4f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12ea9a55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ea9a58 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9a5e je 0x12ea9a6a */
  if (C.zf) goto L_12ea9a6a;
  /* 12ea9a60 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12ea9a65 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea9a6a:;
  /* 12ea9a6a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12ea9a70 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12ea9a76 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12ea9a7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9a7f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12ea9a85 jmp 0x12ea9946 */
  goto L_12ea9946;
L_12ea9a8a:;
  /* 12ea9a8a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9a91 je 0x12ea9b01 */
  if (C.zf) goto L_12ea9b01;
  /* 12ea9a93 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9a97 jge 0x12ea9acb */
  if ((C.sf==C.of)) goto L_12ea9acb;
  /* 12ea9a99 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea9a9e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea9aa1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea9aa3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12ea9aa9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9aab mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12ea9ab1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea9ab6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea9ab9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea9abb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12ea9ac1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9ac3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12ea9ac9 jmp 0x12ea9b01 */
  goto L_12ea9b01;
L_12ea9acb:;
  /* 12ea9acb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea9ace sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9ad1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea9ad6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea9ad8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12ea9ade or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9ae0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12ea9ae6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea9ae9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9aec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12ea9af1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12ea9af3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12ea9af9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9afb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12ea9b01:;
  /* 12ea9b01 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12ea9b07 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea9b0a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9b10 jne 0x12ea9b24 */
  if (!C.zf) goto L_12ea9b24;
  /* 12ea9b12 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea9b15 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12ea9b1b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9b22 je 0x12ea9b2e */
  if (C.zf) goto L_12ea9b2e;
L_12ea9b24:;
  /* 12ea9b24 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12ea9b29 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea9b2e:;
  /* 12ea9b2e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12ea9b34 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12ea9b37 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9b3d je 0x12ea9b49 */
  if (C.zf) goto L_12ea9b49;
  /* 12ea9b3f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12ea9b44 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea9b49:;
  /* 12ea9b49 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12ea9b4f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9b52 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12ea9b58 jmp 0x12ea991d */
  goto L_12ea991d;
L_12ea9b5d:;
  /* 12ea9b5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea9b60 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12ea9b66 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12ea9b6c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9b70 jne 0x12ea9b8a */
  if (!C.zf) goto L_12ea9b8a;
  /* 12ea9b72 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea9b75 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12ea9b7b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12ea9b81 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9b88 je 0x12ea9b91 */
  if (C.zf) goto L_12ea9b91;
L_12ea9b8a:;
  /* 12ea9b8a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12ea9b8f jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea9b91:;
  /* 12ea9b91 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12ea9b97 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9b9d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12ea9ba3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea9ba6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9bab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea9bae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9bb1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12ea9bb3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea9bb6 jmp 0x12ea96ba */
  goto L_12ea96ba;
L_12ea9bbb:;
  /* 12ea9bbb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12ea9bc1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12ea9bc7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9bc9 jne 0x12ea9bdc */
  if (!C.zf) goto L_12ea9bdc;
  /* 12ea9bcb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12ea9bd1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12ea9bd7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9bda je 0x12ea9be3 */
  if (C.zf) goto L_12ea9be3;
L_12ea9bdc:;
  /* 12ea9bdc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12ea9be1 jmp 0x12ea9bf9 */
  goto L_12ea9bf9;
L_12ea9be3:;
  /* 12ea9be3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12ea9be9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9bec mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12ea9bf2 jmp 0x12ea9623 */
  goto L_12ea9623;
L_12ea9bf7:;
  /* 12ea9bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea9bf9:;
  /* 12ea9bf9 mov esp, ebp */
  ESP = (EBP);
  /* 12ea9bfb pop ebp */
  EBP = (pop32());
  /* 12ea9bfc ret  */
  ESPCHK(0x12ea95e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c00 @ 0x12ea9c00 (250 bytes, 92 insns) */
void f_12ea9c00(void) {
  FTRACE(0x12ea9c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea9c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea9c01 mov ebp, esp */
  EBP = (ESP);
  /* 12ea9c03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9c06 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea9c07 push esi */
  push32((uint32_t)(ESI));
  /* 12ea9c08 push edi */
  push32((uint32_t)(EDI));
  /* 12ea9c09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12ea9c0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12ea9c0f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12ea9c12 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12ea9c15:;
  /* 12ea9c15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9c19 jne 0x12ea9c39 */
  if (!C.zf) goto L_12ea9c39;
  /* 12ea9c1b push 0x12ebafe0 */
  push32((uint32_t)(0x12ebafe0u));
  /* 12ea9c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea9c22 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12ea9c24 push 0x12ebafd4 */
  push32((uint32_t)(0x12ebafd4u));
  /* 12ea9c29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea9c2b call 0x12ea2db0 */
  push32(0x12ea9c30u); f_12ea2db0();
  /* 12ea9c30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9c33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9c36 jne 0x12ea9c39 */
  if (!C.zf) goto L_12ea9c39;
  /* 12ea9c38 int3  */
  x86_unimpl("int3 @ 0x12ea9c38");
L_12ea9c39:;
  /* 12ea9c39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea9c3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea9c3d jne 0x12ea9c15 */
  if (!C.zf) goto L_12ea9c15;
L_12ea9c3f:;
  /* 12ea9c3f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9c43 jne 0x12ea9c63 */
  if (!C.zf) goto L_12ea9c63;
  /* 12ea9c45 push 0x12ebafc4 */
  push32((uint32_t)(0x12ebafc4u));
  /* 12ea9c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea9c4c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12ea9c4e push 0x12ebafd4 */
  push32((uint32_t)(0x12ebafd4u));
  /* 12ea9c53 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea9c55 call 0x12ea2db0 */
  push32(0x12ea9c5au); f_12ea2db0();
  /* 12ea9c5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9c5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9c60 jne 0x12ea9c63 */
  if (!C.zf) goto L_12ea9c63;
  /* 12ea9c62 int3  */
  x86_unimpl("int3 @ 0x12ea9c62");
L_12ea9c63:;
  /* 12ea9c63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9c65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea9c67 jne 0x12ea9c3f */
  if (!C.zf) goto L_12ea9c3f;
  /* 12ea9c69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9c6c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12ea9c73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9c76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9c79 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12ea9c7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9c7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9c82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12ea9c84 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9c87 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12ea9c8e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea9c91 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea9c92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea9c95 push edx */
  push32((uint32_t)(EDX));
  /* 12ea9c96 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9c99 push eax */
  push32((uint32_t)(EAX));
  /* 12ea9c9a call 0x12eaac80 */
  push32(0x12ea9c9fu); f_12eaac80();
  /* 12ea9c9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9ca2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12ea9ca5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9ca8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea9cab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9cae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9cb1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12ea9cb4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9cb7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9cbb jl 0x12ea9cdf */
  if ((C.sf!=C.of)) goto L_12ea9cdf;
  /* 12ea9cbd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9cc0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea9cc2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12ea9cc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9cc7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9ccd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12ea9cd0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9cd3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea9cd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9cd8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9cdb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ea9cdd jmp 0x12ea9cf0 */
  goto L_12ea9cf0;
L_12ea9cdf:;
  /* 12ea9cdf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9ce2 push edx */
  push32((uint32_t)(EDX));
  /* 12ea9ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea9ce5 call 0x12eaaa00 */
  push32(0x12ea9ceau); f_12eaaa00();
  /* 12ea9cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9ced mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12ea9cf0:;
  /* 12ea9cf0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea9cf3 pop edi */
  EDI = (pop32());
  /* 12ea9cf4 pop esi */
  ESI = (pop32());
  /* 12ea9cf5 pop ebx */
  EBX = (pop32());
  /* 12ea9cf6 mov esp, ebp */
  ESP = (EBP);
  /* 12ea9cf8 pop ebp */
  EBP = (pop32());
  /* 12ea9cf9 ret  */
  ESPCHK(0x12ea9c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d00 @ 0x12ea9d00 (183 bytes, 58 insns) */
void f_12ea9d00(void) {
  FTRACE(0x12ea9d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea9d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea9d01 mov ebp, esp */
  EBP = (ESP);
  /* 12ea9d03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9d09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9d0c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9d11 ja 0x12ea9d2a */
  if ((!C.cf&&!C.zf)) goto L_12ea9d2a;
  /* 12ea9d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9d16 mov edx, dword ptr [0x12ebdcb8] */
  EDX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12ea9d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9d1e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12ea9d22 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9d25 jmp 0x12ea9db3 */
  goto L_12ea9db3;
L_12ea9d2a:;
  /* 12ea9d2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9d2d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12ea9d30 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9d36 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9d3c mov edx, dword ptr [0x12ebdcb8] */
  EDX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12ea9d42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9d44 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12ea9d48 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea9d4f je 0x12ea9d73 */
  if (C.zf) goto L_12ea9d73;
  /* 12ea9d51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9d54 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12ea9d57 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9d5d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12ea9d60 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12ea9d63 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12ea9d66 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12ea9d6a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12ea9d71 jmp 0x12ea9d84 */
  goto L_12ea9d84;
L_12ea9d73:;
  /* 12ea9d73 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12ea9d76 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12ea9d79 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12ea9d7d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12ea9d84:;
  /* 12ea9d84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea9d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea9d88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea9d8a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12ea9d8d push ecx */
  push32((uint32_t)(ECX));
  /* 12ea9d8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea9d91 push edx */
  push32((uint32_t)(EDX));
  /* 12ea9d92 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12ea9d95 push eax */
  push32((uint32_t)(EAX));
  /* 12ea9d96 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea9d98 call 0x12eabf20 */
  push32(0x12ea9d9du); f_12eabf20();
  /* 12ea9d9d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9da0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea9da2 jne 0x12ea9da8 */
  if (!C.zf) goto L_12ea9da8;
  /* 12ea9da4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9da6 jmp 0x12ea9db3 */
  goto L_12ea9db3;
L_12ea9da8:;
  /* 12ea9da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9dab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9db0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12ea9db3:;
  /* 12ea9db3 mov esp, ebp */
  ESP = (EBP);
  /* 12ea9db5 pop ebp */
  EBP = (pop32());
  /* 12ea9db6 ret  */
  ESPCHK(0x12ea9d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009dc0 @ 0x12ea9dc0 (836 bytes, 238 insns) */
void f_12ea9dc0(void) {
  FTRACE(0x12ea9dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea9dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea9dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea9dc3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea9dc6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ea9dc8 call 0x12ea76f0 */
  push32(0x12ea9dcdu); f_12ea76f0();
  /* 12ea9dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9dd3 push eax */
  push32((uint32_t)(EAX));
  /* 12ea9dd4 call 0x12eaa110 */
  push32(0x12ea9dd9u); f_12eaa110();
  /* 12ea9dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9ddc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ea9ddf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9de2 cmp ecx, dword ptr [0x12ec0ca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ec0ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9de8 jne 0x12ea9dfb */
  if (!C.zf) goto L_12ea9dfb;
  /* 12ea9dea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ea9dec call 0x12ea7790 */
  push32(0x12ea9df1u); f_12ea7790();
  /* 12ea9df1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9df4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9df6 jmp 0x12eaa100 */
  goto L_12eaa100;
L_12ea9dfb:;
  /* 12ea9dfb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9dff jne 0x12ea9e1c */
  if (!C.zf) goto L_12ea9e1c;
  /* 12ea9e01 call 0x12eaa1f0 */
  push32(0x12ea9e06u); f_12eaa1f0();
  /* 12ea9e06 call 0x12eaa270 */
  push32(0x12ea9e0bu); f_12eaa270();
  /* 12ea9e0b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ea9e0d call 0x12ea7790 */
  push32(0x12ea9e12u); f_12ea7790();
  /* 12ea9e12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9e15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9e17 jmp 0x12eaa100 */
  goto L_12eaa100;
L_12ea9e1c:;
  /* 12ea9e1c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea9e23 jmp 0x12ea9e2e */
  goto L_12ea9e2e;
L_12ea9e25:;
  /* 12ea9e25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9e28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9e2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12ea9e2e:;
  /* 12ea9e2e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9e32 jae 0x12ea9f7f */
  if (!C.cf) goto L_12ea9f7f;
  /* 12ea9e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9e3b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea9e3e mov ecx, dword ptr [eax + 0x12ebded8] */
  ECX = (r32((uint32_t)(EAX + 0x12ebded8)));
  /* 12ea9e44 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9e47 jne 0x12ea9f7a */
  if (!C.zf) goto L_12ea9f7a;
  /* 12ea9e4d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12ea9e54 jmp 0x12ea9e5f */
  goto L_12ea9e5f;
L_12ea9e56:;
  /* 12ea9e56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9e59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9e5c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12ea9e5f:;
  /* 12ea9e5f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9e66 jae 0x12ea9e74 */
  if (!C.cf) goto L_12ea9e74;
  /* 12ea9e68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9e6b mov byte ptr [eax + 0x12ec0e40], 0 */
  w8((uint32_t)(EAX + 0x12ec0e40), (0x0u));
  /* 12ea9e72 jmp 0x12ea9e56 */
  goto L_12ea9e56;
L_12ea9e74:;
  /* 12ea9e74 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ea9e7b jmp 0x12ea9e86 */
  goto L_12ea9e86;
L_12ea9e7d:;
  /* 12ea9e7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea9e80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9e83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12ea9e86:;
  /* 12ea9e86 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9e8a jae 0x12ea9f07 */
  if (!C.cf) goto L_12ea9f07;
  /* 12ea9e8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9e8f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea9e92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea9e95 lea ecx, [edx + eax*8 + 0x12ebdee8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12ebdee8));
  /* 12ea9e9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ea9e9f jmp 0x12ea9eaa */
  goto L_12ea9eaa;
L_12ea9ea1:;
  /* 12ea9ea1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea9ea4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9ea7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12ea9eaa:;
  /* 12ea9eaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea9ead xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9eaf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ea9eb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea9eb3 je 0x12ea9f02 */
  if (C.zf) goto L_12ea9f02;
  /* 12ea9eb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea9eb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9eba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12ea9ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea9ebf je 0x12ea9f02 */
  if (C.zf) goto L_12ea9f02;
  /* 12ea9ec1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea9ec4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea9ec6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea9ec8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12ea9ecb jmp 0x12ea9ed6 */
  goto L_12ea9ed6;
L_12ea9ecd:;
  /* 12ea9ecd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9ed0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9ed3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12ea9ed6:;
  /* 12ea9ed6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea9ed9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea9edb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12ea9ede cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9ee1 ja 0x12ea9f00 */
  if ((!C.cf&&!C.zf)) goto L_12ea9f00;
  /* 12ea9ee3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9ee6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea9ee9 mov dl, byte ptr [eax + 0x12ec0e41] */
  DL = (r8((uint32_t)(EAX + 0x12ec0e41)));
  /* 12ea9eef or dl, byte ptr [ecx + 0x12ebded0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12ebded0))); DL = (_r); fl_logic(_r,8); }
  /* 12ea9ef5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9ef8 mov byte ptr [eax + 0x12ec0e41], dl */
  w8((uint32_t)(EAX + 0x12ec0e41), (DL));
  /* 12ea9efe jmp 0x12ea9ecd */
  goto L_12ea9ecd;
L_12ea9f00:;
  /* 12ea9f00 jmp 0x12ea9ea1 */
  goto L_12ea9ea1;
L_12ea9f02:;
  /* 12ea9f02 jmp 0x12ea9e7d */
  goto L_12ea9e7d;
L_12ea9f07:;
  /* 12ea9f07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9f0a mov dword ptr [0x12ec0ca4], ecx */
  w32((uint32_t)(0x12ec0ca4), (ECX));
  /* 12ea9f10 mov dword ptr [0x12ec0d2c], 1 */
  w32((uint32_t)(0x12ec0d2c), (0x1u));
  /* 12ea9f1a mov edx, dword ptr [0x12ec0ca4] */
  EDX = (r32((uint32_t)(0x12ec0ca4)));
  /* 12ea9f20 push edx */
  push32((uint32_t)(EDX));
  /* 12ea9f21 call 0x12eaa170 */
  push32(0x12ea9f26u); f_12eaa170();
  /* 12ea9f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9f29 mov dword ptr [0x12ec0f44], eax */
  w32((uint32_t)(0x12ec0f44), (EAX));
  /* 12ea9f2e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ea9f35 jmp 0x12ea9f40 */
  goto L_12ea9f40;
L_12ea9f37:;
  /* 12ea9f37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea9f3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9f3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12ea9f40:;
  /* 12ea9f40 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9f44 jae 0x12ea9f64 */
  if (!C.cf) goto L_12ea9f64;
  /* 12ea9f46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea9f49 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea9f4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea9f4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea9f52 mov cx, word ptr [ecx + eax*2 + 0x12ebdedc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12ebdedc)));
  /* 12ea9f5a mov word ptr [edx*2 + 0x12ec0d20], cx */
  w16((uint32_t)(EDX*2 + 0x12ec0d20), (CX));
  /* 12ea9f62 jmp 0x12ea9f37 */
  goto L_12ea9f37;
L_12ea9f64:;
  /* 12ea9f64 call 0x12eaa270 */
  push32(0x12ea9f69u); f_12eaa270();
  /* 12ea9f69 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ea9f6b call 0x12ea7790 */
  push32(0x12ea9f70u); f_12ea7790();
  /* 12ea9f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9f73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9f75 jmp 0x12eaa100 */
  goto L_12eaa100;
L_12ea9f7a:;
  /* 12ea9f7a jmp 0x12ea9e25 */
  goto L_12ea9e25;
L_12ea9f7f:;
  /* 12ea9f7f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12ea9f82 push edx */
  push32((uint32_t)(EDX));
  /* 12ea9f83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9f86 push eax */
  push32((uint32_t)(EAX));
  /* 12ea9f87 call dword ptr [0x12ec22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22f4))), 0x12ea9f8du);
  /* 12ea9f8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9f90 jne 0x12eaa0d2 */
  if (!C.zf) goto L_12eaa0d2;
  /* 12ea9f96 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12ea9f9d jmp 0x12ea9fa8 */
  goto L_12ea9fa8;
L_12ea9f9f:;
  /* 12ea9f9f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9fa2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9fa5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12ea9fa8:;
  /* 12ea9fa8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9faf jae 0x12ea9fbd */
  if (!C.cf) goto L_12ea9fbd;
  /* 12ea9fb1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea9fb4 mov byte ptr [edx + 0x12ec0e40], 0 */
  w8((uint32_t)(EDX + 0x12ec0e40), (0x0u));
  /* 12ea9fbb jmp 0x12ea9f9f */
  goto L_12ea9f9f;
L_12ea9fbd:;
  /* 12ea9fbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea9fc0 mov dword ptr [0x12ec0ca4], eax */
  w32((uint32_t)(0x12ec0ca4), (EAX));
  /* 12ea9fc5 mov dword ptr [0x12ec0f44], 0 */
  w32((uint32_t)(0x12ec0f44), (0x0u));
  /* 12ea9fcf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea9fd3 jbe 0x12eaa08e */
  if ((C.cf||C.zf)) goto L_12eaa08e;
  /* 12ea9fd9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12ea9fdc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12ea9fdf jmp 0x12ea9fea */
  goto L_12ea9fea;
L_12ea9fe1:;
  /* 12ea9fe1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea9fe4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea9fe7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12ea9fea:;
  /* 12ea9fea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea9fed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea9fef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ea9ff1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea9ff3 je 0x12eaa03c */
  if (C.zf) goto L_12eaa03c;
  /* 12ea9ff5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea9ff8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea9ffa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12ea9ffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea9fff je 0x12eaa03c */
  if (C.zf) goto L_12eaa03c;
  /* 12eaa001 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eaa004 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa006 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eaa008 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12eaa00b jmp 0x12eaa016 */
  goto L_12eaa016;
L_12eaa00d:;
  /* 12eaa00d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eaa010 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa013 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12eaa016:;
  /* 12eaa016 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eaa019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa01b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12eaa01e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa021 ja 0x12eaa03a */
  if ((!C.cf&&!C.zf)) goto L_12eaa03a;
  /* 12eaa023 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eaa026 mov cl, byte ptr [eax + 0x12ec0e41] */
  CL = (r8((uint32_t)(EAX + 0x12ec0e41)));
  /* 12eaa02c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12eaa02f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eaa032 mov byte ptr [edx + 0x12ec0e41], cl */
  w8((uint32_t)(EDX + 0x12ec0e41), (CL));
  /* 12eaa038 jmp 0x12eaa00d */
  goto L_12eaa00d;
L_12eaa03a:;
  /* 12eaa03a jmp 0x12ea9fe1 */
  goto L_12ea9fe1;
L_12eaa03c:;
  /* 12eaa03c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12eaa043 jmp 0x12eaa04e */
  goto L_12eaa04e;
L_12eaa045:;
  /* 12eaa045 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eaa048 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa04b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12eaa04e:;
  /* 12eaa04e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa055 jae 0x12eaa06e */
  if (!C.cf) goto L_12eaa06e;
  /* 12eaa057 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eaa05a mov dl, byte ptr [ecx + 0x12ec0e41] */
  DL = (r8((uint32_t)(ECX + 0x12ec0e41)));
  /* 12eaa060 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12eaa063 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eaa066 mov byte ptr [eax + 0x12ec0e41], dl */
  w8((uint32_t)(EAX + 0x12ec0e41), (DL));
  /* 12eaa06c jmp 0x12eaa045 */
  goto L_12eaa045;
L_12eaa06e:;
  /* 12eaa06e mov ecx, dword ptr [0x12ec0ca4] */
  ECX = (r32((uint32_t)(0x12ec0ca4)));
  /* 12eaa074 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaa075 call 0x12eaa170 */
  push32(0x12eaa07au); f_12eaa170();
  /* 12eaa07a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa07d mov dword ptr [0x12ec0f44], eax */
  w32((uint32_t)(0x12ec0f44), (EAX));
  /* 12eaa082 mov dword ptr [0x12ec0d2c], 1 */
  w32((uint32_t)(0x12ec0d2c), (0x1u));
  /* 12eaa08c jmp 0x12eaa098 */
  goto L_12eaa098;
L_12eaa08e:;
  /* 12eaa08e mov dword ptr [0x12ec0d2c], 0 */
  w32((uint32_t)(0x12ec0d2c), (0x0u));
L_12eaa098:;
  /* 12eaa098 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12eaa09f jmp 0x12eaa0aa */
  goto L_12eaa0aa;
L_12eaa0a1:;
  /* 12eaa0a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaa0a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa0a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12eaa0aa:;
  /* 12eaa0aa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa0ae jae 0x12eaa0bf */
  if (!C.cf) goto L_12eaa0bf;
  /* 12eaa0b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaa0b3 mov word ptr [eax*2 + 0x12ec0d20], 0 */
  w16((uint32_t)(EAX*2 + 0x12ec0d20), (0x0u));
  /* 12eaa0bd jmp 0x12eaa0a1 */
  goto L_12eaa0a1;
L_12eaa0bf:;
  /* 12eaa0bf call 0x12eaa270 */
  push32(0x12eaa0c4u); f_12eaa270();
  /* 12eaa0c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12eaa0c6 call 0x12ea7790 */
  push32(0x12eaa0cbu); f_12ea7790();
  /* 12eaa0cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa0ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaa0d0 jmp 0x12eaa100 */
  goto L_12eaa100;
L_12eaa0d2:;
  /* 12eaa0d2 cmp dword ptr [0x12ebf7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa0d9 je 0x12eaa0f3 */
  if (C.zf) goto L_12eaa0f3;
  /* 12eaa0db call 0x12eaa1f0 */
  push32(0x12eaa0e0u); f_12eaa1f0();
  /* 12eaa0e0 call 0x12eaa270 */
  push32(0x12eaa0e5u); f_12eaa270();
  /* 12eaa0e5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12eaa0e7 call 0x12ea7790 */
  push32(0x12eaa0ecu); f_12ea7790();
  /* 12eaa0ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa0ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaa0f1 jmp 0x12eaa100 */
  goto L_12eaa100;
L_12eaa0f3:;
  /* 12eaa0f3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12eaa0f5 call 0x12ea7790 */
  push32(0x12eaa0fau); f_12ea7790();
  /* 12eaa0fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa0fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12eaa100:;
  /* 12eaa100 mov esp, ebp */
  ESP = (EBP);
  /* 12eaa102 pop ebp */
  EBP = (pop32());
  /* 12eaa103 ret  */
  ESPCHK(0x12ea9dc0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12eaa110 (89 bytes, 21 insns) */
void f_12eaa110(void) {
  FTRACE(0x12eaa110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaa110 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaa111 mov ebp, esp */
  EBP = (ESP);
  /* 12eaa113 mov dword ptr [0x12ebf7c0], 0 */
  w32((uint32_t)(0x12ebf7c0), (0x0u));
  /* 12eaa11d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa121 jne 0x12eaa135 */
  if (!C.zf) goto L_12eaa135;
  /* 12eaa123 mov dword ptr [0x12ebf7c0], 1 */
  w32((uint32_t)(0x12ebf7c0), (0x1u));
  /* 12eaa12d call dword ptr [0x12ec22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22ec))), 0x12eaa133u);
  /* 12eaa133 jmp 0x12eaa167 */
  goto L_12eaa167;
L_12eaa135:;
  /* 12eaa135 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa139 jne 0x12eaa14d */
  if (!C.zf) goto L_12eaa14d;
  /* 12eaa13b mov dword ptr [0x12ebf7c0], 1 */
  w32((uint32_t)(0x12ebf7c0), (0x1u));
  /* 12eaa145 call dword ptr [0x12ec22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22f0))), 0x12eaa14bu);
  /* 12eaa14b jmp 0x12eaa167 */
  goto L_12eaa167;
L_12eaa14d:;
  /* 12eaa14d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa151 jne 0x12eaa164 */
  if (!C.zf) goto L_12eaa164;
  /* 12eaa153 mov dword ptr [0x12ebf7c0], 1 */
  w32((uint32_t)(0x12ebf7c0), (0x1u));
  /* 12eaa15d mov eax, dword ptr [0x12ebf7e0] */
  EAX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eaa162 jmp 0x12eaa167 */
  goto L_12eaa167;
L_12eaa164:;
  /* 12eaa164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12eaa167:;
  /* 12eaa167 pop ebp */
  EBP = (pop32());
  /* 12eaa168 ret  */
  ESPCHK(0x12eaa110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a170 @ 0x12eaa170 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12eaa170(void) {
  FTRACE(0x12eaa170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaa170 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaa171 mov ebp, esp */
  EBP = (ESP);
  /* 12eaa173 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaa174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaa177 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eaa17a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaa17d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa183 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eaa186 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa18a ja 0x12eaa1ba */
  if ((!C.cf&&!C.zf)) goto L_12eaa1ba;
  /* 12eaa18c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaa18f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa191 mov dl, byte ptr [eax + 0x12eaa1d4] */
  DL = (r8((uint32_t)(EAX + 0x12eaa1d4)));
  /* 12eaa197 jmp dword ptr [edx*4 + 0x12eaa1c0] */
  switch (EDX) {
    case 0: goto L_12eaa19e;
    case 1: goto L_12eaa1a5;
    case 2: goto L_12eaa1ac;
    case 3: goto L_12eaa1b3;
    case 4: goto L_12eaa1ba;
    default: x86_unimpl("switch@0x12eaa197 out of table"); return;
  }
L_12eaa19e:;
  /* 12eaa19e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12eaa1a3 jmp 0x12eaa1bc */
  goto L_12eaa1bc;
L_12eaa1a5:;
  /* 12eaa1a5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12eaa1aa jmp 0x12eaa1bc */
  goto L_12eaa1bc;
L_12eaa1ac:;
  /* 12eaa1ac mov eax, 0x412 */
  EAX = (0x412u);
  /* 12eaa1b1 jmp 0x12eaa1bc */
  goto L_12eaa1bc;
L_12eaa1b3:;
  /* 12eaa1b3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12eaa1b8 jmp 0x12eaa1bc */
  goto L_12eaa1bc;
L_12eaa1ba:;
  /* 12eaa1ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eaa1bc:;
  /* 12eaa1bc mov esp, ebp */
  ESP = (EBP);
  /* 12eaa1be pop ebp */
  EBP = (pop32());
  /* 12eaa1bf ret  */
  ESPCHK(0x12eaa170u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12eaa1f0 (116 bytes, 29 insns) */
void f_12eaa1f0(void) {
  FTRACE(0x12eaa1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaa1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaa1f1 mov ebp, esp */
  EBP = (ESP);
  /* 12eaa1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaa1f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eaa1fb jmp 0x12eaa206 */
  goto L_12eaa206;
L_12eaa1fd:;
  /* 12eaa1fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaa200 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa203 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eaa206:;
  /* 12eaa206 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa20d jge 0x12eaa21b */
  if ((C.sf==C.of)) goto L_12eaa21b;
  /* 12eaa20f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaa212 mov byte ptr [ecx + 0x12ec0e40], 0 */
  w8((uint32_t)(ECX + 0x12ec0e40), (0x0u));
  /* 12eaa219 jmp 0x12eaa1fd */
  goto L_12eaa1fd;
L_12eaa21b:;
  /* 12eaa21b mov dword ptr [0x12ec0ca4], 0 */
  w32((uint32_t)(0x12ec0ca4), (0x0u));
  /* 12eaa225 mov dword ptr [0x12ec0d2c], 0 */
  w32((uint32_t)(0x12ec0d2c), (0x0u));
  /* 12eaa22f mov dword ptr [0x12ec0f44], 0 */
  w32((uint32_t)(0x12ec0f44), (0x0u));
  /* 12eaa239 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eaa240 jmp 0x12eaa24b */
  goto L_12eaa24b;
L_12eaa242:;
  /* 12eaa242 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaa245 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa248 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12eaa24b:;
  /* 12eaa24b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa24f jge 0x12eaa260 */
  if ((C.sf==C.of)) goto L_12eaa260;
  /* 12eaa251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaa254 mov word ptr [eax*2 + 0x12ec0d20], 0 */
  w16((uint32_t)(EAX*2 + 0x12ec0d20), (0x0u));
  /* 12eaa25e jmp 0x12eaa242 */
  goto L_12eaa242;
L_12eaa260:;
  /* 12eaa260 mov esp, ebp */
  ESP = (EBP);
  /* 12eaa262 pop ebp */
  EBP = (pop32());
  /* 12eaa263 ret  */
  ESPCHK(0x12eaa1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a270 @ 0x12eaa270 (770 bytes, 175 insns) */
void f_12eaa270(void) {
  FTRACE(0x12eaa270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaa270 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaa271 mov ebp, esp */
  EBP = (ESP);
  /* 12eaa273 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa279 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12eaa27f push eax */
  push32((uint32_t)(EAX));
  /* 12eaa280 mov ecx, dword ptr [0x12ec0ca4] */
  ECX = (r32((uint32_t)(0x12ec0ca4)));
  /* 12eaa286 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaa287 call dword ptr [0x12ec22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22f4))), 0x12eaa28du);
  /* 12eaa28d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa290 jne 0x12eaa4a9 */
  if (!C.zf) goto L_12eaa4a9;
  /* 12eaa296 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12eaa2a0 jmp 0x12eaa2b1 */
  goto L_12eaa2b1;
L_12eaa2a2:;
  /* 12eaa2a2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa2a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa2ab mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12eaa2b1:;
  /* 12eaa2b1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa2bb jae 0x12eaa2d2 */
  if (!C.cf) goto L_12eaa2d2;
  /* 12eaa2bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa2c3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12eaa2c9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12eaa2d0 jmp 0x12eaa2a2 */
  goto L_12eaa2a2;
L_12eaa2d2:;
  /* 12eaa2d2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12eaa2d9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12eaa2df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eaa2e2 jmp 0x12eaa2ed */
  goto L_12eaa2ed;
L_12eaa2e4:;
  /* 12eaa2e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaa2e7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa2ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eaa2ed:;
  /* 12eaa2ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaa2f0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa2f2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eaa2f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eaa2f6 je 0x12eaa338 */
  if (C.zf) goto L_12eaa338;
  /* 12eaa2f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaa2fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaa2fd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eaa2ff mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12eaa305 jmp 0x12eaa316 */
  goto L_12eaa316;
L_12eaa307:;
  /* 12eaa307 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa30d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa310 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12eaa316:;
  /* 12eaa316 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaa319 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaa31b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12eaa31e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa324 ja 0x12eaa336 */
  if ((!C.cf&&!C.zf)) goto L_12eaa336;
  /* 12eaa326 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa32c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12eaa334 jmp 0x12eaa307 */
  goto L_12eaa307;
L_12eaa336:;
  /* 12eaa336 jmp 0x12eaa2e4 */
  goto L_12eaa2e4;
L_12eaa338:;
  /* 12eaa338 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaa33a mov eax, dword ptr [0x12ec0f44] */
  EAX = (r32((uint32_t)(0x12ec0f44)));
  /* 12eaa33f push eax */
  push32((uint32_t)(EAX));
  /* 12eaa340 mov ecx, dword ptr [0x12ec0ca4] */
  ECX = (r32((uint32_t)(0x12ec0ca4)));
  /* 12eaa346 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaa347 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12eaa34d push edx */
  push32((uint32_t)(EDX));
  /* 12eaa34e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eaa353 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12eaa359 push eax */
  push32((uint32_t)(EAX));
  /* 12eaa35a push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaa35c call 0x12eabf20 */
  push32(0x12eaa361u); f_12eabf20();
  /* 12eaa361 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa364 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaa366 mov ecx, dword ptr [0x12ec0ca4] */
  ECX = (r32((uint32_t)(0x12ec0ca4)));
  /* 12eaa36c push ecx */
  push32((uint32_t)(ECX));
  /* 12eaa36d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eaa372 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12eaa378 push edx */
  push32((uint32_t)(EDX));
  /* 12eaa379 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eaa37e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12eaa384 push eax */
  push32((uint32_t)(EAX));
  /* 12eaa385 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eaa38a mov ecx, dword ptr [0x12ec0f44] */
  ECX = (r32((uint32_t)(0x12ec0f44)));
  /* 12eaa390 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaa391 call 0x12eac0e0 */
  push32(0x12eaa396u); f_12eac0e0();
  /* 12eaa396 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa399 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaa39b mov edx, dword ptr [0x12ec0ca4] */
  EDX = (r32((uint32_t)(0x12ec0ca4)));
  /* 12eaa3a1 push edx */
  push32((uint32_t)(EDX));
  /* 12eaa3a2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eaa3a7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12eaa3ad push eax */
  push32((uint32_t)(EAX));
  /* 12eaa3ae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eaa3b3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12eaa3b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaa3ba push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12eaa3bf mov edx, dword ptr [0x12ec0f44] */
  EDX = (r32((uint32_t)(0x12ec0f44)));
  /* 12eaa3c5 push edx */
  push32((uint32_t)(EDX));
  /* 12eaa3c6 call 0x12eac0e0 */
  push32(0x12eaa3cbu); f_12eac0e0();
  /* 12eaa3cb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa3ce mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12eaa3d8 jmp 0x12eaa3e9 */
  goto L_12eaa3e9;
L_12eaa3da:;
  /* 12eaa3da mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa3e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa3e3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12eaa3e9:;
  /* 12eaa3e9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa3f3 jae 0x12eaa4a4 */
  if (!C.cf) goto L_12eaa4a4;
  /* 12eaa3f9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa3ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa401 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12eaa409 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa40c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eaa40e je 0x12eaa446 */
  if (C.zf) goto L_12eaa446;
  /* 12eaa410 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa416 mov cl, byte ptr [eax + 0x12ec0e41] */
  CL = (r8((uint32_t)(EAX + 0x12ec0e41)));
  /* 12eaa41c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12eaa41f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa425 mov byte ptr [edx + 0x12ec0e41], cl */
  w8((uint32_t)(EDX + 0x12ec0e41), (CL));
  /* 12eaa42b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa431 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa437 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12eaa43e mov byte ptr [eax + 0x12ec0d40], dl */
  w8((uint32_t)(EAX + 0x12ec0d40), (DL));
  /* 12eaa444 jmp 0x12eaa49f */
  goto L_12eaa49f;
L_12eaa446:;
  /* 12eaa446 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa44c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaa44e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12eaa456 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12eaa459 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eaa45b je 0x12eaa492 */
  if (C.zf) goto L_12eaa492;
  /* 12eaa45d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa463 mov al, byte ptr [edx + 0x12ec0e41] */
  AL = (r8((uint32_t)(EDX + 0x12ec0e41)));
  /* 12eaa469 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12eaa46b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa471 mov byte ptr [ecx + 0x12ec0e41], al */
  w8((uint32_t)(ECX + 0x12ec0e41), (AL));
  /* 12eaa477 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa47d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa483 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12eaa48a mov byte ptr [edx + 0x12ec0d40], cl */
  w8((uint32_t)(EDX + 0x12ec0d40), (CL));
  /* 12eaa490 jmp 0x12eaa49f */
  goto L_12eaa49f;
L_12eaa492:;
  /* 12eaa492 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa498 mov byte ptr [edx + 0x12ec0d40], 0 */
  w8((uint32_t)(EDX + 0x12ec0d40), (0x0u));
L_12eaa49f:;
  /* 12eaa49f jmp 0x12eaa3da */
  goto L_12eaa3da;
L_12eaa4a4:;
  /* 12eaa4a4 jmp 0x12eaa56e */
  goto L_12eaa56e;
L_12eaa4a9:;
  /* 12eaa4a9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12eaa4b3 jmp 0x12eaa4c4 */
  goto L_12eaa4c4;
L_12eaa4b5:;
  /* 12eaa4b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa4bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa4be mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12eaa4c4:;
  /* 12eaa4c4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa4ce jae 0x12eaa56e */
  if (!C.cf) goto L_12eaa56e;
  /* 12eaa4d4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa4db jb 0x12eaa518 */
  if (C.cf) goto L_12eaa518;
  /* 12eaa4dd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa4e4 ja 0x12eaa518 */
  if ((!C.cf&&!C.zf)) goto L_12eaa518;
  /* 12eaa4e6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa4ec mov dl, byte ptr [ecx + 0x12ec0e41] */
  DL = (r8((uint32_t)(ECX + 0x12ec0e41)));
  /* 12eaa4f2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12eaa4f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa4fb mov byte ptr [eax + 0x12ec0e41], dl */
  w8((uint32_t)(EAX + 0x12ec0e41), (DL));
  /* 12eaa501 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa507 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa50a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa510 mov byte ptr [edx + 0x12ec0d40], cl */
  w8((uint32_t)(EDX + 0x12ec0d40), (CL));
  /* 12eaa516 jmp 0x12eaa569 */
  goto L_12eaa569;
L_12eaa518:;
  /* 12eaa518 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa51f jb 0x12eaa55c */
  if (C.cf) goto L_12eaa55c;
  /* 12eaa521 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa528 ja 0x12eaa55c */
  if ((!C.cf&&!C.zf)) goto L_12eaa55c;
  /* 12eaa52a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa530 mov cl, byte ptr [eax + 0x12ec0e41] */
  CL = (r8((uint32_t)(EAX + 0x12ec0e41)));
  /* 12eaa536 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12eaa539 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa53f mov byte ptr [edx + 0x12ec0e41], cl */
  w8((uint32_t)(EDX + 0x12ec0e41), (CL));
  /* 12eaa545 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa54b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa54e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa554 mov byte ptr [ecx + 0x12ec0d40], al */
  w8((uint32_t)(ECX + 0x12ec0d40), (AL));
  /* 12eaa55a jmp 0x12eaa569 */
  goto L_12eaa569;
L_12eaa55c:;
  /* 12eaa55c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12eaa562 mov byte ptr [edx + 0x12ec0d40], 0 */
  w8((uint32_t)(EDX + 0x12ec0d40), (0x0u));
L_12eaa569:;
  /* 12eaa569 jmp 0x12eaa4b5 */
  goto L_12eaa4b5;
L_12eaa56e:;
  /* 12eaa56e mov esp, ebp */
  ESP = (EBP);
  /* 12eaa570 pop ebp */
  EBP = (pop32());
  /* 12eaa571 ret  */
  ESPCHK(0x12eaa270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a580 @ 0x12eaa580 (23 bytes, 9 insns) */
void f_12eaa580(void) {
  FTRACE(0x12eaa580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaa580 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaa581 mov ebp, esp */
  EBP = (ESP);
  /* 12eaa583 cmp dword ptr [0x12ec0d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec0d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa58a je 0x12eaa593 */
  if (C.zf) goto L_12eaa593;
  /* 12eaa58c mov eax, dword ptr [0x12ec0ca4] */
  EAX = (r32((uint32_t)(0x12ec0ca4)));
  /* 12eaa591 jmp 0x12eaa595 */
  goto L_12eaa595;
L_12eaa593:;
  /* 12eaa593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eaa595:;
  /* 12eaa595 pop ebp */
  EBP = (pop32());
  /* 12eaa596 ret  */
  ESPCHK(0x12eaa580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5a0 @ 0x12eaa5a0 (34 bytes, 10 insns) */
void f_12eaa5a0(void) {
  FTRACE(0x12eaa5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaa5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaa5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eaa5a3 cmp dword ptr [0x12ec10f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec10f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa5aa jne 0x12eaa5c0 */
  if (!C.zf) goto L_12eaa5c0;
  /* 12eaa5ac push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12eaa5ae call 0x12ea9dc0 */
  push32(0x12eaa5b3u); f_12ea9dc0();
  /* 12eaa5b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa5b6 mov dword ptr [0x12ec10f0], 1 */
  w32((uint32_t)(0x12ec10f0), (0x1u));
L_12eaa5c0:;
  /* 12eaa5c0 pop ebp */
  EBP = (pop32());
  /* 12eaa5c1 ret  */
  ESPCHK(0x12eaa5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5d0 @ 0x12eaa5d0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_12eaa5d0(void) {
  FTRACE(0x12eaa5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaa5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaa5d1 mov ebp, esp */
  EBP = (ESP);
  /* 12eaa5d3 push edi */
  push32((uint32_t)(EDI));
  /* 12eaa5d4 push esi */
  push32((uint32_t)(ESI));
  /* 12eaa5d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaa5d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eaa5db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaa5de mov eax, ecx */
  EAX = (ECX);
  /* 12eaa5e0 mov edx, ecx */
  EDX = (ECX);
  /* 12eaa5e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa5e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa5e6 jbe 0x12eaa5f0 */
  if ((C.cf||C.zf)) goto L_12eaa5f0;
  /* 12eaa5e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa5ea jb 0x12eaa768 */
  if (C.cf) goto L_12eaa768;
L_12eaa5f0:;
  /* 12eaa5f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12eaa5f6 jne 0x12eaa60c */
  if (!C.zf) goto L_12eaa60c;
  /* 12eaa5f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eaa5fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa5fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa601 jb 0x12eaa62c */
  if (C.cf) goto L_12eaa62c;
  /* 12eaa603 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eaa605 jmp dword ptr [edx*4 + 0x12eaa718] */
  switch (EDX) {
    case 0: goto L_12eaa728;
    case 1: goto L_12eaa730;
    case 2: goto L_12eaa73c;
    case 3: goto L_12eaa750;
    default: x86_unimpl("switch@0x12eaa605 out of table"); return;
  }
L_12eaa60c:;
  /* 12eaa60c mov eax, edi */
  EAX = (EDI);
  /* 12eaa60e mov edx, 3 */
  EDX = (0x3u);
  /* 12eaa613 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa616 jb 0x12eaa624 */
  if (C.cf) goto L_12eaa624;
  /* 12eaa618 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12eaa61b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa61d jmp dword ptr [eax*4 + 0x12eaa630] */
  switch (EAX) {
    case 1: goto L_12eaa640;
    case 2: goto L_12eaa66c;
    case 3: goto L_12eaa690;
    default: x86_unimpl("switch@0x12eaa61d out of table"); return;
  }
L_12eaa624:;
  /* 12eaa624 jmp dword ptr [ecx*4 + 0x12eaa728] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12eaa728)))); return;
  /* 12eaa62b nop  */
  /* nop */
L_12eaa62c:;
  /* 12eaa62c jmp dword ptr [ecx*4 + 0x12eaa6ac] */
  switch (ECX) {
    case 0: goto L_12eaa70f;
    case 1: goto L_12eaa6fc;
    case 2: goto L_12eaa6f4;
    case 3: goto L_12eaa6ec;
    case 4: goto L_12eaa6e4;
    case 5: goto L_12eaa6dc;
    case 6: goto L_12eaa6d4;
    case 7: goto L_12eaa6cc;
    default: x86_unimpl("switch@0x12eaa62c out of table"); return;
  }
  /* 12eaa633 nop  */
  /* nop */
L_12eaa640:;
  /* 12eaa640 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa642 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eaa644 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eaa646 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eaa649 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eaa64c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eaa64f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eaa652 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eaa655 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa658 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa65b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa65e jb 0x12eaa62c */
  if (C.cf) goto L_12eaa62c;
  /* 12eaa660 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eaa662 jmp dword ptr [edx*4 + 0x12eaa718] */
  switch (EDX) {
    case 0: goto L_12eaa728;
    case 1: goto L_12eaa730;
    case 2: goto L_12eaa73c;
    case 3: goto L_12eaa750;
    default: x86_unimpl("switch@0x12eaa662 out of table"); return;
  }
  /* 12eaa669 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eaa66c:;
  /* 12eaa66c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa66e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eaa670 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eaa672 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eaa675 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eaa678 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eaa67b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa67e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa681 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa684 jb 0x12eaa62c */
  if (C.cf) goto L_12eaa62c;
  /* 12eaa686 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eaa688 jmp dword ptr [edx*4 + 0x12eaa718] */
  switch (EDX) {
    case 0: goto L_12eaa728;
    case 1: goto L_12eaa730;
    case 2: goto L_12eaa73c;
    case 3: goto L_12eaa750;
    default: x86_unimpl("switch@0x12eaa688 out of table"); return;
  }
  /* 12eaa68f nop  */
  /* nop */
L_12eaa690:;
  /* 12eaa690 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa692 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eaa694 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eaa696 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12eaa697 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eaa69a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12eaa69b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa69e jb 0x12eaa62c */
  if (C.cf) goto L_12eaa62c;
  /* 12eaa6a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eaa6a2 jmp dword ptr [edx*4 + 0x12eaa718] */
  switch (EDX) {
    case 0: goto L_12eaa728;
    case 1: goto L_12eaa730;
    case 2: goto L_12eaa73c;
    case 3: goto L_12eaa750;
    default: x86_unimpl("switch@0x12eaa6a2 out of table"); return;
  }
  /* 12eaa6a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eaa6cc:;
  /* 12eaa6cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12eaa6d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12eaa6d4:;
  /* 12eaa6d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12eaa6d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12eaa6dc:;
  /* 12eaa6dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12eaa6e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12eaa6e4:;
  /* 12eaa6e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12eaa6e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12eaa6ec:;
  /* 12eaa6ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12eaa6f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12eaa6f4:;
  /* 12eaa6f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12eaa6f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12eaa6fc:;
  /* 12eaa6fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12eaa700 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12eaa704 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12eaa70b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa70d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12eaa70f:;
  /* 12eaa70f jmp dword ptr [edx*4 + 0x12eaa718] */
  switch (EDX) {
    case 0: goto L_12eaa728;
    case 1: goto L_12eaa730;
    case 2: goto L_12eaa73c;
    case 3: goto L_12eaa750;
    default: x86_unimpl("switch@0x12eaa70f out of table"); return;
  }
  /* 12eaa716 mov edi, edi */
  EDI = (EDI);
L_12eaa728:;
  /* 12eaa728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaa72b pop esi */
  ESI = (pop32());
  /* 12eaa72c pop edi */
  EDI = (pop32());
  /* 12eaa72d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eaa72e ret  */
  ESPCHK(0x12eaa5d0u, _esp0);
  ESP += 4; return;
  /* 12eaa72f nop  */
  /* nop */
L_12eaa730:;
  /* 12eaa730 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eaa732 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eaa734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaa737 pop esi */
  ESI = (pop32());
  /* 12eaa738 pop edi */
  EDI = (pop32());
  /* 12eaa739 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eaa73a ret  */
  ESPCHK(0x12eaa5d0u, _esp0);
  ESP += 4; return;
  /* 12eaa73b nop  */
  /* nop */
L_12eaa73c:;
  /* 12eaa73c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eaa73e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eaa740 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eaa743 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eaa746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaa749 pop esi */
  ESI = (pop32());
  /* 12eaa74a pop edi */
  EDI = (pop32());
  /* 12eaa74b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eaa74c ret  */
  ESPCHK(0x12eaa5d0u, _esp0);
  ESP += 4; return;
  /* 12eaa74d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eaa750:;
  /* 12eaa750 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eaa752 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eaa754 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eaa757 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eaa75a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eaa75d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eaa760 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaa763 pop esi */
  ESI = (pop32());
  /* 12eaa764 pop edi */
  EDI = (pop32());
  /* 12eaa765 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eaa766 ret  */
  ESPCHK(0x12eaa5d0u, _esp0);
  ESP += 4; return;
  /* 12eaa767 nop  */
  /* nop */
L_12eaa768:;
  /* 12eaa768 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12eaa76c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12eaa770 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12eaa776 jne 0x12eaa79c */
  if (!C.zf) goto L_12eaa79c;
  /* 12eaa778 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eaa77b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa77e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa781 jb 0x12eaa790 */
  if (C.cf) goto L_12eaa790;
  /* 12eaa783 std  */
  C.df=1;
  /* 12eaa784 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eaa786 cld  */
  C.df=0;
  /* 12eaa787 jmp dword ptr [edx*4 + 0x12eaa8b0] */
  switch (EDX) {
    case 0: goto L_12eaa8c0;
    case 1: goto L_12eaa8c8;
    case 2: goto L_12eaa8d8;
    case 3: goto L_12eaa8ec;
    default: x86_unimpl("switch@0x12eaa787 out of table"); return;
  }
  /* 12eaa78e mov edi, edi */
  EDI = (EDI);
L_12eaa790:;
  /* 12eaa790 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eaa792 jmp dword ptr [ecx*4 + 0x12eaa860] */
  switch (ECX) {
    case 0: goto L_12eaa8a7;
    default: x86_unimpl("switch@0x12eaa792 out of table"); return;
  }
  /* 12eaa799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eaa79c:;
  /* 12eaa79c mov eax, edi */
  EAX = (EDI);
  /* 12eaa79e mov edx, 3 */
  EDX = (0x3u);
  /* 12eaa7a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa7a6 jb 0x12eaa7b4 */
  if (C.cf) goto L_12eaa7b4;
  /* 12eaa7a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12eaa7ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa7ad jmp dword ptr [eax*4 + 0x12eaa7b8] */
  switch (EAX) {
    case 1: goto L_12eaa7c8;
    case 2: goto L_12eaa7e8;
    case 3: goto L_12eaa810;
    default: x86_unimpl("switch@0x12eaa7ad out of table"); return;
  }
L_12eaa7b4:;
  /* 12eaa7b4 jmp dword ptr [ecx*4 + 0x12eaa8b0] */
  switch (ECX) {
    case 0: goto L_12eaa8c0;
    case 1: goto L_12eaa8c8;
    case 2: goto L_12eaa8d8;
    case 3: goto L_12eaa8ec;
    default: x86_unimpl("switch@0x12eaa7b4 out of table"); return;
  }
  /* 12eaa7bb nop  */
  /* nop */
L_12eaa7c8:;
  /* 12eaa7c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eaa7cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa7cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eaa7d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12eaa7d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eaa7d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12eaa7d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa7d8 jb 0x12eaa790 */
  if (C.cf) goto L_12eaa790;
  /* 12eaa7da std  */
  C.df=1;
  /* 12eaa7db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eaa7dd cld  */
  C.df=0;
  /* 12eaa7de jmp dword ptr [edx*4 + 0x12eaa8b0] */
  switch (EDX) {
    case 0: goto L_12eaa8c0;
    case 1: goto L_12eaa8c8;
    case 2: goto L_12eaa8d8;
    case 3: goto L_12eaa8ec;
    default: x86_unimpl("switch@0x12eaa7de out of table"); return;
  }
  /* 12eaa7e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eaa7e8:;
  /* 12eaa7e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eaa7eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa7ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eaa7f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eaa7f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eaa7f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eaa7f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa7fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa7ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa802 jb 0x12eaa790 */
  if (C.cf) goto L_12eaa790;
  /* 12eaa804 std  */
  C.df=1;
  /* 12eaa805 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eaa807 cld  */
  C.df=0;
  /* 12eaa808 jmp dword ptr [edx*4 + 0x12eaa8b0] */
  switch (EDX) {
    case 0: goto L_12eaa8c0;
    case 1: goto L_12eaa8c8;
    case 2: goto L_12eaa8d8;
    case 3: goto L_12eaa8ec;
    default: x86_unimpl("switch@0x12eaa808 out of table"); return;
  }
  /* 12eaa80f nop  */
  /* nop */
L_12eaa810:;
  /* 12eaa810 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eaa813 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa815 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eaa818 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eaa81b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eaa81e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eaa821 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eaa824 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eaa827 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa82a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa82d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa830 jb 0x12eaa790 */
  if (C.cf) goto L_12eaa790;
  /* 12eaa836 std  */
  C.df=1;
  /* 12eaa837 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eaa839 cld  */
  C.df=0;
  /* 12eaa83a jmp dword ptr [edx*4 + 0x12eaa8b0] */
  switch (EDX) {
    case 0: goto L_12eaa8c0;
    case 1: goto L_12eaa8c8;
    case 2: goto L_12eaa8d8;
    case 3: goto L_12eaa8ec;
    default: x86_unimpl("switch@0x12eaa83a out of table"); return;
  }
  /* 12eaa841 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12eaa844 test al, 0xea */
  { uint32_t _r=(AL)&(0xeau); fl_logic(_r,8); }
  /* 12eaa847 adc ch, byte ptr [eax + ebp*4 - 0x16] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EAX + EBP*4 + -0x16))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12eaa84b adc dh, byte ptr [eax + ebp*4 - 0x16] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EAX + EBP*4 + -0x16))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12eaa84f adc bh, byte ptr [eax + ebp*4 - 0x16] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EAX + EBP*4 + -0x16))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12eaa853 adc al, byte ptr [eax + ebp*4 - 0x5773ed16] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EAX + EBP*4 + -0x5773ed16))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12eaa85c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 12eaa85d test al, 0xea */
  { uint32_t _r=(AL)&(0xeau); fl_logic(_r,8); }
  /* 12eaa864 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12eaa868 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12eaa86c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12eaa870 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12eaa874 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12eaa878 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12eaa87c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12eaa880 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12eaa884 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12eaa888 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12eaa88c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12eaa890 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12eaa894 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12eaa898 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12eaa89c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12eaa8a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa8a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12eaa8a7:;
  /* 12eaa8a7 jmp dword ptr [edx*4 + 0x12eaa8b0] */
  switch (EDX) {
    case 0: goto L_12eaa8c0;
    case 1: goto L_12eaa8c8;
    case 2: goto L_12eaa8d8;
    case 3: goto L_12eaa8ec;
    default: x86_unimpl("switch@0x12eaa8a7 out of table"); return;
  }
  /* 12eaa8ae mov edi, edi */
  EDI = (EDI);
L_12eaa8c0:;
  /* 12eaa8c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaa8c3 pop esi */
  ESI = (pop32());
  /* 12eaa8c4 pop edi */
  EDI = (pop32());
  /* 12eaa8c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eaa8c6 ret  */
  ESPCHK(0x12eaa5d0u, _esp0);
  ESP += 4; return;
  /* 12eaa8c7 nop  */
  /* nop */
L_12eaa8c8:;
  /* 12eaa8c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eaa8cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eaa8ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaa8d1 pop esi */
  ESI = (pop32());
  /* 12eaa8d2 pop edi */
  EDI = (pop32());
  /* 12eaa8d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eaa8d4 ret  */
  ESPCHK(0x12eaa5d0u, _esp0);
  ESP += 4; return;
  /* 12eaa8d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eaa8d8:;
  /* 12eaa8d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eaa8db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eaa8de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eaa8e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eaa8e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaa8e7 pop esi */
  ESI = (pop32());
  /* 12eaa8e8 pop edi */
  EDI = (pop32());
  /* 12eaa8e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eaa8ea ret  */
  ESPCHK(0x12eaa5d0u, _esp0);
  ESP += 4; return;
  /* 12eaa8eb nop  */
  /* nop */
L_12eaa8ec:;
  /* 12eaa8ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eaa8ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eaa8f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eaa8f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eaa8f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eaa8fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eaa8fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaa901 pop esi */
  ESI = (pop32());
  /* 12eaa902 pop edi */
  EDI = (pop32());
  /* 12eaa903 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eaa904 ret  */
  ESPCHK(0x12eaa5d0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12eaa910 (104 bytes, 43 insns) */
void f_12eaa910(void) {
  FTRACE(0x12eaa910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaa910 push ebx */
  push32((uint32_t)(EBX));
  /* 12eaa911 push esi */
  push32((uint32_t)(ESI));
  /* 12eaa912 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12eaa916 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaa918 jne 0x12eaa932 */
  if (!C.zf) goto L_12eaa932;
  /* 12eaa91a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12eaa91e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12eaa922 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa924 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eaa926 mov ebx, eax */
  EBX = (EAX);
  /* 12eaa928 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12eaa92c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eaa92e mov edx, ebx */
  EDX = (EBX);
  /* 12eaa930 jmp 0x12eaa973 */
  goto L_12eaa973;
L_12eaa932:;
  /* 12eaa932 mov ecx, eax */
  ECX = (EAX);
  /* 12eaa934 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12eaa938 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12eaa93c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12eaa940:;
  /* 12eaa940 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12eaa942 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12eaa944 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12eaa946 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12eaa948 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaa94a jne 0x12eaa940 */
  if (!C.zf) goto L_12eaa940;
  /* 12eaa94c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eaa94e mov esi, eax */
  ESI = (EAX);
  /* 12eaa950 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12eaa954 mov ecx, eax */
  ECX = (EAX);
  /* 12eaa956 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12eaa95a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12eaa95c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa95e jb 0x12eaa96e */
  if (C.cf) goto L_12eaa96e;
  /* 12eaa960 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa964 ja 0x12eaa96e */
  if ((!C.cf&&!C.zf)) goto L_12eaa96e;
  /* 12eaa966 jb 0x12eaa96f */
  if (C.cf) goto L_12eaa96f;
  /* 12eaa968 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa96c jbe 0x12eaa96f */
  if ((C.cf||C.zf)) goto L_12eaa96f;
L_12eaa96e:;
  /* 12eaa96e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12eaa96f:;
  /* 12eaa96f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa971 mov eax, esi */
  EAX = (ESI);
L_12eaa973:;
  /* 12eaa973 pop esi */
  ESI = (pop32());
  /* 12eaa974 pop ebx */
  EBX = (pop32());
  /* 12eaa975 ret 0x10 */
  ESPCHK(0x12eaa910u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12eaa980 (117 bytes, 44 insns) */
void f_12eaa980(void) {
  FTRACE(0x12eaa980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaa980 push ebx */
  push32((uint32_t)(EBX));
  /* 12eaa981 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12eaa985 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaa987 jne 0x12eaa9a1 */
  if (!C.zf) goto L_12eaa9a1;
  /* 12eaa989 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12eaa98d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12eaa991 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa993 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eaa995 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12eaa999 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eaa99b mov eax, edx */
  EAX = (EDX);
  /* 12eaa99d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaa99f jmp 0x12eaa9f1 */
  goto L_12eaa9f1;
L_12eaa9a1:;
  /* 12eaa9a1 mov ecx, eax */
  ECX = (EAX);
  /* 12eaa9a3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12eaa9a7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12eaa9ab mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12eaa9af:;
  /* 12eaa9af shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12eaa9b1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12eaa9b3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12eaa9b5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12eaa9b7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaa9b9 jne 0x12eaa9af */
  if (!C.zf) goto L_12eaa9af;
  /* 12eaa9bb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eaa9bd mov ecx, eax */
  ECX = (EAX);
  /* 12eaa9bf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12eaa9c3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12eaa9c4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12eaa9c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaa9ca jb 0x12eaa9da */
  if (C.cf) goto L_12eaa9da;
  /* 12eaa9cc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa9d0 ja 0x12eaa9da */
  if ((!C.cf&&!C.zf)) goto L_12eaa9da;
  /* 12eaa9d2 jb 0x12eaa9e2 */
  if (C.cf) goto L_12eaa9e2;
  /* 12eaa9d4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaa9d8 jbe 0x12eaa9e2 */
  if ((C.cf||C.zf)) goto L_12eaa9e2;
L_12eaa9da:;
  /* 12eaa9da sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa9de sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12eaa9e2:;
  /* 12eaa9e2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa9e6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaa9ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eaa9ec neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eaa9ee sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12eaa9f1:;
  /* 12eaa9f1 pop ebx */
  EBX = (pop32());
  /* 12eaa9f2 ret 0x10 */
  ESPCHK(0x12eaa980u, _esp0);
  ESP += 20; return;
}

/* FUN_1000aa00 @ 0x12eaaa00 (628 bytes, 214 insns) */
void f_12eaaa00(void) {
  FTRACE(0x12eaaa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaaa00 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaaa01 mov ebp, esp */
  EBP = (ESP);
  /* 12eaaa03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaaa06 push ebx */
  push32((uint32_t)(EBX));
  /* 12eaaa07 push esi */
  push32((uint32_t)(ESI));
  /* 12eaaa08 push edi */
  push32((uint32_t)(EDI));
L_12eaaa09:;
  /* 12eaaa09 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaaa0d jne 0x12eaaa2d */
  if (!C.zf) goto L_12eaaa2d;
  /* 12eaaa0f push 0x12ebb08c */
  push32((uint32_t)(0x12ebb08cu));
  /* 12eaaa14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaaa16 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12eaaa18 push 0x12ebb080 */
  push32((uint32_t)(0x12ebb080u));
  /* 12eaaa1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaaa1f call 0x12ea2db0 */
  push32(0x12eaaa24u); f_12ea2db0();
  /* 12eaaa24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaaa27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaaa2a jne 0x12eaaa2d */
  if (!C.zf) goto L_12eaaa2d;
  /* 12eaaa2c int3  */
  x86_unimpl("int3 @ 0x12eaaa2c");
L_12eaaa2d:;
  /* 12eaaa2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaaa2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaaa31 jne 0x12eaaa09 */
  if (!C.zf) goto L_12eaaa09;
  /* 12eaaa33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaaa36 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaaa39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaa3c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12eaaa3f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12eaaa42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaa45 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eaaa48 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaaa4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eaaa50 je 0x12eaaa5f */
  if (C.zf) goto L_12eaaa5f;
  /* 12eaaa52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaa55 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12eaaa58 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12eaaa5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eaaa5d je 0x12eaaa75 */
  if (C.zf) goto L_12eaaa75;
L_12eaaa5f:;
  /* 12eaaa5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaa62 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12eaaa65 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12eaaa67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaa6a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12eaaa6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eaaa70 jmp 0x12eaac6d */
  goto L_12eaac6d;
L_12eaaa75:;
  /* 12eaaa75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaa78 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12eaaa7b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12eaaa7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaaa80 je 0x12eaaacc */
  if (C.zf) goto L_12eaaacc;
  /* 12eaaa82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaa85 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12eaaa8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaa8f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12eaaa92 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12eaaa95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaaa97 je 0x12eaaab5 */
  if (C.zf) goto L_12eaaab5;
  /* 12eaaa99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaa9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaa9f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12eaaaa2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12eaaaa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaaa7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eaaaaa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12eaaaad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaab0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12eaaab3 jmp 0x12eaaacc */
  goto L_12eaaacc;
L_12eaaab5:;
  /* 12eaaab5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaab8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eaaabb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaaabe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaac1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12eaaac4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eaaac7 jmp 0x12eaac6d */
  goto L_12eaac6d;
L_12eaaacc:;
  /* 12eaaacc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaacf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eaaad2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaaad5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaad8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12eaaadb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaade mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eaaae1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12eaaae4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaae7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12eaaaea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaaed mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12eaaaf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eaaafb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaaafe mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12eaab01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaab04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12eaab07 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12eaab0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eaab0f jne 0x12eaab3f */
  if (!C.zf) goto L_12eaab3f;
  /* 12eaab11 cmp dword ptr [ebp - 8], 0x12ebe160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12ebe160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaab18 je 0x12eaab23 */
  if (C.zf) goto L_12eaab23;
  /* 12eaab1a cmp dword ptr [ebp - 8], 0x12ebe180 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12ebe180u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaab21 jne 0x12eaab33 */
  if (!C.zf) goto L_12eaab33;
L_12eaab23:;
  /* 12eaab23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eaab26 push edx */
  push32((uint32_t)(EDX));
  /* 12eaab27 call 0x12eac970 */
  push32(0x12eaab2cu); f_12eac970();
  /* 12eaab2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaab2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaab31 jne 0x12eaab3f */
  if (!C.zf) goto L_12eaab3f;
L_12eaab33:;
  /* 12eaab33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaab36 push eax */
  push32((uint32_t)(EAX));
  /* 12eaab37 call 0x12eac8a0 */
  push32(0x12eaab3cu); f_12eac8a0();
  /* 12eaab3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eaab3f:;
  /* 12eaab3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaab42 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eaab45 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaab4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eaab4d je 0x12eaac2b */
  if (C.zf) goto L_12eaac2b;
L_12eaab53:;
  /* 12eaab53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaab56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaab59 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12eaab5b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaab5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eaab60 jge 0x12eaab83 */
  if ((C.sf==C.of)) goto L_12eaab83;
  /* 12eaab62 push 0x12ebb040 */
  push32((uint32_t)(0x12ebb040u));
  /* 12eaab67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaab69 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12eaab6e push 0x12ebb080 */
  push32((uint32_t)(0x12ebb080u));
  /* 12eaab73 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaab75 call 0x12ea2db0 */
  push32(0x12eaab7au); f_12ea2db0();
  /* 12eaab7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaab7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaab80 jne 0x12eaab83 */
  if (!C.zf) goto L_12eaab83;
  /* 12eaab82 int3  */
  x86_unimpl("int3 @ 0x12eaab82");
L_12eaab83:;
  /* 12eaab83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaab85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaab87 jne 0x12eaab53 */
  if (!C.zf) goto L_12eaab53;
  /* 12eaab89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaab8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaab8f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12eaab91 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaab94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eaab97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaab9a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12eaab9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaaba0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaba3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eaaba5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaaba8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12eaabab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaabae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaabb1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12eaabb4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaabb8 jle 0x12eaabd6 */
  if ((C.zf||C.sf!=C.of)) goto L_12eaabd6;
  /* 12eaabba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaabbd push ecx */
  push32((uint32_t)(ECX));
  /* 12eaabbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaabc1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12eaabc4 push eax */
  push32((uint32_t)(EAX));
  /* 12eaabc5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eaabc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaabc9 call 0x12eac590 */
  push32(0x12eaabceu); f_12eac590();
  /* 12eaabce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaabd1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eaabd4 jmp 0x12eaac1e */
  goto L_12eaac1e;
L_12eaabd6:;
  /* 12eaabd6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaabda je 0x12eaabf9 */
  if (C.zf) goto L_12eaabf9;
  /* 12eaabdc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eaabdf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12eaabe2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eaabe5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12eaabe8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eaabeb mov ecx, dword ptr [edx*4 + 0x12ec0fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12ec0fa0)));
  /* 12eaabf2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaabf4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12eaabf7 jmp 0x12eaac00 */
  goto L_12eaac00;
L_12eaabf9:;
  /* 12eaabf9 mov dword ptr [ebp - 0x14], 0x12ebda78 */
  w32((uint32_t)(EBP + -0x14), (0x12ebda78u));
L_12eaac00:;
  /* 12eaac00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eaac03 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12eaac07 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12eaac0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaac0c je 0x12eaac1e */
  if (C.zf) goto L_12eaac1e;
  /* 12eaac0e push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaac10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaac12 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eaac15 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaac16 call 0x12eac440 */
  push32(0x12eaac1bu); f_12eac440();
  /* 12eaac1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eaac1e:;
  /* 12eaac1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaac21 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12eaac24 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12eaac27 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12eaac29 jmp 0x12eaac49 */
  goto L_12eaac49;
L_12eaac2b:;
  /* 12eaac2b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12eaac32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaac35 push edx */
  push32((uint32_t)(EDX));
  /* 12eaac36 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12eaac39 push eax */
  push32((uint32_t)(EAX));
  /* 12eaac3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eaac3d push ecx */
  push32((uint32_t)(ECX));
  /* 12eaac3e call 0x12eac590 */
  push32(0x12eaac43u); f_12eac590();
  /* 12eaac43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaac46 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12eaac49:;
  /* 12eaac49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaac4c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaac4f je 0x12eaac65 */
  if (C.zf) goto L_12eaac65;
  /* 12eaac51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaac54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12eaac57 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12eaac5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaac5d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12eaac60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eaac63 jmp 0x12eaac6d */
  goto L_12eaac6d;
L_12eaac65:;
  /* 12eaac65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaac68 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12eaac6d:;
  /* 12eaac6d pop edi */
  EDI = (pop32());
  /* 12eaac6e pop esi */
  ESI = (pop32());
  /* 12eaac6f pop ebx */
  EBX = (pop32());
  /* 12eaac70 mov esp, ebp */
  ESP = (EBP);
  /* 12eaac72 pop ebp */
  EBP = (pop32());
  /* 12eaac73 ret  */
  ESPCHK(0x12eaaa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac80 @ 0x12eaac80 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12eaac80(void) {
  FTRACE(0x12eaac80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaac80 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaac81 mov ebp, esp */
  EBP = (ESP);
  /* 12eaac83 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaac89 push ebx */
  push32((uint32_t)(EBX));
  /* 12eaac8a push esi */
  push32((uint32_t)(ESI));
  /* 12eaac8b push edi */
  push32((uint32_t)(EDI));
  /* 12eaac8c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12eaac93 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12eaac9d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12eaaca4:;
  /* 12eaaca4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaaca7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eaaca9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12eaacac movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaacb0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaacb3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaacb6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12eaacb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eaacbb je 0x12eab897 */
  if (C.zf) goto L_12eab897;
  /* 12eaacc1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaacc8 jl 0x12eab897 */
  if ((C.sf!=C.of)) goto L_12eab897;
  /* 12eaacce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaacd2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaacd5 jl 0x12eaacf6 */
  if ((C.sf!=C.of)) goto L_12eaacf6;
  /* 12eaacd7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaacdb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaacde jg 0x12eaacf6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eaacf6;
  /* 12eaace0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaace4 movsx ecx, byte ptr [eax + 0x12ebb078] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12ebb078))));
  /* 12eaaceb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12eaacee mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12eaacf4 jmp 0x12eaad00 */
  goto L_12eaad00;
L_12eaacf6:;
  /* 12eaacf6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12eaad00:;
  /* 12eaad00 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12eaad06 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12eaad09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaad0c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaad0f movsx edx, byte ptr [ecx + eax*8 + 0x12ebb098] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12ebb098))));
  /* 12eaad17 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12eaad1a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12eaad1d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaad20 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12eaad26 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaad2d ja 0x12eab892 */
  if ((!C.cf&&!C.zf)) goto L_12eab892;
  /* 12eaad33 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12eaad39 jmp dword ptr [ecx*4 + 0x12eab8a4] */
  switch (ECX) {
    case 0: goto L_12eaad40;
    case 1: goto L_12eaadda;
    case 2: goto L_12eaae1c;
    case 3: goto L_12eaae8b;
    case 4: goto L_12eaaee3;
    case 5: goto L_12eaaef2;
    case 6: goto L_12eaaf3e;
    case 7: goto L_12eaafd1;
    case 8: goto L_12eaae68;
    case 9: goto L_12eaae73;
    case 10: goto L_12eaae5e;
    case 11: goto L_12eaae53;
    case 12: goto L_12eaae7e;
    case 13: goto L_12eaae86;
    default: x86_unimpl("switch@0x12eaad39 out of table"); return;
  }
L_12eaad40:;
  /* 12eaad40 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12eaad47 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eaad4a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12eaad50 mov eax, dword ptr [0x12ebdcb8] */
  EAX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eaad55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaad57 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12eaad5b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12eaad61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eaad63 je 0x12eaadbd */
  if (C.zf) goto L_12eaadbd;
  /* 12eaad65 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12eaad6b push edx */
  push32((uint32_t)(EDX));
  /* 12eaad6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaad6f push eax */
  push32((uint32_t)(EAX));
  /* 12eaad70 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaad74 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaad75 call 0x12eab9b0 */
  push32(0x12eaad7au); f_12eab9b0();
  /* 12eaad7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaad7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaad80 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eaad82 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12eaad85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaad88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaad8b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12eaad8e:;
  /* 12eaad8e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaad92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eaad94 jne 0x12eaadb7 */
  if (!C.zf) goto L_12eaadb7;
  /* 12eaad96 push 0x12ebb118 */
  push32((uint32_t)(0x12ebb118u));
  /* 12eaad9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaad9d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12eaada2 push 0x12ebb10c */
  push32((uint32_t)(0x12ebb10cu));
  /* 12eaada7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaada9 call 0x12ea2db0 */
  push32(0x12eaadaeu); f_12ea2db0();
  /* 12eaadae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaadb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaadb4 jne 0x12eaadb7 */
  if (!C.zf) goto L_12eaadb7;
  /* 12eaadb6 int3  */
  x86_unimpl("int3 @ 0x12eaadb6");
L_12eaadb7:;
  /* 12eaadb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaadb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaadbb jne 0x12eaad8e */
  if (!C.zf) goto L_12eaad8e;
L_12eaadbd:;
  /* 12eaadbd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12eaadc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaadc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaadc7 push edx */
  push32((uint32_t)(EDX));
  /* 12eaadc8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaadcc push eax */
  push32((uint32_t)(EAX));
  /* 12eaadcd call 0x12eab9b0 */
  push32(0x12eaadd2u); f_12eab9b0();
  /* 12eaadd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaadd5 jmp 0x12eab892 */
  goto L_12eab892;
L_12eaadda:;
  /* 12eaadda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eaade1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaade4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12eaadea mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12eaadf0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12eaadf6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12eaadfc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12eaadff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eaae06 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12eaae10 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12eaae17 jmp 0x12eab892 */
  goto L_12eab892;
L_12eaae1c:;
  /* 12eaae1c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaae20 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12eaae26 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12eaae2c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaae2f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12eaae35 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaae3c ja 0x12eaae86 */
  if ((!C.cf&&!C.zf)) goto L_12eaae86;
  /* 12eaae3e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12eaae44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaae46 mov al, byte ptr [ecx + 0x12eab8dc] */
  AL = (r8((uint32_t)(ECX + 0x12eab8dc)));
  /* 12eaae4c jmp dword ptr [eax*4 + 0x12eab8c4] */
  switch (EAX) {
    case 0: goto L_12eaae68;
    case 1: goto L_12eaae73;
    case 2: goto L_12eaae5e;
    case 3: goto L_12eaae53;
    case 4: goto L_12eaae7e;
    case 5: goto L_12eaae86;
    default: x86_unimpl("switch@0x12eaae4c out of table"); return;
  }
L_12eaae53:;
  /* 12eaae53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaae56 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaae59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eaae5c jmp 0x12eaae86 */
  goto L_12eaae86;
L_12eaae5e:;
  /* 12eaae5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaae61 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12eaae63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eaae66 jmp 0x12eaae86 */
  goto L_12eaae86;
L_12eaae68:;
  /* 12eaae68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaae6b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12eaae6e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eaae71 jmp 0x12eaae86 */
  goto L_12eaae86;
L_12eaae73:;
  /* 12eaae73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaae76 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12eaae79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eaae7c jmp 0x12eaae86 */
  goto L_12eaae86;
L_12eaae7e:;
  /* 12eaae7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaae81 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12eaae83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eaae86:;
  /* 12eaae86 jmp 0x12eab892 */
  goto L_12eab892;
L_12eaae8b:;
  /* 12eaae8b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaae8f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaae92 jne 0x12eaaec7 */
  if (!C.zf) goto L_12eaaec7;
  /* 12eaae94 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12eaae97 push edx */
  push32((uint32_t)(EDX));
  /* 12eaae98 call 0x12eabac0 */
  push32(0x12eaae9du); f_12eabac0();
  /* 12eaae9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaaea0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12eaaea6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaaead jge 0x12eaaec5 */
  if ((C.sf==C.of)) goto L_12eaaec5;
  /* 12eaaeaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaaeb2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12eaaeb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eaaeb7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12eaaebd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eaaebf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12eaaec5:;
  /* 12eaaec5 jmp 0x12eaaede */
  goto L_12eaaede;
L_12eaaec7:;
  /* 12eaaec7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12eaaecd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eaaed0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaaed4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12eaaed8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12eaaede:;
  /* 12eaaede jmp 0x12eab892 */
  goto L_12eab892;
L_12eaaee3:;
  /* 12eaaee3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12eaaeed jmp 0x12eab892 */
  goto L_12eab892;
L_12eaaef2:;
  /* 12eaaef2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaaef6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaaef9 jne 0x12eaaf22 */
  if (!C.zf) goto L_12eaaf22;
  /* 12eaaefb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12eaaefe push eax */
  push32((uint32_t)(EAX));
  /* 12eaaeff call 0x12eabac0 */
  push32(0x12eaaf04u); f_12eabac0();
  /* 12eaaf04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaaf07 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12eaaf0d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaaf14 jge 0x12eaaf20 */
  if ((C.sf==C.of)) goto L_12eaaf20;
  /* 12eaaf16 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12eaaf20:;
  /* 12eaaf20 jmp 0x12eaaf39 */
  goto L_12eaaf39;
L_12eaaf22:;
  /* 12eaaf22 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12eaaf28 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eaaf2b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaaf2f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12eaaf33 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12eaaf39:;
  /* 12eaaf39 jmp 0x12eab892 */
  goto L_12eab892;
L_12eaaf3e:;
  /* 12eaaf3e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaaf42 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12eaaf48 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12eaaf4e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaaf51 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12eaaf57 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaaf5e ja 0x12eaafcc */
  if ((!C.cf&&!C.zf)) goto L_12eaafcc;
  /* 12eaaf60 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12eaaf66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaaf68 mov al, byte ptr [ecx + 0x12eab901] */
  AL = (r8((uint32_t)(ECX + 0x12eab901)));
  /* 12eaaf6e jmp dword ptr [eax*4 + 0x12eab8ed] */
  switch (EAX) {
    case 0: goto L_12eaaf80;
    case 1: goto L_12eaafb9;
    case 2: goto L_12eaaf75;
    case 3: goto L_12eaafc3;
    case 4: goto L_12eaafcc;
    default: x86_unimpl("switch@0x12eaaf6e out of table"); return;
  }
L_12eaaf75:;
  /* 12eaaf75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaaf78 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaaf7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eaaf7e jmp 0x12eaafcc */
  goto L_12eaafcc;
L_12eaaf80:;
  /* 12eaaf80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaaf83 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eaaf86 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaaf89 jne 0x12eaafab */
  if (!C.zf) goto L_12eaafab;
  /* 12eaaf8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaaf8e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12eaaf92 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaaf95 jne 0x12eaafab */
  if (!C.zf) goto L_12eaafab;
  /* 12eaaf97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaaf9a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaaf9d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12eaafa0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaafa3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12eaafa6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eaafa9 jmp 0x12eaafb7 */
  goto L_12eaafb7;
L_12eaafab:;
  /* 12eaafab mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12eaafb2 jmp 0x12eaad40 */
  goto L_12eaad40;
L_12eaafb7:;
  /* 12eaafb7 jmp 0x12eaafcc */
  goto L_12eaafcc;
L_12eaafb9:;
  /* 12eaafb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaafbc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12eaafbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eaafc1 jmp 0x12eaafcc */
  goto L_12eaafcc;
L_12eaafc3:;
  /* 12eaafc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaafc6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12eaafc9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12eaafcc:;
  /* 12eaafcc jmp 0x12eab892 */
  goto L_12eab892;
L_12eaafd1:;
  /* 12eaafd1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eaafd5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12eaafdb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12eaafe1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaafe4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12eaafea cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaaff1 ja 0x12eab6b7 */
  if ((!C.cf&&!C.zf)) goto L_12eab6b7;
  /* 12eaaff7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12eaaffd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaafff mov cl, byte ptr [edx + 0x12eab96c] */
  CL = (r8((uint32_t)(EDX + 0x12eab96c)));
  /* 12eab005 jmp dword ptr [ecx*4 + 0x12eab930] */
  switch (ECX) {
    case 0: goto L_12eab00c;
    case 1: goto L_12eab2a0;
    case 2: goto L_12eab130;
    case 3: goto L_12eab3d9;
    case 4: goto L_12eab09b;
    case 5: goto L_12eab021;
    case 6: goto L_12eab3ab;
    case 7: goto L_12eab2b0;
    case 8: goto L_12eab255;
    case 9: goto L_12eab425;
    case 10: goto L_12eab3cf;
    case 11: goto L_12eab146;
    case 12: goto L_12eab3c3;
    case 13: goto L_12eab3e5;
    case 14: goto L_12eab6b7;
    default: x86_unimpl("switch@0x12eab005 out of table"); return;
  }
L_12eab00c:;
  /* 12eab00c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab00f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab014 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab016 jne 0x12eab021 */
  if (!C.zf) goto L_12eab021;
  /* 12eab018 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab01b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12eab01e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12eab021:;
  /* 12eab021 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab024 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12eab02a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab02c je 0x12eab067 */
  if (C.zf) goto L_12eab067;
  /* 12eab02e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12eab031 push eax */
  push32((uint32_t)(EAX));
  /* 12eab032 call 0x12eabb00 */
  push32(0x12eab037u); f_12eabb00();
  /* 12eab037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab03a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12eab03e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12eab042 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab043 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12eab049 push edx */
  push32((uint32_t)(EDX));
  /* 12eab04a call 0x12eacbe0 */
  push32(0x12eab04fu); f_12eacbe0();
  /* 12eab04f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab052 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12eab055 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab059 jge 0x12eab065 */
  if ((C.sf==C.of)) goto L_12eab065;
  /* 12eab05b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12eab065:;
  /* 12eab065 jmp 0x12eab08d */
  goto L_12eab08d;
L_12eab067:;
  /* 12eab067 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12eab06a push eax */
  push32((uint32_t)(EAX));
  /* 12eab06b call 0x12eabac0 */
  push32(0x12eab070u); f_12eabac0();
  /* 12eab070 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab073 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12eab07a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12eab080 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12eab086 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12eab08d:;
  /* 12eab08d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12eab093 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12eab096 jmp 0x12eab6b7 */
  goto L_12eab6b7;
L_12eab09b:;
  /* 12eab09b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12eab09e push eax */
  push32((uint32_t)(EAX));
  /* 12eab09f call 0x12eabac0 */
  push32(0x12eab0a4u); f_12eabac0();
  /* 12eab0a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab0a7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12eab0ad cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab0b4 je 0x12eab0c2 */
  if (C.zf) goto L_12eab0c2;
  /* 12eab0b6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12eab0bc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab0c0 jne 0x12eab0dc */
  if (!C.zf) goto L_12eab0dc;
L_12eab0c2:;
  /* 12eab0c2 mov edx, dword ptr [0x12ebdfd0] */
  EDX = (r32((uint32_t)(0x12ebdfd0)));
  /* 12eab0c8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12eab0cb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab0ce push eax */
  push32((uint32_t)(EAX));
  /* 12eab0cf call 0x12ea6b20 */
  push32(0x12eab0d4u); f_12ea6b20();
  /* 12eab0d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab0d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12eab0da jmp 0x12eab12b */
  goto L_12eab12b;
L_12eab0dc:;
  /* 12eab0dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab0df and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12eab0e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eab0e7 je 0x12eab10c */
  if (C.zf) goto L_12eab10c;
  /* 12eab0e9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12eab0ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12eab0f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12eab0f5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12eab0fb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12eab0fe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12eab100 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12eab103 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12eab10a jmp 0x12eab12b */
  goto L_12eab12b;
L_12eab10c:;
  /* 12eab10c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12eab113 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12eab119 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12eab11c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12eab11f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12eab125 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12eab128 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12eab12b:;
  /* 12eab12b jmp 0x12eab6b7 */
  goto L_12eab6b7;
L_12eab130:;
  /* 12eab130 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab133 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12eab139 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eab13b jne 0x12eab146 */
  if (!C.zf) goto L_12eab146;
  /* 12eab13d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab140 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12eab143 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12eab146:;
  /* 12eab146 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab14d jne 0x12eab15b */
  if (!C.zf) goto L_12eab15b;
  /* 12eab14f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12eab159 jmp 0x12eab167 */
  goto L_12eab167;
L_12eab15b:;
  /* 12eab15b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12eab161 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12eab167:;
  /* 12eab167 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12eab16d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12eab173 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12eab176 push edx */
  push32((uint32_t)(EDX));
  /* 12eab177 call 0x12eabac0 */
  push32(0x12eab17cu); f_12eabac0();
  /* 12eab17c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab17f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12eab182 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab185 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab18a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab18c je 0x12eab1f6 */
  if (C.zf) goto L_12eab1f6;
  /* 12eab18e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab192 jne 0x12eab19d */
  if (!C.zf) goto L_12eab19d;
  /* 12eab194 mov ecx, dword ptr [0x12ebdfd4] */
  ECX = (r32((uint32_t)(0x12ebdfd4)));
  /* 12eab19a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12eab19d:;
  /* 12eab19d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12eab1a4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab1a7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12eab1ad:;
  /* 12eab1ad mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12eab1b3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12eab1b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab1bc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12eab1c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab1c4 je 0x12eab1e6 */
  if (C.zf) goto L_12eab1e6;
  /* 12eab1c6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12eab1cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eab1ce mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12eab1d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab1d3 je 0x12eab1e6 */
  if (C.zf) goto L_12eab1e6;
  /* 12eab1d5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12eab1db add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab1de mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12eab1e4 jmp 0x12eab1ad */
  goto L_12eab1ad;
L_12eab1e6:;
  /* 12eab1e6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12eab1ec sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab1ef sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12eab1f1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12eab1f4 jmp 0x12eab250 */
  goto L_12eab250;
L_12eab1f6:;
  /* 12eab1f6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab1fa jne 0x12eab204 */
  if (!C.zf) goto L_12eab204;
  /* 12eab1fc mov eax, dword ptr [0x12ebdfd0] */
  EAX = (r32((uint32_t)(0x12ebdfd0)));
  /* 12eab201 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12eab204:;
  /* 12eab204 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab207 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12eab20d:;
  /* 12eab20d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12eab213 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12eab219 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab21c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12eab222 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab224 je 0x12eab244 */
  if (C.zf) goto L_12eab244;
  /* 12eab226 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12eab22c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eab22f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab231 je 0x12eab244 */
  if (C.zf) goto L_12eab244;
  /* 12eab233 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12eab239 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab23c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12eab242 jmp 0x12eab20d */
  goto L_12eab20d;
L_12eab244:;
  /* 12eab244 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12eab24a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab24d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12eab250:;
  /* 12eab250 jmp 0x12eab6b7 */
  goto L_12eab6b7;
L_12eab255:;
  /* 12eab255 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12eab258 push edx */
  push32((uint32_t)(EDX));
  /* 12eab259 call 0x12eabac0 */
  push32(0x12eab25eu); f_12eabac0();
  /* 12eab25e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab261 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12eab267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab26a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab26d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab26f je 0x12eab283 */
  if (C.zf) goto L_12eab283;
  /* 12eab271 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12eab277 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12eab27e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12eab281 jmp 0x12eab291 */
  goto L_12eab291;
L_12eab283:;
  /* 12eab283 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12eab289 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12eab28f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12eab291:;
  /* 12eab291 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12eab29b jmp 0x12eab6b7 */
  goto L_12eab6b7;
L_12eab2a0:;
  /* 12eab2a0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12eab2a7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12eab2aa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12eab2ad mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12eab2b0:;
  /* 12eab2b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab2b3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12eab2b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eab2b8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12eab2be mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12eab2c1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab2c8 jge 0x12eab2d6 */
  if ((C.sf==C.of)) goto L_12eab2d6;
  /* 12eab2ca mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12eab2d4 jmp 0x12eab2f2 */
  goto L_12eab2f2;
L_12eab2d6:;
  /* 12eab2d6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab2dd jne 0x12eab2f2 */
  if (!C.zf) goto L_12eab2f2;
  /* 12eab2df movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eab2e3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab2e6 jne 0x12eab2f2 */
  if (!C.zf) goto L_12eab2f2;
  /* 12eab2e8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12eab2f2:;
  /* 12eab2f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eab2f5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab2f8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12eab2fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eab2fe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab301 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eab303 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12eab306 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12eab30c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12eab312 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eab315 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab316 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12eab31c push edx */
  push32((uint32_t)(EDX));
  /* 12eab31d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eab321 push eax */
  push32((uint32_t)(EAX));
  /* 12eab322 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab325 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab326 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12eab32c push edx */
  push32((uint32_t)(EDX));
  /* 12eab32d call dword ptr [0x12ebe3c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebe3c0))), 0x12eab333u);
  /* 12eab333 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab339 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab33e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab340 je 0x12eab358 */
  if (C.zf) goto L_12eab358;
  /* 12eab342 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab349 jne 0x12eab358 */
  if (!C.zf) goto L_12eab358;
  /* 12eab34b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab34e push ecx */
  push32((uint32_t)(ECX));
  /* 12eab34f call dword ptr [0x12ebe3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebe3cc))), 0x12eab355u);
  /* 12eab355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eab358:;
  /* 12eab358 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12eab35c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab35f jne 0x12eab37a */
  if (!C.zf) goto L_12eab37a;
  /* 12eab361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab364 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab369 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab36b jne 0x12eab37a */
  if (!C.zf) goto L_12eab37a;
  /* 12eab36d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab370 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab371 call dword ptr [0x12ebe3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebe3c4))), 0x12eab377u);
  /* 12eab377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eab37a:;
  /* 12eab37a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab37d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eab380 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab383 jne 0x12eab397 */
  if (!C.zf) goto L_12eab397;
  /* 12eab385 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab388 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12eab38b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eab38e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab391 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab394 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12eab397:;
  /* 12eab397 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab39a push eax */
  push32((uint32_t)(EAX));
  /* 12eab39b call 0x12ea6b20 */
  push32(0x12eab3a0u); f_12ea6b20();
  /* 12eab3a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab3a3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12eab3a6 jmp 0x12eab6b7 */
  goto L_12eab6b7;
L_12eab3ab:;
  /* 12eab3ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab3ae or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12eab3b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eab3b4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12eab3be jmp 0x12eab445 */
  goto L_12eab445;
L_12eab3c3:;
  /* 12eab3c3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12eab3cd jmp 0x12eab445 */
  goto L_12eab445;
L_12eab3cf:;
  /* 12eab3cf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12eab3d9:;
  /* 12eab3d9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12eab3e3 jmp 0x12eab3ef */
  goto L_12eab3ef;
L_12eab3e5:;
  /* 12eab3e5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12eab3ef:;
  /* 12eab3ef mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12eab3f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab3fc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12eab402 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab404 je 0x12eab423 */
  if (C.zf) goto L_12eab423;
  /* 12eab406 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12eab40d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12eab413 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab416 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12eab41c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12eab423:;
  /* 12eab423 jmp 0x12eab445 */
  goto L_12eab445;
L_12eab425:;
  /* 12eab425 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12eab42f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab432 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12eab438 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eab43a je 0x12eab445 */
  if (C.zf) goto L_12eab445;
  /* 12eab43c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab43f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12eab442 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12eab445:;
  /* 12eab445 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab448 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab44d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab44f je 0x12eab46e */
  if (C.zf) goto L_12eab46e;
  /* 12eab451 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12eab454 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab455 call 0x12eabae0 */
  push32(0x12eab45au); f_12eabae0();
  /* 12eab45a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab45d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12eab463 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12eab469 jmp 0x12eab4ff */
  goto L_12eab4ff;
L_12eab46e:;
  /* 12eab46e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab471 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12eab474 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab476 je 0x12eab4c0 */
  if (C.zf) goto L_12eab4c0;
  /* 12eab478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab47b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab47e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab480 je 0x12eab4a0 */
  if (C.zf) goto L_12eab4a0;
  /* 12eab482 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12eab485 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab486 call 0x12eabac0 */
  push32(0x12eab48bu); f_12eabac0();
  /* 12eab48b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab48e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12eab491 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eab492 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12eab498 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12eab49e jmp 0x12eab4be */
  goto L_12eab4be;
L_12eab4a0:;
  /* 12eab4a0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12eab4a3 push edx */
  push32((uint32_t)(EDX));
  /* 12eab4a4 call 0x12eabac0 */
  push32(0x12eab4a9u); f_12eabac0();
  /* 12eab4a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab4ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eab4b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eab4b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12eab4b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12eab4be:;
  /* 12eab4be jmp 0x12eab4ff */
  goto L_12eab4ff;
L_12eab4c0:;
  /* 12eab4c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab4c3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab4c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab4c8 je 0x12eab4e5 */
  if (C.zf) goto L_12eab4e5;
  /* 12eab4ca lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12eab4cd push ecx */
  push32((uint32_t)(ECX));
  /* 12eab4ce call 0x12eabac0 */
  push32(0x12eab4d3u); f_12eabac0();
  /* 12eab4d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab4d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eab4d7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12eab4dd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12eab4e3 jmp 0x12eab4ff */
  goto L_12eab4ff;
L_12eab4e5:;
  /* 12eab4e5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12eab4e8 push edx */
  push32((uint32_t)(EDX));
  /* 12eab4e9 call 0x12eabac0 */
  push32(0x12eab4eeu); f_12eabac0();
  /* 12eab4ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab4f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eab4f3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12eab4f9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12eab4ff:;
  /* 12eab4ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab502 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12eab505 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab507 je 0x12eab547 */
  if (C.zf) goto L_12eab547;
  /* 12eab509 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab510 jg 0x12eab547 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eab547;
  /* 12eab512 jl 0x12eab51d */
  if ((C.sf!=C.of)) goto L_12eab51d;
  /* 12eab514 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab51b jae 0x12eab547 */
  if (!C.cf) goto L_12eab547;
L_12eab51d:;
  /* 12eab51d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12eab523 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eab525 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12eab52b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab52e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eab530 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12eab536 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12eab53c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab53f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12eab542 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eab545 jmp 0x12eab55f */
  goto L_12eab55f;
L_12eab547:;
  /* 12eab547 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12eab54d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12eab553 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12eab559 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12eab55f:;
  /* 12eab55f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab562 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12eab568 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab56a jne 0x12eab587 */
  if (!C.zf) goto L_12eab587;
  /* 12eab56c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12eab572 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12eab578 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12eab57b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12eab581 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12eab587:;
  /* 12eab587 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab58e jge 0x12eab59c */
  if ((C.sf==C.of)) goto L_12eab59c;
  /* 12eab590 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12eab59a jmp 0x12eab5a5 */
  goto L_12eab5a5;
L_12eab59c:;
  /* 12eab59c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab59f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12eab5a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12eab5a5:;
  /* 12eab5a5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12eab5ab or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12eab5b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab5b3 jne 0x12eab5bc */
  if (!C.zf) goto L_12eab5bc;
  /* 12eab5b5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12eab5bc:;
  /* 12eab5bc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12eab5bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12eab5c2:;
  /* 12eab5c2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12eab5c8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12eab5ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab5d1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12eab5d7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab5d9 jg 0x12eab5ef */
  if ((!C.zf&&C.sf==C.of)) goto L_12eab5ef;
  /* 12eab5db mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12eab5e1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12eab5e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eab5e9 je 0x12eab670 */
  if (C.zf) goto L_12eab670;
L_12eab5ef:;
  /* 12eab5ef mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12eab5f5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eab5f6 push edx */
  push32((uint32_t)(EDX));
  /* 12eab5f7 push eax */
  push32((uint32_t)(EAX));
  /* 12eab5f8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12eab5fe push edx */
  push32((uint32_t)(EDX));
  /* 12eab5ff mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12eab605 push eax */
  push32((uint32_t)(EAX));
  /* 12eab606 call 0x12eaa980 */
  push32(0x12eab60bu); f_12eaa980();
  /* 12eab60b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab60e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12eab614 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12eab61a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eab61b push edx */
  push32((uint32_t)(EDX));
  /* 12eab61c push eax */
  push32((uint32_t)(EAX));
  /* 12eab61d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12eab623 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab624 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12eab62a push edx */
  push32((uint32_t)(EDX));
  /* 12eab62b call 0x12eaa910 */
  push32(0x12eab630u); f_12eaa910();
  /* 12eab630 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12eab636 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12eab63c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab643 jle 0x12eab657 */
  if ((C.zf||C.sf!=C.of)) goto L_12eab657;
  /* 12eab645 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12eab64b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab651 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12eab657:;
  /* 12eab657 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab65a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12eab660 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12eab662 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab665 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab668 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12eab66b jmp 0x12eab5c2 */
  goto L_12eab5c2;
L_12eab670:;
  /* 12eab670 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12eab673 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab676 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12eab679 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab67c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab67f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12eab682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab685 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab68a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab68c je 0x12eab6b7 */
  if (C.zf) goto L_12eab6b7;
  /* 12eab68e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab691 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eab694 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab697 jne 0x12eab69f */
  if (!C.zf) goto L_12eab69f;
  /* 12eab699 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab69d jne 0x12eab6b7 */
  if (!C.zf) goto L_12eab6b7;
L_12eab69f:;
  /* 12eab69f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab6a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab6a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12eab6a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab6ab mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12eab6ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eab6b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab6b4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12eab6b7:;
  /* 12eab6b7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab6be jne 0x12eab892 */
  if (!C.zf) goto L_12eab892;
  /* 12eab6c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab6c7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab6ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab6cc je 0x12eab71d */
  if (C.zf) goto L_12eab71d;
  /* 12eab6ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab6d1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12eab6d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eab6d9 je 0x12eab6eb */
  if (C.zf) goto L_12eab6eb;
  /* 12eab6db mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12eab6e2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12eab6e9 jmp 0x12eab71d */
  goto L_12eab71d;
L_12eab6eb:;
  /* 12eab6eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab6ee and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12eab6f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab6f3 je 0x12eab705 */
  if (C.zf) goto L_12eab705;
  /* 12eab6f5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12eab6fc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12eab703 jmp 0x12eab71d */
  goto L_12eab71d;
L_12eab705:;
  /* 12eab705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab708 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12eab70b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eab70d je 0x12eab71d */
  if (C.zf) goto L_12eab71d;
  /* 12eab70f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12eab716 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12eab71d:;
  /* 12eab71d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12eab723 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab726 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab729 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12eab72f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab732 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12eab735 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab737 jne 0x12eab755 */
  if (!C.zf) goto L_12eab755;
  /* 12eab739 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12eab73f push eax */
  push32((uint32_t)(EAX));
  /* 12eab740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eab743 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab744 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12eab74a push edx */
  push32((uint32_t)(EDX));
  /* 12eab74b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12eab74d call 0x12eaba30 */
  push32(0x12eab752u); f_12eaba30();
  /* 12eab752 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eab755:;
  /* 12eab755 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12eab75b push eax */
  push32((uint32_t)(EAX));
  /* 12eab75c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eab75f push ecx */
  push32((uint32_t)(ECX));
  /* 12eab760 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eab763 push edx */
  push32((uint32_t)(EDX));
  /* 12eab764 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12eab76a push eax */
  push32((uint32_t)(EAX));
  /* 12eab76b call 0x12eaba70 */
  push32(0x12eab770u); f_12eaba70();
  /* 12eab770 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab776 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12eab779 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eab77b je 0x12eab7a3 */
  if (C.zf) goto L_12eab7a3;
  /* 12eab77d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab780 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12eab783 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab785 jne 0x12eab7a3 */
  if (!C.zf) goto L_12eab7a3;
  /* 12eab787 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12eab78d push eax */
  push32((uint32_t)(EAX));
  /* 12eab78e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eab791 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab792 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12eab798 push edx */
  push32((uint32_t)(EDX));
  /* 12eab799 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12eab79b call 0x12eaba30 */
  push32(0x12eab7a0u); f_12eaba30();
  /* 12eab7a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eab7a3:;
  /* 12eab7a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab7a7 je 0x12eab851 */
  if (C.zf) goto L_12eab851;
  /* 12eab7ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab7b1 jle 0x12eab851 */
  if ((C.zf||C.sf!=C.of)) goto L_12eab851;
  /* 12eab7b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab7ba mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12eab7c0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eab7c3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12eab7c9:;
  /* 12eab7c9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12eab7cf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12eab7d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab7d8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12eab7de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab7e0 je 0x12eab84f */
  if (C.zf) goto L_12eab84f;
  /* 12eab7e2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12eab7e8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12eab7eb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12eab7f2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12eab7f9 push eax */
  push32((uint32_t)(EAX));
  /* 12eab7fa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12eab800 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab801 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12eab807 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab80a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12eab810 call 0x12eacbe0 */
  push32(0x12eab815u); f_12eacbe0();
  /* 12eab815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab818 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12eab81e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab825 jg 0x12eab829 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eab829;
  /* 12eab827 jmp 0x12eab84f */
  goto L_12eab84f;
L_12eab829:;
  /* 12eab829 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12eab82f push eax */
  push32((uint32_t)(EAX));
  /* 12eab830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eab833 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab834 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12eab83a push edx */
  push32((uint32_t)(EDX));
  /* 12eab83b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12eab841 push eax */
  push32((uint32_t)(EAX));
  /* 12eab842 call 0x12eaba70 */
  push32(0x12eab847u); f_12eaba70();
  /* 12eab847 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab84a jmp 0x12eab7c9 */
  goto L_12eab7c9;
L_12eab84f:;
  /* 12eab84f jmp 0x12eab86c */
  goto L_12eab86c;
L_12eab851:;
  /* 12eab851 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12eab857 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab858 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eab85b push edx */
  push32((uint32_t)(EDX));
  /* 12eab85c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eab85f push eax */
  push32((uint32_t)(EAX));
  /* 12eab860 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eab863 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab864 call 0x12eaba70 */
  push32(0x12eab869u); f_12eaba70();
  /* 12eab869 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eab86c:;
  /* 12eab86c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eab86f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12eab872 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eab874 je 0x12eab892 */
  if (C.zf) goto L_12eab892;
  /* 12eab876 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12eab87c push eax */
  push32((uint32_t)(EAX));
  /* 12eab87d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eab880 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab881 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12eab887 push edx */
  push32((uint32_t)(EDX));
  /* 12eab888 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12eab88a call 0x12eaba30 */
  push32(0x12eab88fu); f_12eaba30();
  /* 12eab88f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eab892:;
  /* 12eab892 jmp 0x12eaaca4 */
  goto L_12eaaca4;
L_12eab897:;
  /* 12eab897 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12eab89d pop edi */
  EDI = (pop32());
  /* 12eab89e pop esi */
  ESI = (pop32());
  /* 12eab89f pop ebx */
  EBX = (pop32());
  /* 12eab8a0 mov esp, ebp */
  ESP = (EBP);
  /* 12eab8a2 pop ebp */
  EBP = (pop32());
  /* 12eab8a3 ret  */
  ESPCHK(0x12eaac80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9b0 @ 0x12eab9b0 (119 bytes, 44 insns) */
void f_12eab9b0(void) {
  FTRACE(0x12eab9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eab9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eab9b1 mov ebp, esp */
  EBP = (ESP);
  /* 12eab9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eab9b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eab9b7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12eab9ba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eab9bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eab9c0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12eab9c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eab9c6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eab9ca jl 0x12eab9f2 */
  if ((C.sf!=C.of)) goto L_12eab9f2;
  /* 12eab9cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eab9cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eab9d1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12eab9d4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12eab9d6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12eab9da and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12eab9e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eab9e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eab9e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eab9e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eab9eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eab9ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12eab9f0 jmp 0x12eaba05 */
  goto L_12eaba05;
L_12eab9f2:;
  /* 12eab9f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eab9f5 push edx */
  push32((uint32_t)(EDX));
  /* 12eab9f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eab9f9 push eax */
  push32((uint32_t)(EAX));
  /* 12eab9fa call 0x12eaaa00 */
  push32(0x12eab9ffu); f_12eaaa00();
  /* 12eab9ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaba02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eaba05:;
  /* 12eaba05 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaba09 jne 0x12eaba16 */
  if (!C.zf) goto L_12eaba16;
  /* 12eaba0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eaba0e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12eaba14 jmp 0x12eaba23 */
  goto L_12eaba23;
L_12eaba16:;
  /* 12eaba16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eaba19 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eaba1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaba1e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eaba21 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12eaba23:;
  /* 12eaba23 mov esp, ebp */
  ESP = (EBP);
  /* 12eaba25 pop ebp */
  EBP = (pop32());
  /* 12eaba26 ret  */
  ESPCHK(0x12eab9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba30 @ 0x12eaba30 (53 bytes, 23 insns) */
void f_12eaba30(void) {
  FTRACE(0x12eaba30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaba30 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaba31 mov ebp, esp */
  EBP = (ESP);
L_12eaba33:;
  /* 12eaba33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaba36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaba39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaba3c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12eaba3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaba41 jle 0x12eaba63 */
  if ((C.zf||C.sf!=C.of)) goto L_12eaba63;
  /* 12eaba43 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eaba46 push edx */
  push32((uint32_t)(EDX));
  /* 12eaba47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eaba4a push eax */
  push32((uint32_t)(EAX));
  /* 12eaba4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaba4e push ecx */
  push32((uint32_t)(ECX));
  /* 12eaba4f call 0x12eab9b0 */
  push32(0x12eaba54u); f_12eab9b0();
  /* 12eaba54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaba57 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eaba5a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaba5d jne 0x12eaba61 */
  if (!C.zf) goto L_12eaba61;
  /* 12eaba5f jmp 0x12eaba63 */
  goto L_12eaba63;
L_12eaba61:;
  /* 12eaba61 jmp 0x12eaba33 */
  goto L_12eaba33;
L_12eaba63:;
  /* 12eaba63 pop ebp */
  EBP = (pop32());
  /* 12eaba64 ret  */
  ESPCHK(0x12eaba30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba70 @ 0x12eaba70 (74 bytes, 31 insns) */
void f_12eaba70(void) {
  FTRACE(0x12eaba70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaba70 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaba71 mov ebp, esp */
  EBP = (ESP);
  /* 12eaba73 push ecx */
  push32((uint32_t)(ECX));
L_12eaba74:;
  /* 12eaba74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaba77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eaba7a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaba7d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12eaba80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaba82 jle 0x12eabab6 */
  if ((C.zf||C.sf!=C.of)) goto L_12eabab6;
  /* 12eaba84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eaba87 push edx */
  push32((uint32_t)(EDX));
  /* 12eaba88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eaba8b push eax */
  push32((uint32_t)(EAX));
  /* 12eaba8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaba8f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eaba92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eaba95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaba98 push eax */
  push32((uint32_t)(EAX));
  /* 12eaba99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaba9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaba9f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12eabaa2 call 0x12eab9b0 */
  push32(0x12eabaa7u); f_12eab9b0();
  /* 12eabaa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabaaa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eabaad cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabab0 jne 0x12eabab4 */
  if (!C.zf) goto L_12eabab4;
  /* 12eabab2 jmp 0x12eabab6 */
  goto L_12eabab6;
L_12eabab4:;
  /* 12eabab4 jmp 0x12eaba74 */
  goto L_12eaba74;
L_12eabab6:;
  /* 12eabab6 mov esp, ebp */
  ESP = (EBP);
  /* 12eabab8 pop ebp */
  EBP = (pop32());
  /* 12eabab9 ret  */
  ESPCHK(0x12eaba70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac0 @ 0x12eabac0 (26 bytes, 12 insns) */
void f_12eabac0(void) {
  FTRACE(0x12eabac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eabac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eabac1 mov ebp, esp */
  EBP = (ESP);
  /* 12eabac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabac6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eabac8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabacb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabace mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12eabad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabad3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eabad5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12eabad8 pop ebp */
  EBP = (pop32());
  /* 12eabad9 ret  */
  ESPCHK(0x12eabac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae0 @ 0x12eabae0 (31 bytes, 14 insns) */
void f_12eabae0(void) {
  FTRACE(0x12eabae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eabae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eabae1 mov ebp, esp */
  EBP = (ESP);
  /* 12eabae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabae6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eabae8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabaeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabaee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12eabaf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabaf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eabaf5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eabaf8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12eabafa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12eabafd pop ebp */
  EBP = (pop32());
  /* 12eabafe ret  */
  ESPCHK(0x12eabae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb00 @ 0x12eabb00 (27 bytes, 12 insns) */
void f_12eabb00(void) {
  FTRACE(0x12eabb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eabb00 push ebp */
  push32((uint32_t)(EBP));
  /* 12eabb01 mov ebp, esp */
  EBP = (ESP);
  /* 12eabb03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabb06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eabb08 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabb0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabb0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12eabb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabb13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eabb15 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12eabb19 pop ebp */
  EBP = (pop32());
  /* 12eabb1a ret  */
  ESPCHK(0x12eabb00u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12eabb20 (145 bytes, 42 insns) */
void f_12eabb20(void) {
  FTRACE(0x12eabb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eabb20 push ebp */
  push32((uint32_t)(EBP));
  /* 12eabb21 mov ebp, esp */
  EBP = (ESP);
  /* 12eabb23 push ecx */
  push32((uint32_t)(ECX));
  /* 12eabb24 call 0x12eabbd0 */
  push32(0x12eabb29u); f_12eabbd0();
  /* 12eabb29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabb2c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12eabb2e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eabb35 jmp 0x12eabb40 */
  goto L_12eabb40;
L_12eabb37:;
  /* 12eabb37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eabb3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabb3d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12eabb40:;
  /* 12eabb40 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabb44 jae 0x12eabb6a */
  if (!C.cf) goto L_12eabb6a;
  /* 12eabb46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eabb49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabb4c cmp ecx, dword ptr [eax*8 + 0x12ebdfd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12ebdfd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabb53 jne 0x12eabb68 */
  if (!C.zf) goto L_12eabb68;
  /* 12eabb55 call 0x12eabbc0 */
  push32(0x12eabb5au); f_12eabbc0();
  /* 12eabb5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eabb5d mov ecx, dword ptr [edx*8 + 0x12ebdfdc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12ebdfdc)));
  /* 12eabb64 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12eabb66 jmp 0x12eabbad */
  goto L_12eabbad;
L_12eabb68:;
  /* 12eabb68 jmp 0x12eabb37 */
  goto L_12eabb37;
L_12eabb6a:;
  /* 12eabb6a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabb6e jb 0x12eabb83 */
  if (C.cf) goto L_12eabb83;
  /* 12eabb70 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabb74 ja 0x12eabb83 */
  if ((!C.cf&&!C.zf)) goto L_12eabb83;
  /* 12eabb76 call 0x12eabbc0 */
  push32(0x12eabb7bu); f_12eabbc0();
  /* 12eabb7b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12eabb81 jmp 0x12eabbad */
  goto L_12eabbad;
L_12eabb83:;
  /* 12eabb83 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabb8a jb 0x12eabba2 */
  if (C.cf) goto L_12eabba2;
  /* 12eabb8c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabb93 ja 0x12eabba2 */
  if ((!C.cf&&!C.zf)) goto L_12eabba2;
  /* 12eabb95 call 0x12eabbc0 */
  push32(0x12eabb9au); f_12eabbc0();
  /* 12eabb9a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12eabba0 jmp 0x12eabbad */
  goto L_12eabbad;
L_12eabba2:;
  /* 12eabba2 call 0x12eabbc0 */
  push32(0x12eabba7u); f_12eabbc0();
  /* 12eabba7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12eabbad:;
  /* 12eabbad mov esp, ebp */
  ESP = (EBP);
  /* 12eabbaf pop ebp */
  EBP = (pop32());
  /* 12eabbb0 ret  */
  ESPCHK(0x12eabb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbc0 @ 0x12eabbc0 (13 bytes, 6 insns) */
void f_12eabbc0(void) {
  FTRACE(0x12eabbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eabbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eabbc1 mov ebp, esp */
  EBP = (ESP);
  /* 12eabbc3 call 0x12ea3730 */
  push32(0x12eabbc8u); f_12ea3730();
  /* 12eabbc8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabbcb pop ebp */
  EBP = (pop32());
  /* 12eabbcc ret  */
  ESPCHK(0x12eabbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbd0 @ 0x12eabbd0 (13 bytes, 6 insns) */
void f_12eabbd0(void) {
  FTRACE(0x12eabbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eabbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eabbd1 mov ebp, esp */
  EBP = (ESP);
  /* 12eabbd3 call 0x12ea3730 */
  push32(0x12eabbd8u); f_12ea3730();
  /* 12eabbd8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabbdb pop ebp */
  EBP = (pop32());
  /* 12eabbdc ret  */
  ESPCHK(0x12eabbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbe0 @ 0x12eabbe0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_12eabbe0(void) {
  FTRACE(0x12eabbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eabbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eabbe1 mov ebp, esp */
  EBP = (ESP);
  /* 12eabbe3 push edi */
  push32((uint32_t)(EDI));
  /* 12eabbe4 push esi */
  push32((uint32_t)(ESI));
  /* 12eabbe5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12eabbe8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eabbeb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabbee mov eax, ecx */
  EAX = (ECX);
  /* 12eabbf0 mov edx, ecx */
  EDX = (ECX);
  /* 12eabbf2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabbf4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabbf6 jbe 0x12eabc00 */
  if ((C.cf||C.zf)) goto L_12eabc00;
  /* 12eabbf8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabbfa jb 0x12eabd78 */
  if (C.cf) goto L_12eabd78;
L_12eabc00:;
  /* 12eabc00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12eabc06 jne 0x12eabc1c */
  if (!C.zf) goto L_12eabc1c;
  /* 12eabc08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eabc0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12eabc0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabc11 jb 0x12eabc3c */
  if (C.cf) goto L_12eabc3c;
  /* 12eabc13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eabc15 jmp dword ptr [edx*4 + 0x12eabd28] */
  switch (EDX) {
    case 0: goto L_12eabd38;
    case 1: goto L_12eabd40;
    case 2: goto L_12eabd4c;
    case 3: goto L_12eabd60;
    default: x86_unimpl("switch@0x12eabc15 out of table"); return;
  }
L_12eabc1c:;
  /* 12eabc1c mov eax, edi */
  EAX = (EDI);
  /* 12eabc1e mov edx, 3 */
  EDX = (0x3u);
  /* 12eabc23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eabc26 jb 0x12eabc34 */
  if (C.cf) goto L_12eabc34;
  /* 12eabc28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12eabc2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabc2d jmp dword ptr [eax*4 + 0x12eabc40] */
  switch (EAX) {
    case 1: goto L_12eabc50;
    case 2: goto L_12eabc7c;
    case 3: goto L_12eabca0;
    default: x86_unimpl("switch@0x12eabc2d out of table"); return;
  }
L_12eabc34:;
  /* 12eabc34 jmp dword ptr [ecx*4 + 0x12eabd38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12eabd38)))); return;
  /* 12eabc3b nop  */
  /* nop */
L_12eabc3c:;
  /* 12eabc3c jmp dword ptr [ecx*4 + 0x12eabcbc] */
  switch (ECX) {
    case 0: goto L_12eabd1f;
    case 1: goto L_12eabd0c;
    case 2: goto L_12eabd04;
    case 3: goto L_12eabcfc;
    case 4: goto L_12eabcf4;
    case 5: goto L_12eabcec;
    case 6: goto L_12eabce4;
    case 7: goto L_12eabcdc;
    default: x86_unimpl("switch@0x12eabc3c out of table"); return;
  }
  /* 12eabc43 nop  */
  /* nop */
L_12eabc50:;
  /* 12eabc50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eabc52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eabc54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eabc56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eabc59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eabc5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eabc5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eabc62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eabc65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabc68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabc6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabc6e jb 0x12eabc3c */
  if (C.cf) goto L_12eabc3c;
  /* 12eabc70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eabc72 jmp dword ptr [edx*4 + 0x12eabd28] */
  switch (EDX) {
    case 0: goto L_12eabd38;
    case 1: goto L_12eabd40;
    case 2: goto L_12eabd4c;
    case 3: goto L_12eabd60;
    default: x86_unimpl("switch@0x12eabc72 out of table"); return;
  }
  /* 12eabc79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eabc7c:;
  /* 12eabc7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eabc7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eabc80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eabc82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eabc85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eabc88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eabc8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabc8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabc91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabc94 jb 0x12eabc3c */
  if (C.cf) goto L_12eabc3c;
  /* 12eabc96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eabc98 jmp dword ptr [edx*4 + 0x12eabd28] */
  switch (EDX) {
    case 0: goto L_12eabd38;
    case 1: goto L_12eabd40;
    case 2: goto L_12eabd4c;
    case 3: goto L_12eabd60;
    default: x86_unimpl("switch@0x12eabc98 out of table"); return;
  }
  /* 12eabc9f nop  */
  /* nop */
L_12eabca0:;
  /* 12eabca0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eabca2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eabca4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eabca6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12eabca7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eabcaa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12eabcab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabcae jb 0x12eabc3c */
  if (C.cf) goto L_12eabc3c;
  /* 12eabcb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eabcb2 jmp dword ptr [edx*4 + 0x12eabd28] */
  switch (EDX) {
    case 0: goto L_12eabd38;
    case 1: goto L_12eabd40;
    case 2: goto L_12eabd4c;
    case 3: goto L_12eabd60;
    default: x86_unimpl("switch@0x12eabcb2 out of table"); return;
  }
  /* 12eabcb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eabcdc:;
  /* 12eabcdc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12eabce0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12eabce4:;
  /* 12eabce4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12eabce8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12eabcec:;
  /* 12eabcec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12eabcf0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12eabcf4:;
  /* 12eabcf4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12eabcf8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12eabcfc:;
  /* 12eabcfc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12eabd00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12eabd04:;
  /* 12eabd04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12eabd08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12eabd0c:;
  /* 12eabd0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12eabd10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12eabd14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12eabd1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabd1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12eabd1f:;
  /* 12eabd1f jmp dword ptr [edx*4 + 0x12eabd28] */
  switch (EDX) {
    case 0: goto L_12eabd38;
    case 1: goto L_12eabd40;
    case 2: goto L_12eabd4c;
    case 3: goto L_12eabd60;
    default: x86_unimpl("switch@0x12eabd1f out of table"); return;
  }
  /* 12eabd26 mov edi, edi */
  EDI = (EDI);
L_12eabd38:;
  /* 12eabd38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabd3b pop esi */
  ESI = (pop32());
  /* 12eabd3c pop edi */
  EDI = (pop32());
  /* 12eabd3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eabd3e ret  */
  ESPCHK(0x12eabbe0u, _esp0);
  ESP += 4; return;
  /* 12eabd3f nop  */
  /* nop */
L_12eabd40:;
  /* 12eabd40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eabd42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eabd44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabd47 pop esi */
  ESI = (pop32());
  /* 12eabd48 pop edi */
  EDI = (pop32());
  /* 12eabd49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eabd4a ret  */
  ESPCHK(0x12eabbe0u, _esp0);
  ESP += 4; return;
  /* 12eabd4b nop  */
  /* nop */
L_12eabd4c:;
  /* 12eabd4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eabd4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eabd50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eabd53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eabd56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabd59 pop esi */
  ESI = (pop32());
  /* 12eabd5a pop edi */
  EDI = (pop32());
  /* 12eabd5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eabd5c ret  */
  ESPCHK(0x12eabbe0u, _esp0);
  ESP += 4; return;
  /* 12eabd5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eabd60:;
  /* 12eabd60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eabd62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12eabd64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eabd67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eabd6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eabd6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eabd70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabd73 pop esi */
  ESI = (pop32());
  /* 12eabd74 pop edi */
  EDI = (pop32());
  /* 12eabd75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eabd76 ret  */
  ESPCHK(0x12eabbe0u, _esp0);
  ESP += 4; return;
  /* 12eabd77 nop  */
  /* nop */
L_12eabd78:;
  /* 12eabd78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12eabd7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12eabd80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12eabd86 jne 0x12eabdac */
  if (!C.zf) goto L_12eabdac;
  /* 12eabd88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eabd8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12eabd8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabd91 jb 0x12eabda0 */
  if (C.cf) goto L_12eabda0;
  /* 12eabd93 std  */
  C.df=1;
  /* 12eabd94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eabd96 cld  */
  C.df=0;
  /* 12eabd97 jmp dword ptr [edx*4 + 0x12eabec0] */
  switch (EDX) {
    case 0: goto L_12eabed0;
    case 1: goto L_12eabed8;
    case 2: goto L_12eabee8;
    case 3: goto L_12eabefc;
    default: x86_unimpl("switch@0x12eabd97 out of table"); return;
  }
  /* 12eabd9e mov edi, edi */
  EDI = (EDI);
L_12eabda0:;
  /* 12eabda0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eabda2 jmp dword ptr [ecx*4 + 0x12eabe70] */
  switch (ECX) {
    case 0: goto L_12eabeb7;
    default: x86_unimpl("switch@0x12eabda2 out of table"); return;
  }
  /* 12eabda9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eabdac:;
  /* 12eabdac mov eax, edi */
  EAX = (EDI);
  /* 12eabdae mov edx, 3 */
  EDX = (0x3u);
  /* 12eabdb3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabdb6 jb 0x12eabdc4 */
  if (C.cf) goto L_12eabdc4;
  /* 12eabdb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12eabdbb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eabdbd jmp dword ptr [eax*4 + 0x12eabdc8] */
  switch (EAX) {
    case 1: goto L_12eabdd8;
    case 2: goto L_12eabdf8;
    case 3: goto L_12eabe20;
    default: x86_unimpl("switch@0x12eabdbd out of table"); return;
  }
L_12eabdc4:;
  /* 12eabdc4 jmp dword ptr [ecx*4 + 0x12eabec0] */
  switch (ECX) {
    case 0: goto L_12eabed0;
    case 1: goto L_12eabed8;
    case 2: goto L_12eabee8;
    case 3: goto L_12eabefc;
    default: x86_unimpl("switch@0x12eabdc4 out of table"); return;
  }
  /* 12eabdcb nop  */
  /* nop */
L_12eabdd8:;
  /* 12eabdd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eabddb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eabddd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eabde0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12eabde1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eabde4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12eabde5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabde8 jb 0x12eabda0 */
  if (C.cf) goto L_12eabda0;
  /* 12eabdea std  */
  C.df=1;
  /* 12eabdeb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eabded cld  */
  C.df=0;
  /* 12eabdee jmp dword ptr [edx*4 + 0x12eabec0] */
  switch (EDX) {
    case 0: goto L_12eabed0;
    case 1: goto L_12eabed8;
    case 2: goto L_12eabee8;
    case 3: goto L_12eabefc;
    default: x86_unimpl("switch@0x12eabdee out of table"); return;
  }
  /* 12eabdf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eabdf8:;
  /* 12eabdf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eabdfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eabdfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eabe00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eabe03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eabe06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eabe09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eabe0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eabe0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabe12 jb 0x12eabda0 */
  if (C.cf) goto L_12eabda0;
L_12eabe14:;
  /* 12eabe14 std  */
  C.df=1;
  /* 12eabe15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eabe17 cld  */
  C.df=0;
  /* 12eabe18 jmp dword ptr [edx*4 + 0x12eabec0] */
  switch (EDX) {
    case 0: goto L_12eabed0;
    case 1: goto L_12eabed8;
    case 2: goto L_12eabee8;
    case 3: goto L_12eabefc;
    default: x86_unimpl("switch@0x12eabe18 out of table"); return;
  }
  /* 12eabe1f nop  */
  /* nop */
L_12eabe20:;
  /* 12eabe20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eabe23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eabe25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eabe28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eabe2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eabe2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eabe31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12eabe34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eabe37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eabe3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eabe3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabe40 jb 0x12eabda0 */
  if (C.cf) goto L_12eabda0;
  /* 12eabe46 std  */
  C.df=1;
  /* 12eabe47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12eabe49 cld  */
  C.df=0;
  /* 12eabe4a jmp dword ptr [edx*4 + 0x12eabec0] */
  switch (EDX) {
    case 0: goto L_12eabed0;
    case 1: goto L_12eabed8;
    case 2: goto L_12eabee8;
    case 3: goto L_12eabefc;
    default: x86_unimpl("switch@0x12eabe4a out of table"); return;
  }
  /* 12eabe51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12eabe54 je 0x12eabe14 */
  if (C.zf) goto L_12eabe14;
  /* 12eabe56 ljmp 0x8412:0xeabe7c12 */
  x86_unimpl("ljmp @ 0x12eabe56");
  /* 12eabe5d mov esi, 0xbe8c12ea */
  ESI = (0xbe8c12eau);
  /* 12eabe62 ljmp 0x9c12:0xeabe9412 */
  x86_unimpl("ljmp @ 0x12eabe62");
  /* 12eabe69 mov esi, 0xbea412ea */
  ESI = (0xbea412eau);
  /* 12eabe74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12eabe78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12eabe7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12eabe80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12eabe84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12eabe88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12eabe8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12eabe90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12eabe94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12eabe98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12eabe9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12eabea0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12eabea4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12eabea8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12eabeac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12eabeb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabeb5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12eabeb7:;
  /* 12eabeb7 jmp dword ptr [edx*4 + 0x12eabec0] */
  switch (EDX) {
    case 0: goto L_12eabed0;
    case 1: goto L_12eabed8;
    case 2: goto L_12eabee8;
    case 3: goto L_12eabefc;
    default: x86_unimpl("switch@0x12eabeb7 out of table"); return;
  }
  /* 12eabebe mov edi, edi */
  EDI = (EDI);
L_12eabed0:;
  /* 12eabed0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabed3 pop esi */
  ESI = (pop32());
  /* 12eabed4 pop edi */
  EDI = (pop32());
  /* 12eabed5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eabed6 ret  */
  ESPCHK(0x12eabbe0u, _esp0);
  ESP += 4; return;
  /* 12eabed7 nop  */
  /* nop */
L_12eabed8:;
  /* 12eabed8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eabedb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eabede mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabee1 pop esi */
  ESI = (pop32());
  /* 12eabee2 pop edi */
  EDI = (pop32());
  /* 12eabee3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eabee4 ret  */
  ESPCHK(0x12eabbe0u, _esp0);
  ESP += 4; return;
  /* 12eabee5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eabee8:;
  /* 12eabee8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eabeeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eabeee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eabef1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eabef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabef7 pop esi */
  ESI = (pop32());
  /* 12eabef8 pop edi */
  EDI = (pop32());
  /* 12eabef9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eabefa ret  */
  ESPCHK(0x12eabbe0u, _esp0);
  ESP += 4; return;
  /* 12eabefb nop  */
  /* nop */
L_12eabefc:;
  /* 12eabefc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12eabeff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12eabf02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12eabf05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12eabf08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12eabf0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12eabf0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabf11 pop esi */
  ESI = (pop32());
  /* 12eabf12 pop edi */
  EDI = (pop32());
  /* 12eabf13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eabf14 ret  */
  ESPCHK(0x12eabbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf20 @ 0x12eabf20 (421 bytes, 148 insns) */
void f_12eabf20(void) {
  FTRACE(0x12eabf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eabf20 push ebp */
  push32((uint32_t)(EBP));
  /* 12eabf21 mov ebp, esp */
  EBP = (ESP);
  /* 12eabf23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eabf25 push 0x12ebb130 */
  push32((uint32_t)(0x12ebb130u));
  /* 12eabf2a push 0x12eacdf8 */
  push32((uint32_t)(0x12eacdf8u));
  /* 12eabf2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12eabf35 push eax */
  push32((uint32_t)(EAX));
  /* 12eabf36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12eabf3d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eabf40 push ebx */
  push32((uint32_t)(EBX));
  /* 12eabf41 push esi */
  push32((uint32_t)(ESI));
  /* 12eabf42 push edi */
  push32((uint32_t)(EDI));
  /* 12eabf43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eabf46 cmp dword ptr [0x12ebf7c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabf4d jne 0x12eabf9e */
  if (!C.zf) goto L_12eabf9e;
  /* 12eabf4f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12eabf52 push eax */
  push32((uint32_t)(EAX));
  /* 12eabf53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eabf55 push 0x12ebb12c */
  push32((uint32_t)(0x12ebb12cu));
  /* 12eabf5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12eabf5c call dword ptr [0x12ec22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e0))), 0x12eabf62u);
  /* 12eabf62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eabf64 je 0x12eabf72 */
  if (C.zf) goto L_12eabf72;
  /* 12eabf66 mov dword ptr [0x12ebf7c4], 1 */
  w32((uint32_t)(0x12ebf7c4), (0x1u));
  /* 12eabf70 jmp 0x12eabf9e */
  goto L_12eabf9e;
L_12eabf72:;
  /* 12eabf72 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12eabf75 push ecx */
  push32((uint32_t)(ECX));
  /* 12eabf76 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eabf78 push 0x12ebb128 */
  push32((uint32_t)(0x12ebb128u));
  /* 12eabf7d push 1 */
  push32((uint32_t)(0x1u));
  /* 12eabf7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12eabf81 call dword ptr [0x12ec22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e4))), 0x12eabf87u);
  /* 12eabf87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eabf89 je 0x12eabf97 */
  if (C.zf) goto L_12eabf97;
  /* 12eabf8b mov dword ptr [0x12ebf7c4], 2 */
  w32((uint32_t)(0x12ebf7c4), (0x2u));
  /* 12eabf95 jmp 0x12eabf9e */
  goto L_12eabf9e;
L_12eabf97:;
  /* 12eabf97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eabf99 jmp 0x12eac0c8 */
  goto L_12eac0c8;
L_12eabf9e:;
  /* 12eabf9e cmp dword ptr [0x12ebf7c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabfa5 jne 0x12eabfd5 */
  if (!C.zf) goto L_12eabfd5;
  /* 12eabfa7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabfab jne 0x12eabfb6 */
  if (!C.zf) goto L_12eabfb6;
  /* 12eabfad mov edx, dword ptr [0x12ebf7d0] */
  EDX = (r32((uint32_t)(0x12ebf7d0)));
  /* 12eabfb3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12eabfb6:;
  /* 12eabfb6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eabfb9 push eax */
  push32((uint32_t)(EAX));
  /* 12eabfba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eabfbd push ecx */
  push32((uint32_t)(ECX));
  /* 12eabfbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eabfc1 push edx */
  push32((uint32_t)(EDX));
  /* 12eabfc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eabfc5 push eax */
  push32((uint32_t)(EAX));
  /* 12eabfc6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eabfc9 push ecx */
  push32((uint32_t)(ECX));
  /* 12eabfca call dword ptr [0x12ec22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e4))), 0x12eabfd0u);
  /* 12eabfd0 jmp 0x12eac0c8 */
  goto L_12eac0c8;
L_12eabfd5:;
  /* 12eabfd5 cmp dword ptr [0x12ebf7c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabfdc jne 0x12eac0c6 */
  if (!C.zf) goto L_12eac0c6;
  /* 12eabfe2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eabfe6 jne 0x12eabff1 */
  if (!C.zf) goto L_12eabff1;
  /* 12eabfe8 mov edx, dword ptr [0x12ebf7e0] */
  EDX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eabfee mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12eabff1:;
  /* 12eabff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eabff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eabff5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eabff8 push eax */
  push32((uint32_t)(EAX));
  /* 12eabff9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eabffc push ecx */
  push32((uint32_t)(ECX));
  /* 12eabffd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12eac000 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eac002 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac004 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12eac007 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac00a push edx */
  push32((uint32_t)(EDX));
  /* 12eac00b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eac00e push eax */
  push32((uint32_t)(EAX));
  /* 12eac00f call dword ptr [0x12ec22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e8))), 0x12eac015u);
  /* 12eac015 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12eac018 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac01c jne 0x12eac025 */
  if (!C.zf) goto L_12eac025;
  /* 12eac01e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac020 jmp 0x12eac0c8 */
  goto L_12eac0c8;
L_12eac025:;
  /* 12eac025 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eac02c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eac02f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12eac031 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac034 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12eac036 call 0x12ea6e90 */
  push32(0x12eac03bu); f_12ea6e90();
  /* 12eac03b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12eac03e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eac041 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eac044 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12eac047 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eac04a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12eac04c push edx */
  push32((uint32_t)(EDX));
  /* 12eac04d push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac04f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eac052 push eax */
  push32((uint32_t)(EAX));
  /* 12eac053 call 0x12ea7a60 */
  push32(0x12eac058u); f_12ea7a60();
  /* 12eac058 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac05b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eac062 jmp 0x12eac07b */
  goto L_12eac07b;
  /* 12eac064 mov eax, 1 */
  EAX = (0x1u);
  /* 12eac069 ret  */
  ESPCHK(0x12eabf20u, _esp0);
  ESP += 4; return;
  /* 12eac06a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12eac06d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12eac074 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eac07b:;
  /* 12eac07b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac07f jne 0x12eac085 */
  if (!C.zf) goto L_12eac085;
  /* 12eac081 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac083 jmp 0x12eac0c8 */
  goto L_12eac0c8;
L_12eac085:;
  /* 12eac085 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eac088 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac089 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eac08c push edx */
  push32((uint32_t)(EDX));
  /* 12eac08d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eac090 push eax */
  push32((uint32_t)(EAX));
  /* 12eac091 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac094 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac095 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eac097 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eac09a push edx */
  push32((uint32_t)(EDX));
  /* 12eac09b call dword ptr [0x12ec22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e8))), 0x12eac0a1u);
  /* 12eac0a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12eac0a4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac0a8 jne 0x12eac0ae */
  if (!C.zf) goto L_12eac0ae;
  /* 12eac0aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac0ac jmp 0x12eac0c8 */
  goto L_12eac0c8;
L_12eac0ae:;
  /* 12eac0ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eac0b1 push eax */
  push32((uint32_t)(EAX));
  /* 12eac0b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eac0b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac0b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eac0b9 push edx */
  push32((uint32_t)(EDX));
  /* 12eac0ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac0bd push eax */
  push32((uint32_t)(EAX));
  /* 12eac0be call dword ptr [0x12ec22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e0))), 0x12eac0c4u);
  /* 12eac0c4 jmp 0x12eac0c8 */
  goto L_12eac0c8;
L_12eac0c6:;
  /* 12eac0c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eac0c8:;
  /* 12eac0c8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12eac0cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eac0ce mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12eac0d5 pop edi */
  EDI = (pop32());
  /* 12eac0d6 pop esi */
  ESI = (pop32());
  /* 12eac0d7 pop ebx */
  EBX = (pop32());
  /* 12eac0d8 mov esp, ebp */
  ESP = (EBP);
  /* 12eac0da pop ebp */
  EBP = (pop32());
  /* 12eac0db ret  */
  ESPCHK(0x12eabf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0e0 @ 0x12eac0e0 (727 bytes, 263 insns) */
void f_12eac0e0(void) {
  FTRACE(0x12eac0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eac0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eac0e1 mov ebp, esp */
  EBP = (ESP);
  /* 12eac0e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eac0e5 push 0x12ebb140 */
  push32((uint32_t)(0x12ebb140u));
  /* 12eac0ea push 0x12eacdf8 */
  push32((uint32_t)(0x12eacdf8u));
  /* 12eac0ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12eac0f5 push eax */
  push32((uint32_t)(EAX));
  /* 12eac0f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12eac0fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac100 push ebx */
  push32((uint32_t)(EBX));
  /* 12eac101 push esi */
  push32((uint32_t)(ESI));
  /* 12eac102 push edi */
  push32((uint32_t)(EDI));
  /* 12eac103 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eac106 cmp dword ptr [0x12ebf7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac10d jne 0x12eac166 */
  if (!C.zf) goto L_12eac166;
  /* 12eac10f push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac111 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac113 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eac115 push 0x12ebb12c */
  push32((uint32_t)(0x12ebb12cu));
  /* 12eac11a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eac11f push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac121 call dword ptr [0x12ec22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22d8))), 0x12eac127u);
  /* 12eac127 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eac129 je 0x12eac137 */
  if (C.zf) goto L_12eac137;
  /* 12eac12b mov dword ptr [0x12ebf7e8], 1 */
  w32((uint32_t)(0x12ebf7e8), (0x1u));
  /* 12eac135 jmp 0x12eac166 */
  goto L_12eac166;
L_12eac137:;
  /* 12eac137 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac139 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac13b push 1 */
  push32((uint32_t)(0x1u));
  /* 12eac13d push 0x12ebb128 */
  push32((uint32_t)(0x12ebb128u));
  /* 12eac142 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eac147 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac149 call dword ptr [0x12ec22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22dc))), 0x12eac14fu);
  /* 12eac14f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eac151 je 0x12eac15f */
  if (C.zf) goto L_12eac15f;
  /* 12eac153 mov dword ptr [0x12ebf7e8], 2 */
  w32((uint32_t)(0x12ebf7e8), (0x2u));
  /* 12eac15d jmp 0x12eac166 */
  goto L_12eac166;
L_12eac15f:;
  /* 12eac15f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac161 jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac166:;
  /* 12eac166 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac16a jle 0x12eac17f */
  if ((C.zf||C.sf!=C.of)) goto L_12eac17f;
  /* 12eac16c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eac16f push eax */
  push32((uint32_t)(EAX));
  /* 12eac170 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eac173 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac174 call 0x12eac3f0 */
  push32(0x12eac179u); f_12eac3f0();
  /* 12eac179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac17c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12eac17f:;
  /* 12eac17f cmp dword ptr [0x12ebf7e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac186 jne 0x12eac1ab */
  if (!C.zf) goto L_12eac1ab;
  /* 12eac188 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eac18b push edx */
  push32((uint32_t)(EDX));
  /* 12eac18c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eac18f push eax */
  push32((uint32_t)(EAX));
  /* 12eac190 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eac193 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac194 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eac197 push edx */
  push32((uint32_t)(EDX));
  /* 12eac198 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac19b push eax */
  push32((uint32_t)(EAX));
  /* 12eac19c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac19f push ecx */
  push32((uint32_t)(ECX));
  /* 12eac1a0 call dword ptr [0x12ec22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22dc))), 0x12eac1a6u);
  /* 12eac1a6 jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac1ab:;
  /* 12eac1ab cmp dword ptr [0x12ebf7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac1b2 jne 0x12eac3cf */
  if (!C.zf) goto L_12eac3cf;
  /* 12eac1b8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac1bc jne 0x12eac1c7 */
  if (!C.zf) goto L_12eac1c7;
  /* 12eac1be mov edx, dword ptr [0x12ebf7e0] */
  EDX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eac1c4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12eac1c7:;
  /* 12eac1c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac1c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac1cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eac1ce push eax */
  push32((uint32_t)(EAX));
  /* 12eac1cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eac1d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac1d3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12eac1d6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eac1d8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac1da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12eac1dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac1e0 push edx */
  push32((uint32_t)(EDX));
  /* 12eac1e1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12eac1e4 push eax */
  push32((uint32_t)(EAX));
  /* 12eac1e5 call dword ptr [0x12ec22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e8))), 0x12eac1ebu);
  /* 12eac1eb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12eac1ee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac1f2 jne 0x12eac1fb */
  if (!C.zf) goto L_12eac1fb;
  /* 12eac1f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac1f6 jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac1fb:;
  /* 12eac1fb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eac202 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eac205 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12eac207 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac20a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12eac20c call 0x12ea6e90 */
  push32(0x12eac211u); f_12ea6e90();
  /* 12eac211 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12eac214 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eac217 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12eac21a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12eac21d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eac224 jmp 0x12eac23d */
  goto L_12eac23d;
  /* 12eac226 mov eax, 1 */
  EAX = (0x1u);
  /* 12eac22b ret  */
  ESPCHK(0x12eac0e0u, _esp0);
  ESP += 4; return;
  /* 12eac22c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12eac22f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12eac236 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eac23d:;
  /* 12eac23d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac241 jne 0x12eac24a */
  if (!C.zf) goto L_12eac24a;
  /* 12eac243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac245 jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac24a:;
  /* 12eac24a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eac24d push edx */
  push32((uint32_t)(EDX));
  /* 12eac24e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eac251 push eax */
  push32((uint32_t)(EAX));
  /* 12eac252 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eac255 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac256 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eac259 push edx */
  push32((uint32_t)(EDX));
  /* 12eac25a push 1 */
  push32((uint32_t)(0x1u));
  /* 12eac25c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12eac25f push eax */
  push32((uint32_t)(EAX));
  /* 12eac260 call dword ptr [0x12ec22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e8))), 0x12eac266u);
  /* 12eac266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eac268 jne 0x12eac271 */
  if (!C.zf) goto L_12eac271;
  /* 12eac26a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac26c jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac271:;
  /* 12eac271 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac273 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac275 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eac278 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac279 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eac27c push edx */
  push32((uint32_t)(EDX));
  /* 12eac27d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac280 push eax */
  push32((uint32_t)(EAX));
  /* 12eac281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac284 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac285 call dword ptr [0x12ec22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22d8))), 0x12eac28bu);
  /* 12eac28b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12eac28e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac292 jne 0x12eac29b */
  if (!C.zf) goto L_12eac29b;
  /* 12eac294 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac296 jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac29b:;
  /* 12eac29b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac29e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12eac2a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eac2a6 je 0x12eac2eb */
  if (C.zf) goto L_12eac2eb;
  /* 12eac2a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac2ac je 0x12eac2e6 */
  if (C.zf) goto L_12eac2e6;
  /* 12eac2ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eac2b1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac2b4 jle 0x12eac2bd */
  if ((C.zf||C.sf!=C.of)) goto L_12eac2bd;
  /* 12eac2b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac2b8 jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac2bd:;
  /* 12eac2bd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eac2c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac2c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eac2c4 push edx */
  push32((uint32_t)(EDX));
  /* 12eac2c5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eac2c8 push eax */
  push32((uint32_t)(EAX));
  /* 12eac2c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eac2cc push ecx */
  push32((uint32_t)(ECX));
  /* 12eac2cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac2d0 push edx */
  push32((uint32_t)(EDX));
  /* 12eac2d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac2d4 push eax */
  push32((uint32_t)(EAX));
  /* 12eac2d5 call dword ptr [0x12ec22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22d8))), 0x12eac2dbu);
  /* 12eac2db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eac2dd jne 0x12eac2e6 */
  if (!C.zf) goto L_12eac2e6;
  /* 12eac2df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac2e1 jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac2e6:;
  /* 12eac2e6 jmp 0x12eac3ca */
  goto L_12eac3ca;
L_12eac2eb:;
  /* 12eac2eb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eac2ee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12eac2f1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12eac2f8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eac2fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12eac2fd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac300 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12eac302 call 0x12ea6e90 */
  push32(0x12eac307u); f_12ea6e90();
  /* 12eac307 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12eac30a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eac30d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12eac310 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12eac313 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eac31a jmp 0x12eac333 */
  goto L_12eac333;
  /* 12eac31c mov eax, 1 */
  EAX = (0x1u);
  /* 12eac321 ret  */
  ESPCHK(0x12eac0e0u, _esp0);
  ESP += 4; return;
  /* 12eac322 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12eac325 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12eac32c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eac333:;
  /* 12eac333 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac337 jne 0x12eac340 */
  if (!C.zf) goto L_12eac340;
  /* 12eac339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac33b jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac340:;
  /* 12eac340 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eac343 push eax */
  push32((uint32_t)(EAX));
  /* 12eac344 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eac347 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac348 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eac34b push edx */
  push32((uint32_t)(EDX));
  /* 12eac34c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eac34f push eax */
  push32((uint32_t)(EAX));
  /* 12eac350 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac353 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac357 push edx */
  push32((uint32_t)(EDX));
  /* 12eac358 call dword ptr [0x12ec22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22d8))), 0x12eac35eu);
  /* 12eac35e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eac360 jne 0x12eac366 */
  if (!C.zf) goto L_12eac366;
  /* 12eac362 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac364 jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac366:;
  /* 12eac366 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac36a jne 0x12eac39a */
  if (!C.zf) goto L_12eac39a;
  /* 12eac36c push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac36e push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac370 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac372 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac374 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eac377 push eax */
  push32((uint32_t)(EAX));
  /* 12eac378 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eac37b push ecx */
  push32((uint32_t)(ECX));
  /* 12eac37c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12eac381 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12eac384 push edx */
  push32((uint32_t)(EDX));
  /* 12eac385 call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eac38bu);
  /* 12eac38b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12eac38e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac392 jne 0x12eac398 */
  if (!C.zf) goto L_12eac398;
  /* 12eac394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac396 jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac398:;
  /* 12eac398 jmp 0x12eac3ca */
  goto L_12eac3ca;
L_12eac39a:;
  /* 12eac39a push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac39c push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac39e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eac3a1 push eax */
  push32((uint32_t)(EAX));
  /* 12eac3a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eac3a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac3a6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eac3a9 push edx */
  push32((uint32_t)(EDX));
  /* 12eac3aa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eac3ad push eax */
  push32((uint32_t)(EAX));
  /* 12eac3ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12eac3b3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12eac3b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac3b7 call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eac3bdu);
  /* 12eac3bd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12eac3c0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac3c4 jne 0x12eac3ca */
  if (!C.zf) goto L_12eac3ca;
  /* 12eac3c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac3c8 jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac3ca:;
  /* 12eac3ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eac3cd jmp 0x12eac3d1 */
  goto L_12eac3d1;
L_12eac3cf:;
  /* 12eac3cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eac3d1:;
  /* 12eac3d1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12eac3d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eac3d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12eac3de pop edi */
  EDI = (pop32());
  /* 12eac3df pop esi */
  ESI = (pop32());
  /* 12eac3e0 pop ebx */
  EBX = (pop32());
  /* 12eac3e1 mov esp, ebp */
  ESP = (EBP);
  /* 12eac3e3 pop ebp */
  EBP = (pop32());
  /* 12eac3e4 ret  */
  ESPCHK(0x12eac0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3f0 @ 0x12eac3f0 (80 bytes, 32 insns) */
void f_12eac3f0(void) {
  FTRACE(0x12eac3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eac3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eac3f1 mov ebp, esp */
  EBP = (ESP);
  /* 12eac3f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac3f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac3f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eac3fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac3ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12eac402:;
  /* 12eac402 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eac405 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eac408 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac40b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eac40e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eac410 je 0x12eac427 */
  if (C.zf) goto L_12eac427;
  /* 12eac412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac415 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eac418 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eac41a je 0x12eac427 */
  if (C.zf) goto L_12eac427;
  /* 12eac41c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac41f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac422 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eac425 jmp 0x12eac402 */
  goto L_12eac402;
L_12eac427:;
  /* 12eac427 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac42a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eac42d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eac42f jne 0x12eac439 */
  if (!C.zf) goto L_12eac439;
  /* 12eac431 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac434 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac437 jmp 0x12eac43c */
  goto L_12eac43c;
L_12eac439:;
  /* 12eac439 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12eac43c:;
  /* 12eac43c mov esp, ebp */
  ESP = (EBP);
  /* 12eac43e pop ebp */
  EBP = (pop32());
  /* 12eac43f ret  */
  ESPCHK(0x12eac3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c440 @ 0x12eac440 (130 bytes, 43 insns) */
void f_12eac440(void) {
  FTRACE(0x12eac440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eac440 push ebp */
  push32((uint32_t)(EBP));
  /* 12eac441 mov ebp, esp */
  EBP = (ESP);
  /* 12eac443 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac447 cmp eax, dword ptr [0x12ec10dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ec10dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac44d jae 0x12eac471 */
  if (!C.cf) goto L_12eac471;
  /* 12eac44f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac452 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eac455 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac458 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12eac45b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eac45e mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12eac465 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12eac46a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12eac46d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eac46f jne 0x12eac48c */
  if (!C.zf) goto L_12eac48c;
L_12eac471:;
  /* 12eac471 call 0x12eabbc0 */
  push32(0x12eac476u); f_12eabbc0();
  /* 12eac476 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12eac47c call 0x12eabbd0 */
  push32(0x12eac481u); f_12eabbd0();
  /* 12eac481 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12eac487 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eac48a jmp 0x12eac4be */
  goto L_12eac4be;
L_12eac48c:;
  /* 12eac48c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac48f push edx */
  push32((uint32_t)(EDX));
  /* 12eac490 call 0x12ead3e0 */
  push32(0x12eac495u); f_12ead3e0();
  /* 12eac495 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac498 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eac49b push eax */
  push32((uint32_t)(EAX));
  /* 12eac49c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac49f push ecx */
  push32((uint32_t)(ECX));
  /* 12eac4a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac4a3 push edx */
  push32((uint32_t)(EDX));
  /* 12eac4a4 call 0x12eac4d0 */
  push32(0x12eac4a9u); f_12eac4d0();
  /* 12eac4a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac4ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eac4af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac4b2 push eax */
  push32((uint32_t)(EAX));
  /* 12eac4b3 call 0x12ead470 */
  push32(0x12eac4b8u); f_12ead470();
  /* 12eac4b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac4bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12eac4be:;
  /* 12eac4be mov esp, ebp */
  ESP = (EBP);
  /* 12eac4c0 pop ebp */
  EBP = (pop32());
  /* 12eac4c1 ret  */
  ESPCHK(0x12eac440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4d0 @ 0x12eac4d0 (178 bytes, 56 insns) */
void f_12eac4d0(void) {
  FTRACE(0x12eac4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eac4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eac4d1 mov ebp, esp */
  EBP = (ESP);
  /* 12eac4d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac4d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac4d9 push eax */
  push32((uint32_t)(EAX));
  /* 12eac4da call 0x12ead260 */
  push32(0x12eac4dfu); f_12ead260();
  /* 12eac4df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac4e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eac4e5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac4e9 jne 0x12eac4fe */
  if (!C.zf) goto L_12eac4fe;
  /* 12eac4eb call 0x12eabbc0 */
  push32(0x12eac4f0u); f_12eabbc0();
  /* 12eac4f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12eac4f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eac4f9 jmp 0x12eac57e */
  goto L_12eac57e;
L_12eac4fe:;
  /* 12eac4fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eac501 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac502 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac504 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac507 push edx */
  push32((uint32_t)(EDX));
  /* 12eac508 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eac50b push eax */
  push32((uint32_t)(EAX));
  /* 12eac50c call dword ptr [0x12ec22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22d4))), 0x12eac512u);
  /* 12eac512 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eac515 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac519 jne 0x12eac526 */
  if (!C.zf) goto L_12eac526;
  /* 12eac51b call dword ptr [0x12ec2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2364))), 0x12eac521u);
  /* 12eac521 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eac524 jmp 0x12eac52d */
  goto L_12eac52d;
L_12eac526:;
  /* 12eac526 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12eac52d:;
  /* 12eac52d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac531 je 0x12eac544 */
  if (C.zf) goto L_12eac544;
  /* 12eac533 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac536 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac537 call 0x12eabb20 */
  push32(0x12eac53cu); f_12eabb20();
  /* 12eac53c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac53f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eac542 jmp 0x12eac57e */
  goto L_12eac57e;
L_12eac544:;
  /* 12eac544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac547 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12eac54a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac54d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12eac550 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eac553 mov ecx, dword ptr [edx*4 + 0x12ec0fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12ec0fa0)));
  /* 12eac55a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12eac55e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12eac561 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac564 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12eac567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac56a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12eac56d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eac570 mov eax, dword ptr [eax*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12eac577 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12eac57b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12eac57e:;
  /* 12eac57e mov esp, ebp */
  ESP = (EBP);
  /* 12eac580 pop ebp */
  EBP = (pop32());
  /* 12eac581 ret  */
  ESPCHK(0x12eac4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c590 @ 0x12eac590 (130 bytes, 43 insns) */
void f_12eac590(void) {
  FTRACE(0x12eac590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eac590 push ebp */
  push32((uint32_t)(EBP));
  /* 12eac591 mov ebp, esp */
  EBP = (ESP);
  /* 12eac593 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac597 cmp eax, dword ptr [0x12ec10dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ec10dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac59d jae 0x12eac5c1 */
  if (!C.cf) goto L_12eac5c1;
  /* 12eac59f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac5a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eac5a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac5a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12eac5ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eac5ae mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12eac5b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12eac5ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12eac5bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eac5bf jne 0x12eac5dc */
  if (!C.zf) goto L_12eac5dc;
L_12eac5c1:;
  /* 12eac5c1 call 0x12eabbc0 */
  push32(0x12eac5c6u); f_12eabbc0();
  /* 12eac5c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12eac5cc call 0x12eabbd0 */
  push32(0x12eac5d1u); f_12eabbd0();
  /* 12eac5d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12eac5d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eac5da jmp 0x12eac60e */
  goto L_12eac60e;
L_12eac5dc:;
  /* 12eac5dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac5df push edx */
  push32((uint32_t)(EDX));
  /* 12eac5e0 call 0x12ead3e0 */
  push32(0x12eac5e5u); f_12ead3e0();
  /* 12eac5e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac5e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eac5eb push eax */
  push32((uint32_t)(EAX));
  /* 12eac5ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac5ef push ecx */
  push32((uint32_t)(ECX));
  /* 12eac5f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac5f3 push edx */
  push32((uint32_t)(EDX));
  /* 12eac5f4 call 0x12eac620 */
  push32(0x12eac5f9u); f_12eac620();
  /* 12eac5f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac5fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eac5ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac602 push eax */
  push32((uint32_t)(EAX));
  /* 12eac603 call 0x12ead470 */
  push32(0x12eac608u); f_12ead470();
  /* 12eac608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac60b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12eac60e:;
  /* 12eac60e mov esp, ebp */
  ESP = (EBP);
  /* 12eac610 pop ebp */
  EBP = (pop32());
  /* 12eac611 ret  */
  ESPCHK(0x12eac590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c620 @ 0x12eac620 (627 bytes, 182 insns) */
void f_12eac620(void) {
  FTRACE(0x12eac620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eac620 push ebp */
  push32((uint32_t)(EBP));
  /* 12eac621 mov ebp, esp */
  EBP = (ESP);
  /* 12eac623 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac629 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eac630 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eac633 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12eac639 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac63d jne 0x12eac646 */
  if (!C.zf) goto L_12eac646;
  /* 12eac63f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac641 jmp 0x12eac88f */
  goto L_12eac88f;
L_12eac646:;
  /* 12eac646 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac649 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eac64c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac64f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12eac652 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eac655 mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12eac65c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12eac661 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12eac664 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eac666 je 0x12eac678 */
  if (C.zf) goto L_12eac678;
  /* 12eac668 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eac66a push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac66c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac66f push edx */
  push32((uint32_t)(EDX));
  /* 12eac670 call 0x12eac4d0 */
  push32(0x12eac675u); f_12eac4d0();
  /* 12eac675 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eac678:;
  /* 12eac678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac67b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12eac67e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac681 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12eac684 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eac687 mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12eac68e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12eac693 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12eac698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eac69a je 0x12eac7ac */
  if (C.zf) goto L_12eac7ac;
  /* 12eac6a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac6a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eac6a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12eac6ad:;
  /* 12eac6ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac6b0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac6b3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac6b6 jae 0x12eac7aa */
  if (!C.cf) goto L_12eac7aa;
  /* 12eac6bc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12eac6c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12eac6c5:;
  /* 12eac6c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eac6c8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12eac6ce sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac6d0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac6d6 jge 0x12eac737 */
  if ((C.sf==C.of)) goto L_12eac737;
  /* 12eac6d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac6db sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac6de cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac6e1 jae 0x12eac737 */
  if (!C.cf) goto L_12eac737;
  /* 12eac6e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac6e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eac6e8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12eac6ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac6f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac6f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eac6f7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12eac6fe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac701 jne 0x12eac721 */
  if (!C.zf) goto L_12eac721;
  /* 12eac703 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12eac709 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac70c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12eac712 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eac715 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12eac718 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eac71b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac71e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12eac721:;
  /* 12eac721 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eac724 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12eac72a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12eac72c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eac72f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac732 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eac735 jmp 0x12eac6c5 */
  goto L_12eac6c5;
L_12eac737:;
  /* 12eac737 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac739 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12eac73f push edx */
  push32((uint32_t)(EDX));
  /* 12eac740 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eac743 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12eac749 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac74b push eax */
  push32((uint32_t)(EAX));
  /* 12eac74c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12eac752 push edx */
  push32((uint32_t)(EDX));
  /* 12eac753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac756 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12eac759 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac75c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12eac75f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eac762 mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12eac769 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12eac76c push eax */
  push32((uint32_t)(EAX));
  /* 12eac76d call dword ptr [0x12ec2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2324))), 0x12eac773u);
  /* 12eac773 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eac775 je 0x12eac79a */
  if (C.zf) goto L_12eac79a;
  /* 12eac777 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eac77a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac780 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12eac783 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eac786 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12eac78c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eac78e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac794 jge 0x12eac798 */
  if ((C.sf==C.of)) goto L_12eac798;
  /* 12eac796 jmp 0x12eac7aa */
  goto L_12eac7aa;
L_12eac798:;
  /* 12eac798 jmp 0x12eac7a5 */
  goto L_12eac7a5;
L_12eac79a:;
  /* 12eac79a call dword ptr [0x12ec2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2364))), 0x12eac7a0u);
  /* 12eac7a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eac7a3 jmp 0x12eac7aa */
  goto L_12eac7aa;
L_12eac7a5:;
  /* 12eac7a5 jmp 0x12eac6ad */
  goto L_12eac6ad;
L_12eac7aa:;
  /* 12eac7aa jmp 0x12eac7fc */
  goto L_12eac7fc;
L_12eac7ac:;
  /* 12eac7ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac7ae lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12eac7b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac7b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eac7b8 push edx */
  push32((uint32_t)(EDX));
  /* 12eac7b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac7bc push eax */
  push32((uint32_t)(EAX));
  /* 12eac7bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac7c0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eac7c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac7c6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12eac7c9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eac7cc mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12eac7d3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12eac7d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac7d7 call dword ptr [0x12ec2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2324))), 0x12eac7ddu);
  /* 12eac7dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eac7df je 0x12eac7f3 */
  if (C.zf) goto L_12eac7f3;
  /* 12eac7e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12eac7e8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12eac7ee mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12eac7f1 jmp 0x12eac7fc */
  goto L_12eac7fc;
L_12eac7f3:;
  /* 12eac7f3 call dword ptr [0x12ec2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2364))), 0x12eac7f9u);
  /* 12eac7f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12eac7fc:;
  /* 12eac7fc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac800 jne 0x12eac886 */
  if (!C.zf) goto L_12eac886;
  /* 12eac806 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac80a je 0x12eac83a */
  if (C.zf) goto L_12eac83a;
  /* 12eac80c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac810 jne 0x12eac829 */
  if (!C.zf) goto L_12eac829;
  /* 12eac812 call 0x12eabbc0 */
  push32(0x12eac817u); f_12eabbc0();
  /* 12eac817 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12eac81d call 0x12eabbd0 */
  push32(0x12eac822u); f_12eabbd0();
  /* 12eac822 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eac825 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12eac827 jmp 0x12eac835 */
  goto L_12eac835;
L_12eac829:;
  /* 12eac829 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eac82c push edx */
  push32((uint32_t)(EDX));
  /* 12eac82d call 0x12eabb20 */
  push32(0x12eac832u); f_12eabb20();
  /* 12eac832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eac835:;
  /* 12eac835 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eac838 jmp 0x12eac88f */
  goto L_12eac88f;
L_12eac83a:;
  /* 12eac83a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac83d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12eac840 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac843 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12eac846 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eac849 mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12eac850 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12eac855 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12eac858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eac85a je 0x12eac86b */
  if (C.zf) goto L_12eac86b;
  /* 12eac85c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eac85f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eac862 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac865 jne 0x12eac86b */
  if (!C.zf) goto L_12eac86b;
  /* 12eac867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac869 jmp 0x12eac88f */
  goto L_12eac88f;
L_12eac86b:;
  /* 12eac86b call 0x12eabbc0 */
  push32(0x12eac870u); f_12eabbc0();
  /* 12eac870 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12eac876 call 0x12eabbd0 */
  push32(0x12eac87bu); f_12eabbd0();
  /* 12eac87b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12eac881 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eac884 jmp 0x12eac88f */
  goto L_12eac88f;
L_12eac886:;
  /* 12eac886 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eac889 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12eac88f:;
  /* 12eac88f mov esp, ebp */
  ESP = (EBP);
  /* 12eac891 pop ebp */
  EBP = (pop32());
  /* 12eac892 ret  */
  ESPCHK(0x12eac620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8a0 @ 0x12eac8a0 (199 bytes, 68 insns) */
void f_12eac8a0(void) {
  FTRACE(0x12eac8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eac8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eac8a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eac8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac8a4 push ebx */
  push32((uint32_t)(EBX));
  /* 12eac8a5 push esi */
  push32((uint32_t)(ESI));
  /* 12eac8a6 push edi */
  push32((uint32_t)(EDI));
L_12eac8a7:;
  /* 12eac8a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac8ab jne 0x12eac8cb */
  if (!C.zf) goto L_12eac8cb;
  /* 12eac8ad push 0x12ebb08c */
  push32((uint32_t)(0x12ebb08cu));
  /* 12eac8b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eac8b4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12eac8b6 push 0x12ebb158 */
  push32((uint32_t)(0x12ebb158u));
  /* 12eac8bb push 2 */
  push32((uint32_t)(0x2u));
  /* 12eac8bd call 0x12ea2db0 */
  push32(0x12eac8c2u); f_12ea2db0();
  /* 12eac8c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac8c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac8c8 jne 0x12eac8cb */
  if (!C.zf) goto L_12eac8cb;
  /* 12eac8ca int3  */
  x86_unimpl("int3 @ 0x12eac8ca");
L_12eac8cb:;
  /* 12eac8cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac8cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eac8cf jne 0x12eac8a7 */
  if (!C.zf) goto L_12eac8a7;
  /* 12eac8d1 mov ecx, dword ptr [0x12ebf7ec] */
  ECX = (r32((uint32_t)(0x12ebf7ec)));
  /* 12eac8d7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac8da mov dword ptr [0x12ebf7ec], ecx */
  w32((uint32_t)(0x12ebf7ec), (ECX));
  /* 12eac8e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac8e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eac8e6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12eac8e8 push 0x12ebb158 */
  push32((uint32_t)(0x12ebb158u));
  /* 12eac8ed push 2 */
  push32((uint32_t)(0x2u));
  /* 12eac8ef push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12eac8f4 call 0x12ea3cf0 */
  push32(0x12eac8f9u); f_12ea3cf0();
  /* 12eac8f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac8fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac8ff mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12eac902 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac905 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac909 je 0x12eac926 */
  if (C.zf) goto L_12eac926;
  /* 12eac90b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac90e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12eac911 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12eac914 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac917 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12eac91a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac91d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12eac924 jmp 0x12eac94b */
  goto L_12eac94b;
L_12eac926:;
  /* 12eac926 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac929 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eac92c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12eac92f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac932 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12eac935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac938 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac93b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac93e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12eac941 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac944 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12eac94b:;
  /* 12eac94b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac94e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac951 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12eac954 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12eac956 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eac959 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12eac960 pop edi */
  EDI = (pop32());
  /* 12eac961 pop esi */
  ESI = (pop32());
  /* 12eac962 pop ebx */
  EBX = (pop32());
  /* 12eac963 mov esp, ebp */
  ESP = (EBP);
  /* 12eac965 pop ebp */
  EBP = (pop32());
  /* 12eac966 ret  */
  ESPCHK(0x12eac8a0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12eac970 (50 bytes, 17 insns) */
void f_12eac970(void) {
  FTRACE(0x12eac970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eac970 push ebp */
  push32((uint32_t)(EBP));
  /* 12eac971 mov ebp, esp */
  EBP = (ESP);
  /* 12eac973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac976 cmp eax, dword ptr [0x12ec10dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ec10dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac97c jb 0x12eac982 */
  if (C.cf) goto L_12eac982;
  /* 12eac97e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eac980 jmp 0x12eac9a0 */
  goto L_12eac9a0;
L_12eac982:;
  /* 12eac982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac985 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eac988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eac98b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12eac98e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eac991 mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12eac998 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12eac99d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12eac9a0:;
  /* 12eac9a0 pop ebp */
  EBP = (pop32());
  /* 12eac9a1 ret  */
  ESPCHK(0x12eac970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9b0 @ 0x12eac9b0 (300 bytes, 80 insns) */
void f_12eac9b0(void) {
  FTRACE(0x12eac9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eac9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eac9b1 mov ebp, esp */
  EBP = (ESP);
  /* 12eac9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eac9b4 cmp dword ptr [0x12ec0ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec0ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac9bb jne 0x12eac9c9 */
  if (!C.zf) goto L_12eac9c9;
  /* 12eac9bd mov dword ptr [0x12ec0ca0], 0x200 */
  w32((uint32_t)(0x12ec0ca0), (0x200u));
  /* 12eac9c7 jmp 0x12eac9dc */
  goto L_12eac9dc;
L_12eac9c9:;
  /* 12eac9c9 cmp dword ptr [0x12ec0ca0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12ec0ca0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eac9d0 jge 0x12eac9dc */
  if ((C.sf==C.of)) goto L_12eac9dc;
  /* 12eac9d2 mov dword ptr [0x12ec0ca0], 0x14 */
  w32((uint32_t)(0x12ec0ca0), (0x14u));
L_12eac9dc:;
  /* 12eac9dc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12eac9e1 push 0x12ebb164 */
  push32((uint32_t)(0x12ebb164u));
  /* 12eac9e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eac9e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12eac9ea mov eax, dword ptr [0x12ec0ca0] */
  EAX = (r32((uint32_t)(0x12ec0ca0)));
  /* 12eac9ef push eax */
  push32((uint32_t)(EAX));
  /* 12eac9f0 call 0x12ea4100 */
  push32(0x12eac9f5u); f_12ea4100();
  /* 12eac9f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eac9f8 mov dword ptr [0x12ebf960], eax */
  w32((uint32_t)(0x12ebf960), (EAX));
  /* 12eac9fd cmp dword ptr [0x12ebf960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaca04 jne 0x12eaca45 */
  if (!C.zf) goto L_12eaca45;
  /* 12eaca06 mov dword ptr [0x12ec0ca0], 0x14 */
  w32((uint32_t)(0x12ec0ca0), (0x14u));
  /* 12eaca10 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12eaca15 push 0x12ebb164 */
  push32((uint32_t)(0x12ebb164u));
  /* 12eaca1a push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaca1c push 4 */
  push32((uint32_t)(0x4u));
  /* 12eaca1e mov ecx, dword ptr [0x12ec0ca0] */
  ECX = (r32((uint32_t)(0x12ec0ca0)));
  /* 12eaca24 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaca25 call 0x12ea4100 */
  push32(0x12eaca2au); f_12ea4100();
  /* 12eaca2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaca2d mov dword ptr [0x12ebf960], eax */
  w32((uint32_t)(0x12ebf960), (EAX));
  /* 12eaca32 cmp dword ptr [0x12ebf960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaca39 jne 0x12eaca45 */
  if (!C.zf) goto L_12eaca45;
  /* 12eaca3b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12eaca3d call 0x12ea2c60 */
  push32(0x12eaca42u); f_12ea2c60();
  /* 12eaca42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eaca45:;
  /* 12eaca45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eaca4c jmp 0x12eaca57 */
  goto L_12eaca57;
L_12eaca4e:;
  /* 12eaca4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaca51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaca54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12eaca57:;
  /* 12eaca57 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaca5b jge 0x12eaca76 */
  if ((C.sf==C.of)) goto L_12eaca76;
  /* 12eaca5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaca60 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12eaca63 add eax, 0x12ebe140 */
  { uint32_t _a=(EAX),_b=(0x12ebe140u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaca68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaca6b mov edx, dword ptr [0x12ebf960] */
  EDX = (r32((uint32_t)(0x12ebf960)));
  /* 12eaca71 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12eaca74 jmp 0x12eaca4e */
  goto L_12eaca4e;
L_12eaca76:;
  /* 12eaca76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eaca7d jmp 0x12eaca88 */
  goto L_12eaca88;
L_12eaca7f:;
  /* 12eaca7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaca82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaca85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eaca88:;
  /* 12eaca88 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaca8c jge 0x12eacad8 */
  if ((C.sf==C.of)) goto L_12eacad8;
  /* 12eaca8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaca91 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eaca94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaca97 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12eaca9a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eaca9d mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12eacaa4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacaa8 je 0x12eacac6 */
  if (C.zf) goto L_12eacac6;
  /* 12eacaaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacaad sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eacab0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacab3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12eacab6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eacab9 mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12eacac0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacac4 jne 0x12eacad6 */
  if (!C.zf) goto L_12eacad6;
L_12eacac6:;
  /* 12eacac6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacac9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eacacc mov dword ptr [ecx + 0x12ebe150], 0xffffffff */
  w32((uint32_t)(ECX + 0x12ebe150), (0xffffffffu));
L_12eacad6:;
  /* 12eacad6 jmp 0x12eaca7f */
  goto L_12eaca7f;
L_12eacad8:;
  /* 12eacad8 mov esp, ebp */
  ESP = (EBP);
  /* 12eacada pop ebp */
  EBP = (pop32());
  /* 12eacadb ret  */
  ESPCHK(0x12eac9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cae0 @ 0x12eacae0 (26 bytes, 9 insns) */
void f_12eacae0(void) {
  FTRACE(0x12eacae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eacae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eacae1 mov ebp, esp */
  EBP = (ESP);
  /* 12eacae3 call 0x12ead6e0 */
  push32(0x12eacae8u); f_12ead6e0();
  /* 12eacae8 movsx eax, byte ptr [0x12ebf604] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12ebf604))));
  /* 12eacaef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eacaf1 je 0x12eacaf8 */
  if (C.zf) goto L_12eacaf8;
  /* 12eacaf3 call 0x12ead4a0 */
  push32(0x12eacaf8u); f_12ead4a0();
L_12eacaf8:;
  /* 12eacaf8 pop ebp */
  EBP = (pop32());
  /* 12eacaf9 ret  */
  ESPCHK(0x12eacae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb00 @ 0x12eacb00 (61 bytes, 20 insns) */
void f_12eacb00(void) {
  FTRACE(0x12eacb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eacb00 push ebp */
  push32((uint32_t)(EBP));
  /* 12eacb01 mov ebp, esp */
  EBP = (ESP);
  /* 12eacb03 cmp dword ptr [ebp + 8], 0x12ebe140 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12ebe140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacb0a jb 0x12eacb2e */
  if (C.cf) goto L_12eacb2e;
  /* 12eacb0c cmp dword ptr [ebp + 8], 0x12ebe3a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12ebe3a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacb13 ja 0x12eacb2e */
  if ((!C.cf&&!C.zf)) goto L_12eacb2e;
  /* 12eacb15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eacb18 sub eax, 0x12ebe140 */
  { uint32_t _a=(EAX),_b=(0x12ebe140u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eacb1d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12eacb20 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacb23 push eax */
  push32((uint32_t)(EAX));
  /* 12eacb24 call 0x12ea76f0 */
  push32(0x12eacb29u); f_12ea76f0();
  /* 12eacb29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacb2c jmp 0x12eacb3b */
  goto L_12eacb3b;
L_12eacb2e:;
  /* 12eacb2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eacb31 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacb34 push ecx */
  push32((uint32_t)(ECX));
  /* 12eacb35 call dword ptr [0x12ec2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2310))), 0x12eacb3bu);
L_12eacb3b:;
  /* 12eacb3b pop ebp */
  EBP = (pop32());
  /* 12eacb3c ret  */
  ESPCHK(0x12eacb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb40 @ 0x12eacb40 (41 bytes, 16 insns) */
void f_12eacb40(void) {
  FTRACE(0x12eacb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eacb40 push ebp */
  push32((uint32_t)(EBP));
  /* 12eacb41 mov ebp, esp */
  EBP = (ESP);
  /* 12eacb43 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacb47 jge 0x12eacb5a */
  if ((C.sf==C.of)) goto L_12eacb5a;
  /* 12eacb49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eacb4c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacb4f push eax */
  push32((uint32_t)(EAX));
  /* 12eacb50 call 0x12ea76f0 */
  push32(0x12eacb55u); f_12ea76f0();
  /* 12eacb55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacb58 jmp 0x12eacb67 */
  goto L_12eacb67;
L_12eacb5a:;
  /* 12eacb5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eacb5d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacb60 push ecx */
  push32((uint32_t)(ECX));
  /* 12eacb61 call dword ptr [0x12ec2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2310))), 0x12eacb67u);
L_12eacb67:;
  /* 12eacb67 pop ebp */
  EBP = (pop32());
  /* 12eacb68 ret  */
  ESPCHK(0x12eacb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb70 @ 0x12eacb70 (61 bytes, 20 insns) */
void f_12eacb70(void) {
  FTRACE(0x12eacb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eacb70 push ebp */
  push32((uint32_t)(EBP));
  /* 12eacb71 mov ebp, esp */
  EBP = (ESP);
  /* 12eacb73 cmp dword ptr [ebp + 8], 0x12ebe140 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12ebe140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacb7a jb 0x12eacb9e */
  if (C.cf) goto L_12eacb9e;
  /* 12eacb7c cmp dword ptr [ebp + 8], 0x12ebe3a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12ebe3a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacb83 ja 0x12eacb9e */
  if ((!C.cf&&!C.zf)) goto L_12eacb9e;
  /* 12eacb85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eacb88 sub eax, 0x12ebe140 */
  { uint32_t _a=(EAX),_b=(0x12ebe140u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eacb8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12eacb90 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacb93 push eax */
  push32((uint32_t)(EAX));
  /* 12eacb94 call 0x12ea7790 */
  push32(0x12eacb99u); f_12ea7790();
  /* 12eacb99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacb9c jmp 0x12eacbab */
  goto L_12eacbab;
L_12eacb9e:;
  /* 12eacb9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eacba1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacba4 push ecx */
  push32((uint32_t)(ECX));
  /* 12eacba5 call dword ptr [0x12ec230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec230c))), 0x12eacbabu);
L_12eacbab:;
  /* 12eacbab pop ebp */
  EBP = (pop32());
  /* 12eacbac ret  */
  ESPCHK(0x12eacb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbb0 @ 0x12eacbb0 (41 bytes, 16 insns) */
void f_12eacbb0(void) {
  FTRACE(0x12eacbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eacbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eacbb1 mov ebp, esp */
  EBP = (ESP);
  /* 12eacbb3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacbb7 jge 0x12eacbca */
  if ((C.sf==C.of)) goto L_12eacbca;
  /* 12eacbb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eacbbc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacbbf push eax */
  push32((uint32_t)(EAX));
  /* 12eacbc0 call 0x12ea7790 */
  push32(0x12eacbc5u); f_12ea7790();
  /* 12eacbc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacbc8 jmp 0x12eacbd7 */
  goto L_12eacbd7;
L_12eacbca:;
  /* 12eacbca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eacbcd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacbd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12eacbd1 call dword ptr [0x12ec230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec230c))), 0x12eacbd7u);
L_12eacbd7:;
  /* 12eacbd7 pop ebp */
  EBP = (pop32());
  /* 12eacbd8 ret  */
  ESPCHK(0x12eacbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbe0 @ 0x12eacbe0 (119 bytes, 34 insns) */
void f_12eacbe0(void) {
  FTRACE(0x12eacbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eacbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eacbe1 mov ebp, esp */
  EBP = (ESP);
  /* 12eacbe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eacbe6 push 0x12ebf95c */
  push32((uint32_t)(0x12ebf95cu));
  /* 12eacbeb call dword ptr [0x12ec2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2338))), 0x12eacbf1u);
  /* 12eacbf1 cmp dword ptr [0x12ebf94c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf94c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacbf8 je 0x12eacc18 */
  if (C.zf) goto L_12eacc18;
  /* 12eacbfa push 0x12ebf95c */
  push32((uint32_t)(0x12ebf95cu));
  /* 12eacbff call dword ptr [0x12ec2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2328))), 0x12eacc05u);
  /* 12eacc05 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eacc07 call 0x12ea76f0 */
  push32(0x12eacc0cu); f_12ea76f0();
  /* 12eacc0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacc0f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12eacc16 jmp 0x12eacc1f */
  goto L_12eacc1f;
L_12eacc18:;
  /* 12eacc18 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12eacc1f:;
  /* 12eacc1f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12eacc23 push eax */
  push32((uint32_t)(EAX));
  /* 12eacc24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eacc27 push ecx */
  push32((uint32_t)(ECX));
  /* 12eacc28 call 0x12eacc60 */
  push32(0x12eacc2du); f_12eacc60();
  /* 12eacc2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacc30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eacc33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacc37 je 0x12eacc45 */
  if (C.zf) goto L_12eacc45;
  /* 12eacc39 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eacc3b call 0x12ea7790 */
  push32(0x12eacc40u); f_12ea7790();
  /* 12eacc40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacc43 jmp 0x12eacc50 */
  goto L_12eacc50;
L_12eacc45:;
  /* 12eacc45 push 0x12ebf95c */
  push32((uint32_t)(0x12ebf95cu));
  /* 12eacc4a call dword ptr [0x12ec2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2328))), 0x12eacc50u);
L_12eacc50:;
  /* 12eacc50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eacc53 mov esp, ebp */
  ESP = (EBP);
  /* 12eacc55 pop ebp */
  EBP = (pop32());
  /* 12eacc56 ret  */
  ESPCHK(0x12eacbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc60 @ 0x12eacc60 (160 bytes, 50 insns) */
void f_12eacc60(void) {
  FTRACE(0x12eacc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eacc60 push ebp */
  push32((uint32_t)(EBP));
  /* 12eacc61 mov ebp, esp */
  EBP = (ESP);
  /* 12eacc63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eacc66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacc6a jne 0x12eacc73 */
  if (!C.zf) goto L_12eacc73;
  /* 12eacc6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eacc6e jmp 0x12eaccfc */
  goto L_12eaccfc;
L_12eacc73:;
  /* 12eacc73 cmp dword ptr [0x12ebf7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacc7a jne 0x12eaccaa */
  if (!C.zf) goto L_12eaccaa;
  /* 12eacc7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eacc7f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eacc84 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacc89 jle 0x12eacc9b */
  if ((C.zf||C.sf!=C.of)) goto L_12eacc9b;
  /* 12eacc8b call 0x12eabbc0 */
  push32(0x12eacc90u); f_12eabbc0();
  /* 12eacc90 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12eacc96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eacc99 jmp 0x12eaccfc */
  goto L_12eaccfc;
L_12eacc9b:;
  /* 12eacc9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eacc9e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12eacca1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12eacca3 mov eax, 1 */
  EAX = (0x1u);
  /* 12eacca8 jmp 0x12eaccfc */
  goto L_12eaccfc;
L_12eaccaa:;
  /* 12eaccaa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eaccb1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12eaccb4 push eax */
  push32((uint32_t)(EAX));
  /* 12eaccb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaccb7 mov ecx, dword ptr [0x12ebdec4] */
  ECX = (r32((uint32_t)(0x12ebdec4)));
  /* 12eaccbd push ecx */
  push32((uint32_t)(ECX));
  /* 12eaccbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaccc1 push edx */
  push32((uint32_t)(EDX));
  /* 12eaccc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaccc4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12eaccc7 push eax */
  push32((uint32_t)(EAX));
  /* 12eaccc8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12eacccd mov ecx, dword ptr [0x12ebf7e0] */
  ECX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eaccd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaccd4 call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eaccdau);
  /* 12eaccda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eaccdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacce1 je 0x12eacce9 */
  if (C.zf) goto L_12eacce9;
  /* 12eacce3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacce7 je 0x12eaccf9 */
  if (C.zf) goto L_12eaccf9;
L_12eacce9:;
  /* 12eacce9 call 0x12eabbc0 */
  push32(0x12eacceeu); f_12eabbc0();
  /* 12eaccee mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12eaccf4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eaccf7 jmp 0x12eaccfc */
  goto L_12eaccfc;
L_12eaccf9:;
  /* 12eaccf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12eaccfc:;
  /* 12eaccfc mov esp, ebp */
  ESP = (EBP);
  /* 12eaccfe pop ebp */
  EBP = (pop32());
  /* 12eaccff ret  */
  ESPCHK(0x12eacc60u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12eacd00 (32 bytes, 18 insns) */
void f_12eacd00(void) {
  FTRACE(0x12eacd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eacd00 push ebp */
  push32((uint32_t)(EBP));
  /* 12eacd01 mov ebp, esp */
  EBP = (ESP);
  /* 12eacd03 push ebx */
  push32((uint32_t)(EBX));
  /* 12eacd04 push esi */
  push32((uint32_t)(ESI));
  /* 12eacd05 push edi */
  push32((uint32_t)(EDI));
  /* 12eacd06 push ebp */
  push32((uint32_t)(EBP));
  /* 12eacd07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eacd09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eacd0b push 0x12eacd18 */
  push32((uint32_t)(0x12eacd18u));
  /* 12eacd10 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12eacd13 call 0x12eb444c */
  push32(0x12eacd18u); f_12eb444c();
  /* 12eacd18 pop ebp */
  EBP = (pop32());
  /* 12eacd19 pop edi */
  EDI = (pop32());
  /* 12eacd1a pop esi */
  ESI = (pop32());
  /* 12eacd1b pop ebx */
  EBX = (pop32());
  /* 12eacd1c mov esp, ebp */
  ESP = (EBP);
  /* 12eacd1e pop ebp */
  EBP = (pop32());
  /* 12eacd1f ret  */
  ESPCHK(0x12eacd00u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12eacd42 (104 bytes, 33 insns) */
void f_12eacd42(void) {
  FTRACE(0x12eacd42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eacd42 push ebx */
  push32((uint32_t)(EBX));
  /* 12eacd43 push esi */
  push32((uint32_t)(ESI));
  /* 12eacd44 push edi */
  push32((uint32_t)(EDI));
  /* 12eacd45 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12eacd49 push eax */
  push32((uint32_t)(EAX));
  /* 12eacd4a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12eacd4c push 0x12eacd20 */
  push32((uint32_t)(0x12eacd20u));
  /* 12eacd51 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12eacd58 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12eacd5f:;
  /* 12eacd5f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12eacd63 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12eacd66 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12eacd69 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacd6c je 0x12eacd9c */
  if (C.zf) goto L_12eacd9c;
  /* 12eacd6e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacd72 je 0x12eacd9c */
  if (C.zf) goto L_12eacd9c;
  /* 12eacd74 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12eacd77 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12eacd7a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12eacd7e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12eacd81 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacd86 jne 0x12eacd9a */
  if (!C.zf) goto L_12eacd9a;
  /* 12eacd88 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12eacd8d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12eacd91 call 0x12eacdd6 */
  push32(0x12eacd96u); f_12eacdd6();
  /* 12eacd96 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12eacd9au);
L_12eacd9a:;
  /* 12eacd9a jmp 0x12eacd5f */
  goto L_12eacd5f;
L_12eacd9c:;
  /* 12eacd9c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12eacda3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacda6 pop edi */
  EDI = (pop32());
  /* 12eacda7 pop esi */
  ESI = (pop32());
  /* 12eacda8 pop ebx */
  EBX = (pop32());
  /* 12eacda9 ret  */
  ESPCHK(0x12eacd42u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdd6 @ 0x12eacdd6 (24 bytes, 10 insns) */
void f_12eacdd6(void) {
  FTRACE(0x12eacdd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eacdd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12eacdd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12eacdd8 mov ebx, 0x12ebe3d8 */
  EBX = (0x12ebe3d8u);
  /* 12eacddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eacde0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12eacde3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12eacde6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12eacde9 pop ecx */
  ECX = (pop32());
  /* 12eacdea pop ebx */
  EBX = (pop32());
  /* 12eacdeb ret 4 */
  ESPCHK(0x12eacdd6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ceb5 @ 0x12eaceb5 (27 bytes, 11 insns) */
void f_12eaceb5(void) {
  FTRACE(0x12eaceb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaceb5 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaceb6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12eaceba mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12eacebc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12eacebf push eax */
  push32((uint32_t)(EAX));
  /* 12eacec0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12eacec3 push eax */
  push32((uint32_t)(EAX));
  /* 12eacec4 call 0x12eacd42 */
  push32(0x12eacec9u); f_12eacd42();
  /* 12eacec9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacecc pop ebp */
  EBP = (pop32());
  /* 12eacecd ret 4 */
  ESPCHK(0x12eaceb5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ced0 @ 0x12eaced0 (482 bytes, 138 insns) */
void f_12eaced0(void) {
  FTRACE(0x12eaced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaced0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaced1 mov ebp, esp */
  EBP = (ESP);
  /* 12eaced3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaced6 push esi */
  push32((uint32_t)(ESI));
  /* 12eaced7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12eacede push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12eacee0 call 0x12ea76f0 */
  push32(0x12eacee5u); f_12ea76f0();
  /* 12eacee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacee8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12eaceef jmp 0x12eacefa */
  goto L_12eacefa;
L_12eacef1:;
  /* 12eacef1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eacef4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacef7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12eacefa:;
  /* 12eacefa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacefe jge 0x12ead0a0 */
  if ((C.sf==C.of)) goto L_12ead0a0;
  /* 12eacf04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eacf07 cmp dword ptr [ecx*4 + 0x12ec0fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12ec0fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacf0f je 0x12ead006 */
  if (C.zf) goto L_12ead006;
  /* 12eacf15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eacf18 mov eax, dword ptr [edx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ec0fa0)));
  /* 12eacf1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eacf22 jmp 0x12eacf2d */
  goto L_12eacf2d;
L_12eacf24:;
  /* 12eacf24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacf27 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacf2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12eacf2d:;
  /* 12eacf2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eacf30 mov eax, dword ptr [edx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ec0fa0)));
  /* 12eacf37 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacf3c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacf3f jae 0x12eacff6 */
  if (!C.cf) goto L_12eacff6;
  /* 12eacf45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacf48 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12eacf4c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12eacf4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eacf51 jne 0x12eacff1 */
  if (!C.zf) goto L_12eacff1;
  /* 12eacf57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacf5a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacf5e jne 0x12eacf99 */
  if (!C.zf) goto L_12eacf99;
  /* 12eacf60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12eacf62 call 0x12ea76f0 */
  push32(0x12eacf67u); f_12ea76f0();
  /* 12eacf67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacf6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacf6d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacf71 jne 0x12eacf8f */
  if (!C.zf) goto L_12eacf8f;
  /* 12eacf73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacf76 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacf79 push edx */
  push32((uint32_t)(EDX));
  /* 12eacf7a call dword ptr [0x12ec235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec235c))), 0x12eacf80u);
  /* 12eacf80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacf83 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12eacf86 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacf89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacf8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12eacf8f:;
  /* 12eacf8f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12eacf91 call 0x12ea7790 */
  push32(0x12eacf96u); f_12ea7790();
  /* 12eacf96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eacf99:;
  /* 12eacf99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacf9c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacf9f push eax */
  push32((uint32_t)(EAX));
  /* 12eacfa0 call dword ptr [0x12ec2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2310))), 0x12eacfa6u);
  /* 12eacfa6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacfa9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12eacfad and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12eacfb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eacfb2 je 0x12eacfc6 */
  if (C.zf) goto L_12eacfc6;
  /* 12eacfb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacfb7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacfba push eax */
  push32((uint32_t)(EAX));
  /* 12eacfbb call dword ptr [0x12ec230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec230c))), 0x12eacfc1u);
  /* 12eacfc1 jmp 0x12eacf24 */
  goto L_12eacf24;
L_12eacfc6:;
  /* 12eacfc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacfc9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12eacfcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eacfd2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eacfd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eacfd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eacfdb sub eax, dword ptr [edx*4 + 0x12ec0fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12ec0fa0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eacfe2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eacfe3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12eacfe8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eacfea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eacfec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eacfef jmp 0x12eacff6 */
  goto L_12eacff6;
L_12eacff1:;
  /* 12eacff1 jmp 0x12eacf24 */
  goto L_12eacf24;
L_12eacff6:;
  /* 12eacff6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eacffa je 0x12ead001 */
  if (C.zf) goto L_12ead001;
  /* 12eacffc jmp 0x12ead0a0 */
  goto L_12ead0a0;
L_12ead001:;
  /* 12ead001 jmp 0x12ead09b */
  goto L_12ead09b;
L_12ead006:;
  /* 12ead006 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12ead008 push 0x12ebb16c */
  push32((uint32_t)(0x12ebb16cu));
  /* 12ead00d push 2 */
  push32((uint32_t)(0x2u));
  /* 12ead00f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12ead014 call 0x12ea3cf0 */
  push32(0x12ead019u); f_12ea3cf0();
  /* 12ead019 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead01c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ead01f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead023 je 0x12ead099 */
  if (C.zf) goto L_12ead099;
  /* 12ead025 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead028 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead02b mov dword ptr [eax*4 + 0x12ec0fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x12ec0fa0), (ECX));
  /* 12ead032 mov edx, dword ptr [0x12ec10dc] */
  EDX = (r32((uint32_t)(0x12ec10dc)));
  /* 12ead038 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead03b mov dword ptr [0x12ec10dc], edx */
  w32((uint32_t)(0x12ec10dc), (EDX));
  /* 12ead041 jmp 0x12ead04c */
  goto L_12ead04c;
L_12ead043:;
  /* 12ead043 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead046 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead049 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ead04c:;
  /* 12ead04c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead04f mov edx, dword ptr [ecx*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12ead056 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead05c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead05f jae 0x12ead084 */
  if (!C.cf) goto L_12ead084;
  /* 12ead061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead064 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12ead068 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead06b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12ead071 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead074 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12ead078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead07b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12ead082 jmp 0x12ead043 */
  goto L_12ead043;
L_12ead084:;
  /* 12ead084 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead087 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12ead08a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ead08d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead090 push edx */
  push32((uint32_t)(EDX));
  /* 12ead091 call 0x12ead3e0 */
  push32(0x12ead096u); f_12ead3e0();
  /* 12ead096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ead099:;
  /* 12ead099 jmp 0x12ead0a0 */
  goto L_12ead0a0;
L_12ead09b:;
  /* 12ead09b jmp 0x12eacef1 */
  goto L_12eacef1;
L_12ead0a0:;
  /* 12ead0a0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12ead0a2 call 0x12ea7790 */
  push32(0x12ead0a7u); f_12ea7790();
  /* 12ead0a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead0aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead0ad pop esi */
  ESI = (pop32());
  /* 12ead0ae mov esp, ebp */
  ESP = (EBP);
  /* 12ead0b0 pop ebp */
  EBP = (pop32());
  /* 12ead0b1 ret  */
  ESPCHK(0x12eaced0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12ead0c0 (183 bytes, 57 insns) */
void f_12ead0c0(void) {
  FTRACE(0x12ead0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead0c1 mov ebp, esp */
  EBP = (ESP);
  /* 12ead0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead0c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead0c7 cmp eax, dword ptr [0x12ec10dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ec10dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead0cd jae 0x12ead15a */
  if (!C.cf) goto L_12ead15a;
  /* 12ead0d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead0d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12ead0d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead0dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12ead0df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead0e2 mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12ead0e9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead0ed jne 0x12ead15a */
  if (!C.zf) goto L_12ead15a;
  /* 12ead0ef cmp dword ptr [0x12ebf5c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead0f6 jne 0x12ead13a */
  if (!C.zf) goto L_12ead13a;
  /* 12ead0f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead0fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ead0fe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead102 je 0x12ead112 */
  if (C.zf) goto L_12ead112;
  /* 12ead104 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead108 je 0x12ead120 */
  if (C.zf) goto L_12ead120;
  /* 12ead10a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead10e je 0x12ead12e */
  if (C.zf) goto L_12ead12e;
  /* 12ead110 jmp 0x12ead13a */
  goto L_12ead13a;
L_12ead112:;
  /* 12ead112 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead115 push edx */
  push32((uint32_t)(EDX));
  /* 12ead116 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12ead118 call dword ptr [0x12ec22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22cc))), 0x12ead11eu);
  /* 12ead11e jmp 0x12ead13a */
  goto L_12ead13a;
L_12ead120:;
  /* 12ead120 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead123 push eax */
  push32((uint32_t)(EAX));
  /* 12ead124 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12ead126 call dword ptr [0x12ec22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22cc))), 0x12ead12cu);
  /* 12ead12c jmp 0x12ead13a */
  goto L_12ead13a;
L_12ead12e:;
  /* 12ead12e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead131 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead132 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12ead134 call dword ptr [0x12ec22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22cc))), 0x12ead13au);
L_12ead13a:;
  /* 12ead13a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead13d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12ead140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead143 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12ead146 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead149 mov ecx, dword ptr [edx*4 + 0x12ec0fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12ec0fa0)));
  /* 12ead150 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead153 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12ead156 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ead158 jmp 0x12ead173 */
  goto L_12ead173;
L_12ead15a:;
  /* 12ead15a call 0x12eabbc0 */
  push32(0x12ead15fu); f_12eabbc0();
  /* 12ead15f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12ead165 call 0x12eabbd0 */
  push32(0x12ead16au); f_12eabbd0();
  /* 12ead16a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ead170 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12ead173:;
  /* 12ead173 mov esp, ebp */
  ESP = (EBP);
  /* 12ead175 pop ebp */
  EBP = (pop32());
  /* 12ead176 ret  */
  ESPCHK(0x12ead0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x12ead180 (216 bytes, 63 insns) */
void f_12ead180(void) {
  FTRACE(0x12ead180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead180 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead181 mov ebp, esp */
  EBP = (ESP);
  /* 12ead183 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead187 cmp eax, dword ptr [0x12ec10dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ec10dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead18d jae 0x12ead23b */
  if (!C.cf) goto L_12ead23b;
  /* 12ead193 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead196 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12ead199 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead19c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12ead19f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead1a2 mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12ead1a9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12ead1ae and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ead1b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ead1b3 je 0x12ead23b */
  if (C.zf) goto L_12ead23b;
  /* 12ead1b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead1bc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12ead1bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead1c2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12ead1c5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead1c8 mov ecx, dword ptr [edx*4 + 0x12ec0fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12ec0fa0)));
  /* 12ead1cf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead1d3 je 0x12ead23b */
  if (C.zf) goto L_12ead23b;
  /* 12ead1d5 cmp dword ptr [0x12ebf5c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead1dc jne 0x12ead21a */
  if (!C.zf) goto L_12ead21a;
  /* 12ead1de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead1e1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ead1e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead1e8 je 0x12ead1f8 */
  if (C.zf) goto L_12ead1f8;
  /* 12ead1ea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead1ee je 0x12ead204 */
  if (C.zf) goto L_12ead204;
  /* 12ead1f0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead1f4 je 0x12ead210 */
  if (C.zf) goto L_12ead210;
  /* 12ead1f6 jmp 0x12ead21a */
  goto L_12ead21a;
L_12ead1f8:;
  /* 12ead1f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ead1fa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12ead1fc call dword ptr [0x12ec22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22cc))), 0x12ead202u);
  /* 12ead202 jmp 0x12ead21a */
  goto L_12ead21a;
L_12ead204:;
  /* 12ead204 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ead206 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12ead208 call dword ptr [0x12ec22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22cc))), 0x12ead20eu);
  /* 12ead20e jmp 0x12ead21a */
  goto L_12ead21a;
L_12ead210:;
  /* 12ead210 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ead212 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12ead214 call dword ptr [0x12ec22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22cc))), 0x12ead21au);
L_12ead21a:;
  /* 12ead21a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead21d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12ead220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead223 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12ead226 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead229 mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12ead230 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12ead237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ead239 jmp 0x12ead254 */
  goto L_12ead254;
L_12ead23b:;
  /* 12ead23b call 0x12eabbc0 */
  push32(0x12ead240u); f_12eabbc0();
  /* 12ead240 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12ead246 call 0x12eabbd0 */
  push32(0x12ead24bu); f_12eabbd0();
  /* 12ead24b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ead251 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12ead254:;
  /* 12ead254 mov esp, ebp */
  ESP = (EBP);
  /* 12ead256 pop ebp */
  EBP = (pop32());
  /* 12ead257 ret  */
  ESPCHK(0x12ead180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d260 @ 0x12ead260 (102 bytes, 30 insns) */
void f_12ead260(void) {
  FTRACE(0x12ead260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead260 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead261 mov ebp, esp */
  EBP = (ESP);
  /* 12ead263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead266 cmp eax, dword ptr [0x12ec10dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ec10dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead26c jae 0x12ead2ab */
  if (!C.cf) goto L_12ead2ab;
  /* 12ead26e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead271 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12ead274 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead277 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12ead27a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead27d mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12ead284 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12ead289 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ead28c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ead28e je 0x12ead2ab */
  if (C.zf) goto L_12ead2ab;
  /* 12ead290 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead293 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12ead296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead299 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12ead29c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead29f mov ecx, dword ptr [edx*4 + 0x12ec0fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12ec0fa0)));
  /* 12ead2a6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12ead2a9 jmp 0x12ead2c4 */
  goto L_12ead2c4;
L_12ead2ab:;
  /* 12ead2ab call 0x12eabbc0 */
  push32(0x12ead2b0u); f_12eabbc0();
  /* 12ead2b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12ead2b6 call 0x12eabbd0 */
  push32(0x12ead2bbu); f_12eabbd0();
  /* 12ead2bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ead2c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12ead2c4:;
  /* 12ead2c4 pop ebp */
  EBP = (pop32());
  /* 12ead2c5 ret  */
  ESPCHK(0x12ead260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2d0 @ 0x12ead2d0 (260 bytes, 83 insns) */
void f_12ead2d0(void) {
  FTRACE(0x12ead2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead2d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ead2d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ead2d6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ead2da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead2dd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12ead2e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ead2e2 je 0x12ead2ed */
  if (C.zf) goto L_12ead2ed;
  /* 12ead2e4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12ead2e7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12ead2ea mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12ead2ed:;
  /* 12ead2ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead2f0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12ead2f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ead2f8 je 0x12ead302 */
  if (C.zf) goto L_12ead302;
  /* 12ead2fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12ead2fd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12ead2ff mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12ead302:;
  /* 12ead302 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead305 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12ead30b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ead30d je 0x12ead318 */
  if (C.zf) goto L_12ead318;
  /* 12ead30f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12ead312 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12ead315 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12ead318:;
  /* 12ead318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead31b push eax */
  push32((uint32_t)(EAX));
  /* 12ead31c call dword ptr [0x12ec2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2370))), 0x12ead322u);
  /* 12ead322 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ead325 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead329 jne 0x12ead342 */
  if (!C.zf) goto L_12ead342;
  /* 12ead32b call dword ptr [0x12ec2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2364))), 0x12ead331u);
  /* 12ead331 push eax */
  push32((uint32_t)(EAX));
  /* 12ead332 call 0x12eabb20 */
  push32(0x12ead337u); f_12eabb20();
  /* 12ead337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead33a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ead33d jmp 0x12ead3d0 */
  goto L_12ead3d0;
L_12ead342:;
  /* 12ead342 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead346 jne 0x12ead353 */
  if (!C.zf) goto L_12ead353;
  /* 12ead348 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12ead34b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12ead34e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12ead351 jmp 0x12ead362 */
  goto L_12ead362;
L_12ead353:;
  /* 12ead353 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead357 jne 0x12ead362 */
  if (!C.zf) goto L_12ead362;
  /* 12ead359 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12ead35c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12ead35f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12ead362:;
  /* 12ead362 call 0x12eaced0 */
  push32(0x12ead367u); f_12eaced0();
  /* 12ead367 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ead36a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead36e jne 0x12ead38b */
  if (!C.zf) goto L_12ead38b;
  /* 12ead370 call 0x12eabbc0 */
  push32(0x12ead375u); f_12eabbc0();
  /* 12ead375 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12ead37b call 0x12eabbd0 */
  push32(0x12ead380u); f_12eabbd0();
  /* 12ead380 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ead386 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ead389 jmp 0x12ead3d0 */
  goto L_12ead3d0;
L_12ead38b:;
  /* 12ead38b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead38e push eax */
  push32((uint32_t)(EAX));
  /* 12ead38f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead392 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead393 call 0x12ead0c0 */
  push32(0x12ead398u); f_12ead0c0();
  /* 12ead398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead39b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12ead39e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12ead3a1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12ead3a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead3a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12ead3aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead3ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12ead3b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead3b3 mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12ead3ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12ead3bd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12ead3c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead3c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead3c5 call 0x12ead470 */
  push32(0x12ead3cau); f_12ead470();
  /* 12ead3ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead3cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12ead3d0:;
  /* 12ead3d0 mov esp, ebp */
  ESP = (EBP);
  /* 12ead3d2 pop ebp */
  EBP = (pop32());
  /* 12ead3d3 ret  */
  ESPCHK(0x12ead2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3e0 @ 0x12ead3e0 (134 bytes, 44 insns) */
void f_12ead3e0(void) {
  FTRACE(0x12ead3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead3e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ead3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead3e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead3e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12ead3ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead3ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12ead3f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead3f3 mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12ead3fa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead3fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ead3ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead402 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead406 jne 0x12ead441 */
  if (!C.zf) goto L_12ead441;
  /* 12ead408 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12ead40a call 0x12ea76f0 */
  push32(0x12ead40fu); f_12ea76f0();
  /* 12ead40f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead415 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead419 jne 0x12ead437 */
  if (!C.zf) goto L_12ead437;
  /* 12ead41b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead41e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead421 push edx */
  push32((uint32_t)(EDX));
  /* 12ead422 call dword ptr [0x12ec235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec235c))), 0x12ead428u);
  /* 12ead428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead42b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ead42e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead434 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12ead437:;
  /* 12ead437 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12ead439 call 0x12ea7790 */
  push32(0x12ead43eu); f_12ea7790();
  /* 12ead43e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ead441:;
  /* 12ead441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead444 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12ead447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead44a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12ead44d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead450 mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12ead457 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12ead45b push eax */
  push32((uint32_t)(EAX));
  /* 12ead45c call dword ptr [0x12ec2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2310))), 0x12ead462u);
  /* 12ead462 mov esp, ebp */
  ESP = (EBP);
  /* 12ead464 pop ebp */
  EBP = (pop32());
  /* 12ead465 ret  */
  ESPCHK(0x12ead3e0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12ead470 (38 bytes, 13 insns) */
void f_12ead470(void) {
  FTRACE(0x12ead470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead470 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead471 mov ebp, esp */
  EBP = (ESP);
  /* 12ead473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead476 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12ead479 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead47c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12ead47f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead482 mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12ead489 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12ead48d push eax */
  push32((uint32_t)(EAX));
  /* 12ead48e call dword ptr [0x12ec230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec230c))), 0x12ead494u);
  /* 12ead494 pop ebp */
  EBP = (pop32());
  /* 12ead495 ret  */
  ESPCHK(0x12ead470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4a0 @ 0x12ead4a0 (218 bytes, 63 insns) */
void f_12ead4a0(void) {
  FTRACE(0x12ead4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead4a1 mov ebp, esp */
  EBP = (ESP);
  /* 12ead4a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ead4a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ead4ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12ead4af call 0x12ea76f0 */
  push32(0x12ead4b4u); f_12ea76f0();
  /* 12ead4b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead4b7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12ead4be jmp 0x12ead4c9 */
  goto L_12ead4c9;
L_12ead4c0:;
  /* 12ead4c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead4c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead4c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ead4c9:;
  /* 12ead4c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead4cc cmp ecx, dword ptr [0x12ec0ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ec0ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead4d2 jge 0x12ead569 */
  if ((C.sf==C.of)) goto L_12ead569;
  /* 12ead4d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead4db mov eax, dword ptr [0x12ebf960] */
  EAX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead4e0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead4e4 je 0x12ead564 */
  if (C.zf) goto L_12ead564;
  /* 12ead4e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead4e9 mov edx, dword ptr [0x12ebf960] */
  EDX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead4ef mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12ead4f2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12ead4f5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12ead4fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ead4fd je 0x12ead521 */
  if (C.zf) goto L_12ead521;
  /* 12ead4ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead502 mov eax, dword ptr [0x12ebf960] */
  EAX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead507 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12ead50a push ecx */
  push32((uint32_t)(ECX));
  /* 12ead50b call 0x12eae290 */
  push32(0x12ead510u); f_12eae290();
  /* 12ead510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead513 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead516 je 0x12ead521 */
  if (C.zf) goto L_12ead521;
  /* 12ead518 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead51b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead51e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12ead521:;
  /* 12ead521 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead525 jl 0x12ead564 */
  if ((C.sf!=C.of)) goto L_12ead564;
  /* 12ead527 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead52a mov ecx, dword ptr [0x12ebf960] */
  ECX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead530 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12ead533 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead536 push edx */
  push32((uint32_t)(EDX));
  /* 12ead537 call dword ptr [0x12ec2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2378))), 0x12ead53du);
  /* 12ead53d push 2 */
  push32((uint32_t)(0x2u));
  /* 12ead53f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead542 mov ecx, dword ptr [0x12ebf960] */
  ECX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead548 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12ead54b push edx */
  push32((uint32_t)(EDX));
  /* 12ead54c call 0x12ea4780 */
  push32(0x12ead551u); f_12ea4780();
  /* 12ead551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead554 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead557 mov ecx, dword ptr [0x12ebf960] */
  ECX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead55d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12ead564:;
  /* 12ead564 jmp 0x12ead4c0 */
  goto L_12ead4c0;
L_12ead569:;
  /* 12ead569 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ead56b call 0x12ea7790 */
  push32(0x12ead570u); f_12ea7790();
  /* 12ead570 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead576 mov esp, ebp */
  ESP = (EBP);
  /* 12ead578 pop ebp */
  EBP = (pop32());
  /* 12ead579 ret  */
  ESPCHK(0x12ead4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d580 @ 0x12ead580 (68 bytes, 26 insns) */
void f_12ead580(void) {
  FTRACE(0x12ead580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead580 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead581 mov ebp, esp */
  EBP = (ESP);
  /* 12ead583 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead584 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead588 jne 0x12ead596 */
  if (!C.zf) goto L_12ead596;
  /* 12ead58a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ead58c call 0x12ead6f0 */
  push32(0x12ead591u); f_12ead6f0();
  /* 12ead591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead594 jmp 0x12ead5c0 */
  goto L_12ead5c0;
L_12ead596:;
  /* 12ead596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead599 push eax */
  push32((uint32_t)(EAX));
  /* 12ead59a call 0x12eacb00 */
  push32(0x12ead59fu); f_12eacb00();
  /* 12ead59f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead5a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead5a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead5a6 call 0x12ead5d0 */
  push32(0x12ead5abu); f_12ead5d0();
  /* 12ead5ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead5ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ead5b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead5b4 push edx */
  push32((uint32_t)(EDX));
  /* 12ead5b5 call 0x12eacb70 */
  push32(0x12ead5bau); f_12eacb70();
  /* 12ead5ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead5bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ead5c0:;
  /* 12ead5c0 mov esp, ebp */
  ESP = (EBP);
  /* 12ead5c2 pop ebp */
  EBP = (pop32());
  /* 12ead5c3 ret  */
  ESPCHK(0x12ead580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5d0 @ 0x12ead5d0 (65 bytes, 26 insns) */
void f_12ead5d0(void) {
  FTRACE(0x12ead5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead5d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ead5d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead5d6 push eax */
  push32((uint32_t)(EAX));
  /* 12ead5d7 call 0x12ead620 */
  push32(0x12ead5dcu); f_12ead620();
  /* 12ead5dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead5df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ead5e1 je 0x12ead5e8 */
  if (C.zf) goto L_12ead5e8;
  /* 12ead5e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ead5e6 jmp 0x12ead60f */
  goto L_12ead60f;
L_12ead5e8:;
  /* 12ead5e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead5eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ead5ee and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12ead5f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ead5f6 je 0x12ead60d */
  if (C.zf) goto L_12ead60d;
  /* 12ead5f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead5fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ead5fe push ecx */
  push32((uint32_t)(ECX));
  /* 12ead5ff call 0x12eae3e0 */
  push32(0x12ead604u); f_12eae3e0();
  /* 12ead604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead607 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ead609 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ead60b jmp 0x12ead60f */
  goto L_12ead60f;
L_12ead60d:;
  /* 12ead60d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ead60f:;
  /* 12ead60f pop ebp */
  EBP = (pop32());
  /* 12ead610 ret  */
  ESPCHK(0x12ead5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d620 @ 0x12ead620 (183 bytes, 62 insns) */
void f_12ead620(void) {
  FTRACE(0x12ead620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead620 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead621 mov ebp, esp */
  EBP = (ESP);
  /* 12ead623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ead626 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ead62d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead630 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ead633 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead636 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ead639 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12ead63c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead63f jne 0x12ead6bb */
  if (!C.zf) goto L_12ead6bb;
  /* 12ead641 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead644 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12ead647 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12ead64d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ead64f je 0x12ead6bb */
  if (C.zf) goto L_12ead6bb;
  /* 12ead651 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead654 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead657 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12ead659 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ead65c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ead65f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead663 jle 0x12ead6bb */
  if ((C.zf||C.sf!=C.of)) goto L_12ead6bb;
  /* 12ead665 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead668 push edx */
  push32((uint32_t)(EDX));
  /* 12ead669 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead66c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ead66f push ecx */
  push32((uint32_t)(ECX));
  /* 12ead670 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead673 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ead676 push eax */
  push32((uint32_t)(EAX));
  /* 12ead677 call 0x12eac590 */
  push32(0x12ead67cu); f_12eac590();
  /* 12ead67c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead67f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead682 jne 0x12ead6a5 */
  if (!C.zf) goto L_12ead6a5;
  /* 12ead684 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead687 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ead68a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12ead690 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ead692 je 0x12ead6a3 */
  if (C.zf) goto L_12ead6a3;
  /* 12ead694 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead697 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12ead69a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12ead69d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead6a0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12ead6a3:;
  /* 12ead6a3 jmp 0x12ead6bb */
  goto L_12ead6bb;
L_12ead6a5:;
  /* 12ead6a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead6a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12ead6ab or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12ead6ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead6b1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12ead6b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ead6bb:;
  /* 12ead6bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead6be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead6c1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ead6c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ead6c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ead6c9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12ead6d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead6d3 mov esp, ebp */
  ESP = (EBP);
  /* 12ead6d5 pop ebp */
  EBP = (pop32());
  /* 12ead6d6 ret  */
  ESPCHK(0x12ead620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6e0 @ 0x12ead6e0 (15 bytes, 7 insns) */
void f_12ead6e0(void) {
  FTRACE(0x12ead6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead6e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ead6e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ead6e5 call 0x12ead6f0 */
  push32(0x12ead6eau); f_12ead6f0();
  /* 12ead6ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead6ed pop ebp */
  EBP = (pop32());
  /* 12ead6ee ret  */
  ESPCHK(0x12ead6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6f0 @ 0x12ead6f0 (319 bytes, 94 insns) */
void f_12ead6f0(void) {
  FTRACE(0x12ead6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead6f1 mov ebp, esp */
  EBP = (ESP);
  /* 12ead6f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ead6f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ead6fd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ead704 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ead706 call 0x12ea76f0 */
  push32(0x12ead70bu); f_12ea76f0();
  /* 12ead70b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead70e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ead715 jmp 0x12ead720 */
  goto L_12ead720;
L_12ead717:;
  /* 12ead717 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead71a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead71d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12ead720:;
  /* 12ead720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead723 cmp ecx, dword ptr [0x12ec0ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ec0ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead729 jge 0x12ead813 */
  if ((C.sf==C.of)) goto L_12ead813;
  /* 12ead72f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead732 mov eax, dword ptr [0x12ebf960] */
  EAX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead737 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead73b je 0x12ead80e */
  if (C.zf) goto L_12ead80e;
  /* 12ead741 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead744 mov edx, dword ptr [0x12ebf960] */
  EDX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead74a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12ead74d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12ead750 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12ead756 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ead758 je 0x12ead80e */
  if (C.zf) goto L_12ead80e;
  /* 12ead75e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead761 mov eax, dword ptr [0x12ebf960] */
  EAX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead766 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12ead769 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead76a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead76d push edx */
  push32((uint32_t)(EDX));
  /* 12ead76e call 0x12eacb40 */
  push32(0x12ead773u); f_12eacb40();
  /* 12ead773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead776 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead779 mov ecx, dword ptr [0x12ebf960] */
  ECX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead77f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12ead782 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12ead785 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12ead78a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ead78c je 0x12ead7f5 */
  if (C.zf) goto L_12ead7f5;
  /* 12ead78e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead792 jne 0x12ead7b9 */
  if (!C.zf) goto L_12ead7b9;
  /* 12ead794 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead797 mov edx, dword ptr [0x12ebf960] */
  EDX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead79d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12ead7a0 push eax */
  push32((uint32_t)(EAX));
  /* 12ead7a1 call 0x12ead5d0 */
  push32(0x12ead7a6u); f_12ead5d0();
  /* 12ead7a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead7a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead7ac je 0x12ead7b7 */
  if (C.zf) goto L_12ead7b7;
  /* 12ead7ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead7b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead7b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ead7b7:;
  /* 12ead7b7 jmp 0x12ead7f5 */
  goto L_12ead7f5;
L_12ead7b9:;
  /* 12ead7b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead7bd jne 0x12ead7f5 */
  if (!C.zf) goto L_12ead7f5;
  /* 12ead7bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead7c2 mov eax, dword ptr [0x12ebf960] */
  EAX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead7c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12ead7ca mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ead7cd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12ead7d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ead7d2 je 0x12ead7f5 */
  if (C.zf) goto L_12ead7f5;
  /* 12ead7d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead7d7 mov ecx, dword ptr [0x12ebf960] */
  ECX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead7dd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12ead7e0 push edx */
  push32((uint32_t)(EDX));
  /* 12ead7e1 call 0x12ead5d0 */
  push32(0x12ead7e6u); f_12ead5d0();
  /* 12ead7e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead7e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead7ec jne 0x12ead7f5 */
  if (!C.zf) goto L_12ead7f5;
  /* 12ead7ee mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12ead7f5:;
  /* 12ead7f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead7f8 mov ecx, dword ptr [0x12ebf960] */
  ECX = (r32((uint32_t)(0x12ebf960)));
  /* 12ead7fe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12ead801 push edx */
  push32((uint32_t)(EDX));
  /* 12ead802 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ead805 push eax */
  push32((uint32_t)(EAX));
  /* 12ead806 call 0x12eacbb0 */
  push32(0x12ead80bu); f_12eacbb0();
  /* 12ead80b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ead80e:;
  /* 12ead80e jmp 0x12ead717 */
  goto L_12ead717;
L_12ead813:;
  /* 12ead813 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ead815 call 0x12ea7790 */
  push32(0x12ead81au); f_12ea7790();
  /* 12ead81a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead81d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead821 jne 0x12ead828 */
  if (!C.zf) goto L_12ead828;
  /* 12ead823 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ead826 jmp 0x12ead82b */
  goto L_12ead82b;
L_12ead828:;
  /* 12ead828 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12ead82b:;
  /* 12ead82b mov esp, ebp */
  ESP = (EBP);
  /* 12ead82d pop ebp */
  EBP = (pop32());
  /* 12ead82e ret  */
  ESPCHK(0x12ead6f0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12ead830 (15 bytes, 7 insns) */
void f_12ead830(void) {
  FTRACE(0x12ead830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead830 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead831 mov ebp, esp */
  EBP = (ESP);
  /* 12ead833 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ead835 call 0x12ea2c60 */
  push32(0x12ead83au); f_12ea2c60();
  /* 12ead83a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead83d pop ebp */
  EBP = (pop32());
  /* 12ead83e ret  */
  ESPCHK(0x12ead830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d840 @ 0x12ead840 (1007 bytes, 269 insns) */
void f_12ead840(void) {
  FTRACE(0x12ead840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ead840 push ebp */
  push32((uint32_t)(EBP));
  /* 12ead841 mov ebp, esp */
  EBP = (ESP);
  /* 12ead843 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ead849 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead84d jl 0x12ead855 */
  if ((C.sf!=C.of)) goto L_12ead855;
  /* 12ead84f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead853 jle 0x12ead85c */
  if ((C.zf||C.sf!=C.of)) goto L_12ead85c;
L_12ead855:;
  /* 12ead855 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ead857 jmp 0x12eadc2b */
  goto L_12eadc2b;
L_12ead85c:;
  /* 12ead85c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ead85e call 0x12ea76f0 */
  push32(0x12ead863u); f_12ea76f0();
  /* 12ead863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead866 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ead86d mov eax, dword ptr [0x12ebf94c] */
  EAX = (r32((uint32_t)(0x12ebf94c)));
  /* 12ead872 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead875 mov dword ptr [0x12ebf94c], eax */
  w32((uint32_t)(0x12ebf94c), (EAX));
L_12ead87a:;
  /* 12ead87a cmp dword ptr [0x12ebf95c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf95c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead881 je 0x12ead88d */
  if (C.zf) goto L_12ead88d;
  /* 12ead883 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ead885 call dword ptr [0x12ec22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22c8))), 0x12ead88bu);
  /* 12ead88b jmp 0x12ead87a */
  goto L_12ead87a;
L_12ead88d:;
  /* 12ead88d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead891 je 0x12ead8d1 */
  if (C.zf) goto L_12ead8d1;
  /* 12ead893 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead897 je 0x12ead8b1 */
  if (C.zf) goto L_12ead8b1;
  /* 12ead899 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead89c push ecx */
  push32((uint32_t)(ECX));
  /* 12ead89d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead8a0 push edx */
  push32((uint32_t)(EDX));
  /* 12ead8a1 call 0x12eadc30 */
  push32(0x12ead8a6u); f_12eadc30();
  /* 12ead8a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead8a9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12ead8af jmp 0x12ead8c3 */
  goto L_12ead8c3;
L_12ead8b1:;
  /* 12ead8b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ead8b4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead8b7 mov ecx, dword ptr [eax + 0x12ebe4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12ebe4fc)));
  /* 12ead8bd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12ead8c3:;
  /* 12ead8c3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12ead8c9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ead8cc jmp 0x12eadc0b */
  goto L_12eadc0b;
L_12ead8d1:;
  /* 12ead8d1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12ead8d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ead8df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead8e3 je 0x12eadc03 */
  if (C.zf) goto L_12eadc03;
  /* 12ead8e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead8ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ead8ef cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead8f2 jne 0x12eadb14 */
  if (!C.zf) goto L_12eadb14;
  /* 12ead8f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead8fb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12ead8ff cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead902 jne 0x12eadb14 */
  if (!C.zf) goto L_12eadb14;
  /* 12ead908 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead90b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12ead90f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead912 jne 0x12eadb14 */
  if (!C.zf) goto L_12eadb14;
  /* 12ead918 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ead91b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12ead921:;
  /* 12ead921 push 0x12ebb1bc */
  push32((uint32_t)(0x12ebb1bcu));
  /* 12ead926 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12ead92c push ecx */
  push32((uint32_t)(ECX));
  /* 12ead92d call 0x12eafa90 */
  push32(0x12ead932u); f_12eafa90();
  /* 12ead932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead935 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12ead93b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead942 je 0x12ead96d */
  if (C.zf) goto L_12ead96d;
  /* 12ead944 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12ead94a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ead950 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12ead956 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead95d je 0x12ead96d */
  if (C.zf) goto L_12ead96d;
  /* 12ead95f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12ead965 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ead968 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead96b jne 0x12ead993 */
  if (!C.zf) goto L_12ead993;
L_12ead96d:;
  /* 12ead96d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead971 je 0x12ead98c */
  if (C.zf) goto L_12ead98c;
  /* 12ead973 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ead975 call 0x12ea7790 */
  push32(0x12ead97au); f_12ea7790();
  /* 12ead97a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead97d mov edx, dword ptr [0x12ebf94c] */
  EDX = (r32((uint32_t)(0x12ebf94c)));
  /* 12ead983 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ead986 mov dword ptr [0x12ebf94c], edx */
  w32((uint32_t)(0x12ebf94c), (EDX));
L_12ead98c:;
  /* 12ead98c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ead98e jmp 0x12eadc2b */
  goto L_12eadc2b;
L_12ead993:;
  /* 12ead993 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12ead99a jmp 0x12ead9a5 */
  goto L_12ead9a5;
L_12ead99c:;
  /* 12ead99c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ead99f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead9a2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12ead9a5:;
  /* 12ead9a5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead9a9 jg 0x12ead9f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ead9f3;
  /* 12ead9ab mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12ead9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead9b2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12ead9b8 push edx */
  push32((uint32_t)(EDX));
  /* 12ead9b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ead9bc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead9bf mov ecx, dword ptr [eax + 0x12ebe4f8] */
  ECX = (r32((uint32_t)(EAX + 0x12ebe4f8)));
  /* 12ead9c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ead9c6 call 0x12eafa50 */
  push32(0x12ead9cbu); f_12eafa50();
  /* 12ead9cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead9ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ead9d0 jne 0x12ead9f1 */
  if (!C.zf) goto L_12ead9f1;
  /* 12ead9d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ead9d5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ead9d8 mov eax, dword ptr [edx + 0x12ebe4f8] */
  EAX = (r32((uint32_t)(EDX + 0x12ebe4f8)));
  /* 12ead9de push eax */
  push32((uint32_t)(EAX));
  /* 12ead9df call 0x12ea6b20 */
  push32(0x12ead9e4u); f_12ea6b20();
  /* 12ead9e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ead9e7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ead9ed jne 0x12ead9f1 */
  if (!C.zf) goto L_12ead9f1;
  /* 12ead9ef jmp 0x12ead9f3 */
  goto L_12ead9f3;
L_12ead9f1:;
  /* 12ead9f1 jmp 0x12ead99c */
  goto L_12ead99c;
L_12ead9f3:;
  /* 12ead9f3 push 0x12ebb1b8 */
  push32((uint32_t)(0x12ebb1b8u));
  /* 12ead9f8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12ead9fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eada01 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12eada07 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12eada0d push edx */
  push32((uint32_t)(EDX));
  /* 12eada0e call 0x12eafa10 */
  push32(0x12eada13u); f_12eafa10();
  /* 12eada13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eada16 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12eada1c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eada23 jne 0x12eada59 */
  if (!C.zf) goto L_12eada59;
  /* 12eada25 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12eada2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eada2e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eada31 je 0x12eada59 */
  if (C.zf) goto L_12eada59;
  /* 12eada33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eada37 je 0x12eada52 */
  if (C.zf) goto L_12eada52;
  /* 12eada39 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eada3b call 0x12ea7790 */
  push32(0x12eada40u); f_12ea7790();
  /* 12eada40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eada43 mov edx, dword ptr [0x12ebf94c] */
  EDX = (r32((uint32_t)(0x12ebf94c)));
  /* 12eada49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eada4c mov dword ptr [0x12ebf94c], edx */
  w32((uint32_t)(0x12ebf94c), (EDX));
L_12eada52:;
  /* 12eada52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eada54 jmp 0x12eadc2b */
  goto L_12eadc2b;
L_12eada59:;
  /* 12eada59 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eada5d jg 0x12eadaaa */
  if ((!C.zf&&C.sf==C.of)) goto L_12eadaaa;
  /* 12eada5f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12eada65 push eax */
  push32((uint32_t)(EAX));
  /* 12eada66 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12eada6c push ecx */
  push32((uint32_t)(ECX));
  /* 12eada6d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12eada73 push edx */
  push32((uint32_t)(EDX));
  /* 12eada74 call 0x12ea7510 */
  push32(0x12eada79u); f_12ea7510();
  /* 12eada79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eada7c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12eada82 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12eada8a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12eada90 push ecx */
  push32((uint32_t)(ECX));
  /* 12eada91 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eada94 push edx */
  push32((uint32_t)(EDX));
  /* 12eada95 call 0x12eadc30 */
  push32(0x12eada9au); f_12eadc30();
  /* 12eada9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eada9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eada9f je 0x12eadaaa */
  if (C.zf) goto L_12eadaaa;
  /* 12eadaa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eadaa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadaa7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12eadaaa:;
  /* 12eadaaa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12eadab0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadab6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12eadabc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12eadac2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eadac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadac7 je 0x12eadad8 */
  if (C.zf) goto L_12eadad8;
  /* 12eadac9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12eadacf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadad2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12eadad8:;
  /* 12eadad8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12eadade movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eadae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadae3 jne 0x12ead921 */
  if (!C.zf) goto L_12ead921;
  /* 12eadae9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadaed je 0x12eadafc */
  if (C.zf) goto L_12eadafc;
  /* 12eadaef call 0x12eaddd0 */
  push32(0x12eadaf4u); f_12eaddd0();
  /* 12eadaf4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12eadafa jmp 0x12eadb06 */
  goto L_12eadb06;
L_12eadafc:;
  /* 12eadafc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12eadb06:;
  /* 12eadb06 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12eadb0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eadb0f jmp 0x12eadc01 */
  goto L_12eadc01;
L_12eadb14:;
  /* 12eadb14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadb17 push edx */
  push32((uint32_t)(EDX));
  /* 12eadb18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eadb1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12eadb1c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12eadb22 push eax */
  push32((uint32_t)(EAX));
  /* 12eadb23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eadb26 push ecx */
  push32((uint32_t)(ECX));
  /* 12eadb27 call 0x12eaded0 */
  push32(0x12eadb2cu); f_12eaded0();
  /* 12eadb2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadb2f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eadb32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadb36 je 0x12eadc01 */
  if (C.zf) goto L_12eadc01;
  /* 12eadb3c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eadb43 jmp 0x12eadb4e */
  goto L_12eadb4e;
L_12eadb45:;
  /* 12eadb45 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eadb48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadb4b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12eadb4e:;
  /* 12eadb4e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadb52 jg 0x12eadbb0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eadbb0;
  /* 12eadb54 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadb58 je 0x12eadbae */
  if (C.zf) goto L_12eadbae;
  /* 12eadb5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eadb5d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eadb60 mov ecx, dword ptr [eax + 0x12ebe4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12ebe4fc)));
  /* 12eadb66 push ecx */
  push32((uint32_t)(ECX));
  /* 12eadb67 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12eadb6d push edx */
  push32((uint32_t)(EDX));
  /* 12eadb6e call 0x12eaf980 */
  push32(0x12eadb73u); f_12eaf980();
  /* 12eadb73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadb76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadb78 je 0x12eadba5 */
  if (C.zf) goto L_12eadba5;
  /* 12eadb7a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12eadb80 push eax */
  push32((uint32_t)(EAX));
  /* 12eadb81 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eadb84 push ecx */
  push32((uint32_t)(ECX));
  /* 12eadb85 call 0x12eadc30 */
  push32(0x12eadb8au); f_12eadc30();
  /* 12eadb8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadb8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadb8f je 0x12eadb9c */
  if (C.zf) goto L_12eadb9c;
  /* 12eadb91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eadb94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadb97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12eadb9a jmp 0x12eadba3 */
  goto L_12eadba3;
L_12eadb9c:;
  /* 12eadb9c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12eadba3:;
  /* 12eadba3 jmp 0x12eadbae */
  goto L_12eadbae;
L_12eadba5:;
  /* 12eadba5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eadba8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadbab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12eadbae:;
  /* 12eadbae jmp 0x12eadb45 */
  goto L_12eadb45;
L_12eadbb0:;
  /* 12eadbb0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadbb4 je 0x12eadbdb */
  if (C.zf) goto L_12eadbdb;
  /* 12eadbb6 call 0x12eaddd0 */
  push32(0x12eadbbbu); f_12eaddd0();
  /* 12eadbbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eadbbe push 2 */
  push32((uint32_t)(0x2u));
  /* 12eadbc0 mov ecx, dword ptr [0x12ebe4fc] */
  ECX = (r32((uint32_t)(0x12ebe4fc)));
  /* 12eadbc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12eadbc7 call 0x12ea4780 */
  push32(0x12eadbccu); f_12ea4780();
  /* 12eadbcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadbcf mov dword ptr [0x12ebe4fc], 0 */
  w32((uint32_t)(0x12ebe4fc), (0x0u));
  /* 12eadbd9 jmp 0x12eadc01 */
  goto L_12eadc01;
L_12eadbdb:;
  /* 12eadbdb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadbdf je 0x12eadbee */
  if (C.zf) goto L_12eadbee;
  /* 12eadbe1 call 0x12eaddd0 */
  push32(0x12eadbe6u); f_12eaddd0();
  /* 12eadbe6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12eadbec jmp 0x12eadbf8 */
  goto L_12eadbf8;
L_12eadbee:;
  /* 12eadbee mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12eadbf8:;
  /* 12eadbf8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12eadbfe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12eadc01:;
  /* 12eadc01 jmp 0x12eadc0b */
  goto L_12eadc0b;
L_12eadc03:;
  /* 12eadc03 call 0x12eaddd0 */
  push32(0x12eadc08u); f_12eaddd0();
  /* 12eadc08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12eadc0b:;
  /* 12eadc0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadc0f je 0x12eadc28 */
  if (C.zf) goto L_12eadc28;
  /* 12eadc11 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eadc13 call 0x12ea7790 */
  push32(0x12eadc18u); f_12ea7790();
  /* 12eadc18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadc1b mov eax, dword ptr [0x12ebf94c] */
  EAX = (r32((uint32_t)(0x12ebf94c)));
  /* 12eadc20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eadc23 mov dword ptr [0x12ebf94c], eax */
  w32((uint32_t)(0x12ebf94c), (EAX));
L_12eadc28:;
  /* 12eadc28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12eadc2b:;
  /* 12eadc2b mov esp, ebp */
  ESP = (EBP);
  /* 12eadc2d pop ebp */
  EBP = (pop32());
  /* 12eadc2e ret  */
  ESPCHK(0x12ead840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc30 @ 0x12eadc30 (403 bytes, 117 insns) */
void f_12eadc30(void) {
  FTRACE(0x12eadc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eadc30 push ebp */
  push32((uint32_t)(EBP));
  /* 12eadc31 mov ebp, esp */
  EBP = (ESP);
  /* 12eadc33 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eadc39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadc3c push eax */
  push32((uint32_t)(EAX));
  /* 12eadc3d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12eadc43 push ecx */
  push32((uint32_t)(ECX));
  /* 12eadc44 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12eadc4a push edx */
  push32((uint32_t)(EDX));
  /* 12eadc4b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12eadc51 push eax */
  push32((uint32_t)(EAX));
  /* 12eadc52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eadc55 push ecx */
  push32((uint32_t)(ECX));
  /* 12eadc56 call 0x12eaded0 */
  push32(0x12eadc5bu); f_12eaded0();
  /* 12eadc5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadc5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadc60 jne 0x12eadc69 */
  if (!C.zf) goto L_12eadc69;
  /* 12eadc62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eadc64 jmp 0x12eaddbf */
  goto L_12eaddbf;
L_12eadc69:;
  /* 12eadc69 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12eadc6e push 0x12ebb1c0 */
  push32((uint32_t)(0x12ebb1c0u));
  /* 12eadc73 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eadc75 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12eadc7b push edx */
  push32((uint32_t)(EDX));
  /* 12eadc7c call 0x12ea6b20 */
  push32(0x12eadc81u); f_12ea6b20();
  /* 12eadc81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadc84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadc87 push eax */
  push32((uint32_t)(EAX));
  /* 12eadc88 call 0x12ea3cf0 */
  push32(0x12eadc8du); f_12ea3cf0();
  /* 12eadc8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadc90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eadc93 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadc97 jne 0x12eadca0 */
  if (!C.zf) goto L_12eadca0;
  /* 12eadc99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eadc9b jmp 0x12eaddbf */
  goto L_12eaddbf;
L_12eadca0:;
  /* 12eadca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadca3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eadca6 mov ecx, dword ptr [eax + 0x12ebe4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12ebe4fc)));
  /* 12eadcac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eadcaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadcb2 mov eax, dword ptr [edx*4 + 0x12ebf7c8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ebf7c8)));
  /* 12eadcb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eadcbc push 6 */
  push32((uint32_t)(0x6u));
  /* 12eadcbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadcc1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eadcc4 add ecx, 0x12ebf818 */
  { uint32_t _a=(ECX),_b=(0x12ebf818u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadcca push ecx */
  push32((uint32_t)(ECX));
  /* 12eadccb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12eadcce push edx */
  push32((uint32_t)(EDX));
  /* 12eadccf call 0x12eaa5d0 */
  push32(0x12eadcd4u); f_12eaa5d0();
  /* 12eadcd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadcd7 mov eax, dword ptr [0x12ebf7e0] */
  EAX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eadcdc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12eadcdf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12eadce5 push ecx */
  push32((uint32_t)(ECX));
  /* 12eadce6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eadce9 push edx */
  push32((uint32_t)(EDX));
  /* 12eadcea call 0x12ea6ca0 */
  push32(0x12eadcefu); f_12ea6ca0();
  /* 12eadcef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadcf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadcf5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eadcf8 mov dword ptr [ecx + 0x12ebe4fc], eax */
  w32((uint32_t)(ECX + 0x12ebe4fc), (EAX));
  /* 12eadcfe mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12eadd04 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12eadd0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadd0d mov dword ptr [eax*4 + 0x12ebf7c8], edx */
  w32((uint32_t)(EAX*4 + 0x12ebf7c8), (EDX));
  /* 12eadd14 push 6 */
  push32((uint32_t)(0x6u));
  /* 12eadd16 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12eadd1c push ecx */
  push32((uint32_t)(ECX));
  /* 12eadd1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadd20 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eadd23 add edx, 0x12ebf818 */
  { uint32_t _a=(EDX),_b=(0x12ebf818u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadd29 push edx */
  push32((uint32_t)(EDX));
  /* 12eadd2a call 0x12eaa5d0 */
  push32(0x12eadd2fu); f_12eaa5d0();
  /* 12eadd2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadd32 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadd36 jne 0x12eadd43 */
  if (!C.zf) goto L_12eadd43;
  /* 12eadd38 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12eadd3e mov dword ptr [0x12ebf7e0], eax */
  w32((uint32_t)(0x12ebf7e0), (EAX));
L_12eadd43:;
  /* 12eadd43 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadd47 jne 0x12eadd55 */
  if (!C.zf) goto L_12eadd55;
  /* 12eadd49 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12eadd4f mov dword ptr [0x12ebf7e4], ecx */
  w32((uint32_t)(0x12ebf7e4), (ECX));
L_12eadd55:;
  /* 12eadd55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadd58 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eadd5b call dword ptr [edx + 0x12ebe500] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12ebe500))), 0x12eadd61u);
  /* 12eadd61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadd63 je 0x12eadd9c */
  if (C.zf) goto L_12eadd9c;
  /* 12eadd65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadd68 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eadd6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eadd6e mov dword ptr [eax + 0x12ebe4fc], ecx */
  w32((uint32_t)(EAX + 0x12ebe4fc), (ECX));
  /* 12eadd74 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eadd76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eadd79 push edx */
  push32((uint32_t)(EDX));
  /* 12eadd7a call 0x12ea4780 */
  push32(0x12eadd7fu); f_12ea4780();
  /* 12eadd7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadd82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadd85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eadd88 mov dword ptr [eax*4 + 0x12ebf7c8], ecx */
  w32((uint32_t)(EAX*4 + 0x12ebf7c8), (ECX));
  /* 12eadd8f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eadd92 mov dword ptr [0x12ebf7e0], edx */
  w32((uint32_t)(0x12ebf7e0), (EDX));
  /* 12eadd98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eadd9a jmp 0x12eaddbf */
  goto L_12eaddbf;
L_12eadd9c:;
  /* 12eadd9c cmp dword ptr [ebp - 0xc], 0x12ebe3e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12ebe3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadda3 je 0x12eaddb3 */
  if (C.zf) goto L_12eaddb3;
  /* 12eadda5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eadda7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaddaa push eax */
  push32((uint32_t)(EAX));
  /* 12eaddab call 0x12ea4780 */
  push32(0x12eaddb0u); f_12ea4780();
  /* 12eaddb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eaddb3:;
  /* 12eaddb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaddb6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eaddb9 mov eax, dword ptr [ecx + 0x12ebe4fc] */
  EAX = (r32((uint32_t)(ECX + 0x12ebe4fc)));
L_12eaddbf:;
  /* 12eaddbf mov esp, ebp */
  ESP = (EBP);
  /* 12eaddc1 pop ebp */
  EBP = (pop32());
  /* 12eaddc2 ret  */
  ESPCHK(0x12eadc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddd0 @ 0x12eaddd0 (256 bytes, 72 insns) */
void f_12eaddd0(void) {
  FTRACE(0x12eaddd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaddd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaddd1 mov ebp, esp */
  EBP = (ESP);
  /* 12eaddd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaddd6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12eadddd cmp dword ptr [0x12ebe4fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebe4fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadde4 jne 0x12eade04 */
  if (!C.zf) goto L_12eade04;
  /* 12eadde6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12eaddeb push 0x12ebb1c0 */
  push32((uint32_t)(0x12ebb1c0u));
  /* 12eaddf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaddf2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12eaddf7 call 0x12ea3cf0 */
  push32(0x12eaddfcu); f_12ea3cf0();
  /* 12eaddfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaddff mov dword ptr [0x12ebe4fc], eax */
  w32((uint32_t)(0x12ebe4fc), (EAX));
L_12eade04:;
  /* 12eade04 mov eax, dword ptr [0x12ebe4fc] */
  EAX = (r32((uint32_t)(0x12ebe4fc)));
  /* 12eade09 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12eade0c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12eade13 jmp 0x12eade1e */
  goto L_12eade1e;
L_12eade15:;
  /* 12eade15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eade18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eade1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12eade1e:;
  /* 12eade1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eade21 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eade24 mov eax, dword ptr [edx + 0x12ebe4fc] */
  EAX = (r32((uint32_t)(EDX + 0x12ebe4fc)));
  /* 12eade2a push eax */
  push32((uint32_t)(EAX));
  /* 12eade2b push 0x12ebb1cc */
  push32((uint32_t)(0x12ebb1ccu));
  /* 12eade30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eade33 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eade36 mov edx, dword ptr [ecx + 0x12ebe4f8] */
  EDX = (r32((uint32_t)(ECX + 0x12ebe4f8)));
  /* 12eade3c push edx */
  push32((uint32_t)(EDX));
  /* 12eade3d push 3 */
  push32((uint32_t)(0x3u));
  /* 12eade3f mov eax, dword ptr [0x12ebe4fc] */
  EAX = (r32((uint32_t)(0x12ebe4fc)));
  /* 12eade44 push eax */
  push32((uint32_t)(EAX));
  /* 12eade45 call 0x12eae070 */
  push32(0x12eade4au); f_12eae070();
  /* 12eade4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eade4d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eade51 jge 0x12eade99 */
  if ((C.sf==C.of)) goto L_12eade99;
  /* 12eade53 push 0x12ebb1b8 */
  push32((uint32_t)(0x12ebb1b8u));
  /* 12eade58 mov ecx, dword ptr [0x12ebe4fc] */
  ECX = (r32((uint32_t)(0x12ebe4fc)));
  /* 12eade5e push ecx */
  push32((uint32_t)(ECX));
  /* 12eade5f call 0x12ea6cb0 */
  push32(0x12eade64u); f_12ea6cb0();
  /* 12eade64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eade67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eade6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eade6d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eade70 mov eax, dword ptr [edx + 0x12ebe4fc] */
  EAX = (r32((uint32_t)(EDX + 0x12ebe4fc)));
  /* 12eade76 push eax */
  push32((uint32_t)(EAX));
  /* 12eade77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eade7a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eade7d mov edx, dword ptr [ecx + 0x12ebe4fc] */
  EDX = (r32((uint32_t)(ECX + 0x12ebe4fc)));
  /* 12eade83 push edx */
  push32((uint32_t)(EDX));
  /* 12eade84 call 0x12eaf980 */
  push32(0x12eade89u); f_12eaf980();
  /* 12eade89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eade8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eade8e je 0x12eade97 */
  if (C.zf) goto L_12eade97;
  /* 12eade90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12eade97:;
  /* 12eade97 jmp 0x12eadec7 */
  goto L_12eadec7;
L_12eade99:;
  /* 12eade99 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eade9d jne 0x12eadea6 */
  if (!C.zf) goto L_12eadea6;
  /* 12eade9f mov eax, dword ptr [0x12ebe4fc] */
  EAX = (r32((uint32_t)(0x12ebe4fc)));
  /* 12eadea4 jmp 0x12eadecc */
  goto L_12eadecc;
L_12eadea6:;
  /* 12eadea6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eadea8 mov eax, dword ptr [0x12ebe4fc] */
  EAX = (r32((uint32_t)(0x12ebe4fc)));
  /* 12eadead push eax */
  push32((uint32_t)(EAX));
  /* 12eadeae call 0x12ea4780 */
  push32(0x12eadeb3u); f_12ea4780();
  /* 12eadeb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadeb6 mov dword ptr [0x12ebe4fc], 0 */
  w32((uint32_t)(0x12ebe4fc), (0x0u));
  /* 12eadec0 mov eax, dword ptr [0x12ebe514] */
  EAX = (r32((uint32_t)(0x12ebe514)));
  /* 12eadec5 jmp 0x12eadecc */
  goto L_12eadecc;
L_12eadec7:;
  /* 12eadec7 jmp 0x12eade15 */
  goto L_12eade15;
L_12eadecc:;
  /* 12eadecc mov esp, ebp */
  ESP = (EBP);
  /* 12eadece pop ebp */
  EBP = (pop32());
  /* 12eadecf ret  */
  ESPCHK(0x12eaddd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ded0 @ 0x12eaded0 (388 bytes, 115 insns) */
void f_12eaded0(void) {
  FTRACE(0x12eaded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaded0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaded1 mov ebp, esp */
  EBP = (ESP);
  /* 12eaded3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaded9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadedd jne 0x12eadee6 */
  if (!C.zf) goto L_12eadee6;
  /* 12eadedf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eadee1 jmp 0x12eae050 */
  goto L_12eae050;
L_12eadee6:;
  /* 12eadee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadee9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eadeec cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadeef jne 0x12eadf40 */
  if (!C.zf) goto L_12eadf40;
  /* 12eadef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadef4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12eadef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadefa jne 0x12eadf40 */
  if (!C.zf) goto L_12eadf40;
  /* 12eadefc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eadeff mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12eadf02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eadf05 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12eadf09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadf0d je 0x12eadf29 */
  if (C.zf) goto L_12eadf29;
  /* 12eadf0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eadf12 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12eadf17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eadf1a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12eadf20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eadf23 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12eadf29:;
  /* 12eadf29 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eadf2d je 0x12eadf38 */
  if (C.zf) goto L_12eadf38;
  /* 12eadf2f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eadf32 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12eadf38:;
  /* 12eadf38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eadf3b jmp 0x12eae050 */
  goto L_12eae050;
L_12eadf40:;
  /* 12eadf40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadf43 push ecx */
  push32((uint32_t)(ECX));
  /* 12eadf44 push 0x12ebe470 */
  push32((uint32_t)(0x12ebe470u));
  /* 12eadf49 call 0x12eaf980 */
  push32(0x12eadf4eu); f_12eaf980();
  /* 12eadf4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadf51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadf53 je 0x12eae008 */
  if (C.zf) goto L_12eae008;
  /* 12eadf59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadf5c push edx */
  push32((uint32_t)(EDX));
  /* 12eadf5d push 0x12ebe3ec */
  push32((uint32_t)(0x12ebe3ecu));
  /* 12eadf62 call 0x12eaf980 */
  push32(0x12eadf67u); f_12eaf980();
  /* 12eadf67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadf6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadf6c je 0x12eae008 */
  if (C.zf) goto L_12eae008;
  /* 12eadf72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadf75 push eax */
  push32((uint32_t)(EAX));
  /* 12eadf76 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12eadf7c push ecx */
  push32((uint32_t)(ECX));
  /* 12eadf7d call 0x12eae0c0 */
  push32(0x12eadf82u); f_12eae0c0();
  /* 12eadf82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadf85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadf87 je 0x12eadf90 */
  if (C.zf) goto L_12eadf90;
  /* 12eadf89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eadf8b jmp 0x12eae050 */
  goto L_12eae050;
L_12eadf90:;
  /* 12eadf90 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12eadf96 push edx */
  push32((uint32_t)(EDX));
  /* 12eadf97 push 0x12ebf7f0 */
  push32((uint32_t)(0x12ebf7f0u));
  /* 12eadf9c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12eadfa2 push eax */
  push32((uint32_t)(EAX));
  /* 12eadfa3 call 0x12eafad0 */
  push32(0x12eadfa8u); f_12eafad0();
  /* 12eadfa8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadfab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eadfad jne 0x12eadfb6 */
  if (!C.zf) goto L_12eadfb6;
  /* 12eadfaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eadfb1 jmp 0x12eae050 */
  goto L_12eae050;
L_12eadfb6:;
  /* 12eadfb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eadfb8 mov cx, word ptr [0x12ebf7f4] */
  CX = (r16((uint32_t)(0x12ebf7f4)));
  /* 12eadfbf mov dword ptr [0x12ebf7f8], ecx */
  w32((uint32_t)(0x12ebf7f8), (ECX));
  /* 12eadfc5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12eadfcb push edx */
  push32((uint32_t)(EDX));
  /* 12eadfcc push 0x12ebe470 */
  push32((uint32_t)(0x12ebe470u));
  /* 12eadfd1 call 0x12eae220 */
  push32(0x12eadfd6u); f_12eae220();
  /* 12eadfd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadfd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadfdc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eadfdf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eadfe1 je 0x12eadff6 */
  if (C.zf) goto L_12eadff6;
  /* 12eadfe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eadfe6 push edx */
  push32((uint32_t)(EDX));
  /* 12eadfe7 push 0x12ebe3ec */
  push32((uint32_t)(0x12ebe3ecu));
  /* 12eadfec call 0x12ea6ca0 */
  push32(0x12eadff1u); f_12ea6ca0();
  /* 12eadff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eadff4 jmp 0x12eae008 */
  goto L_12eae008;
L_12eadff6:;
  /* 12eadff6 push 0x12ebe470 */
  push32((uint32_t)(0x12ebe470u));
  /* 12eadffb push 0x12ebe3ec */
  push32((uint32_t)(0x12ebe3ecu));
  /* 12eae000 call 0x12ea6ca0 */
  push32(0x12eae005u); f_12ea6ca0();
  /* 12eae005 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eae008:;
  /* 12eae008 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae00c je 0x12eae021 */
  if (C.zf) goto L_12eae021;
  /* 12eae00e push 6 */
  push32((uint32_t)(0x6u));
  /* 12eae010 push 0x12ebf7f0 */
  push32((uint32_t)(0x12ebf7f0u));
  /* 12eae015 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eae018 push eax */
  push32((uint32_t)(EAX));
  /* 12eae019 call 0x12eaa5d0 */
  push32(0x12eae01eu); f_12eaa5d0();
  /* 12eae01e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eae021:;
  /* 12eae021 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae025 je 0x12eae03a */
  if (C.zf) goto L_12eae03a;
  /* 12eae027 push 4 */
  push32((uint32_t)(0x4u));
  /* 12eae029 push 0x12ebf7f8 */
  push32((uint32_t)(0x12ebf7f8u));
  /* 12eae02e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eae031 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae032 call 0x12eaa5d0 */
  push32(0x12eae037u); f_12eaa5d0();
  /* 12eae037 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eae03a:;
  /* 12eae03a push 0x12ebe470 */
  push32((uint32_t)(0x12ebe470u));
  /* 12eae03f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae042 push edx */
  push32((uint32_t)(EDX));
  /* 12eae043 call 0x12ea6ca0 */
  push32(0x12eae048u); f_12ea6ca0();
  /* 12eae048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae04b mov eax, 0x12ebe470 */
  EAX = (0x12ebe470u);
L_12eae050:;
  /* 12eae050 mov esp, ebp */
  ESP = (EBP);
  /* 12eae052 pop ebp */
  EBP = (pop32());
  /* 12eae053 ret  */
  ESPCHK(0x12eaded0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e060 @ 0x12eae060 (7 bytes, 5 insns) */
void f_12eae060(void) {
  FTRACE(0x12eae060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eae060 push ebp */
  push32((uint32_t)(EBP));
  /* 12eae061 mov ebp, esp */
  EBP = (ESP);
  /* 12eae063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eae065 pop ebp */
  EBP = (pop32());
  /* 12eae066 ret  */
  ESPCHK(0x12eae060u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12eae070 (79 bytes, 28 insns) */
void f_12eae070(void) {
  FTRACE(0x12eae070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eae070 push ebp */
  push32((uint32_t)(EBP));
  /* 12eae071 mov ebp, esp */
  EBP = (ESP);
  /* 12eae073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eae076 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12eae079 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eae07c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eae083 jmp 0x12eae08e */
  goto L_12eae08e;
L_12eae085:;
  /* 12eae085 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eae088 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae08b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12eae08e:;
  /* 12eae08e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eae091 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae094 jge 0x12eae0b4 */
  if ((C.sf==C.of)) goto L_12eae0b4;
  /* 12eae096 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae099 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae09c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eae09f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae0a2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12eae0a5 push edx */
  push32((uint32_t)(EDX));
  /* 12eae0a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae0a9 push eax */
  push32((uint32_t)(EAX));
  /* 12eae0aa call 0x12ea6cb0 */
  push32(0x12eae0afu); f_12ea6cb0();
  /* 12eae0af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae0b2 jmp 0x12eae085 */
  goto L_12eae085;
L_12eae0b4:;
  /* 12eae0b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eae0bb mov esp, ebp */
  ESP = (EBP);
  /* 12eae0bd pop ebp */
  EBP = (pop32());
  /* 12eae0be ret  */
  ESPCHK(0x12eae070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0c0 @ 0x12eae0c0 (349 bytes, 122 insns) */
void f_12eae0c0(void) {
  FTRACE(0x12eae0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eae0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eae0c1 mov ebp, esp */
  EBP = (ESP);
  /* 12eae0c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eae0c6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12eae0cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12eae0cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae0d0 push eax */
  push32((uint32_t)(EAX));
  /* 12eae0d1 call 0x12ea7a60 */
  push32(0x12eae0d6u); f_12ea7a60();
  /* 12eae0d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae0d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae0dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eae0df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eae0e1 jne 0x12eae0ea */
  if (!C.zf) goto L_12eae0ea;
  /* 12eae0e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eae0e5 jmp 0x12eae219 */
  goto L_12eae219;
L_12eae0ea:;
  /* 12eae0ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae0ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eae0f0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae0f3 jne 0x12eae120 */
  if (!C.zf) goto L_12eae120;
  /* 12eae0f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae0f8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12eae0fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eae0fe je 0x12eae120 */
  if (C.zf) goto L_12eae120;
  /* 12eae100 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae103 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae106 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae107 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae10a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae110 push edx */
  push32((uint32_t)(EDX));
  /* 12eae111 call 0x12ea6ca0 */
  push32(0x12eae116u); f_12ea6ca0();
  /* 12eae116 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae119 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eae11b jmp 0x12eae219 */
  goto L_12eae219;
L_12eae120:;
  /* 12eae120 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eae127 jmp 0x12eae132 */
  goto L_12eae132;
L_12eae129:;
  /* 12eae129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae12c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae12f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eae132:;
  /* 12eae132 push 0x12ebb1d0 */
  push32((uint32_t)(0x12ebb1d0u));
  /* 12eae137 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae13a push ecx */
  push32((uint32_t)(ECX));
  /* 12eae13b call 0x12eafa10 */
  push32(0x12eae140u); f_12eafa10();
  /* 12eae140 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae143 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eae146 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae14a jne 0x12eae154 */
  if (!C.zf) goto L_12eae154;
  /* 12eae14c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eae14f jmp 0x12eae219 */
  goto L_12eae219;
L_12eae154:;
  /* 12eae154 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae157 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae15a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eae15c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12eae15f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae163 jne 0x12eae18a */
  if (!C.zf) goto L_12eae18a;
  /* 12eae165 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae169 jge 0x12eae18a */
  if ((C.sf==C.of)) goto L_12eae18a;
  /* 12eae16b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eae16f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae172 je 0x12eae18a */
  if (C.zf) goto L_12eae18a;
  /* 12eae174 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae177 push edx */
  push32((uint32_t)(EDX));
  /* 12eae178 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae17b push eax */
  push32((uint32_t)(EAX));
  /* 12eae17c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae17f push ecx */
  push32((uint32_t)(ECX));
  /* 12eae180 call 0x12ea7510 */
  push32(0x12eae185u); f_12ea7510();
  /* 12eae185 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae188 jmp 0x12eae1f0 */
  goto L_12eae1f0;
L_12eae18a:;
  /* 12eae18a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae18e jne 0x12eae1b8 */
  if (!C.zf) goto L_12eae1b8;
  /* 12eae190 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae194 jge 0x12eae1b8 */
  if ((C.sf==C.of)) goto L_12eae1b8;
  /* 12eae196 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eae19a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae19d je 0x12eae1b8 */
  if (C.zf) goto L_12eae1b8;
  /* 12eae19f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae1a2 push eax */
  push32((uint32_t)(EAX));
  /* 12eae1a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae1a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae1a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae1aa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae1ad push edx */
  push32((uint32_t)(EDX));
  /* 12eae1ae call 0x12ea7510 */
  push32(0x12eae1b3u); f_12ea7510();
  /* 12eae1b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae1b6 jmp 0x12eae1f0 */
  goto L_12eae1f0;
L_12eae1b8:;
  /* 12eae1b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae1bc jne 0x12eae1eb */
  if (!C.zf) goto L_12eae1eb;
  /* 12eae1be movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eae1c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eae1c4 je 0x12eae1cf */
  if (C.zf) goto L_12eae1cf;
  /* 12eae1c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eae1ca cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae1cd jne 0x12eae1eb */
  if (!C.zf) goto L_12eae1eb;
L_12eae1cf:;
  /* 12eae1cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae1d2 push edx */
  push32((uint32_t)(EDX));
  /* 12eae1d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae1d6 push eax */
  push32((uint32_t)(EAX));
  /* 12eae1d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae1da add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae1e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae1e1 call 0x12ea7510 */
  push32(0x12eae1e6u); f_12ea7510();
  /* 12eae1e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae1e9 jmp 0x12eae1f0 */
  goto L_12eae1f0;
L_12eae1eb:;
  /* 12eae1eb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eae1ee jmp 0x12eae219 */
  goto L_12eae219;
L_12eae1f0:;
  /* 12eae1f0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eae1f4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae1f7 jne 0x12eae1fb */
  if (!C.zf) goto L_12eae1fb;
  /* 12eae1f9 jmp 0x12eae217 */
  goto L_12eae217;
L_12eae1fb:;
  /* 12eae1fb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eae1ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eae201 jne 0x12eae205 */
  if (!C.zf) goto L_12eae205;
  /* 12eae203 jmp 0x12eae217 */
  goto L_12eae217;
L_12eae205:;
  /* 12eae205 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae208 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae20b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12eae20f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12eae212 jmp 0x12eae129 */
  goto L_12eae129;
L_12eae217:;
  /* 12eae217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eae219:;
  /* 12eae219 mov esp, ebp */
  ESP = (EBP);
  /* 12eae21b pop ebp */
  EBP = (pop32());
  /* 12eae21c ret  */
  ESPCHK(0x12eae0c0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12eae220 (101 bytes, 36 insns) */
void f_12eae220(void) {
  FTRACE(0x12eae220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eae220 push ebp */
  push32((uint32_t)(EBP));
  /* 12eae221 mov ebp, esp */
  EBP = (ESP);
  /* 12eae223 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae226 push eax */
  push32((uint32_t)(EAX));
  /* 12eae227 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae22a push ecx */
  push32((uint32_t)(ECX));
  /* 12eae22b call 0x12ea6ca0 */
  push32(0x12eae230u); f_12ea6ca0();
  /* 12eae230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae233 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae236 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12eae23a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eae23c je 0x12eae258 */
  if (C.zf) goto L_12eae258;
  /* 12eae23e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae241 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae244 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae245 push 0x12ebb1d8 */
  push32((uint32_t)(0x12ebb1d8u));
  /* 12eae24a push 2 */
  push32((uint32_t)(0x2u));
  /* 12eae24c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae24f push edx */
  push32((uint32_t)(EDX));
  /* 12eae250 call 0x12eae070 */
  push32(0x12eae255u); f_12eae070();
  /* 12eae255 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eae258:;
  /* 12eae258 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae25b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12eae262 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eae264 je 0x12eae283 */
  if (C.zf) goto L_12eae283;
  /* 12eae266 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eae269 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae26f push edx */
  push32((uint32_t)(EDX));
  /* 12eae270 push 0x12ebb1d4 */
  push32((uint32_t)(0x12ebb1d4u));
  /* 12eae275 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eae277 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae27a push eax */
  push32((uint32_t)(EAX));
  /* 12eae27b call 0x12eae070 */
  push32(0x12eae280u); f_12eae070();
  /* 12eae280 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eae283:;
  /* 12eae283 pop ebp */
  EBP = (pop32());
  /* 12eae284 ret  */
  ESPCHK(0x12eae220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e290 @ 0x12eae290 (130 bytes, 50 insns) */
void f_12eae290(void) {
  FTRACE(0x12eae290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eae290 push ebp */
  push32((uint32_t)(EBP));
  /* 12eae291 mov ebp, esp */
  EBP = (ESP);
  /* 12eae293 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae294 push ebx */
  push32((uint32_t)(EBX));
  /* 12eae295 push esi */
  push32((uint32_t)(ESI));
  /* 12eae296 push edi */
  push32((uint32_t)(EDI));
  /* 12eae297 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eae29e:;
  /* 12eae29e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae2a2 jne 0x12eae2c2 */
  if (!C.zf) goto L_12eae2c2;
  /* 12eae2a4 push 0x12ebb1e8 */
  push32((uint32_t)(0x12ebb1e8u));
  /* 12eae2a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eae2ab push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12eae2ad push 0x12ebb1dc */
  push32((uint32_t)(0x12ebb1dcu));
  /* 12eae2b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eae2b4 call 0x12ea2db0 */
  push32(0x12eae2b9u); f_12ea2db0();
  /* 12eae2b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae2bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae2bf jne 0x12eae2c2 */
  if (!C.zf) goto L_12eae2c2;
  /* 12eae2c1 int3  */
  x86_unimpl("int3 @ 0x12eae2c1");
L_12eae2c2:;
  /* 12eae2c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eae2c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eae2c6 jne 0x12eae29e */
  if (!C.zf) goto L_12eae29e;
  /* 12eae2c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae2cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eae2ce and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12eae2d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eae2d3 je 0x12eae2e1 */
  if (C.zf) goto L_12eae2e1;
  /* 12eae2d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae2d8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12eae2df jmp 0x12eae308 */
  goto L_12eae308;
L_12eae2e1:;
  /* 12eae2e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae2e5 call 0x12eacb00 */
  push32(0x12eae2eau); f_12eacb00();
  /* 12eae2ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae2ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae2f0 push edx */
  push32((uint32_t)(EDX));
  /* 12eae2f1 call 0x12eae320 */
  push32(0x12eae2f6u); f_12eae320();
  /* 12eae2f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae2f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eae2fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae2ff push eax */
  push32((uint32_t)(EAX));
  /* 12eae300 call 0x12eacb70 */
  push32(0x12eae305u); f_12eacb70();
  /* 12eae305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eae308:;
  /* 12eae308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae30b pop edi */
  EDI = (pop32());
  /* 12eae30c pop esi */
  ESI = (pop32());
  /* 12eae30d pop ebx */
  EBX = (pop32());
  /* 12eae30e mov esp, ebp */
  ESP = (EBP);
  /* 12eae310 pop ebp */
  EBP = (pop32());
  /* 12eae311 ret  */
  ESPCHK(0x12eae290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e320 @ 0x12eae320 (190 bytes, 67 insns) */
void f_12eae320(void) {
  FTRACE(0x12eae320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eae320 push ebp */
  push32((uint32_t)(EBP));
  /* 12eae321 mov ebp, esp */
  EBP = (ESP);
  /* 12eae323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eae326 push ebx */
  push32((uint32_t)(EBX));
  /* 12eae327 push esi */
  push32((uint32_t)(ESI));
  /* 12eae328 push edi */
  push32((uint32_t)(EDI));
  /* 12eae329 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eae330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae333 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12eae336:;
  /* 12eae336 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae33a jne 0x12eae35a */
  if (!C.zf) goto L_12eae35a;
  /* 12eae33c push 0x12ebb08c */
  push32((uint32_t)(0x12ebb08cu));
  /* 12eae341 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eae343 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12eae345 push 0x12ebb1dc */
  push32((uint32_t)(0x12ebb1dcu));
  /* 12eae34a push 2 */
  push32((uint32_t)(0x2u));
  /* 12eae34c call 0x12ea2db0 */
  push32(0x12eae351u); f_12ea2db0();
  /* 12eae351 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae354 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae357 jne 0x12eae35a */
  if (!C.zf) goto L_12eae35a;
  /* 12eae359 int3  */
  x86_unimpl("int3 @ 0x12eae359");
L_12eae35a:;
  /* 12eae35a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae35c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eae35e jne 0x12eae336 */
  if (!C.zf) goto L_12eae336;
  /* 12eae360 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eae363 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12eae366 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12eae36b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eae36d je 0x12eae3ca */
  if (C.zf) goto L_12eae3ca;
  /* 12eae36f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eae372 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae373 call 0x12ead620 */
  push32(0x12eae378u); f_12ead620();
  /* 12eae378 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae37b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eae37e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eae381 push edx */
  push32((uint32_t)(EDX));
  /* 12eae382 call 0x12eb09a0 */
  push32(0x12eae387u); f_12eb09a0();
  /* 12eae387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae38a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eae38d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12eae390 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae391 call 0x12eb0870 */
  push32(0x12eae396u); f_12eb0870();
  /* 12eae396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eae39b jge 0x12eae3a6 */
  if ((C.sf==C.of)) goto L_12eae3a6;
  /* 12eae39d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eae3a4 jmp 0x12eae3ca */
  goto L_12eae3ca;
L_12eae3a6:;
  /* 12eae3a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eae3a9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae3ad je 0x12eae3ca */
  if (C.zf) goto L_12eae3ca;
  /* 12eae3af push 2 */
  push32((uint32_t)(0x2u));
  /* 12eae3b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eae3b4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12eae3b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae3b8 call 0x12ea4780 */
  push32(0x12eae3bdu); f_12ea4780();
  /* 12eae3bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae3c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eae3c3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12eae3ca:;
  /* 12eae3ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eae3cd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12eae3d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae3d7 pop edi */
  EDI = (pop32());
  /* 12eae3d8 pop esi */
  ESI = (pop32());
  /* 12eae3d9 pop ebx */
  EBX = (pop32());
  /* 12eae3da mov esp, ebp */
  ESP = (EBP);
  /* 12eae3dc pop ebp */
  EBP = (pop32());
  /* 12eae3dd ret  */
  ESPCHK(0x12eae320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3e0 @ 0x12eae3e0 (210 bytes, 63 insns) */
void f_12eae3e0(void) {
  FTRACE(0x12eae3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eae3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eae3e1 mov ebp, esp */
  EBP = (ESP);
  /* 12eae3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae3e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae3e7 cmp eax, dword ptr [0x12ec10dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ec10dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae3ed jae 0x12eae411 */
  if (!C.cf) goto L_12eae411;
  /* 12eae3ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae3f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eae3f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae3f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12eae3fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eae3fe mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12eae405 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12eae40a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12eae40d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eae40f jne 0x12eae424 */
  if (!C.zf) goto L_12eae424;
L_12eae411:;
  /* 12eae411 call 0x12eabbc0 */
  push32(0x12eae416u); f_12eabbc0();
  /* 12eae416 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12eae41c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eae41f jmp 0x12eae4ae */
  goto L_12eae4ae;
L_12eae424:;
  /* 12eae424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae427 push edx */
  push32((uint32_t)(EDX));
  /* 12eae428 call 0x12ead3e0 */
  push32(0x12eae42du); f_12ead3e0();
  /* 12eae42d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae433 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12eae436 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae439 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12eae43c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eae43f mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12eae446 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12eae44b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12eae44e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eae450 je 0x12eae48d */
  if (C.zf) goto L_12eae48d;
  /* 12eae452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae455 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae456 call 0x12ead260 */
  push32(0x12eae45bu); f_12ead260();
  /* 12eae45b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae45e push eax */
  push32((uint32_t)(EAX));
  /* 12eae45f call dword ptr [0x12ec22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22c4))), 0x12eae465u);
  /* 12eae465 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eae467 jne 0x12eae474 */
  if (!C.zf) goto L_12eae474;
  /* 12eae469 call dword ptr [0x12ec2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2364))), 0x12eae46fu);
  /* 12eae46f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eae472 jmp 0x12eae47b */
  goto L_12eae47b;
L_12eae474:;
  /* 12eae474 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12eae47b:;
  /* 12eae47b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae47f jne 0x12eae483 */
  if (!C.zf) goto L_12eae483;
  /* 12eae481 jmp 0x12eae49f */
  goto L_12eae49f;
L_12eae483:;
  /* 12eae483 call 0x12eabbd0 */
  push32(0x12eae488u); f_12eabbd0();
  /* 12eae488 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae48b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12eae48d:;
  /* 12eae48d call 0x12eabbc0 */
  push32(0x12eae492u); f_12eabbc0();
  /* 12eae492 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12eae498 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eae49f:;
  /* 12eae49f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae4a2 push eax */
  push32((uint32_t)(EAX));
  /* 12eae4a3 call 0x12ead470 */
  push32(0x12eae4a8u); f_12ead470();
  /* 12eae4a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae4ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12eae4ae:;
  /* 12eae4ae mov esp, ebp */
  ESP = (EBP);
  /* 12eae4b0 pop ebp */
  EBP = (pop32());
  /* 12eae4b1 ret  */
  ESPCHK(0x12eae3e0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12eae4c0 (219 bytes, 64 insns) */
void f_12eae4c0(void) {
  FTRACE(0x12eae4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eae4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eae4c1 mov ebp, esp */
  EBP = (ESP);
  /* 12eae4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae4c4 cmp dword ptr [0x12ebf7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae4cb je 0x12eae561 */
  if (C.zf) goto L_12eae561;
  /* 12eae4d1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12eae4d3 push 0x12ebb1f8 */
  push32((uint32_t)(0x12ebb1f8u));
  /* 12eae4d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eae4da push 0xac */
  push32((uint32_t)(0xacu));
  /* 12eae4df push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae4e1 call 0x12ea4100 */
  push32(0x12eae4e6u); f_12ea4100();
  /* 12eae4e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae4e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eae4ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae4f0 jne 0x12eae4fc */
  if (!C.zf) goto L_12eae4fc;
  /* 12eae4f2 mov eax, 1 */
  EAX = (0x1u);
  /* 12eae4f7 jmp 0x12eae597 */
  goto L_12eae597;
L_12eae4fc:;
  /* 12eae4fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae4ff push eax */
  push32((uint32_t)(EAX));
  /* 12eae500 call 0x12eae5a0 */
  push32(0x12eae505u); f_12eae5a0();
  /* 12eae505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eae50a je 0x12eae52d */
  if (C.zf) goto L_12eae52d;
  /* 12eae50c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae50f push ecx */
  push32((uint32_t)(ECX));
  /* 12eae510 call 0x12eaeb30 */
  push32(0x12eae515u); f_12eaeb30();
  /* 12eae515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae518 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eae51a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae51d push edx */
  push32((uint32_t)(EDX));
  /* 12eae51e call 0x12ea4780 */
  push32(0x12eae523u); f_12ea4780();
  /* 12eae523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae526 mov eax, 1 */
  EAX = (0x1u);
  /* 12eae52b jmp 0x12eae597 */
  goto L_12eae597;
L_12eae52d:;
  /* 12eae52d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae530 mov dword ptr [0x12ebecb8], eax */
  w32((uint32_t)(0x12ebecb8), (EAX));
  /* 12eae535 mov ecx, dword ptr [0x12ebf7fc] */
  ECX = (r32((uint32_t)(0x12ebf7fc)));
  /* 12eae53b push ecx */
  push32((uint32_t)(ECX));
  /* 12eae53c call 0x12eaeb30 */
  push32(0x12eae541u); f_12eaeb30();
  /* 12eae541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae544 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eae546 mov edx, dword ptr [0x12ebf7fc] */
  EDX = (r32((uint32_t)(0x12ebf7fc)));
  /* 12eae54c push edx */
  push32((uint32_t)(EDX));
  /* 12eae54d call 0x12ea4780 */
  push32(0x12eae552u); f_12ea4780();
  /* 12eae552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae558 mov dword ptr [0x12ebf7fc], eax */
  w32((uint32_t)(0x12ebf7fc), (EAX));
  /* 12eae55d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eae55f jmp 0x12eae597 */
  goto L_12eae597;
L_12eae561:;
  /* 12eae561 mov dword ptr [0x12ebecb8], 0x12ebecc0 */
  w32((uint32_t)(0x12ebecb8), (0x12ebecc0u));
  /* 12eae56b mov ecx, dword ptr [0x12ebf7fc] */
  ECX = (r32((uint32_t)(0x12ebf7fc)));
  /* 12eae571 push ecx */
  push32((uint32_t)(ECX));
  /* 12eae572 call 0x12eaeb30 */
  push32(0x12eae577u); f_12eaeb30();
  /* 12eae577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae57a push 2 */
  push32((uint32_t)(0x2u));
  /* 12eae57c mov edx, dword ptr [0x12ebf7fc] */
  EDX = (r32((uint32_t)(0x12ebf7fc)));
  /* 12eae582 push edx */
  push32((uint32_t)(EDX));
  /* 12eae583 call 0x12ea4780 */
  push32(0x12eae588u); f_12ea4780();
  /* 12eae588 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae58b mov dword ptr [0x12ebf7fc], 0 */
  w32((uint32_t)(0x12ebf7fc), (0x0u));
  /* 12eae595 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eae597:;
  /* 12eae597 mov esp, ebp */
  ESP = (EBP);
  /* 12eae599 pop ebp */
  EBP = (pop32());
  /* 12eae59a ret  */
  ESPCHK(0x12eae4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5a0 @ 0x12eae5a0 (1423 bytes, 533 insns) */
void f_12eae5a0(void) {
  FTRACE(0x12eae5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eae5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eae5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eae5a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eae5a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12eae5ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eae5af mov ax, word ptr [0x12ebf836] */
  AX = (r16((uint32_t)(0x12ebf836)));
  /* 12eae5b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eae5b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae5ba mov cx, word ptr [0x12ebf838] */
  CX = (r16((uint32_t)(0x12ebf838)));
  /* 12eae5c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eae5c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eae5c8 jne 0x12eae5d2 */
  if (!C.zf) goto L_12eae5d2;
  /* 12eae5ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eae5cd jmp 0x12eaeb2b */
  goto L_12eaeb2b;
L_12eae5d2:;
  /* 12eae5d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae5d5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae5d8 push edx */
  push32((uint32_t)(EDX));
  /* 12eae5d9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12eae5db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae5de push eax */
  push32((uint32_t)(EAX));
  /* 12eae5df push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae5e1 call 0x12eb1eb0 */
  push32(0x12eae5e6u); f_12eb1eb0();
  /* 12eae5e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae5e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae5ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae5ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae5f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae5f4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae5f7 push edx */
  push32((uint32_t)(EDX));
  /* 12eae5f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12eae5fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae5fd push eax */
  push32((uint32_t)(EAX));
  /* 12eae5fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae600 call 0x12eb1eb0 */
  push32(0x12eae605u); f_12eb1eb0();
  /* 12eae605 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae608 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae60b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae60d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae610 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae613 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae616 push edx */
  push32((uint32_t)(EDX));
  /* 12eae617 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12eae619 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae61c push eax */
  push32((uint32_t)(EAX));
  /* 12eae61d push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae61f call 0x12eb1eb0 */
  push32(0x12eae624u); f_12eb1eb0();
  /* 12eae624 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae627 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae62a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae62c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae62f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae632 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae635 push edx */
  push32((uint32_t)(EDX));
  /* 12eae636 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12eae638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae63b push eax */
  push32((uint32_t)(EAX));
  /* 12eae63c push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae63e call 0x12eb1eb0 */
  push32(0x12eae643u); f_12eb1eb0();
  /* 12eae643 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae646 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae649 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae64b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae64e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae651 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae654 push edx */
  push32((uint32_t)(EDX));
  /* 12eae655 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12eae657 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae65a push eax */
  push32((uint32_t)(EAX));
  /* 12eae65b push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae65d call 0x12eb1eb0 */
  push32(0x12eae662u); f_12eb1eb0();
  /* 12eae662 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae665 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae668 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae66a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae66d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae670 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae673 push edx */
  push32((uint32_t)(EDX));
  /* 12eae674 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12eae676 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae679 push eax */
  push32((uint32_t)(EAX));
  /* 12eae67a push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae67c call 0x12eb1eb0 */
  push32(0x12eae681u); f_12eb1eb0();
  /* 12eae681 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae684 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae687 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae689 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae68c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae68f push edx */
  push32((uint32_t)(EDX));
  /* 12eae690 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12eae692 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae695 push eax */
  push32((uint32_t)(EAX));
  /* 12eae696 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae698 call 0x12eb1eb0 */
  push32(0x12eae69du); f_12eb1eb0();
  /* 12eae69d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae6a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae6a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae6a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae6a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae6ab add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae6ae push edx */
  push32((uint32_t)(EDX));
  /* 12eae6af push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12eae6b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae6b4 push eax */
  push32((uint32_t)(EAX));
  /* 12eae6b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae6b7 call 0x12eb1eb0 */
  push32(0x12eae6bcu); f_12eb1eb0();
  /* 12eae6bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae6bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae6c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae6c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae6c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae6ca add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae6cd push edx */
  push32((uint32_t)(EDX));
  /* 12eae6ce push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12eae6d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae6d3 push eax */
  push32((uint32_t)(EAX));
  /* 12eae6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae6d6 call 0x12eb1eb0 */
  push32(0x12eae6dbu); f_12eb1eb0();
  /* 12eae6db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae6de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae6e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae6e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae6e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae6e9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae6ec push edx */
  push32((uint32_t)(EDX));
  /* 12eae6ed push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12eae6ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae6f2 push eax */
  push32((uint32_t)(EAX));
  /* 12eae6f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae6f5 call 0x12eb1eb0 */
  push32(0x12eae6fau); f_12eb1eb0();
  /* 12eae6fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae6fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae700 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae702 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae708 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae70b push edx */
  push32((uint32_t)(EDX));
  /* 12eae70c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12eae70e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae711 push eax */
  push32((uint32_t)(EAX));
  /* 12eae712 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae714 call 0x12eb1eb0 */
  push32(0x12eae719u); f_12eb1eb0();
  /* 12eae719 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae71c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae71f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae721 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae724 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae727 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae72a push edx */
  push32((uint32_t)(EDX));
  /* 12eae72b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12eae72d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae730 push eax */
  push32((uint32_t)(EAX));
  /* 12eae731 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae733 call 0x12eb1eb0 */
  push32(0x12eae738u); f_12eb1eb0();
  /* 12eae738 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae73b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae73e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae740 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae746 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae749 push edx */
  push32((uint32_t)(EDX));
  /* 12eae74a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12eae74c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae74f push eax */
  push32((uint32_t)(EAX));
  /* 12eae750 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae752 call 0x12eb1eb0 */
  push32(0x12eae757u); f_12eb1eb0();
  /* 12eae757 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae75a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae75d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae75f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae762 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae765 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae768 push edx */
  push32((uint32_t)(EDX));
  /* 12eae769 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12eae76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae76e push eax */
  push32((uint32_t)(EAX));
  /* 12eae76f push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae771 call 0x12eb1eb0 */
  push32(0x12eae776u); f_12eb1eb0();
  /* 12eae776 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae779 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae77c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae77e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae781 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae784 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae787 push edx */
  push32((uint32_t)(EDX));
  /* 12eae788 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12eae78a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae78d push eax */
  push32((uint32_t)(EAX));
  /* 12eae78e push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae790 call 0x12eb1eb0 */
  push32(0x12eae795u); f_12eb1eb0();
  /* 12eae795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae798 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae79b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae79d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae7a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae7a3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae7a6 push edx */
  push32((uint32_t)(EDX));
  /* 12eae7a7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12eae7a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae7ac push eax */
  push32((uint32_t)(EAX));
  /* 12eae7ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae7af call 0x12eb1eb0 */
  push32(0x12eae7b4u); f_12eb1eb0();
  /* 12eae7b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae7b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae7ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae7bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae7bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae7c2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae7c5 push edx */
  push32((uint32_t)(EDX));
  /* 12eae7c6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12eae7c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae7cb push eax */
  push32((uint32_t)(EAX));
  /* 12eae7cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae7ce call 0x12eb1eb0 */
  push32(0x12eae7d3u); f_12eb1eb0();
  /* 12eae7d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae7d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae7d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae7db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae7de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae7e1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae7e4 push edx */
  push32((uint32_t)(EDX));
  /* 12eae7e5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12eae7e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae7ea push eax */
  push32((uint32_t)(EAX));
  /* 12eae7eb push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae7ed call 0x12eb1eb0 */
  push32(0x12eae7f2u); f_12eb1eb0();
  /* 12eae7f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae7f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae7f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae7fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae7fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae800 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae803 push edx */
  push32((uint32_t)(EDX));
  /* 12eae804 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12eae806 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae809 push eax */
  push32((uint32_t)(EAX));
  /* 12eae80a push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae80c call 0x12eb1eb0 */
  push32(0x12eae811u); f_12eb1eb0();
  /* 12eae811 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae814 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae817 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae819 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae81c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae81f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae822 push edx */
  push32((uint32_t)(EDX));
  /* 12eae823 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12eae825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae828 push eax */
  push32((uint32_t)(EAX));
  /* 12eae829 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae82b call 0x12eb1eb0 */
  push32(0x12eae830u); f_12eb1eb0();
  /* 12eae830 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae833 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae836 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae838 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae83b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae83e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae841 push edx */
  push32((uint32_t)(EDX));
  /* 12eae842 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12eae844 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae847 push eax */
  push32((uint32_t)(EAX));
  /* 12eae848 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae84a call 0x12eb1eb0 */
  push32(0x12eae84fu); f_12eb1eb0();
  /* 12eae84f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae852 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae855 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae857 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae85a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae85d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae860 push edx */
  push32((uint32_t)(EDX));
  /* 12eae861 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12eae863 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae866 push eax */
  push32((uint32_t)(EAX));
  /* 12eae867 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae869 call 0x12eb1eb0 */
  push32(0x12eae86eu); f_12eb1eb0();
  /* 12eae86e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae871 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae874 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae876 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae87c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae87f push edx */
  push32((uint32_t)(EDX));
  /* 12eae880 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12eae882 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae885 push eax */
  push32((uint32_t)(EAX));
  /* 12eae886 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae888 call 0x12eb1eb0 */
  push32(0x12eae88du); f_12eb1eb0();
  /* 12eae88d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae890 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae893 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae895 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae898 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae89b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae89e push edx */
  push32((uint32_t)(EDX));
  /* 12eae89f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12eae8a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae8a4 push eax */
  push32((uint32_t)(EAX));
  /* 12eae8a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae8a7 call 0x12eb1eb0 */
  push32(0x12eae8acu); f_12eb1eb0();
  /* 12eae8ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae8af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae8b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae8b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae8b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae8ba add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae8bd push edx */
  push32((uint32_t)(EDX));
  /* 12eae8be push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12eae8c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae8c3 push eax */
  push32((uint32_t)(EAX));
  /* 12eae8c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae8c6 call 0x12eb1eb0 */
  push32(0x12eae8cbu); f_12eb1eb0();
  /* 12eae8cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae8ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae8d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae8d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae8d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae8d9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae8dc push edx */
  push32((uint32_t)(EDX));
  /* 12eae8dd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12eae8df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae8e2 push eax */
  push32((uint32_t)(EAX));
  /* 12eae8e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae8e5 call 0x12eb1eb0 */
  push32(0x12eae8eau); f_12eb1eb0();
  /* 12eae8ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae8ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae8f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae8f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae8f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae8f8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae8fb push edx */
  push32((uint32_t)(EDX));
  /* 12eae8fc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12eae8fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae901 push eax */
  push32((uint32_t)(EAX));
  /* 12eae902 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae904 call 0x12eb1eb0 */
  push32(0x12eae909u); f_12eb1eb0();
  /* 12eae909 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae90c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae90f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae911 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae914 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae917 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae91a push edx */
  push32((uint32_t)(EDX));
  /* 12eae91b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12eae91d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae920 push eax */
  push32((uint32_t)(EAX));
  /* 12eae921 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae923 call 0x12eb1eb0 */
  push32(0x12eae928u); f_12eb1eb0();
  /* 12eae928 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae92b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae92e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae930 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae933 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae936 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae939 push edx */
  push32((uint32_t)(EDX));
  /* 12eae93a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12eae93c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae93f push eax */
  push32((uint32_t)(EAX));
  /* 12eae940 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae942 call 0x12eb1eb0 */
  push32(0x12eae947u); f_12eb1eb0();
  /* 12eae947 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae94a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae94d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae94f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae952 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae955 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae958 push edx */
  push32((uint32_t)(EDX));
  /* 12eae959 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12eae95b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae95e push eax */
  push32((uint32_t)(EAX));
  /* 12eae95f push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae961 call 0x12eb1eb0 */
  push32(0x12eae966u); f_12eb1eb0();
  /* 12eae966 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae969 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae96c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae96e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae971 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae974 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae977 push edx */
  push32((uint32_t)(EDX));
  /* 12eae978 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12eae97a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae97d push eax */
  push32((uint32_t)(EAX));
  /* 12eae97e push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae980 call 0x12eb1eb0 */
  push32(0x12eae985u); f_12eb1eb0();
  /* 12eae985 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae988 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae98b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae98d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae990 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae993 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae996 push edx */
  push32((uint32_t)(EDX));
  /* 12eae997 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12eae999 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae99c push eax */
  push32((uint32_t)(EAX));
  /* 12eae99d push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae99f call 0x12eb1eb0 */
  push32(0x12eae9a4u); f_12eb1eb0();
  /* 12eae9a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae9a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae9aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae9ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae9af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae9b2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae9b8 push edx */
  push32((uint32_t)(EDX));
  /* 12eae9b9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12eae9bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae9be push eax */
  push32((uint32_t)(EAX));
  /* 12eae9bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae9c1 call 0x12eb1eb0 */
  push32(0x12eae9c6u); f_12eb1eb0();
  /* 12eae9c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae9c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae9cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae9ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae9d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae9d4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae9da push edx */
  push32((uint32_t)(EDX));
  /* 12eae9db push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12eae9dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eae9e0 push eax */
  push32((uint32_t)(EAX));
  /* 12eae9e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eae9e3 call 0x12eb1eb0 */
  push32(0x12eae9e8u); f_12eb1eb0();
  /* 12eae9e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae9eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eae9ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eae9f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eae9f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eae9f6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eae9fc push edx */
  push32((uint32_t)(EDX));
  /* 12eae9fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12eae9ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaea02 push eax */
  push32((uint32_t)(EAX));
  /* 12eaea03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaea05 call 0x12eb1eb0 */
  push32(0x12eaea0au); f_12eb1eb0();
  /* 12eaea0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaea0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaea10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaea12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eaea15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaea18 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaea1e push edx */
  push32((uint32_t)(EDX));
  /* 12eaea1f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12eaea21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaea24 push eax */
  push32((uint32_t)(EAX));
  /* 12eaea25 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaea27 call 0x12eb1eb0 */
  push32(0x12eaea2cu); f_12eb1eb0();
  /* 12eaea2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaea2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaea32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaea34 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eaea37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaea3a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaea40 push edx */
  push32((uint32_t)(EDX));
  /* 12eaea41 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12eaea43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaea46 push eax */
  push32((uint32_t)(EAX));
  /* 12eaea47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaea49 call 0x12eb1eb0 */
  push32(0x12eaea4eu); f_12eb1eb0();
  /* 12eaea4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaea51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaea54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaea56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eaea59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaea5c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaea62 push edx */
  push32((uint32_t)(EDX));
  /* 12eaea63 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12eaea65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaea68 push eax */
  push32((uint32_t)(EAX));
  /* 12eaea69 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaea6b call 0x12eb1eb0 */
  push32(0x12eaea70u); f_12eb1eb0();
  /* 12eaea70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaea73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaea76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaea78 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eaea7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaea7e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaea84 push edx */
  push32((uint32_t)(EDX));
  /* 12eaea85 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12eaea87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaea8a push eax */
  push32((uint32_t)(EAX));
  /* 12eaea8b push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaea8d call 0x12eb1eb0 */
  push32(0x12eaea92u); f_12eb1eb0();
  /* 12eaea92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaea95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaea98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaea9a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eaea9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeaa0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeaa6 push edx */
  push32((uint32_t)(EDX));
  /* 12eaeaa7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12eaeaa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaeaac push eax */
  push32((uint32_t)(EAX));
  /* 12eaeaad push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaeaaf call 0x12eb1eb0 */
  push32(0x12eaeab4u); f_12eb1eb0();
  /* 12eaeab4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeab7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaeaba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaeabc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eaeabf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeac2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeac8 push edx */
  push32((uint32_t)(EDX));
  /* 12eaeac9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12eaeacb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaeace push eax */
  push32((uint32_t)(EAX));
  /* 12eaeacf push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaead1 call 0x12eb1eb0 */
  push32(0x12eaead6u); f_12eb1eb0();
  /* 12eaead6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaead9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaeadc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaeade mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eaeae1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeae4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeaea push edx */
  push32((uint32_t)(EDX));
  /* 12eaeaeb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12eaeaed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaeaf0 push eax */
  push32((uint32_t)(EAX));
  /* 12eaeaf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaeaf3 call 0x12eb1eb0 */
  push32(0x12eaeaf8u); f_12eb1eb0();
  /* 12eaeaf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeafb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaeafe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaeb00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eaeb03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeb06 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeb0c push edx */
  push32((uint32_t)(EDX));
  /* 12eaeb0d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12eaeb12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaeb15 push eax */
  push32((uint32_t)(EAX));
  /* 12eaeb16 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaeb18 call 0x12eb1eb0 */
  push32(0x12eaeb1du); f_12eb1eb0();
  /* 12eaeb1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeb20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eaeb23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaeb25 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eaeb28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12eaeb2b:;
  /* 12eaeb2b mov esp, ebp */
  ESP = (EBP);
  /* 12eaeb2d pop ebp */
  EBP = (pop32());
  /* 12eaeb2e ret  */
  ESPCHK(0x12eae5a0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12eaeb30 (779 bytes, 265 insns) */
void f_12eaeb30(void) {
  FTRACE(0x12eaeb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaeb30 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaeb31 mov ebp, esp */
  EBP = (ESP);
  /* 12eaeb33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaeb37 jne 0x12eaeb3e */
  if (!C.zf) goto L_12eaeb3e;
  /* 12eaeb39 jmp 0x12eaee39 */
  goto L_12eaee39;
L_12eaeb3e:;
  /* 12eaeb3e push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeb40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeb43 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12eaeb46 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaeb47 call 0x12ea4780 */
  push32(0x12eaeb4cu); f_12ea4780();
  /* 12eaeb4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeb4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeb51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeb54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12eaeb57 push eax */
  push32((uint32_t)(EAX));
  /* 12eaeb58 call 0x12ea4780 */
  push32(0x12eaeb5du); f_12ea4780();
  /* 12eaeb5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeb60 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeb62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeb65 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eaeb68 push edx */
  push32((uint32_t)(EDX));
  /* 12eaeb69 call 0x12ea4780 */
  push32(0x12eaeb6eu); f_12ea4780();
  /* 12eaeb6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeb71 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeb73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeb76 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12eaeb79 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaeb7a call 0x12ea4780 */
  push32(0x12eaeb7fu); f_12ea4780();
  /* 12eaeb7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeb82 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeb84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeb87 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12eaeb8a push eax */
  push32((uint32_t)(EAX));
  /* 12eaeb8b call 0x12ea4780 */
  push32(0x12eaeb90u); f_12ea4780();
  /* 12eaeb90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeb93 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeb95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeb98 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12eaeb9b push edx */
  push32((uint32_t)(EDX));
  /* 12eaeb9c call 0x12ea4780 */
  push32(0x12eaeba1u); f_12ea4780();
  /* 12eaeba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeba4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeba9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eaebab push ecx */
  push32((uint32_t)(ECX));
  /* 12eaebac call 0x12ea4780 */
  push32(0x12eaebb1u); f_12ea4780();
  /* 12eaebb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaebb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaebb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaebb9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12eaebbc push eax */
  push32((uint32_t)(EAX));
  /* 12eaebbd call 0x12ea4780 */
  push32(0x12eaebc2u); f_12ea4780();
  /* 12eaebc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaebc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaebc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaebca mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12eaebcd push edx */
  push32((uint32_t)(EDX));
  /* 12eaebce call 0x12ea4780 */
  push32(0x12eaebd3u); f_12ea4780();
  /* 12eaebd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaebd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaebd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaebdb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12eaebde push ecx */
  push32((uint32_t)(ECX));
  /* 12eaebdf call 0x12ea4780 */
  push32(0x12eaebe4u); f_12ea4780();
  /* 12eaebe4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaebe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaebe9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaebec mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12eaebef push eax */
  push32((uint32_t)(EAX));
  /* 12eaebf0 call 0x12ea4780 */
  push32(0x12eaebf5u); f_12ea4780();
  /* 12eaebf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaebf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaebfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaebfd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12eaec00 push edx */
  push32((uint32_t)(EDX));
  /* 12eaec01 call 0x12ea4780 */
  push32(0x12eaec06u); f_12ea4780();
  /* 12eaec06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaec09 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaec0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaec0e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12eaec11 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaec12 call 0x12ea4780 */
  push32(0x12eaec17u); f_12ea4780();
  /* 12eaec17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaec1a push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaec1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaec1f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12eaec22 push eax */
  push32((uint32_t)(EAX));
  /* 12eaec23 call 0x12ea4780 */
  push32(0x12eaec28u); f_12ea4780();
  /* 12eaec28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaec2b push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaec2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaec30 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12eaec33 push edx */
  push32((uint32_t)(EDX));
  /* 12eaec34 call 0x12ea4780 */
  push32(0x12eaec39u); f_12ea4780();
  /* 12eaec39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaec3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaec3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaec41 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12eaec44 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaec45 call 0x12ea4780 */
  push32(0x12eaec4au); f_12ea4780();
  /* 12eaec4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaec4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaec4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaec52 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12eaec55 push eax */
  push32((uint32_t)(EAX));
  /* 12eaec56 call 0x12ea4780 */
  push32(0x12eaec5bu); f_12ea4780();
  /* 12eaec5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaec5e push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaec60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaec63 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12eaec66 push edx */
  push32((uint32_t)(EDX));
  /* 12eaec67 call 0x12ea4780 */
  push32(0x12eaec6cu); f_12ea4780();
  /* 12eaec6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaec6f push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaec71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaec74 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12eaec77 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaec78 call 0x12ea4780 */
  push32(0x12eaec7du); f_12ea4780();
  /* 12eaec7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaec80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaec82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaec85 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12eaec88 push eax */
  push32((uint32_t)(EAX));
  /* 12eaec89 call 0x12ea4780 */
  push32(0x12eaec8eu); f_12ea4780();
  /* 12eaec8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaec91 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaec93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaec96 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12eaec99 push edx */
  push32((uint32_t)(EDX));
  /* 12eaec9a call 0x12ea4780 */
  push32(0x12eaec9fu); f_12ea4780();
  /* 12eaec9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeca7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12eaecaa push ecx */
  push32((uint32_t)(ECX));
  /* 12eaecab call 0x12ea4780 */
  push32(0x12eaecb0u); f_12ea4780();
  /* 12eaecb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaecb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaecb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaecb8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12eaecbb push eax */
  push32((uint32_t)(EAX));
  /* 12eaecbc call 0x12ea4780 */
  push32(0x12eaecc1u); f_12ea4780();
  /* 12eaecc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaecc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaecc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaecc9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12eaeccc push edx */
  push32((uint32_t)(EDX));
  /* 12eaeccd call 0x12ea4780 */
  push32(0x12eaecd2u); f_12ea4780();
  /* 12eaecd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaecd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaecd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaecda mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12eaecdd push ecx */
  push32((uint32_t)(ECX));
  /* 12eaecde call 0x12ea4780 */
  push32(0x12eaece3u); f_12ea4780();
  /* 12eaece3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaece6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaece8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaeceb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12eaecee push eax */
  push32((uint32_t)(EAX));
  /* 12eaecef call 0x12ea4780 */
  push32(0x12eaecf4u); f_12ea4780();
  /* 12eaecf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaecf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaecf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaecfc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12eaecff push edx */
  push32((uint32_t)(EDX));
  /* 12eaed00 call 0x12ea4780 */
  push32(0x12eaed05u); f_12ea4780();
  /* 12eaed05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaed08 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaed0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaed0d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12eaed10 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaed11 call 0x12ea4780 */
  push32(0x12eaed16u); f_12ea4780();
  /* 12eaed16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaed19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaed1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaed1e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12eaed21 push eax */
  push32((uint32_t)(EAX));
  /* 12eaed22 call 0x12ea4780 */
  push32(0x12eaed27u); f_12ea4780();
  /* 12eaed27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaed2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaed2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaed2f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12eaed32 push edx */
  push32((uint32_t)(EDX));
  /* 12eaed33 call 0x12ea4780 */
  push32(0x12eaed38u); f_12ea4780();
  /* 12eaed38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaed3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaed3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaed40 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12eaed43 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaed44 call 0x12ea4780 */
  push32(0x12eaed49u); f_12ea4780();
  /* 12eaed49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaed4c push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaed4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaed51 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12eaed54 push eax */
  push32((uint32_t)(EAX));
  /* 12eaed55 call 0x12ea4780 */
  push32(0x12eaed5au); f_12ea4780();
  /* 12eaed5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaed5d push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaed5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaed62 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12eaed68 push edx */
  push32((uint32_t)(EDX));
  /* 12eaed69 call 0x12ea4780 */
  push32(0x12eaed6eu); f_12ea4780();
  /* 12eaed6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaed71 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaed73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaed76 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12eaed7c push ecx */
  push32((uint32_t)(ECX));
  /* 12eaed7d call 0x12ea4780 */
  push32(0x12eaed82u); f_12ea4780();
  /* 12eaed82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaed85 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaed87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaed8a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12eaed90 push eax */
  push32((uint32_t)(EAX));
  /* 12eaed91 call 0x12ea4780 */
  push32(0x12eaed96u); f_12ea4780();
  /* 12eaed96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaed99 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaed9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaed9e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12eaeda4 push edx */
  push32((uint32_t)(EDX));
  /* 12eaeda5 call 0x12ea4780 */
  push32(0x12eaedaau); f_12ea4780();
  /* 12eaedaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaedad push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaedaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaedb2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12eaedb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaedb9 call 0x12ea4780 */
  push32(0x12eaedbeu); f_12ea4780();
  /* 12eaedbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaedc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaedc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaedc6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12eaedcc push eax */
  push32((uint32_t)(EAX));
  /* 12eaedcd call 0x12ea4780 */
  push32(0x12eaedd2u); f_12ea4780();
  /* 12eaedd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaedd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaedd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaedda mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12eaede0 push edx */
  push32((uint32_t)(EDX));
  /* 12eaede1 call 0x12ea4780 */
  push32(0x12eaede6u); f_12ea4780();
  /* 12eaede6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaede9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaedeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaedee mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12eaedf4 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaedf5 call 0x12ea4780 */
  push32(0x12eaedfau); f_12ea4780();
  /* 12eaedfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaedfd push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaedff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaee02 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12eaee08 push eax */
  push32((uint32_t)(EAX));
  /* 12eaee09 call 0x12ea4780 */
  push32(0x12eaee0eu); f_12ea4780();
  /* 12eaee0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaee11 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaee13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaee16 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12eaee1c push edx */
  push32((uint32_t)(EDX));
  /* 12eaee1d call 0x12ea4780 */
  push32(0x12eaee22u); f_12ea4780();
  /* 12eaee22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaee25 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaee27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaee2a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12eaee30 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaee31 call 0x12ea4780 */
  push32(0x12eaee36u); f_12ea4780();
  /* 12eaee36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eaee39:;
  /* 12eaee39 pop ebp */
  EBP = (pop32());
  /* 12eaee3a ret  */
  ESPCHK(0x12eaeb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee40 @ 0x12eaee40 (678 bytes, 180 insns) */
void f_12eaee40(void) {
  FTRACE(0x12eaee40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaee40 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaee41 mov ebp, esp */
  EBP = (ESP);
  /* 12eaee43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaee46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eaee4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaee4f mov ax, word ptr [0x12ebf832] */
  AX = (r16((uint32_t)(0x12ebf832)));
  /* 12eaee55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eaee58 cmp dword ptr [0x12ebf7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaee5f je 0x12eaefba */
  if (C.zf) goto L_12eaefba;
  /* 12eaee65 push 0x12ebf800 */
  push32((uint32_t)(0x12ebf800u));
  /* 12eaee6a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12eaee6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaee6f push ecx */
  push32((uint32_t)(ECX));
  /* 12eaee70 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaee72 call 0x12eb1eb0 */
  push32(0x12eaee77u); f_12eb1eb0();
  /* 12eaee77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaee7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaee7d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaee7f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eaee82 push 0x12ebf804 */
  push32((uint32_t)(0x12ebf804u));
  /* 12eaee87 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12eaee89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaee8c push eax */
  push32((uint32_t)(EAX));
  /* 12eaee8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaee8f call 0x12eb1eb0 */
  push32(0x12eaee94u); f_12eb1eb0();
  /* 12eaee94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaee97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaee9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaee9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaee9f push 0x12ebf808 */
  push32((uint32_t)(0x12ebf808u));
  /* 12eaeea4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12eaeea6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaeea9 push edx */
  push32((uint32_t)(EDX));
  /* 12eaeeaa push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaeeac call 0x12eb1eb0 */
  push32(0x12eaeeb1u); f_12eb1eb0();
  /* 12eaeeb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeeb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaeeb7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaeeb9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaeebc mov edx, dword ptr [0x12ebf808] */
  EDX = (r32((uint32_t)(0x12ebf808)));
  /* 12eaeec2 push edx */
  push32((uint32_t)(EDX));
  /* 12eaeec3 call 0x12eaf0f0 */
  push32(0x12eaeec8u); f_12eaf0f0();
  /* 12eaeec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeecb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaeecf je 0x12eaef29 */
  if (C.zf) goto L_12eaef29;
  /* 12eaeed1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeed3 mov eax, dword ptr [0x12ebf800] */
  EAX = (r32((uint32_t)(0x12ebf800)));
  /* 12eaeed8 push eax */
  push32((uint32_t)(EAX));
  /* 12eaeed9 call 0x12ea4780 */
  push32(0x12eaeedeu); f_12ea4780();
  /* 12eaeede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeee1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeee3 mov ecx, dword ptr [0x12ebf804] */
  ECX = (r32((uint32_t)(0x12ebf804)));
  /* 12eaeee9 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaeeea call 0x12ea4780 */
  push32(0x12eaeeefu); f_12ea4780();
  /* 12eaeeef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaeef2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaeef4 mov edx, dword ptr [0x12ebf808] */
  EDX = (r32((uint32_t)(0x12ebf808)));
  /* 12eaeefa push edx */
  push32((uint32_t)(EDX));
  /* 12eaeefb call 0x12ea4780 */
  push32(0x12eaef00u); f_12ea4780();
  /* 12eaef00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaef03 mov dword ptr [0x12ebf800], 0 */
  w32((uint32_t)(0x12ebf800), (0x0u));
  /* 12eaef0d mov dword ptr [0x12ebf804], 0 */
  w32((uint32_t)(0x12ebf804), (0x0u));
  /* 12eaef17 mov dword ptr [0x12ebf808], 0 */
  w32((uint32_t)(0x12ebf808), (0x0u));
  /* 12eaef21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eaef24 jmp 0x12eaf0e2 */
  goto L_12eaf0e2;
L_12eaef29:;
  /* 12eaef29 mov eax, dword ptr [0x12ebeda8] */
  EAX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaef2e cmp dword ptr [eax], 0x12ebed70 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12ebed70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaef34 je 0x12eaef70 */
  if (C.zf) goto L_12eaef70;
  /* 12eaef36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaef38 mov ecx, dword ptr [0x12ebeda8] */
  ECX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaef3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eaef40 push edx */
  push32((uint32_t)(EDX));
  /* 12eaef41 call 0x12ea4780 */
  push32(0x12eaef46u); f_12ea4780();
  /* 12eaef46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaef49 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaef4b mov eax, dword ptr [0x12ebeda8] */
  EAX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaef50 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12eaef53 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaef54 call 0x12ea4780 */
  push32(0x12eaef59u); f_12ea4780();
  /* 12eaef59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaef5c push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaef5e mov edx, dword ptr [0x12ebeda8] */
  EDX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaef64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12eaef67 push eax */
  push32((uint32_t)(EAX));
  /* 12eaef68 call 0x12ea4780 */
  push32(0x12eaef6du); f_12ea4780();
  /* 12eaef6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eaef70:;
  /* 12eaef70 mov ecx, dword ptr [0x12ebeda8] */
  ECX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaef76 mov edx, dword ptr [0x12ebf800] */
  EDX = (r32((uint32_t)(0x12ebf800)));
  /* 12eaef7c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12eaef7e mov eax, dword ptr [0x12ebeda8] */
  EAX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaef83 mov ecx, dword ptr [0x12ebf804] */
  ECX = (r32((uint32_t)(0x12ebf804)));
  /* 12eaef89 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12eaef8c mov edx, dword ptr [0x12ebeda8] */
  EDX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaef92 mov eax, dword ptr [0x12ebf808] */
  EAX = (r32((uint32_t)(0x12ebf808)));
  /* 12eaef97 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12eaef9a mov ecx, dword ptr [0x12ebeda8] */
  ECX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaefa0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eaefa2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eaefa4 mov byte ptr [0x12ebdec8], al */
  w8((uint32_t)(0x12ebdec8), (AL));
  /* 12eaefa9 mov dword ptr [0x12ebdecc], 1 */
  w32((uint32_t)(0x12ebdecc), (0x1u));
  /* 12eaefb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaefb5 jmp 0x12eaf0e2 */
  goto L_12eaf0e2;
L_12eaefba:;
  /* 12eaefba push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaefbc mov ecx, dword ptr [0x12ebf800] */
  ECX = (r32((uint32_t)(0x12ebf800)));
  /* 12eaefc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaefc3 call 0x12ea4780 */
  push32(0x12eaefc8u); f_12ea4780();
  /* 12eaefc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaefcb push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaefcd mov edx, dword ptr [0x12ebf804] */
  EDX = (r32((uint32_t)(0x12ebf804)));
  /* 12eaefd3 push edx */
  push32((uint32_t)(EDX));
  /* 12eaefd4 call 0x12ea4780 */
  push32(0x12eaefd9u); f_12ea4780();
  /* 12eaefd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaefdc push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaefde mov eax, dword ptr [0x12ebf808] */
  EAX = (r32((uint32_t)(0x12ebf808)));
  /* 12eaefe3 push eax */
  push32((uint32_t)(EAX));
  /* 12eaefe4 call 0x12ea4780 */
  push32(0x12eaefe9u); f_12ea4780();
  /* 12eaefe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaefec mov dword ptr [0x12ebf800], 0 */
  w32((uint32_t)(0x12ebf800), (0x0u));
  /* 12eaeff6 mov dword ptr [0x12ebf804], 0 */
  w32((uint32_t)(0x12ebf804), (0x0u));
  /* 12eaf000 mov dword ptr [0x12ebf808], 0 */
  w32((uint32_t)(0x12ebf808), (0x0u));
  /* 12eaf00a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12eaf00f push 0x12ebb204 */
  push32((uint32_t)(0x12ebb204u));
  /* 12eaf014 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf016 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf018 call 0x12ea3cf0 */
  push32(0x12eaf01du); f_12ea3cf0();
  /* 12eaf01d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf020 mov ecx, dword ptr [0x12ebeda8] */
  ECX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf026 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12eaf028 mov edx, dword ptr [0x12ebeda8] */
  EDX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf02e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf031 jne 0x12eaf03b */
  if (!C.zf) goto L_12eaf03b;
  /* 12eaf033 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf036 jmp 0x12eaf0e2 */
  goto L_12eaf0e2;
L_12eaf03b:;
  /* 12eaf03b push 0x12ebb1d4 */
  push32((uint32_t)(0x12ebb1d4u));
  /* 12eaf040 mov eax, dword ptr [0x12ebeda8] */
  EAX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf045 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eaf047 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf048 call 0x12ea6ca0 */
  push32(0x12eaf04du); f_12ea6ca0();
  /* 12eaf04d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf050 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12eaf055 push 0x12ebb204 */
  push32((uint32_t)(0x12ebb204u));
  /* 12eaf05a push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf05c push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf05e call 0x12ea3cf0 */
  push32(0x12eaf063u); f_12ea3cf0();
  /* 12eaf063 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf066 mov edx, dword ptr [0x12ebeda8] */
  EDX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf06c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12eaf06f mov eax, dword ptr [0x12ebeda8] */
  EAX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf074 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf078 jne 0x12eaf07f */
  if (!C.zf) goto L_12eaf07f;
  /* 12eaf07a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf07d jmp 0x12eaf0e2 */
  goto L_12eaf0e2;
L_12eaf07f:;
  /* 12eaf07f mov ecx, dword ptr [0x12ebeda8] */
  ECX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf085 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12eaf088 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12eaf08b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12eaf090 push 0x12ebb204 */
  push32((uint32_t)(0x12ebb204u));
  /* 12eaf095 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf097 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf099 call 0x12ea3cf0 */
  push32(0x12eaf09eu); f_12ea3cf0();
  /* 12eaf09e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf0a1 mov ecx, dword ptr [0x12ebeda8] */
  ECX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf0a7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12eaf0aa mov edx, dword ptr [0x12ebeda8] */
  EDX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf0b0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf0b4 jne 0x12eaf0bb */
  if (!C.zf) goto L_12eaf0bb;
  /* 12eaf0b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf0b9 jmp 0x12eaf0e2 */
  goto L_12eaf0e2;
L_12eaf0bb:;
  /* 12eaf0bb mov eax, dword ptr [0x12ebeda8] */
  EAX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf0c0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12eaf0c3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12eaf0c6 mov edx, dword ptr [0x12ebeda8] */
  EDX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf0cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eaf0ce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eaf0d0 mov byte ptr [0x12ebdec8], cl */
  w8((uint32_t)(0x12ebdec8), (CL));
  /* 12eaf0d6 mov dword ptr [0x12ebdecc], 1 */
  w32((uint32_t)(0x12ebdecc), (0x1u));
  /* 12eaf0e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eaf0e2:;
  /* 12eaf0e2 mov esp, ebp */
  ESP = (EBP);
  /* 12eaf0e4 pop ebp */
  EBP = (pop32());
  /* 12eaf0e5 ret  */
  ESPCHK(0x12eaee40u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12eaf0f0 (125 bytes, 49 insns) */
void f_12eaf0f0(void) {
  FTRACE(0x12eaf0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaf0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaf0f1 mov ebp, esp */
  EBP = (ESP);
  /* 12eaf0f3 push ecx */
  push32((uint32_t)(ECX));
L_12eaf0f4:;
  /* 12eaf0f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf0f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eaf0fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eaf0fc je 0x12eaf169 */
  if (C.zf) goto L_12eaf169;
  /* 12eaf0fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf101 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eaf104 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf107 jl 0x12eaf12d */
  if ((C.sf!=C.of)) goto L_12eaf12d;
  /* 12eaf109 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf10c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eaf10f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf112 jg 0x12eaf12d */
  if ((!C.zf&&C.sf==C.of)) goto L_12eaf12d;
  /* 12eaf114 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf117 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eaf11a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaf11d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf120 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12eaf122 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf125 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf128 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eaf12b jmp 0x12eaf167 */
  goto L_12eaf167;
L_12eaf12d:;
  /* 12eaf12d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf130 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eaf133 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf136 jne 0x12eaf15e */
  if (!C.zf) goto L_12eaf15e;
  /* 12eaf138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf13b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eaf13e:;
  /* 12eaf13e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf141 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf144 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12eaf147 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12eaf149 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf14c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf14f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eaf152 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf155 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eaf158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaf15a jne 0x12eaf13e */
  if (!C.zf) goto L_12eaf13e;
  /* 12eaf15c jmp 0x12eaf167 */
  goto L_12eaf167;
L_12eaf15e:;
  /* 12eaf15e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf161 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf164 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12eaf167:;
  /* 12eaf167 jmp 0x12eaf0f4 */
  goto L_12eaf0f4;
L_12eaf169:;
  /* 12eaf169 mov esp, ebp */
  ESP = (EBP);
  /* 12eaf16b pop ebp */
  EBP = (pop32());
  /* 12eaf16c ret  */
  ESPCHK(0x12eaf0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f170 @ 0x12eaf170 (304 bytes, 85 insns) */
void f_12eaf170(void) {
  FTRACE(0x12eaf170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaf170 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaf171 mov ebp, esp */
  EBP = (ESP);
  /* 12eaf173 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf174 cmp dword ptr [0x12ebf7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf17b je 0x12eaf23c */
  if (C.zf) goto L_12eaf23c;
  /* 12eaf181 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12eaf183 push 0x12ebb210 */
  push32((uint32_t)(0x12ebb210u));
  /* 12eaf188 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf18a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12eaf18c push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaf18e call 0x12ea4100 */
  push32(0x12eaf193u); f_12ea4100();
  /* 12eaf193 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf196 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eaf199 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf19d jne 0x12eaf1a9 */
  if (!C.zf) goto L_12eaf1a9;
  /* 12eaf19f mov eax, 1 */
  EAX = (0x1u);
  /* 12eaf1a4 jmp 0x12eaf29c */
  goto L_12eaf29c;
L_12eaf1a9:;
  /* 12eaf1a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf1ac push eax */
  push32((uint32_t)(EAX));
  /* 12eaf1ad call 0x12eaf2a0 */
  push32(0x12eaf1b2u); f_12eaf2a0();
  /* 12eaf1b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf1b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaf1b7 je 0x12eaf1dd */
  if (C.zf) goto L_12eaf1dd;
  /* 12eaf1b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf1bc push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf1bd call 0x12eaf530 */
  push32(0x12eaf1c2u); f_12eaf530();
  /* 12eaf1c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf1c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf1c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf1ca push edx */
  push32((uint32_t)(EDX));
  /* 12eaf1cb call 0x12ea4780 */
  push32(0x12eaf1d0u); f_12ea4780();
  /* 12eaf1d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf1d3 mov eax, 1 */
  EAX = (0x1u);
  /* 12eaf1d8 jmp 0x12eaf29c */
  goto L_12eaf29c;
L_12eaf1dd:;
  /* 12eaf1dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf1e0 mov ecx, dword ptr [0x12ebeda8] */
  ECX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf1e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eaf1e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eaf1ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf1ed mov ecx, dword ptr [0x12ebeda8] */
  ECX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf1f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12eaf1f6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12eaf1f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf1fc mov ecx, dword ptr [0x12ebeda8] */
  ECX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf202 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12eaf205 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12eaf208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf20b mov dword ptr [0x12ebeda8], eax */
  w32((uint32_t)(0x12ebeda8), (EAX));
  /* 12eaf210 mov ecx, dword ptr [0x12ebf80c] */
  ECX = (r32((uint32_t)(0x12ebf80c)));
  /* 12eaf216 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf217 call 0x12eaf530 */
  push32(0x12eaf21cu); f_12eaf530();
  /* 12eaf21c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf21f push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf221 mov edx, dword ptr [0x12ebf80c] */
  EDX = (r32((uint32_t)(0x12ebf80c)));
  /* 12eaf227 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf228 call 0x12ea4780 */
  push32(0x12eaf22du); f_12ea4780();
  /* 12eaf22d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf233 mov dword ptr [0x12ebf80c], eax */
  w32((uint32_t)(0x12ebf80c), (EAX));
  /* 12eaf238 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf23a jmp 0x12eaf29c */
  goto L_12eaf29c;
L_12eaf23c:;
  /* 12eaf23c mov ecx, dword ptr [0x12ebeda8] */
  ECX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf242 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eaf244 mov dword ptr [0x12ebed78], edx */
  w32((uint32_t)(0x12ebed78), (EDX));
  /* 12eaf24a mov eax, dword ptr [0x12ebeda8] */
  EAX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf24f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12eaf252 mov dword ptr [0x12ebed7c], ecx */
  w32((uint32_t)(0x12ebed7c), (ECX));
  /* 12eaf258 mov edx, dword ptr [0x12ebeda8] */
  EDX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eaf25e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12eaf261 mov dword ptr [0x12ebed80], eax */
  w32((uint32_t)(0x12ebed80), (EAX));
  /* 12eaf266 mov dword ptr [0x12ebeda8], 0x12ebed78 */
  w32((uint32_t)(0x12ebeda8), (0x12ebed78u));
  /* 12eaf270 mov ecx, dword ptr [0x12ebf80c] */
  ECX = (r32((uint32_t)(0x12ebf80c)));
  /* 12eaf276 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf277 call 0x12eaf530 */
  push32(0x12eaf27cu); f_12eaf530();
  /* 12eaf27c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf27f push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf281 mov edx, dword ptr [0x12ebf80c] */
  EDX = (r32((uint32_t)(0x12ebf80c)));
  /* 12eaf287 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf288 call 0x12ea4780 */
  push32(0x12eaf28du); f_12ea4780();
  /* 12eaf28d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf290 mov dword ptr [0x12ebf80c], 0 */
  w32((uint32_t)(0x12ebf80c), (0x0u));
  /* 12eaf29a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eaf29c:;
  /* 12eaf29c mov esp, ebp */
  ESP = (EBP);
  /* 12eaf29e pop ebp */
  EBP = (pop32());
  /* 12eaf29f ret  */
  ESPCHK(0x12eaf170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2a0 @ 0x12eaf2a0 (525 bytes, 200 insns) */
void f_12eaf2a0(void) {
  FTRACE(0x12eaf2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaf2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaf2a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eaf2a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaf2a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eaf2ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf2af mov ax, word ptr [0x12ebf82c] */
  AX = (r16((uint32_t)(0x12ebf82c)));
  /* 12eaf2b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eaf2b8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf2bc jne 0x12eaf2c6 */
  if (!C.zf) goto L_12eaf2c6;
  /* 12eaf2be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf2c1 jmp 0x12eaf4a9 */
  goto L_12eaf4a9;
L_12eaf2c6:;
  /* 12eaf2c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf2c9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf2cc push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf2cd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12eaf2cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf2d2 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf2d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaf2d5 call 0x12eb1eb0 */
  push32(0x12eaf2dau); f_12eb1eb0();
  /* 12eaf2da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf2dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf2e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf2e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf2e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf2e8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf2eb push edx */
  push32((uint32_t)(EDX));
  /* 12eaf2ec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12eaf2ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf2f1 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf2f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaf2f4 call 0x12eb1eb0 */
  push32(0x12eaf2f9u); f_12eb1eb0();
  /* 12eaf2f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf2fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf2ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf301 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf307 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf30a push edx */
  push32((uint32_t)(EDX));
  /* 12eaf30b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12eaf30d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf310 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf311 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaf313 call 0x12eb1eb0 */
  push32(0x12eaf318u); f_12eb1eb0();
  /* 12eaf318 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf31b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf31e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf320 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf323 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf326 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf329 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf32a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12eaf32c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf32f push eax */
  push32((uint32_t)(EAX));
  /* 12eaf330 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaf332 call 0x12eb1eb0 */
  push32(0x12eaf337u); f_12eb1eb0();
  /* 12eaf337 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf33a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf33d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf33f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf345 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf348 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf349 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12eaf34b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf34e push eax */
  push32((uint32_t)(EAX));
  /* 12eaf34f push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaf351 call 0x12eb1eb0 */
  push32(0x12eaf356u); f_12eb1eb0();
  /* 12eaf356 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf359 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf35c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf35e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf364 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12eaf367 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf368 call 0x12eaf4b0 */
  push32(0x12eaf36du); f_12eaf4b0();
  /* 12eaf36d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf373 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf376 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf377 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12eaf379 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf37c push edx */
  push32((uint32_t)(EDX));
  /* 12eaf37d push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaf37f call 0x12eb1eb0 */
  push32(0x12eaf384u); f_12eb1eb0();
  /* 12eaf384 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf387 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf38a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf38c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf38f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf392 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf395 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf396 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12eaf398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf39b push eax */
  push32((uint32_t)(EAX));
  /* 12eaf39c push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaf39e call 0x12eb1eb0 */
  push32(0x12eaf3a3u); f_12eb1eb0();
  /* 12eaf3a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf3a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf3a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf3ab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf3ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf3b1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf3b4 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf3b5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12eaf3b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf3ba push eax */
  push32((uint32_t)(EAX));
  /* 12eaf3bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf3bd call 0x12eb1eb0 */
  push32(0x12eaf3c2u); f_12eb1eb0();
  /* 12eaf3c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf3c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf3c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf3ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf3cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf3d0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf3d3 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf3d4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12eaf3d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf3d9 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf3da push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf3dc call 0x12eb1eb0 */
  push32(0x12eaf3e1u); f_12eb1eb0();
  /* 12eaf3e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf3e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf3e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf3e9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf3ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf3ef add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf3f2 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf3f3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12eaf3f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf3f8 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf3f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf3fb call 0x12eb1eb0 */
  push32(0x12eaf400u); f_12eb1eb0();
  /* 12eaf400 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf403 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf406 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf408 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf40b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf40e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf411 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf412 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12eaf414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf417 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf418 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf41a call 0x12eb1eb0 */
  push32(0x12eaf41fu); f_12eb1eb0();
  /* 12eaf41f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf422 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf425 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf427 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf42a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf42d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf430 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf431 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12eaf433 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf436 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf437 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf439 call 0x12eb1eb0 */
  push32(0x12eaf43eu); f_12eb1eb0();
  /* 12eaf43e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf441 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf444 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf446 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf449 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf44c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf44f push edx */
  push32((uint32_t)(EDX));
  /* 12eaf450 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12eaf452 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf455 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf456 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf458 call 0x12eb1eb0 */
  push32(0x12eaf45du); f_12eb1eb0();
  /* 12eaf45d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf460 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf463 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf465 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf468 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf46b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf46e push edx */
  push32((uint32_t)(EDX));
  /* 12eaf46f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12eaf471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf474 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf475 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf477 call 0x12eb1eb0 */
  push32(0x12eaf47cu); f_12eb1eb0();
  /* 12eaf47c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf47f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf482 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf484 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf48a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf48d push edx */
  push32((uint32_t)(EDX));
  /* 12eaf48e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12eaf490 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf493 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf494 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf496 call 0x12eb1eb0 */
  push32(0x12eaf49bu); f_12eb1eb0();
  /* 12eaf49b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf49e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eaf4a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf4a3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eaf4a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12eaf4a9:;
  /* 12eaf4a9 mov esp, ebp */
  ESP = (EBP);
  /* 12eaf4ab pop ebp */
  EBP = (pop32());
  /* 12eaf4ac ret  */
  ESPCHK(0x12eaf2a0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12eaf4b0 (125 bytes, 49 insns) */
void f_12eaf4b0(void) {
  FTRACE(0x12eaf4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaf4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaf4b1 mov ebp, esp */
  EBP = (ESP);
  /* 12eaf4b3 push ecx */
  push32((uint32_t)(ECX));
L_12eaf4b4:;
  /* 12eaf4b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf4b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eaf4ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eaf4bc je 0x12eaf529 */
  if (C.zf) goto L_12eaf529;
  /* 12eaf4be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf4c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eaf4c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf4c7 jl 0x12eaf4ed */
  if ((C.sf!=C.of)) goto L_12eaf4ed;
  /* 12eaf4c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf4cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eaf4cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf4d2 jg 0x12eaf4ed */
  if ((!C.zf&&C.sf==C.of)) goto L_12eaf4ed;
  /* 12eaf4d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf4d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eaf4da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaf4dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf4e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12eaf4e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf4e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf4e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eaf4eb jmp 0x12eaf527 */
  goto L_12eaf527;
L_12eaf4ed:;
  /* 12eaf4ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf4f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eaf4f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf4f6 jne 0x12eaf51e */
  if (!C.zf) goto L_12eaf51e;
  /* 12eaf4f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf4fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eaf4fe:;
  /* 12eaf4fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf501 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf504 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12eaf507 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12eaf509 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf50c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf50f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eaf512 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eaf515 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eaf518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaf51a jne 0x12eaf4fe */
  if (!C.zf) goto L_12eaf4fe;
  /* 12eaf51c jmp 0x12eaf527 */
  goto L_12eaf527;
L_12eaf51e:;
  /* 12eaf51e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf521 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf524 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12eaf527:;
  /* 12eaf527 jmp 0x12eaf4b4 */
  goto L_12eaf4b4;
L_12eaf529:;
  /* 12eaf529 mov esp, ebp */
  ESP = (EBP);
  /* 12eaf52b pop ebp */
  EBP = (pop32());
  /* 12eaf52c ret  */
  ESPCHK(0x12eaf4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f530 @ 0x12eaf530 (147 bytes, 52 insns) */
void f_12eaf530(void) {
  FTRACE(0x12eaf530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaf530 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaf531 mov ebp, esp */
  EBP = (ESP);
  /* 12eaf533 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf537 jne 0x12eaf53e */
  if (!C.zf) goto L_12eaf53e;
  /* 12eaf539 jmp 0x12eaf5c1 */
  goto L_12eaf5c1;
L_12eaf53e:;
  /* 12eaf53e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf541 cmp dword ptr [eax + 0xc], 0x12ebf868 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12ebf868u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf548 je 0x12eaf5c1 */
  if (C.zf) goto L_12eaf5c1;
  /* 12eaf54a push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf54c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf54f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eaf552 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf553 call 0x12ea4780 */
  push32(0x12eaf558u); f_12ea4780();
  /* 12eaf558 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf55b push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf55d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf560 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12eaf563 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf564 call 0x12ea4780 */
  push32(0x12eaf569u); f_12ea4780();
  /* 12eaf569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf56c push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf56e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf571 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12eaf574 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf575 call 0x12ea4780 */
  push32(0x12eaf57au); f_12ea4780();
  /* 12eaf57a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf57d push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf57f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf582 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12eaf585 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf586 call 0x12ea4780 */
  push32(0x12eaf58bu); f_12ea4780();
  /* 12eaf58b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf58e push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf593 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12eaf596 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf597 call 0x12ea4780 */
  push32(0x12eaf59cu); f_12ea4780();
  /* 12eaf59c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf59f push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf5a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf5a4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12eaf5a7 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf5a8 call 0x12ea4780 */
  push32(0x12eaf5adu); f_12ea4780();
  /* 12eaf5ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf5b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf5b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eaf5b5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12eaf5b8 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf5b9 call 0x12ea4780 */
  push32(0x12eaf5beu); f_12ea4780();
  /* 12eaf5be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eaf5c1:;
  /* 12eaf5c1 pop ebp */
  EBP = (pop32());
  /* 12eaf5c2 ret  */
  ESPCHK(0x12eaf530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5d0 @ 0x12eaf5d0 (928 bytes, 284 insns) */
void f_12eaf5d0(void) {
  FTRACE(0x12eaf5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaf5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaf5d1 mov ebp, esp */
  EBP = (ESP);
  /* 12eaf5d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaf5d6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12eaf5dd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12eaf5e4 cmp dword ptr [0x12ebf7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf5eb je 0x12eaf921 */
  if (C.zf) goto L_12eaf921;
  /* 12eaf5f1 cmp dword ptr [0x12ebf7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf5f8 jne 0x12eaf620 */
  if (!C.zf) goto L_12eaf620;
  /* 12eaf5fa push 0x12ebf7e0 */
  push32((uint32_t)(0x12ebf7e0u));
  /* 12eaf5ff push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12eaf604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf606 mov ax, word ptr [0x12ebf824] */
  AX = (r16((uint32_t)(0x12ebf824)));
  /* 12eaf60c push eax */
  push32((uint32_t)(EAX));
  /* 12eaf60d push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf60f call 0x12eb1eb0 */
  push32(0x12eaf614u); f_12eb1eb0();
  /* 12eaf614 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaf619 je 0x12eaf620 */
  if (C.zf) goto L_12eaf620;
  /* 12eaf61b jmp 0x12eaf8e2 */
  goto L_12eaf8e2;
L_12eaf620:;
  /* 12eaf620 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12eaf622 push 0x12ebb21c */
  push32((uint32_t)(0x12ebb21cu));
  /* 12eaf627 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf629 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12eaf62e call 0x12ea3cf0 */
  push32(0x12eaf633u); f_12ea3cf0();
  /* 12eaf633 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf636 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12eaf639 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12eaf63b push 0x12ebb21c */
  push32((uint32_t)(0x12ebb21cu));
  /* 12eaf640 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf642 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12eaf647 call 0x12ea3cf0 */
  push32(0x12eaf64cu); f_12ea3cf0();
  /* 12eaf64c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf64f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12eaf652 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12eaf654 push 0x12ebb21c */
  push32((uint32_t)(0x12ebb21cu));
  /* 12eaf659 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf65b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12eaf660 call 0x12ea3cf0 */
  push32(0x12eaf665u); f_12ea3cf0();
  /* 12eaf665 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf668 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12eaf66b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12eaf66d push 0x12ebb21c */
  push32((uint32_t)(0x12ebb21cu));
  /* 12eaf672 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf674 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12eaf679 call 0x12ea3cf0 */
  push32(0x12eaf67eu); f_12ea3cf0();
  /* 12eaf67e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf681 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12eaf684 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf688 je 0x12eaf69c */
  if (C.zf) goto L_12eaf69c;
  /* 12eaf68a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf68e je 0x12eaf69c */
  if (C.zf) goto L_12eaf69c;
  /* 12eaf690 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf694 je 0x12eaf69c */
  if (C.zf) goto L_12eaf69c;
  /* 12eaf696 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf69a jne 0x12eaf6a1 */
  if (!C.zf) goto L_12eaf6a1;
L_12eaf69c:;
  /* 12eaf69c jmp 0x12eaf8e2 */
  goto L_12eaf8e2;
L_12eaf6a1:;
  /* 12eaf6a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eaf6a4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12eaf6a7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12eaf6ae jmp 0x12eaf6b9 */
  goto L_12eaf6b9;
L_12eaf6b0:;
  /* 12eaf6b0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eaf6b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf6b6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12eaf6b9:;
  /* 12eaf6b9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf6c0 jge 0x12eaf6d5 */
  if ((C.sf==C.of)) goto L_12eaf6d5;
  /* 12eaf6c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf6c5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12eaf6c8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12eaf6ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf6cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf6d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12eaf6d3 jmp 0x12eaf6b0 */
  goto L_12eaf6b0;
L_12eaf6d5:;
  /* 12eaf6d5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12eaf6d8 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf6d9 mov ecx, dword ptr [0x12ebf7e0] */
  ECX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eaf6df push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf6e0 call dword ptr [0x12ec22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22f4))), 0x12eaf6e6u);
  /* 12eaf6e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaf6e8 jne 0x12eaf6ef */
  if (!C.zf) goto L_12eaf6ef;
  /* 12eaf6ea jmp 0x12eaf8e2 */
  goto L_12eaf8e2;
L_12eaf6ef:;
  /* 12eaf6ef cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf6f3 jbe 0x12eaf6fa */
  if ((C.cf||C.zf)) goto L_12eaf6fa;
  /* 12eaf6f5 jmp 0x12eaf8e2 */
  goto L_12eaf8e2;
L_12eaf6fa:;
  /* 12eaf6fa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eaf6fd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12eaf703 mov dword ptr [0x12ebdec4], edx */
  w32((uint32_t)(0x12ebdec4), (EDX));
  /* 12eaf709 cmp dword ptr [0x12ebdec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebdec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf710 jle 0x12eaf769 */
  if ((C.zf||C.sf!=C.of)) goto L_12eaf769;
  /* 12eaf712 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12eaf715 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12eaf718 jmp 0x12eaf723 */
  goto L_12eaf723;
L_12eaf71a:;
  /* 12eaf71a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf71d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf720 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12eaf723:;
  /* 12eaf723 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf726 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf728 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eaf72a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaf72c je 0x12eaf769 */
  if (C.zf) goto L_12eaf769;
  /* 12eaf72e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf731 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaf733 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12eaf736 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eaf738 je 0x12eaf769 */
  if (C.zf) goto L_12eaf769;
  /* 12eaf73a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf73d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf73f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eaf741 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12eaf744 jmp 0x12eaf74f */
  goto L_12eaf74f;
L_12eaf746:;
  /* 12eaf746 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eaf749 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf74c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12eaf74f:;
  /* 12eaf74f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf752 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf754 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12eaf757 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf75a jg 0x12eaf767 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eaf767;
  /* 12eaf75c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eaf75f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf762 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12eaf765 jmp 0x12eaf746 */
  goto L_12eaf746;
L_12eaf767:;
  /* 12eaf767 jmp 0x12eaf71a */
  goto L_12eaf71a;
L_12eaf769:;
  /* 12eaf769 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf76b push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf76d push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf76f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12eaf772 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf775 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf776 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eaf77b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eaf77e push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf77f push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaf781 call 0x12eabf20 */
  push32(0x12eaf786u); f_12eabf20();
  /* 12eaf786 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaf78b jne 0x12eaf792 */
  if (!C.zf) goto L_12eaf792;
  /* 12eaf78d jmp 0x12eaf8e2 */
  goto L_12eaf8e2;
L_12eaf792:;
  /* 12eaf792 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12eaf795 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12eaf79a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eaf79d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12eaf7a0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12eaf7a7 jmp 0x12eaf7b2 */
  goto L_12eaf7b2;
L_12eaf7a9:;
  /* 12eaf7a9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eaf7ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf7af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12eaf7b2:;
  /* 12eaf7b2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf7b9 jge 0x12eaf7d0 */
  if ((C.sf==C.of)) goto L_12eaf7d0;
  /* 12eaf7bb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eaf7be mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12eaf7c2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12eaf7c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eaf7c8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf7cb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12eaf7ce jmp 0x12eaf7a9 */
  goto L_12eaf7a9;
L_12eaf7d0:;
  /* 12eaf7d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf7d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eaf7d4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eaf7d7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf7da push edx */
  push32((uint32_t)(EDX));
  /* 12eaf7db push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eaf7e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eaf7e3 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf7e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eaf7e6 call 0x12eb2150 */
  push32(0x12eaf7ebu); f_12eb2150();
  /* 12eaf7eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf7ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaf7f0 jne 0x12eaf7f7 */
  if (!C.zf) goto L_12eaf7f7;
  /* 12eaf7f2 jmp 0x12eaf8e2 */
  goto L_12eaf8e2;
L_12eaf7f7:;
  /* 12eaf7f7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eaf7fa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12eaf7ff cmp dword ptr [0x12ebdec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebdec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf806 jle 0x12eaf863 */
  if ((C.zf||C.sf!=C.of)) goto L_12eaf863;
  /* 12eaf808 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12eaf80b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12eaf80e jmp 0x12eaf819 */
  goto L_12eaf819;
L_12eaf810:;
  /* 12eaf810 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf813 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf816 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12eaf819:;
  /* 12eaf819 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf81c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eaf81e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eaf820 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eaf822 je 0x12eaf863 */
  if (C.zf) goto L_12eaf863;
  /* 12eaf824 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf827 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eaf829 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12eaf82c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eaf82e je 0x12eaf863 */
  if (C.zf) goto L_12eaf863;
  /* 12eaf830 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf835 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eaf837 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12eaf83a jmp 0x12eaf845 */
  goto L_12eaf845;
L_12eaf83c:;
  /* 12eaf83c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eaf83f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf842 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12eaf845:;
  /* 12eaf845 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eaf848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf84a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12eaf84d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf850 jg 0x12eaf861 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eaf861;
  /* 12eaf852 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eaf855 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12eaf858 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12eaf85f jmp 0x12eaf83c */
  goto L_12eaf83c;
L_12eaf861:;
  /* 12eaf861 jmp 0x12eaf810 */
  goto L_12eaf810;
L_12eaf863:;
  /* 12eaf863 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12eaf866 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf869 mov dword ptr [0x12ebdcb8], eax */
  w32((uint32_t)(0x12ebdcb8), (EAX));
  /* 12eaf86e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eaf871 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf874 mov dword ptr [0x12ebdcbc], ecx */
  w32((uint32_t)(0x12ebdcbc), (ECX));
  /* 12eaf87a cmp dword ptr [0x12ebf810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf881 je 0x12eaf894 */
  if (C.zf) goto L_12eaf894;
  /* 12eaf883 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf885 mov edx, dword ptr [0x12ebf810] */
  EDX = (r32((uint32_t)(0x12ebf810)));
  /* 12eaf88b push edx */
  push32((uint32_t)(EDX));
  /* 12eaf88c call 0x12ea4780 */
  push32(0x12eaf891u); f_12ea4780();
  /* 12eaf891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eaf894:;
  /* 12eaf894 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12eaf897 mov dword ptr [0x12ebf810], eax */
  w32((uint32_t)(0x12ebf810), (EAX));
  /* 12eaf89c cmp dword ptr [0x12ebf814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaf8a3 je 0x12eaf8b6 */
  if (C.zf) goto L_12eaf8b6;
  /* 12eaf8a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf8a7 mov ecx, dword ptr [0x12ebf814] */
  ECX = (r32((uint32_t)(0x12ebf814)));
  /* 12eaf8ad push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf8ae call 0x12ea4780 */
  push32(0x12eaf8b3u); f_12ea4780();
  /* 12eaf8b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eaf8b6:;
  /* 12eaf8b6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eaf8b9 mov dword ptr [0x12ebf814], edx */
  w32((uint32_t)(0x12ebf814), (EDX));
  /* 12eaf8bf push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf8c1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eaf8c4 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf8c5 call 0x12ea4780 */
  push32(0x12eaf8cau); f_12ea4780();
  /* 12eaf8ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf8cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf8cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eaf8d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf8d3 call 0x12ea4780 */
  push32(0x12eaf8d8u); f_12ea4780();
  /* 12eaf8d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf8db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf8dd jmp 0x12eaf96c */
  goto L_12eaf96c;
L_12eaf8e2:;
  /* 12eaf8e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf8e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12eaf8e7 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf8e8 call 0x12ea4780 */
  push32(0x12eaf8edu); f_12ea4780();
  /* 12eaf8ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf8f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf8f2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eaf8f5 push eax */
  push32((uint32_t)(EAX));
  /* 12eaf8f6 call 0x12ea4780 */
  push32(0x12eaf8fbu); f_12ea4780();
  /* 12eaf8fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf8fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf900 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eaf903 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf904 call 0x12ea4780 */
  push32(0x12eaf909u); f_12ea4780();
  /* 12eaf909 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf90c push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf90e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eaf911 push edx */
  push32((uint32_t)(EDX));
  /* 12eaf912 call 0x12ea4780 */
  push32(0x12eaf917u); f_12ea4780();
  /* 12eaf917 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf91a mov eax, 1 */
  EAX = (0x1u);
  /* 12eaf91f jmp 0x12eaf96c */
  goto L_12eaf96c;
L_12eaf921:;
  /* 12eaf921 mov dword ptr [0x12ebdcb8], 0x12ebdcc2 */
  w32((uint32_t)(0x12ebdcb8), (0x12ebdcc2u));
  /* 12eaf92b mov dword ptr [0x12ebdcbc], 0x12ebdcc2 */
  w32((uint32_t)(0x12ebdcbc), (0x12ebdcc2u));
  /* 12eaf935 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf937 mov eax, dword ptr [0x12ebf810] */
  EAX = (r32((uint32_t)(0x12ebf810)));
  /* 12eaf93c push eax */
  push32((uint32_t)(EAX));
  /* 12eaf93d call 0x12ea4780 */
  push32(0x12eaf942u); f_12ea4780();
  /* 12eaf942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf945 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eaf947 mov ecx, dword ptr [0x12ebf814] */
  ECX = (r32((uint32_t)(0x12ebf814)));
  /* 12eaf94d push ecx */
  push32((uint32_t)(ECX));
  /* 12eaf94e call 0x12ea4780 */
  push32(0x12eaf953u); f_12ea4780();
  /* 12eaf953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf956 mov dword ptr [0x12ebf810], 0 */
  w32((uint32_t)(0x12ebf810), (0x0u));
  /* 12eaf960 mov dword ptr [0x12ebf814], 0 */
  w32((uint32_t)(0x12ebf814), (0x0u));
  /* 12eaf96a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eaf96c:;
  /* 12eaf96c mov esp, ebp */
  ESP = (EBP);
  /* 12eaf96e pop ebp */
  EBP = (pop32());
  /* 12eaf96f ret  */
  ESPCHK(0x12eaf5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f970 @ 0x12eaf970 (7 bytes, 5 insns) */
void f_12eaf970(void) {
  FTRACE(0x12eaf970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaf970 push ebp */
  push32((uint32_t)(EBP));
  /* 12eaf971 mov ebp, esp */
  EBP = (ESP);
  /* 12eaf973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf975 pop ebp */
  EBP = (pop32());
  /* 12eaf976 ret  */
  ESPCHK(0x12eaf970u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12eaf980 (129 bytes, 56 insns) */
void f_12eaf980(void) {
  FTRACE(0x12eaf980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eaf980 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12eaf984 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12eaf988 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12eaf98e jne 0x12eaf9cc */
  if (!C.zf) goto L_12eaf9cc;
L_12eaf990:;
  /* 12eaf990 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eaf992 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eaf994 jne 0x12eaf9c4 */
  if (!C.zf) goto L_12eaf9c4;
  /* 12eaf996 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eaf998 je 0x12eaf9c0 */
  if (C.zf) goto L_12eaf9c0;
  /* 12eaf99a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eaf99d jne 0x12eaf9c4 */
  if (!C.zf) goto L_12eaf9c4;
  /* 12eaf99f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12eaf9a1 je 0x12eaf9c0 */
  if (C.zf) goto L_12eaf9c0;
  /* 12eaf9a3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12eaf9a6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eaf9a9 jne 0x12eaf9c4 */
  if (!C.zf) goto L_12eaf9c4;
  /* 12eaf9ab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eaf9ad je 0x12eaf9c0 */
  if (C.zf) goto L_12eaf9c0;
  /* 12eaf9af cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eaf9b2 jne 0x12eaf9c4 */
  if (!C.zf) goto L_12eaf9c4;
  /* 12eaf9b4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf9b7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf9ba or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12eaf9bc jne 0x12eaf990 */
  if (!C.zf) goto L_12eaf990;
  /* 12eaf9be mov edi, edi */
  EDI = (EDI);
L_12eaf9c0:;
  /* 12eaf9c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eaf9c2 ret  */
  ESPCHK(0x12eaf980u, _esp0);
  ESP += 4; return;
  /* 12eaf9c3 nop  */
  /* nop */
L_12eaf9c4:;
  /* 12eaf9c4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaf9c6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12eaf9c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12eaf9c9 ret  */
  ESPCHK(0x12eaf980u, _esp0);
  ESP += 4; return;
  /* 12eaf9ca mov edi, edi */
  EDI = (EDI);
L_12eaf9cc:;
  /* 12eaf9cc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12eaf9d2 je 0x12eaf9e8 */
  if (C.zf) goto L_12eaf9e8;
  /* 12eaf9d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eaf9d6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12eaf9d7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eaf9d9 jne 0x12eaf9c4 */
  if (!C.zf) goto L_12eaf9c4;
  /* 12eaf9db inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12eaf9dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eaf9de je 0x12eaf9c0 */
  if (C.zf) goto L_12eaf9c0;
  /* 12eaf9e0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12eaf9e6 je 0x12eaf990 */
  if (C.zf) goto L_12eaf990;
L_12eaf9e8:;
  /* 12eaf9e8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12eaf9eb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaf9ee cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eaf9f0 jne 0x12eaf9c4 */
  if (!C.zf) goto L_12eaf9c4;
  /* 12eaf9f2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eaf9f4 je 0x12eaf9c0 */
  if (C.zf) goto L_12eaf9c0;
  /* 12eaf9f6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eaf9f9 jne 0x12eaf9c4 */
  if (!C.zf) goto L_12eaf9c4;
  /* 12eaf9fb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12eaf9fd je 0x12eaf9c0 */
  if (C.zf) goto L_12eaf9c0;
  /* 12eaf9ff add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafa02 jmp 0x12eaf990 */
  goto L_12eaf990;
}

/* FUN_1000fa10 @ 0x12eafa10 (62 bytes, 35 insns) */
void f_12eafa10(void) {
  FTRACE(0x12eafa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eafa10 push ebp */
  push32((uint32_t)(EBP));
  /* 12eafa11 mov ebp, esp */
  EBP = (ESP);
  /* 12eafa13 push esi */
  push32((uint32_t)(ESI));
  /* 12eafa14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eafa16 push eax */
  push32((uint32_t)(EAX));
  /* 12eafa17 push eax */
  push32((uint32_t)(EAX));
  /* 12eafa18 push eax */
  push32((uint32_t)(EAX));
  /* 12eafa19 push eax */
  push32((uint32_t)(EAX));
  /* 12eafa1a push eax */
  push32((uint32_t)(EAX));
  /* 12eafa1b push eax */
  push32((uint32_t)(EAX));
  /* 12eafa1c push eax */
  push32((uint32_t)(EAX));
  /* 12eafa1d push eax */
  push32((uint32_t)(EAX));
  /* 12eafa1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eafa21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eafa24:;
  /* 12eafa24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eafa26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eafa28 je 0x12eafa31 */
  if (C.zf) goto L_12eafa31;
  /* 12eafa2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12eafa2b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12eafa2b");
  /* 12eafa2f jmp 0x12eafa24 */
  goto L_12eafa24;
L_12eafa31:;
  /* 12eafa31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12eafa34 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12eafa37 nop  */
  /* nop */
L_12eafa38:;
  /* 12eafa38 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12eafa39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eafa3b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eafa3d je 0x12eafa46 */
  if (C.zf) goto L_12eafa46;
  /* 12eafa3f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12eafa40 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12eafa40");
  /* 12eafa44 jae 0x12eafa38 */
  if (!C.cf) goto L_12eafa38;
L_12eafa46:;
  /* 12eafa46 mov eax, ecx */
  EAX = (ECX);
  /* 12eafa48 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafa4b pop esi */
  ESI = (pop32());
  /* 12eafa4c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eafa4d ret  */
  ESPCHK(0x12eafa10u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12eafa50 (56 bytes, 31 insns) */
void f_12eafa50(void) {
  FTRACE(0x12eafa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eafa50 push ebp */
  push32((uint32_t)(EBP));
  /* 12eafa51 mov ebp, esp */
  EBP = (ESP);
  /* 12eafa53 push edi */
  push32((uint32_t)(EDI));
  /* 12eafa54 push esi */
  push32((uint32_t)(ESI));
  /* 12eafa55 push ebx */
  push32((uint32_t)(EBX));
  /* 12eafa56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eafa59 jecxz 0x12eafa81 */
  x86_unimpl("jecxz @ 0x12eafa59");
  /* 12eafa5b mov ebx, ecx */
  EBX = (ECX);
  /* 12eafa5d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12eafa60 mov esi, edi */
  ESI = (EDI);
  /* 12eafa62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eafa64 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12eafa66 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eafa68 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafa6a mov edi, esi */
  EDI = (ESI);
  /* 12eafa6c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12eafa6f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12eafa71 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12eafa74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eafa76 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eafa79 ja 0x12eafa7f */
  if ((!C.cf&&!C.zf)) goto L_12eafa7f;
  /* 12eafa7b je 0x12eafa81 */
  if (C.zf) goto L_12eafa81;
  /* 12eafa7d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12eafa7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12eafa7f:;
  /* 12eafa7f not ecx */
  ECX = (~(ECX));
L_12eafa81:;
  /* 12eafa81 mov eax, ecx */
  EAX = (ECX);
  /* 12eafa83 pop ebx */
  EBX = (pop32());
  /* 12eafa84 pop esi */
  ESI = (pop32());
  /* 12eafa85 pop edi */
  EDI = (pop32());
  /* 12eafa86 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eafa87 ret  */
  ESPCHK(0x12eafa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa90 @ 0x12eafa90 (58 bytes, 32 insns) */
void f_12eafa90(void) {
  FTRACE(0x12eafa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eafa90 push ebp */
  push32((uint32_t)(EBP));
  /* 12eafa91 mov ebp, esp */
  EBP = (ESP);
  /* 12eafa93 push esi */
  push32((uint32_t)(ESI));
  /* 12eafa94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eafa96 push eax */
  push32((uint32_t)(EAX));
  /* 12eafa97 push eax */
  push32((uint32_t)(EAX));
  /* 12eafa98 push eax */
  push32((uint32_t)(EAX));
  /* 12eafa99 push eax */
  push32((uint32_t)(EAX));
  /* 12eafa9a push eax */
  push32((uint32_t)(EAX));
  /* 12eafa9b push eax */
  push32((uint32_t)(EAX));
  /* 12eafa9c push eax */
  push32((uint32_t)(EAX));
  /* 12eafa9d push eax */
  push32((uint32_t)(EAX));
  /* 12eafa9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eafaa1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eafaa4:;
  /* 12eafaa4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eafaa6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eafaa8 je 0x12eafab1 */
  if (C.zf) goto L_12eafab1;
  /* 12eafaaa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12eafaab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12eafaab");
  /* 12eafaaf jmp 0x12eafaa4 */
  goto L_12eafaa4;
L_12eafab1:;
  /* 12eafab1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12eafab4:;
  /* 12eafab4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eafab6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eafab8 je 0x12eafac4 */
  if (C.zf) goto L_12eafac4;
  /* 12eafaba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12eafabb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12eafabb");
  /* 12eafabf jae 0x12eafab4 */
  if (!C.cf) goto L_12eafab4;
  /* 12eafac1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12eafac4:;
  /* 12eafac4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafac7 pop esi */
  ESI = (pop32());
  /* 12eafac8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eafac9 ret  */
  ESPCHK(0x12eafa90u, _esp0);
  ESP += 4; return;
}

