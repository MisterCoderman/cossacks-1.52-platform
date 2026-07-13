#include "recomp.h"

/* FUN_1000747d @ 0x101e747d (72 bytes, 29 insns) */
void f_101e747d(void) {
  FTRACE(0x101e747du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e747d push esi */
  push32((uint32_t)(ESI));
  /* 101e747e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e7482 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e7484 je 0x101e74c3 */
  if (C.zf) goto L_101e74c3;
  /* 101e7486 push 9 */
  push32((uint32_t)(0x9u));
  /* 101e7488 call 0x101e737a */
  push32(0x101e748du); f_101e737a();
  /* 101e748d push esi */
  push32((uint32_t)(ESI));
  /* 101e748e call 0x101e7cc3 */
  push32(0x101e7493u); f_101e7cc3();
  /* 101e7493 pop ecx */
  ECX = (pop32());
  /* 101e7494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e7496 pop ecx */
  ECX = (pop32());
  /* 101e7497 je 0x101e74ac */
  if (C.zf) goto L_101e74ac;
  /* 101e7499 push esi */
  push32((uint32_t)(ESI));
  /* 101e749a push eax */
  push32((uint32_t)(EAX));
  /* 101e749b call 0x101e7cee */
  push32(0x101e74a0u); f_101e7cee();
  /* 101e74a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 101e74a2 call 0x101e73db */
  push32(0x101e74a7u); f_101e73db();
  /* 101e74a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e74aa pop esi */
  ESI = (pop32());
  /* 101e74ab ret  */
  ESPCHK(0x101e747du, _esp0);
  ESP += 4; return;
L_101e74ac:;
  /* 101e74ac push 9 */
  push32((uint32_t)(0x9u));
  /* 101e74ae call 0x101e73db */
  push32(0x101e74b3u); f_101e73db();
  /* 101e74b3 pop ecx */
  ECX = (pop32());
  /* 101e74b4 push esi */
  push32((uint32_t)(ESI));
  /* 101e74b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e74b7 push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e74bd call dword ptr [0x101eb078] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb078))), 0x101e74c3u);
L_101e74c3:;
  /* 101e74c3 pop esi */
  ESI = (pop32());
  /* 101e74c4 ret  */
  ESPCHK(0x101e747du, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x101e74c5 (18 bytes, 6 insns) */
void f_101e74c5(void) {
  FTRACE(0x101e74c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e74c5 push dword ptr [0x101f1314] */
  push32((uint32_t)(r32((uint32_t)(0x101f1314))));
  /* 101e74cb push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101e74cf call 0x101e74d7 */
  push32(0x101e74d4u); f_101e74d7();
  /* 101e74d4 pop ecx */
  ECX = (pop32());
  /* 101e74d5 pop ecx */
  ECX = (pop32());
  /* 101e74d6 ret  */
  ESPCHK(0x101e74c5u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x101e74d7 (44 bytes, 16 insns) */
void f_101e74d7(void) {
  FTRACE(0x101e74d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e74d7 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e74dc ja 0x101e7500 */
  if ((!C.cf&&!C.zf)) goto L_101e7500;
L_101e74de:;
  /* 101e74de push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101e74e2 call 0x101e7503 */
  push32(0x101e74e7u); f_101e7503();
  /* 101e74e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e74e9 pop ecx */
  ECX = (pop32());
  /* 101e74ea jne 0x101e7502 */
  if (!C.zf) goto L_101e7502;
  /* 101e74ec cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e74f0 je 0x101e7502 */
  if (C.zf) goto L_101e7502;
  /* 101e74f2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101e74f6 call 0x101e967a */
  push32(0x101e74fbu); f_101e967a();
  /* 101e74fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e74fd pop ecx */
  ECX = (pop32());
  /* 101e74fe jne 0x101e74de */
  if (!C.zf) goto L_101e74de;
L_101e7500:;
  /* 101e7500 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101e7502:;
  /* 101e7502 ret  */
  ESPCHK(0x101e74d7u, _esp0);
  ESP += 4; return;
}

/* FUN_10007503 @ 0x101e7503 (78 bytes, 30 insns) */
void f_101e7503(void) {
  FTRACE(0x101e7503u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7503 push esi */
  push32((uint32_t)(ESI));
  /* 101e7504 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e7508 cmp esi, dword ptr [0x101edb70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101edb70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e750e push edi */
  push32((uint32_t)(EDI));
  /* 101e750f ja 0x101e7532 */
  if ((!C.cf&&!C.zf)) goto L_101e7532;
  /* 101e7511 push 9 */
  push32((uint32_t)(0x9u));
  /* 101e7513 call 0x101e737a */
  push32(0x101e7518u); f_101e737a();
  /* 101e7518 push esi */
  push32((uint32_t)(ESI));
  /* 101e7519 call 0x101e8019 */
  push32(0x101e751eu); f_101e8019();
  /* 101e751e push 9 */
  push32((uint32_t)(0x9u));
  /* 101e7520 mov edi, eax */
  EDI = (EAX);
  /* 101e7522 call 0x101e73db */
  push32(0x101e7527u); f_101e73db();
  /* 101e7527 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e752a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e752c je 0x101e7532 */
  if (C.zf) goto L_101e7532;
  /* 101e752e mov eax, edi */
  EAX = (EDI);
  /* 101e7530 jmp 0x101e754e */
  goto L_101e754e;
L_101e7532:;
  /* 101e7532 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e7534 jne 0x101e7539 */
  if (!C.zf) goto L_101e7539;
  /* 101e7536 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e7538 pop esi */
  ESI = (pop32());
L_101e7539:;
  /* 101e7539 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e753c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 101e753f push esi */
  push32((uint32_t)(ESI));
  /* 101e7540 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e7542 push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e7548 call dword ptr [0x101eb094] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb094))), 0x101e754eu);
L_101e754e:;
  /* 101e754e pop edi */
  EDI = (pop32());
  /* 101e754f pop esi */
  ESI = (pop32());
  /* 101e7550 ret  */
  ESPCHK(0x101e7503u, _esp0);
  ESP += 4; return;
}

/* FUN_10007551 @ 0x101e7551 (429 bytes, 143 insns) */
void f_101e7551(void) {
  FTRACE(0x101e7551u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7551 push ebp */
  push32((uint32_t)(EBP));
  /* 101e7552 mov ebp, esp */
  EBP = (ESP);
  /* 101e7554 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7557 push ebx */
  push32((uint32_t)(EBX));
  /* 101e7558 push esi */
  push32((uint32_t)(ESI));
  /* 101e7559 push edi */
  push32((uint32_t)(EDI));
  /* 101e755a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101e755c call 0x101e737a */
  push32(0x101e7561u); f_101e737a();
  /* 101e7561 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e7564 call 0x101e76fe */
  push32(0x101e7569u); f_101e76fe();
  /* 101e7569 mov ebx, eax */
  EBX = (EAX);
  /* 101e756b pop ecx */
  ECX = (pop32());
  /* 101e756c cmp ebx, dword ptr [0x101f1478] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101f1478))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7572 pop ecx */
  ECX = (pop32());
  /* 101e7573 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101e7576 jne 0x101e757f */
  if (!C.zf) goto L_101e757f;
L_101e7578:;
  /* 101e7578 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e757a jmp 0x101e76ef */
  goto L_101e76ef;
L_101e757f:;
  /* 101e757f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101e7581 je 0x101e76dd */
  if (C.zf) goto L_101e76dd;
  /* 101e7587 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e7589 mov eax, 0x101eda80 */
  EAX = (0x101eda80u);
L_101e758e:;
  /* 101e758e cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7590 je 0x101e7606 */
  if (C.zf) goto L_101e7606;
  /* 101e7592 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7595 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101e7596 cmp eax, 0x101edb70 */
  { uint32_t _a=(EAX),_b=(0x101edb70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e759b jl 0x101e758e */
  if ((C.sf!=C.of)) goto L_101e758e;
  /* 101e759d lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101e75a0 push eax */
  push32((uint32_t)(EAX));
  /* 101e75a1 push ebx */
  push32((uint32_t)(EBX));
  /* 101e75a2 call dword ptr [0x101eb098] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb098))), 0x101e75a8u);
  /* 101e75a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e75aa pop esi */
  ESI = (pop32());
  /* 101e75ab cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e75ad jne 0x101e76d4 */
  if (!C.zf) goto L_101e76d4;
  /* 101e75b3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 101e75b5 and dword ptr [0x101f16a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101f16a4)))&(0x0u); w32((uint32_t)(0x101f16a4), (_r)); fl_logic(_r,32); }
  /* 101e75bc pop ecx */
  ECX = (pop32());
  /* 101e75bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e75bf mov edi, 0x101f15a0 */
  EDI = (0x101f15a0u);
  /* 101e75c4 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e75c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101e75c9 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101e75ca mov dword ptr [0x101f1478], ebx */
  w32((uint32_t)(0x101f1478), (EBX));
  /* 101e75d0 jbe 0x101e76c1 */
  if ((C.cf||C.zf)) goto L_101e76c1;
  /* 101e75d6 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e75da je 0x101e769c */
  if (C.zf) goto L_101e769c;
  /* 101e75e0 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_101e75e3:;
  /* 101e75e3 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101e75e5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101e75e7 je 0x101e769c */
  if (C.zf) goto L_101e769c;
  /* 101e75ed movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 101e75f1 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_101e75f4:;
  /* 101e75f4 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e75f6 ja 0x101e7690 */
  if ((!C.cf&&!C.zf)) goto L_101e7690;
  /* 101e75fc or byte ptr [eax + 0x101f15a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101f15a1)))|(0x4u); w8((uint32_t)(EAX + 0x101f15a1), (_r)); fl_logic(_r,8); }
  /* 101e7603 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e7604 jmp 0x101e75f4 */
  goto L_101e75f4;
L_101e7606:;
  /* 101e7606 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e760a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 101e760c pop ecx */
  ECX = (pop32());
  /* 101e760d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e760f mov edi, 0x101f15a0 */
  EDI = (0x101f15a0u);
  /* 101e7614 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 101e7617 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101e7619 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 101e761c stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101e761d lea ebx, [esi + 0x101eda90] */
  EBX = ((uint32_t)(ESI + 0x101eda90));
L_101e7623:;
  /* 101e7623 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e7626 mov ecx, ebx */
  ECX = (EBX);
  /* 101e7628 je 0x101e7656 */
  if (C.zf) goto L_101e7656;
L_101e762a:;
  /* 101e762a mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 101e762d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101e762f je 0x101e7656 */
  if (C.zf) goto L_101e7656;
  /* 101e7631 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 101e7634 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 101e7637 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7639 ja 0x101e764f */
  if ((!C.cf&&!C.zf)) goto L_101e764f;
  /* 101e763b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e763e mov dl, byte ptr [edx + 0x101eda78] */
  DL = (r8((uint32_t)(EDX + 0x101eda78)));
L_101e7644:;
  /* 101e7644 or byte ptr [eax + 0x101f15a1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101f15a1)))|(DL); w8((uint32_t)(EAX + 0x101f15a1), (_r)); fl_logic(_r,8); }
  /* 101e764a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e764b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e764d jbe 0x101e7644 */
  if ((C.cf||C.zf)) goto L_101e7644;
L_101e764f:;
  /* 101e764f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e7650 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e7651 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e7654 jne 0x101e762a */
  if (!C.zf) goto L_101e762a;
L_101e7656:;
  /* 101e7656 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101e7659 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e765c cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7660 jb 0x101e7623 */
  if (C.cf) goto L_101e7623;
  /* 101e7662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7665 mov dword ptr [0x101f148c], 1 */
  w32((uint32_t)(0x101f148c), (0x1u));
  /* 101e766f push eax */
  push32((uint32_t)(EAX));
  /* 101e7670 mov dword ptr [0x101f1478], eax */
  w32((uint32_t)(0x101f1478), (EAX));
  /* 101e7675 call 0x101e7748 */
  push32(0x101e767au); f_101e7748();
  /* 101e767a lea esi, [esi + 0x101eda84] */
  ESI = ((uint32_t)(ESI + 0x101eda84));
  /* 101e7680 mov edi, 0x101f1480 */
  EDI = (0x101f1480u);
  /* 101e7685 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e7686 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e7687 pop ecx */
  ECX = (pop32());
  /* 101e7688 mov dword ptr [0x101f16a4], eax */
  w32((uint32_t)(0x101f16a4), (EAX));
  /* 101e768d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e768e jmp 0x101e76e2 */
  goto L_101e76e2;
L_101e7690:;
  /* 101e7690 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e7691 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e7692 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e7696 jne 0x101e75e3 */
  if (!C.zf) goto L_101e75e3;
L_101e769c:;
  /* 101e769c mov eax, esi */
  EAX = (ESI);
L_101e769e:;
  /* 101e769e or byte ptr [eax + 0x101f15a1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101f15a1)))|(0x8u); w8((uint32_t)(EAX + 0x101f15a1), (_r)); fl_logic(_r,8); }
  /* 101e76a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e76a6 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e76ab jb 0x101e769e */
  if (C.cf) goto L_101e769e;
  /* 101e76ad push ebx */
  push32((uint32_t)(EBX));
  /* 101e76ae call 0x101e7748 */
  push32(0x101e76b3u); f_101e7748();
  /* 101e76b3 pop ecx */
  ECX = (pop32());
  /* 101e76b4 mov dword ptr [0x101f16a4], eax */
  w32((uint32_t)(0x101f16a4), (EAX));
  /* 101e76b9 mov dword ptr [0x101f148c], esi */
  w32((uint32_t)(0x101f148c), (ESI));
  /* 101e76bf jmp 0x101e76c8 */
  goto L_101e76c8;
L_101e76c1:;
  /* 101e76c1 and dword ptr [0x101f148c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101f148c)))&(0x0u); w32((uint32_t)(0x101f148c), (_r)); fl_logic(_r,32); }
L_101e76c8:;
  /* 101e76c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e76ca mov edi, 0x101f1480 */
  EDI = (0x101f1480u);
  /* 101e76cf stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101e76d0 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101e76d1 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101e76d2 jmp 0x101e76e2 */
  goto L_101e76e2;
L_101e76d4:;
  /* 101e76d4 cmp dword ptr [0x101f12b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101f12b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e76db je 0x101e76ec */
  if (C.zf) goto L_101e76ec;
L_101e76dd:;
  /* 101e76dd call 0x101e777b */
  push32(0x101e76e2u); f_101e777b();
L_101e76e2:;
  /* 101e76e2 call 0x101e77a4 */
  push32(0x101e76e7u); f_101e77a4();
  /* 101e76e7 jmp 0x101e7578 */
  goto L_101e7578;
L_101e76ec:;
  /* 101e76ec or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_101e76ef:;
  /* 101e76ef push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101e76f1 call 0x101e73db */
  push32(0x101e76f6u); f_101e73db();
  /* 101e76f6 pop ecx */
  ECX = (pop32());
  /* 101e76f7 mov eax, esi */
  EAX = (ESI);
  /* 101e76f9 pop edi */
  EDI = (pop32());
  /* 101e76fa pop esi */
  ESI = (pop32());
  /* 101e76fb pop ebx */
  EBX = (pop32());
  /* 101e76fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e76fd ret  */
  ESPCHK(0x101e7551u, _esp0);
  ESP += 4; return;
}

/* FUN_100076fe @ 0x101e76fe (74 bytes, 15 insns) */
void f_101e76fe(void) {
  FTRACE(0x101e76feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e76fe mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e7702 and dword ptr [0x101f12b8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101f12b8)))&(0x0u); w32((uint32_t)(0x101f12b8), (_r)); fl_logic(_r,32); }
  /* 101e7709 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e770c jne 0x101e771e */
  if (!C.zf) goto L_101e771e;
  /* 101e770e mov dword ptr [0x101f12b8], 1 */
  w32((uint32_t)(0x101f12b8), (0x1u));
  /* 101e7718 jmp dword ptr [0x101eb0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101eb0a0)))); return;
L_101e771e:;
  /* 101e771e cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7721 jne 0x101e7733 */
  if (!C.zf) goto L_101e7733;
  /* 101e7723 mov dword ptr [0x101f12b8], 1 */
  w32((uint32_t)(0x101f12b8), (0x1u));
  /* 101e772d jmp dword ptr [0x101eb09c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101eb09c)))); return;
L_101e7733:;
  /* 101e7733 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7736 jne 0x101e7747 */
  if (!C.zf) goto L_101e7747;
  /* 101e7738 mov eax, dword ptr [0x101f1304] */
  EAX = (r32((uint32_t)(0x101f1304)));
  /* 101e773d mov dword ptr [0x101f12b8], 1 */
  w32((uint32_t)(0x101f12b8), (0x1u));
L_101e7747:;
  /* 101e7747 ret  */
  ESPCHK(0x101e76feu, _esp0);
  ESP += 4; return;
}

/* FUN_10007748 @ 0x101e7748 (51 bytes, 19 insns) */
void f_101e7748(void) {
  FTRACE(0x101e7748u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7748 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e774c sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7751 je 0x101e7775 */
  if (C.zf) goto L_101e7775;
  /* 101e7753 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7756 je 0x101e776f */
  if (C.zf) goto L_101e776f;
  /* 101e7758 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e775b je 0x101e7769 */
  if (C.zf) goto L_101e7769;
  /* 101e775d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e775e je 0x101e7763 */
  if (C.zf) goto L_101e7763;
  /* 101e7760 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e7762 ret  */
  ESPCHK(0x101e7748u, _esp0);
  ESP += 4; return;
L_101e7763:;
  /* 101e7763 mov eax, 0x404 */
  EAX = (0x404u);
  /* 101e7768 ret  */
  ESPCHK(0x101e7748u, _esp0);
  ESP += 4; return;
L_101e7769:;
  /* 101e7769 mov eax, 0x412 */
  EAX = (0x412u);
  /* 101e776e ret  */
  ESPCHK(0x101e7748u, _esp0);
  ESP += 4; return;
L_101e776f:;
  /* 101e776f mov eax, 0x804 */
  EAX = (0x804u);
  /* 101e7774 ret  */
  ESPCHK(0x101e7748u, _esp0);
  ESP += 4; return;
L_101e7775:;
  /* 101e7775 mov eax, 0x411 */
  EAX = (0x411u);
  /* 101e777a ret  */
  ESPCHK(0x101e7748u, _esp0);
  ESP += 4; return;
}

/* FUN_1000777b @ 0x101e777b (41 bytes, 17 insns) */
void f_101e777b(void) {
  FTRACE(0x101e777bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e777b push edi */
  push32((uint32_t)(EDI));
  /* 101e777c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 101e777e pop ecx */
  ECX = (pop32());
  /* 101e777f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e7781 mov edi, 0x101f15a0 */
  EDI = (0x101f15a0u);
  /* 101e7786 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101e7788 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101e7789 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e778b mov edi, 0x101f1480 */
  EDI = (0x101f1480u);
  /* 101e7790 mov dword ptr [0x101f1478], eax */
  w32((uint32_t)(0x101f1478), (EAX));
  /* 101e7795 mov dword ptr [0x101f148c], eax */
  w32((uint32_t)(0x101f148c), (EAX));
  /* 101e779a mov dword ptr [0x101f16a4], eax */
  w32((uint32_t)(0x101f16a4), (EAX));
  /* 101e779f stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101e77a0 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101e77a1 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101e77a2 pop edi */
  EDI = (pop32());
  /* 101e77a3 ret  */
  ESPCHK(0x101e777bu, _esp0);
  ESP += 4; return;
}

/* FUN_100077a4 @ 0x101e77a4 (389 bytes, 124 insns) */
void f_101e77a4(void) {
  FTRACE(0x101e77a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e77a4 push ebp */
  push32((uint32_t)(EBP));
  /* 101e77a5 mov ebp, esp */
  EBP = (ESP);
  /* 101e77a7 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e77ad lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101e77b0 push esi */
  push32((uint32_t)(ESI));
  /* 101e77b1 push eax */
  push32((uint32_t)(EAX));
  /* 101e77b2 push dword ptr [0x101f1478] */
  push32((uint32_t)(r32((uint32_t)(0x101f1478))));
  /* 101e77b8 call dword ptr [0x101eb098] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb098))), 0x101e77beu);
  /* 101e77be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e77c1 jne 0x101e78dd */
  if (!C.zf) goto L_101e78dd;
  /* 101e77c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e77c9 mov esi, 0x100 */
  ESI = (0x100u);
L_101e77ce:;
  /* 101e77ce mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 101e77d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e77d6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e77d8 jb 0x101e77ce */
  if (C.cf) goto L_101e77ce;
  /* 101e77da mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 101e77dd mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 101e77e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e77e6 je 0x101e781f */
  if (C.zf) goto L_101e781f;
  /* 101e77e8 push ebx */
  push32((uint32_t)(EBX));
  /* 101e77e9 push edi */
  push32((uint32_t)(EDI));
  /* 101e77ea lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_101e77ed:;
  /* 101e77ed movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 101e77f0 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 101e77f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e77f5 ja 0x101e7814 */
  if ((!C.cf&&!C.zf)) goto L_101e7814;
  /* 101e77f7 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e77f9 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 101e7800 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e7801 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 101e7806 mov ebx, ecx */
  EBX = (ECX);
  /* 101e7808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e780b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101e780d mov ecx, ebx */
  ECX = (EBX);
  /* 101e780f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101e7812 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_101e7814:;
  /* 101e7814 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101e7815 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101e7816 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 101e7819 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e781b jne 0x101e77ed */
  if (!C.zf) goto L_101e77ed;
  /* 101e781d pop edi */
  EDI = (pop32());
  /* 101e781e pop ebx */
  EBX = (pop32());
L_101e781f:;
  /* 101e781f push 0 */
  push32((uint32_t)(0x0u));
  /* 101e7821 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 101e7827 push dword ptr [0x101f16a4] */
  push32((uint32_t)(r32((uint32_t)(0x101f16a4))));
  /* 101e782d push dword ptr [0x101f1478] */
  push32((uint32_t)(r32((uint32_t)(0x101f1478))));
  /* 101e7833 push eax */
  push32((uint32_t)(EAX));
  /* 101e7834 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 101e783a push esi */
  push32((uint32_t)(ESI));
  /* 101e783b push eax */
  push32((uint32_t)(EAX));
  /* 101e783c push 1 */
  push32((uint32_t)(0x1u));
  /* 101e783e call 0x101e865e */
  push32(0x101e7843u); f_101e865e();
  /* 101e7843 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e7845 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 101e784b push dword ptr [0x101f1478] */
  push32((uint32_t)(r32((uint32_t)(0x101f1478))));
  /* 101e7851 push esi */
  push32((uint32_t)(ESI));
  /* 101e7852 push eax */
  push32((uint32_t)(EAX));
  /* 101e7853 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 101e7859 push esi */
  push32((uint32_t)(ESI));
  /* 101e785a push eax */
  push32((uint32_t)(EAX));
  /* 101e785b push esi */
  push32((uint32_t)(ESI));
  /* 101e785c push dword ptr [0x101f16a4] */
  push32((uint32_t)(r32((uint32_t)(0x101f16a4))));
  /* 101e7862 call 0x101e87a7 */
  push32(0x101e7867u); f_101e87a7();
  /* 101e7867 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e7869 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 101e786f push dword ptr [0x101f1478] */
  push32((uint32_t)(r32((uint32_t)(0x101f1478))));
  /* 101e7875 push esi */
  push32((uint32_t)(ESI));
  /* 101e7876 push eax */
  push32((uint32_t)(EAX));
  /* 101e7877 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 101e787d push esi */
  push32((uint32_t)(ESI));
  /* 101e787e push eax */
  push32((uint32_t)(EAX));
  /* 101e787f push 0x200 */
  push32((uint32_t)(0x200u));
  /* 101e7884 push dword ptr [0x101f16a4] */
  push32((uint32_t)(r32((uint32_t)(0x101f16a4))));
  /* 101e788a call 0x101e87a7 */
  push32(0x101e788fu); f_101e87a7();
  /* 101e788f add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e7894 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_101e789a:;
  /* 101e789a mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 101e789d test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 101e78a0 je 0x101e78b8 */
  if (C.zf) goto L_101e78b8;
  /* 101e78a2 or byte ptr [eax + 0x101f15a1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101f15a1)))|(0x10u); w8((uint32_t)(EAX + 0x101f15a1), (_r)); fl_logic(_r,8); }
  /* 101e78a9 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_101e78b0:;
  /* 101e78b0 mov byte ptr [eax + 0x101f14a0], dl */
  w8((uint32_t)(EAX + 0x101f14a0), (DL));
  /* 101e78b6 jmp 0x101e78d4 */
  goto L_101e78d4;
L_101e78b8:;
  /* 101e78b8 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 101e78bb je 0x101e78cd */
  if (C.zf) goto L_101e78cd;
  /* 101e78bd or byte ptr [eax + 0x101f15a1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101f15a1)))|(0x20u); w8((uint32_t)(EAX + 0x101f15a1), (_r)); fl_logic(_r,8); }
  /* 101e78c4 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 101e78cb jmp 0x101e78b0 */
  goto L_101e78b0;
L_101e78cd:;
  /* 101e78cd and byte ptr [eax + 0x101f14a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101f14a0)))&(0x0u); w8((uint32_t)(EAX + 0x101f14a0), (_r)); fl_logic(_r,8); }
L_101e78d4:;
  /* 101e78d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e78d5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e78d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e78d7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e78d9 jb 0x101e789a */
  if (C.cf) goto L_101e789a;
  /* 101e78db jmp 0x101e7926 */
  goto L_101e7926;
L_101e78dd:;
  /* 101e78dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e78df mov esi, 0x100 */
  ESI = (0x100u);
L_101e78e4:;
  /* 101e78e4 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e78e7 jb 0x101e7902 */
  if (C.cf) goto L_101e7902;
  /* 101e78e9 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e78ec ja 0x101e7902 */
  if ((!C.cf&&!C.zf)) goto L_101e7902;
  /* 101e78ee or byte ptr [eax + 0x101f15a1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101f15a1)))|(0x10u); w8((uint32_t)(EAX + 0x101f15a1), (_r)); fl_logic(_r,8); }
  /* 101e78f5 mov cl, al */
  CL = (AL);
  /* 101e78f7 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_101e78fa:;
  /* 101e78fa mov byte ptr [eax + 0x101f14a0], cl */
  w8((uint32_t)(EAX + 0x101f14a0), (CL));
  /* 101e7900 jmp 0x101e7921 */
  goto L_101e7921;
L_101e7902:;
  /* 101e7902 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7905 jb 0x101e791a */
  if (C.cf) goto L_101e791a;
  /* 101e7907 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e790a ja 0x101e791a */
  if ((!C.cf&&!C.zf)) goto L_101e791a;
  /* 101e790c or byte ptr [eax + 0x101f15a1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101f15a1)))|(0x20u); w8((uint32_t)(EAX + 0x101f15a1), (_r)); fl_logic(_r,8); }
  /* 101e7913 mov cl, al */
  CL = (AL);
  /* 101e7915 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101e7918 jmp 0x101e78fa */
  goto L_101e78fa;
L_101e791a:;
  /* 101e791a and byte ptr [eax + 0x101f14a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101f14a0)))&(0x0u); w8((uint32_t)(EAX + 0x101f14a0), (_r)); fl_logic(_r,8); }
L_101e7921:;
  /* 101e7921 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e7922 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7924 jb 0x101e78e4 */
  if (C.cf) goto L_101e78e4;
L_101e7926:;
  /* 101e7926 pop esi */
  ESI = (pop32());
  /* 101e7927 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e7928 ret  */
  ESPCHK(0x101e77a4u, _esp0);
  ESP += 4; return;
}

/* FUN_10007929 @ 0x101e7929 (28 bytes, 7 insns) */
void f_101e7929(void) {
  FTRACE(0x101e7929u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7929 cmp dword ptr [0x101f27e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101f27e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7930 jne 0x101e7944 */
  if (!C.zf) goto L_101e7944;
  /* 101e7932 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 101e7934 call 0x101e7551 */
  push32(0x101e7939u); f_101e7551();
  /* 101e7939 pop ecx */
  ECX = (pop32());
  /* 101e793a mov dword ptr [0x101f27e8], 1 */
  w32((uint32_t)(0x101f27e8), (0x1u));
L_101e7944:;
  /* 101e7944 ret  */
  ESPCHK(0x101e7929u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x101e7950 (664 bytes, 265 insns) [15 switch table(s)] */
void f_101e7950(void) {
  FTRACE(0x101e7950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7950 push ebp */
  push32((uint32_t)(EBP));
  /* 101e7951 mov ebp, esp */
  EBP = (ESP);
  /* 101e7953 push edi */
  push32((uint32_t)(EDI));
  /* 101e7954 push esi */
  push32((uint32_t)(ESI));
  /* 101e7955 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e7958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e795b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101e795e mov eax, ecx */
  EAX = (ECX);
  /* 101e7960 mov edx, ecx */
  EDX = (ECX);
  /* 101e7962 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7964 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7966 jbe 0x101e7970 */
  if ((C.cf||C.zf)) goto L_101e7970;
  /* 101e7968 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e796a jb 0x101e7ae8 */
  if (C.cf) goto L_101e7ae8;
L_101e7970:;
  /* 101e7970 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101e7976 jne 0x101e798c */
  if (!C.zf) goto L_101e798c;
  /* 101e7978 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e797b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101e797e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7981 jb 0x101e79ac */
  if (C.cf) goto L_101e79ac;
  /* 101e7983 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e7985 jmp dword ptr [edx*4 + 0x101e7a98] */
  switch (EDX) {
    case 0: goto L_101e7aa8;
    case 1: goto L_101e7ab0;
    case 2: goto L_101e7abc;
    case 3: goto L_101e7ad0;
    default: x86_unimpl("switch@0x101e7985 out of table"); return;
  }
L_101e798c:;
  /* 101e798c mov eax, edi */
  EAX = (EDI);
  /* 101e798e mov edx, 3 */
  EDX = (0x3u);
  /* 101e7993 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7996 jb 0x101e79a4 */
  if (C.cf) goto L_101e79a4;
  /* 101e7998 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101e799b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e799d jmp dword ptr [eax*4 + 0x101e79b0] */
  switch (EAX) {
    case 1: goto L_101e79c0;
    case 2: goto L_101e79ec;
    case 3: goto L_101e7a10;
    default: x86_unimpl("switch@0x101e799d out of table"); return;
  }
L_101e79a4:;
  /* 101e79a4 jmp dword ptr [ecx*4 + 0x101e7aa8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x101e7aa8)))); return;
  /* 101e79ab nop  */
  /* nop */
L_101e79ac:;
  /* 101e79ac jmp dword ptr [ecx*4 + 0x101e7a2c] */
  switch (ECX) {
    case 0: goto L_101e7a8f;
    case 1: goto L_101e7a7c;
    case 2: goto L_101e7a74;
    case 3: goto L_101e7a6c;
    case 4: goto L_101e7a64;
    case 5: goto L_101e7a5c;
    case 6: goto L_101e7a54;
    case 7: goto L_101e7a4c;
    default: x86_unimpl("switch@0x101e79ac out of table"); return;
  }
  /* 101e79b3 nop  */
  /* nop */
L_101e79c0:;
  /* 101e79c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e79c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e79c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e79c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e79c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e79cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e79cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e79d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e79d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e79d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e79db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e79de jb 0x101e79ac */
  if (C.cf) goto L_101e79ac;
  /* 101e79e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e79e2 jmp dword ptr [edx*4 + 0x101e7a98] */
  switch (EDX) {
    case 0: goto L_101e7aa8;
    case 1: goto L_101e7ab0;
    case 2: goto L_101e7abc;
    case 3: goto L_101e7ad0;
    default: x86_unimpl("switch@0x101e79e2 out of table"); return;
  }
  /* 101e79e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e79ec:;
  /* 101e79ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e79ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e79f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e79f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e79f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e79f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e79fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e79fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7a01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7a04 jb 0x101e79ac */
  if (C.cf) goto L_101e79ac;
  /* 101e7a06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e7a08 jmp dword ptr [edx*4 + 0x101e7a98] */
  switch (EDX) {
    case 0: goto L_101e7aa8;
    case 1: goto L_101e7ab0;
    case 2: goto L_101e7abc;
    case 3: goto L_101e7ad0;
    default: x86_unimpl("switch@0x101e7a08 out of table"); return;
  }
  /* 101e7a0f nop  */
  /* nop */
L_101e7a10:;
  /* 101e7a10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e7a12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e7a14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e7a16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e7a17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e7a1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e7a1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7a1e jb 0x101e79ac */
  if (C.cf) goto L_101e79ac;
  /* 101e7a20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e7a22 jmp dword ptr [edx*4 + 0x101e7a98] */
  switch (EDX) {
    case 0: goto L_101e7aa8;
    case 1: goto L_101e7ab0;
    case 2: goto L_101e7abc;
    case 3: goto L_101e7ad0;
    default: x86_unimpl("switch@0x101e7a22 out of table"); return;
  }
  /* 101e7a29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e7a4c:;
  /* 101e7a4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 101e7a50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_101e7a54:;
  /* 101e7a54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 101e7a58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_101e7a5c:;
  /* 101e7a5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 101e7a60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_101e7a64:;
  /* 101e7a64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 101e7a68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_101e7a6c:;
  /* 101e7a6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 101e7a70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_101e7a74:;
  /* 101e7a74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 101e7a78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_101e7a7c:;
  /* 101e7a7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 101e7a80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 101e7a84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101e7a8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7a8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101e7a8f:;
  /* 101e7a8f jmp dword ptr [edx*4 + 0x101e7a98] */
  switch (EDX) {
    case 0: goto L_101e7aa8;
    case 1: goto L_101e7ab0;
    case 2: goto L_101e7abc;
    case 3: goto L_101e7ad0;
    default: x86_unimpl("switch@0x101e7a8f out of table"); return;
  }
  /* 101e7a96 mov edi, edi */
  EDI = (EDI);
L_101e7aa8:;
  /* 101e7aa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7aab pop esi */
  ESI = (pop32());
  /* 101e7aac pop edi */
  EDI = (pop32());
  /* 101e7aad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e7aae ret  */
  ESPCHK(0x101e7950u, _esp0);
  ESP += 4; return;
  /* 101e7aaf nop  */
  /* nop */
L_101e7ab0:;
  /* 101e7ab0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e7ab2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e7ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7ab7 pop esi */
  ESI = (pop32());
  /* 101e7ab8 pop edi */
  EDI = (pop32());
  /* 101e7ab9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e7aba ret  */
  ESPCHK(0x101e7950u, _esp0);
  ESP += 4; return;
  /* 101e7abb nop  */
  /* nop */
L_101e7abc:;
  /* 101e7abc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e7abe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e7ac0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e7ac3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e7ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7ac9 pop esi */
  ESI = (pop32());
  /* 101e7aca pop edi */
  EDI = (pop32());
  /* 101e7acb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e7acc ret  */
  ESPCHK(0x101e7950u, _esp0);
  ESP += 4; return;
  /* 101e7acd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e7ad0:;
  /* 101e7ad0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e7ad2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e7ad4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e7ad7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e7ada mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e7add mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e7ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7ae3 pop esi */
  ESI = (pop32());
  /* 101e7ae4 pop edi */
  EDI = (pop32());
  /* 101e7ae5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e7ae6 ret  */
  ESPCHK(0x101e7950u, _esp0);
  ESP += 4; return;
  /* 101e7ae7 nop  */
  /* nop */
L_101e7ae8:;
  /* 101e7ae8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 101e7aec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 101e7af0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101e7af6 jne 0x101e7b1c */
  if (!C.zf) goto L_101e7b1c;
  /* 101e7af8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e7afb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101e7afe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7b01 jb 0x101e7b10 */
  if (C.cf) goto L_101e7b10;
  /* 101e7b03 std  */
  C.df=1;
  /* 101e7b04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e7b06 cld  */
  C.df=0;
  /* 101e7b07 jmp dword ptr [edx*4 + 0x101e7c30] */
  switch (EDX) {
    case 0: goto L_101e7c40;
    case 1: goto L_101e7c48;
    case 2: goto L_101e7c58;
    case 3: goto L_101e7c6c;
    default: x86_unimpl("switch@0x101e7b07 out of table"); return;
  }
  /* 101e7b0e mov edi, edi */
  EDI = (EDI);
L_101e7b10:;
  /* 101e7b10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e7b12 jmp dword ptr [ecx*4 + 0x101e7be0] */
  switch (ECX) {
    case 0: goto L_101e7c27;
    default: x86_unimpl("switch@0x101e7b12 out of table"); return;
  }
  /* 101e7b19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e7b1c:;
  /* 101e7b1c mov eax, edi */
  EAX = (EDI);
  /* 101e7b1e mov edx, 3 */
  EDX = (0x3u);
  /* 101e7b23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7b26 jb 0x101e7b34 */
  if (C.cf) goto L_101e7b34;
  /* 101e7b28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101e7b2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7b2d jmp dword ptr [eax*4 + 0x101e7b38] */
  switch (EAX) {
    case 1: goto L_101e7b48;
    case 2: goto L_101e7b68;
    case 3: goto L_101e7b90;
    default: x86_unimpl("switch@0x101e7b2d out of table"); return;
  }
L_101e7b34:;
  /* 101e7b34 jmp dword ptr [ecx*4 + 0x101e7c30] */
  switch (ECX) {
    case 0: goto L_101e7c40;
    case 1: goto L_101e7c48;
    case 2: goto L_101e7c58;
    case 3: goto L_101e7c6c;
    default: x86_unimpl("switch@0x101e7b34 out of table"); return;
  }
  /* 101e7b3b nop  */
  /* nop */
L_101e7b48:;
  /* 101e7b48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e7b4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e7b4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e7b50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101e7b51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e7b54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e7b55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7b58 jb 0x101e7b10 */
  if (C.cf) goto L_101e7b10;
  /* 101e7b5a std  */
  C.df=1;
  /* 101e7b5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e7b5d cld  */
  C.df=0;
  /* 101e7b5e jmp dword ptr [edx*4 + 0x101e7c30] */
  switch (EDX) {
    case 0: goto L_101e7c40;
    case 1: goto L_101e7c48;
    case 2: goto L_101e7c58;
    case 3: goto L_101e7c6c;
    default: x86_unimpl("switch@0x101e7b5e out of table"); return;
  }
  /* 101e7b65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e7b68:;
  /* 101e7b68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e7b6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e7b6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e7b70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e7b73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e7b76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e7b79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7b7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7b7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7b82 jb 0x101e7b10 */
  if (C.cf) goto L_101e7b10;
  /* 101e7b84 std  */
  C.df=1;
  /* 101e7b85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e7b87 cld  */
  C.df=0;
  /* 101e7b88 jmp dword ptr [edx*4 + 0x101e7c30] */
  switch (EDX) {
    case 0: goto L_101e7c40;
    case 1: goto L_101e7c48;
    case 2: goto L_101e7c58;
    case 3: goto L_101e7c6c;
    default: x86_unimpl("switch@0x101e7b88 out of table"); return;
  }
  /* 101e7b8f nop  */
  /* nop */
L_101e7b90:;
  /* 101e7b90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e7b93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e7b95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e7b98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e7b9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e7b9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e7ba1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e7ba4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e7ba7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7baa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7bad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7bb0 jb 0x101e7b10 */
  if (C.cf) goto L_101e7b10;
  /* 101e7bb6 std  */
  C.df=1;
  /* 101e7bb7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e7bb9 cld  */
  C.df=0;
  /* 101e7bba jmp dword ptr [edx*4 + 0x101e7c30] */
  switch (EDX) {
    case 0: goto L_101e7c40;
    case 1: goto L_101e7c48;
    case 2: goto L_101e7c58;
    case 3: goto L_101e7c6c;
    default: x86_unimpl("switch@0x101e7bba out of table"); return;
  }
  /* 101e7bc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 101e7bc4 in al, 0x7b */
  x86_unimpl("in @ 0x101e7bc4");
  /* 101e7bc6 push ds */
  push32((uint32_t)(C.seg_ds));
  /* 101e7bc7 adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 101e7bc9 jnp 0x101e7be9 */
  if (!C.pf) goto L_101e7be9;
  /* 101e7bcb adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 101e7bcd jnp 0x101e7bed */
  if (!C.pf) goto L_101e7bed;
  /* 101e7bcf adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 101e7bd1 jnp 0x101e7bf1 */
  if (!C.pf) goto L_101e7bf1;
  /* 101e7bd3 adc byte ptr [esp + edi*2], al */
  { uint32_t _a=(r8((uint32_t)(ESP + EDI*2))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDI*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 101e7bd6 push ds */
  push32((uint32_t)(C.seg_ds));
  /* 101e7bd7 adc byte ptr [esp + edi*2], cl */
  { uint32_t _a=(r8((uint32_t)(ESP + EDI*2))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDI*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 101e7bda push ds */
  push32((uint32_t)(C.seg_ds));
  /* 101e7bdb adc byte ptr [esp + edi*2], dl */
  { uint32_t _a=(r8((uint32_t)(ESP + EDI*2))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDI*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 101e7bde push ds */
  push32((uint32_t)(C.seg_ds));
  /* 101e7be4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 101e7be8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 101e7bec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 101e7bf0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 101e7bf4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 101e7bf8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 101e7bfc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 101e7c00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 101e7c04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 101e7c08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 101e7c0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 101e7c10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 101e7c14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 101e7c18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 101e7c1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101e7c23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7c25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101e7c27:;
  /* 101e7c27 jmp dword ptr [edx*4 + 0x101e7c30] */
  switch (EDX) {
    case 0: goto L_101e7c40;
    case 1: goto L_101e7c48;
    case 2: goto L_101e7c58;
    case 3: goto L_101e7c6c;
    default: x86_unimpl("switch@0x101e7c27 out of table"); return;
  }
  /* 101e7c2e mov edi, edi */
  EDI = (EDI);
L_101e7c40:;
  /* 101e7c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7c43 pop esi */
  ESI = (pop32());
  /* 101e7c44 pop edi */
  EDI = (pop32());
  /* 101e7c45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e7c46 ret  */
  ESPCHK(0x101e7950u, _esp0);
  ESP += 4; return;
  /* 101e7c47 nop  */
  /* nop */
L_101e7c48:;
  /* 101e7c48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e7c4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e7c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7c51 pop esi */
  ESI = (pop32());
  /* 101e7c52 pop edi */
  EDI = (pop32());
  /* 101e7c53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e7c54 ret  */
  ESPCHK(0x101e7950u, _esp0);
  ESP += 4; return;
  /* 101e7c55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e7c58:;
  /* 101e7c58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e7c5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e7c5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e7c61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e7c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7c67 pop esi */
  ESI = (pop32());
  /* 101e7c68 pop edi */
  EDI = (pop32());
  /* 101e7c69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e7c6a ret  */
  ESPCHK(0x101e7950u, _esp0);
  ESP += 4; return;
  /* 101e7c6b nop  */
  /* nop */
L_101e7c6c:;
  /* 101e7c6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e7c6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e7c72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e7c75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e7c78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e7c7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e7c7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7c81 pop esi */
  ESI = (pop32());
  /* 101e7c82 pop edi */
  EDI = (pop32());
  /* 101e7c83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e7c84 ret  */
  ESPCHK(0x101e7950u, _esp0);
  ESP += 4; return;
L_101e7be9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x101e7be9 (unresolved jump table)"); return;
L_101e7bed: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x101e7bed (unresolved jump table)"); return;
L_101e7bf1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x101e7bf1 (unresolved jump table)"); return;
}

/* FUN_10007c85 @ 0x101e7c85 (62 bytes, 15 insns) */
void f_101e7c85(void) {
  FTRACE(0x101e7c85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7c85 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 101e7c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 101e7c8c push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e7c92 call dword ptr [0x101eb094] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb094))), 0x101e7c98u);
  /* 101e7c98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e7c9a mov dword ptr [0x101f1474], eax */
  w32((uint32_t)(0x101f1474), (EAX));
  /* 101e7c9f jne 0x101e7ca2 */
  if (!C.zf) goto L_101e7ca2;
  /* 101e7ca1 ret  */
  ESPCHK(0x101e7c85u, _esp0);
  ESP += 4; return;
L_101e7ca2:;
  /* 101e7ca2 and dword ptr [0x101f146c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101f146c)))&(0x0u); w32((uint32_t)(0x101f146c), (_r)); fl_logic(_r,32); }
  /* 101e7ca9 and dword ptr [0x101f1470], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101f1470)))&(0x0u); w32((uint32_t)(0x101f1470), (_r)); fl_logic(_r,32); }
  /* 101e7cb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e7cb2 mov dword ptr [0x101f1468], eax */
  w32((uint32_t)(0x101f1468), (EAX));
  /* 101e7cb7 mov dword ptr [0x101f1460], 0x10 */
  w32((uint32_t)(0x101f1460), (0x10u));
  /* 101e7cc1 pop eax */
  EAX = (pop32());
  /* 101e7cc2 ret  */
  ESPCHK(0x101e7c85u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cc3 @ 0x101e7cc3 (43 bytes, 14 insns) */
void f_101e7cc3(void) {
  FTRACE(0x101e7cc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7cc3 mov eax, dword ptr [0x101f1470] */
  EAX = (r32((uint32_t)(0x101f1470)));
  /* 101e7cc8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101e7ccb mov eax, dword ptr [0x101f1474] */
  EAX = (r32((uint32_t)(0x101f1474)));
  /* 101e7cd0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_101e7cd3:;
  /* 101e7cd3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7cd5 jae 0x101e7ceb */
  if (!C.cf) goto L_101e7ceb;
  /* 101e7cd7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e7cdb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7cde cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7ce4 jb 0x101e7ced */
  if (C.cf) goto L_101e7ced;
  /* 101e7ce6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7ce9 jmp 0x101e7cd3 */
  goto L_101e7cd3;
L_101e7ceb:;
  /* 101e7ceb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101e7ced:;
  /* 101e7ced ret  */
  ESPCHK(0x101e7cc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cee @ 0x101e7cee (811 bytes, 264 insns) */
void f_101e7cee(void) {
  FTRACE(0x101e7ceeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7cee push ebp */
  push32((uint32_t)(EBP));
  /* 101e7cef mov ebp, esp */
  EBP = (ESP);
  /* 101e7cf1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7cf4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e7cf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7cfa push ebx */
  push32((uint32_t)(EBX));
  /* 101e7cfb push esi */
  push32((uint32_t)(ESI));
  /* 101e7cfc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 101e7cff mov esi, edx */
  ESI = (EDX);
  /* 101e7d01 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7d04 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 101e7d07 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7d0a push edi */
  push32((uint32_t)(EDI));
  /* 101e7d0b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 101e7d0e mov ecx, esi */
  ECX = (ESI);
  /* 101e7d10 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 101e7d13 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101e7d19 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101e7d1a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 101e7d1d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 101e7d24 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 101e7d27 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 101e7d2a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 101e7d2d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 101e7d30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101e7d33 jne 0x101e7db4 */
  if (!C.zf) goto L_101e7db4;
  /* 101e7d35 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 101e7d38 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101e7d3a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e7d3b pop edi */
  EDI = (pop32());
  /* 101e7d3c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 101e7d3f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7d41 jbe 0x101e7d46 */
  if ((C.cf||C.zf)) goto L_101e7d46;
  /* 101e7d43 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101e7d46:;
  /* 101e7d46 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 101e7d4a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7d4e jne 0x101e7d98 */
  if (!C.zf) goto L_101e7d98;
  /* 101e7d50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e7d53 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7d56 jae 0x101e7d74 */
  if (!C.cf) goto L_101e7d74;
  /* 101e7d58 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101e7d5d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101e7d5f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 101e7d63 not edi */
  EDI = (~(EDI));
  /* 101e7d65 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101e7d69 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 101e7d6b jne 0x101e7d98 */
  if (!C.zf) goto L_101e7d98;
  /* 101e7d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7d70 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101e7d72 jmp 0x101e7d98 */
  goto L_101e7d98;
L_101e7d74:;
  /* 101e7d74 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7d77 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101e7d7c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101e7d7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e7d81 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 101e7d85 not edi */
  EDI = (~(EDI));
  /* 101e7d87 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 101e7d8e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 101e7d90 jne 0x101e7d98 */
  if (!C.zf) goto L_101e7d98;
  /* 101e7d92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7d95 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_101e7d98:;
  /* 101e7d98 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 101e7d9c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 101e7da0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 101e7da3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 101e7da7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 101e7dab add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7dae mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 101e7db1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_101e7db4:;
  /* 101e7db4 mov edi, ebx */
  EDI = (EBX);
  /* 101e7db6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 101e7db9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e7dba cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7dbd jbe 0x101e7dc2 */
  if ((C.cf||C.zf)) goto L_101e7dc2;
  /* 101e7dbf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101e7dc1 pop edi */
  EDI = (pop32());
L_101e7dc2:;
  /* 101e7dc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e7dc5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 101e7dc8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 101e7dcb jne 0x101e7e71 */
  if (!C.zf) goto L_101e7e71;
  /* 101e7dd1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e7dd7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 101e7dda push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101e7ddc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 101e7ddf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e7de0 pop edx */
  EDX = (pop32());
  /* 101e7de1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7de3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 101e7de6 jbe 0x101e7ded */
  if ((C.cf||C.zf)) goto L_101e7ded;
  /* 101e7de8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 101e7deb mov ecx, edx */
  ECX = (EDX);
L_101e7ded:;
  /* 101e7ded add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7df0 mov edi, ebx */
  EDI = (EBX);
  /* 101e7df2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 101e7df5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 101e7df8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e7df9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7dfb jbe 0x101e7dff */
  if ((C.cf||C.zf)) goto L_101e7dff;
  /* 101e7dfd mov edi, edx */
  EDI = (EDX);
L_101e7dff:;
  /* 101e7dff cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7e01 je 0x101e7e6e */
  if (C.zf) goto L_101e7e6e;
  /* 101e7e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e7e06 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 101e7e09 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7e0c jne 0x101e7e56 */
  if (!C.zf) goto L_101e7e56;
  /* 101e7e0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e7e11 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7e14 jae 0x101e7e32 */
  if (!C.cf) goto L_101e7e32;
  /* 101e7e16 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 101e7e1b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101e7e1d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 101e7e21 not edx */
  EDX = (~(EDX));
  /* 101e7e23 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101e7e27 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 101e7e29 jne 0x101e7e56 */
  if (!C.zf) goto L_101e7e56;
  /* 101e7e2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7e2e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101e7e30 jmp 0x101e7e56 */
  goto L_101e7e56;
L_101e7e32:;
  /* 101e7e32 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7e35 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 101e7e3a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101e7e3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e7e3f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 101e7e43 not edx */
  EDX = (~(EDX));
  /* 101e7e45 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 101e7e4c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 101e7e4e jne 0x101e7e56 */
  if (!C.zf) goto L_101e7e56;
  /* 101e7e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7e53 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_101e7e56:;
  /* 101e7e56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e7e59 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 101e7e5c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 101e7e5f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 101e7e62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e7e65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 101e7e68 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 101e7e6b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_101e7e6e:;
  /* 101e7e6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_101e7e71:;
  /* 101e7e71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7e75 jne 0x101e7e80 */
  if (!C.zf) goto L_101e7e80;
  /* 101e7e77 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7e7a je 0x101e7f09 */
  if (C.zf) goto L_101e7f09;
L_101e7e80:;
  /* 101e7e80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101e7e83 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 101e7e86 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 101e7e89 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 101e7e8c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101e7e8f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 101e7e92 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 101e7e95 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 101e7e98 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101e7e9b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 101e7e9e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101e7ea1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7ea4 jne 0x101e7f09 */
  if (!C.zf) goto L_101e7f09;
  /* 101e7ea6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 101e7eaa cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7ead mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 101e7eb0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101e7eb2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 101e7eb6 jae 0x101e7edd */
  if (!C.cf) goto L_101e7edd;
  /* 101e7eb8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e7ebc jne 0x101e7ecc */
  if (!C.zf) goto L_101e7ecc;
  /* 101e7ebe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101e7ec3 mov ecx, edi */
  ECX = (EDI);
  /* 101e7ec5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101e7ec7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7eca or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_101e7ecc:;
  /* 101e7ecc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101e7ed1 mov ecx, edi */
  ECX = (EDI);
  /* 101e7ed3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101e7ed5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 101e7ed9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101e7edb jmp 0x101e7f06 */
  goto L_101e7f06;
L_101e7edd:;
  /* 101e7edd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e7ee1 jne 0x101e7ef3 */
  if (!C.zf) goto L_101e7ef3;
  /* 101e7ee3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 101e7ee6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101e7eeb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101e7eed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7ef0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_101e7ef3:;
  /* 101e7ef3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 101e7ef6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101e7efb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101e7efd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 101e7f04 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_101e7f06:;
  /* 101e7f06 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_101e7f09:;
  /* 101e7f09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101e7f0c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 101e7f0e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 101e7f12 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 101e7f14 jne 0x101e8014 */
  if (!C.zf) goto L_101e8014;
  /* 101e7f1a mov eax, dword ptr [0x101f146c] */
  EAX = (r32((uint32_t)(0x101f146c)));
  /* 101e7f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e7f21 je 0x101e8006 */
  if (C.zf) goto L_101e8006;
  /* 101e7f27 mov ecx, dword ptr [0x101f1464] */
  ECX = (r32((uint32_t)(0x101f1464)));
  /* 101e7f2d mov edi, dword ptr [0x101eb074] */
  EDI = (r32((uint32_t)(0x101eb074)));
  /* 101e7f33 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 101e7f36 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7f39 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 101e7f3e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 101e7f43 push ebx */
  push32((uint32_t)(EBX));
  /* 101e7f44 push ecx */
  push32((uint32_t)(ECX));
  /* 101e7f45 call edi */
  call_ind((uint32_t)(EDI), 0x101e7f47u);
  /* 101e7f47 mov ecx, dword ptr [0x101f1464] */
  ECX = (r32((uint32_t)(0x101f1464)));
  /* 101e7f4d mov eax, dword ptr [0x101f146c] */
  EAX = (r32((uint32_t)(0x101f146c)));
  /* 101e7f52 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 101e7f57 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101e7f59 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 101e7f5c mov eax, dword ptr [0x101f146c] */
  EAX = (r32((uint32_t)(0x101f146c)));
  /* 101e7f61 mov ecx, dword ptr [0x101f1464] */
  ECX = (r32((uint32_t)(0x101f1464)));
  /* 101e7f67 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 101e7f6a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 101e7f72 mov eax, dword ptr [0x101f146c] */
  EAX = (r32((uint32_t)(0x101f146c)));
  /* 101e7f77 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 101e7f7a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 101e7f7d mov eax, dword ptr [0x101f146c] */
  EAX = (r32((uint32_t)(0x101f146c)));
  /* 101e7f82 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 101e7f85 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e7f89 jne 0x101e7f94 */
  if (!C.zf) goto L_101e7f94;
  /* 101e7f8b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101e7f8f mov eax, dword ptr [0x101f146c] */
  EAX = (r32((uint32_t)(0x101f146c)));
L_101e7f94:;
  /* 101e7f94 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7f98 jne 0x101e8006 */
  if (!C.zf) goto L_101e8006;
  /* 101e7f9a push ebx */
  push32((uint32_t)(EBX));
  /* 101e7f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 101e7f9d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 101e7fa0 call edi */
  call_ind((uint32_t)(EDI), 0x101e7fa2u);
  /* 101e7fa2 mov eax, dword ptr [0x101f146c] */
  EAX = (r32((uint32_t)(0x101f146c)));
  /* 101e7fa7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 101e7faa push 0 */
  push32((uint32_t)(0x0u));
  /* 101e7fac push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e7fb2 call dword ptr [0x101eb078] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb078))), 0x101e7fb8u);
  /* 101e7fb8 mov eax, dword ptr [0x101f1470] */
  EAX = (r32((uint32_t)(0x101f1470)));
  /* 101e7fbd mov edx, dword ptr [0x101f1474] */
  EDX = (r32((uint32_t)(0x101f1474)));
  /* 101e7fc3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101e7fc6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 101e7fc9 mov ecx, eax */
  ECX = (EAX);
  /* 101e7fcb mov eax, dword ptr [0x101f146c] */
  EAX = (r32((uint32_t)(0x101f146c)));
  /* 101e7fd0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e7fd2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 101e7fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 101e7fd7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 101e7fda push ecx */
  push32((uint32_t)(ECX));
  /* 101e7fdb push eax */
  push32((uint32_t)(EAX));
  /* 101e7fdc call 0x101e68e0 */
  push32(0x101e7fe1u); f_101e68e0();
  /* 101e7fe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7fe4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7fe7 dec dword ptr [0x101f1470] */
  { uint32_t _r=(r32((uint32_t)(0x101f1470)))-1; w32((uint32_t)(0x101f1470), (_r)); fl_dec(_r,32); }
  /* 101e7fed cmp eax, dword ptr [0x101f146c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101f146c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7ff3 jbe 0x101e7ff8 */
  if ((C.cf||C.zf)) goto L_101e7ff8;
  /* 101e7ff5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_101e7ff8:;
  /* 101e7ff8 mov ecx, dword ptr [0x101f1474] */
  ECX = (r32((uint32_t)(0x101f1474)));
  /* 101e7ffe mov dword ptr [0x101f1468], ecx */
  w32((uint32_t)(0x101f1468), (ECX));
  /* 101e8004 jmp 0x101e8009 */
  goto L_101e8009;
L_101e8006:;
  /* 101e8006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_101e8009:;
  /* 101e8009 mov dword ptr [0x101f146c], eax */
  w32((uint32_t)(0x101f146c), (EAX));
  /* 101e800e mov dword ptr [0x101f1464], esi */
  w32((uint32_t)(0x101f1464), (ESI));
L_101e8014:;
  /* 101e8014 pop edi */
  EDI = (pop32());
  /* 101e8015 pop esi */
  ESI = (pop32());
  /* 101e8016 pop ebx */
  EBX = (pop32());
  /* 101e8017 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e8018 ret  */
  ESPCHK(0x101e7ceeu, _esp0);
  ESP += 4; return;
}

/* FUN_10008019 @ 0x101e8019 (777 bytes, 275 insns) */
void f_101e8019(void) {
  FTRACE(0x101e8019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e8019 push ebp */
  push32((uint32_t)(EBP));
  /* 101e801a mov ebp, esp */
  EBP = (ESP);
  /* 101e801c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e801f mov eax, dword ptr [0x101f1470] */
  EAX = (r32((uint32_t)(0x101f1470)));
  /* 101e8024 mov edx, dword ptr [0x101f1474] */
  EDX = (r32((uint32_t)(0x101f1474)));
  /* 101e802a push ebx */
  push32((uint32_t)(EBX));
  /* 101e802b push esi */
  push32((uint32_t)(ESI));
  /* 101e802c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101e802f push edi */
  push32((uint32_t)(EDI));
  /* 101e8030 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 101e8033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e8036 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 101e8039 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 101e803c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 101e803f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 101e8042 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 101e8045 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e8046 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8049 jge 0x101e8059 */
  if ((C.sf==C.of)) goto L_101e8059;
  /* 101e804b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 101e804e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101e8050 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101e8054 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 101e8057 jmp 0x101e8069 */
  goto L_101e8069;
L_101e8059:;
  /* 101e8059 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e805c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e805f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e8061 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101e8063 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 101e8066 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101e8069:;
  /* 101e8069 mov eax, dword ptr [0x101f1468] */
  EAX = (r32((uint32_t)(0x101f1468)));
  /* 101e806e mov ebx, eax */
  EBX = (EAX);
  /* 101e8070 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8072 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101e8075 jae 0x101e8090 */
  if (!C.cf) goto L_101e8090;
L_101e8077:;
  /* 101e8077 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101e807a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 101e807c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101e807f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 101e8081 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101e8083 jne 0x101e8090 */
  if (!C.zf) goto L_101e8090;
  /* 101e8085 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8088 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e808b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101e808e jb 0x101e8077 */
  if (C.cf) goto L_101e8077;
L_101e8090:;
  /* 101e8090 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8093 jne 0x101e810e */
  if (!C.zf) goto L_101e810e;
  /* 101e8095 mov ebx, edx */
  EBX = (EDX);
L_101e8097:;
  /* 101e8097 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8099 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101e809c jae 0x101e80b3 */
  if (!C.cf) goto L_101e80b3;
  /* 101e809e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101e80a1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 101e80a3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101e80a6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 101e80a8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101e80aa jne 0x101e80b1 */
  if (!C.zf) goto L_101e80b1;
  /* 101e80ac add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e80af jmp 0x101e8097 */
  goto L_101e8097;
L_101e80b1:;
  /* 101e80b1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101e80b3:;
  /* 101e80b3 jne 0x101e810e */
  if (!C.zf) goto L_101e810e;
L_101e80b5:;
  /* 101e80b5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e80b8 jae 0x101e80cb */
  if (!C.cf) goto L_101e80cb;
  /* 101e80ba cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e80be jne 0x101e80c8 */
  if (!C.zf) goto L_101e80c8;
  /* 101e80c0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e80c3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101e80c6 jmp 0x101e80b5 */
  goto L_101e80b5;
L_101e80c8:;
  /* 101e80c8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101e80cb:;
  /* 101e80cb jne 0x101e80f3 */
  if (!C.zf) goto L_101e80f3;
  /* 101e80cd mov ebx, edx */
  EBX = (EDX);
L_101e80cf:;
  /* 101e80cf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e80d1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101e80d4 jae 0x101e80e3 */
  if (!C.cf) goto L_101e80e3;
  /* 101e80d6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e80da jne 0x101e80e1 */
  if (!C.zf) goto L_101e80e1;
  /* 101e80dc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e80df jmp 0x101e80cf */
  goto L_101e80cf;
L_101e80e1:;
  /* 101e80e1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101e80e3:;
  /* 101e80e3 jne 0x101e80f3 */
  if (!C.zf) goto L_101e80f3;
  /* 101e80e5 call 0x101e8322 */
  push32(0x101e80eau); f_101e8322();
  /* 101e80ea mov ebx, eax */
  EBX = (EAX);
  /* 101e80ec test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101e80ee mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101e80f1 je 0x101e8107 */
  if (C.zf) goto L_101e8107;
L_101e80f3:;
  /* 101e80f3 push ebx */
  push32((uint32_t)(EBX));
  /* 101e80f4 call 0x101e83d3 */
  push32(0x101e80f9u); f_101e83d3();
  /* 101e80f9 pop ecx */
  ECX = (pop32());
  /* 101e80fa mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 101e80fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 101e80ff mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 101e8102 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8105 jne 0x101e810e */
  if (!C.zf) goto L_101e810e;
L_101e8107:;
  /* 101e8107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e8109 jmp 0x101e831d */
  goto L_101e831d;
L_101e810e:;
  /* 101e810e mov dword ptr [0x101f1468], ebx */
  w32((uint32_t)(0x101f1468), (EBX));
  /* 101e8114 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 101e8117 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 101e8119 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e811c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 101e811f je 0x101e8135 */
  if (C.zf) goto L_101e8135;
  /* 101e8121 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 101e8128 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 101e812c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101e812f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 101e8131 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101e8133 jne 0x101e816c */
  if (!C.zf) goto L_101e816c;
L_101e8135:;
  /* 101e8135 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 101e813b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 101e813e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 101e8141 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101e8144 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e8148 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 101e814b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 101e814d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 101e8150 jne 0x101e8169 */
  if (!C.zf) goto L_101e8169;
L_101e8152:;
  /* 101e8152 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 101e8158 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101e815b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 101e815e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8161 mov edi, esi */
  EDI = (ESI);
  /* 101e8163 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 101e8165 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 101e8167 je 0x101e8152 */
  if (C.zf) goto L_101e8152;
L_101e8169:;
  /* 101e8169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_101e816c:;
  /* 101e816c mov ecx, edx */
  ECX = (EDX);
  /* 101e816e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101e8170 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101e8176 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 101e817d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101e8180 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 101e8184 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 101e8186 jne 0x101e8195 */
  if (!C.zf) goto L_101e8195;
  /* 101e8188 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 101e818f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101e8191 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101e8194 pop edi */
  EDI = (pop32());
L_101e8195:;
  /* 101e8195 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e8197 jl 0x101e819e */
  if ((C.sf!=C.of)) goto L_101e819e;
  /* 101e8199 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101e819b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e819c jmp 0x101e8195 */
  goto L_101e8195;
L_101e819e:;
  /* 101e819e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e81a1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 101e81a5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 101e81a7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e81aa mov esi, ecx */
  ESI = (ECX);
  /* 101e81ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101e81af sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 101e81b2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101e81b3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e81b6 jle 0x101e81bb */
  if ((C.zf||C.sf!=C.of)) goto L_101e81bb;
  /* 101e81b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101e81ba pop esi */
  ESI = (pop32());
L_101e81bb:;
  /* 101e81bb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e81bd je 0x101e82d0 */
  if (C.zf) goto L_101e82d0;
  /* 101e81c3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101e81c6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e81c9 jne 0x101e822c */
  if (!C.zf) goto L_101e822c;
  /* 101e81cb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e81ce jge 0x101e81fb */
  if ((C.sf==C.of)) goto L_101e81fb;
  /* 101e81d0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101e81d5 mov ecx, edi */
  ECX = (EDI);
  /* 101e81d7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101e81d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e81dc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 101e81e0 not ebx */
  EBX = (~(EBX));
  /* 101e81e2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 101e81e5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 101e81e9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 101e81ed dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 101e81ef jne 0x101e8229 */
  if (!C.zf) goto L_101e8229;
  /* 101e81f1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e81f4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101e81f7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 101e81f9 jmp 0x101e822c */
  goto L_101e822c;
L_101e81fb:;
  /* 101e81fb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 101e81fe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101e8203 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101e8205 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e8208 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 101e820c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 101e8213 not ebx */
  EBX = (~(EBX));
  /* 101e8215 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101e8217 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 101e8219 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 101e821c jne 0x101e8229 */
  if (!C.zf) goto L_101e8229;
  /* 101e821e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e8221 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101e8224 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101e8227 jmp 0x101e822c */
  goto L_101e822c;
L_101e8229:;
  /* 101e8229 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_101e822c:;
  /* 101e822c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 101e822f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 101e8232 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8236 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 101e8239 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101e823c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 101e823f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 101e8242 je 0x101e82dc */
  if (C.zf) goto L_101e82dc;
  /* 101e8248 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e824b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 101e824f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 101e8252 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 101e8255 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 101e8258 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 101e825b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101e825e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 101e8261 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101e8264 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8267 jne 0x101e82cd */
  if (!C.zf) goto L_101e82cd;
  /* 101e8269 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 101e826d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8270 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 101e8273 jge 0x101e829e */
  if ((C.sf==C.of)) goto L_101e829e;
  /* 101e8275 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101e8277 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e827b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 101e827f jne 0x101e828c */
  if (!C.zf) goto L_101e828c;
  /* 101e8281 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101e8286 mov ecx, esi */
  ECX = (ESI);
  /* 101e8288 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101e828a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_101e828c:;
  /* 101e828c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101e8291 mov ecx, esi */
  ECX = (ESI);
  /* 101e8293 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101e8295 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e8298 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101e829c jmp 0x101e82cd */
  goto L_101e82cd;
L_101e829e:;
  /* 101e829e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101e82a0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e82a4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 101e82a8 jne 0x101e82b7 */
  if (!C.zf) goto L_101e82b7;
  /* 101e82aa lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 101e82ad mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101e82b2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101e82b4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_101e82b7:;
  /* 101e82b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e82ba lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 101e82c1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 101e82c4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101e82c9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101e82cb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_101e82cd:;
  /* 101e82cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_101e82d0:;
  /* 101e82d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e82d2 je 0x101e82df */
  if (C.zf) goto L_101e82df;
  /* 101e82d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 101e82d6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 101e82da jmp 0x101e82df */
  goto L_101e82df;
L_101e82dc:;
  /* 101e82dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_101e82df:;
  /* 101e82df mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 101e82e2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e82e4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 101e82e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 101e82e9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 101e82ed mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 101e82f0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 101e82f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e82f4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 101e82f7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101e82f9 jne 0x101e8315 */
  if (!C.zf) goto L_101e8315;
  /* 101e82fb cmp ebx, dword ptr [0x101f146c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101f146c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8301 jne 0x101e8315 */
  if (!C.zf) goto L_101e8315;
  /* 101e8303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e8306 cmp ecx, dword ptr [0x101f1464] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x101f1464))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e830c jne 0x101e8315 */
  if (!C.zf) goto L_101e8315;
  /* 101e830e and dword ptr [0x101f146c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101f146c)))&(0x0u); w32((uint32_t)(0x101f146c), (_r)); fl_logic(_r,32); }
L_101e8315:;
  /* 101e8315 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e8318 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101e831a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_101e831d:;
  /* 101e831d pop edi */
  EDI = (pop32());
  /* 101e831e pop esi */
  ESI = (pop32());
  /* 101e831f pop ebx */
  EBX = (pop32());
  /* 101e8320 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e8321 ret  */
  ESPCHK(0x101e8019u, _esp0);
  ESP += 4; return;
}

/* FUN_10008322 @ 0x101e8322 (177 bytes, 53 insns) */
void f_101e8322(void) {
  FTRACE(0x101e8322u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e8322 mov eax, dword ptr [0x101f1470] */
  EAX = (r32((uint32_t)(0x101f1470)));
  /* 101e8327 mov ecx, dword ptr [0x101f1460] */
  ECX = (r32((uint32_t)(0x101f1460)));
  /* 101e832d push esi */
  push32((uint32_t)(ESI));
  /* 101e832e push edi */
  push32((uint32_t)(EDI));
  /* 101e832f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101e8331 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8333 jne 0x101e8365 */
  if (!C.zf) goto L_101e8365;
  /* 101e8335 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 101e8339 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 101e833c push eax */
  push32((uint32_t)(EAX));
  /* 101e833d push dword ptr [0x101f1474] */
  push32((uint32_t)(r32((uint32_t)(0x101f1474))));
  /* 101e8343 push edi */
  push32((uint32_t)(EDI));
  /* 101e8344 push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e834a call dword ptr [0x101eb0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0a8))), 0x101e8350u);
  /* 101e8350 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8352 je 0x101e83b5 */
  if (C.zf) goto L_101e83b5;
  /* 101e8354 add dword ptr [0x101f1460], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x101f1460))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x101f1460), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e835b mov dword ptr [0x101f1474], eax */
  w32((uint32_t)(0x101f1474), (EAX));
  /* 101e8360 mov eax, dword ptr [0x101f1470] */
  EAX = (r32((uint32_t)(0x101f1470)));
L_101e8365:;
  /* 101e8365 mov ecx, dword ptr [0x101f1474] */
  ECX = (r32((uint32_t)(0x101f1474)));
  /* 101e836b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 101e8370 push 8 */
  push32((uint32_t)(0x8u));
  /* 101e8372 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101e8375 push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e837b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101e837e call dword ptr [0x101eb094] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb094))), 0x101e8384u);
  /* 101e8384 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8386 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 101e8389 je 0x101e83b5 */
  if (C.zf) goto L_101e83b5;
  /* 101e838b push 4 */
  push32((uint32_t)(0x4u));
  /* 101e838d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 101e8392 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 101e8397 push edi */
  push32((uint32_t)(EDI));
  /* 101e8398 call dword ptr [0x101eb0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0a4))), 0x101e839eu);
  /* 101e839e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e83a0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 101e83a3 jne 0x101e83b9 */
  if (!C.zf) goto L_101e83b9;
  /* 101e83a5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101e83a8 push edi */
  push32((uint32_t)(EDI));
  /* 101e83a9 push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e83af call dword ptr [0x101eb078] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb078))), 0x101e83b5u);
L_101e83b5:;
  /* 101e83b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e83b7 jmp 0x101e83d0 */
  goto L_101e83d0;
L_101e83b9:;
  /* 101e83b9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 101e83bd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101e83bf mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 101e83c2 inc dword ptr [0x101f1470] */
  { uint32_t _r=(r32((uint32_t)(0x101f1470)))+1; w32((uint32_t)(0x101f1470), (_r)); fl_inc(_r,32); }
  /* 101e83c8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101e83cb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101e83ce mov eax, esi */
  EAX = (ESI);
L_101e83d0:;
  /* 101e83d0 pop edi */
  EDI = (pop32());
  /* 101e83d1 pop esi */
  ESI = (pop32());
  /* 101e83d2 ret  */
  ESPCHK(0x101e8322u, _esp0);
  ESP += 4; return;
}

/* FUN_100083d3 @ 0x101e83d3 (251 bytes, 85 insns) */
void f_101e83d3(void) {
  FTRACE(0x101e83d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e83d3 push ebp */
  push32((uint32_t)(EBP));
  /* 101e83d4 mov ebp, esp */
  EBP = (ESP);
  /* 101e83d6 push ecx */
  push32((uint32_t)(ECX));
  /* 101e83d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e83da push ebx */
  push32((uint32_t)(EBX));
  /* 101e83db push esi */
  push32((uint32_t)(ESI));
  /* 101e83dc push edi */
  push32((uint32_t)(EDI));
  /* 101e83dd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 101e83e0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 101e83e3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101e83e5:;
  /* 101e83e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e83e7 jl 0x101e83ee */
  if ((C.sf!=C.of)) goto L_101e83ee;
  /* 101e83e9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101e83eb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101e83ec jmp 0x101e83e5 */
  goto L_101e83e5;
L_101e83ee:;
  /* 101e83ee mov eax, ebx */
  EAX = (EBX);
  /* 101e83f0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101e83f2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101e83f8 pop edx */
  EDX = (pop32());
  /* 101e83f9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 101e8400 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_101e8403:;
  /* 101e8403 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 101e8406 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 101e8409 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e840c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101e840d jne 0x101e8403 */
  if (!C.zf) goto L_101e8403;
  /* 101e840f mov edi, ebx */
  EDI = (EBX);
  /* 101e8411 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e8413 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 101e8416 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8419 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101e841e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101e8423 push edi */
  push32((uint32_t)(EDI));
  /* 101e8424 call dword ptr [0x101eb0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0a4))), 0x101e842au);
  /* 101e842a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e842c jne 0x101e8436 */
  if (!C.zf) goto L_101e8436;
  /* 101e842e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e8431 jmp 0x101e84c9 */
  goto L_101e84c9;
L_101e8436:;
  /* 101e8436 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 101e843c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e843e ja 0x101e847c */
  if ((!C.cf&&!C.zf)) goto L_101e847c;
  /* 101e8440 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_101e8443:;
  /* 101e8443 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 101e8447 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 101e844e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 101e8454 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 101e845b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101e845d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 101e8463 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101e8466 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 101e8470 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8475 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 101e8478 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e847a jbe 0x101e8443 */
  if ((C.cf||C.zf)) goto L_101e8443;
L_101e847c:;
  /* 101e847c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e847f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 101e8482 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8487 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e8489 pop edi */
  EDI = (pop32());
  /* 101e848a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101e848d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 101e8490 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 101e8493 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 101e8496 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 101e8499 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101e849e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 101e84a5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 101e84a8 mov cl, al */
  CL = (AL);
  /* 101e84aa inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101e84ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e84ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e84b1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 101e84b4 jne 0x101e84b9 */
  if (!C.zf) goto L_101e84b9;
  /* 101e84b6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_101e84b9:;
  /* 101e84b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 101e84be mov ecx, ebx */
  ECX = (EBX);
  /* 101e84c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101e84c2 not edx */
  EDX = (~(EDX));
  /* 101e84c4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 101e84c7 mov eax, ebx */
  EAX = (EBX);
L_101e84c9:;
  /* 101e84c9 pop edi */
  EDI = (pop32());
  /* 101e84ca pop esi */
  ESI = (pop32());
  /* 101e84cb pop ebx */
  EBX = (pop32());
  /* 101e84cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e84cd ret  */
  ESPCHK(0x101e83d3u, _esp0);
  ESP += 4; return;
}

/* FUN_100084ce @ 0x101e84ce (137 bytes, 50 insns) */
void f_101e84ce(void) {
  FTRACE(0x101e84ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e84ce push ebx */
  push32((uint32_t)(EBX));
  /* 101e84cf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e84d1 cmp dword ptr [0x101f12bc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101f12bc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e84d7 push esi */
  push32((uint32_t)(ESI));
  /* 101e84d8 push edi */
  push32((uint32_t)(EDI));
  /* 101e84d9 jne 0x101e851d */
  if (!C.zf) goto L_101e851d;
  /* 101e84db push 0x101eb4c4 */
  push32((uint32_t)(0x101eb4c4u));
  /* 101e84e0 call dword ptr [0x101eb0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0ac))), 0x101e84e6u);
  /* 101e84e6 mov edi, eax */
  EDI = (EAX);
  /* 101e84e8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e84ea je 0x101e8553 */
  if (C.zf) goto L_101e8553;
  /* 101e84ec mov esi, dword ptr [0x101eb088] */
  ESI = (r32((uint32_t)(0x101eb088)));
  /* 101e84f2 push 0x101eb4b8 */
  push32((uint32_t)(0x101eb4b8u));
  /* 101e84f7 push edi */
  push32((uint32_t)(EDI));
  /* 101e84f8 call esi */
  call_ind((uint32_t)(ESI), 0x101e84fau);
  /* 101e84fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e84fc mov dword ptr [0x101f12bc], eax */
  w32((uint32_t)(0x101f12bc), (EAX));
  /* 101e8501 je 0x101e8553 */
  if (C.zf) goto L_101e8553;
  /* 101e8503 push 0x101eb4a8 */
  push32((uint32_t)(0x101eb4a8u));
  /* 101e8508 push edi */
  push32((uint32_t)(EDI));
  /* 101e8509 call esi */
  call_ind((uint32_t)(ESI), 0x101e850bu);
  /* 101e850b push 0x101eb494 */
  push32((uint32_t)(0x101eb494u));
  /* 101e8510 push edi */
  push32((uint32_t)(EDI));
  /* 101e8511 mov dword ptr [0x101f12c0], eax */
  w32((uint32_t)(0x101f12c0), (EAX));
  /* 101e8516 call esi */
  call_ind((uint32_t)(ESI), 0x101e8518u);
  /* 101e8518 mov dword ptr [0x101f12c4], eax */
  w32((uint32_t)(0x101f12c4), (EAX));
L_101e851d:;
  /* 101e851d mov eax, dword ptr [0x101f12c0] */
  EAX = (r32((uint32_t)(0x101f12c0)));
  /* 101e8522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8524 je 0x101e853c */
  if (C.zf) goto L_101e853c;
  /* 101e8526 call eax */
  call_ind((uint32_t)(EAX), 0x101e8528u);
  /* 101e8528 mov ebx, eax */
  EBX = (EAX);
  /* 101e852a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101e852c je 0x101e853c */
  if (C.zf) goto L_101e853c;
  /* 101e852e mov eax, dword ptr [0x101f12c4] */
  EAX = (r32((uint32_t)(0x101f12c4)));
  /* 101e8533 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8535 je 0x101e853c */
  if (C.zf) goto L_101e853c;
  /* 101e8537 push ebx */
  push32((uint32_t)(EBX));
  /* 101e8538 call eax */
  call_ind((uint32_t)(EAX), 0x101e853au);
  /* 101e853a mov ebx, eax */
  EBX = (EAX);
L_101e853c:;
  /* 101e853c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101e8540 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101e8544 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101e8548 push ebx */
  push32((uint32_t)(EBX));
  /* 101e8549 call dword ptr [0x101f12bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f12bc))), 0x101e854fu);
L_101e854f:;
  /* 101e854f pop edi */
  EDI = (pop32());
  /* 101e8550 pop esi */
  ESI = (pop32());
  /* 101e8551 pop ebx */
  EBX = (pop32());
  /* 101e8552 ret  */
  ESPCHK(0x101e84ceu, _esp0);
  ESP += 4; return;
L_101e8553:;
  /* 101e8553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e8555 jmp 0x101e854f */
  goto L_101e854f;
}

/* _strncpy @ 0x101e8560 (254 bytes, 109 insns) */
void f_101e8560(void) {
  FTRACE(0x101e8560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e8560 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 101e8564 push edi */
  push32((uint32_t)(EDI));
  /* 101e8565 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e8567 je 0x101e85e3 */
  if (C.zf) goto L_101e85e3;
  /* 101e8569 push esi */
  push32((uint32_t)(ESI));
  /* 101e856a push ebx */
  push32((uint32_t)(EBX));
  /* 101e856b mov ebx, ecx */
  EBX = (ECX);
  /* 101e856d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 101e8571 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 101e8577 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101e857b jne 0x101e8584 */
  if (!C.zf) goto L_101e8584;
  /* 101e857d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e8580 jne 0x101e85f1 */
  if (!C.zf) goto L_101e85f1;
  /* 101e8582 jmp 0x101e85a5 */
  goto L_101e85a5;
L_101e8584:;
  /* 101e8584 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e8586 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e8587 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e8589 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e858a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e858b je 0x101e85b2 */
  if (C.zf) goto L_101e85b2;
  /* 101e858d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e858f je 0x101e85ba */
  if (C.zf) goto L_101e85ba;
  /* 101e8591 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 101e8597 jne 0x101e8584 */
  if (!C.zf) goto L_101e8584;
  /* 101e8599 mov ebx, ecx */
  EBX = (ECX);
  /* 101e859b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e859e jne 0x101e85f1 */
  if (!C.zf) goto L_101e85f1;
L_101e85a0:;
  /* 101e85a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 101e85a3 je 0x101e85b2 */
  if (C.zf) goto L_101e85b2;
L_101e85a5:;
  /* 101e85a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e85a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e85a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e85aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e85ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e85ad je 0x101e85de */
  if (C.zf) goto L_101e85de;
  /* 101e85af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101e85b0 jne 0x101e85a5 */
  if (!C.zf) goto L_101e85a5;
L_101e85b2:;
  /* 101e85b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101e85b6 pop ebx */
  EBX = (pop32());
  /* 101e85b7 pop esi */
  ESI = (pop32());
  /* 101e85b8 pop edi */
  EDI = (pop32());
  /* 101e85b9 ret  */
  ESPCHK(0x101e8560u, _esp0);
  ESP += 4; return;
L_101e85ba:;
  /* 101e85ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101e85c0 je 0x101e85d4 */
  if (C.zf) goto L_101e85d4;
L_101e85c2:;
  /* 101e85c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e85c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e85c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e85c6 je 0x101e8656 */
  if (C.zf) goto L_101e8656;
  /* 101e85cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101e85d2 jne 0x101e85c2 */
  if (!C.zf) goto L_101e85c2;
L_101e85d4:;
  /* 101e85d4 mov ebx, ecx */
  EBX = (ECX);
  /* 101e85d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e85d9 jne 0x101e8647 */
  if (!C.zf) goto L_101e8647;
L_101e85db:;
  /* 101e85db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e85dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_101e85de:;
  /* 101e85de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101e85df jne 0x101e85db */
  if (!C.zf) goto L_101e85db;
  /* 101e85e1 pop ebx */
  EBX = (pop32());
  /* 101e85e2 pop esi */
  ESI = (pop32());
L_101e85e3:;
  /* 101e85e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e85e7 pop edi */
  EDI = (pop32());
  /* 101e85e8 ret  */
  ESPCHK(0x101e8560u, _esp0);
  ESP += 4; return;
L_101e85e9:;
  /* 101e85e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101e85eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e85ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e85ef je 0x101e85a0 */
  if (C.zf) goto L_101e85a0;
L_101e85f1:;
  /* 101e85f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101e85f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101e85f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e85fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e85fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101e85ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 101e8601 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8604 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101e8609 je 0x101e85e9 */
  if (C.zf) goto L_101e85e9;
  /* 101e860b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101e860d je 0x101e863b */
  if (C.zf) goto L_101e863b;
  /* 101e860f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 101e8611 je 0x101e8631 */
  if (C.zf) goto L_101e8631;
  /* 101e8613 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 101e8619 je 0x101e8627 */
  if (C.zf) goto L_101e8627;
  /* 101e861b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 101e8621 jne 0x101e85e9 */
  if (!C.zf) goto L_101e85e9;
  /* 101e8623 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101e8625 jmp 0x101e863f */
  goto L_101e863f;
L_101e8627:;
  /* 101e8627 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101e862d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101e862f jmp 0x101e863f */
  goto L_101e863f;
L_101e8631:;
  /* 101e8631 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 101e8637 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101e8639 jmp 0x101e863f */
  goto L_101e863f;
L_101e863b:;
  /* 101e863b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e863d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_101e863f:;
  /* 101e863f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8642 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e8644 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e8645 je 0x101e8651 */
  if (C.zf) goto L_101e8651;
L_101e8647:;
  /* 101e8647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101e8649:;
  /* 101e8649 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 101e864b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e864e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e864f jne 0x101e8649 */
  if (!C.zf) goto L_101e8649;
L_101e8651:;
  /* 101e8651 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 101e8654 jne 0x101e85db */
  if (!C.zf) goto L_101e85db;
L_101e8656:;
  /* 101e8656 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101e865a pop ebx */
  EBX = (pop32());
  /* 101e865b pop esi */
  ESI = (pop32());
  /* 101e865c pop edi */
  EDI = (pop32());
  /* 101e865d ret  */
  ESPCHK(0x101e8560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000865e @ 0x101e865e (318 bytes, 123 insns) */
void f_101e865e(void) {
  FTRACE(0x101e865eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e865e push ebp */
  push32((uint32_t)(EBP));
  /* 101e865f mov ebp, esp */
  EBP = (ESP);
  /* 101e8661 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101e8663 push 0x101eb4d8 */
  push32((uint32_t)(0x101eb4d8u));
  /* 101e8668 push 0x101e9790 */
  push32((uint32_t)(0x101e9790u));
  /* 101e866d mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101e8673 push eax */
  push32((uint32_t)(EAX));
  /* 101e8674 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101e867b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e867e push ebx */
  push32((uint32_t)(EBX));
  /* 101e867f push esi */
  push32((uint32_t)(ESI));
  /* 101e8680 push edi */
  push32((uint32_t)(EDI));
  /* 101e8681 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101e8684 mov eax, dword ptr [0x101f12dc] */
  EAX = (r32((uint32_t)(0x101f12dc)));
  /* 101e8689 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e868b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e868d jne 0x101e86cd */
  if (!C.zf) goto L_101e86cd;
  /* 101e868f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 101e8692 push eax */
  push32((uint32_t)(EAX));
  /* 101e8693 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e8695 pop esi */
  ESI = (pop32());
  /* 101e8696 push esi */
  push32((uint32_t)(ESI));
  /* 101e8697 push 0x101eb4d4 */
  push32((uint32_t)(0x101eb4d4u));
  /* 101e869c push esi */
  push32((uint32_t)(ESI));
  /* 101e869d call dword ptr [0x101eb0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0b8))), 0x101e86a3u);
  /* 101e86a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e86a5 je 0x101e86ab */
  if (C.zf) goto L_101e86ab;
  /* 101e86a7 mov eax, esi */
  EAX = (ESI);
  /* 101e86a9 jmp 0x101e86c8 */
  goto L_101e86c8;
L_101e86ab:;
  /* 101e86ab lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 101e86ae push eax */
  push32((uint32_t)(EAX));
  /* 101e86af push esi */
  push32((uint32_t)(ESI));
  /* 101e86b0 push 0x101eb4d0 */
  push32((uint32_t)(0x101eb4d0u));
  /* 101e86b5 push esi */
  push32((uint32_t)(ESI));
  /* 101e86b6 push ebx */
  push32((uint32_t)(EBX));
  /* 101e86b7 call dword ptr [0x101eb0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0b4))), 0x101e86bdu);
  /* 101e86bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e86bf je 0x101e8793 */
  if (C.zf) goto L_101e8793;
  /* 101e86c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e86c7 pop eax */
  EAX = (pop32());
L_101e86c8:;
  /* 101e86c8 mov dword ptr [0x101f12dc], eax */
  w32((uint32_t)(0x101f12dc), (EAX));
L_101e86cd:;
  /* 101e86cd cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e86d0 jne 0x101e86f6 */
  if (!C.zf) goto L_101e86f6;
  /* 101e86d2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 101e86d5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e86d7 jne 0x101e86de */
  if (!C.zf) goto L_101e86de;
  /* 101e86d9 mov eax, dword ptr [0x101f12f4] */
  EAX = (r32((uint32_t)(0x101f12f4)));
L_101e86de:;
  /* 101e86de push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e86e1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101e86e4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e86e7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e86ea push eax */
  push32((uint32_t)(EAX));
  /* 101e86eb call dword ptr [0x101eb0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0b4))), 0x101e86f1u);
  /* 101e86f1 jmp 0x101e8795 */
  goto L_101e8795;
L_101e86f6:;
  /* 101e86f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e86f9 jne 0x101e8793 */
  if (!C.zf) goto L_101e8793;
  /* 101e86ff cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8702 jne 0x101e870c */
  if (!C.zf) goto L_101e870c;
  /* 101e8704 mov eax, dword ptr [0x101f1304] */
  EAX = (r32((uint32_t)(0x101f1304)));
  /* 101e8709 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_101e870c:;
  /* 101e870c push ebx */
  push32((uint32_t)(EBX));
  /* 101e870d push ebx */
  push32((uint32_t)(EBX));
  /* 101e870e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101e8711 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e8714 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 101e8717 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e8719 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e871b and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 101e871e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e871f push eax */
  push32((uint32_t)(EAX));
  /* 101e8720 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101e8723 call dword ptr [0x101eb0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0b0))), 0x101e8729u);
  /* 101e8729 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101e872c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e872e je 0x101e8793 */
  if (C.zf) goto L_101e8793;
  /* 101e8730 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 101e8733 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 101e8736 mov eax, edi */
  EAX = (EDI);
  /* 101e8738 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e873b and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 101e873d call 0x101e9870 */
  push32(0x101e8742u); f_101e9870();
  /* 101e8742 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101e8745 mov esi, esp */
  ESI = (ESP);
  /* 101e8747 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 101e874a push edi */
  push32((uint32_t)(EDI));
  /* 101e874b push ebx */
  push32((uint32_t)(EBX));
  /* 101e874c push esi */
  push32((uint32_t)(ESI));
  /* 101e874d call 0x101e6880 */
  push32(0x101e8752u); f_101e6880();
  /* 101e8752 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8755 jmp 0x101e8762 */
  goto L_101e8762;
  /* 101e8757 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e8759 pop eax */
  EAX = (pop32());
  /* 101e875a ret  */
  ESPCHK(0x101e865eu, _esp0);
  ESP += 4; return;
  /* 101e875b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 101e875e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e8760 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101e8762:;
  /* 101e8762 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e8766 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8768 je 0x101e8793 */
  if (C.zf) goto L_101e8793;
  /* 101e876a push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 101e876d push esi */
  push32((uint32_t)(ESI));
  /* 101e876e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101e8771 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e8774 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e8776 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101e8779 call dword ptr [0x101eb0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0b0))), 0x101e877fu);
  /* 101e877f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8781 je 0x101e8793 */
  if (C.zf) goto L_101e8793;
  /* 101e8783 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e8786 push eax */
  push32((uint32_t)(EAX));
  /* 101e8787 push esi */
  push32((uint32_t)(ESI));
  /* 101e8788 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e878b call dword ptr [0x101eb0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0b8))), 0x101e8791u);
  /* 101e8791 jmp 0x101e8795 */
  goto L_101e8795;
L_101e8793:;
  /* 101e8793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101e8795:;
  /* 101e8795 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 101e8798 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101e879b mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 101e87a2 pop edi */
  EDI = (pop32());
  /* 101e87a3 pop esi */
  ESI = (pop32());
  /* 101e87a4 pop ebx */
  EBX = (pop32());
  /* 101e87a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e87a6 ret  */
  ESPCHK(0x101e865eu, _esp0);
  ESP += 4; return;
}

/* FUN_100087a7 @ 0x101e87a7 (511 bytes, 193 insns) */
void f_101e87a7(void) {
  FTRACE(0x101e87a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e87a7 push ebp */
  push32((uint32_t)(EBP));
  /* 101e87a8 mov ebp, esp */
  EBP = (ESP);
  /* 101e87aa push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101e87ac push 0x101eb4e8 */
  push32((uint32_t)(0x101eb4e8u));
  /* 101e87b1 push 0x101e9790 */
  push32((uint32_t)(0x101e9790u));
  /* 101e87b6 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101e87bc push eax */
  push32((uint32_t)(EAX));
  /* 101e87bd mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101e87c4 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e87c7 push ebx */
  push32((uint32_t)(EBX));
  /* 101e87c8 push esi */
  push32((uint32_t)(ESI));
  /* 101e87c9 push edi */
  push32((uint32_t)(EDI));
  /* 101e87ca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101e87cd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101e87cf cmp dword ptr [0x101f130c], edi */
  { uint32_t _a=(r32((uint32_t)(0x101f130c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e87d5 jne 0x101e881d */
  if (!C.zf) goto L_101e881d;
  /* 101e87d7 push edi */
  push32((uint32_t)(EDI));
  /* 101e87d8 push edi */
  push32((uint32_t)(EDI));
  /* 101e87d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e87db pop ebx */
  EBX = (pop32());
  /* 101e87dc push ebx */
  push32((uint32_t)(EBX));
  /* 101e87dd push 0x101eb4d4 */
  push32((uint32_t)(0x101eb4d4u));
  /* 101e87e2 mov esi, 0x100 */
  ESI = (0x100u);
  /* 101e87e7 push esi */
  push32((uint32_t)(ESI));
  /* 101e87e8 push edi */
  push32((uint32_t)(EDI));
  /* 101e87e9 call dword ptr [0x101eb0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0bc))), 0x101e87efu);
  /* 101e87ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e87f1 je 0x101e87fb */
  if (C.zf) goto L_101e87fb;
  /* 101e87f3 mov dword ptr [0x101f130c], ebx */
  w32((uint32_t)(0x101f130c), (EBX));
  /* 101e87f9 jmp 0x101e881d */
  goto L_101e881d;
L_101e87fb:;
  /* 101e87fb push edi */
  push32((uint32_t)(EDI));
  /* 101e87fc push edi */
  push32((uint32_t)(EDI));
  /* 101e87fd push ebx */
  push32((uint32_t)(EBX));
  /* 101e87fe push 0x101eb4d0 */
  push32((uint32_t)(0x101eb4d0u));
  /* 101e8803 push esi */
  push32((uint32_t)(ESI));
  /* 101e8804 push edi */
  push32((uint32_t)(EDI));
  /* 101e8805 call dword ptr [0x101eb08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb08c))), 0x101e880bu);
  /* 101e880b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e880d je 0x101e8935 */
  if (C.zf) goto L_101e8935;
  /* 101e8813 mov dword ptr [0x101f130c], 2 */
  w32((uint32_t)(0x101f130c), (0x2u));
L_101e881d:;
  /* 101e881d cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8820 jle 0x101e8832 */
  if ((C.zf||C.sf!=C.of)) goto L_101e8832;
  /* 101e8822 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e8825 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101e8828 call 0x101e89cb */
  push32(0x101e882du); f_101e89cb();
  /* 101e882d pop ecx */
  ECX = (pop32());
  /* 101e882e pop ecx */
  ECX = (pop32());
  /* 101e882f mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_101e8832:;
  /* 101e8832 mov eax, dword ptr [0x101f130c] */
  EAX = (r32((uint32_t)(0x101f130c)));
  /* 101e8837 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e883a jne 0x101e8859 */
  if (!C.zf) goto L_101e8859;
  /* 101e883c push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 101e883f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101e8842 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e8845 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101e8848 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e884b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e884e call dword ptr [0x101eb08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb08c))), 0x101e8854u);
  /* 101e8854 jmp 0x101e8937 */
  goto L_101e8937;
L_101e8859:;
  /* 101e8859 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e885c jne 0x101e8935 */
  if (!C.zf) goto L_101e8935;
  /* 101e8862 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8865 jne 0x101e886f */
  if (!C.zf) goto L_101e886f;
  /* 101e8867 mov eax, dword ptr [0x101f1304] */
  EAX = (r32((uint32_t)(0x101f1304)));
  /* 101e886c mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_101e886f:;
  /* 101e886f push edi */
  push32((uint32_t)(EDI));
  /* 101e8870 push edi */
  push32((uint32_t)(EDI));
  /* 101e8871 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e8874 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101e8877 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 101e887a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e887c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e887e and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 101e8881 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e8882 push eax */
  push32((uint32_t)(EAX));
  /* 101e8883 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 101e8886 call dword ptr [0x101eb0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0b0))), 0x101e888cu);
  /* 101e888c mov ebx, eax */
  EBX = (EAX);
  /* 101e888e mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 101e8891 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8893 je 0x101e8935 */
  if (C.zf) goto L_101e8935;
  /* 101e8899 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 101e889c lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 101e889f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e88a2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 101e88a4 call 0x101e9870 */
  push32(0x101e88a9u); f_101e9870();
  /* 101e88a9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101e88ac mov eax, esp */
  EAX = (ESP);
  /* 101e88ae mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101e88b1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e88b5 jmp 0x101e88ca */
  goto L_101e88ca;
  /* 101e88b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e88b9 pop eax */
  EAX = (pop32());
  /* 101e88ba ret  */
  ESPCHK(0x101e87a7u, _esp0);
  ESP += 4; return;
  /* 101e88bb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 101e88be xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101e88c0 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 101e88c3 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e88c7 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_101e88ca:;
  /* 101e88ca cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e88cd je 0x101e8935 */
  if (C.zf) goto L_101e8935;
  /* 101e88cf push ebx */
  push32((uint32_t)(EBX));
  /* 101e88d0 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101e88d3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e88d6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101e88d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e88db push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 101e88de call dword ptr [0x101eb0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0b0))), 0x101e88e4u);
  /* 101e88e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e88e6 je 0x101e8935 */
  if (C.zf) goto L_101e8935;
  /* 101e88e8 push edi */
  push32((uint32_t)(EDI));
  /* 101e88e9 push edi */
  push32((uint32_t)(EDI));
  /* 101e88ea push ebx */
  push32((uint32_t)(EBX));
  /* 101e88eb push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101e88ee push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e88f1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e88f4 call dword ptr [0x101eb0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0bc))), 0x101e88fau);
  /* 101e88fa mov esi, eax */
  ESI = (EAX);
  /* 101e88fc mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 101e88ff cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8901 je 0x101e8935 */
  if (C.zf) goto L_101e8935;
  /* 101e8903 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 101e8907 je 0x101e8949 */
  if (C.zf) goto L_101e8949;
  /* 101e8909 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e890c je 0x101e89c4 */
  if (C.zf) goto L_101e89c4;
  /* 101e8912 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8915 jg 0x101e8935 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e8935;
  /* 101e8917 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 101e891a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101e891d push ebx */
  push32((uint32_t)(EBX));
  /* 101e891e push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101e8921 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e8924 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e8927 call dword ptr [0x101eb0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0bc))), 0x101e892du);
  /* 101e892d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e892f jne 0x101e89c4 */
  if (!C.zf) goto L_101e89c4;
L_101e8935:;
  /* 101e8935 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101e8937:;
  /* 101e8937 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 101e893a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101e893d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 101e8944 pop edi */
  EDI = (pop32());
  /* 101e8945 pop esi */
  ESI = (pop32());
  /* 101e8946 pop ebx */
  EBX = (pop32());
  /* 101e8947 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e8948 ret  */
  ESPCHK(0x101e87a7u, _esp0);
  ESP += 4; return;
L_101e8949:;
  /* 101e8949 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101e8950 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 101e8953 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8956 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 101e8958 call 0x101e9870 */
  push32(0x101e895du); f_101e9870();
  /* 101e895d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101e8960 mov ebx, esp */
  EBX = (ESP);
  /* 101e8962 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 101e8965 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e8969 jmp 0x101e897d */
  goto L_101e897d;
  /* 101e896b push 1 */
  push32((uint32_t)(0x1u));
  /* 101e896d pop eax */
  EAX = (pop32());
  /* 101e896e ret  */
  ESPCHK(0x101e87a7u, _esp0);
  ESP += 4; return;
  /* 101e896f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 101e8972 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101e8974 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e8976 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e897a mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_101e897d:;
  /* 101e897d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e897f je 0x101e8935 */
  if (C.zf) goto L_101e8935;
  /* 101e8981 push esi */
  push32((uint32_t)(ESI));
  /* 101e8982 push ebx */
  push32((uint32_t)(EBX));
  /* 101e8983 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 101e8986 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101e8989 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e898c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e898f call dword ptr [0x101eb0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0bc))), 0x101e8995u);
  /* 101e8995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8997 je 0x101e8935 */
  if (C.zf) goto L_101e8935;
  /* 101e8999 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e899c push edi */
  push32((uint32_t)(EDI));
  /* 101e899d push edi */
  push32((uint32_t)(EDI));
  /* 101e899e jne 0x101e89a4 */
  if (!C.zf) goto L_101e89a4;
  /* 101e89a0 push edi */
  push32((uint32_t)(EDI));
  /* 101e89a1 push edi */
  push32((uint32_t)(EDI));
  /* 101e89a2 jmp 0x101e89aa */
  goto L_101e89aa;
L_101e89a4:;
  /* 101e89a4 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 101e89a7 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_101e89aa:;
  /* 101e89aa push esi */
  push32((uint32_t)(ESI));
  /* 101e89ab push ebx */
  push32((uint32_t)(EBX));
  /* 101e89ac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 101e89b1 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 101e89b4 call dword ptr [0x101eb060] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb060))), 0x101e89bau);
  /* 101e89ba mov esi, eax */
  ESI = (EAX);
  /* 101e89bc cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e89be je 0x101e8935 */
  if (C.zf) goto L_101e8935;
L_101e89c4:;
  /* 101e89c4 mov eax, esi */
  EAX = (ESI);
  /* 101e89c6 jmp 0x101e8937 */
  goto L_101e8937;
}

/* FUN_100089cb @ 0x101e89cb (43 bytes, 20 insns) */
void f_101e89cb(void) {
  FTRACE(0x101e89cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e89cb mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e89cf mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e89d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101e89d5 push esi */
  push32((uint32_t)(ESI));
  /* 101e89d6 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 101e89d9 je 0x101e89e8 */
  if (C.zf) goto L_101e89e8;
L_101e89db:;
  /* 101e89db cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e89de je 0x101e89e8 */
  if (C.zf) goto L_101e89e8;
  /* 101e89e0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e89e1 mov esi, ecx */
  ESI = (ECX);
  /* 101e89e3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e89e4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e89e6 jne 0x101e89db */
  if (!C.zf) goto L_101e89db;
L_101e89e8:;
  /* 101e89e8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e89eb pop esi */
  ESI = (pop32());
  /* 101e89ec jne 0x101e89f3 */
  if (!C.zf) goto L_101e89f3;
  /* 101e89ee sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e89f2 ret  */
  ESPCHK(0x101e89cbu, _esp0);
  ESP += 4; return;
L_101e89f3:;
  /* 101e89f3 mov eax, edx */
  EAX = (EDX);
  /* 101e89f5 ret  */
  ESPCHK(0x101e89cbu, _esp0);
  ESP += 4; return;
}

/* FUN_100089f6 @ 0x101e89f6 (33 bytes, 15 insns) */
void f_101e89f6(void) {
  FTRACE(0x101e89f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e89f6 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e89fa push esi */
  push32((uint32_t)(ESI));
  /* 101e89fb mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101e89ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e8a01 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 101e8a04 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8a06 jb 0x101e8a0c */
  if (C.cf) goto L_101e8a0c;
  /* 101e8a08 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8a0a jae 0x101e8a0f */
  if (!C.cf) goto L_101e8a0f;
L_101e8a0c:;
  /* 101e8a0c push 1 */
  push32((uint32_t)(0x1u));
  /* 101e8a0e pop eax */
  EAX = (pop32());
L_101e8a0f:;
  /* 101e8a0f mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101e8a13 pop esi */
  ESI = (pop32());
  /* 101e8a14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 101e8a16 ret  */
  ESPCHK(0x101e89f6u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x101e8a17 (94 bytes, 38 insns) */
void f_101e8a17(void) {
  FTRACE(0x101e8a17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e8a17 push esi */
  push32((uint32_t)(ESI));
  /* 101e8a18 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e8a1c push edi */
  push32((uint32_t)(EDI));
  /* 101e8a1d mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101e8a21 push esi */
  push32((uint32_t)(ESI));
  /* 101e8a22 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101e8a24 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101e8a26 call 0x101e89f6 */
  push32(0x101e8a2bu); f_101e89f6();
  /* 101e8a2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8a2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8a30 je 0x101e8a49 */
  if (C.zf) goto L_101e8a49;
  /* 101e8a32 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 101e8a35 push eax */
  push32((uint32_t)(EAX));
  /* 101e8a36 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e8a38 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101e8a3a call 0x101e89f6 */
  push32(0x101e8a3fu); f_101e89f6();
  /* 101e8a3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8a44 je 0x101e8a49 */
  if (C.zf) goto L_101e8a49;
  /* 101e8a46 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_101e8a49:;
  /* 101e8a49 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 101e8a4c push eax */
  push32((uint32_t)(EAX));
  /* 101e8a4d push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 101e8a50 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101e8a52 call 0x101e89f6 */
  push32(0x101e8a57u); f_101e89f6();
  /* 101e8a57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8a5c je 0x101e8a61 */
  if (C.zf) goto L_101e8a61;
  /* 101e8a5e inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_101e8a61:;
  /* 101e8a61 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 101e8a64 push eax */
  push32((uint32_t)(EAX));
  /* 101e8a65 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101e8a68 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101e8a6a call 0x101e89f6 */
  push32(0x101e8a6fu); f_101e89f6();
  /* 101e8a6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8a72 pop edi */
  EDI = (pop32());
  /* 101e8a73 pop esi */
  ESI = (pop32());
  /* 101e8a74 ret  */
  ESPCHK(0x101e8a17u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a75 @ 0x101e8a75 (46 bytes, 21 insns) */
void f_101e8a75(void) {
  FTRACE(0x101e8a75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e8a75 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e8a79 push esi */
  push32((uint32_t)(ESI));
  /* 101e8a7a push edi */
  push32((uint32_t)(EDI));
  /* 101e8a7b mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101e8a7d mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 101e8a80 mov ecx, esi */
  ECX = (ESI);
  /* 101e8a82 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8a84 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 101e8a86 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 101e8a89 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 101e8a8c or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101e8a8e mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 101e8a91 mov edx, edi */
  EDX = (EDI);
  /* 101e8a93 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 101e8a96 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 101e8a99 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101e8a9b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 101e8a9d pop edi */
  EDI = (pop32());
  /* 101e8a9e mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 101e8aa1 pop esi */
  ESI = (pop32());
  /* 101e8aa2 ret  */
  ESPCHK(0x101e8a75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008aa3 @ 0x101e8aa3 (45 bytes, 21 insns) */
void f_101e8aa3(void) {
  FTRACE(0x101e8aa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e8aa3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e8aa7 push esi */
  push32((uint32_t)(ESI));
  /* 101e8aa8 push edi */
  push32((uint32_t)(EDI));
  /* 101e8aa9 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 101e8aac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 101e8aaf mov esi, edx */
  ESI = (EDX);
  /* 101e8ab1 mov edi, ecx */
  EDI = (ECX);
  /* 101e8ab3 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 101e8ab6 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101e8ab8 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 101e8aba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101e8abd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101e8abf shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 101e8ac2 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101e8ac4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101e8ac6 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101e8ac8 pop edi */
  EDI = (pop32());
  /* 101e8ac9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 101e8acc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101e8ace pop esi */
  ESI = (pop32());
  /* 101e8acf ret  */
  ESPCHK(0x101e8aa3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ad0 @ 0x101e8ad0 (199 bytes, 76 insns) */
void f_101e8ad0(void) {
  FTRACE(0x101e8ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e8ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 101e8ad1 mov ebp, esp */
  EBP = (ESP);
  /* 101e8ad3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e8ad6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e8ad9 push ebx */
  push32((uint32_t)(EBX));
  /* 101e8ada mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e8add xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e8adf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8ae1 push esi */
  push32((uint32_t)(ESI));
  /* 101e8ae2 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 101e8ae9 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 101e8aeb mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 101e8aee mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 101e8af1 jbe 0x101e8b44 */
  if ((C.cf||C.zf)) goto L_101e8b44;
  /* 101e8af3 push edi */
  push32((uint32_t)(EDI));
  /* 101e8af4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_101e8af7:;
  /* 101e8af7 mov esi, ebx */
  ESI = (EBX);
  /* 101e8af9 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 101e8afc movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e8afd movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e8afe push ebx */
  push32((uint32_t)(EBX));
  /* 101e8aff movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e8b00 call 0x101e8a75 */
  push32(0x101e8b05u); f_101e8a75();
  /* 101e8b05 push ebx */
  push32((uint32_t)(EBX));
  /* 101e8b06 call 0x101e8a75 */
  push32(0x101e8b0bu); f_101e8a75();
  /* 101e8b0b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e8b0e push eax */
  push32((uint32_t)(EAX));
  /* 101e8b0f push ebx */
  push32((uint32_t)(EBX));
  /* 101e8b10 call 0x101e8a17 */
  push32(0x101e8b15u); f_101e8a17();
  /* 101e8b15 push ebx */
  push32((uint32_t)(EBX));
  /* 101e8b16 call 0x101e8a75 */
  push32(0x101e8b1bu); f_101e8a75();
  /* 101e8b1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e8b1e and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 101e8b22 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101e8b26 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 101e8b29 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101e8b2c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e8b2f push eax */
  push32((uint32_t)(EAX));
  /* 101e8b30 push ebx */
  push32((uint32_t)(EBX));
  /* 101e8b31 call 0x101e8a17 */
  push32(0x101e8b36u); f_101e8a17();
  /* 101e8b36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8b39 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101e8b3c dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 101e8b3f jne 0x101e8af7 */
  if (!C.zf) goto L_101e8af7;
  /* 101e8b41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e8b43 pop edi */
  EDI = (pop32());
L_101e8b44:;
  /* 101e8b44 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8b47 jne 0x101e8b71 */
  if (!C.zf) goto L_101e8b71;
  /* 101e8b49 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101e8b4c mov eax, ecx */
  EAX = (ECX);
  /* 101e8b4e shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101e8b51 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 101e8b54 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101e8b56 mov esi, eax */
  ESI = (EAX);
  /* 101e8b58 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 101e8b5b shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 101e8b5e or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101e8b60 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101e8b63 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e8b6a mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 101e8b6d mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 101e8b6f jmp 0x101e8b44 */
  goto L_101e8b44;
L_101e8b71:;
  /* 101e8b71 mov esi, 0x8000 */
  ESI = (0x8000u);
L_101e8b76:;
  /* 101e8b76 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 101e8b79 jne 0x101e8b8b */
  if (!C.zf) goto L_101e8b8b;
  /* 101e8b7b push ebx */
  push32((uint32_t)(EBX));
  /* 101e8b7c call 0x101e8a75 */
  push32(0x101e8b81u); f_101e8a75();
  /* 101e8b81 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e8b88 pop ecx */
  ECX = (pop32());
  /* 101e8b89 jmp 0x101e8b76 */
  goto L_101e8b76;
L_101e8b8b:;
  /* 101e8b8b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 101e8b8f pop esi */
  ESI = (pop32());
  /* 101e8b90 mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 101e8b94 pop ebx */
  EBX = (pop32());
  /* 101e8b95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e8b96 ret  */
  ESPCHK(0x101e8ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b97 @ 0x101e8b97 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_101e8b97(void) {
  FTRACE(0x101e8b97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e8b97 push ebp */
  push32((uint32_t)(EBP));
  /* 101e8b98 mov ebp, esp */
  EBP = (ESP);
  /* 101e8b9a sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e8b9d push ebx */
  push32((uint32_t)(EBX));
  /* 101e8b9e push esi */
  push32((uint32_t)(ESI));
  /* 101e8b9f push edi */
  push32((uint32_t)(EDI));
  /* 101e8ba0 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101e8ba3 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 101e8ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e8ba8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101e8bab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e8bad pop edx */
  EDX = (pop32());
  /* 101e8bae mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 101e8bb1 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 101e8bb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101e8bb7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101e8bba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101e8bbd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101e8bc0 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 101e8bc3 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 101e8bc6 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101e8bc9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101e8bcc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 101e8bcf mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_101e8bd2:;
  /* 101e8bd2 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 101e8bd4 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8bd7 je 0x101e8be8 */
  if (C.zf) goto L_101e8be8;
  /* 101e8bd9 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8bdc je 0x101e8be8 */
  if (C.zf) goto L_101e8be8;
  /* 101e8bde cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8be1 je 0x101e8be8 */
  if (C.zf) goto L_101e8be8;
  /* 101e8be3 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8be6 jne 0x101e8beb */
  if (!C.zf) goto L_101e8beb;
L_101e8be8:;
  /* 101e8be8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e8be9 jmp 0x101e8bd2 */
  goto L_101e8bd2;
L_101e8beb:;
  /* 101e8beb push 4 */
  push32((uint32_t)(0x4u));
  /* 101e8bed pop esi */
  ESI = (pop32());
L_101e8bee:;
  /* 101e8bee mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e8bf0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e8bf1 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8bf4 ja 0x101e8e71 */
  if ((!C.cf&&!C.zf)) goto L_101e8e71;
  /* 101e8bfa jmp dword ptr [eax*4 + 0x101e9038] */
  switch (EAX) {
    case 0: goto L_101e8c01;
    case 1: goto L_101e8c50;
    case 2: goto L_101e8ca7;
    case 3: goto L_101e8cd1;
    case 4: goto L_101e8d2c;
    case 5: goto L_101e8da3;
    case 6: goto L_101e8dd9;
    case 7: goto L_101e8e23;
    case 8: goto L_101e8e02;
    case 9: goto L_101e8e87;
    case 10: goto L_101e8e71;
    case 11: goto L_101e8e3d;
    default: x86_unimpl("switch@0x101e8bfa out of table"); return;
  }
L_101e8c01:;
  /* 101e8c01 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c04 jl 0x101e8c12 */
  if ((C.sf!=C.of)) goto L_101e8c12;
  /* 101e8c06 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c09 jg 0x101e8c12 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e8c12;
L_101e8c0b:;
  /* 101e8c0b push 3 */
  push32((uint32_t)(0x3u));
  /* 101e8c0d jmp 0x101e8e2f */
  goto L_101e8e2f;
L_101e8c12:;
  /* 101e8c12 cmp bl, byte ptr [0x101ed46c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101ed46c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c18 jne 0x101e8c21 */
  if (!C.zf) goto L_101e8c21;
L_101e8c1a:;
  /* 101e8c1a push 5 */
  push32((uint32_t)(0x5u));
  /* 101e8c1c jmp 0x101e8e67 */
  goto L_101e8e67;
L_101e8c21:;
  /* 101e8c21 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e8c24 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e8c27 je 0x101e8c47 */
  if (C.zf) goto L_101e8c47;
  /* 101e8c29 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e8c2a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e8c2b je 0x101e8c3b */
  if (C.zf) goto L_101e8c3b;
  /* 101e8c2d sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e8c30 jne 0x101e8f0a */
  if (!C.zf) goto L_101e8f0a;
  /* 101e8c36 jmp 0x101e8cca */
  goto L_101e8cca;
L_101e8c3b:;
  /* 101e8c3b push 2 */
  push32((uint32_t)(0x2u));
  /* 101e8c3d mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 101e8c44 pop eax */
  EAX = (pop32());
  /* 101e8c45 jmp 0x101e8bee */
  goto L_101e8bee;
L_101e8c47:;
  /* 101e8c47 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 101e8c4b push 2 */
  push32((uint32_t)(0x2u));
  /* 101e8c4d pop eax */
  EAX = (pop32());
  /* 101e8c4e jmp 0x101e8bee */
  goto L_101e8bee;
L_101e8c50:;
  /* 101e8c50 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 101e8c56 jl 0x101e8c5d */
  if ((C.sf!=C.of)) goto L_101e8c5d;
  /* 101e8c58 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c5b jle 0x101e8c0b */
  if ((C.zf||C.sf!=C.of)) goto L_101e8c0b;
L_101e8c5d:;
  /* 101e8c5d cmp bl, byte ptr [0x101ed46c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101ed46c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c63 je 0x101e8d25 */
  if (C.zf) goto L_101e8d25;
  /* 101e8c69 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c6c je 0x101e8c9f */
  if (C.zf) goto L_101e8c9f;
  /* 101e8c6e cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c71 je 0x101e8c9f */
  if (C.zf) goto L_101e8c9f;
  /* 101e8c73 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c76 je 0x101e8cca */
  if (C.zf) goto L_101e8cca;
L_101e8c78:;
  /* 101e8c78 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c7b jle 0x101e8f0a */
  if ((C.zf||C.sf!=C.of)) goto L_101e8f0a;
  /* 101e8c81 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c84 jle 0x101e8c98 */
  if ((C.zf||C.sf!=C.of)) goto L_101e8c98;
  /* 101e8c86 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c89 jle 0x101e8f0a */
  if ((C.zf||C.sf!=C.of)) goto L_101e8f0a;
  /* 101e8c8f cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8c92 jg 0x101e8f0a */
  if ((!C.zf&&C.sf==C.of)) goto L_101e8f0a;
L_101e8c98:;
  /* 101e8c98 push 6 */
  push32((uint32_t)(0x6u));
  /* 101e8c9a jmp 0x101e8e67 */
  goto L_101e8e67;
L_101e8c9f:;
  /* 101e8c9f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e8ca0 push 0xb */
  push32((uint32_t)(0xbu));
  /* 101e8ca2 jmp 0x101e8e67 */
  goto L_101e8e67;
L_101e8ca7:;
  /* 101e8ca7 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8caa jl 0x101e8cb5 */
  if ((C.sf!=C.of)) goto L_101e8cb5;
  /* 101e8cac cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8caf jle 0x101e8c0b */
  if ((C.zf||C.sf!=C.of)) goto L_101e8c0b;
L_101e8cb5:;
  /* 101e8cb5 cmp bl, byte ptr [0x101ed46c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101ed46c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8cbb je 0x101e8c1a */
  if (C.zf) goto L_101e8c1a;
  /* 101e8cc1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8cc4 jne 0x101e8e7f */
  if (!C.zf) goto L_101e8e7f;
L_101e8cca:;
  /* 101e8cca mov eax, edx */
  EAX = (EDX);
  /* 101e8ccc jmp 0x101e8bee */
  goto L_101e8bee;
L_101e8cd1:;
  /* 101e8cd1 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_101e8cd4:;
  /* 101e8cd4 cmp dword ptr [0x101ed468], edx */
  { uint32_t _a=(r32((uint32_t)(0x101ed468))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8cda jle 0x101e8ced */
  if ((C.zf||C.sf!=C.of)) goto L_101e8ced;
  /* 101e8cdc movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e8cdf push esi */
  push32((uint32_t)(ESI));
  /* 101e8ce0 push eax */
  push32((uint32_t)(EAX));
  /* 101e8ce1 call 0x101e6068 */
  push32(0x101e8ce6u); f_101e6068();
  /* 101e8ce6 pop ecx */
  ECX = (pop32());
  /* 101e8ce7 pop ecx */
  ECX = (pop32());
  /* 101e8ce8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e8cea pop edx */
  EDX = (pop32());
  /* 101e8ceb jmp 0x101e8cfb */
  goto L_101e8cfb;
L_101e8ced:;
  /* 101e8ced mov ecx, dword ptr [0x101ed474] */
  ECX = (r32((uint32_t)(0x101ed474)));
  /* 101e8cf3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e8cf6 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101e8cf9 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101e8cfb:;
  /* 101e8cfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8cfd je 0x101e8d1d */
  if (C.zf) goto L_101e8d1d;
  /* 101e8cff cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8d03 jae 0x101e8d15 */
  if (!C.cf) goto L_101e8d15;
  /* 101e8d05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e8d08 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101e8d0b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101e8d0e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 101e8d11 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 101e8d13 jmp 0x101e8d18 */
  goto L_101e8d18;
L_101e8d15:;
  /* 101e8d15 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_101e8d18:;
  /* 101e8d18 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e8d1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e8d1b jmp 0x101e8cd4 */
  goto L_101e8cd4;
L_101e8d1d:;
  /* 101e8d1d cmp bl, byte ptr [0x101ed46c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101ed46c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8d23 jne 0x101e8d8c */
  if (!C.zf) goto L_101e8d8c;
L_101e8d25:;
  /* 101e8d25 mov eax, esi */
  EAX = (ESI);
  /* 101e8d27 jmp 0x101e8bee */
  goto L_101e8bee;
L_101e8d2c:;
  /* 101e8d2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8d30 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 101e8d33 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101e8d36 jne 0x101e8d45 */
  if (!C.zf) goto L_101e8d45;
L_101e8d38:;
  /* 101e8d38 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8d3b jne 0x101e8d45 */
  if (!C.zf) goto L_101e8d45;
  /* 101e8d3d dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101e8d40 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e8d42 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e8d43 jmp 0x101e8d38 */
  goto L_101e8d38;
L_101e8d45:;
  /* 101e8d45 cmp dword ptr [0x101ed468], edx */
  { uint32_t _a=(r32((uint32_t)(0x101ed468))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8d4b jle 0x101e8d5e */
  if ((C.zf||C.sf!=C.of)) goto L_101e8d5e;
  /* 101e8d4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e8d50 push esi */
  push32((uint32_t)(ESI));
  /* 101e8d51 push eax */
  push32((uint32_t)(EAX));
  /* 101e8d52 call 0x101e6068 */
  push32(0x101e8d57u); f_101e6068();
  /* 101e8d57 pop ecx */
  ECX = (pop32());
  /* 101e8d58 pop ecx */
  ECX = (pop32());
  /* 101e8d59 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e8d5b pop edx */
  EDX = (pop32());
  /* 101e8d5c jmp 0x101e8d6c */
  goto L_101e8d6c;
L_101e8d5e:;
  /* 101e8d5e mov ecx, dword ptr [0x101ed474] */
  ECX = (r32((uint32_t)(0x101ed474)));
  /* 101e8d64 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e8d67 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101e8d6a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101e8d6c:;
  /* 101e8d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8d6e je 0x101e8d8c */
  if (C.zf) goto L_101e8d8c;
  /* 101e8d70 cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8d74 jae 0x101e8d87 */
  if (!C.cf) goto L_101e8d87;
  /* 101e8d76 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e8d79 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101e8d7c sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101e8d7f inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 101e8d82 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101e8d85 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_101e8d87:;
  /* 101e8d87 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e8d89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e8d8a jmp 0x101e8d45 */
  goto L_101e8d45;
L_101e8d8c:;
  /* 101e8d8c cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8d8f je 0x101e8c9f */
  if (C.zf) goto L_101e8c9f;
  /* 101e8d95 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8d98 je 0x101e8c9f */
  if (C.zf) goto L_101e8c9f;
  /* 101e8d9e jmp 0x101e8c78 */
  goto L_101e8c78;
L_101e8da3:;
  /* 101e8da3 cmp dword ptr [0x101ed468], edx */
  { uint32_t _a=(r32((uint32_t)(0x101ed468))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8da9 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101e8dac jle 0x101e8dbf */
  if ((C.zf||C.sf!=C.of)) goto L_101e8dbf;
  /* 101e8dae movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e8db1 push esi */
  push32((uint32_t)(ESI));
  /* 101e8db2 push eax */
  push32((uint32_t)(EAX));
  /* 101e8db3 call 0x101e6068 */
  push32(0x101e8db8u); f_101e6068();
  /* 101e8db8 pop ecx */
  ECX = (pop32());
  /* 101e8db9 pop ecx */
  ECX = (pop32());
  /* 101e8dba push 1 */
  push32((uint32_t)(0x1u));
  /* 101e8dbc pop edx */
  EDX = (pop32());
  /* 101e8dbd jmp 0x101e8dcd */
  goto L_101e8dcd;
L_101e8dbf:;
  /* 101e8dbf mov ecx, dword ptr [0x101ed474] */
  ECX = (r32((uint32_t)(0x101ed474)));
  /* 101e8dc5 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e8dc8 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101e8dcb and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101e8dcd:;
  /* 101e8dcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8dcf je 0x101e8e7f */
  if (C.zf) goto L_101e8e7f;
  /* 101e8dd5 mov eax, esi */
  EAX = (ESI);
  /* 101e8dd7 jmp 0x101e8e30 */
  goto L_101e8e30;
L_101e8dd9:;
  /* 101e8dd9 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 101e8ddc cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8ddf mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 101e8de2 jl 0x101e8de9 */
  if ((C.sf!=C.of)) goto L_101e8de9;
  /* 101e8de4 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8de7 jle 0x101e8e2d */
  if ((C.zf||C.sf!=C.of)) goto L_101e8e2d;
L_101e8de9:;
  /* 101e8de9 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e8dec sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e8def je 0x101e8e65 */
  if (C.zf) goto L_101e8e65;
  /* 101e8df1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e8df2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e8df3 je 0x101e8e59 */
  if (C.zf) goto L_101e8e59;
  /* 101e8df5 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e8df8 jne 0x101e8f0d */
  if (!C.zf) goto L_101e8f0d;
L_101e8dfe:;
  /* 101e8dfe push 8 */
  push32((uint32_t)(0x8u));
  /* 101e8e00 jmp 0x101e8e67 */
  goto L_101e8e67;
L_101e8e02:;
  /* 101e8e02 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_101e8e05:;
  /* 101e8e05 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8e08 jne 0x101e8e0f */
  if (!C.zf) goto L_101e8e0f;
  /* 101e8e0a mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e8e0c inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e8e0d jmp 0x101e8e05 */
  goto L_101e8e05;
L_101e8e0f:;
  /* 101e8e0f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8e12 jl 0x101e8f0a */
  if ((C.sf!=C.of)) goto L_101e8f0a;
  /* 101e8e18 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8e1b jg 0x101e8f0a */
  if ((!C.zf&&C.sf==C.of)) goto L_101e8f0a;
  /* 101e8e21 jmp 0x101e8e2d */
  goto L_101e8e2d;
L_101e8e23:;
  /* 101e8e23 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8e26 jl 0x101e8e36 */
  if ((C.sf!=C.of)) goto L_101e8e36;
  /* 101e8e28 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8e2b jg 0x101e8e36 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e8e36;
L_101e8e2d:;
  /* 101e8e2d push 9 */
  push32((uint32_t)(0x9u));
L_101e8e2f:;
  /* 101e8e2f pop eax */
  EAX = (pop32());
L_101e8e30:;
  /* 101e8e30 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e8e31 jmp 0x101e8bee */
  goto L_101e8bee;
L_101e8e36:;
  /* 101e8e36 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8e39 jne 0x101e8e7f */
  if (!C.zf) goto L_101e8e7f;
  /* 101e8e3b jmp 0x101e8dfe */
  goto L_101e8dfe;
L_101e8e3d:;
  /* 101e8e3d cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8e41 je 0x101e8e6d */
  if (C.zf) goto L_101e8e6d;
  /* 101e8e43 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e8e46 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 101e8e49 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e8e4c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 101e8e4f je 0x101e8e65 */
  if (C.zf) goto L_101e8e65;
  /* 101e8e51 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e8e52 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e8e53 jne 0x101e8f0d */
  if (!C.zf) goto L_101e8f0d;
L_101e8e59:;
  /* 101e8e59 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 101e8e5d push 7 */
  push32((uint32_t)(0x7u));
  /* 101e8e5f pop eax */
  EAX = (pop32());
  /* 101e8e60 jmp 0x101e8bee */
  goto L_101e8bee;
L_101e8e65:;
  /* 101e8e65 push 7 */
  push32((uint32_t)(0x7u));
L_101e8e67:;
  /* 101e8e67 pop eax */
  EAX = (pop32());
  /* 101e8e68 jmp 0x101e8bee */
  goto L_101e8bee;
L_101e8e6d:;
  /* 101e8e6d push 0xa */
  push32((uint32_t)(0xau));
  /* 101e8e6f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e8e70 pop eax */
  EAX = (pop32());
L_101e8e71:;
  /* 101e8e71 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8e74 je 0x101e8f0f */
  if (C.zf) goto L_101e8f0f;
  /* 101e8e7a jmp 0x101e8bee */
  goto L_101e8bee;
L_101e8e7f:;
  /* 101e8e7f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101e8e82 jmp 0x101e8f0f */
  goto L_101e8f0f;
L_101e8e87:;
  /* 101e8e87 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 101e8e8e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101e8e90:;
  /* 101e8e90 cmp dword ptr [0x101ed468], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101ed468))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8e97 jle 0x101e8ea8 */
  if ((C.zf||C.sf!=C.of)) goto L_101e8ea8;
  /* 101e8e99 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e8e9c push 4 */
  push32((uint32_t)(0x4u));
  /* 101e8e9e push eax */
  push32((uint32_t)(EAX));
  /* 101e8e9f call 0x101e6068 */
  push32(0x101e8ea4u); f_101e6068();
  /* 101e8ea4 pop ecx */
  ECX = (pop32());
  /* 101e8ea5 pop ecx */
  ECX = (pop32());
  /* 101e8ea6 jmp 0x101e8eb7 */
  goto L_101e8eb7;
L_101e8ea8:;
  /* 101e8ea8 mov ecx, dword ptr [0x101ed474] */
  ECX = (r32((uint32_t)(0x101ed474)));
  /* 101e8eae movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e8eb1 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101e8eb4 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101e8eb7:;
  /* 101e8eb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8eb9 je 0x101e8ed7 */
  if (C.zf) goto L_101e8ed7;
  /* 101e8ebb movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e8ebe lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 101e8ec1 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 101e8ec5 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8ecb jg 0x101e8ed2 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e8ed2;
  /* 101e8ecd mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e8ecf inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e8ed0 jmp 0x101e8e90 */
  goto L_101e8e90;
L_101e8ed2:;
  /* 101e8ed2 mov esi, 0x1451 */
  ESI = (0x1451u);
L_101e8ed7:;
  /* 101e8ed7 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_101e8eda:;
  /* 101e8eda cmp dword ptr [0x101ed468], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101ed468))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8ee1 jle 0x101e8ef2 */
  if ((C.zf||C.sf!=C.of)) goto L_101e8ef2;
  /* 101e8ee3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e8ee6 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e8ee8 push eax */
  push32((uint32_t)(EAX));
  /* 101e8ee9 call 0x101e6068 */
  push32(0x101e8eeeu); f_101e6068();
  /* 101e8eee pop ecx */
  ECX = (pop32());
  /* 101e8eef pop ecx */
  ECX = (pop32());
  /* 101e8ef0 jmp 0x101e8f01 */
  goto L_101e8f01;
L_101e8ef2:;
  /* 101e8ef2 mov ecx, dword ptr [0x101ed474] */
  ECX = (r32((uint32_t)(0x101ed474)));
  /* 101e8ef8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e8efb mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101e8efe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101e8f01:;
  /* 101e8f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e8f03 je 0x101e8f0a */
  if (C.zf) goto L_101e8f0a;
  /* 101e8f05 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e8f07 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e8f08 jmp 0x101e8eda */
  goto L_101e8eda;
L_101e8f0a:;
  /* 101e8f0a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e8f0b jmp 0x101e8f0f */
  goto L_101e8f0f;
L_101e8f0d:;
  /* 101e8f0d mov edi, ecx */
  EDI = (ECX);
L_101e8f0f:;
  /* 101e8f0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e8f12 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8f16 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 101e8f18 je 0x101e8ff7 */
  if (C.zf) goto L_101e8ff7;
  /* 101e8f1e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 101e8f20 pop eax */
  EAX = (pop32());
  /* 101e8f21 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8f24 jbe 0x101e8f3b */
  if ((C.cf||C.zf)) goto L_101e8f3b;
  /* 101e8f26 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8f2a jl 0x101e8f2f */
  if ((C.sf!=C.of)) goto L_101e8f2f;
  /* 101e8f2c inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_101e8f2f:;
  /* 101e8f2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101e8f32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e8f35 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e8f36 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101e8f39 jmp 0x101e8f3e */
  goto L_101e8f3e;
L_101e8f3b:;
  /* 101e8f3b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_101e8f3e:;
  /* 101e8f3e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8f42 jbe 0x101e8fed */
  if ((C.cf||C.zf)) goto L_101e8fed;
L_101e8f48:;
  /* 101e8f48 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e8f49 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e8f4c jne 0x101e8f56 */
  if (!C.zf) goto L_101e8f56;
  /* 101e8f4e dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 101e8f51 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101e8f54 jmp 0x101e8f48 */
  goto L_101e8f48;
L_101e8f56:;
  /* 101e8f56 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 101e8f59 push eax */
  push32((uint32_t)(EAX));
  /* 101e8f5a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 101e8f5d push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 101e8f60 push eax */
  push32((uint32_t)(EAX));
  /* 101e8f61 call 0x101e8ad0 */
  push32(0x101e8f66u); f_101e8ad0();
  /* 101e8f66 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 101e8f69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e8f6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8f6e cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8f71 jge 0x101e8f75 */
  if ((C.sf==C.of)) goto L_101e8f75;
  /* 101e8f73 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_101e8f75:;
  /* 101e8f75 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8f78 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8f7b jne 0x101e8f80 */
  if (!C.zf) goto L_101e8f80;
  /* 101e8f7d add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101e8f80:;
  /* 101e8f80 cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8f83 jne 0x101e8f88 */
  if (!C.zf) goto L_101e8f88;
  /* 101e8f85 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_101e8f88:;
  /* 101e8f88 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8f8d jle 0x101e8fbf */
  if ((C.zf||C.sf!=C.of)) goto L_101e8fbf;
  /* 101e8f8f mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_101e8f96:;
  /* 101e8f96 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e8f99 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101e8f9c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e8f9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101e8fa2:;
  /* 101e8fa2 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8fa6 je 0x101e9008 */
  if (C.zf) goto L_101e9008;
  /* 101e8fa8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e8faa mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 101e8faf mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101e8fb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e8fb6 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 101e8fbd jmp 0x101e901d */
  goto L_101e901d;
L_101e8fbf:;
  /* 101e8fbf cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e8fc4 jge 0x101e8fcf */
  if ((C.sf==C.of)) goto L_101e8fcf;
  /* 101e8fc6 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 101e8fcd jmp 0x101e8f96 */
  goto L_101e8f96;
L_101e8fcf:;
  /* 101e8fcf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e8fd2 push eax */
  push32((uint32_t)(EAX));
  /* 101e8fd3 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 101e8fd6 push eax */
  push32((uint32_t)(EAX));
  /* 101e8fd7 call 0x101e9c0a */
  push32(0x101e8fdcu); f_101e9c0a();
  /* 101e8fdc mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 101e8fdf mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 101e8fe2 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 101e8fe5 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 101e8fe8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e8feb jmp 0x101e8fa2 */
  goto L_101e8fa2;
L_101e8fed:;
  /* 101e8fed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e8fef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e8ff1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e8ff3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e8ff5 jmp 0x101e8fa2 */
  goto L_101e8fa2;
L_101e8ff7:;
  /* 101e8ff7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e8ff9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e8ffb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e8ffd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e8fff mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 101e9006 jmp 0x101e901d */
  goto L_101e901d;
L_101e9008:;
  /* 101e9008 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e900c je 0x101e901d */
  if (C.zf) goto L_101e901d;
  /* 101e900e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e9010 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9012 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e9014 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e9016 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_101e901d:;
  /* 101e901d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e9020 or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 101e9023 pop edi */
  EDI = (pop32());
  /* 101e9024 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 101e9027 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 101e902a mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 101e902e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101e9031 pop esi */
  ESI = (pop32());
  /* 101e9032 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 101e9035 pop ebx */
  EBX = (pop32());
  /* 101e9036 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e9037 ret  */
  ESPCHK(0x101e8b97u, _esp0);
  ESP += 4; return;
}

/* FUN_10009068 @ 0x101e9068 (659 bytes, 232 insns) */
void f_101e9068(void) {
  FTRACE(0x101e9068u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9068 push ebp */
  push32((uint32_t)(EBP));
  /* 101e9069 mov ebp, esp */
  EBP = (ESP);
  /* 101e906b sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e906e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e9071 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9072 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 101e9075 push esi */
  push32((uint32_t)(ESI));
  /* 101e9076 mov ecx, eax */
  ECX = (EAX);
  /* 101e9078 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 101e907d and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 101e9083 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101e9085 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 101e9088 push edi */
  push32((uint32_t)(EDI));
  /* 101e9089 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 101e908d mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 101e9091 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 101e9095 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 101e9099 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 101e909d mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 101e90a1 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 101e90a5 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 101e90a9 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 101e90ad mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 101e90b1 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 101e90b5 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 101e90b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101e90c0 mov edx, eax */
  EDX = (EAX);
  /* 101e90c2 je 0x101e90ca */
  if (C.zf) goto L_101e90ca;
  /* 101e90c4 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 101e90c8 jmp 0x101e90ce */
  goto L_101e90ce;
L_101e90ca:;
  /* 101e90ca mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_101e90ce:;
  /* 101e90ce mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e90d1 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 101e90d4 jne 0x101e90f4 */
  if (!C.zf) goto L_101e90f4;
  /* 101e90d6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e90d8 jne 0x101e90f4 */
  if (!C.zf) goto L_101e90f4;
  /* 101e90da cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e90dd jne 0x101e90f4 */
  if (!C.zf) goto L_101e90f4;
L_101e90df:;
  /* 101e90df and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 101e90e3 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 101e90e7 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 101e90eb mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 101e90ef jmp 0x101e92f2 */
  goto L_101e92f2;
L_101e90f4:;
  /* 101e90f4 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e90f7 jne 0x101e9173 */
  if (!C.zf) goto L_101e9173;
  /* 101e90f9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 101e90fe mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 101e9103 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9105 jne 0x101e910d */
  if (!C.zf) goto L_101e910d;
  /* 101e9107 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e910b je 0x101e911c */
  if (C.zf) goto L_101e911c;
L_101e910d:;
  /* 101e910d test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 101e9113 jne 0x101e911c */
  if (!C.zf) goto L_101e911c;
  /* 101e9115 push 0x101eb518 */
  push32((uint32_t)(0x101eb518u));
  /* 101e911a jmp 0x101e9162 */
  goto L_101e9162;
L_101e911c:;
  /* 101e911c test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 101e911f je 0x101e9136 */
  if (C.zf) goto L_101e9136;
  /* 101e9121 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9127 jne 0x101e9136 */
  if (!C.zf) goto L_101e9136;
  /* 101e9129 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e912d jne 0x101e915d */
  if (!C.zf) goto L_101e915d;
  /* 101e912f push 0x101eb510 */
  push32((uint32_t)(0x101eb510u));
  /* 101e9134 jmp 0x101e9145 */
  goto L_101e9145;
L_101e9136:;
  /* 101e9136 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9138 jne 0x101e915d */
  if (!C.zf) goto L_101e915d;
  /* 101e913a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e913e jne 0x101e915d */
  if (!C.zf) goto L_101e915d;
  /* 101e9140 push 0x101eb508 */
  push32((uint32_t)(0x101eb508u));
L_101e9145:;
  /* 101e9145 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 101e9148 push eax */
  push32((uint32_t)(EAX));
  /* 101e9149 call 0x101e6790 */
  push32(0x101e914eu); f_101e6790();
  /* 101e914e pop ecx */
  ECX = (pop32());
  /* 101e914f mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 101e9153 pop ecx */
  ECX = (pop32());
L_101e9154:;
  /* 101e9154 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e9158 jmp 0x101e92cb */
  goto L_101e92cb;
L_101e915d:;
  /* 101e915d push 0x101eb500 */
  push32((uint32_t)(0x101eb500u));
L_101e9162:;
  /* 101e9162 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 101e9165 push eax */
  push32((uint32_t)(EAX));
  /* 101e9166 call 0x101e6790 */
  push32(0x101e916bu); f_101e6790();
  /* 101e916b pop ecx */
  ECX = (pop32());
  /* 101e916c mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 101e9170 pop ecx */
  ECX = (pop32());
  /* 101e9171 jmp 0x101e9154 */
  goto L_101e9154;
L_101e9173:;
  /* 101e9173 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 101e9176 mov ecx, edi */
  ECX = (EDI);
  /* 101e9178 mov esi, eax */
  ESI = (EAX);
  /* 101e917a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 101e917d imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101e9183 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 101e9186 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 101e918b push 1 */
  push32((uint32_t)(0x1u));
  /* 101e918d lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 101e9190 mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 101e9194 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101e9197 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 101e919a lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 101e91a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e91a4 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 101e91a7 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 101e91aa movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 101e91ad neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e91af push eax */
  push32((uint32_t)(EAX));
  /* 101e91b0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e91b3 push eax */
  push32((uint32_t)(EAX));
  /* 101e91b4 call 0x101e9c0a */
  push32(0x101e91b9u); f_101e9c0a();
  /* 101e91b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e91bc cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e91c2 jb 0x101e91d4 */
  if (C.cf) goto L_101e91d4;
  /* 101e91c4 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 101e91c7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e91c8 push eax */
  push32((uint32_t)(EAX));
  /* 101e91c9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e91cc push eax */
  push32((uint32_t)(EAX));
  /* 101e91cd call 0x101e99ea */
  push32(0x101e91d2u); f_101e99ea();
  /* 101e91d2 pop ecx */
  ECX = (pop32());
  /* 101e91d3 pop ecx */
  ECX = (pop32());
L_101e91d4:;
  /* 101e91d4 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 101e91d8 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 101e91db je 0x101e91ee */
  if (C.zf) goto L_101e91ee;
  /* 101e91dd mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 101e91e0 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 101e91e3 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e91e5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e91e7 jg 0x101e91f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e91f1;
  /* 101e91e9 jmp 0x101e90df */
  goto L_101e90df;
L_101e91ee:;
  /* 101e91ee mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_101e91f1:;
  /* 101e91f1 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e91f4 jle 0x101e91f9 */
  if ((C.zf||C.sf!=C.of)) goto L_101e91f9;
  /* 101e91f6 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 101e91f8 pop edi */
  EDI = (pop32());
L_101e91f9:;
  /* 101e91f9 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 101e91fd sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e9203 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 101e9208 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_101e920f:;
  /* 101e920f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e9212 push eax */
  push32((uint32_t)(EAX));
  /* 101e9213 call 0x101e8a75 */
  push32(0x101e9218u); f_101e8a75();
  /* 101e9218 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 101e921b pop ecx */
  ECX = (pop32());
  /* 101e921c jne 0x101e920f */
  if (!C.zf) goto L_101e920f;
  /* 101e921e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e9220 jge 0x101e9239 */
  if ((C.sf==C.of)) goto L_101e9239;
  /* 101e9222 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 101e9224 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 101e922a jle 0x101e9239 */
  if ((C.zf||C.sf!=C.of)) goto L_101e9239;
L_101e922c:;
  /* 101e922c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e922f push eax */
  push32((uint32_t)(EAX));
  /* 101e9230 call 0x101e8aa3 */
  push32(0x101e9235u); f_101e8aa3();
  /* 101e9235 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101e9236 pop ecx */
  ECX = (pop32());
  /* 101e9237 jne 0x101e922c */
  if (!C.zf) goto L_101e922c;
L_101e9239:;
  /* 101e9239 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 101e923c lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 101e923f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e9241 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 101e9244 jle 0x101e9296 */
  if ((C.zf||C.sf!=C.of)) goto L_101e9296;
  /* 101e9246 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_101e9249:;
  /* 101e9249 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 101e924c lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 101e924f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e9250 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e9251 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e9254 push eax */
  push32((uint32_t)(EAX));
  /* 101e9255 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e9256 call 0x101e8a75 */
  push32(0x101e925bu); f_101e8a75();
  /* 101e925b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e925e push eax */
  push32((uint32_t)(EAX));
  /* 101e925f call 0x101e8a75 */
  push32(0x101e9264u); f_101e8a75();
  /* 101e9264 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101e9267 push eax */
  push32((uint32_t)(EAX));
  /* 101e9268 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e926b push eax */
  push32((uint32_t)(EAX));
  /* 101e926c call 0x101e8a17 */
  push32(0x101e9271u); f_101e8a17();
  /* 101e9271 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e9274 push eax */
  push32((uint32_t)(EAX));
  /* 101e9275 call 0x101e8a75 */
  push32(0x101e927au); f_101e8a75();
  /* 101e927a mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 101e927d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 101e9280 and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 101e9284 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9287 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101e9289 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 101e928c dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 101e928f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 101e9291 jne 0x101e9249 */
  if (!C.zf) goto L_101e9249;
  /* 101e9293 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_101e9296:;
  /* 101e9296 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 101e9299 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e929a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e929b cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e929e lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 101e92a1 jl 0x101e92d3 */
  if ((C.sf!=C.of)) goto L_101e92d3;
L_101e92a3:;
  /* 101e92a3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e92a5 jb 0x101e92b6 */
  if (C.cf) goto L_101e92b6;
  /* 101e92a7 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e92aa jne 0x101e92b2 */
  if (!C.zf) goto L_101e92b2;
  /* 101e92ac mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101e92af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e92b0 jmp 0x101e92a3 */
  goto L_101e92a3;
L_101e92b2:;
  /* 101e92b2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e92b4 jae 0x101e92ba */
  if (!C.cf) goto L_101e92ba;
L_101e92b6:;
  /* 101e92b6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e92b7 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_101e92ba:;
  /* 101e92ba inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101e92bc:;
  /* 101e92bc sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101e92be sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101e92c0 mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 101e92c3 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 101e92c6 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_101e92cb:;
  /* 101e92cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_101e92ce:;
  /* 101e92ce pop edi */
  EDI = (pop32());
  /* 101e92cf pop esi */
  ESI = (pop32());
  /* 101e92d0 pop ebx */
  EBX = (pop32());
  /* 101e92d1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e92d2 ret  */
  ESPCHK(0x101e9068u, _esp0);
  ESP += 4; return;
L_101e92d3:;
  /* 101e92d3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e92d5 jb 0x101e92e3 */
  if (C.cf) goto L_101e92e3;
  /* 101e92d7 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e92da jne 0x101e92df */
  if (!C.zf) goto L_101e92df;
  /* 101e92dc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e92dd jmp 0x101e92d3 */
  goto L_101e92d3;
L_101e92df:;
  /* 101e92df cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e92e1 jae 0x101e92bc */
  if (!C.cf) goto L_101e92bc;
L_101e92e3:;
  /* 101e92e3 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 101e92e7 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 101e92eb mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 101e92ef mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_101e92f2:;
  /* 101e92f2 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 101e92f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e92f8 pop eax */
  EAX = (pop32());
  /* 101e92f9 jmp 0x101e92ce */
  goto L_101e92ce;
}

/* FUN_100092fb @ 0x101e92fb (115 bytes, 37 insns) */
void f_101e92fb(void) {
  FTRACE(0x101e92fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e92fb push esi */
  push32((uint32_t)(ESI));
  /* 101e92fc call 0x101e9377 */
  push32(0x101e9301u); f_101e9377();
  /* 101e9301 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e9305 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e9307 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101e9309 mov eax, 0x101edc90 */
  EAX = (0x101edc90u);
L_101e930e:;
  /* 101e930e cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9310 je 0x101e9334 */
  if (C.zf) goto L_101e9334;
  /* 101e9312 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9315 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e9316 cmp eax, 0x101eddf8 */
  { uint32_t _a=(EAX),_b=(0x101eddf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e931b jl 0x101e930e */
  if ((C.sf!=C.of)) goto L_101e930e;
  /* 101e931d cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9320 jb 0x101e9344 */
  if (C.cf) goto L_101e9344;
  /* 101e9322 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9325 ja 0x101e9344 */
  if ((!C.cf&&!C.zf)) goto L_101e9344;
  /* 101e9327 call 0x101e936e */
  push32(0x101e932cu); f_101e936e();
  /* 101e932c mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 101e9332 pop esi */
  ESI = (pop32());
  /* 101e9333 ret  */
  ESPCHK(0x101e92fbu, _esp0);
  ESP += 4; return;
L_101e9334:;
  /* 101e9334 call 0x101e936e */
  push32(0x101e9339u); f_101e936e();
  /* 101e9339 mov ecx, dword ptr [esi*8 + 0x101edc94] */
  ECX = (r32((uint32_t)(ESI*8 + 0x101edc94)));
  /* 101e9340 pop esi */
  ESI = (pop32());
  /* 101e9341 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101e9343 ret  */
  ESPCHK(0x101e92fbu, _esp0);
  ESP += 4; return;
L_101e9344:;
  /* 101e9344 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e934a jb 0x101e9361 */
  if (C.cf) goto L_101e9361;
  /* 101e934c cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9352 ja 0x101e9361 */
  if ((!C.cf&&!C.zf)) goto L_101e9361;
  /* 101e9354 call 0x101e936e */
  push32(0x101e9359u); f_101e936e();
  /* 101e9359 mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 101e935f pop esi */
  ESI = (pop32());
  /* 101e9360 ret  */
  ESPCHK(0x101e92fbu, _esp0);
  ESP += 4; return;
L_101e9361:;
  /* 101e9361 call 0x101e936e */
  push32(0x101e9366u); f_101e936e();
  /* 101e9366 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 101e936c pop esi */
  ESI = (pop32());
  /* 101e936d ret  */
  ESPCHK(0x101e92fbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000936e @ 0x101e936e (9 bytes, 3 insns) */
void f_101e936e(void) {
  FTRACE(0x101e936eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e936e call 0x101e5576 */
  push32(0x101e9373u); f_101e5576();
  /* 101e9373 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9376 ret  */
  ESPCHK(0x101e936eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009377 @ 0x101e9377 (9 bytes, 3 insns) */
void f_101e9377(void) {
  FTRACE(0x101e9377u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9377 call 0x101e5576 */
  push32(0x101e937cu); f_101e5576();
  /* 101e937c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e937f ret  */
  ESPCHK(0x101e9377u, _esp0);
  ESP += 4; return;
}

/* FUN_10009380 @ 0x101e9380 (127 bytes, 48 insns) */
void f_101e9380(void) {
  FTRACE(0x101e9380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9380 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e9384 push esi */
  push32((uint32_t)(ESI));
  /* 101e9385 cmp ecx, dword ptr [0x101f27e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x101f27e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e938b push edi */
  push32((uint32_t)(EDI));
  /* 101e938c jae 0x101e93e6 */
  if (!C.cf) goto L_101e93e6;
  /* 101e938e mov eax, ecx */
  EAX = (ECX);
  /* 101e9390 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101e9393 lea edi, [eax*4 + 0x101f26e0] */
  EDI = ((uint32_t)(EAX*4 + 0x101f26e0));
  /* 101e939a mov eax, ecx */
  EAX = (ECX);
  /* 101e939c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e939f lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 101e93a2 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101e93a4 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101e93a7 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e93a9 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101e93ad je 0x101e93e6 */
  if (C.zf) goto L_101e93e6;
  /* 101e93af cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e93b2 je 0x101e93e6 */
  if (C.zf) goto L_101e93e6;
  /* 101e93b4 cmp dword ptr [0x101f1100], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101f1100))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e93bb jne 0x101e93dc */
  if (!C.zf) goto L_101e93dc;
  /* 101e93bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e93bf sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e93c1 je 0x101e93d3 */
  if (C.zf) goto L_101e93d3;
  /* 101e93c3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e93c4 je 0x101e93ce */
  if (C.zf) goto L_101e93ce;
  /* 101e93c6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e93c7 jne 0x101e93dc */
  if (!C.zf) goto L_101e93dc;
  /* 101e93c9 push eax */
  push32((uint32_t)(EAX));
  /* 101e93ca push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 101e93cc jmp 0x101e93d6 */
  goto L_101e93d6;
L_101e93ce:;
  /* 101e93ce push eax */
  push32((uint32_t)(EAX));
  /* 101e93cf push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 101e93d1 jmp 0x101e93d6 */
  goto L_101e93d6;
L_101e93d3:;
  /* 101e93d3 push eax */
  push32((uint32_t)(EAX));
  /* 101e93d4 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_101e93d6:;
  /* 101e93d6 call dword ptr [0x101eb0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0c0))), 0x101e93dcu);
L_101e93dc:;
  /* 101e93dc mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101e93de or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 101e93e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e93e4 jmp 0x101e93fc */
  goto L_101e93fc;
L_101e93e6:;
  /* 101e93e6 call 0x101e936e */
  push32(0x101e93ebu); f_101e936e();
  /* 101e93eb mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101e93f1 call 0x101e9377 */
  push32(0x101e93f6u); f_101e9377();
  /* 101e93f6 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101e93f9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101e93fc:;
  /* 101e93fc pop edi */
  EDI = (pop32());
  /* 101e93fd pop esi */
  ESI = (pop32());
  /* 101e93fe ret  */
  ESPCHK(0x101e9380u, _esp0);
  ESP += 4; return;
}

/* FUN_100093ff @ 0x101e93ff (66 bytes, 19 insns) */
void f_101e93ff(void) {
  FTRACE(0x101e93ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e93ff mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e9403 cmp eax, dword ptr [0x101f27e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101f27e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9409 jae 0x101e942a */
  if (!C.cf) goto L_101e942a;
  /* 101e940b mov ecx, eax */
  ECX = (EAX);
  /* 101e940d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e9410 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101e9413 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101e9416 mov ecx, dword ptr [ecx*4 + 0x101f26e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101f26e0)));
  /* 101e941d test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101e9422 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101e9425 je 0x101e942a */
  if (C.zf) goto L_101e942a;
  /* 101e9427 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101e9429 ret  */
  ESPCHK(0x101e93ffu, _esp0);
  ESP += 4; return;
L_101e942a:;
  /* 101e942a call 0x101e936e */
  push32(0x101e942fu); f_101e936e();
  /* 101e942f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101e9435 call 0x101e9377 */
  push32(0x101e943au); f_101e9377();
  /* 101e943a and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101e943d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e9440 ret  */
  ESPCHK(0x101e93ffu, _esp0);
  ESP += 4; return;
}

/* FUN_10009441 @ 0x101e9441 (95 bytes, 34 insns) */
void f_101e9441(void) {
  FTRACE(0x101e9441u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9441 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e9445 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9446 mov ecx, eax */
  ECX = (EAX);
  /* 101e9448 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e944b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101e944e push esi */
  push32((uint32_t)(ESI));
  /* 101e944f push edi */
  push32((uint32_t)(EDI));
  /* 101e9450 mov esi, dword ptr [ecx*4 + 0x101f26e0] */
  ESI = (r32((uint32_t)(ECX*4 + 0x101f26e0)));
  /* 101e9457 lea ebx, [ecx*4 + 0x101f26e0] */
  EBX = ((uint32_t)(ECX*4 + 0x101f26e0));
  /* 101e945e lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 101e9461 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 101e9464 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9466 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e946a jne 0x101e948f */
  if (!C.zf) goto L_101e948f;
  /* 101e946c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101e946e call 0x101e737a */
  push32(0x101e9473u); f_101e737a();
  /* 101e9473 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9477 pop ecx */
  ECX = (pop32());
  /* 101e9478 jne 0x101e9487 */
  if (!C.zf) goto L_101e9487;
  /* 101e947a lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 101e947d push eax */
  push32((uint32_t)(EAX));
  /* 101e947e call dword ptr [0x101eb090] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb090))), 0x101e9484u);
  /* 101e9484 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_101e9487:;
  /* 101e9487 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101e9489 call 0x101e73db */
  push32(0x101e948eu); f_101e73db();
  /* 101e948e pop ecx */
  ECX = (pop32());
L_101e948f:;
  /* 101e948f mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101e9491 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 101e9495 push eax */
  push32((uint32_t)(EAX));
  /* 101e9496 call dword ptr [0x101eb008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb008))), 0x101e949cu);
  /* 101e949c pop edi */
  EDI = (pop32());
  /* 101e949d pop esi */
  ESI = (pop32());
  /* 101e949e pop ebx */
  EBX = (pop32());
  /* 101e949f ret  */
  ESPCHK(0x101e9441u, _esp0);
  ESP += 4; return;
}

/* FUN_100094a0 @ 0x101e94a0 (34 bytes, 10 insns) */
void f_101e94a0(void) {
  FTRACE(0x101e94a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e94a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e94a4 mov ecx, eax */
  ECX = (EAX);
  /* 101e94a6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e94a9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101e94ac lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101e94af mov ecx, dword ptr [ecx*4 + 0x101f26e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101f26e0)));
  /* 101e94b6 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 101e94ba push eax */
  push32((uint32_t)(EAX));
  /* 101e94bb call dword ptr [0x101eb00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb00c))), 0x101e94c1u);
  /* 101e94c1 ret  */
  ESPCHK(0x101e94a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009543 @ 0x101e9543 (46 bytes, 22 insns) */
void f_101e9543(void) {
  FTRACE(0x101e9543u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9543 push esi */
  push32((uint32_t)(ESI));
  /* 101e9544 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e9548 push esi */
  push32((uint32_t)(ESI));
  /* 101e9549 call 0x101e9571 */
  push32(0x101e954eu); f_101e9571();
  /* 101e954e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e9550 pop ecx */
  ECX = (pop32());
  /* 101e9551 je 0x101e9558 */
  if (C.zf) goto L_101e9558;
  /* 101e9553 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e9556 pop esi */
  ESI = (pop32());
  /* 101e9557 ret  */
  ESPCHK(0x101e9543u, _esp0);
  ESP += 4; return;
L_101e9558:;
  /* 101e9558 test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 101e955c je 0x101e956d */
  if (C.zf) goto L_101e956d;
  /* 101e955e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101e9561 call 0x101e9d03 */
  push32(0x101e9566u); f_101e9d03();
  /* 101e9566 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e9568 pop ecx */
  ECX = (pop32());
  /* 101e9569 pop esi */
  ESI = (pop32());
  /* 101e956a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e956c ret  */
  ESPCHK(0x101e9543u, _esp0);
  ESP += 4; return;
L_101e956d:;
  /* 101e956d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e956f pop esi */
  ESI = (pop32());
  /* 101e9570 ret  */
  ESPCHK(0x101e9543u, _esp0);
  ESP += 4; return;
}

/* FUN_10009571 @ 0x101e9571 (92 bytes, 40 insns) */
void f_101e9571(void) {
  FTRACE(0x101e9571u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9571 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9572 push esi */
  push32((uint32_t)(ESI));
  /* 101e9573 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101e9577 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e9579 push edi */
  push32((uint32_t)(EDI));
  /* 101e957a mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101e957d mov ecx, eax */
  ECX = (EAX);
  /* 101e957f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101e9582 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9585 jne 0x101e95be */
  if (!C.zf) goto L_101e95be;
  /* 101e9587 test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 101e958b je 0x101e95be */
  if (C.zf) goto L_101e95be;
  /* 101e958d mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101e9590 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 101e9592 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e9594 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e9596 jle 0x101e95be */
  if ((C.zf||C.sf!=C.of)) goto L_101e95be;
  /* 101e9598 push edi */
  push32((uint32_t)(EDI));
  /* 101e9599 push eax */
  push32((uint32_t)(EAX));
  /* 101e959a push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101e959d call 0x101e6d7c */
  push32(0x101e95a2u); f_101e6d7c();
  /* 101e95a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e95a5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e95a7 jne 0x101e95b7 */
  if (!C.zf) goto L_101e95b7;
  /* 101e95a9 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101e95ac test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 101e95ae je 0x101e95be */
  if (C.zf) goto L_101e95be;
  /* 101e95b0 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 101e95b2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 101e95b5 jmp 0x101e95be */
  goto L_101e95be;
L_101e95b7:;
  /* 101e95b7 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101e95bb or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_101e95be:;
  /* 101e95be mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101e95c1 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101e95c5 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101e95c7 pop edi */
  EDI = (pop32());
  /* 101e95c8 mov eax, ebx */
  EAX = (EBX);
  /* 101e95ca pop esi */
  ESI = (pop32());
  /* 101e95cb pop ebx */
  EBX = (pop32());
  /* 101e95cc ret  */
  ESPCHK(0x101e9571u, _esp0);
  ESP += 4; return;
}

/* FUN_100095d6 @ 0x101e95d6 (164 bytes, 66 insns) */
void f_101e95d6(void) {
  FTRACE(0x101e95d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e95d6 push ebx */
  push32((uint32_t)(EBX));
  /* 101e95d7 push esi */
  push32((uint32_t)(ESI));
  /* 101e95d8 push edi */
  push32((uint32_t)(EDI));
  /* 101e95d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e95db xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e95dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101e95df call 0x101e737a */
  push32(0x101e95e4u); f_101e737a();
  /* 101e95e4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e95e6 pop ecx */
  ECX = (pop32());
  /* 101e95e7 cmp dword ptr [0x101f26c0], esi */
  { uint32_t _a=(r32((uint32_t)(0x101f26c0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e95ed jle 0x101e9663 */
  if ((C.zf||C.sf!=C.of)) goto L_101e9663;
L_101e95ef:;
  /* 101e95ef mov eax, dword ptr [0x101f16a8] */
  EAX = (r32((uint32_t)(0x101f16a8)));
  /* 101e95f4 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 101e95f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e95f9 je 0x101e965a */
  if (C.zf) goto L_101e965a;
  /* 101e95fb test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 101e95ff je 0x101e965a */
  if (C.zf) goto L_101e965a;
  /* 101e9601 push eax */
  push32((uint32_t)(EAX));
  /* 101e9602 push esi */
  push32((uint32_t)(ESI));
  /* 101e9603 call 0x101e70c4 */
  push32(0x101e9608u); f_101e70c4();
  /* 101e9608 mov eax, dword ptr [0x101f16a8] */
  EAX = (r32((uint32_t)(0x101f16a8)));
  /* 101e960d pop ecx */
  ECX = (pop32());
  /* 101e960e pop ecx */
  ECX = (pop32());
  /* 101e960f mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 101e9612 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 101e9615 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 101e9618 je 0x101e964a */
  if (C.zf) goto L_101e964a;
  /* 101e961a cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e961f jne 0x101e9630 */
  if (!C.zf) goto L_101e9630;
  /* 101e9621 push eax */
  push32((uint32_t)(EAX));
  /* 101e9622 call 0x101e9543 */
  push32(0x101e9627u); f_101e9543();
  /* 101e9627 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e962a pop ecx */
  ECX = (pop32());
  /* 101e962b je 0x101e964a */
  if (C.zf) goto L_101e964a;
  /* 101e962d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101e962e jmp 0x101e964a */
  goto L_101e964a;
L_101e9630:;
  /* 101e9630 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9635 jne 0x101e964a */
  if (!C.zf) goto L_101e964a;
  /* 101e9637 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 101e963a je 0x101e964a */
  if (C.zf) goto L_101e964a;
  /* 101e963c push eax */
  push32((uint32_t)(EAX));
  /* 101e963d call 0x101e9543 */
  push32(0x101e9642u); f_101e9543();
  /* 101e9642 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9645 pop ecx */
  ECX = (pop32());
  /* 101e9646 jne 0x101e964a */
  if (!C.zf) goto L_101e964a;
  /* 101e9648 or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_101e964a:;
  /* 101e964a mov eax, dword ptr [0x101f16a8] */
  EAX = (r32((uint32_t)(0x101f16a8)));
  /* 101e964f push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 101e9652 push esi */
  push32((uint32_t)(ESI));
  /* 101e9653 call 0x101e7116 */
  push32(0x101e9658u); f_101e7116();
  /* 101e9658 pop ecx */
  ECX = (pop32());
  /* 101e9659 pop ecx */
  ECX = (pop32());
L_101e965a:;
  /* 101e965a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e965b cmp esi, dword ptr [0x101f26c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101f26c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9661 jl 0x101e95ef */
  if ((C.sf!=C.of)) goto L_101e95ef;
L_101e9663:;
  /* 101e9663 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e9665 call 0x101e73db */
  push32(0x101e966au); f_101e73db();
  /* 101e966a cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e966f pop ecx */
  ECX = (pop32());
  /* 101e9670 mov eax, ebx */
  EAX = (EBX);
  /* 101e9672 je 0x101e9676 */
  if (C.zf) goto L_101e9676;
  /* 101e9674 mov eax, edi */
  EAX = (EDI);
L_101e9676:;
  /* 101e9676 pop edi */
  EDI = (pop32());
  /* 101e9677 pop esi */
  ESI = (pop32());
  /* 101e9678 pop ebx */
  EBX = (pop32());
  /* 101e9679 ret  */
  ESPCHK(0x101e95d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000967a @ 0x101e967a (27 bytes, 13 insns) */
void f_101e967a(void) {
  FTRACE(0x101e967au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e967a mov eax, dword ptr [0x101f1310] */
  EAX = (r32((uint32_t)(0x101f1310)));
  /* 101e967f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e9681 je 0x101e9692 */
  if (C.zf) goto L_101e9692;
  /* 101e9683 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101e9687 call eax */
  call_ind((uint32_t)(EAX), 0x101e9689u);
  /* 101e9689 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e968b pop ecx */
  ECX = (pop32());
  /* 101e968c je 0x101e9692 */
  if (C.zf) goto L_101e9692;
  /* 101e968e push 1 */
  push32((uint32_t)(0x1u));
  /* 101e9690 pop eax */
  EAX = (pop32());
  /* 101e9691 ret  */
  ESPCHK(0x101e967au, _esp0);
  ESP += 4; return;
L_101e9692:;
  /* 101e9692 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9694 ret  */
  ESPCHK(0x101e967au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x101e9698 (32 bytes, 18 insns) */
void f_101e9698(void) {
  FTRACE(0x101e9698u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9698 push ebp */
  push32((uint32_t)(EBP));
  /* 101e9699 mov ebp, esp */
  EBP = (ESP);
  /* 101e969b push ebx */
  push32((uint32_t)(EBX));
  /* 101e969c push esi */
  push32((uint32_t)(ESI));
  /* 101e969d push edi */
  push32((uint32_t)(EDI));
  /* 101e969e push ebp */
  push32((uint32_t)(EBP));
  /* 101e969f push 0 */
  push32((uint32_t)(0x0u));
  /* 101e96a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e96a3 push 0x101e96b0 */
  push32((uint32_t)(0x101e96b0u));
  /* 101e96a8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e96ab call 0x101ea18c */
  push32(0x101e96b0u); f_101ea18c();
  /* 101e96b0 pop ebp */
  EBP = (pop32());
  /* 101e96b1 pop edi */
  EDI = (pop32());
  /* 101e96b2 pop esi */
  ESI = (pop32());
  /* 101e96b3 pop ebx */
  EBX = (pop32());
  /* 101e96b4 mov esp, ebp */
  ESP = (EBP);
  /* 101e96b6 pop ebp */
  EBP = (pop32());
  /* 101e96b7 ret  */
  ESPCHK(0x101e9698u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x101e96da (104 bytes, 33 insns) */
void f_101e96da(void) {
  FTRACE(0x101e96dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e96da push ebx */
  push32((uint32_t)(EBX));
  /* 101e96db push esi */
  push32((uint32_t)(ESI));
  /* 101e96dc push edi */
  push32((uint32_t)(EDI));
  /* 101e96dd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101e96e1 push eax */
  push32((uint32_t)(EAX));
  /* 101e96e2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 101e96e4 push 0x101e96b8 */
  push32((uint32_t)(0x101e96b8u));
  /* 101e96e9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 101e96f0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_101e96f7:;
  /* 101e96f7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 101e96fb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 101e96fe mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 101e9701 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9704 je 0x101e9734 */
  if (C.zf) goto L_101e9734;
  /* 101e9706 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e970a je 0x101e9734 */
  if (C.zf) goto L_101e9734;
  /* 101e970c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 101e970f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 101e9712 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 101e9716 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 101e9719 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e971e jne 0x101e9732 */
  if (!C.zf) goto L_101e9732;
  /* 101e9720 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 101e9725 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 101e9729 call 0x101e976e */
  push32(0x101e972eu); f_101e976e();
  /* 101e972e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x101e9732u);
L_101e9732:;
  /* 101e9732 jmp 0x101e96f7 */
  goto L_101e96f7;
L_101e9734:;
  /* 101e9734 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 101e973b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e973e pop edi */
  EDI = (pop32());
  /* 101e973f pop esi */
  ESI = (pop32());
  /* 101e9740 pop ebx */
  EBX = (pop32());
  /* 101e9741 ret  */
  ESPCHK(0x101e96dau, _esp0);
  ESP += 4; return;
}

/* FUN_1000976e @ 0x101e976e (24 bytes, 10 insns) */
void f_101e976e(void) {
  FTRACE(0x101e976eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e976e push ebx */
  push32((uint32_t)(EBX));
  /* 101e976f push ecx */
  push32((uint32_t)(ECX));
  /* 101e9770 mov ebx, 0x101eddf8 */
  EBX = (0x101eddf8u);
  /* 101e9775 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e9778 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 101e977b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 101e977e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 101e9781 pop ecx */
  ECX = (pop32());
  /* 101e9782 pop ebx */
  EBX = (pop32());
  /* 101e9783 ret 4 */
  ESPCHK(0x101e976eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000984d @ 0x101e984d (27 bytes, 11 insns) */
void f_101e984d(void) {
  FTRACE(0x101e984du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e984d push ebp */
  push32((uint32_t)(EBP));
  /* 101e984e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e9852 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 101e9854 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 101e9857 push eax */
  push32((uint32_t)(EAX));
  /* 101e9858 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 101e985b push eax */
  push32((uint32_t)(EAX));
  /* 101e985c call 0x101e96da */
  push32(0x101e9861u); f_101e96da();
  /* 101e9861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9864 pop ebp */
  EBP = (pop32());
  /* 101e9865 ret 4 */
  ESPCHK(0x101e984du, _esp0);
  ESP += 8; return;
}

/* FUN_10009870 @ 0x101e9870 (47 bytes, 17 insns) */
void f_101e9870(void) {
  FTRACE(0x101e9870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9870 push ecx */
  push32((uint32_t)(ECX));
  /* 101e9871 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9876 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 101e987a jb 0x101e9890 */
  if (C.cf) goto L_101e9890;
L_101e987c:;
  /* 101e987c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e9882 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e9887 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 101e9889 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e988e jae 0x101e987c */
  if (!C.cf) goto L_101e987c;
L_101e9890:;
  /* 101e9890 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e9892 mov eax, esp */
  EAX = (ESP);
  /* 101e9894 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 101e9896 mov esp, ecx */
  ESP = (ECX);
  /* 101e9898 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101e989a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 101e989d push eax */
  push32((uint32_t)(EAX));
  /* 101e989e ret  */
  ESPCHK(0x101e9870u, _esp0);
  ESP += 4; return;
}

/* FUN_10009930 @ 0x101e9930 (62 bytes, 35 insns) */
void f_101e9930(void) {
  FTRACE(0x101e9930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9930 push ebp */
  push32((uint32_t)(EBP));
  /* 101e9931 mov ebp, esp */
  EBP = (ESP);
  /* 101e9933 push esi */
  push32((uint32_t)(ESI));
  /* 101e9934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9936 push eax */
  push32((uint32_t)(EAX));
  /* 101e9937 push eax */
  push32((uint32_t)(EAX));
  /* 101e9938 push eax */
  push32((uint32_t)(EAX));
  /* 101e9939 push eax */
  push32((uint32_t)(EAX));
  /* 101e993a push eax */
  push32((uint32_t)(EAX));
  /* 101e993b push eax */
  push32((uint32_t)(EAX));
  /* 101e993c push eax */
  push32((uint32_t)(EAX));
  /* 101e993d push eax */
  push32((uint32_t)(EAX));
  /* 101e993e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e9941 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e9944:;
  /* 101e9944 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 101e9946 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101e9948 je 0x101e9951 */
  if (C.zf) goto L_101e9951;
  /* 101e994a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101e994b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x101e994b");
  /* 101e994f jmp 0x101e9944 */
  goto L_101e9944;
L_101e9951:;
  /* 101e9951 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101e9954 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101e9957 nop  */
  /* nop */
L_101e9958:;
  /* 101e9958 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e9959 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e995b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101e995d je 0x101e9966 */
  if (C.zf) goto L_101e9966;
  /* 101e995f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e9960 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x101e9960");
  /* 101e9964 jae 0x101e9958 */
  if (!C.cf) goto L_101e9958;
L_101e9966:;
  /* 101e9966 mov eax, ecx */
  EAX = (ECX);
  /* 101e9968 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e996b pop esi */
  ESI = (pop32());
  /* 101e996c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e996d ret  */
  ESPCHK(0x101e9930u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x101e9970 (56 bytes, 31 insns) */
void f_101e9970(void) {
  FTRACE(0x101e9970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9970 push ebp */
  push32((uint32_t)(EBP));
  /* 101e9971 mov ebp, esp */
  EBP = (ESP);
  /* 101e9973 push edi */
  push32((uint32_t)(EDI));
  /* 101e9974 push esi */
  push32((uint32_t)(ESI));
  /* 101e9975 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9976 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e9979 jecxz 0x101e99a1 */
  x86_unimpl("jecxz @ 0x101e9979");
  /* 101e997b mov ebx, ecx */
  EBX = (ECX);
  /* 101e997d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101e9980 mov esi, edi */
  ESI = (EDI);
  /* 101e9982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9984 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101e9986 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e9988 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e998a mov edi, esi */
  EDI = (ESI);
  /* 101e998c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e998f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 101e9991 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 101e9994 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e9996 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9999 ja 0x101e999f */
  if ((!C.cf&&!C.zf)) goto L_101e999f;
  /* 101e999b je 0x101e99a1 */
  if (C.zf) goto L_101e99a1;
  /* 101e999d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e999e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_101e999f:;
  /* 101e999f not ecx */
  ECX = (~(ECX));
L_101e99a1:;
  /* 101e99a1 mov eax, ecx */
  EAX = (ECX);
  /* 101e99a3 pop ebx */
  EBX = (pop32());
  /* 101e99a4 pop esi */
  ESI = (pop32());
  /* 101e99a5 pop edi */
  EDI = (pop32());
  /* 101e99a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e99a7 ret  */
  ESPCHK(0x101e9970u, _esp0);
  ESP += 4; return;
}

/* FUN_100099b0 @ 0x101e99b0 (58 bytes, 32 insns) */
void f_101e99b0(void) {
  FTRACE(0x101e99b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e99b0 push ebp */
  push32((uint32_t)(EBP));
  /* 101e99b1 mov ebp, esp */
  EBP = (ESP);
  /* 101e99b3 push esi */
  push32((uint32_t)(ESI));
  /* 101e99b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e99b6 push eax */
  push32((uint32_t)(EAX));
  /* 101e99b7 push eax */
  push32((uint32_t)(EAX));
  /* 101e99b8 push eax */
  push32((uint32_t)(EAX));
  /* 101e99b9 push eax */
  push32((uint32_t)(EAX));
  /* 101e99ba push eax */
  push32((uint32_t)(EAX));
  /* 101e99bb push eax */
  push32((uint32_t)(EAX));
  /* 101e99bc push eax */
  push32((uint32_t)(EAX));
  /* 101e99bd push eax */
  push32((uint32_t)(EAX));
  /* 101e99be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e99c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e99c4:;
  /* 101e99c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 101e99c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101e99c8 je 0x101e99d1 */
  if (C.zf) goto L_101e99d1;
  /* 101e99ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101e99cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x101e99cb");
  /* 101e99cf jmp 0x101e99c4 */
  goto L_101e99c4;
L_101e99d1:;
  /* 101e99d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_101e99d4:;
  /* 101e99d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e99d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101e99d8 je 0x101e99e4 */
  if (C.zf) goto L_101e99e4;
  /* 101e99da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e99db bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x101e99db");
  /* 101e99df jae 0x101e99d4 */
  if (!C.cf) goto L_101e99d4;
  /* 101e99e1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_101e99e4:;
  /* 101e99e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e99e7 pop esi */
  ESI = (pop32());
  /* 101e99e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e99e9 ret  */
  ESPCHK(0x101e99b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099ea @ 0x101e99ea (544 bytes, 177 insns) */
void f_101e99ea(void) {
  FTRACE(0x101e99eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e99ea push ebp */
  push32((uint32_t)(EBP));
  /* 101e99eb mov ebp, esp */
  EBP = (ESP);
  /* 101e99ed sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e99f0 push ebx */
  push32((uint32_t)(EBX));
  /* 101e99f1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e99f4 push esi */
  push32((uint32_t)(ESI));
  /* 101e99f5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101e99f8 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 101e99fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e99fe push edi */
  push32((uint32_t)(EDI));
  /* 101e99ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 101e9a02 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101e9a05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101e9a08 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101e9a0b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 101e9a0f mov edi, ecx */
  EDI = (ECX);
  /* 101e9a11 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 101e9a16 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 101e9a18 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9a1a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 101e9a1c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 101e9a22 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9a26 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 101e9a29 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 101e9a2c jae 0x101e9bea */
  if (!C.cf) goto L_101e9bea;
  /* 101e9a32 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9a37 jae 0x101e9bea */
  if (!C.cf) goto L_101e9bea;
  /* 101e9a3d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9a42 ja 0x101e9bea */
  if ((!C.cf&&!C.zf)) goto L_101e9bea;
  /* 101e9a48 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9a4d ja 0x101e9a53 */
  if ((!C.cf&&!C.zf)) goto L_101e9a53;
  /* 101e9a4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9a51 jmp 0x101e9a8d */
  goto L_101e9a8d;
L_101e9a53:;
  /* 101e9a53 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 101e9a56 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 101e9a5b jne 0x101e9a75 */
  if (!C.zf) goto L_101e9a75;
  /* 101e9a5d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101e9a60 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 101e9a63 jne 0x101e9a75 */
  if (!C.zf) goto L_101e9a75;
  /* 101e9a65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9a67 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9a6a jne 0x101e9a77 */
  if (!C.zf) goto L_101e9a77;
  /* 101e9a6c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9a6e jne 0x101e9a77 */
  if (!C.zf) goto L_101e9a77;
  /* 101e9a70 jmp 0x101e9be4 */
  goto L_101e9be4;
L_101e9a75:;
  /* 101e9a75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101e9a77:;
  /* 101e9a77 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9a7a jne 0x101e9a9a */
  if (!C.zf) goto L_101e9a9a;
  /* 101e9a7c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101e9a7f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 101e9a82 jne 0x101e9a9a */
  if (!C.zf) goto L_101e9a9a;
  /* 101e9a84 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9a87 jne 0x101e9a9a */
  if (!C.zf) goto L_101e9a9a;
  /* 101e9a89 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9a8b jne 0x101e9a9a */
  if (!C.zf) goto L_101e9a9a;
L_101e9a8d:;
  /* 101e9a8d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101e9a90 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 101e9a93 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101e9a95 jmp 0x101e9c05 */
  goto L_101e9c05;
L_101e9a9a:;
  /* 101e9a9a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101e9a9d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101e9aa0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101e9aa3 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_101e9aaa:;
  /* 101e9aaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101e9aad add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9aaf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9ab3 jle 0x101e9afe */
  if ((C.zf||C.sf!=C.of)) goto L_101e9afe;
  /* 101e9ab5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9ab7 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 101e9aba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101e9abd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e9ac0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101e9ac3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_101e9ac6:;
  /* 101e9ac6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e9ac9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e9acc movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 101e9acf movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 101e9ad2 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101e9ad5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e9ad8 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9adb push ecx */
  push32((uint32_t)(ECX));
  /* 101e9adc push eax */
  push32((uint32_t)(EAX));
  /* 101e9add push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 101e9adf call 0x101e89f6 */
  push32(0x101e9ae4u); f_101e89f6();
  /* 101e9ae4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e9ae9 je 0x101e9af1 */
  if (C.zf) goto L_101e9af1;
  /* 101e9aeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e9aee inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_101e9af1:;
  /* 101e9af1 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e9af5 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101e9af9 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 101e9afc jne 0x101e9ac6 */
  if (!C.zf) goto L_101e9ac6;
L_101e9afe:;
  /* 101e9afe add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e9b02 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 101e9b05 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 101e9b08 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9b0c jg 0x101e9aaa */
  if ((!C.zf&&C.sf==C.of)) goto L_101e9aaa;
  /* 101e9b0e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e9b15 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9b1a jle 0x101e9b41 */
  if ((C.zf||C.sf!=C.of)) goto L_101e9b41;
L_101e9b1c:;
  /* 101e9b1c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 101e9b20 jne 0x101e9b3a */
  if (!C.zf) goto L_101e9b3a;
  /* 101e9b22 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 101e9b25 push eax */
  push32((uint32_t)(EAX));
  /* 101e9b26 call 0x101e8a75 */
  push32(0x101e9b2bu); f_101e8a75();
  /* 101e9b2b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e9b32 pop ecx */
  ECX = (pop32());
  /* 101e9b33 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9b38 jg 0x101e9b1c */
  if ((!C.zf&&C.sf==C.of)) goto L_101e9b1c;
L_101e9b3a:;
  /* 101e9b3a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9b3f jg 0x101e9b7a */
  if ((!C.zf&&C.sf==C.of)) goto L_101e9b7a;
L_101e9b41:;
  /* 101e9b41 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e9b48 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9b4d jge 0x101e9b7a */
  if ((C.sf==C.of)) goto L_101e9b7a;
  /* 101e9b4f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 101e9b53 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e9b55 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e9b58 mov ebx, eax */
  EBX = (EAX);
L_101e9b5a:;
  /* 101e9b5a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 101e9b5e je 0x101e9b63 */
  if (C.zf) goto L_101e9b63;
  /* 101e9b60 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_101e9b63:;
  /* 101e9b63 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 101e9b66 push eax */
  push32((uint32_t)(EAX));
  /* 101e9b67 call 0x101e8aa3 */
  push32(0x101e9b6cu); f_101e8aa3();
  /* 101e9b6c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101e9b6d pop ecx */
  ECX = (pop32());
  /* 101e9b6e jne 0x101e9b5a */
  if (!C.zf) goto L_101e9b5a;
  /* 101e9b70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9b74 je 0x101e9b7a */
  if (C.zf) goto L_101e9b7a;
  /* 101e9b76 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_101e9b7a:;
  /* 101e9b7a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9b80 ja 0x101e9b91 */
  if ((!C.cf&&!C.zf)) goto L_101e9b91;
  /* 101e9b82 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 101e9b85 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e9b8a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9b8f jne 0x101e9bc6 */
  if (!C.zf) goto L_101e9bc6;
L_101e9b91:;
  /* 101e9b91 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9b95 jne 0x101e9bc3 */
  if (!C.zf) goto L_101e9bc3;
  /* 101e9b97 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 101e9b9b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9b9f jne 0x101e9bbe */
  if (!C.zf) goto L_101e9bbe;
  /* 101e9ba1 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 101e9ba5 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9bab jne 0x101e9bb8 */
  if (!C.zf) goto L_101e9bb8;
  /* 101e9bad inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101e9bb0 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 101e9bb6 jmp 0x101e9bc6 */
  goto L_101e9bc6;
L_101e9bb8:;
  /* 101e9bb8 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 101e9bbc jmp 0x101e9bc6 */
  goto L_101e9bc6;
L_101e9bbe:;
  /* 101e9bbe inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 101e9bc1 jmp 0x101e9bc6 */
  goto L_101e9bc6;
L_101e9bc3:;
  /* 101e9bc3 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_101e9bc6:;
  /* 101e9bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e9bc9 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9bcd jae 0x101e9bea */
  if (!C.cf) goto L_101e9bea;
  /* 101e9bcf mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 101e9bd3 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101e9bd5 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 101e9bd8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 101e9bdb mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 101e9bde mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 101e9be1 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_101e9be4:;
  /* 101e9be4 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 101e9be8 jmp 0x101e9c05 */
  goto L_101e9c05;
L_101e9bea:;
  /* 101e9bea neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 101e9bed sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e9bef and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101e9bf3 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 101e9bf9 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9bff and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101e9c02 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_101e9c05:;
  /* 101e9c05 pop edi */
  EDI = (pop32());
  /* 101e9c06 pop esi */
  ESI = (pop32());
  /* 101e9c07 pop ebx */
  EBX = (pop32());
  /* 101e9c08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e9c09 ret  */
  ESPCHK(0x101e99eau, _esp0);
  ESP += 4; return;
}

/* FUN_10009c0a @ 0x101e9c0a (124 bytes, 52 insns) */
void f_101e9c0a(void) {
  FTRACE(0x101e9c0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9c0a push ebp */
  push32((uint32_t)(EBP));
  /* 101e9c0b mov ebp, esp */
  EBP = (ESP);
  /* 101e9c0d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e9c10 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9c11 mov ebx, 0x101edf10 */
  EBX = (0x101edf10u);
  /* 101e9c16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e9c18 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e9c1b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9c1e je 0x101e9c83 */
  if (C.zf) goto L_101e9c83;
  /* 101e9c20 jge 0x101e9c32 */
  if ((C.sf==C.of)) goto L_101e9c32;
  /* 101e9c22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e9c25 mov ebx, 0x101ee070 */
  EBX = (0x101ee070u);
  /* 101e9c2a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e9c2c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101e9c2f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_101e9c32:;
  /* 101e9c32 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9c35 jne 0x101e9c3d */
  if (!C.zf) goto L_101e9c3d;
  /* 101e9c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e9c3a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_101e9c3d:;
  /* 101e9c3d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9c40 je 0x101e9c83 */
  if (C.zf) goto L_101e9c83;
  /* 101e9c42 push esi */
  push32((uint32_t)(ESI));
  /* 101e9c43 push edi */
  push32((uint32_t)(EDI));
L_101e9c44:;
  /* 101e9c44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e9c47 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9c4a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 101e9c4e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 101e9c51 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9c53 je 0x101e9c7c */
  if (C.zf) goto L_101e9c7c;
  /* 101e9c55 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 101e9c58 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e9c5e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 101e9c61 jb 0x101e9c6f */
  if (C.cf) goto L_101e9c6f;
  /* 101e9c63 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 101e9c66 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e9c67 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e9c68 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e9c69 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 101e9c6c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_101e9c6f:;
  /* 101e9c6f push esi */
  push32((uint32_t)(ESI));
  /* 101e9c70 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e9c73 call 0x101e99ea */
  push32(0x101e9c78u); f_101e99ea();
  /* 101e9c78 pop ecx */
  ECX = (pop32());
  /* 101e9c79 pop ecx */
  ECX = (pop32());
  /* 101e9c7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_101e9c7c:;
  /* 101e9c7c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9c7f jne 0x101e9c44 */
  if (!C.zf) goto L_101e9c44;
  /* 101e9c81 pop edi */
  EDI = (pop32());
  /* 101e9c82 pop esi */
  ESI = (pop32());
L_101e9c83:;
  /* 101e9c83 pop ebx */
  EBX = (pop32());
  /* 101e9c84 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e9c85 ret  */
  ESPCHK(0x101e9c0au, _esp0);
  ESP += 4; return;
}

/* FUN_10009c86 @ 0x101e9c86 (49 bytes, 20 insns) */
void f_101e9c86(void) {
  FTRACE(0x101e9c86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9c86 push esi */
  push32((uint32_t)(ESI));
  /* 101e9c87 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e9c8b push edi */
  push32((uint32_t)(EDI));
  /* 101e9c8c or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 101e9c8f test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 101e9c93 je 0x101e9c9b */
  if (C.zf) goto L_101e9c9b;
  /* 101e9c95 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101e9c99 jmp 0x101e9cb2 */
  goto L_101e9cb2;
L_101e9c9b:;
  /* 101e9c9b push esi */
  push32((uint32_t)(ESI));
  /* 101e9c9c call 0x101e7095 */
  push32(0x101e9ca1u); f_101e7095();
  /* 101e9ca1 push esi */
  push32((uint32_t)(ESI));
  /* 101e9ca2 call 0x101e9cb7 */
  push32(0x101e9ca7u); f_101e9cb7();
  /* 101e9ca7 push esi */
  push32((uint32_t)(ESI));
  /* 101e9ca8 mov edi, eax */
  EDI = (EAX);
  /* 101e9caa call 0x101e70e7 */
  push32(0x101e9cafu); f_101e70e7();
  /* 101e9caf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e9cb2:;
  /* 101e9cb2 mov eax, edi */
  EAX = (EDI);
  /* 101e9cb4 pop edi */
  EDI = (pop32());
  /* 101e9cb5 pop esi */
  ESI = (pop32());
  /* 101e9cb6 ret  */
  ESPCHK(0x101e9c86u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cb7 @ 0x101e9cb7 (76 bytes, 30 insns) */
void f_101e9cb7(void) {
  FTRACE(0x101e9cb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9cb7 push esi */
  push32((uint32_t)(ESI));
  /* 101e9cb8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e9cbc push edi */
  push32((uint32_t)(EDI));
  /* 101e9cbd or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 101e9cc0 test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 101e9cc4 je 0x101e9cfa */
  if (C.zf) goto L_101e9cfa;
  /* 101e9cc6 push esi */
  push32((uint32_t)(ESI));
  /* 101e9cc7 call 0x101e9571 */
  push32(0x101e9cccu); f_101e9571();
  /* 101e9ccc push esi */
  push32((uint32_t)(ESI));
  /* 101e9ccd mov edi, eax */
  EDI = (EAX);
  /* 101e9ccf call 0x101ea051 */
  push32(0x101e9cd4u); f_101ea051();
  /* 101e9cd4 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101e9cd7 call 0x101e9f71 */
  push32(0x101e9cdcu); f_101e9f71();
  /* 101e9cdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9cdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e9ce1 jge 0x101e9ce8 */
  if ((C.sf==C.of)) goto L_101e9ce8;
  /* 101e9ce3 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 101e9ce6 jmp 0x101e9cfa */
  goto L_101e9cfa;
L_101e9ce8:;
  /* 101e9ce8 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 101e9ceb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e9ced je 0x101e9cfa */
  if (C.zf) goto L_101e9cfa;
  /* 101e9cef push eax */
  push32((uint32_t)(EAX));
  /* 101e9cf0 call 0x101e747d */
  push32(0x101e9cf5u); f_101e747d();
  /* 101e9cf5 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 101e9cf9 pop ecx */
  ECX = (pop32());
L_101e9cfa:;
  /* 101e9cfa and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101e9cfe mov eax, edi */
  EAX = (EDI);
  /* 101e9d00 pop edi */
  EDI = (pop32());
  /* 101e9d01 pop esi */
  ESI = (pop32());
  /* 101e9d02 ret  */
  ESPCHK(0x101e9cb7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d03 @ 0x101e9d03 (147 bytes, 52 insns) */
void f_101e9d03(void) {
  FTRACE(0x101e9d03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9d03 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9d04 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e9d08 cmp ebx, dword ptr [0x101f27e0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101f27e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9d0e push esi */
  push32((uint32_t)(ESI));
  /* 101e9d0f push edi */
  push32((uint32_t)(EDI));
  /* 101e9d10 jae 0x101e9d84 */
  if (!C.cf) goto L_101e9d84;
  /* 101e9d12 mov eax, ebx */
  EAX = (EBX);
  /* 101e9d14 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101e9d17 lea edi, [eax*4 + 0x101f26e0] */
  EDI = ((uint32_t)(EAX*4 + 0x101f26e0));
  /* 101e9d1e mov eax, ebx */
  EAX = (EBX);
  /* 101e9d20 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e9d23 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 101e9d26 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101e9d28 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101e9d2b test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101e9d30 je 0x101e9d84 */
  if (C.zf) goto L_101e9d84;
  /* 101e9d32 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9d33 call 0x101e9441 */
  push32(0x101e9d38u); f_101e9441();
  /* 101e9d38 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101e9d3a pop ecx */
  ECX = (pop32());
  /* 101e9d3b test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101e9d40 je 0x101e9d6b */
  if (C.zf) goto L_101e9d6b;
  /* 101e9d42 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9d43 call 0x101e93ff */
  push32(0x101e9d48u); f_101e93ff();
  /* 101e9d48 pop ecx */
  ECX = (pop32());
  /* 101e9d49 push eax */
  push32((uint32_t)(EAX));
  /* 101e9d4a call dword ptr [0x101eb0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0c8))), 0x101e9d50u);
  /* 101e9d50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e9d52 jne 0x101e9d5e */
  if (!C.zf) goto L_101e9d5e;
  /* 101e9d54 call dword ptr [0x101eb03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb03c))), 0x101e9d5au);
  /* 101e9d5a mov esi, eax */
  ESI = (EAX);
  /* 101e9d5c jmp 0x101e9d60 */
  goto L_101e9d60;
L_101e9d5e:;
  /* 101e9d5e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101e9d60:;
  /* 101e9d60 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e9d62 je 0x101e9d79 */
  if (C.zf) goto L_101e9d79;
  /* 101e9d64 call 0x101e9377 */
  push32(0x101e9d69u); f_101e9377();
  /* 101e9d69 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_101e9d6b:;
  /* 101e9d6b call 0x101e936e */
  push32(0x101e9d70u); f_101e936e();
  /* 101e9d70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101e9d76 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_101e9d79:;
  /* 101e9d79 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9d7a call 0x101e94a0 */
  push32(0x101e9d7fu); f_101e94a0();
  /* 101e9d7f pop ecx */
  ECX = (pop32());
  /* 101e9d80 mov eax, esi */
  EAX = (ESI);
  /* 101e9d82 jmp 0x101e9d92 */
  goto L_101e9d92;
L_101e9d84:;
  /* 101e9d84 call 0x101e936e */
  push32(0x101e9d89u); f_101e936e();
  /* 101e9d89 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101e9d8f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101e9d92:;
  /* 101e9d92 pop edi */
  EDI = (pop32());
  /* 101e9d93 pop esi */
  ESI = (pop32());
  /* 101e9d94 pop ebx */
  EBX = (pop32());
  /* 101e9d95 ret  */
  ESPCHK(0x101e9d03u, _esp0);
  ESP += 4; return;
}

/* FUN_10009da0 @ 0x101e9da0 (208 bytes, 85 insns) */
void f_101e9da0(void) {
  FTRACE(0x101e9da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9da0 push ebp */
  push32((uint32_t)(EBP));
  /* 101e9da1 mov ebp, esp */
  EBP = (ESP);
  /* 101e9da3 push edi */
  push32((uint32_t)(EDI));
  /* 101e9da4 push esi */
  push32((uint32_t)(ESI));
  /* 101e9da5 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9da6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e9da9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101e9dac lea eax, [0x101f12ec] */
  EAX = ((uint32_t)(0x101f12ec));
  /* 101e9db2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9db6 jne 0x101e9df3 */
  if (!C.zf) goto L_101e9df3;
  /* 101e9db8 mov al, 0xff */
  AL = (0xffu);
  /* 101e9dba mov edi, edi */
  EDI = (EDI);
L_101e9dbc:;
  /* 101e9dbc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101e9dbe je 0x101e9dee */
  if (C.zf) goto L_101e9dee;
  /* 101e9dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e9dc2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e9dc3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 101e9dc5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e9dc6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9dc8 je 0x101e9dbc */
  if (C.zf) goto L_101e9dbc;
  /* 101e9dca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101e9dcc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9dce sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101e9dd0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 101e9dd3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101e9dd5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101e9dd7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 101e9dd9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101e9ddb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9ddd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101e9ddf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 101e9de2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101e9de4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101e9de6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9de8 je 0x101e9dbc */
  if (C.zf) goto L_101e9dbc;
  /* 101e9dea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101e9dec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_101e9dee:;
  /* 101e9dee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 101e9df1 jmp 0x101e9e6b */
  goto L_101e9e6b;
L_101e9df3:;
  /* 101e9df3 lock inc dword ptr [0x101f145c] */
  x86_unimpl("lock inc @ 0x101e9df3");
  /* 101e9dfa cmp dword ptr [0x101f1458], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101f1458))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9e01 jg 0x101e9e07 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e9e07;
  /* 101e9e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e9e05 jmp 0x101e9e1c */
  goto L_101e9e1c;
L_101e9e07:;
  /* 101e9e07 lock dec dword ptr [0x101f145c] */
  x86_unimpl("lock dec @ 0x101e9e07");
  /* 101e9e0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e9e10 call 0x101e737a */
  push32(0x101e9e15u); f_101e737a();
  /* 101e9e15 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_101e9e1c:;
  /* 101e9e1c mov eax, 0xff */
  EAX = (0xffu);
  /* 101e9e21 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e9e23 nop  */
  /* nop */
L_101e9e24:;
  /* 101e9e24 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101e9e26 je 0x101e9e4f */
  if (C.zf) goto L_101e9e4f;
  /* 101e9e28 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e9e2a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e9e2b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e9e2d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e9e2e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9e30 je 0x101e9e24 */
  if (C.zf) goto L_101e9e24;
  /* 101e9e32 push eax */
  push32((uint32_t)(EAX));
  /* 101e9e33 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9e34 call 0x101e614c */
  push32(0x101e9e39u); f_101e614c();
  /* 101e9e39 mov ebx, eax */
  EBX = (EAX);
  /* 101e9e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9e3e call 0x101e614c */
  push32(0x101e9e43u); f_101e614c();
  /* 101e9e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9e46 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9e48 je 0x101e9e24 */
  if (C.zf) goto L_101e9e24;
  /* 101e9e4a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e9e4c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_101e9e4f:;
  /* 101e9e4f mov ebx, eax */
  EBX = (EAX);
  /* 101e9e51 pop eax */
  EAX = (pop32());
  /* 101e9e52 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9e54 jne 0x101e9e5f */
  if (!C.zf) goto L_101e9e5f;
  /* 101e9e56 lock dec dword ptr [0x101f145c] */
  x86_unimpl("lock dec @ 0x101e9e56");
  /* 101e9e5d jmp 0x101e9e69 */
  goto L_101e9e69;
L_101e9e5f:;
  /* 101e9e5f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e9e61 call 0x101e73db */
  push32(0x101e9e66u); f_101e73db();
  /* 101e9e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e9e69:;
  /* 101e9e69 mov eax, ebx */
  EAX = (EBX);
L_101e9e6b:;
  /* 101e9e6b pop ebx */
  EBX = (pop32());
  /* 101e9e6c pop esi */
  ESI = (pop32());
  /* 101e9e6d pop edi */
  EDI = (pop32());
  /* 101e9e6e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e9e6f ret  */
  ESPCHK(0x101e9da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e70 @ 0x101e9e70 (257 bytes, 103 insns) */
void f_101e9e70(void) {
  FTRACE(0x101e9e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9e70 push ebp */
  push32((uint32_t)(EBP));
  /* 101e9e71 mov ebp, esp */
  EBP = (ESP);
  /* 101e9e73 push edi */
  push32((uint32_t)(EDI));
  /* 101e9e74 push esi */
  push32((uint32_t)(ESI));
  /* 101e9e75 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9e76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e9e79 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e9e7b je 0x101e9f6a */
  if (C.zf) goto L_101e9f6a;
  /* 101e9e81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101e9e84 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e9e87 lea eax, [0x101f12ec] */
  EAX = ((uint32_t)(0x101f12ec));
  /* 101e9e8d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9e91 jne 0x101e9ee1 */
  if (!C.zf) goto L_101e9ee1;
  /* 101e9e93 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 101e9e95 mov bl, 0x5a */
  BL = (0x5au);
  /* 101e9e97 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 101e9e99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e9e9c:;
  /* 101e9e9c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 101e9e9e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 101e9ea0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 101e9ea2 je 0x101e9ec5 */
  if (C.zf) goto L_101e9ec5;
  /* 101e9ea4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101e9ea6 je 0x101e9ec5 */
  if (C.zf) goto L_101e9ec5;
  /* 101e9ea8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e9ea9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e9eaa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9eac jb 0x101e9eb4 */
  if (C.cf) goto L_101e9eb4;
  /* 101e9eae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9eb0 ja 0x101e9eb4 */
  if ((!C.cf&&!C.zf)) goto L_101e9eb4;
  /* 101e9eb2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_101e9eb4:;
  /* 101e9eb4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9eb6 jb 0x101e9ebe */
  if (C.cf) goto L_101e9ebe;
  /* 101e9eb8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9eba ja 0x101e9ebe */
  if ((!C.cf&&!C.zf)) goto L_101e9ebe;
  /* 101e9ebc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_101e9ebe:;
  /* 101e9ebe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9ec0 jne 0x101e9ecf */
  if (!C.zf) goto L_101e9ecf;
  /* 101e9ec2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e9ec3 jne 0x101e9e9c */
  if (!C.zf) goto L_101e9e9c;
L_101e9ec5:;
  /* 101e9ec5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e9ec7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e9ec9 je 0x101e9f6a */
  if (C.zf) goto L_101e9f6a;
L_101e9ecf:;
  /* 101e9ecf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 101e9ed4 jb 0x101e9f6a */
  if (C.cf) goto L_101e9f6a;
  /* 101e9eda neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e9edc jmp 0x101e9f6a */
  goto L_101e9f6a;
L_101e9ee1:;
  /* 101e9ee1 lock inc dword ptr [0x101f145c] */
  x86_unimpl("lock inc @ 0x101e9ee1");
  /* 101e9ee8 cmp dword ptr [0x101f1458], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101f1458))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9eef jg 0x101e9ef5 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e9ef5;
  /* 101e9ef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e9ef3 jmp 0x101e9f0e */
  goto L_101e9f0e;
L_101e9ef5:;
  /* 101e9ef5 lock dec dword ptr [0x101f145c] */
  x86_unimpl("lock dec @ 0x101e9ef5");
  /* 101e9efc mov ebx, ecx */
  EBX = (ECX);
  /* 101e9efe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e9f00 call 0x101e737a */
  push32(0x101e9f05u); f_101e737a();
  /* 101e9f05 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 101e9f0c mov ecx, ebx */
  ECX = (EBX);
L_101e9f0e:;
  /* 101e9f0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9f10 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e9f12 mov edi, edi */
  EDI = (EDI);
L_101e9f14:;
  /* 101e9f14 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e9f16 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9f18 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e9f1a je 0x101e9f3f */
  if (C.zf) goto L_101e9f3f;
  /* 101e9f1c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e9f1e je 0x101e9f3f */
  if (C.zf) goto L_101e9f3f;
  /* 101e9f20 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e9f21 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e9f22 push ecx */
  push32((uint32_t)(ECX));
  /* 101e9f23 push eax */
  push32((uint32_t)(EAX));
  /* 101e9f24 push ebx */
  push32((uint32_t)(EBX));
  /* 101e9f25 call 0x101e614c */
  push32(0x101e9f2au); f_101e614c();
  /* 101e9f2a mov ebx, eax */
  EBX = (EAX);
  /* 101e9f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9f2f call 0x101e614c */
  push32(0x101e9f34u); f_101e614c();
  /* 101e9f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9f37 pop ecx */
  ECX = (pop32());
  /* 101e9f38 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9f3a jne 0x101e9f45 */
  if (!C.zf) goto L_101e9f45;
  /* 101e9f3c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e9f3d jne 0x101e9f14 */
  if (!C.zf) goto L_101e9f14;
L_101e9f3f:;
  /* 101e9f3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e9f41 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9f43 je 0x101e9f4e */
  if (C.zf) goto L_101e9f4e;
L_101e9f45:;
  /* 101e9f45 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 101e9f4a jb 0x101e9f4e */
  if (C.cf) goto L_101e9f4e;
  /* 101e9f4c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_101e9f4e:;
  /* 101e9f4e pop eax */
  EAX = (pop32());
  /* 101e9f4f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e9f51 jne 0x101e9f5c */
  if (!C.zf) goto L_101e9f5c;
  /* 101e9f53 lock dec dword ptr [0x101f145c] */
  x86_unimpl("lock dec @ 0x101e9f53");
  /* 101e9f5a jmp 0x101e9f6a */
  goto L_101e9f6a;
L_101e9f5c:;
  /* 101e9f5c mov ebx, ecx */
  EBX = (ECX);
  /* 101e9f5e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e9f60 call 0x101e73db */
  push32(0x101e9f65u); f_101e73db();
  /* 101e9f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9f68 mov ecx, ebx */
  ECX = (EBX);
L_101e9f6a:;
  /* 101e9f6a mov eax, ecx */
  EAX = (ECX);
  /* 101e9f6c pop ebx */
  EBX = (pop32());
  /* 101e9f6d pop esi */
  ESI = (pop32());
  /* 101e9f6e pop edi */
  EDI = (pop32());
  /* 101e9f6f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e9f70 ret  */
  ESPCHK(0x101e9e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f71 @ 0x101e9f71 (93 bytes, 32 insns) */
void f_101e9f71(void) {
  FTRACE(0x101e9f71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9f71 push esi */
  push32((uint32_t)(ESI));
  /* 101e9f72 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e9f76 cmp esi, dword ptr [0x101f27e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101f27e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9f7c jae 0x101e9fb6 */
  if (!C.cf) goto L_101e9fb6;
  /* 101e9f7e mov ecx, esi */
  ECX = (ESI);
  /* 101e9f80 mov eax, esi */
  EAX = (ESI);
  /* 101e9f82 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101e9f85 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e9f88 mov ecx, dword ptr [ecx*4 + 0x101f26e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101f26e0)));
  /* 101e9f8f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101e9f92 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101e9f97 je 0x101e9fb6 */
  if (C.zf) goto L_101e9fb6;
  /* 101e9f99 push edi */
  push32((uint32_t)(EDI));
  /* 101e9f9a push esi */
  push32((uint32_t)(ESI));
  /* 101e9f9b call 0x101e9441 */
  push32(0x101e9fa0u); f_101e9441();
  /* 101e9fa0 push esi */
  push32((uint32_t)(ESI));
  /* 101e9fa1 call 0x101e9fce */
  push32(0x101e9fa6u); f_101e9fce();
  /* 101e9fa6 push esi */
  push32((uint32_t)(ESI));
  /* 101e9fa7 mov edi, eax */
  EDI = (EAX);
  /* 101e9fa9 call 0x101e94a0 */
  push32(0x101e9faeu); f_101e94a0();
  /* 101e9fae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e9fb1 mov eax, edi */
  EAX = (EDI);
  /* 101e9fb3 pop edi */
  EDI = (pop32());
  /* 101e9fb4 pop esi */
  ESI = (pop32());
  /* 101e9fb5 ret  */
  ESPCHK(0x101e9f71u, _esp0);
  ESP += 4; return;
L_101e9fb6:;
  /* 101e9fb6 call 0x101e936e */
  push32(0x101e9fbbu); f_101e936e();
  /* 101e9fbb mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101e9fc1 call 0x101e9377 */
  push32(0x101e9fc6u); f_101e9377();
  /* 101e9fc6 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101e9fc9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e9fcc pop esi */
  ESI = (pop32());
  /* 101e9fcd ret  */
  ESPCHK(0x101e9f71u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fce @ 0x101e9fce (131 bytes, 52 insns) */
void f_101e9fce(void) {
  FTRACE(0x101e9fceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e9fce push esi */
  push32((uint32_t)(ESI));
  /* 101e9fcf mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e9fd3 push edi */
  push32((uint32_t)(EDI));
  /* 101e9fd4 push esi */
  push32((uint32_t)(ESI));
  /* 101e9fd5 call 0x101e93ff */
  push32(0x101e9fdau); f_101e93ff();
  /* 101e9fda cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9fdd pop ecx */
  ECX = (pop32());
  /* 101e9fde je 0x101ea01c */
  if (C.zf) goto L_101ea01c;
  /* 101e9fe0 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9fe3 je 0x101e9fea */
  if (C.zf) goto L_101e9fea;
  /* 101e9fe5 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9fe8 jne 0x101ea000 */
  if (!C.zf) goto L_101ea000;
L_101e9fea:;
  /* 101e9fea push 2 */
  push32((uint32_t)(0x2u));
  /* 101e9fec call 0x101e93ff */
  push32(0x101e9ff1u); f_101e93ff();
  /* 101e9ff1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e9ff3 mov edi, eax */
  EDI = (EAX);
  /* 101e9ff5 call 0x101e93ff */
  push32(0x101e9ffau); f_101e93ff();
  /* 101e9ffa pop ecx */
  ECX = (pop32());
  /* 101e9ffb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e9ffd pop ecx */
  ECX = (pop32());
  /* 101e9ffe je 0x101ea01c */
  if (C.zf) goto L_101ea01c;
L_101ea000:;
  /* 101ea000 push esi */
  push32((uint32_t)(ESI));
  /* 101ea001 call 0x101e93ff */
  push32(0x101ea006u); f_101e93ff();
  /* 101ea006 pop ecx */
  ECX = (pop32());
  /* 101ea007 push eax */
  push32((uint32_t)(EAX));
  /* 101ea008 call dword ptr [0x101eb0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0cc))), 0x101ea00eu);
  /* 101ea00e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ea010 jne 0x101ea01c */
  if (!C.zf) goto L_101ea01c;
  /* 101ea012 call dword ptr [0x101eb03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb03c))), 0x101ea018u);
  /* 101ea018 mov edi, eax */
  EDI = (EAX);
  /* 101ea01a jmp 0x101ea01e */
  goto L_101ea01e;
L_101ea01c:;
  /* 101ea01c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_101ea01e:;
  /* 101ea01e push esi */
  push32((uint32_t)(ESI));
  /* 101ea01f call 0x101e9380 */
  push32(0x101ea024u); f_101e9380();
  /* 101ea024 mov eax, esi */
  EAX = (ESI);
  /* 101ea026 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 101ea029 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101ea02c pop ecx */
  ECX = (pop32());
  /* 101ea02d mov eax, dword ptr [eax*4 + 0x101f26e0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x101f26e0)));
  /* 101ea034 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 101ea037 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 101ea03c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101ea03e je 0x101ea04c */
  if (C.zf) goto L_101ea04c;
  /* 101ea040 push edi */
  push32((uint32_t)(EDI));
  /* 101ea041 call 0x101e92fb */
  push32(0x101ea046u); f_101e92fb();
  /* 101ea046 pop ecx */
  ECX = (pop32());
  /* 101ea047 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101ea04a jmp 0x101ea04e */
  goto L_101ea04e;
L_101ea04c:;
  /* 101ea04c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101ea04e:;
  /* 101ea04e pop edi */
  EDI = (pop32());
  /* 101ea04f pop esi */
  ESI = (pop32());
  /* 101ea050 ret  */
  ESPCHK(0x101e9fceu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a051 @ 0x101ea051 (43 bytes, 17 insns) */
void f_101ea051(void) {
  FTRACE(0x101ea051u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ea051 push esi */
  push32((uint32_t)(ESI));
  /* 101ea052 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101ea056 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101ea059 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 101ea05b je 0x101ea07a */
  if (C.zf) goto L_101ea07a;
  /* 101ea05d test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 101ea05f je 0x101ea07a */
  if (C.zf) goto L_101ea07a;
  /* 101ea061 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 101ea064 call 0x101e747d */
  push32(0x101ea069u); f_101e747d();
  /* 101ea069 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 101ea06f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ea071 pop ecx */
  ECX = (pop32());
  /* 101ea072 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101ea074 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101ea077 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_101ea07a:;
  /* 101ea07a pop esi */
  ESI = (pop32());
  /* 101ea07b ret  */
  ESPCHK(0x101ea051u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x101ea18c (6 bytes, 1 insns) */
void f_101ea18c(void) {
  FTRACE(0x101ea18cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ea18c jmp dword ptr [0x101eb0c4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101eb0c4)))); return;
}

