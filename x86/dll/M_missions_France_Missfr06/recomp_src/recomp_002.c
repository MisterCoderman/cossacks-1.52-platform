#include "recomp.h"

/* FUN_10010480 @ 0x106f0480 (289 bytes, 97 insns) */
void f_106f0480(void) {
  FTRACE(0x106f0480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f0480 push ebp */
  push32((uint32_t)(EBP));
  /* 106f0481 mov ebp, esp */
  EBP = (ESP);
  /* 106f0483 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0486 push esi */
  push32((uint32_t)(ESI));
  /* 106f0487 mov eax, dword ptr [0x1070ec98] */
  EAX = (r32((uint32_t)(0x1070ec98)));
  /* 106f048c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f048f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106f0496 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106f049d jmp 0x106f04a8 */
  goto L_106f04a8;
L_106f049f:;
  /* 106f049f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f04a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f04a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106f04a8:;
  /* 106f04a8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f04ac jae 0x106f04e1 */
  if (!C.cf) goto L_106f04e1;
  /* 106f04ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f04b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f04b4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106f04b7 push ecx */
  push32((uint32_t)(ECX));
  /* 106f04b8 call 0x106e6560 */
  push32(0x106f04bdu); f_106e6560();
  /* 106f04bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f04c0 mov esi, eax */
  ESI = (EAX);
  /* 106f04c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f04c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f04c8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 106f04cc push ecx */
  push32((uint32_t)(ECX));
  /* 106f04cd call 0x106e6560 */
  push32(0x106f04d2u); f_106e6560();
  /* 106f04d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f04d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f04d8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106f04dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106f04df jmp 0x106f049f */
  goto L_106f049f;
L_106f04e1:;
  /* 106f04e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f04e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f04e7 push eax */
  push32((uint32_t)(EAX));
  /* 106f04e8 call 0x106e3710 */
  push32(0x106f04edu); f_106e3710();
  /* 106f04ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f04f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f04f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f04f7 je 0x106f0599 */
  if (C.zf) goto L_106f0599;
  /* 106f04fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f0500 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106f0503 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106f050a jmp 0x106f0515 */
  goto L_106f0515;
L_106f050c:;
  /* 106f050c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f050f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0512 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106f0515:;
  /* 106f0515 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0519 jae 0x106f058a */
  if (!C.cf) goto L_106f058a;
  /* 106f051b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f051e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 106f0521 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0524 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0527 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106f052a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f052d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0530 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106f0533 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0534 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0537 push edx */
  push32((uint32_t)(EDX));
  /* 106f0538 call 0x106e66e0 */
  push32(0x106f053du); f_106e66e0();
  /* 106f053d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0540 push eax */
  push32((uint32_t)(EAX));
  /* 106f0541 call 0x106e6560 */
  push32(0x106f0546u); f_106e6560();
  /* 106f0546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0549 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f054c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f054e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106f0551 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0554 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 106f0557 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f055a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f055d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106f0560 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0563 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0566 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 106f056a push eax */
  push32((uint32_t)(EAX));
  /* 106f056b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f056e push ecx */
  push32((uint32_t)(ECX));
  /* 106f056f call 0x106e66e0 */
  push32(0x106f0574u); f_106e66e0();
  /* 106f0574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0577 push eax */
  push32((uint32_t)(EAX));
  /* 106f0578 call 0x106e6560 */
  push32(0x106f057du); f_106e6560();
  /* 106f057d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0580 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0583 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0585 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106f0588 jmp 0x106f050c */
  goto L_106f050c;
L_106f058a:;
  /* 106f058a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f058d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106f0590 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0593 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0596 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_106f0599:;
  /* 106f0599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f059c pop esi */
  ESI = (pop32());
  /* 106f059d mov esp, ebp */
  ESP = (EBP);
  /* 106f059f pop ebp */
  EBP = (pop32());
  /* 106f05a0 ret  */
  ESPCHK(0x106f0480u, _esp0);
  ESP += 4; return;
}

/* FUN_100105b0 @ 0x106f05b0 (291 bytes, 97 insns) */
void f_106f05b0(void) {
  FTRACE(0x106f05b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f05b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f05b1 mov ebp, esp */
  EBP = (ESP);
  /* 106f05b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f05b6 push esi */
  push32((uint32_t)(ESI));
  /* 106f05b7 mov eax, dword ptr [0x1070ec98] */
  EAX = (r32((uint32_t)(0x1070ec98)));
  /* 106f05bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f05bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106f05c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106f05cd jmp 0x106f05d8 */
  goto L_106f05d8;
L_106f05cf:;
  /* 106f05cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f05d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f05d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106f05d8:;
  /* 106f05d8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f05dc jae 0x106f0612 */
  if (!C.cf) goto L_106f0612;
  /* 106f05de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f05e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f05e4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 106f05e8 push ecx */
  push32((uint32_t)(ECX));
  /* 106f05e9 call 0x106e6560 */
  push32(0x106f05eeu); f_106e6560();
  /* 106f05ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f05f1 mov esi, eax */
  ESI = (EAX);
  /* 106f05f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f05f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f05f9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 106f05fd push ecx */
  push32((uint32_t)(ECX));
  /* 106f05fe call 0x106e6560 */
  push32(0x106f0603u); f_106e6560();
  /* 106f0603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0606 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0609 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106f060d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106f0610 jmp 0x106f05cf */
  goto L_106f05cf;
L_106f0612:;
  /* 106f0612 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f0615 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0618 push eax */
  push32((uint32_t)(EAX));
  /* 106f0619 call 0x106e3710 */
  push32(0x106f061eu); f_106e3710();
  /* 106f061e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0621 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f0624 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0628 je 0x106f06cb */
  if (C.zf) goto L_106f06cb;
  /* 106f062e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f0631 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106f0634 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106f063b jmp 0x106f0646 */
  goto L_106f0646;
L_106f063d:;
  /* 106f063d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0640 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0643 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106f0646:;
  /* 106f0646 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f064a jae 0x106f06bc */
  if (!C.cf) goto L_106f06bc;
  /* 106f064c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f064f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 106f0652 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0655 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0658 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106f065b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f065e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0661 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 106f0665 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0666 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0669 push edx */
  push32((uint32_t)(EDX));
  /* 106f066a call 0x106e66e0 */
  push32(0x106f066fu); f_106e66e0();
  /* 106f066f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0672 push eax */
  push32((uint32_t)(EAX));
  /* 106f0673 call 0x106e6560 */
  push32(0x106f0678u); f_106e6560();
  /* 106f0678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f067b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f067e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0680 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106f0683 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0686 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 106f0689 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f068c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f068f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106f0692 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0695 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0698 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 106f069c push eax */
  push32((uint32_t)(EAX));
  /* 106f069d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f06a0 push ecx */
  push32((uint32_t)(ECX));
  /* 106f06a1 call 0x106e66e0 */
  push32(0x106f06a6u); f_106e66e0();
  /* 106f06a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f06a9 push eax */
  push32((uint32_t)(EAX));
  /* 106f06aa call 0x106e6560 */
  push32(0x106f06afu); f_106e6560();
  /* 106f06af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f06b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f06b5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f06b7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106f06ba jmp 0x106f063d */
  goto L_106f063d;
L_106f06bc:;
  /* 106f06bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f06bf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106f06c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f06c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f06c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_106f06cb:;
  /* 106f06cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f06ce pop esi */
  ESI = (pop32());
  /* 106f06cf mov esp, ebp */
  ESP = (EBP);
  /* 106f06d1 pop ebp */
  EBP = (pop32());
  /* 106f06d2 ret  */
  ESPCHK(0x106f05b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x106f06e0 (878 bytes, 273 insns) */
void f_106f06e0(void) {
  FTRACE(0x106f06e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f06e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f06e1 mov ebp, esp */
  EBP = (ESP);
  /* 106f06e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f06e6 push esi */
  push32((uint32_t)(ESI));
  /* 106f06e7 mov eax, dword ptr [0x1070ec98] */
  EAX = (r32((uint32_t)(0x1070ec98)));
  /* 106f06ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f06ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106f06f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106f06fd jmp 0x106f0708 */
  goto L_106f0708;
L_106f06ff:;
  /* 106f06ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0702 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0705 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106f0708:;
  /* 106f0708 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f070c jae 0x106f0741 */
  if (!C.cf) goto L_106f0741;
  /* 106f070e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0711 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0714 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106f0717 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0718 call 0x106e6560 */
  push32(0x106f071du); f_106e6560();
  /* 106f071d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0720 mov esi, eax */
  ESI = (EAX);
  /* 106f0722 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0725 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0728 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 106f072c push ecx */
  push32((uint32_t)(ECX));
  /* 106f072d call 0x106e6560 */
  push32(0x106f0732u); f_106e6560();
  /* 106f0732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0735 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0738 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106f073c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106f073f jmp 0x106f06ff */
  goto L_106f06ff;
L_106f0741:;
  /* 106f0741 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106f0748 jmp 0x106f0753 */
  goto L_106f0753;
L_106f074a:;
  /* 106f074a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f074d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0750 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106f0753:;
  /* 106f0753 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0757 jae 0x106f078d */
  if (!C.cf) goto L_106f078d;
  /* 106f0759 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f075c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f075f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 106f0763 push eax */
  push32((uint32_t)(EAX));
  /* 106f0764 call 0x106e6560 */
  push32(0x106f0769u); f_106e6560();
  /* 106f0769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f076c mov esi, eax */
  ESI = (EAX);
  /* 106f076e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0771 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0774 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 106f0778 push eax */
  push32((uint32_t)(EAX));
  /* 106f0779 call 0x106e6560 */
  push32(0x106f077eu); f_106e6560();
  /* 106f077e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0781 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0784 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106f0788 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106f078b jmp 0x106f074a */
  goto L_106f074a;
L_106f078d:;
  /* 106f078d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0790 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 106f0796 push eax */
  push32((uint32_t)(EAX));
  /* 106f0797 call 0x106e6560 */
  push32(0x106f079cu); f_106e6560();
  /* 106f079c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f079f mov esi, eax */
  ESI = (EAX);
  /* 106f07a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f07a4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 106f07aa push edx */
  push32((uint32_t)(EDX));
  /* 106f07ab call 0x106e6560 */
  push32(0x106f07b0u); f_106e6560();
  /* 106f07b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f07b3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f07b6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106f07ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f07bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f07c0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 106f07c6 push edx */
  push32((uint32_t)(EDX));
  /* 106f07c7 call 0x106e6560 */
  push32(0x106f07ccu); f_106e6560();
  /* 106f07cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f07cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f07d2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106f07d6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106f07d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f07dc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 106f07e2 push ecx */
  push32((uint32_t)(ECX));
  /* 106f07e3 call 0x106e6560 */
  push32(0x106f07e8u); f_106e6560();
  /* 106f07e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f07eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f07ee lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106f07f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f07f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f07f8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 106f07fe push edx */
  push32((uint32_t)(EDX));
  /* 106f07ff call 0x106e6560 */
  push32(0x106f0804u); f_106e6560();
  /* 106f0804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0807 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f080a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106f080e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106f0811 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f0814 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0819 push eax */
  push32((uint32_t)(EAX));
  /* 106f081a call 0x106e3710 */
  push32(0x106f081fu); f_106e3710();
  /* 106f081f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0822 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f0825 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0829 je 0x106f0a46 */
  if (C.zf) goto L_106f0a46;
  /* 106f082f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f0832 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106f0835 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f0838 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f083e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106f0841 push 0xac */
  push32((uint32_t)(0xacu));
  /* 106f0846 mov eax, dword ptr [0x1070ec98] */
  EAX = (r32((uint32_t)(0x1070ec98)));
  /* 106f084b push eax */
  push32((uint32_t)(EAX));
  /* 106f084c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f084f push ecx */
  push32((uint32_t)(ECX));
  /* 106f0850 call 0x106ea010 */
  push32(0x106f0855u); f_106ea010();
  /* 106f0855 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0858 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106f085f jmp 0x106f086a */
  goto L_106f086a;
L_106f0861:;
  /* 106f0861 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0864 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0867 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106f086a:;
  /* 106f086a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f086e jae 0x106f08de */
  if (!C.cf) goto L_106f08de;
  /* 106f0870 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0873 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f0876 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0879 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 106f087c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f087f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0882 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106f0885 push edx */
  push32((uint32_t)(EDX));
  /* 106f0886 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0889 push eax */
  push32((uint32_t)(EAX));
  /* 106f088a call 0x106e66e0 */
  push32(0x106f088fu); f_106e66e0();
  /* 106f088f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0892 push eax */
  push32((uint32_t)(EAX));
  /* 106f0893 call 0x106e6560 */
  push32(0x106f0898u); f_106e6560();
  /* 106f0898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f089b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f089e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106f08a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106f08a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f08a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f08ab mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f08ae mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 106f08b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f08b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f08b8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 106f08bc push edx */
  push32((uint32_t)(EDX));
  /* 106f08bd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f08c0 push eax */
  push32((uint32_t)(EAX));
  /* 106f08c1 call 0x106e66e0 */
  push32(0x106f08c6u); f_106e66e0();
  /* 106f08c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f08c9 push eax */
  push32((uint32_t)(EAX));
  /* 106f08ca call 0x106e6560 */
  push32(0x106f08cfu); f_106e6560();
  /* 106f08cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f08d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f08d5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106f08d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106f08dc jmp 0x106f0861 */
  goto L_106f0861;
L_106f08de:;
  /* 106f08de mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106f08e5 jmp 0x106f08f0 */
  goto L_106f08f0;
L_106f08e7:;
  /* 106f08e7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f08ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f08ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106f08f0:;
  /* 106f08f0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f08f4 jae 0x106f0966 */
  if (!C.cf) goto L_106f0966;
  /* 106f08f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f08f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f08fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f08ff mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 106f0903 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0906 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0909 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 106f090d push eax */
  push32((uint32_t)(EAX));
  /* 106f090e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0911 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0912 call 0x106e66e0 */
  push32(0x106f0917u); f_106e66e0();
  /* 106f0917 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f091a push eax */
  push32((uint32_t)(EAX));
  /* 106f091b call 0x106e6560 */
  push32(0x106f0920u); f_106e6560();
  /* 106f0920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0923 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0926 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106f092a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106f092d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0930 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f0933 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0936 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 106f093a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f093d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0940 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 106f0944 push eax */
  push32((uint32_t)(EAX));
  /* 106f0945 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0948 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0949 call 0x106e66e0 */
  push32(0x106f094eu); f_106e66e0();
  /* 106f094e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0951 push eax */
  push32((uint32_t)(EAX));
  /* 106f0952 call 0x106e6560 */
  push32(0x106f0957u); f_106e6560();
  /* 106f0957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f095a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f095d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106f0961 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106f0964 jmp 0x106f08e7 */
  goto L_106f08e7;
L_106f0966:;
  /* 106f0966 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f0969 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f096c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 106f0972 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0975 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 106f097b push ecx */
  push32((uint32_t)(ECX));
  /* 106f097c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f097f push edx */
  push32((uint32_t)(EDX));
  /* 106f0980 call 0x106e66e0 */
  push32(0x106f0985u); f_106e66e0();
  /* 106f0985 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0988 push eax */
  push32((uint32_t)(EAX));
  /* 106f0989 call 0x106e6560 */
  push32(0x106f098eu); f_106e6560();
  /* 106f098e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0991 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0994 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106f0998 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106f099b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f099e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f09a1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 106f09a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f09aa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 106f09b0 push eax */
  push32((uint32_t)(EAX));
  /* 106f09b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f09b4 push ecx */
  push32((uint32_t)(ECX));
  /* 106f09b5 call 0x106e66e0 */
  push32(0x106f09bau); f_106e66e0();
  /* 106f09ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f09bd push eax */
  push32((uint32_t)(EAX));
  /* 106f09be call 0x106e6560 */
  push32(0x106f09c3u); f_106e6560();
  /* 106f09c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f09c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f09c9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106f09cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106f09d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f09d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f09d6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 106f09dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f09df mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 106f09e5 push ecx */
  push32((uint32_t)(ECX));
  /* 106f09e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f09e9 push edx */
  push32((uint32_t)(EDX));
  /* 106f09ea call 0x106e66e0 */
  push32(0x106f09efu); f_106e66e0();
  /* 106f09ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f09f2 push eax */
  push32((uint32_t)(EAX));
  /* 106f09f3 call 0x106e6560 */
  push32(0x106f09f8u); f_106e6560();
  /* 106f09f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f09fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f09fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106f0a02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106f0a05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f0a08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0a0b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 106f0a11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0a14 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 106f0a1a push eax */
  push32((uint32_t)(EAX));
  /* 106f0a1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0a1e push ecx */
  push32((uint32_t)(ECX));
  /* 106f0a1f call 0x106e66e0 */
  push32(0x106f0a24u); f_106e66e0();
  /* 106f0a24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0a27 push eax */
  push32((uint32_t)(EAX));
  /* 106f0a28 call 0x106e6560 */
  push32(0x106f0a2du); f_106e6560();
  /* 106f0a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0a30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0a33 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106f0a37 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106f0a3a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f0a3d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f0a40 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_106f0a46:;
  /* 106f0a46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f0a49 pop esi */
  ESI = (pop32());
  /* 106f0a4a mov esp, ebp */
  ESP = (EBP);
  /* 106f0a4c pop ebp */
  EBP = (pop32());
  /* 106f0a4d ret  */
  ESPCHK(0x106f06e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a50 @ 0x106f0a50 (31 bytes, 15 insns) */
void f_106f0a50(void) {
  FTRACE(0x106f0a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f0a50 push ebp */
  push32((uint32_t)(EBP));
  /* 106f0a51 mov ebp, esp */
  EBP = (ESP);
  /* 106f0a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f0a55 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0a58 push eax */
  push32((uint32_t)(EAX));
  /* 106f0a59 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0a5c push ecx */
  push32((uint32_t)(ECX));
  /* 106f0a5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0a60 push edx */
  push32((uint32_t)(EDX));
  /* 106f0a61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0a64 push eax */
  push32((uint32_t)(EAX));
  /* 106f0a65 call 0x106f0a70 */
  push32(0x106f0a6au); f_106f0a70();
  /* 106f0a6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0a6d pop ebp */
  EBP = (pop32());
  /* 106f0a6e ret  */
  ESPCHK(0x106f0a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a70 @ 0x106f0a70 (393 bytes, 123 insns) */
void f_106f0a70(void) {
  FTRACE(0x106f0a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f0a70 push ebp */
  push32((uint32_t)(EBP));
  /* 106f0a71 mov ebp, esp */
  EBP = (ESP);
  /* 106f0a73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0a76 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0a7a jne 0x106f0a86 */
  if (!C.zf) goto L_106f0a86;
  /* 106f0a7c mov eax, dword ptr [0x1070ec98] */
  EAX = (r32((uint32_t)(0x1070ec98)));
  /* 106f0a81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106f0a84 jmp 0x106f0a8c */
  goto L_106f0a8c;
L_106f0a86:;
  /* 106f0a86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0a89 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106f0a8c:;
  /* 106f0a8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f0a8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106f0a92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0a95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f0a98 push 0x1070f84c */
  push32((uint32_t)(0x1070f84cu));
  /* 106f0a9d call dword ptr [0x107122e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122e0))), 0x106f0aa3u);
  /* 106f0aa3 cmp dword ptr [0x1070f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0aaa je 0x106f0aca */
  if (C.zf) goto L_106f0aca;
  /* 106f0aac push 0x1070f84c */
  push32((uint32_t)(0x1070f84cu));
  /* 106f0ab1 call dword ptr [0x107122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d0))), 0x106f0ab7u);
  /* 106f0ab7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106f0ab9 call 0x106e7130 */
  push32(0x106f0abeu); f_106e7130();
  /* 106f0abe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0ac1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 106f0ac8 jmp 0x106f0ad1 */
  goto L_106f0ad1;
L_106f0aca:;
  /* 106f0aca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106f0ad1:;
  /* 106f0ad1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0ad5 jbe 0x106f0bc2 */
  if ((C.cf||C.zf)) goto L_106f0bc2;
  /* 106f0adb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0ade mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106f0ae0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 106f0ae3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f0ae7 je 0x106f0af1 */
  if (C.zf) goto L_106f0af1;
  /* 106f0ae9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f0aed je 0x106f0af6 */
  if (C.zf) goto L_106f0af6;
  /* 106f0aef jmp 0x106f0b50 */
  goto L_106f0b50;
L_106f0af1:;
  /* 106f0af1 jmp 0x106f0bc2 */
  goto L_106f0bc2;
L_106f0af6:;
  /* 106f0af6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0af9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0afc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 106f0aff mov dword ptr [0x1070f828], 0 */
  w32((uint32_t)(0x1070f828), (0x0u));
  /* 106f0b09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0b0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106f0b0f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0b12 jne 0x106f0b27 */
  if (!C.zf) goto L_106f0b27;
  /* 106f0b14 mov dword ptr [0x1070f828], 1 */
  w32((uint32_t)(0x1070f828), (0x1u));
  /* 106f0b1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0b21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0b24 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_106f0b27:;
  /* 106f0b27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f0b2a push ecx */
  push32((uint32_t)(ECX));
  /* 106f0b2b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 106f0b2e push edx */
  push32((uint32_t)(EDX));
  /* 106f0b2f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 106f0b32 push eax */
  push32((uint32_t)(EAX));
  /* 106f0b33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0b36 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0b37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0b3a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f0b3c push eax */
  push32((uint32_t)(EAX));
  /* 106f0b3d call 0x106f0c00 */
  push32(0x106f0b42u); f_106f0c00();
  /* 106f0b42 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0b45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0b48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0b4b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106f0b4e jmp 0x106f0bbd */
  goto L_106f0bbd;
L_106f0b50:;
  /* 106f0b50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0b53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f0b55 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f0b57 mov ecx, dword ptr [0x1070dc98] */
  ECX = (r32((uint32_t)(0x1070dc98)));
  /* 106f0b5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f0b5f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106f0b63 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106f0b69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f0b6b je 0x106f0b98 */
  if (C.zf) goto L_106f0b98;
  /* 106f0b6d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0b71 jbe 0x106f0b98 */
  if ((C.cf||C.zf)) goto L_106f0b98;
  /* 106f0b73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0b76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0b79 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106f0b7b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106f0b7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0b80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0b83 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f0b86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0b89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0b8c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106f0b8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0b92 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0b95 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106f0b98:;
  /* 106f0b98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0b9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0b9e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106f0ba0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106f0ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0ba5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0ba8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f0bab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0bae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0bb1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106f0bb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0bb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0bba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106f0bbd:;
  /* 106f0bbd jmp 0x106f0ad1 */
  goto L_106f0ad1;
L_106f0bc2:;
  /* 106f0bc2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0bc6 je 0x106f0bd4 */
  if (C.zf) goto L_106f0bd4;
  /* 106f0bc8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106f0bca call 0x106e71d0 */
  push32(0x106f0bcfu); f_106e71d0();
  /* 106f0bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0bd2 jmp 0x106f0bdf */
  goto L_106f0bdf;
L_106f0bd4:;
  /* 106f0bd4 push 0x1070f84c */
  push32((uint32_t)(0x1070f84cu));
  /* 106f0bd9 call dword ptr [0x107122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d0))), 0x106f0bdfu);
L_106f0bdf:;
  /* 106f0bdf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0be3 jbe 0x106f0bf3 */
  if ((C.cf||C.zf)) goto L_106f0bf3;
  /* 106f0be5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0be8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106f0beb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0bee sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0bf1 jmp 0x106f0bf5 */
  goto L_106f0bf5;
L_106f0bf3:;
  /* 106f0bf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f0bf5:;
  /* 106f0bf5 mov esp, ebp */
  ESP = (EBP);
  /* 106f0bf7 pop ebp */
  EBP = (pop32());
  /* 106f0bf8 ret  */
  ESPCHK(0x106f0a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c00 @ 0x106f0c00 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_106f0c00(void) {
  FTRACE(0x106f0c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f0c00 push ebp */
  push32((uint32_t)(EBP));
  /* 106f0c01 mov ebp, esp */
  EBP = (ESP);
  /* 106f0c03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0c06 push esi */
  push32((uint32_t)(ESI));
  /* 106f0c07 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 106f0c0b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f0c0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0c11 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0c14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106f0c17 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0c1b ja 0x106f1168 */
  if ((!C.cf&&!C.zf)) goto L_106f1168;
  /* 106f0c21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0c24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f0c26 mov dl, byte ptr [eax + 0x106f11c9] */
  DL = (r8((uint32_t)(EAX + 0x106f11c9)));
  /* 106f0c2c jmp dword ptr [edx*4 + 0x106f116d] */
  switch (EDX) {
    case 0: goto L_106f1146;
    case 1: goto L_106f0c55;
    case 2: goto L_106f0c9b;
    case 3: goto L_106f0de8;
    case 4: goto L_106f0e10;
    case 5: goto L_106f0eaf;
    case 6: goto L_106f0f1b;
    case 7: goto L_106f0f44;
    case 8: goto L_106f0f85;
    case 9: goto L_106f1067;
    case 10: goto L_106f10ce;
    case 11: goto L_106f111b;
    case 12: goto L_106f0c33;
    case 13: goto L_106f0c78;
    case 14: goto L_106f0cbe;
    case 15: goto L_106f0dbe;
    case 16: goto L_106f0e55;
    case 17: goto L_106f0e82;
    case 18: goto L_106f0ed7;
    case 19: goto L_106f0f5b;
    case 20: goto L_106f1009;
    case 21: goto L_106f1098;
    case 22: goto L_106f1168;
    default: x86_unimpl("switch@0x106f0c2c out of table"); return;
  }
L_106f0c33:;
  /* 106f0c33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0c36 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0c37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0c3a push edx */
  push32((uint32_t)(EDX));
  /* 106f0c3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0c3e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106f0c41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0c44 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 106f0c47 push eax */
  push32((uint32_t)(EAX));
  /* 106f0c48 call 0x106f1220 */
  push32(0x106f0c4du); f_106f1220();
  /* 106f0c4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0c50 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0c55:;
  /* 106f0c55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0c58 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0c59 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0c5c push edx */
  push32((uint32_t)(EDX));
  /* 106f0c5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0c60 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106f0c63 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0c66 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 106f0c6a push eax */
  push32((uint32_t)(EAX));
  /* 106f0c6b call 0x106f1220 */
  push32(0x106f0c70u); f_106f1220();
  /* 106f0c70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0c73 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0c78:;
  /* 106f0c78 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0c7b push ecx */
  push32((uint32_t)(ECX));
  /* 106f0c7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0c7f push edx */
  push32((uint32_t)(EDX));
  /* 106f0c80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0c83 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106f0c86 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0c89 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 106f0c8d push eax */
  push32((uint32_t)(EAX));
  /* 106f0c8e call 0x106f1220 */
  push32(0x106f0c93u); f_106f1220();
  /* 106f0c93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0c96 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0c9b:;
  /* 106f0c9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0c9e push ecx */
  push32((uint32_t)(ECX));
  /* 106f0c9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0ca2 push edx */
  push32((uint32_t)(EDX));
  /* 106f0ca3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0ca6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106f0ca9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0cac mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 106f0cb0 push eax */
  push32((uint32_t)(EAX));
  /* 106f0cb1 call 0x106f1220 */
  push32(0x106f0cb6u); f_106f1220();
  /* 106f0cb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0cb9 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0cbe:;
  /* 106f0cbe cmp dword ptr [0x1070f828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0cc5 je 0x106f0d46 */
  if (C.zf) goto L_106f0d46;
  /* 106f0cc7 mov dword ptr [0x1070f828], 0 */
  w32((uint32_t)(0x1070f828), (0x0u));
  /* 106f0cd1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0cd4 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0cd5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0cd8 push edx */
  push32((uint32_t)(EDX));
  /* 106f0cd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0cdc push eax */
  push32((uint32_t)(EAX));
  /* 106f0cdd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0ce1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0ce4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 106f0cea push eax */
  push32((uint32_t)(EAX));
  /* 106f0ceb call 0x106f13d0 */
  push32(0x106f0cf0u); f_106f13d0();
  /* 106f0cf0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0cf3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0cf6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0cf9 jne 0x106f0d00 */
  if (!C.zf) goto L_106f0d00;
  /* 106f0cfb jmp 0x106f1168 */
  goto L_106f1168;
L_106f0d00:;
  /* 106f0d00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0d03 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f0d05 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 106f0d08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0d0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f0d0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0d10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0d13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106f0d15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0d18 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f0d1a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0d1d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0d20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106f0d22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0d25 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0d26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0d29 push edx */
  push32((uint32_t)(EDX));
  /* 106f0d2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0d2d push eax */
  push32((uint32_t)(EAX));
  /* 106f0d2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0d31 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0d32 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0d35 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 106f0d3b push eax */
  push32((uint32_t)(EAX));
  /* 106f0d3c call 0x106f13d0 */
  push32(0x106f0d41u); f_106f13d0();
  /* 106f0d41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0d44 jmp 0x106f0db9 */
  goto L_106f0db9;
L_106f0d46:;
  /* 106f0d46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0d49 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0d4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0d4d push edx */
  push32((uint32_t)(EDX));
  /* 106f0d4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0d51 push eax */
  push32((uint32_t)(EAX));
  /* 106f0d52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0d55 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0d56 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0d59 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 106f0d5f push eax */
  push32((uint32_t)(EAX));
  /* 106f0d60 call 0x106f13d0 */
  push32(0x106f0d65u); f_106f13d0();
  /* 106f0d65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0d68 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0d6b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0d6e jne 0x106f0d75 */
  if (!C.zf) goto L_106f0d75;
  /* 106f0d70 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0d75:;
  /* 106f0d75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0d78 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f0d7a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 106f0d7d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0d80 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f0d82 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0d85 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0d88 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106f0d8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0d8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f0d8f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0d92 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0d95 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106f0d97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0d9a push ecx */
  push32((uint32_t)(ECX));
  /* 106f0d9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0d9e push edx */
  push32((uint32_t)(EDX));
  /* 106f0d9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0da2 push eax */
  push32((uint32_t)(EAX));
  /* 106f0da3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0da6 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0da7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0daa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 106f0db0 push eax */
  push32((uint32_t)(EAX));
  /* 106f0db1 call 0x106f13d0 */
  push32(0x106f0db6u); f_106f13d0();
  /* 106f0db6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f0db9:;
  /* 106f0db9 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0dbe:;
  /* 106f0dbe mov ecx, dword ptr [0x1070f828] */
  ECX = (r32((uint32_t)(0x1070f828)));
  /* 106f0dc4 mov dword ptr [0x1070f838], ecx */
  w32((uint32_t)(0x1070f838), (ECX));
  /* 106f0dca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0dcd push edx */
  push32((uint32_t)(EDX));
  /* 106f0dce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0dd1 push eax */
  push32((uint32_t)(EAX));
  /* 106f0dd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f0dd4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0dd7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106f0dda push edx */
  push32((uint32_t)(EDX));
  /* 106f0ddb call 0x106f1270 */
  push32(0x106f0de0u); f_106f1270();
  /* 106f0de0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0de3 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0de8:;
  /* 106f0de8 mov eax, dword ptr [0x1070f828] */
  EAX = (r32((uint32_t)(0x1070f828)));
  /* 106f0ded mov dword ptr [0x1070f838], eax */
  w32((uint32_t)(0x1070f838), (EAX));
  /* 106f0df2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0df5 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0df6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0df9 push edx */
  push32((uint32_t)(EDX));
  /* 106f0dfa push 2 */
  push32((uint32_t)(0x2u));
  /* 106f0dfc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0dff mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106f0e02 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0e03 call 0x106f1270 */
  push32(0x106f0e08u); f_106f1270();
  /* 106f0e08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0e0b jmp 0x106f1168 */
  goto L_106f1168;
L_106f0e10:;
  /* 106f0e10 mov edx, dword ptr [0x1070f828] */
  EDX = (r32((uint32_t)(0x1070f828)));
  /* 106f0e16 mov dword ptr [0x1070f838], edx */
  w32((uint32_t)(0x1070f838), (EDX));
  /* 106f0e1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0e1f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 106f0e22 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f0e23 mov ecx, 0xc */
  ECX = (0xcu);
  /* 106f0e28 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f0e2a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106f0e2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0e31 jne 0x106f0e3a */
  if (!C.zf) goto L_106f0e3a;
  /* 106f0e33 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_106f0e3a:;
  /* 106f0e3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0e3d push edx */
  push32((uint32_t)(EDX));
  /* 106f0e3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0e41 push eax */
  push32((uint32_t)(EAX));
  /* 106f0e42 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f0e44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f0e47 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0e48 call 0x106f1270 */
  push32(0x106f0e4du); f_106f1270();
  /* 106f0e4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0e50 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0e55:;
  /* 106f0e55 mov edx, dword ptr [0x1070f828] */
  EDX = (r32((uint32_t)(0x1070f828)));
  /* 106f0e5b mov dword ptr [0x1070f838], edx */
  w32((uint32_t)(0x1070f838), (EDX));
  /* 106f0e61 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0e64 push eax */
  push32((uint32_t)(EAX));
  /* 106f0e65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0e68 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0e69 push 3 */
  push32((uint32_t)(0x3u));
  /* 106f0e6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0e6e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106f0e71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0e74 push eax */
  push32((uint32_t)(EAX));
  /* 106f0e75 call 0x106f1270 */
  push32(0x106f0e7au); f_106f1270();
  /* 106f0e7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0e7d jmp 0x106f1168 */
  goto L_106f1168;
L_106f0e82:;
  /* 106f0e82 mov ecx, dword ptr [0x1070f828] */
  ECX = (r32((uint32_t)(0x1070f828)));
  /* 106f0e88 mov dword ptr [0x1070f838], ecx */
  w32((uint32_t)(0x1070f838), (ECX));
  /* 106f0e8e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0e91 push edx */
  push32((uint32_t)(EDX));
  /* 106f0e92 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0e95 push eax */
  push32((uint32_t)(EAX));
  /* 106f0e96 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f0e98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0e9b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106f0e9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0ea1 push edx */
  push32((uint32_t)(EDX));
  /* 106f0ea2 call 0x106f1270 */
  push32(0x106f0ea7u); f_106f1270();
  /* 106f0ea7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0eaa jmp 0x106f1168 */
  goto L_106f1168;
L_106f0eaf:;
  /* 106f0eaf mov eax, dword ptr [0x1070f828] */
  EAX = (r32((uint32_t)(0x1070f828)));
  /* 106f0eb4 mov dword ptr [0x1070f838], eax */
  w32((uint32_t)(0x1070f838), (EAX));
  /* 106f0eb9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0ebc push ecx */
  push32((uint32_t)(ECX));
  /* 106f0ebd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0ec0 push edx */
  push32((uint32_t)(EDX));
  /* 106f0ec1 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f0ec3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0ec6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106f0ec9 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0eca call 0x106f1270 */
  push32(0x106f0ecfu); f_106f1270();
  /* 106f0ecf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0ed2 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0ed7:;
  /* 106f0ed7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0eda cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0ede jg 0x106f0efc */
  if ((!C.zf&&C.sf==C.of)) goto L_106f0efc;
  /* 106f0ee0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0ee3 push eax */
  push32((uint32_t)(EAX));
  /* 106f0ee4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0ee8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0eeb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 106f0ef1 push eax */
  push32((uint32_t)(EAX));
  /* 106f0ef2 call 0x106f1220 */
  push32(0x106f0ef7u); f_106f1220();
  /* 106f0ef7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0efa jmp 0x106f0f16 */
  goto L_106f0f16;
L_106f0efc:;
  /* 106f0efc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0eff push ecx */
  push32((uint32_t)(ECX));
  /* 106f0f00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0f03 push edx */
  push32((uint32_t)(EDX));
  /* 106f0f04 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f0f07 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 106f0f0d push ecx */
  push32((uint32_t)(ECX));
  /* 106f0f0e call 0x106f1220 */
  push32(0x106f0f13u); f_106f1220();
  /* 106f0f13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f0f16:;
  /* 106f0f16 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0f1b:;
  /* 106f0f1b mov edx, dword ptr [0x1070f828] */
  EDX = (r32((uint32_t)(0x1070f828)));
  /* 106f0f21 mov dword ptr [0x1070f838], edx */
  w32((uint32_t)(0x1070f838), (EDX));
  /* 106f0f27 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0f2a push eax */
  push32((uint32_t)(EAX));
  /* 106f0f2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0f2e push ecx */
  push32((uint32_t)(ECX));
  /* 106f0f2f push 2 */
  push32((uint32_t)(0x2u));
  /* 106f0f31 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0f34 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f0f36 push eax */
  push32((uint32_t)(EAX));
  /* 106f0f37 call 0x106f1270 */
  push32(0x106f0f3cu); f_106f1270();
  /* 106f0f3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0f3f jmp 0x106f1168 */
  goto L_106f1168;
L_106f0f44:;
  /* 106f0f44 mov ecx, dword ptr [0x1070f828] */
  ECX = (r32((uint32_t)(0x1070f828)));
  /* 106f0f4a mov dword ptr [0x1070f838], ecx */
  w32((uint32_t)(0x1070f838), (ECX));
  /* 106f0f50 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0f53 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 106f0f56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f0f59 jmp 0x106f0fad */
  goto L_106f0fad;
L_106f0f5b:;
  /* 106f0f5b mov ecx, dword ptr [0x1070f828] */
  ECX = (r32((uint32_t)(0x1070f828)));
  /* 106f0f61 mov dword ptr [0x1070f838], ecx */
  w32((uint32_t)(0x1070f838), (ECX));
  /* 106f0f67 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0f6a push edx */
  push32((uint32_t)(EDX));
  /* 106f0f6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0f6e push eax */
  push32((uint32_t)(EAX));
  /* 106f0f6f push 1 */
  push32((uint32_t)(0x1u));
  /* 106f0f71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0f74 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106f0f77 push edx */
  push32((uint32_t)(EDX));
  /* 106f0f78 call 0x106f1270 */
  push32(0x106f0f7du); f_106f1270();
  /* 106f0f7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0f80 jmp 0x106f1168 */
  goto L_106f1168;
L_106f0f85:;
  /* 106f0f85 mov eax, dword ptr [0x1070f828] */
  EAX = (r32((uint32_t)(0x1070f828)));
  /* 106f0f8a mov dword ptr [0x1070f838], eax */
  w32((uint32_t)(0x1070f838), (EAX));
  /* 106f0f8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0f92 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0f96 jne 0x106f0fa1 */
  if (!C.zf) goto L_106f0fa1;
  /* 106f0f98 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 106f0f9f jmp 0x106f0fad */
  goto L_106f0fad;
L_106f0fa1:;
  /* 106f0fa1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0fa4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 106f0fa7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0faa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106f0fad:;
  /* 106f0fad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0fb0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106f0fb3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0fb6 jge 0x106f0fc1 */
  if ((C.sf==C.of)) goto L_106f0fc1;
  /* 106f0fb8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106f0fbf jmp 0x106f0fee */
  goto L_106f0fee;
L_106f0fc1:;
  /* 106f0fc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0fc4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106f0fc7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f0fc8 mov ecx, 7 */
  ECX = (0x7u);
  /* 106f0fcd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f0fcf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f0fd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f0fd5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106f0fd8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f0fd9 mov ecx, 7 */
  ECX = (0x7u);
  /* 106f0fde idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f0fe0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0fe3 jl 0x106f0fee */
  if ((C.sf!=C.of)) goto L_106f0fee;
  /* 106f0fe5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f0fe8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0feb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106f0fee:;
  /* 106f0fee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0ff1 push eax */
  push32((uint32_t)(EAX));
  /* 106f0ff2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0ff6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f0ff8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f0ffb push edx */
  push32((uint32_t)(EDX));
  /* 106f0ffc call 0x106f1270 */
  push32(0x106f1001u); f_106f1270();
  /* 106f1001 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1004 jmp 0x106f1168 */
  goto L_106f1168;
L_106f1009:;
  /* 106f1009 cmp dword ptr [0x1070f828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1010 je 0x106f1040 */
  if (C.zf) goto L_106f1040;
  /* 106f1012 mov dword ptr [0x1070f828], 0 */
  w32((uint32_t)(0x1070f828), (0x0u));
  /* 106f101c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f101f push eax */
  push32((uint32_t)(EAX));
  /* 106f1020 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1023 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1024 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1027 push edx */
  push32((uint32_t)(EDX));
  /* 106f1028 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f102b push eax */
  push32((uint32_t)(EAX));
  /* 106f102c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f102f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 106f1035 push edx */
  push32((uint32_t)(EDX));
  /* 106f1036 call 0x106f13d0 */
  push32(0x106f103bu); f_106f13d0();
  /* 106f103b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f103e jmp 0x106f1062 */
  goto L_106f1062;
L_106f1040:;
  /* 106f1040 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f1043 push eax */
  push32((uint32_t)(EAX));
  /* 106f1044 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1047 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1048 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f104b push edx */
  push32((uint32_t)(EDX));
  /* 106f104c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f104f push eax */
  push32((uint32_t)(EAX));
  /* 106f1050 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f1053 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 106f1059 push edx */
  push32((uint32_t)(EDX));
  /* 106f105a call 0x106f13d0 */
  push32(0x106f105fu); f_106f13d0();
  /* 106f105f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f1062:;
  /* 106f1062 jmp 0x106f1168 */
  goto L_106f1168;
L_106f1067:;
  /* 106f1067 mov dword ptr [0x1070f828], 0 */
  w32((uint32_t)(0x1070f828), (0x0u));
  /* 106f1071 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f1074 push eax */
  push32((uint32_t)(EAX));
  /* 106f1075 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1078 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1079 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f107c push edx */
  push32((uint32_t)(EDX));
  /* 106f107d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1080 push eax */
  push32((uint32_t)(EAX));
  /* 106f1081 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f1084 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 106f108a push edx */
  push32((uint32_t)(EDX));
  /* 106f108b call 0x106f13d0 */
  push32(0x106f1090u); f_106f13d0();
  /* 106f1090 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1093 jmp 0x106f1168 */
  goto L_106f1168;
L_106f1098:;
  /* 106f1098 mov eax, dword ptr [0x1070f828] */
  EAX = (r32((uint32_t)(0x1070f828)));
  /* 106f109d mov dword ptr [0x1070f838], eax */
  w32((uint32_t)(0x1070f838), (EAX));
  /* 106f10a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f10a5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 106f10a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f10a9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 106f10ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f10b0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106f10b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f10b6 push edx */
  push32((uint32_t)(EDX));
  /* 106f10b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f10ba push eax */
  push32((uint32_t)(EAX));
  /* 106f10bb push 2 */
  push32((uint32_t)(0x2u));
  /* 106f10bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f10c0 push ecx */
  push32((uint32_t)(ECX));
  /* 106f10c1 call 0x106f1270 */
  push32(0x106f10c6u); f_106f1270();
  /* 106f10c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f10c9 jmp 0x106f1168 */
  goto L_106f1168;
L_106f10ce:;
  /* 106f10ce mov edx, dword ptr [0x1070f828] */
  EDX = (r32((uint32_t)(0x1070f828)));
  /* 106f10d4 mov dword ptr [0x1070f838], edx */
  w32((uint32_t)(0x1070f838), (EDX));
  /* 106f10da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f10dd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 106f10e0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f10e1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 106f10e6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f10e8 mov ecx, eax */
  ECX = (EAX);
  /* 106f10ea add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f10ed imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f10f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f10f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106f10f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f10f7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 106f10fc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f10fe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1100 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f1103 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1106 push eax */
  push32((uint32_t)(EAX));
  /* 106f1107 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f110a push ecx */
  push32((uint32_t)(ECX));
  /* 106f110b push 4 */
  push32((uint32_t)(0x4u));
  /* 106f110d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f1110 push edx */
  push32((uint32_t)(EDX));
  /* 106f1111 call 0x106f1270 */
  push32(0x106f1116u); f_106f1270();
  /* 106f1116 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1119 jmp 0x106f1168 */
  goto L_106f1168;
L_106f111b:;
  /* 106f111b call 0x106f2230 */
  push32(0x106f1120u); f_106f2230();
  /* 106f1120 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1123 push eax */
  push32((uint32_t)(EAX));
  /* 106f1124 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1127 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1128 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f112b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f112d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1131 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 106f1134 mov ecx, dword ptr [eax*4 + 0x1070ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1070ee1c)));
  /* 106f113b push ecx */
  push32((uint32_t)(ECX));
  /* 106f113c call 0x106f1220 */
  push32(0x106f1141u); f_106f1220();
  /* 106f1141 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1144 jmp 0x106f1168 */
  goto L_106f1168;
L_106f1146:;
  /* 106f1146 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1149 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f114b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 106f114e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1151 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f1153 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1156 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1159 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106f115b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f115e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f1160 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1163 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1166 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106f1168:;
  /* 106f1168 pop esi */
  ESI = (pop32());
  /* 106f1169 mov esp, ebp */
  ESP = (EBP);
  /* 106f116b pop ebp */
  EBP = (pop32());
  /* 106f116c ret  */
  ESPCHK(0x106f0c00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x106f1220 (72 bytes, 30 insns) */
void f_106f1220(void) {
  FTRACE(0x106f1220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f1220 push ebp */
  push32((uint32_t)(EBP));
  /* 106f1221 mov ebp, esp */
  EBP = (ESP);
L_106f1223:;
  /* 106f1223 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1226 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1229 je 0x106f1266 */
  if (C.zf) goto L_106f1266;
  /* 106f122b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f122e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106f1231 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f1233 je 0x106f1266 */
  if (C.zf) goto L_106f1266;
  /* 106f1235 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1238 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f123a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f123d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f123f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106f1241 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1244 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f1246 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1249 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f124c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106f124e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1251 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1254 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106f1257 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f125a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f125c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f125f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1262 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106f1264 jmp 0x106f1223 */
  goto L_106f1223;
L_106f1266:;
  /* 106f1266 pop ebp */
  EBP = (pop32());
  /* 106f1267 ret  */
  ESPCHK(0x106f1220u, _esp0);
  ESP += 4; return;
}

/* FUN_10011270 @ 0x106f1270 (173 bytes, 64 insns) */
void f_106f1270(void) {
  FTRACE(0x106f1270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f1270 push ebp */
  push32((uint32_t)(EBP));
  /* 106f1271 mov ebp, esp */
  EBP = (ESP);
  /* 106f1273 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1274 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106f127b cmp dword ptr [0x1070f838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1282 je 0x106f129a */
  if (C.zf) goto L_106f129a;
  /* 106f1284 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1287 push eax */
  push32((uint32_t)(EAX));
  /* 106f1288 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f128b push ecx */
  push32((uint32_t)(ECX));
  /* 106f128c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f128f push edx */
  push32((uint32_t)(EDX));
  /* 106f1290 call 0x106f1320 */
  push32(0x106f1295u); f_106f1320();
  /* 106f1295 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1298 jmp 0x106f1319 */
  goto L_106f1319;
L_106f129a:;
  /* 106f129a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f129d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f12a0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f12a2 jae 0x106f1310 */
  if (!C.cf) goto L_106f1310;
  /* 106f12a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f12a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f12aa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 106f12ad jmp 0x106f12b8 */
  goto L_106f12b8;
L_106f12af:;
  /* 106f12af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f12b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f12b5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_106f12b8:;
  /* 106f12b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f12bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f12be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f12c0 je 0x106f12f4 */
  if (C.zf) goto L_106f12f4;
  /* 106f12c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f12c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f12c6 mov ecx, 0xa */
  ECX = (0xau);
  /* 106f12cb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f12cd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f12d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f12d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f12d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f12d8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 106f12db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f12de cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f12df mov ecx, 0xa */
  ECX = (0xau);
  /* 106f12e4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f12e6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f12e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f12ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f12ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106f12f2 jmp 0x106f12af */
  goto L_106f12af;
L_106f12f4:;
  /* 106f12f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f12f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f12f9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f12fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f12ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106f1301 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1304 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f1306 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1309 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f130c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106f130e jmp 0x106f1319 */
  goto L_106f1319;
L_106f1310:;
  /* 106f1310 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1313 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_106f1319:;
  /* 106f1319 mov esp, ebp */
  ESP = (EBP);
  /* 106f131b pop ebp */
  EBP = (pop32());
  /* 106f131c ret  */
  ESPCHK(0x106f1270u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x106f1320 (172 bytes, 65 insns) */
void f_106f1320(void) {
  FTRACE(0x106f1320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f1320 push ebp */
  push32((uint32_t)(EBP));
  /* 106f1321 mov ebp, esp */
  EBP = (ESP);
  /* 106f1323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1326 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1329 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f132b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f132e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1331 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1334 jbe 0x106f137b */
  if ((C.cf||C.zf)) goto L_106f137b;
L_106f1336:;
  /* 106f1336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1339 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f133a mov ecx, 0xa */
  ECX = (0xau);
  /* 106f133f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f1341 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1344 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f1347 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106f1349 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f134c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f134f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f1352 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1355 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f1357 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f135a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f135d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106f135f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1362 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f1363 mov ecx, 0xa */
  ECX = (0xau);
  /* 106f1368 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f136a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f136d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1371 jle 0x106f137b */
  if ((C.zf||C.sf!=C.of)) goto L_106f137b;
  /* 106f1373 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1376 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1379 ja 0x106f1336 */
  if ((!C.cf&&!C.zf)) goto L_106f1336;
L_106f137b:;
  /* 106f137b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f137e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f1380 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106f1383 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f1389 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106f138b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f138e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1391 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106f1394:;
  /* 106f1394 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f1397 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f1399 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 106f139c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f139f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f13a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f13a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106f13a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f13a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f13ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f13af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f13b2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 106f13b5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 106f13b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f13ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f13bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106f13c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f13c3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f13c6 jb 0x106f1394 */
  if (C.cf) goto L_106f1394;
  /* 106f13c8 mov esp, ebp */
  ESP = (EBP);
  /* 106f13ca pop ebp */
  EBP = (pop32());
  /* 106f13cb ret  */
  ESPCHK(0x106f1320u, _esp0);
  ESP += 4; return;
}

/* FUN_100113d0 @ 0x106f13d0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_106f13d0(void) {
  FTRACE(0x106f13d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f13d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f13d1 mov ebp, esp */
  EBP = (ESP);
  /* 106f13d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_106f13d6:;
  /* 106f13d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f13d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106f13dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f13de je 0x106f184c */
  if (C.zf) goto L_106f184c;
  /* 106f13e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f13e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f13ea je 0x106f184c */
  if (C.zf) goto L_106f184c;
  /* 106f13f0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 106f13f4 mov dword ptr [0x1070f838], 0 */
  w32((uint32_t)(0x1070f838), (0x0u));
  /* 106f13fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106f1405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1408 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f140b jmp 0x106f1416 */
  goto L_106f1416;
L_106f140d:;
  /* 106f140d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f1410 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1413 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106f1416:;
  /* 106f1416 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f1419 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106f141c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f141f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106f1422 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f1425 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1428 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f142b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f142d jne 0x106f1431 */
  if (!C.zf) goto L_106f1431;
  /* 106f142f jmp 0x106f140d */
  goto L_106f140d;
L_106f1431:;
  /* 106f1431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f1434 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1437 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106f143a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f143d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106f1440 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106f1443 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f1446 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1449 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106f144c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1450 ja 0x106f17a0 */
  if ((!C.cf&&!C.zf)) goto L_106f17a0;
  /* 106f1456 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f1459 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f145b mov al, byte ptr [ecx + 0x106f187c] */
  AL = (r8((uint32_t)(ECX + 0x106f187c)));
  /* 106f1461 jmp dword ptr [eax*4 + 0x106f1850] */
  switch (EAX) {
    case 0: goto L_106f16bf;
    case 1: goto L_106f15a3;
    case 2: goto L_106f152e;
    case 3: goto L_106f1468;
    case 4: goto L_106f14a6;
    case 5: goto L_106f1507;
    case 6: goto L_106f1555;
    case 7: goto L_106f157c;
    case 8: goto L_106f15ea;
    case 9: goto L_106f14e4;
    case 10: goto L_106f17a0;
    default: x86_unimpl("switch@0x106f1461 out of table"); return;
  }
L_106f1468:;
  /* 106f1468 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f146b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106f146e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f1471 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1474 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106f1477 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f147b ja 0x106f14a1 */
  if ((!C.cf&&!C.zf)) goto L_106f14a1;
  /* 106f147d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f1480 jmp dword ptr [ecx*4 + 0x106f18cf] */
  switch (ECX) {
    case 0: goto L_106f1487;
    case 1: goto L_106f1491;
    case 2: goto L_106f1497;
    case 3: goto L_106f149d;
    case 4: goto L_106f14c5;
    case 5: goto L_106f14cf;
    case 6: goto L_106f14d5;
    case 7: goto L_106f14db;
    default: x86_unimpl("switch@0x106f1480 out of table"); return;
  }
L_106f1487:;
  /* 106f1487 mov dword ptr [0x1070f838], 1 */
  w32((uint32_t)(0x1070f838), (0x1u));
L_106f1491:;
  /* 106f1491 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 106f1495 jmp 0x106f14a1 */
  goto L_106f14a1;
L_106f1497:;
  /* 106f1497 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 106f149b jmp 0x106f14a1 */
  goto L_106f14a1;
L_106f149d:;
  /* 106f149d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_106f14a1:;
  /* 106f14a1 jmp 0x106f17a0 */
  goto L_106f17a0;
L_106f14a6:;
  /* 106f14a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f14a9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106f14ac mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106f14af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f14b2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106f14b5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f14b9 ja 0x106f14df */
  if ((!C.cf&&!C.zf)) goto L_106f14df;
  /* 106f14bb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106f14be jmp dword ptr [ecx*4 + 0x106f18df] */
  switch (ECX) {
    case 0: goto L_106f14c5;
    case 1: goto L_106f14cf;
    case 2: goto L_106f14d5;
    case 3: goto L_106f14db;
    default: x86_unimpl("switch@0x106f14be out of table"); return;
  }
L_106f14c5:;
  /* 106f14c5 mov dword ptr [0x1070f838], 1 */
  w32((uint32_t)(0x1070f838), (0x1u));
L_106f14cf:;
  /* 106f14cf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 106f14d3 jmp 0x106f14df */
  goto L_106f14df;
L_106f14d5:;
  /* 106f14d5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 106f14d9 jmp 0x106f14df */
  goto L_106f14df;
L_106f14db:;
  /* 106f14db mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_106f14df:;
  /* 106f14df jmp 0x106f17a0 */
  goto L_106f17a0;
L_106f14e4:;
  /* 106f14e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f14e7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106f14ea cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f14ee je 0x106f14f8 */
  if (C.zf) goto L_106f14f8;
  /* 106f14f0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f14f4 je 0x106f14fe */
  if (C.zf) goto L_106f14fe;
  /* 106f14f6 jmp 0x106f1502 */
  goto L_106f1502;
L_106f14f8:;
  /* 106f14f8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 106f14fc jmp 0x106f1502 */
  goto L_106f1502;
L_106f14fe:;
  /* 106f14fe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_106f1502:;
  /* 106f1502 jmp 0x106f17a0 */
  goto L_106f17a0;
L_106f1507:;
  /* 106f1507 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f150a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106f150d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1511 je 0x106f151b */
  if (C.zf) goto L_106f151b;
  /* 106f1513 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1517 je 0x106f1525 */
  if (C.zf) goto L_106f1525;
  /* 106f1519 jmp 0x106f1529 */
  goto L_106f1529;
L_106f151b:;
  /* 106f151b mov dword ptr [0x1070f838], 1 */
  w32((uint32_t)(0x1070f838), (0x1u));
L_106f1525:;
  /* 106f1525 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_106f1529:;
  /* 106f1529 jmp 0x106f17a0 */
  goto L_106f17a0;
L_106f152e:;
  /* 106f152e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f1531 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 106f1534 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1538 je 0x106f1542 */
  if (C.zf) goto L_106f1542;
  /* 106f153a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f153e je 0x106f154c */
  if (C.zf) goto L_106f154c;
  /* 106f1540 jmp 0x106f1550 */
  goto L_106f1550;
L_106f1542:;
  /* 106f1542 mov dword ptr [0x1070f838], 1 */
  w32((uint32_t)(0x1070f838), (0x1u));
L_106f154c:;
  /* 106f154c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_106f1550:;
  /* 106f1550 jmp 0x106f17a0 */
  goto L_106f17a0;
L_106f1555:;
  /* 106f1555 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f1558 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 106f155b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f155f je 0x106f1569 */
  if (C.zf) goto L_106f1569;
  /* 106f1561 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1565 je 0x106f1573 */
  if (C.zf) goto L_106f1573;
  /* 106f1567 jmp 0x106f1577 */
  goto L_106f1577;
L_106f1569:;
  /* 106f1569 mov dword ptr [0x1070f838], 1 */
  w32((uint32_t)(0x1070f838), (0x1u));
L_106f1573:;
  /* 106f1573 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_106f1577:;
  /* 106f1577 jmp 0x106f17a0 */
  goto L_106f17a0;
L_106f157c:;
  /* 106f157c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f157f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 106f1582 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1586 je 0x106f1590 */
  if (C.zf) goto L_106f1590;
  /* 106f1588 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f158c je 0x106f159a */
  if (C.zf) goto L_106f159a;
  /* 106f158e jmp 0x106f159e */
  goto L_106f159e;
L_106f1590:;
  /* 106f1590 mov dword ptr [0x1070f838], 1 */
  w32((uint32_t)(0x1070f838), (0x1u));
L_106f159a:;
  /* 106f159a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_106f159e:;
  /* 106f159e jmp 0x106f17a0 */
  goto L_106f17a0;
L_106f15a3:;
  /* 106f15a3 push 0x1070b894 */
  push32((uint32_t)(0x1070b894u));
  /* 106f15a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f15ab push ecx */
  push32((uint32_t)(ECX));
  /* 106f15ac call 0x106f1e00 */
  push32(0x106f15b1u); f_106f1e00();
  /* 106f15b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f15b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f15b6 jne 0x106f15c3 */
  if (!C.zf) goto L_106f15c3;
  /* 106f15b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f15bb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f15be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106f15c1 jmp 0x106f15e1 */
  goto L_106f15e1;
L_106f15c3:;
  /* 106f15c3 push 0x1070b890 */
  push32((uint32_t)(0x1070b890u));
  /* 106f15c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f15cb push eax */
  push32((uint32_t)(EAX));
  /* 106f15cc call 0x106f1e00 */
  push32(0x106f15d1u); f_106f1e00();
  /* 106f15d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f15d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f15d6 jne 0x106f15e1 */
  if (!C.zf) goto L_106f15e1;
  /* 106f15d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f15db add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f15de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106f15e1:;
  /* 106f15e1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 106f15e5 jmp 0x106f17a0 */
  goto L_106f17a0;
L_106f15ea:;
  /* 106f15ea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f15ed cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f15f1 jg 0x106f1601 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f1601;
  /* 106f15f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f15f6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 106f15fc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106f15ff jmp 0x106f160d */
  goto L_106f160d;
L_106f1601:;
  /* 106f1601 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f1604 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 106f160a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106f160d:;
  /* 106f160d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1611 jle 0x106f16b4 */
  if ((C.zf||C.sf!=C.of)) goto L_106f16b4;
  /* 106f1617 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f161a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f161d jbe 0x106f16b4 */
  if ((C.cf||C.zf)) goto L_106f16b4;
  /* 106f1623 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f1626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1628 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f162a mov ecx, dword ptr [0x1070dc98] */
  ECX = (r32((uint32_t)(0x1070dc98)));
  /* 106f1630 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f1632 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106f1636 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106f163c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f163e je 0x106f1677 */
  if (C.zf) goto L_106f1677;
  /* 106f1640 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1643 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1646 jbe 0x106f1677 */
  if ((C.cf||C.zf)) goto L_106f1677;
  /* 106f1648 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f164b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f164d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f1650 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f1652 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106f1654 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1657 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f1659 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f165c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f165f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106f1661 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f1664 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1667 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106f166a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f166d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f166f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1672 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1675 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106f1677:;
  /* 106f1677 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f167a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f167c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f167f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f1681 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106f1683 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1686 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f1688 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f168b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f168e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106f1690 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f1693 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1696 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106f1699 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f169c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f169e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f16a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f16a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106f16a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f16a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f16ac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106f16af jmp 0x106f160d */
  goto L_106f160d;
L_106f16b4:;
  /* 106f16b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f16b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f16ba jmp 0x106f13d6 */
  goto L_106f13d6;
L_106f16bf:;
  /* 106f16bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f16c2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106f16c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f16c7 je 0x106f1792 */
  if (C.zf) goto L_106f1792;
  /* 106f16cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f16d0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f16d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_106f16d6:;
  /* 106f16d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f16d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106f16dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f16de je 0x106f1790 */
  if (C.zf) goto L_106f1790;
  /* 106f16e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f16e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f16ea je 0x106f1790 */
  if (C.zf) goto L_106f1790;
  /* 106f16f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f16f3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106f16f6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f16f9 jne 0x106f1709 */
  if (!C.zf) goto L_106f1709;
  /* 106f16fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f16fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1701 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106f1704 jmp 0x106f1790 */
  goto L_106f1790;
L_106f1709:;
  /* 106f1709 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f170c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f170e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f1710 mov edx, dword ptr [0x1070dc98] */
  EDX = (r32((uint32_t)(0x1070dc98)));
  /* 106f1716 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1718 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 106f171c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 106f1721 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f1723 je 0x106f175c */
  if (C.zf) goto L_106f175c;
  /* 106f1725 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1728 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f172b jbe 0x106f175c */
  if ((C.cf||C.zf)) goto L_106f175c;
  /* 106f172d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1730 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f1732 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1735 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106f1737 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106f1739 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f173c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f173e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1741 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1744 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106f1746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1749 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f174c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f174f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1752 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f1754 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1757 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f175a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106f175c:;
  /* 106f175c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f175f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f1761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1764 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f1766 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106f1768 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f176b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f176d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1770 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1773 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106f1775 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1778 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f177b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106f177e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1781 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f1783 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1786 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1789 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106f178b jmp 0x106f16d6 */
  goto L_106f16d6;
L_106f1790:;
  /* 106f1790 jmp 0x106f179b */
  goto L_106f179b;
L_106f1792:;
  /* 106f1792 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1795 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1798 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106f179b:;
  /* 106f179b jmp 0x106f13d6 */
  goto L_106f13d6;
L_106f17a0:;
  /* 106f17a0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106f17a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f17a6 je 0x106f17cc */
  if (C.zf) goto L_106f17cc;
  /* 106f17a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f17ab push edx */
  push32((uint32_t)(EDX));
  /* 106f17ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f17af push eax */
  push32((uint32_t)(EAX));
  /* 106f17b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f17b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106f17b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f17b7 push edx */
  push32((uint32_t)(EDX));
  /* 106f17b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 106f17bb push eax */
  push32((uint32_t)(EAX));
  /* 106f17bc call 0x106f0c00 */
  push32(0x106f17c1u); f_106f0c00();
  /* 106f17c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f17c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f17c7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106f17ca jmp 0x106f1847 */
  goto L_106f1847;
L_106f17cc:;
  /* 106f17cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f17cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f17d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f17d3 mov ecx, dword ptr [0x1070dc98] */
  ECX = (r32((uint32_t)(0x1070dc98)));
  /* 106f17d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f17db mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106f17df and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106f17e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f17e7 je 0x106f1818 */
  if (C.zf) goto L_106f1818;
  /* 106f17e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f17ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f17ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f17f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f17f3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106f17f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f17f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f17fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f17fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1800 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106f1802 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1805 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1808 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106f180b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f180e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f1810 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1813 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1816 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_106f1818:;
  /* 106f1818 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f181b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f181d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1820 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106f1822 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106f1824 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1827 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f1829 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f182c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f182f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106f1831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1834 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1837 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f183a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f183d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f183f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1842 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1845 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106f1847:;
  /* 106f1847 jmp 0x106f13d6 */
  goto L_106f13d6;
L_106f184c:;
  /* 106f184c mov esp, ebp */
  ESP = (EBP);
  /* 106f184e pop ebp */
  EBP = (pop32());
  /* 106f184f ret  */
  ESPCHK(0x106f13d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118f0 @ 0x106f18f0 (650 bytes, 178 insns) */
void f_106f18f0(void) {
  FTRACE(0x106f18f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f18f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f18f1 mov ebp, esp */
  EBP = (ESP);
  /* 106f18f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f18f9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f18fd jne 0x106f1a59 */
  if (!C.zf) goto L_106f1a59;
  /* 106f1903 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1906 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 106f190c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 106f1912 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106f1915 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106f191c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 106f1926 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1928 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 106f192e push edx */
  push32((uint32_t)(EDX));
  /* 106f192f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f1932 push eax */
  push32((uint32_t)(EAX));
  /* 106f1933 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1936 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1937 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f193a push edx */
  push32((uint32_t)(EDX));
  /* 106f193b call 0x106f2d10 */
  push32(0x106f1940u); f_106f2d10();
  /* 106f1940 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1943 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f1946 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f194a jne 0x106f19df */
  if (!C.zf) goto L_106f19df;
  /* 106f1950 call dword ptr [0x1071230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071230c))), 0x106f1956u);
  /* 106f1956 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1959 je 0x106f1960 */
  if (C.zf) goto L_106f1960;
  /* 106f195b jmp 0x106f1a3d */
  goto L_106f1a3d;
L_106f1960:;
  /* 106f1960 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1962 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1964 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1966 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1969 push eax */
  push32((uint32_t)(EAX));
  /* 106f196a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f196d push ecx */
  push32((uint32_t)(ECX));
  /* 106f196e call 0x106f2d10 */
  push32(0x106f1973u); f_106f2d10();
  /* 106f1973 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1976 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 106f197c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1983 jne 0x106f198a */
  if (!C.zf) goto L_106f198a;
  /* 106f1985 jmp 0x106f1a3d */
  goto L_106f1a3d;
L_106f198a:;
  /* 106f198a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 106f198c push 0x1070b89c */
  push32((uint32_t)(0x1070b89cu));
  /* 106f1991 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f1993 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 106f1999 push edx */
  push32((uint32_t)(EDX));
  /* 106f199a call 0x106e3730 */
  push32(0x106f199fu); f_106e3730();
  /* 106f199f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f19a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f19a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f19a9 jne 0x106f19b0 */
  if (!C.zf) goto L_106f19b0;
  /* 106f19ab jmp 0x106f1a3d */
  goto L_106f1a3d;
L_106f19b0:;
  /* 106f19b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106f19b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f19b9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 106f19bf push eax */
  push32((uint32_t)(EAX));
  /* 106f19c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f19c3 push ecx */
  push32((uint32_t)(ECX));
  /* 106f19c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f19c7 push edx */
  push32((uint32_t)(EDX));
  /* 106f19c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f19cb push eax */
  push32((uint32_t)(EAX));
  /* 106f19cc call 0x106f2d10 */
  push32(0x106f19d1u); f_106f2d10();
  /* 106f19d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f19d4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f19d7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f19db jne 0x106f19df */
  if (!C.zf) goto L_106f19df;
  /* 106f19dd jmp 0x106f1a3d */
  goto L_106f1a3d;
L_106f19df:;
  /* 106f19df push 0x63 */
  push32((uint32_t)(0x63u));
  /* 106f19e1 push 0x1070b89c */
  push32((uint32_t)(0x1070b89cu));
  /* 106f19e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f19e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f19eb push ecx */
  push32((uint32_t)(ECX));
  /* 106f19ec call 0x106e3730 */
  push32(0x106f19f1u); f_106e3730();
  /* 106f19f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f19f4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 106f19fa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106f19fc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 106f1a02 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1a05 jne 0x106f1a09 */
  if (!C.zf) goto L_106f1a09;
  /* 106f1a07 jmp 0x106f1a3d */
  goto L_106f1a3d;
L_106f1a09:;
  /* 106f1a09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f1a0c push ecx */
  push32((uint32_t)(ECX));
  /* 106f1a0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f1a10 push edx */
  push32((uint32_t)(EDX));
  /* 106f1a11 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 106f1a17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f1a19 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1a1a call 0x106e6f50 */
  push32(0x106f1a1fu); f_106e6f50();
  /* 106f1a1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1a22 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1a26 je 0x106f1a36 */
  if (C.zf) goto L_106f1a36;
  /* 106f1a28 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f1a2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f1a2d push edx */
  push32((uint32_t)(EDX));
  /* 106f1a2e call 0x106e41c0 */
  push32(0x106f1a33u); f_106e41c0();
  /* 106f1a33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f1a36:;
  /* 106f1a36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1a38 jmp 0x106f1b76 */
  goto L_106f1b76;
L_106f1a3d:;
  /* 106f1a3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1a41 je 0x106f1a51 */
  if (C.zf) goto L_106f1a51;
  /* 106f1a43 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f1a45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f1a48 push eax */
  push32((uint32_t)(EAX));
  /* 106f1a49 call 0x106e41c0 */
  push32(0x106f1a4eu); f_106e41c0();
  /* 106f1a4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f1a51:;
  /* 106f1a51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f1a54 jmp 0x106f1b76 */
  goto L_106f1b76;
L_106f1a59:;
  /* 106f1a59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1a5d jne 0x106f1b73 */
  if (!C.zf) goto L_106f1b73;
  /* 106f1a63 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 106f1a6d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1a70 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 106f1a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1a78 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 106f1a7e push edx */
  push32((uint32_t)(EDX));
  /* 106f1a7f push 0x1070f750 */
  push32((uint32_t)(0x1070f750u));
  /* 106f1a84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1a87 push eax */
  push32((uint32_t)(EAX));
  /* 106f1a88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1a8b push ecx */
  push32((uint32_t)(ECX));
  /* 106f1a8c call 0x106f2b70 */
  push32(0x106f1a91u); f_106f2b70();
  /* 106f1a91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f1a96 jne 0x106f1aa0 */
  if (!C.zf) goto L_106f1aa0;
  /* 106f1a98 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f1a9b jmp 0x106f1b76 */
  goto L_106f1b76;
L_106f1aa0:;
  /* 106f1aa0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106f1aa6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106f1aa9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 106f1ab3 jmp 0x106f1ac4 */
  goto L_106f1ac4;
L_106f1ab5:;
  /* 106f1ab5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106f1abb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1abe mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_106f1ac4:;
  /* 106f1ac4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1acb jge 0x106f1b6f */
  if ((C.sf==C.of)) goto L_106f1b6f;
  /* 106f1ad1 cmp dword ptr [0x1070dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1ad8 jle 0x106f1b0b */
  if ((C.zf||C.sf!=C.of)) goto L_106f1b0b;
  /* 106f1ada push 4 */
  push32((uint32_t)(0x4u));
  /* 106f1adc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106f1ae2 mov dl, byte ptr [ecx*2 + 0x1070f750] */
  DL = (r8((uint32_t)(ECX*2 + 0x1070f750)));
  /* 106f1ae9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 106f1aef mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 106f1af5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f1afa push eax */
  push32((uint32_t)(EAX));
  /* 106f1afb call 0x106e9740 */
  push32(0x106f1b00u); f_106e9740();
  /* 106f1b00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1b03 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 106f1b09 jmp 0x106f1b3e */
  goto L_106f1b3e;
L_106f1b0b:;
  /* 106f1b0b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106f1b11 mov dl, byte ptr [ecx*2 + 0x1070f750] */
  DL = (r8((uint32_t)(ECX*2 + 0x1070f750)));
  /* 106f1b18 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 106f1b1e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 106f1b24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f1b29 mov ecx, dword ptr [0x1070dc98] */
  ECX = (r32((uint32_t)(0x1070dc98)));
  /* 106f1b2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f1b31 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106f1b35 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106f1b38 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_106f1b3e:;
  /* 106f1b3e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1b45 je 0x106f1b68 */
  if (C.zf) goto L_106f1b68;
  /* 106f1b47 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106f1b4d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106f1b50 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f1b53 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 106f1b5a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 106f1b5e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106f1b64 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106f1b66 jmp 0x106f1b6a */
  goto L_106f1b6a;
L_106f1b68:;
  /* 106f1b68 jmp 0x106f1b6f */
  goto L_106f1b6f;
L_106f1b6a:;
  /* 106f1b6a jmp 0x106f1ab5 */
  goto L_106f1ab5;
L_106f1b6f:;
  /* 106f1b6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1b71 jmp 0x106f1b76 */
  goto L_106f1b76;
L_106f1b73:;
  /* 106f1b73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106f1b76:;
  /* 106f1b76 mov esp, ebp */
  ESP = (EBP);
  /* 106f1b78 pop ebp */
  EBP = (pop32());
  /* 106f1b79 ret  */
  ESPCHK(0x106f18f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b80 @ 0x106f1b80 (10 bytes, 5 insns) */
void f_106f1b80(void) {
  FTRACE(0x106f1b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f1b80 push ebp */
  push32((uint32_t)(EBP));
  /* 106f1b81 mov ebp, esp */
  EBP = (ESP);
  /* 106f1b83 mov eax, dword ptr [0x1070ed88] */
  EAX = (r32((uint32_t)(0x1070ed88)));
  /* 106f1b88 pop ebp */
  EBP = (pop32());
  /* 106f1b89 ret  */
  ESPCHK(0x106f1b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b90 @ 0x106f1b90 (575 bytes, 196 insns) */
void f_106f1b90(void) {
  FTRACE(0x106f1b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f1b90 push ebp */
  push32((uint32_t)(EBP));
  /* 106f1b91 mov ebp, esp */
  EBP = (ESP);
  /* 106f1b93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f1b95 push 0x1070b8a8 */
  push32((uint32_t)(0x1070b8a8u));
  /* 106f1b9a push 0x106ec838 */
  push32((uint32_t)(0x106ec838u));
  /* 106f1b9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106f1ba5 push eax */
  push32((uint32_t)(EAX));
  /* 106f1ba6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106f1bad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1bb0 push ebx */
  push32((uint32_t)(EBX));
  /* 106f1bb1 push esi */
  push32((uint32_t)(ESI));
  /* 106f1bb2 push edi */
  push32((uint32_t)(EDI));
  /* 106f1bb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106f1bb6 cmp dword ptr [0x1070f75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1bbd jne 0x106f1c0e */
  if (!C.zf) goto L_106f1c0e;
  /* 106f1bbf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 106f1bc2 push eax */
  push32((uint32_t)(EAX));
  /* 106f1bc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f1bc5 push 0x1070afdc */
  push32((uint32_t)(0x1070afdcu));
  /* 106f1bca push 1 */
  push32((uint32_t)(0x1u));
  /* 106f1bcc call dword ptr [0x107122b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b0))), 0x106f1bd2u);
  /* 106f1bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f1bd4 je 0x106f1be2 */
  if (C.zf) goto L_106f1be2;
  /* 106f1bd6 mov dword ptr [0x1070f75c], 1 */
  w32((uint32_t)(0x1070f75c), (0x1u));
  /* 106f1be0 jmp 0x106f1c0e */
  goto L_106f1c0e;
L_106f1be2:;
  /* 106f1be2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 106f1be5 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1be6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f1be8 push 0x1070afd8 */
  push32((uint32_t)(0x1070afd8u));
  /* 106f1bed push 1 */
  push32((uint32_t)(0x1u));
  /* 106f1bef push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1bf1 call dword ptr [0x107122b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b4))), 0x106f1bf7u);
  /* 106f1bf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f1bf9 je 0x106f1c07 */
  if (C.zf) goto L_106f1c07;
  /* 106f1bfb mov dword ptr [0x1070f75c], 2 */
  w32((uint32_t)(0x1070f75c), (0x2u));
  /* 106f1c05 jmp 0x106f1c0e */
  goto L_106f1c0e;
L_106f1c07:;
  /* 106f1c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1c09 jmp 0x106f1de9 */
  goto L_106f1de9;
L_106f1c0e:;
  /* 106f1c0e cmp dword ptr [0x1070f75c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f75c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1c15 jne 0x106f1c32 */
  if (!C.zf) goto L_106f1c32;
  /* 106f1c17 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1c1a push edx */
  push32((uint32_t)(EDX));
  /* 106f1c1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1c1e push eax */
  push32((uint32_t)(EAX));
  /* 106f1c1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1c22 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1c23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1c26 push edx */
  push32((uint32_t)(EDX));
  /* 106f1c27 call dword ptr [0x107122b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b0))), 0x106f1c2du);
  /* 106f1c2d jmp 0x106f1de9 */
  goto L_106f1de9;
L_106f1c32:;
  /* 106f1c32 cmp dword ptr [0x1070f75c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1070f75c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1c39 jne 0x106f1de7 */
  if (!C.zf) goto L_106f1de7;
  /* 106f1c3f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1c43 jne 0x106f1c4d */
  if (!C.zf) goto L_106f1c4d;
  /* 106f1c45 mov eax, dword ptr [0x1070f6d0] */
  EAX = (r32((uint32_t)(0x1070f6d0)));
  /* 106f1c4a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_106f1c4d:;
  /* 106f1c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1c55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1c58 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1c59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1c5c push edx */
  push32((uint32_t)(EDX));
  /* 106f1c5d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106f1c62 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f1c65 push eax */
  push32((uint32_t)(EAX));
  /* 106f1c66 call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106f1c6cu);
  /* 106f1c6c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106f1c6f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1c73 jne 0x106f1c7c */
  if (!C.zf) goto L_106f1c7c;
  /* 106f1c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1c77 jmp 0x106f1de9 */
  goto L_106f1de9;
L_106f1c7c:;
  /* 106f1c7c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106f1c83 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106f1c86 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1c89 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106f1c8b call 0x106e68d0 */
  push32(0x106f1c90u); f_106e68d0();
  /* 106f1c90 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 106f1c93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106f1c96 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106f1c99 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106f1c9c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106f1c9f push edx */
  push32((uint32_t)(EDX));
  /* 106f1ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1ca2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106f1ca5 push eax */
  push32((uint32_t)(EAX));
  /* 106f1ca6 call 0x106e74a0 */
  push32(0x106f1cabu); f_106e74a0();
  /* 106f1cab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1cae mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106f1cb5 jmp 0x106f1cce */
  goto L_106f1cce;
  /* 106f1cb7 mov eax, 1 */
  EAX = (0x1u);
  /* 106f1cbc ret  */
  ESPCHK(0x106f1b90u, _esp0);
  ESP += 4; return;
  /* 106f1cbd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106f1cc0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 106f1cc7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106f1cce:;
  /* 106f1cce cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1cd2 jne 0x106f1cdb */
  if (!C.zf) goto L_106f1cdb;
  /* 106f1cd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1cd6 jmp 0x106f1de9 */
  goto L_106f1de9;
L_106f1cdb:;
  /* 106f1cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1cdd push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1cdf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106f1ce2 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1ce3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106f1ce6 push edx */
  push32((uint32_t)(EDX));
  /* 106f1ce7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1cea push eax */
  push32((uint32_t)(EAX));
  /* 106f1ceb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1cee push ecx */
  push32((uint32_t)(ECX));
  /* 106f1cef push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106f1cf4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f1cf7 push edx */
  push32((uint32_t)(EDX));
  /* 106f1cf8 call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106f1cfeu);
  /* 106f1cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f1d00 jne 0x106f1d09 */
  if (!C.zf) goto L_106f1d09;
  /* 106f1d02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1d04 jmp 0x106f1de9 */
  goto L_106f1de9;
L_106f1d09:;
  /* 106f1d09 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106f1d10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106f1d13 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 106f1d17 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1d1a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106f1d1c call 0x106e68d0 */
  push32(0x106f1d21u); f_106e68d0();
  /* 106f1d21 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 106f1d24 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106f1d27 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 106f1d2a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106f1d2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106f1d34 jmp 0x106f1d4d */
  goto L_106f1d4d;
  /* 106f1d36 mov eax, 1 */
  EAX = (0x1u);
  /* 106f1d3b ret  */
  ESPCHK(0x106f1b90u, _esp0);
  ESP += 4; return;
  /* 106f1d3c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106f1d3f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106f1d46 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106f1d4d:;
  /* 106f1d4d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1d51 jne 0x106f1d5a */
  if (!C.zf) goto L_106f1d5a;
  /* 106f1d53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1d55 jmp 0x106f1de9 */
  goto L_106f1de9;
L_106f1d5a:;
  /* 106f1d5a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1d5e jne 0x106f1d69 */
  if (!C.zf) goto L_106f1d69;
  /* 106f1d60 mov edx, dword ptr [0x1070f6c0] */
  EDX = (r32((uint32_t)(0x1070f6c0)));
  /* 106f1d66 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_106f1d69:;
  /* 106f1d69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1d6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106f1d6f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 106f1d75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1d78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106f1d7b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 106f1d82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106f1d85 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1d86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106f1d89 push edx */
  push32((uint32_t)(EDX));
  /* 106f1d8a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106f1d8d push eax */
  push32((uint32_t)(EAX));
  /* 106f1d8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1d91 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1d92 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106f1d95 push edx */
  push32((uint32_t)(EDX));
  /* 106f1d96 call dword ptr [0x107122b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b4))), 0x106f1d9cu);
  /* 106f1d9c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106f1d9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1da2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106f1da5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f1da7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 106f1dac cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1db2 je 0x106f1dc8 */
  if (C.zf) goto L_106f1dc8;
  /* 106f1db4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1db7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106f1dba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f1dbc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106f1dc0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1dc6 je 0x106f1dcc */
  if (C.zf) goto L_106f1dcc;
L_106f1dc8:;
  /* 106f1dc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1dca jmp 0x106f1de9 */
  goto L_106f1de9;
L_106f1dcc:;
  /* 106f1dcc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1dcf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106f1dd1 push eax */
  push32((uint32_t)(EAX));
  /* 106f1dd2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106f1dd5 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1dd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f1dd9 push edx */
  push32((uint32_t)(EDX));
  /* 106f1dda call 0x106eb620 */
  push32(0x106f1ddfu); f_106eb620();
  /* 106f1ddf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1de2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106f1de5 jmp 0x106f1de9 */
  goto L_106f1de9;
L_106f1de7:;
  /* 106f1de7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f1de9:;
  /* 106f1de9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 106f1dec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f1def mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106f1df6 pop edi */
  EDI = (pop32());
  /* 106f1df7 pop esi */
  ESI = (pop32());
  /* 106f1df8 pop ebx */
  EBX = (pop32());
  /* 106f1df9 mov esp, ebp */
  ESP = (EBP);
  /* 106f1dfb pop ebp */
  EBP = (pop32());
  /* 106f1dfc ret  */
  ESPCHK(0x106f1b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e00 @ 0x106f1e00 (208 bytes, 85 insns) */
void f_106f1e00(void) {
  FTRACE(0x106f1e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f1e00 push ebp */
  push32((uint32_t)(EBP));
  /* 106f1e01 mov ebp, esp */
  EBP = (ESP);
  /* 106f1e03 push edi */
  push32((uint32_t)(EDI));
  /* 106f1e04 push esi */
  push32((uint32_t)(ESI));
  /* 106f1e05 push ebx */
  push32((uint32_t)(EBX));
  /* 106f1e06 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1e09 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1e0c lea eax, [0x1070f6b8] */
  EAX = ((uint32_t)(0x1070f6b8));
  /* 106f1e12 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1e16 jne 0x106f1e53 */
  if (!C.zf) goto L_106f1e53;
  /* 106f1e18 mov al, 0xff */
  AL = (0xffu);
  /* 106f1e1a mov edi, edi */
  EDI = (EDI);
L_106f1e1c:;
  /* 106f1e1c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106f1e1e je 0x106f1e4e */
  if (C.zf) goto L_106f1e4e;
  /* 106f1e20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106f1e22 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106f1e23 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 106f1e25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106f1e26 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1e28 je 0x106f1e1c */
  if (C.zf) goto L_106f1e1c;
  /* 106f1e2a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106f1e2c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1e2e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106f1e30 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 106f1e33 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106f1e35 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106f1e37 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 106f1e39 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106f1e3b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1e3d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106f1e3f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 106f1e42 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106f1e44 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106f1e46 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1e48 je 0x106f1e1c */
  if (C.zf) goto L_106f1e1c;
  /* 106f1e4a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106f1e4c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_106f1e4e:;
  /* 106f1e4e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 106f1e51 jmp 0x106f1ecb */
  goto L_106f1ecb;
L_106f1e53:;
  /* 106f1e53 lock inc dword ptr [0x1070f84c] */
  x86_unimpl("lock inc @ 0x106f1e53");
  /* 106f1e5a cmp dword ptr [0x1070f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1e61 jg 0x106f1e67 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f1e67;
  /* 106f1e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1e65 jmp 0x106f1e7c */
  goto L_106f1e7c;
L_106f1e67:;
  /* 106f1e67 lock dec dword ptr [0x1070f84c] */
  x86_unimpl("lock dec @ 0x106f1e67");
  /* 106f1e6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106f1e70 call 0x106e7130 */
  push32(0x106f1e75u); f_106e7130();
  /* 106f1e75 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_106f1e7c:;
  /* 106f1e7c mov eax, 0xff */
  EAX = (0xffu);
  /* 106f1e81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 106f1e83 nop  */
  /* nop */
L_106f1e84:;
  /* 106f1e84 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106f1e86 je 0x106f1eaf */
  if (C.zf) goto L_106f1eaf;
  /* 106f1e88 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106f1e8a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106f1e8b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 106f1e8d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106f1e8e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1e90 je 0x106f1e84 */
  if (C.zf) goto L_106f1e84;
  /* 106f1e92 push eax */
  push32((uint32_t)(EAX));
  /* 106f1e93 push ebx */
  push32((uint32_t)(EBX));
  /* 106f1e94 call 0x106f2f70 */
  push32(0x106f1e99u); f_106f2f70();
  /* 106f1e99 mov ebx, eax */
  EBX = (EAX);
  /* 106f1e9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1e9e call 0x106f2f70 */
  push32(0x106f1ea3u); f_106f2f70();
  /* 106f1ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1ea6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1ea8 je 0x106f1e84 */
  if (C.zf) goto L_106f1e84;
  /* 106f1eaa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f1eac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_106f1eaf:;
  /* 106f1eaf mov ebx, eax */
  EBX = (EAX);
  /* 106f1eb1 pop eax */
  EAX = (pop32());
  /* 106f1eb2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1eb4 jne 0x106f1ebf */
  if (!C.zf) goto L_106f1ebf;
  /* 106f1eb6 lock dec dword ptr [0x1070f84c] */
  x86_unimpl("lock dec @ 0x106f1eb6");
  /* 106f1ebd jmp 0x106f1ec9 */
  goto L_106f1ec9;
L_106f1ebf:;
  /* 106f1ebf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106f1ec1 call 0x106e71d0 */
  push32(0x106f1ec6u); f_106e71d0();
  /* 106f1ec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f1ec9:;
  /* 106f1ec9 mov eax, ebx */
  EAX = (EBX);
L_106f1ecb:;
  /* 106f1ecb pop ebx */
  EBX = (pop32());
  /* 106f1ecc pop esi */
  ESI = (pop32());
  /* 106f1ecd pop edi */
  EDI = (pop32());
  /* 106f1ece leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106f1ecf ret  */
  ESPCHK(0x106f1e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ed0 @ 0x106f1ed0 (257 bytes, 103 insns) */
void f_106f1ed0(void) {
  FTRACE(0x106f1ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f1ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f1ed1 mov ebp, esp */
  EBP = (ESP);
  /* 106f1ed3 push edi */
  push32((uint32_t)(EDI));
  /* 106f1ed4 push esi */
  push32((uint32_t)(ESI));
  /* 106f1ed5 push ebx */
  push32((uint32_t)(EBX));
  /* 106f1ed6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f1ed9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f1edb je 0x106f1fca */
  if (C.zf) goto L_106f1fca;
  /* 106f1ee1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1ee4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 106f1ee7 lea eax, [0x1070f6b8] */
  EAX = ((uint32_t)(0x1070f6b8));
  /* 106f1eed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1ef1 jne 0x106f1f41 */
  if (!C.zf) goto L_106f1f41;
  /* 106f1ef3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 106f1ef5 mov bl, 0x5a */
  BL = (0x5au);
  /* 106f1ef7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 106f1ef9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106f1efc:;
  /* 106f1efc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 106f1efe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 106f1f00 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 106f1f02 je 0x106f1f25 */
  if (C.zf) goto L_106f1f25;
  /* 106f1f04 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106f1f06 je 0x106f1f25 */
  if (C.zf) goto L_106f1f25;
  /* 106f1f08 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106f1f09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106f1f0a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1f0c jb 0x106f1f14 */
  if (C.cf) goto L_106f1f14;
  /* 106f1f0e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1f10 ja 0x106f1f14 */
  if ((!C.cf&&!C.zf)) goto L_106f1f14;
  /* 106f1f12 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_106f1f14:;
  /* 106f1f14 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1f16 jb 0x106f1f1e */
  if (C.cf) goto L_106f1f1e;
  /* 106f1f18 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1f1a ja 0x106f1f1e */
  if ((!C.cf&&!C.zf)) goto L_106f1f1e;
  /* 106f1f1c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_106f1f1e:;
  /* 106f1f1e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1f20 jne 0x106f1f2f */
  if (!C.zf) goto L_106f1f2f;
  /* 106f1f22 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106f1f23 jne 0x106f1efc */
  if (!C.zf) goto L_106f1efc;
L_106f1f25:;
  /* 106f1f25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f1f27 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f1f29 je 0x106f1fca */
  if (C.zf) goto L_106f1fca;
L_106f1f2f:;
  /* 106f1f2f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 106f1f34 jb 0x106f1fca */
  if (C.cf) goto L_106f1fca;
  /* 106f1f3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106f1f3c jmp 0x106f1fca */
  goto L_106f1fca;
L_106f1f41:;
  /* 106f1f41 lock inc dword ptr [0x1070f84c] */
  x86_unimpl("lock inc @ 0x106f1f41");
  /* 106f1f48 cmp dword ptr [0x1070f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1f4f jg 0x106f1f55 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f1f55;
  /* 106f1f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f1f53 jmp 0x106f1f6e */
  goto L_106f1f6e;
L_106f1f55:;
  /* 106f1f55 lock dec dword ptr [0x1070f84c] */
  x86_unimpl("lock dec @ 0x106f1f55");
  /* 106f1f5c mov ebx, ecx */
  EBX = (ECX);
  /* 106f1f5e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106f1f60 call 0x106e7130 */
  push32(0x106f1f65u); f_106e7130();
  /* 106f1f65 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 106f1f6c mov ecx, ebx */
  ECX = (EBX);
L_106f1f6e:;
  /* 106f1f6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1f70 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 106f1f72 mov edi, edi */
  EDI = (EDI);
L_106f1f74:;
  /* 106f1f74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106f1f76 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1f78 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 106f1f7a je 0x106f1f9f */
  if (C.zf) goto L_106f1f9f;
  /* 106f1f7c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 106f1f7e je 0x106f1f9f */
  if (C.zf) goto L_106f1f9f;
  /* 106f1f80 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106f1f81 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106f1f82 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1f83 push eax */
  push32((uint32_t)(EAX));
  /* 106f1f84 push ebx */
  push32((uint32_t)(EBX));
  /* 106f1f85 call 0x106f2f70 */
  push32(0x106f1f8au); f_106f2f70();
  /* 106f1f8a mov ebx, eax */
  EBX = (EAX);
  /* 106f1f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1f8f call 0x106f2f70 */
  push32(0x106f1f94u); f_106f2f70();
  /* 106f1f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1f97 pop ecx */
  ECX = (pop32());
  /* 106f1f98 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1f9a jne 0x106f1fa5 */
  if (!C.zf) goto L_106f1fa5;
  /* 106f1f9c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106f1f9d jne 0x106f1f74 */
  if (!C.zf) goto L_106f1f74;
L_106f1f9f:;
  /* 106f1f9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f1fa1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1fa3 je 0x106f1fae */
  if (C.zf) goto L_106f1fae;
L_106f1fa5:;
  /* 106f1fa5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 106f1faa jb 0x106f1fae */
  if (C.cf) goto L_106f1fae;
  /* 106f1fac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_106f1fae:;
  /* 106f1fae pop eax */
  EAX = (pop32());
  /* 106f1faf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f1fb1 jne 0x106f1fbc */
  if (!C.zf) goto L_106f1fbc;
  /* 106f1fb3 lock dec dword ptr [0x1070f84c] */
  x86_unimpl("lock dec @ 0x106f1fb3");
  /* 106f1fba jmp 0x106f1fca */
  goto L_106f1fca;
L_106f1fbc:;
  /* 106f1fbc mov ebx, ecx */
  EBX = (ECX);
  /* 106f1fbe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106f1fc0 call 0x106e71d0 */
  push32(0x106f1fc5u); f_106e71d0();
  /* 106f1fc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f1fc8 mov ecx, ebx */
  ECX = (EBX);
L_106f1fca:;
  /* 106f1fca mov eax, ecx */
  EAX = (ECX);
  /* 106f1fcc pop ebx */
  EBX = (pop32());
  /* 106f1fcd pop esi */
  ESI = (pop32());
  /* 106f1fce pop edi */
  EDI = (pop32());
  /* 106f1fcf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106f1fd0 ret  */
  ESPCHK(0x106f1ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fe0 @ 0x106f1fe0 (255 bytes, 88 insns) */
void f_106f1fe0(void) {
  FTRACE(0x106f1fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f1fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f1fe1 mov ebp, esp */
  EBP = (ESP);
  /* 106f1fe3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_106f1fe6:;
  /* 106f1fe6 cmp dword ptr [0x1070dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f1fed jle 0x106f2006 */
  if ((C.zf||C.sf!=C.of)) goto L_106f2006;
  /* 106f1fef push 8 */
  push32((uint32_t)(0x8u));
  /* 106f1ff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f1ff4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f1ff6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f1ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 106f1ff9 call 0x106e9740 */
  push32(0x106f1ffeu); f_106e9740();
  /* 106f1ffe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2001 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106f2004 jmp 0x106f201f */
  goto L_106f201f;
L_106f2006:;
  /* 106f2006 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2009 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f200b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f200d mov ecx, dword ptr [0x1070dc98] */
  ECX = (r32((uint32_t)(0x1070dc98)));
  /* 106f2013 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f2015 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106f2019 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 106f201c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106f201f:;
  /* 106f201f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2023 je 0x106f2030 */
  if (C.zf) goto L_106f2030;
  /* 106f2025 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2028 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f202b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f202e jmp 0x106f1fe6 */
  goto L_106f1fe6;
L_106f2030:;
  /* 106f2030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2033 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f2035 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106f2037 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106f203a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f203d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2040 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f2043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f2046 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106f2049 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f204d je 0x106f2055 */
  if (C.zf) goto L_106f2055;
  /* 106f204f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2053 jne 0x106f2068 */
  if (!C.zf) goto L_106f2068;
L_106f2055:;
  /* 106f2055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f205a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f205c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f205f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2062 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2065 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_106f2068:;
  /* 106f2068 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106f206f:;
  /* 106f206f cmp dword ptr [0x1070dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2076 jle 0x106f208b */
  if ((C.zf||C.sf!=C.of)) goto L_106f208b;
  /* 106f2078 push 4 */
  push32((uint32_t)(0x4u));
  /* 106f207a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f207d push edx */
  push32((uint32_t)(EDX));
  /* 106f207e call 0x106e9740 */
  push32(0x106f2083u); f_106e9740();
  /* 106f2083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2086 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106f2089 jmp 0x106f20a0 */
  goto L_106f20a0;
L_106f208b:;
  /* 106f208b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f208e mov ecx, dword ptr [0x1070dc98] */
  ECX = (r32((uint32_t)(0x1070dc98)));
  /* 106f2094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f2096 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106f209a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106f209d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_106f20a0:;
  /* 106f20a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f20a4 je 0x106f20cb */
  if (C.zf) goto L_106f20cb;
  /* 106f20a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f20a9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f20ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f20af lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 106f20b3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106f20b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f20b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f20bb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f20bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f20c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f20c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f20c6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106f20c9 jmp 0x106f206f */
  goto L_106f206f;
L_106f20cb:;
  /* 106f20cb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f20cf jne 0x106f20d8 */
  if (!C.zf) goto L_106f20d8;
  /* 106f20d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f20d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106f20d6 jmp 0x106f20db */
  goto L_106f20db;
L_106f20d8:;
  /* 106f20d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106f20db:;
  /* 106f20db mov esp, ebp */
  ESP = (EBP);
  /* 106f20dd pop ebp */
  EBP = (pop32());
  /* 106f20de ret  */
  ESPCHK(0x106f1fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x106f20e0 (17 bytes, 8 insns) */
void f_106f20e0(void) {
  FTRACE(0x106f20e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f20e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f20e1 mov ebp, esp */
  EBP = (ESP);
  /* 106f20e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f20e6 push eax */
  push32((uint32_t)(EAX));
  /* 106f20e7 call 0x106f1fe0 */
  push32(0x106f20ecu); f_106f1fe0();
  /* 106f20ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f20ef pop ebp */
  EBP = (pop32());
  /* 106f20f0 ret  */
  ESPCHK(0x106f20e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012100 @ 0x106f2100 (297 bytes, 106 insns) */
void f_106f2100(void) {
  FTRACE(0x106f2100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2100 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2101 mov ebp, esp */
  EBP = (ESP);
  /* 106f2103 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f2106 push esi */
  push32((uint32_t)(ESI));
L_106f2107:;
  /* 106f2107 cmp dword ptr [0x1070dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f210e jle 0x106f2127 */
  if ((C.zf||C.sf!=C.of)) goto L_106f2127;
  /* 106f2110 push 8 */
  push32((uint32_t)(0x8u));
  /* 106f2112 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2115 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f2117 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f2119 push ecx */
  push32((uint32_t)(ECX));
  /* 106f211a call 0x106e9740 */
  push32(0x106f211fu); f_106e9740();
  /* 106f211f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2122 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106f2125 jmp 0x106f2140 */
  goto L_106f2140;
L_106f2127:;
  /* 106f2127 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f212a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f212c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f212e mov ecx, dword ptr [0x1070dc98] */
  ECX = (r32((uint32_t)(0x1070dc98)));
  /* 106f2134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f2136 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106f213a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 106f213d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_106f2140:;
  /* 106f2140 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2144 je 0x106f2151 */
  if (C.zf) goto L_106f2151;
  /* 106f2146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2149 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f214c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f214f jmp 0x106f2107 */
  goto L_106f2107;
L_106f2151:;
  /* 106f2151 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2154 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f2156 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106f2158 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106f215b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f215e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2161 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f2164 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f2167 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106f216a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f216e je 0x106f2176 */
  if (C.zf) goto L_106f2176;
  /* 106f2170 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2174 jne 0x106f2189 */
  if (!C.zf) goto L_106f2189;
L_106f2176:;
  /* 106f2176 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2179 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f217b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f217d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f2180 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2183 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2186 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_106f2189:;
  /* 106f2189 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106f2190 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106f2197:;
  /* 106f2197 cmp dword ptr [0x1070dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f219e jle 0x106f21b3 */
  if ((C.zf||C.sf!=C.of)) goto L_106f21b3;
  /* 106f21a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 106f21a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f21a5 push edx */
  push32((uint32_t)(EDX));
  /* 106f21a6 call 0x106e9740 */
  push32(0x106f21abu); f_106e9740();
  /* 106f21ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f21ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106f21b1 jmp 0x106f21c8 */
  goto L_106f21c8;
L_106f21b3:;
  /* 106f21b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f21b6 mov ecx, dword ptr [0x1070dc98] */
  ECX = (r32((uint32_t)(0x1070dc98)));
  /* 106f21bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f21be mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106f21c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106f21c5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_106f21c8:;
  /* 106f21c8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f21cc je 0x106f2209 */
  if (C.zf) goto L_106f2209;
  /* 106f21ce push 0 */
  push32((uint32_t)(0x0u));
  /* 106f21d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 106f21d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f21d5 push eax */
  push32((uint32_t)(EAX));
  /* 106f21d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f21d9 push ecx */
  push32((uint32_t)(ECX));
  /* 106f21da call 0x106f30a0 */
  push32(0x106f21dfu); f_106f30a0();
  /* 106f21df mov ecx, eax */
  ECX = (EAX);
  /* 106f21e1 mov esi, edx */
  ESI = (EDX);
  /* 106f21e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f21e6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f21e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f21ea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f21ec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106f21ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106f21f1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 106f21f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f21f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f21f9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f21fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f21fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2201 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2204 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106f2207 jmp 0x106f2197 */
  goto L_106f2197;
L_106f2209:;
  /* 106f2209 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f220d jne 0x106f221e */
  if (!C.zf) goto L_106f221e;
  /* 106f220f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2212 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106f2214 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f2217 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f221a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106f221c jmp 0x106f2224 */
  goto L_106f2224;
L_106f221e:;
  /* 106f221e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2221 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_106f2224:;
  /* 106f2224 pop esi */
  ESI = (pop32());
  /* 106f2225 mov esp, ebp */
  ESP = (EBP);
  /* 106f2227 pop ebp */
  EBP = (pop32());
  /* 106f2228 ret  */
  ESPCHK(0x106f2100u, _esp0);
  ESP += 4; return;
}

/* FUN_10012230 @ 0x106f2230 (61 bytes, 18 insns) */
void f_106f2230(void) {
  FTRACE(0x106f2230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2230 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2231 mov ebp, esp */
  EBP = (ESP);
  /* 106f2233 cmp dword ptr [0x1070f818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f223a jne 0x106f226b */
  if (!C.zf) goto L_106f226b;
  /* 106f223c push 0xb */
  push32((uint32_t)(0xbu));
  /* 106f223e call 0x106e7130 */
  push32(0x106f2243u); f_106e7130();
  /* 106f2243 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2246 cmp dword ptr [0x1070f818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f224d jne 0x106f2261 */
  if (!C.zf) goto L_106f2261;
  /* 106f224f call 0x106f2290 */
  push32(0x106f2254u); f_106f2290();
  /* 106f2254 mov eax, dword ptr [0x1070f818] */
  EAX = (r32((uint32_t)(0x1070f818)));
  /* 106f2259 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f225c mov dword ptr [0x1070f818], eax */
  w32((uint32_t)(0x1070f818), (EAX));
L_106f2261:;
  /* 106f2261 push 0xb */
  push32((uint32_t)(0xbu));
  /* 106f2263 call 0x106e71d0 */
  push32(0x106f2268u); f_106e71d0();
  /* 106f2268 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f226b:;
  /* 106f226b pop ebp */
  EBP = (pop32());
  /* 106f226c ret  */
  ESPCHK(0x106f2230u, _esp0);
  ESP += 4; return;
}

/* FUN_10012270 @ 0x106f2270 (30 bytes, 11 insns) */
void f_106f2270(void) {
  FTRACE(0x106f2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2270 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2271 mov ebp, esp */
  EBP = (ESP);
  /* 106f2273 push 0xb */
  push32((uint32_t)(0xbu));
  /* 106f2275 call 0x106e7130 */
  push32(0x106f227au); f_106e7130();
  /* 106f227a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f227d call 0x106f2290 */
  push32(0x106f2282u); f_106f2290();
  /* 106f2282 push 0xb */
  push32((uint32_t)(0xbu));
  /* 106f2284 call 0x106e71d0 */
  push32(0x106f2289u); f_106e71d0();
  /* 106f2289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f228c pop ebp */
  EBP = (pop32());
  /* 106f228d ret  */
  ESPCHK(0x106f2270u, _esp0);
  ESP += 4; return;
}

/* FUN_10012290 @ 0x106f2290 (939 bytes, 266 insns) */
void f_106f2290(void) {
  FTRACE(0x106f2290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2290 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2291 mov ebp, esp */
  EBP = (ESP);
  /* 106f2293 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f2296 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106f229d push 0xc */
  push32((uint32_t)(0xcu));
  /* 106f229f call 0x106e7130 */
  push32(0x106f22a4u); f_106e7130();
  /* 106f22a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f22a7 mov dword ptr [0x1070f760], 0 */
  w32((uint32_t)(0x1070f760), (0x0u));
  /* 106f22b1 mov dword ptr [0x1070ee38], 0xffffffff */
  w32((uint32_t)(0x1070ee38), (0xffffffffu));
  /* 106f22bb mov eax, dword ptr [0x1070ee38] */
  EAX = (r32((uint32_t)(0x1070ee38)));
  /* 106f22c0 mov dword ptr [0x1070ee28], eax */
  w32((uint32_t)(0x1070ee28), (EAX));
  /* 106f22c5 push 0x1070b908 */
  push32((uint32_t)(0x1070b908u));
  /* 106f22ca call 0x106f3110 */
  push32(0x106f22cfu); f_106f3110();
  /* 106f22cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f22d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f22d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f22d9 jne 0x106f2413 */
  if (!C.zf) goto L_106f2413;
  /* 106f22df push 0xc */
  push32((uint32_t)(0xcu));
  /* 106f22e1 call 0x106e71d0 */
  push32(0x106f22e6u); f_106e71d0();
  /* 106f22e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f22e9 push 0x1070f768 */
  push32((uint32_t)(0x1070f768u));
  /* 106f22ee call dword ptr [0x10712274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712274))), 0x106f22f4u);
  /* 106f22f4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f22f7 je 0x106f240e */
  if (C.zf) goto L_106f240e;
  /* 106f22fd mov dword ptr [0x1070f760], 1 */
  w32((uint32_t)(0x1070f760), (0x1u));
  /* 106f2307 mov ecx, dword ptr [0x1070f768] */
  ECX = (r32((uint32_t)(0x1070f768)));
  /* 106f230d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2310 mov dword ptr [0x1070ed90], ecx */
  w32((uint32_t)(0x1070ed90), (ECX));
  /* 106f2316 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f2318 mov dx, word ptr [0x1070f7ae] */
  DX = (r16((uint32_t)(0x1070f7ae)));
  /* 106f231f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f2321 je 0x106f2339 */
  if (C.zf) goto L_106f2339;
  /* 106f2323 mov eax, dword ptr [0x1070f7bc] */
  EAX = (r32((uint32_t)(0x1070f7bc)));
  /* 106f2328 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f232b mov ecx, dword ptr [0x1070ed90] */
  ECX = (r32((uint32_t)(0x1070ed90)));
  /* 106f2331 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2333 mov dword ptr [0x1070ed90], ecx */
  w32((uint32_t)(0x1070ed90), (ECX));
L_106f2339:;
  /* 106f2339 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f233b mov dx, word ptr [0x1070f802] */
  DX = (r16((uint32_t)(0x1070f802)));
  /* 106f2342 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f2344 je 0x106f236e */
  if (C.zf) goto L_106f236e;
  /* 106f2346 cmp dword ptr [0x1070f810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f234d je 0x106f236e */
  if (C.zf) goto L_106f236e;
  /* 106f234f mov dword ptr [0x1070ed94], 1 */
  w32((uint32_t)(0x1070ed94), (0x1u));
  /* 106f2359 mov eax, dword ptr [0x1070f810] */
  EAX = (r32((uint32_t)(0x1070f810)));
  /* 106f235e sub eax, dword ptr [0x1070f7bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070f7bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f2364 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2367 mov dword ptr [0x1070ed98], eax */
  w32((uint32_t)(0x1070ed98), (EAX));
  /* 106f236c jmp 0x106f2382 */
  goto L_106f2382;
L_106f236e:;
  /* 106f236e mov dword ptr [0x1070ed94], 0 */
  w32((uint32_t)(0x1070ed94), (0x0u));
  /* 106f2378 mov dword ptr [0x1070ed98], 0 */
  w32((uint32_t)(0x1070ed98), (0x0u));
L_106f2382:;
  /* 106f2382 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 106f2385 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2386 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2388 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 106f238a mov edx, dword ptr [0x1070ee1c] */
  EDX = (r32((uint32_t)(0x1070ee1c)));
  /* 106f2390 push edx */
  push32((uint32_t)(EDX));
  /* 106f2391 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f2393 push 0x1070f76c */
  push32((uint32_t)(0x1070f76cu));
  /* 106f2398 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106f239d mov eax, dword ptr [0x1070f6d0] */
  EAX = (r32((uint32_t)(0x1070f6d0)));
  /* 106f23a2 push eax */
  push32((uint32_t)(EAX));
  /* 106f23a3 call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106f23a9u);
  /* 106f23a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f23ab je 0x106f23bf */
  if (C.zf) goto L_106f23bf;
  /* 106f23ad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f23b1 jne 0x106f23bf */
  if (!C.zf) goto L_106f23bf;
  /* 106f23b3 mov ecx, dword ptr [0x1070ee1c] */
  ECX = (r32((uint32_t)(0x1070ee1c)));
  /* 106f23b9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 106f23bd jmp 0x106f23c8 */
  goto L_106f23c8;
L_106f23bf:;
  /* 106f23bf mov edx, dword ptr [0x1070ee1c] */
  EDX = (r32((uint32_t)(0x1070ee1c)));
  /* 106f23c5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_106f23c8:;
  /* 106f23c8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 106f23cb push eax */
  push32((uint32_t)(EAX));
  /* 106f23cc push 0 */
  push32((uint32_t)(0x0u));
  /* 106f23ce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 106f23d0 mov ecx, dword ptr [0x1070ee20] */
  ECX = (r32((uint32_t)(0x1070ee20)));
  /* 106f23d6 push ecx */
  push32((uint32_t)(ECX));
  /* 106f23d7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f23d9 push 0x1070f7c0 */
  push32((uint32_t)(0x1070f7c0u));
  /* 106f23de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106f23e3 mov edx, dword ptr [0x1070f6d0] */
  EDX = (r32((uint32_t)(0x1070f6d0)));
  /* 106f23e9 push edx */
  push32((uint32_t)(EDX));
  /* 106f23ea call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106f23f0u);
  /* 106f23f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f23f2 je 0x106f2405 */
  if (C.zf) goto L_106f2405;
  /* 106f23f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f23f8 jne 0x106f2405 */
  if (!C.zf) goto L_106f2405;
  /* 106f23fa mov eax, dword ptr [0x1070ee20] */
  EAX = (r32((uint32_t)(0x1070ee20)));
  /* 106f23ff mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 106f2403 jmp 0x106f240e */
  goto L_106f240e;
L_106f2405:;
  /* 106f2405 mov ecx, dword ptr [0x1070ee20] */
  ECX = (r32((uint32_t)(0x1070ee20)));
  /* 106f240b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_106f240e:;
  /* 106f240e jmp 0x106f2637 */
  goto L_106f2637;
L_106f2413:;
  /* 106f2413 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2416 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106f2419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f241b je 0x106f243d */
  if (C.zf) goto L_106f243d;
  /* 106f241d cmp dword ptr [0x1070f814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2424 je 0x106f244c */
  if (C.zf) goto L_106f244c;
  /* 106f2426 mov ecx, dword ptr [0x1070f814] */
  ECX = (r32((uint32_t)(0x1070f814)));
  /* 106f242c push ecx */
  push32((uint32_t)(ECX));
  /* 106f242d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2430 push edx */
  push32((uint32_t)(EDX));
  /* 106f2431 call 0x106ef3c0 */
  push32(0x106f2436u); f_106ef3c0();
  /* 106f2436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f243b jne 0x106f244c */
  if (!C.zf) goto L_106f244c;
L_106f243d:;
  /* 106f243d push 0xc */
  push32((uint32_t)(0xcu));
  /* 106f243f call 0x106e71d0 */
  push32(0x106f2444u); f_106e71d0();
  /* 106f2444 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2447 jmp 0x106f2637 */
  goto L_106f2637;
L_106f244c:;
  /* 106f244c push 2 */
  push32((uint32_t)(0x2u));
  /* 106f244e mov eax, dword ptr [0x1070f814] */
  EAX = (r32((uint32_t)(0x1070f814)));
  /* 106f2453 push eax */
  push32((uint32_t)(EAX));
  /* 106f2454 call 0x106e41c0 */
  push32(0x106f2459u); f_106e41c0();
  /* 106f2459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f245c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 106f2461 push 0x1070b900 */
  push32((uint32_t)(0x1070b900u));
  /* 106f2466 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f2468 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f246b push ecx */
  push32((uint32_t)(ECX));
  /* 106f246c call 0x106e6560 */
  push32(0x106f2471u); f_106e6560();
  /* 106f2471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2474 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2477 push eax */
  push32((uint32_t)(EAX));
  /* 106f2478 call 0x106e3730 */
  push32(0x106f247du); f_106e3730();
  /* 106f247d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2480 mov dword ptr [0x1070f814], eax */
  w32((uint32_t)(0x1070f814), (EAX));
  /* 106f2485 cmp dword ptr [0x1070f814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f248c jne 0x106f249d */
  if (!C.zf) goto L_106f249d;
  /* 106f248e push 0xc */
  push32((uint32_t)(0xcu));
  /* 106f2490 call 0x106e71d0 */
  push32(0x106f2495u); f_106e71d0();
  /* 106f2495 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2498 jmp 0x106f2637 */
  goto L_106f2637;
L_106f249d:;
  /* 106f249d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f24a0 push edx */
  push32((uint32_t)(EDX));
  /* 106f24a1 mov eax, dword ptr [0x1070f814] */
  EAX = (r32((uint32_t)(0x1070f814)));
  /* 106f24a6 push eax */
  push32((uint32_t)(EAX));
  /* 106f24a7 call 0x106e66e0 */
  push32(0x106f24acu); f_106e66e0();
  /* 106f24ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f24af push 0xc */
  push32((uint32_t)(0xcu));
  /* 106f24b1 call 0x106e71d0 */
  push32(0x106f24b6u); f_106e71d0();
  /* 106f24b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f24b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 106f24bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f24be push ecx */
  push32((uint32_t)(ECX));
  /* 106f24bf mov edx, dword ptr [0x1070ee1c] */
  EDX = (r32((uint32_t)(0x1070ee1c)));
  /* 106f24c5 push edx */
  push32((uint32_t)(EDX));
  /* 106f24c6 call 0x106e6f50 */
  push32(0x106f24cbu); f_106e6f50();
  /* 106f24cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f24ce mov eax, dword ptr [0x1070ee1c] */
  EAX = (r32((uint32_t)(0x1070ee1c)));
  /* 106f24d3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 106f24d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f24da add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f24dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106f24e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f24e3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106f24e6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f24e9 jne 0x106f24fd */
  if (!C.zf) goto L_106f24fd;
  /* 106f24eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f24ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f24f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f24f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f24f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f24fa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106f24fd:;
  /* 106f24fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2500 push eax */
  push32((uint32_t)(EAX));
  /* 106f2501 call 0x106f1fe0 */
  push32(0x106f2506u); f_106f1fe0();
  /* 106f2506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2509 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f250f mov dword ptr [0x1070ed90], eax */
  w32((uint32_t)(0x1070ed90), (EAX));
L_106f2514:;
  /* 106f2514 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2517 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106f251a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f251d je 0x106f2535 */
  if (C.zf) goto L_106f2535;
  /* 106f251f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2522 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106f2525 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2528 jl 0x106f2540 */
  if ((C.sf!=C.of)) goto L_106f2540;
  /* 106f252a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f252d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106f2530 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2533 jg 0x106f2540 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f2540;
L_106f2535:;
  /* 106f2535 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2538 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f253b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106f253e jmp 0x106f2514 */
  goto L_106f2514;
L_106f2540:;
  /* 106f2540 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2543 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106f2546 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2549 jne 0x106f25e5 */
  if (!C.zf) goto L_106f25e5;
  /* 106f254f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2552 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2555 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106f2558 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f255b push edx */
  push32((uint32_t)(EDX));
  /* 106f255c call 0x106f1fe0 */
  push32(0x106f2561u); f_106f1fe0();
  /* 106f2561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2564 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2567 mov ecx, dword ptr [0x1070ed90] */
  ECX = (r32((uint32_t)(0x1070ed90)));
  /* 106f256d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f256f mov dword ptr [0x1070ed90], ecx */
  w32((uint32_t)(0x1070ed90), (ECX));
L_106f2575:;
  /* 106f2575 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2578 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106f257b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f257e jl 0x106f2596 */
  if ((C.sf!=C.of)) goto L_106f2596;
  /* 106f2580 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2583 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106f2586 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2589 jg 0x106f2596 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f2596;
  /* 106f258b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f258e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2591 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f2594 jmp 0x106f2575 */
  goto L_106f2575;
L_106f2596:;
  /* 106f2596 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2599 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106f259c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f259f jne 0x106f25e5 */
  if (!C.zf) goto L_106f25e5;
  /* 106f25a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f25a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f25a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f25aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f25ad push ecx */
  push32((uint32_t)(ECX));
  /* 106f25ae call 0x106f1fe0 */
  push32(0x106f25b3u); f_106f1fe0();
  /* 106f25b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f25b6 mov edx, dword ptr [0x1070ed90] */
  EDX = (r32((uint32_t)(0x1070ed90)));
  /* 106f25bc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f25be mov dword ptr [0x1070ed90], edx */
  w32((uint32_t)(0x1070ed90), (EDX));
L_106f25c4:;
  /* 106f25c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f25c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106f25ca cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f25cd jl 0x106f25e5 */
  if ((C.sf!=C.of)) goto L_106f25e5;
  /* 106f25cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f25d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106f25d5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f25d8 jg 0x106f25e5 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f25e5;
  /* 106f25da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f25dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f25e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106f25e3 jmp 0x106f25c4 */
  goto L_106f25c4;
L_106f25e5:;
  /* 106f25e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f25e9 je 0x106f25f9 */
  if (C.zf) goto L_106f25f9;
  /* 106f25eb mov edx, dword ptr [0x1070ed90] */
  EDX = (r32((uint32_t)(0x1070ed90)));
  /* 106f25f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106f25f3 mov dword ptr [0x1070ed90], edx */
  w32((uint32_t)(0x1070ed90), (EDX));
L_106f25f9:;
  /* 106f25f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f25fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106f25ff mov dword ptr [0x1070ed94], ecx */
  w32((uint32_t)(0x1070ed94), (ECX));
  /* 106f2605 cmp dword ptr [0x1070ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f260c je 0x106f262e */
  if (C.zf) goto L_106f262e;
  /* 106f260e push 3 */
  push32((uint32_t)(0x3u));
  /* 106f2610 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f2613 push edx */
  push32((uint32_t)(EDX));
  /* 106f2614 mov eax, dword ptr [0x1070ee20] */
  EAX = (r32((uint32_t)(0x1070ee20)));
  /* 106f2619 push eax */
  push32((uint32_t)(EAX));
  /* 106f261a call 0x106e6f50 */
  push32(0x106f261fu); f_106e6f50();
  /* 106f261f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2622 mov ecx, dword ptr [0x1070ee20] */
  ECX = (r32((uint32_t)(0x1070ee20)));
  /* 106f2628 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 106f262c jmp 0x106f2637 */
  goto L_106f2637;
L_106f262e:;
  /* 106f262e mov edx, dword ptr [0x1070ee20] */
  EDX = (r32((uint32_t)(0x1070ee20)));
  /* 106f2634 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_106f2637:;
  /* 106f2637 mov esp, ebp */
  ESP = (EBP);
  /* 106f2639 pop ebp */
  EBP = (pop32());
  /* 106f263a ret  */
  ESPCHK(0x106f2290u, _esp0);
  ESP += 4; return;
}

/* FUN_10012640 @ 0x106f2640 (46 bytes, 18 insns) */
void f_106f2640(void) {
  FTRACE(0x106f2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2640 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2641 mov ebp, esp */
  EBP = (ESP);
  /* 106f2643 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2644 push 0xb */
  push32((uint32_t)(0xbu));
  /* 106f2646 call 0x106e7130 */
  push32(0x106f264bu); f_106e7130();
  /* 106f264b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f264e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2651 push eax */
  push32((uint32_t)(EAX));
  /* 106f2652 call 0x106f2670 */
  push32(0x106f2657u); f_106f2670();
  /* 106f2657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f265a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f265d push 0xb */
  push32((uint32_t)(0xbu));
  /* 106f265f call 0x106e71d0 */
  push32(0x106f2664u); f_106e71d0();
  /* 106f2664 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f266a mov esp, ebp */
  ESP = (EBP);
  /* 106f266c pop ebp */
  EBP = (pop32());
  /* 106f266d ret  */
  ESPCHK(0x106f2640u, _esp0);
  ESP += 4; return;
}

/* FUN_10012670 @ 0x106f2670 (762 bytes, 246 insns) */
void f_106f2670(void) {
  FTRACE(0x106f2670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2670 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2671 mov ebp, esp */
  EBP = (ESP);
  /* 106f2673 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2674 cmp dword ptr [0x1070ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f267b jne 0x106f2684 */
  if (!C.zf) goto L_106f2684;
  /* 106f267d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f267f jmp 0x106f2966 */
  goto L_106f2966;
L_106f2684:;
  /* 106f2684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2687 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106f268a cmp ecx, dword ptr [0x1070ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1070ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2690 jne 0x106f26a4 */
  if (!C.zf) goto L_106f26a4;
  /* 106f2692 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2695 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106f2698 cmp eax, dword ptr [0x1070ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f269e je 0x106f286b */
  if (C.zf) goto L_106f286b;
L_106f26a4:;
  /* 106f26a4 cmp dword ptr [0x1070f760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f26ab je 0x106f2825 */
  if (C.zf) goto L_106f2825;
  /* 106f26b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f26b3 mov cx, word ptr [0x1070f800] */
  CX = (r16((uint32_t)(0x1070f800)));
  /* 106f26ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f26bc jne 0x106f2719 */
  if (!C.zf) goto L_106f2719;
  /* 106f26be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f26c0 mov dx, word ptr [0x1070f80e] */
  DX = (r16((uint32_t)(0x1070f80e)));
  /* 106f26c7 push edx */
  push32((uint32_t)(EDX));
  /* 106f26c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f26ca mov ax, word ptr [0x1070f80c] */
  AX = (r16((uint32_t)(0x1070f80c)));
  /* 106f26d0 push eax */
  push32((uint32_t)(EAX));
  /* 106f26d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f26d3 mov cx, word ptr [0x1070f80a] */
  CX = (r16((uint32_t)(0x1070f80a)));
  /* 106f26da push ecx */
  push32((uint32_t)(ECX));
  /* 106f26db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f26dd mov dx, word ptr [0x1070f808] */
  DX = (r16((uint32_t)(0x1070f808)));
  /* 106f26e4 push edx */
  push32((uint32_t)(EDX));
  /* 106f26e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f26e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f26e9 mov ax, word ptr [0x1070f804] */
  AX = (r16((uint32_t)(0x1070f804)));
  /* 106f26ef push eax */
  push32((uint32_t)(EAX));
  /* 106f26f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f26f2 mov cx, word ptr [0x1070f806] */
  CX = (r16((uint32_t)(0x1070f806)));
  /* 106f26f9 push ecx */
  push32((uint32_t)(ECX));
  /* 106f26fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f26fc mov dx, word ptr [0x1070f802] */
  DX = (r16((uint32_t)(0x1070f802)));
  /* 106f2703 push edx */
  push32((uint32_t)(EDX));
  /* 106f2704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2707 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106f270a push ecx */
  push32((uint32_t)(ECX));
  /* 106f270b push 1 */
  push32((uint32_t)(0x1u));
  /* 106f270d push 1 */
  push32((uint32_t)(0x1u));
  /* 106f270f call 0x106f2970 */
  push32(0x106f2714u); f_106f2970();
  /* 106f2714 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2717 jmp 0x106f276a */
  goto L_106f276a;
L_106f2719:;
  /* 106f2719 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f271b mov dx, word ptr [0x1070f80e] */
  DX = (r16((uint32_t)(0x1070f80e)));
  /* 106f2722 push edx */
  push32((uint32_t)(EDX));
  /* 106f2723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2725 mov ax, word ptr [0x1070f80c] */
  AX = (r16((uint32_t)(0x1070f80c)));
  /* 106f272b push eax */
  push32((uint32_t)(EAX));
  /* 106f272c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f272e mov cx, word ptr [0x1070f80a] */
  CX = (r16((uint32_t)(0x1070f80a)));
  /* 106f2735 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2736 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f2738 mov dx, word ptr [0x1070f808] */
  DX = (r16((uint32_t)(0x1070f808)));
  /* 106f273f push edx */
  push32((uint32_t)(EDX));
  /* 106f2740 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2742 mov ax, word ptr [0x1070f806] */
  AX = (r16((uint32_t)(0x1070f806)));
  /* 106f2748 push eax */
  push32((uint32_t)(EAX));
  /* 106f2749 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f274b push 0 */
  push32((uint32_t)(0x0u));
  /* 106f274d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f274f mov cx, word ptr [0x1070f802] */
  CX = (r16((uint32_t)(0x1070f802)));
  /* 106f2756 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2757 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f275a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106f275d push eax */
  push32((uint32_t)(EAX));
  /* 106f275e push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2760 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2762 call 0x106f2970 */
  push32(0x106f2767u); f_106f2970();
  /* 106f2767 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f276a:;
  /* 106f276a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f276c mov cx, word ptr [0x1070f7ac] */
  CX = (r16((uint32_t)(0x1070f7ac)));
  /* 106f2773 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f2775 jne 0x106f27d2 */
  if (!C.zf) goto L_106f27d2;
  /* 106f2777 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f2779 mov dx, word ptr [0x1070f7ba] */
  DX = (r16((uint32_t)(0x1070f7ba)));
  /* 106f2780 push edx */
  push32((uint32_t)(EDX));
  /* 106f2781 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2783 mov ax, word ptr [0x1070f7b8] */
  AX = (r16((uint32_t)(0x1070f7b8)));
  /* 106f2789 push eax */
  push32((uint32_t)(EAX));
  /* 106f278a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f278c mov cx, word ptr [0x1070f7b6] */
  CX = (r16((uint32_t)(0x1070f7b6)));
  /* 106f2793 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2794 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f2796 mov dx, word ptr [0x1070f7b4] */
  DX = (r16((uint32_t)(0x1070f7b4)));
  /* 106f279d push edx */
  push32((uint32_t)(EDX));
  /* 106f279e push 0 */
  push32((uint32_t)(0x0u));
  /* 106f27a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f27a2 mov ax, word ptr [0x1070f7b0] */
  AX = (r16((uint32_t)(0x1070f7b0)));
  /* 106f27a8 push eax */
  push32((uint32_t)(EAX));
  /* 106f27a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f27ab mov cx, word ptr [0x1070f7b2] */
  CX = (r16((uint32_t)(0x1070f7b2)));
  /* 106f27b2 push ecx */
  push32((uint32_t)(ECX));
  /* 106f27b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f27b5 mov dx, word ptr [0x1070f7ae] */
  DX = (r16((uint32_t)(0x1070f7ae)));
  /* 106f27bc push edx */
  push32((uint32_t)(EDX));
  /* 106f27bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f27c0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106f27c3 push ecx */
  push32((uint32_t)(ECX));
  /* 106f27c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f27c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f27c8 call 0x106f2970 */
  push32(0x106f27cdu); f_106f2970();
  /* 106f27cd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f27d0 jmp 0x106f2823 */
  goto L_106f2823;
L_106f27d2:;
  /* 106f27d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f27d4 mov dx, word ptr [0x1070f7ba] */
  DX = (r16((uint32_t)(0x1070f7ba)));
  /* 106f27db push edx */
  push32((uint32_t)(EDX));
  /* 106f27dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f27de mov ax, word ptr [0x1070f7b8] */
  AX = (r16((uint32_t)(0x1070f7b8)));
  /* 106f27e4 push eax */
  push32((uint32_t)(EAX));
  /* 106f27e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f27e7 mov cx, word ptr [0x1070f7b6] */
  CX = (r16((uint32_t)(0x1070f7b6)));
  /* 106f27ee push ecx */
  push32((uint32_t)(ECX));
  /* 106f27ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f27f1 mov dx, word ptr [0x1070f7b4] */
  DX = (r16((uint32_t)(0x1070f7b4)));
  /* 106f27f8 push edx */
  push32((uint32_t)(EDX));
  /* 106f27f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f27fb mov ax, word ptr [0x1070f7b2] */
  AX = (r16((uint32_t)(0x1070f7b2)));
  /* 106f2801 push eax */
  push32((uint32_t)(EAX));
  /* 106f2802 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2804 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2806 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f2808 mov cx, word ptr [0x1070f7ae] */
  CX = (r16((uint32_t)(0x1070f7ae)));
  /* 106f280f push ecx */
  push32((uint32_t)(ECX));
  /* 106f2810 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2813 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106f2816 push eax */
  push32((uint32_t)(EAX));
  /* 106f2817 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2819 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f281b call 0x106f2970 */
  push32(0x106f2820u); f_106f2970();
  /* 106f2820 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f2823:;
  /* 106f2823 jmp 0x106f286b */
  goto L_106f286b;
L_106f2825:;
  /* 106f2825 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2827 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2829 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f282b push 2 */
  push32((uint32_t)(0x2u));
  /* 106f282d push 0 */
  push32((uint32_t)(0x0u));
  /* 106f282f push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2831 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2833 push 4 */
  push32((uint32_t)(0x4u));
  /* 106f2835 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2838 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106f283b push edx */
  push32((uint32_t)(EDX));
  /* 106f283c push 1 */
  push32((uint32_t)(0x1u));
  /* 106f283e push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2840 call 0x106f2970 */
  push32(0x106f2845u); f_106f2970();
  /* 106f2845 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2848 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f284a push 0 */
  push32((uint32_t)(0x0u));
  /* 106f284c push 0 */
  push32((uint32_t)(0x0u));
  /* 106f284e push 2 */
  push32((uint32_t)(0x2u));
  /* 106f2850 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2852 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2854 push 5 */
  push32((uint32_t)(0x5u));
  /* 106f2856 push 0xa */
  push32((uint32_t)(0xau));
  /* 106f2858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f285b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106f285e push ecx */
  push32((uint32_t)(ECX));
  /* 106f285f push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2861 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2863 call 0x106f2970 */
  push32(0x106f2868u); f_106f2970();
  /* 106f2868 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f286b:;
  /* 106f286b mov edx, dword ptr [0x1070ee2c] */
  EDX = (r32((uint32_t)(0x1070ee2c)));
  /* 106f2871 cmp edx, dword ptr [0x1070ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1070ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2877 jge 0x106f28c4 */
  if ((C.sf==C.of)) goto L_106f28c4;
  /* 106f2879 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f287c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106f287f cmp ecx, dword ptr [0x1070ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1070ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2885 jl 0x106f2895 */
  if ((C.sf!=C.of)) goto L_106f2895;
  /* 106f2887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f288a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106f288d cmp eax, dword ptr [0x1070ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2893 jle 0x106f289c */
  if ((C.zf||C.sf!=C.of)) goto L_106f289c;
L_106f2895:;
  /* 106f2895 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2897 jmp 0x106f2966 */
  goto L_106f2966;
L_106f289c:;
  /* 106f289c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f289f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106f28a2 cmp edx, dword ptr [0x1070ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1070ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f28a8 jle 0x106f28c2 */
  if ((C.zf||C.sf!=C.of)) goto L_106f28c2;
  /* 106f28aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f28ad mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106f28b0 cmp ecx, dword ptr [0x1070ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1070ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f28b6 jge 0x106f28c2 */
  if ((C.sf==C.of)) goto L_106f28c2;
  /* 106f28b8 mov eax, 1 */
  EAX = (0x1u);
  /* 106f28bd jmp 0x106f2966 */
  goto L_106f2966;
L_106f28c2:;
  /* 106f28c2 jmp 0x106f2907 */
  goto L_106f2907;
L_106f28c4:;
  /* 106f28c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f28c7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106f28ca cmp eax, dword ptr [0x1070ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f28d0 jl 0x106f28e0 */
  if ((C.sf!=C.of)) goto L_106f28e0;
  /* 106f28d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f28d5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106f28d8 cmp edx, dword ptr [0x1070ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1070ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f28de jle 0x106f28e7 */
  if ((C.zf||C.sf!=C.of)) goto L_106f28e7;
L_106f28e0:;
  /* 106f28e0 mov eax, 1 */
  EAX = (0x1u);
  /* 106f28e5 jmp 0x106f2966 */
  goto L_106f2966;
L_106f28e7:;
  /* 106f28e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f28ea mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106f28ed cmp ecx, dword ptr [0x1070ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1070ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f28f3 jle 0x106f2907 */
  if ((C.zf||C.sf!=C.of)) goto L_106f2907;
  /* 106f28f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f28f8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106f28fb cmp eax, dword ptr [0x1070ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2901 jge 0x106f2907 */
  if ((C.sf==C.of)) goto L_106f2907;
  /* 106f2903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2905 jmp 0x106f2966 */
  goto L_106f2966;
L_106f2907:;
  /* 106f2907 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f290a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106f290d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2913 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f2915 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2917 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f291a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106f291d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2923 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2925 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f292b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f292e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2931 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106f2934 cmp edx, dword ptr [0x1070ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1070ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f293a jne 0x106f2952 */
  if (!C.zf) goto L_106f2952;
  /* 106f293c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f293f cmp eax, dword ptr [0x1070ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2945 jl 0x106f294e */
  if ((C.sf!=C.of)) goto L_106f294e;
  /* 106f2947 mov eax, 1 */
  EAX = (0x1u);
  /* 106f294c jmp 0x106f2966 */
  goto L_106f2966;
L_106f294e:;
  /* 106f294e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2950 jmp 0x106f2966 */
  goto L_106f2966;
L_106f2952:;
  /* 106f2952 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f2955 cmp ecx, dword ptr [0x1070ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1070ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f295b jge 0x106f2964 */
  if ((C.sf==C.of)) goto L_106f2964;
  /* 106f295d mov eax, 1 */
  EAX = (0x1u);
  /* 106f2962 jmp 0x106f2966 */
  goto L_106f2966;
L_106f2964:;
  /* 106f2964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f2966:;
  /* 106f2966 mov esp, ebp */
  ESP = (EBP);
  /* 106f2968 pop ebp */
  EBP = (pop32());
  /* 106f2969 ret  */
  ESPCHK(0x106f2670u, _esp0);
  ESP += 4; return;
}

/* FUN_10012970 @ 0x106f2970 (504 bytes, 145 insns) */
void f_106f2970(void) {
  FTRACE(0x106f2970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2970 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2971 mov ebp, esp */
  EBP = (ESP);
  /* 106f2973 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f2976 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f297a jne 0x106f2a4c */
  if (!C.zf) goto L_106f2a4c;
  /* 106f2980 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f2983 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106f2986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f2988 jne 0x106f2999 */
  if (!C.zf) goto L_106f2999;
  /* 106f298a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f298d mov edx, dword ptr [ecx*4 + 0x1070ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070ee4c)));
  /* 106f2994 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106f2997 jmp 0x106f29a6 */
  goto L_106f29a6;
L_106f2999:;
  /* 106f2999 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f299c mov ecx, dword ptr [eax*4 + 0x1070ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1070ee80)));
  /* 106f29a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106f29a6:;
  /* 106f29a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f29a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f29ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106f29af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f29b2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f29b5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f29bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f29be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f29c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f29c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f29c6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 106f29c9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 106f29cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f29ce mov ecx, 7 */
  ECX = (0x7u);
  /* 106f29d3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106f29d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106f29d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f29db cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f29de jge 0x106f29f9 */
  if ((C.sf==C.of)) goto L_106f29f9;
  /* 106f29e0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106f29e3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f29e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f29e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f29ec imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f29ef add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f29f2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f29f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106f29f7 jmp 0x106f2a0d */
  goto L_106f2a0d;
L_106f29f9:;
  /* 106f29f9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106f29fc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f29ff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f2a02 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2a05 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2a08 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2a0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106f2a0d:;
  /* 106f2a0d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2a11 jne 0x106f2a4a */
  if (!C.zf) goto L_106f2a4a;
  /* 106f2a13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f2a16 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 106f2a19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f2a1b jne 0x106f2a2c */
  if (!C.zf) goto L_106f2a2c;
  /* 106f2a1d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f2a20 mov eax, dword ptr [edx*4 + 0x1070ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1070ee50)));
  /* 106f2a27 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106f2a2a jmp 0x106f2a39 */
  goto L_106f2a39;
L_106f2a2c:;
  /* 106f2a2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f2a2f mov edx, dword ptr [ecx*4 + 0x1070ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070ee84)));
  /* 106f2a36 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106f2a39:;
  /* 106f2a39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f2a3c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2a3f jle 0x106f2a4a */
  if ((C.zf||C.sf!=C.of)) goto L_106f2a4a;
  /* 106f2a41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f2a44 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f2a47 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106f2a4a:;
  /* 106f2a4a jmp 0x106f2a81 */
  goto L_106f2a81;
L_106f2a4c:;
  /* 106f2a4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f2a4f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106f2a52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f2a54 jne 0x106f2a65 */
  if (!C.zf) goto L_106f2a65;
  /* 106f2a56 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f2a59 mov ecx, dword ptr [eax*4 + 0x1070ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1070ee4c)));
  /* 106f2a60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106f2a63 jmp 0x106f2a72 */
  goto L_106f2a72;
L_106f2a65:;
  /* 106f2a65 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f2a68 mov eax, dword ptr [edx*4 + 0x1070ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1070ee80)));
  /* 106f2a6f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_106f2a72:;
  /* 106f2a72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f2a75 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106f2a78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f2a7b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2a7e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106f2a81:;
  /* 106f2a81 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2a85 jne 0x106f2ac1 */
  if (!C.zf) goto L_106f2ac1;
  /* 106f2a87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f2a8a mov dword ptr [0x1070ee2c], eax */
  w32((uint32_t)(0x1070ee2c), (EAX));
  /* 106f2a8f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 106f2a92 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2a95 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 106f2a98 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2a9a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2a9d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 106f2aa0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2aa2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2aa8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 106f2aab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2aad mov dword ptr [0x1070ee30], ecx */
  w32((uint32_t)(0x1070ee30), (ECX));
  /* 106f2ab3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f2ab6 mov dword ptr [0x1070ee28], edx */
  w32((uint32_t)(0x1070ee28), (EDX));
  /* 106f2abc jmp 0x106f2b64 */
  goto L_106f2b64;
L_106f2ac1:;
  /* 106f2ac1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f2ac4 mov dword ptr [0x1070ee3c], eax */
  w32((uint32_t)(0x1070ee3c), (EAX));
  /* 106f2ac9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 106f2acc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2acf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 106f2ad2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2ad4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2ad7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 106f2ada add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2adc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2ae2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 106f2ae5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2ae7 mov dword ptr [0x1070ee40], ecx */
  w32((uint32_t)(0x1070ee40), (ECX));
  /* 106f2aed mov edx, dword ptr [0x1070ed98] */
  EDX = (r32((uint32_t)(0x1070ed98)));
  /* 106f2af3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f2af9 mov eax, dword ptr [0x1070ee40] */
  EAX = (r32((uint32_t)(0x1070ee40)));
  /* 106f2afe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2b00 mov dword ptr [0x1070ee40], eax */
  w32((uint32_t)(0x1070ee40), (EAX));
  /* 106f2b05 cmp dword ptr [0x1070ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2b0c jge 0x106f2b31 */
  if ((C.sf==C.of)) goto L_106f2b31;
  /* 106f2b0e mov ecx, dword ptr [0x1070ee40] */
  ECX = (r32((uint32_t)(0x1070ee40)));
  /* 106f2b14 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2b1a mov dword ptr [0x1070ee40], ecx */
  w32((uint32_t)(0x1070ee40), (ECX));
  /* 106f2b20 mov edx, dword ptr [0x1070ee3c] */
  EDX = (r32((uint32_t)(0x1070ee3c)));
  /* 106f2b26 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f2b29 mov dword ptr [0x1070ee3c], edx */
  w32((uint32_t)(0x1070ee3c), (EDX));
  /* 106f2b2f jmp 0x106f2b5b */
  goto L_106f2b5b;
L_106f2b31:;
  /* 106f2b31 cmp dword ptr [0x1070ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1070ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2b3b jl 0x106f2b5b */
  if ((C.sf!=C.of)) goto L_106f2b5b;
  /* 106f2b3d mov eax, dword ptr [0x1070ee40] */
  EAX = (r32((uint32_t)(0x1070ee40)));
  /* 106f2b42 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f2b47 mov dword ptr [0x1070ee40], eax */
  w32((uint32_t)(0x1070ee40), (EAX));
  /* 106f2b4c mov ecx, dword ptr [0x1070ee3c] */
  ECX = (r32((uint32_t)(0x1070ee3c)));
  /* 106f2b52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2b55 mov dword ptr [0x1070ee3c], ecx */
  w32((uint32_t)(0x1070ee3c), (ECX));
L_106f2b5b:;
  /* 106f2b5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f2b5e mov dword ptr [0x1070ee38], edx */
  w32((uint32_t)(0x1070ee38), (EDX));
L_106f2b64:;
  /* 106f2b64 mov esp, ebp */
  ESP = (EBP);
  /* 106f2b66 pop ebp */
  EBP = (pop32());
  /* 106f2b67 ret  */
  ESPCHK(0x106f2970u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b70 @ 0x106f2b70 (382 bytes, 135 insns) */
void f_106f2b70(void) {
  FTRACE(0x106f2b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2b70 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2b71 mov ebp, esp */
  EBP = (ESP);
  /* 106f2b73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f2b75 push 0x1070b910 */
  push32((uint32_t)(0x1070b910u));
  /* 106f2b7a push 0x106ec838 */
  push32((uint32_t)(0x106ec838u));
  /* 106f2b7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106f2b85 push eax */
  push32((uint32_t)(EAX));
  /* 106f2b86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106f2b8d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2b90 push ebx */
  push32((uint32_t)(EBX));
  /* 106f2b91 push esi */
  push32((uint32_t)(ESI));
  /* 106f2b92 push edi */
  push32((uint32_t)(EDI));
  /* 106f2b93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106f2b96 cmp dword ptr [0x1070f81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2b9d jne 0x106f2be2 */
  if (!C.zf) goto L_106f2be2;
  /* 106f2b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2ba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2ba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2ba7 call dword ptr [0x10712270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712270))), 0x106f2badu);
  /* 106f2bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f2baf je 0x106f2bbd */
  if (C.zf) goto L_106f2bbd;
  /* 106f2bb1 mov dword ptr [0x1070f81c], 1 */
  w32((uint32_t)(0x1070f81c), (0x1u));
  /* 106f2bbb jmp 0x106f2be2 */
  goto L_106f2be2;
L_106f2bbd:;
  /* 106f2bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2bbf push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2bc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2bc5 call dword ptr [0x10712288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712288))), 0x106f2bcbu);
  /* 106f2bcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f2bcd je 0x106f2bdb */
  if (C.zf) goto L_106f2bdb;
  /* 106f2bcf mov dword ptr [0x1070f81c], 2 */
  w32((uint32_t)(0x1070f81c), (0x2u));
  /* 106f2bd9 jmp 0x106f2be2 */
  goto L_106f2be2;
L_106f2bdb:;
  /* 106f2bdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2bdd jmp 0x106f2cf1 */
  goto L_106f2cf1;
L_106f2be2:;
  /* 106f2be2 cmp dword ptr [0x1070f81c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f81c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2be9 jne 0x106f2c06 */
  if (!C.zf) goto L_106f2c06;
  /* 106f2beb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f2bee push eax */
  push32((uint32_t)(EAX));
  /* 106f2bef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f2bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2bf3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f2bf6 push edx */
  push32((uint32_t)(EDX));
  /* 106f2bf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2bfa push eax */
  push32((uint32_t)(EAX));
  /* 106f2bfb call dword ptr [0x10712270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712270))), 0x106f2c01u);
  /* 106f2c01 jmp 0x106f2cf1 */
  goto L_106f2cf1;
L_106f2c06:;
  /* 106f2c06 cmp dword ptr [0x1070f81c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1070f81c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2c0d jne 0x106f2cef */
  if (!C.zf) goto L_106f2cef;
  /* 106f2c13 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2c17 jne 0x106f2c22 */
  if (!C.zf) goto L_106f2c22;
  /* 106f2c19 mov ecx, dword ptr [0x1070f6d0] */
  ECX = (r32((uint32_t)(0x1070f6d0)));
  /* 106f2c1f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_106f2c22:;
  /* 106f2c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2c26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f2c29 push edx */
  push32((uint32_t)(EDX));
  /* 106f2c2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2c2d push eax */
  push32((uint32_t)(EAX));
  /* 106f2c2e call dword ptr [0x10712288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712288))), 0x106f2c34u);
  /* 106f2c34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106f2c37 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2c3b jne 0x106f2c44 */
  if (!C.zf) goto L_106f2c44;
  /* 106f2c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2c3f jmp 0x106f2cf1 */
  goto L_106f2cf1;
L_106f2c44:;
  /* 106f2c44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106f2c4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106f2c4e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2c51 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106f2c53 call 0x106e68d0 */
  push32(0x106f2c58u); f_106e68d0();
  /* 106f2c58 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 106f2c5b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106f2c5e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106f2c61 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106f2c64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106f2c6b jmp 0x106f2c84 */
  goto L_106f2c84;
  /* 106f2c6d mov eax, 1 */
  EAX = (0x1u);
  /* 106f2c72 ret  */
  ESPCHK(0x106f2b70u, _esp0);
  ESP += 4; return;
  /* 106f2c73 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106f2c76 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106f2c7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106f2c84:;
  /* 106f2c84 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2c88 jne 0x106f2c8e */
  if (!C.zf) goto L_106f2c8e;
  /* 106f2c8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2c8c jmp 0x106f2cf1 */
  goto L_106f2cf1;
L_106f2c8e:;
  /* 106f2c8e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106f2c91 push edx */
  push32((uint32_t)(EDX));
  /* 106f2c92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106f2c95 push eax */
  push32((uint32_t)(EAX));
  /* 106f2c96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f2c99 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2c9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2c9d push edx */
  push32((uint32_t)(EDX));
  /* 106f2c9e call dword ptr [0x10712288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712288))), 0x106f2ca4u);
  /* 106f2ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f2ca6 jne 0x106f2cac */
  if (!C.zf) goto L_106f2cac;
  /* 106f2ca8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2caa jmp 0x106f2cf1 */
  goto L_106f2cf1;
L_106f2cac:;
  /* 106f2cac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2cb0 jne 0x106f2ccd */
  if (!C.zf) goto L_106f2ccd;
  /* 106f2cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2cb6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f2cb8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106f2cbb push eax */
  push32((uint32_t)(EAX));
  /* 106f2cbc push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2cbe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f2cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2cc2 call dword ptr [0x107122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b8))), 0x106f2cc8u);
  /* 106f2cc8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106f2ccb jmp 0x106f2cea */
  goto L_106f2cea;
L_106f2ccd:;
  /* 106f2ccd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f2cd0 push edx */
  push32((uint32_t)(EDX));
  /* 106f2cd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f2cd4 push eax */
  push32((uint32_t)(EAX));
  /* 106f2cd5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f2cd7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106f2cda push ecx */
  push32((uint32_t)(ECX));
  /* 106f2cdb push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2cdd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f2ce0 push edx */
  push32((uint32_t)(EDX));
  /* 106f2ce1 call dword ptr [0x107122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b8))), 0x106f2ce7u);
  /* 106f2ce7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106f2cea:;
  /* 106f2cea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106f2ced jmp 0x106f2cf1 */
  goto L_106f2cf1;
L_106f2cef:;
  /* 106f2cef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f2cf1:;
  /* 106f2cf1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 106f2cf4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f2cf7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106f2cfe pop edi */
  EDI = (pop32());
  /* 106f2cff pop esi */
  ESI = (pop32());
  /* 106f2d00 pop ebx */
  EBX = (pop32());
  /* 106f2d01 mov esp, ebp */
  ESP = (EBP);
  /* 106f2d03 pop ebp */
  EBP = (pop32());
  /* 106f2d04 ret  */
  ESPCHK(0x106f2b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d10 @ 0x106f2d10 (398 bytes, 140 insns) */
void f_106f2d10(void) {
  FTRACE(0x106f2d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2d10 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2d11 mov ebp, esp */
  EBP = (ESP);
  /* 106f2d13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f2d15 push 0x1070b920 */
  push32((uint32_t)(0x1070b920u));
  /* 106f2d1a push 0x106ec838 */
  push32((uint32_t)(0x106ec838u));
  /* 106f2d1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106f2d25 push eax */
  push32((uint32_t)(EAX));
  /* 106f2d26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106f2d2d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2d30 push ebx */
  push32((uint32_t)(EBX));
  /* 106f2d31 push esi */
  push32((uint32_t)(ESI));
  /* 106f2d32 push edi */
  push32((uint32_t)(EDI));
  /* 106f2d33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106f2d36 cmp dword ptr [0x1070f820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2d3d jne 0x106f2d82 */
  if (!C.zf) goto L_106f2d82;
  /* 106f2d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2d41 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2d43 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2d47 call dword ptr [0x10712270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712270))), 0x106f2d4du);
  /* 106f2d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f2d4f je 0x106f2d5d */
  if (C.zf) goto L_106f2d5d;
  /* 106f2d51 mov dword ptr [0x1070f820], 1 */
  w32((uint32_t)(0x1070f820), (0x1u));
  /* 106f2d5b jmp 0x106f2d82 */
  goto L_106f2d82;
L_106f2d5d:;
  /* 106f2d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2d61 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2d65 call dword ptr [0x10712288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712288))), 0x106f2d6bu);
  /* 106f2d6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f2d6d je 0x106f2d7b */
  if (C.zf) goto L_106f2d7b;
  /* 106f2d6f mov dword ptr [0x1070f820], 2 */
  w32((uint32_t)(0x1070f820), (0x2u));
  /* 106f2d79 jmp 0x106f2d82 */
  goto L_106f2d82;
L_106f2d7b:;
  /* 106f2d7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2d7d jmp 0x106f2ea1 */
  goto L_106f2ea1;
L_106f2d82:;
  /* 106f2d82 cmp dword ptr [0x1070f820], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1070f820))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2d89 jne 0x106f2da6 */
  if (!C.zf) goto L_106f2da6;
  /* 106f2d8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f2d8e push eax */
  push32((uint32_t)(EAX));
  /* 106f2d8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f2d92 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2d93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f2d96 push edx */
  push32((uint32_t)(EDX));
  /* 106f2d97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2d9a push eax */
  push32((uint32_t)(EAX));
  /* 106f2d9b call dword ptr [0x10712288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712288))), 0x106f2da1u);
  /* 106f2da1 jmp 0x106f2ea1 */
  goto L_106f2ea1;
L_106f2da6:;
  /* 106f2da6 cmp dword ptr [0x1070f820], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f820))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2dad jne 0x106f2e9f */
  if (!C.zf) goto L_106f2e9f;
  /* 106f2db3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2db7 jne 0x106f2dc2 */
  if (!C.zf) goto L_106f2dc2;
  /* 106f2db9 mov ecx, dword ptr [0x1070f6d0] */
  ECX = (r32((uint32_t)(0x1070f6d0)));
  /* 106f2dbf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_106f2dc2:;
  /* 106f2dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2dc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f2dc9 push edx */
  push32((uint32_t)(EDX));
  /* 106f2dca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2dcd push eax */
  push32((uint32_t)(EAX));
  /* 106f2dce call dword ptr [0x10712270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712270))), 0x106f2dd4u);
  /* 106f2dd4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106f2dd7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2ddb jne 0x106f2de4 */
  if (!C.zf) goto L_106f2de4;
  /* 106f2ddd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2ddf jmp 0x106f2ea1 */
  goto L_106f2ea1;
L_106f2de4:;
  /* 106f2de4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106f2deb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106f2dee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106f2df0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2df3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106f2df5 call 0x106e68d0 */
  push32(0x106f2dfau); f_106e68d0();
  /* 106f2dfa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 106f2dfd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106f2e00 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106f2e03 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106f2e06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106f2e0d jmp 0x106f2e26 */
  goto L_106f2e26;
  /* 106f2e0f mov eax, 1 */
  EAX = (0x1u);
  /* 106f2e14 ret  */
  ESPCHK(0x106f2d10u, _esp0);
  ESP += 4; return;
  /* 106f2e15 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106f2e18 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106f2e1f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106f2e26:;
  /* 106f2e26 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2e2a jne 0x106f2e30 */
  if (!C.zf) goto L_106f2e30;
  /* 106f2e2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2e2e jmp 0x106f2ea1 */
  goto L_106f2ea1;
L_106f2e30:;
  /* 106f2e30 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106f2e33 push edx */
  push32((uint32_t)(EDX));
  /* 106f2e34 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106f2e37 push eax */
  push32((uint32_t)(EAX));
  /* 106f2e38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f2e3b push ecx */
  push32((uint32_t)(ECX));
  /* 106f2e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2e3f push edx */
  push32((uint32_t)(EDX));
  /* 106f2e40 call dword ptr [0x10712270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712270))), 0x106f2e46u);
  /* 106f2e46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f2e48 jne 0x106f2e4e */
  if (!C.zf) goto L_106f2e4e;
  /* 106f2e4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f2e4c jmp 0x106f2ea1 */
  goto L_106f2ea1;
L_106f2e4e:;
  /* 106f2e4e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2e52 jne 0x106f2e76 */
  if (!C.zf) goto L_106f2e76;
  /* 106f2e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2e5c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f2e5e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106f2e61 push eax */
  push32((uint32_t)(EAX));
  /* 106f2e62 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106f2e67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f2e6a push ecx */
  push32((uint32_t)(ECX));
  /* 106f2e6b call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106f2e71u);
  /* 106f2e71 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106f2e74 jmp 0x106f2e9a */
  goto L_106f2e9a;
L_106f2e76:;
  /* 106f2e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2e78 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f2e7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f2e7d push edx */
  push32((uint32_t)(EDX));
  /* 106f2e7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f2e81 push eax */
  push32((uint32_t)(EAX));
  /* 106f2e82 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f2e84 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106f2e87 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2e88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106f2e8d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f2e90 push edx */
  push32((uint32_t)(EDX));
  /* 106f2e91 call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106f2e97u);
  /* 106f2e97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106f2e9a:;
  /* 106f2e9a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106f2e9d jmp 0x106f2ea1 */
  goto L_106f2ea1;
L_106f2e9f:;
  /* 106f2e9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f2ea1:;
  /* 106f2ea1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 106f2ea4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f2ea7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106f2eae pop edi */
  EDI = (pop32());
  /* 106f2eaf pop esi */
  ESI = (pop32());
  /* 106f2eb0 pop ebx */
  EBX = (pop32());
  /* 106f2eb1 mov esp, ebp */
  ESP = (EBP);
  /* 106f2eb3 pop ebp */
  EBP = (pop32());
  /* 106f2eb4 ret  */
  ESPCHK(0x106f2d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ec0 @ 0x106f2ec0 (11 bytes, 6 insns) */
void f_106f2ec0(void) {
  FTRACE(0x106f2ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2ec1 mov ebp, esp */
  EBP = (ESP);
  /* 106f2ec3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2ec6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2ec9 pop ebp */
  EBP = (pop32());
  /* 106f2eca ret  */
  ESPCHK(0x106f2ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ed0 @ 0x106f2ed0 (147 bytes, 43 insns) */
void f_106f2ed0(void) {
  FTRACE(0x106f2ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2ed1 mov ebp, esp */
  EBP = (ESP);
  /* 106f2ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2ed4 cmp dword ptr [0x1070f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2edb jne 0x106f2ef7 */
  if (!C.zf) goto L_106f2ef7;
  /* 106f2edd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2ee1 jl 0x106f2ef2 */
  if ((C.sf!=C.of)) goto L_106f2ef2;
  /* 106f2ee3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2ee7 jg 0x106f2ef2 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f2ef2;
  /* 106f2ee9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2eec add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2eef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106f2ef2:;
  /* 106f2ef2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2ef5 jmp 0x106f2f5f */
  goto L_106f2f5f;
L_106f2ef7:;
  /* 106f2ef7 push 0x1070f84c */
  push32((uint32_t)(0x1070f84cu));
  /* 106f2efc call dword ptr [0x107122e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122e0))), 0x106f2f02u);
  /* 106f2f02 cmp dword ptr [0x1070f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2f09 je 0x106f2f29 */
  if (C.zf) goto L_106f2f29;
  /* 106f2f0b push 0x1070f84c */
  push32((uint32_t)(0x1070f84cu));
  /* 106f2f10 call dword ptr [0x107122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d0))), 0x106f2f16u);
  /* 106f2f16 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106f2f18 call 0x106e7130 */
  push32(0x106f2f1du); f_106e7130();
  /* 106f2f1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2f20 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106f2f27 jmp 0x106f2f30 */
  goto L_106f2f30;
L_106f2f29:;
  /* 106f2f29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106f2f30:;
  /* 106f2f30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2f33 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2f34 call 0x106f2f70 */
  push32(0x106f2f39u); f_106f2f70();
  /* 106f2f39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2f3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f2f3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2f43 je 0x106f2f51 */
  if (C.zf) goto L_106f2f51;
  /* 106f2f45 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106f2f47 call 0x106e71d0 */
  push32(0x106f2f4cu); f_106e71d0();
  /* 106f2f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2f4f jmp 0x106f2f5c */
  goto L_106f2f5c;
L_106f2f51:;
  /* 106f2f51 push 0x1070f84c */
  push32((uint32_t)(0x1070f84cu));
  /* 106f2f56 call dword ptr [0x107122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d0))), 0x106f2f5cu);
L_106f2f5c:;
  /* 106f2f5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_106f2f5f:;
  /* 106f2f5f mov esp, ebp */
  ESP = (EBP);
  /* 106f2f61 pop ebp */
  EBP = (pop32());
  /* 106f2f62 ret  */
  ESPCHK(0x106f2ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f70 @ 0x106f2f70 (299 bytes, 91 insns) */
void f_106f2f70(void) {
  FTRACE(0x106f2f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f2f70 push ebp */
  push32((uint32_t)(EBP));
  /* 106f2f71 mov ebp, esp */
  EBP = (ESP);
  /* 106f2f73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f2f76 cmp dword ptr [0x1070f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2f7d jne 0x106f2f9c */
  if (!C.zf) goto L_106f2f9c;
  /* 106f2f7f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2f83 jl 0x106f2f94 */
  if ((C.sf!=C.of)) goto L_106f2f94;
  /* 106f2f85 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2f89 jg 0x106f2f94 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f2f94;
  /* 106f2f8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2f8e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2f91 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106f2f94:;
  /* 106f2f94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2f97 jmp 0x106f3097 */
  goto L_106f3097;
L_106f2f9c:;
  /* 106f2f9c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2fa3 jge 0x106f2fe3 */
  if ((C.sf==C.of)) goto L_106f2fe3;
  /* 106f2fa5 cmp dword ptr [0x1070dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2fac jle 0x106f2fc1 */
  if ((C.zf||C.sf!=C.of)) goto L_106f2fc1;
  /* 106f2fae push 1 */
  push32((uint32_t)(0x1u));
  /* 106f2fb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 106f2fb4 call 0x106e9740 */
  push32(0x106f2fb9u); f_106e9740();
  /* 106f2fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f2fbc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106f2fbf jmp 0x106f2fd5 */
  goto L_106f2fd5;
L_106f2fc1:;
  /* 106f2fc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2fc4 mov eax, dword ptr [0x1070dc98] */
  EAX = (r32((uint32_t)(0x1070dc98)));
  /* 106f2fc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f2fcb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 106f2fcf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106f2fd2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106f2fd5:;
  /* 106f2fd5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f2fd9 jne 0x106f2fe3 */
  if (!C.zf) goto L_106f2fe3;
  /* 106f2fdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2fde jmp 0x106f3097 */
  goto L_106f3097;
L_106f2fe3:;
  /* 106f2fe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f2fe6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 106f2fe9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106f2fef and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106f2ff5 mov eax, dword ptr [0x1070dc98] */
  EAX = (r32((uint32_t)(0x1070dc98)));
  /* 106f2ffa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f2ffc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 106f3000 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 106f3006 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f3008 je 0x106f302c */
  if (C.zf) goto L_106f302c;
  /* 106f300a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f300d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 106f3010 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106f3016 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 106f3019 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 106f301c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 106f301f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 106f3023 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 106f302a jmp 0x106f303d */
  goto L_106f303d;
L_106f302c:;
  /* 106f302c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 106f302f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 106f3032 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 106f3036 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_106f303d:;
  /* 106f303d push 1 */
  push32((uint32_t)(0x1u));
  /* 106f303f push 0 */
  push32((uint32_t)(0x0u));
  /* 106f3041 push 3 */
  push32((uint32_t)(0x3u));
  /* 106f3043 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 106f3046 push edx */
  push32((uint32_t)(EDX));
  /* 106f3047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f304a push eax */
  push32((uint32_t)(EAX));
  /* 106f304b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 106f304e push ecx */
  push32((uint32_t)(ECX));
  /* 106f304f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106f3054 mov edx, dword ptr [0x1070f6c0] */
  EDX = (r32((uint32_t)(0x1070f6c0)));
  /* 106f305a push edx */
  push32((uint32_t)(EDX));
  /* 106f305b call 0x106ebb20 */
  push32(0x106f3060u); f_106ebb20();
  /* 106f3060 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3063 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f3066 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f306a jne 0x106f3071 */
  if (!C.zf) goto L_106f3071;
  /* 106f306c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f306f jmp 0x106f3097 */
  goto L_106f3097;
L_106f3071:;
  /* 106f3071 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3075 jne 0x106f3081 */
  if (!C.zf) goto L_106f3081;
  /* 106f3077 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f307a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f307f jmp 0x106f3097 */
  goto L_106f3097;
L_106f3081:;
  /* 106f3081 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3084 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f3089 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 106f308c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106f3092 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 106f3095 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_106f3097:;
  /* 106f3097 mov esp, ebp */
  ESP = (EBP);
  /* 106f3099 pop ebp */
  EBP = (pop32());
  /* 106f309a ret  */
  ESPCHK(0x106f2f70u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x106f30a0 (52 bytes, 19 insns) */
void f_106f30a0(void) {
  FTRACE(0x106f30a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f30a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106f30a4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 106f30a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106f30aa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 106f30ae jne 0x106f30b9 */
  if (!C.zf) goto L_106f30b9;
  /* 106f30b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 106f30b4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106f30b6 ret 0x10 */
  ESPCHK(0x106f30a0u, _esp0);
  ESP += 20; return;
L_106f30b9:;
  /* 106f30b9 push ebx */
  push32((uint32_t)(EBX));
  /* 106f30ba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106f30bc mov ebx, eax */
  EBX = (EAX);
  /* 106f30be mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106f30c2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106f30c6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f30c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106f30cc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106f30ce add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f30d0 pop ebx */
  EBX = (pop32());
  /* 106f30d1 ret 0x10 */
  ESPCHK(0x106f30a0u, _esp0);
  ESP += 20; return;
}

/* FUN_100130e0 @ 0x106f30e0 (46 bytes, 18 insns) */
void f_106f30e0(void) {
  FTRACE(0x106f30e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f30e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f30e1 mov ebp, esp */
  EBP = (ESP);
  /* 106f30e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106f30e4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 106f30e6 call 0x106e7130 */
  push32(0x106f30ebu); f_106e7130();
  /* 106f30eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f30ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f30f1 push eax */
  push32((uint32_t)(EAX));
  /* 106f30f2 call 0x106f3110 */
  push32(0x106f30f7u); f_106f3110();
  /* 106f30f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f30fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f30fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 106f30ff call 0x106e71d0 */
  push32(0x106f3104u); f_106e71d0();
  /* 106f3104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f310a mov esp, ebp */
  ESP = (EBP);
  /* 106f310c pop ebp */
  EBP = (pop32());
  /* 106f310d ret  */
  ESPCHK(0x106f30e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x106f3110 (198 bytes, 69 insns) */
void f_106f3110(void) {
  FTRACE(0x106f3110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f3110 push ebp */
  push32((uint32_t)(EBP));
  /* 106f3111 mov ebp, esp */
  EBP = (ESP);
  /* 106f3113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f3116 mov eax, dword ptr [0x1070f4dc] */
  EAX = (r32((uint32_t)(0x1070f4dc)));
  /* 106f311b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f311e cmp dword ptr [0x10710fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3125 jne 0x106f312e */
  if (!C.zf) goto L_106f312e;
  /* 106f3127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f3129 jmp 0x106f31d2 */
  goto L_106f31d2;
L_106f312e:;
  /* 106f312e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3132 jne 0x106f3156 */
  if (!C.zf) goto L_106f3156;
  /* 106f3134 cmp dword ptr [0x1070f4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f313b je 0x106f3156 */
  if (C.zf) goto L_106f3156;
  /* 106f313d call 0x106f3230 */
  push32(0x106f3142u); f_106f3230();
  /* 106f3142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f3144 je 0x106f314d */
  if (C.zf) goto L_106f314d;
  /* 106f3146 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f3148 jmp 0x106f31d2 */
  goto L_106f31d2;
L_106f314d:;
  /* 106f314d mov ecx, dword ptr [0x1070f4dc] */
  ECX = (r32((uint32_t)(0x1070f4dc)));
  /* 106f3153 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106f3156:;
  /* 106f3156 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f315a je 0x106f31d0 */
  if (C.zf) goto L_106f31d0;
  /* 106f315c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3160 je 0x106f31d0 */
  if (C.zf) goto L_106f31d0;
  /* 106f3162 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3165 push edx */
  push32((uint32_t)(EDX));
  /* 106f3166 call 0x106e6560 */
  push32(0x106f316bu); f_106e6560();
  /* 106f316b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f316e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106f3171:;
  /* 106f3171 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3174 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3177 je 0x106f31d0 */
  if (C.zf) goto L_106f31d0;
  /* 106f3179 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f317c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f317e push edx */
  push32((uint32_t)(EDX));
  /* 106f317f call 0x106e6560 */
  push32(0x106f3184u); f_106e6560();
  /* 106f3184 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3187 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f318a jbe 0x106f31c5 */
  if ((C.cf||C.zf)) goto L_106f31c5;
  /* 106f318c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f318f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f3191 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3194 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 106f3198 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f319b jne 0x106f31c5 */
  if (!C.zf) goto L_106f31c5;
  /* 106f319d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f31a0 push ecx */
  push32((uint32_t)(ECX));
  /* 106f31a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f31a4 push edx */
  push32((uint32_t)(EDX));
  /* 106f31a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f31a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f31aa push ecx */
  push32((uint32_t)(ECX));
  /* 106f31ab call 0x106f31e0 */
  push32(0x106f31b0u); f_106f31e0();
  /* 106f31b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f31b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f31b5 jne 0x106f31c5 */
  if (!C.zf) goto L_106f31c5;
  /* 106f31b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f31ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f31bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f31bf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 106f31c3 jmp 0x106f31d2 */
  goto L_106f31d2;
L_106f31c5:;
  /* 106f31c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f31c8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f31cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106f31ce jmp 0x106f3171 */
  goto L_106f3171;
L_106f31d0:;
  /* 106f31d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f31d2:;
  /* 106f31d2 mov esp, ebp */
  ESP = (EBP);
  /* 106f31d4 pop ebp */
  EBP = (pop32());
  /* 106f31d5 ret  */
  ESPCHK(0x106f3110u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x106f31e0 (79 bytes, 32 insns) */
void f_106f31e0(void) {
  FTRACE(0x106f31e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f31e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f31e1 mov ebp, esp */
  EBP = (ESP);
  /* 106f31e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106f31e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f31e8 jne 0x106f31ee */
  if (!C.zf) goto L_106f31ee;
  /* 106f31ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f31ec jmp 0x106f322b */
  goto L_106f322b;
L_106f31ee:;
  /* 106f31ee mov eax, dword ptr [0x10710ba4] */
  EAX = (r32((uint32_t)(0x10710ba4)));
  /* 106f31f3 push eax */
  push32((uint32_t)(EAX));
  /* 106f31f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f31f7 push ecx */
  push32((uint32_t)(ECX));
  /* 106f31f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f31fb push edx */
  push32((uint32_t)(EDX));
  /* 106f31fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f31ff push eax */
  push32((uint32_t)(EAX));
  /* 106f3200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3203 push ecx */
  push32((uint32_t)(ECX));
  /* 106f3204 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f3206 mov edx, dword ptr [0x10710e44] */
  EDX = (r32((uint32_t)(0x10710e44)));
  /* 106f320c push edx */
  push32((uint32_t)(EDX));
  /* 106f320d call 0x106f32e0 */
  push32(0x106f3212u); f_106f32e0();
  /* 106f3212 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3215 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f3218 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f321c jne 0x106f3225 */
  if (!C.zf) goto L_106f3225;
  /* 106f321e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 106f3223 jmp 0x106f322b */
  goto L_106f322b;
L_106f3225:;
  /* 106f3225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3228 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_106f322b:;
  /* 106f322b mov esp, ebp */
  ESP = (EBP);
  /* 106f322d pop ebp */
  EBP = (pop32());
  /* 106f322e ret  */
  ESPCHK(0x106f31e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013230 @ 0x106f3230 (174 bytes, 66 insns) */
void f_106f3230(void) {
  FTRACE(0x106f3230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f3230 push ebp */
  push32((uint32_t)(EBP));
  /* 106f3231 mov ebp, esp */
  EBP = (ESP);
  /* 106f3233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f3236 mov eax, dword ptr [0x1070f4e4] */
  EAX = (r32((uint32_t)(0x1070f4e4)));
  /* 106f323b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106f323e:;
  /* 106f323e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3241 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3244 je 0x106f32d8 */
  if (C.zf) goto L_106f32d8;
  /* 106f324a push 0 */
  push32((uint32_t)(0x0u));
  /* 106f324c push 0 */
  push32((uint32_t)(0x0u));
  /* 106f324e push 0 */
  push32((uint32_t)(0x0u));
  /* 106f3250 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f3252 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f3254 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3257 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f3259 push eax */
  push32((uint32_t)(EAX));
  /* 106f325a push 0 */
  push32((uint32_t)(0x0u));
  /* 106f325c push 1 */
  push32((uint32_t)(0x1u));
  /* 106f325e call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106f3264u);
  /* 106f3264 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f3267 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f326b jne 0x106f3272 */
  if (!C.zf) goto L_106f3272;
  /* 106f326d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f3270 jmp 0x106f32da */
  goto L_106f32da;
L_106f3272:;
  /* 106f3272 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 106f3274 push 0x1070b92c */
  push32((uint32_t)(0x1070b92cu));
  /* 106f3279 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f327b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f327e push ecx */
  push32((uint32_t)(ECX));
  /* 106f327f call 0x106e3730 */
  push32(0x106f3284u); f_106e3730();
  /* 106f3284 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3287 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f328a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f328e jne 0x106f3295 */
  if (!C.zf) goto L_106f3295;
  /* 106f3290 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f3293 jmp 0x106f32da */
  goto L_106f32da;
L_106f3295:;
  /* 106f3295 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f3297 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f3299 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f329c push edx */
  push32((uint32_t)(EDX));
  /* 106f329d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f32a0 push eax */
  push32((uint32_t)(EAX));
  /* 106f32a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f32a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f32a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f32a8 push edx */
  push32((uint32_t)(EDX));
  /* 106f32a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f32ab push 1 */
  push32((uint32_t)(0x1u));
  /* 106f32ad call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106f32b3u);
  /* 106f32b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f32b5 jne 0x106f32bc */
  if (!C.zf) goto L_106f32bc;
  /* 106f32b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f32ba jmp 0x106f32da */
  goto L_106f32da;
L_106f32bc:;
  /* 106f32bc push 0 */
  push32((uint32_t)(0x0u));
  /* 106f32be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f32c1 push eax */
  push32((uint32_t)(EAX));
  /* 106f32c2 call 0x106f3730 */
  push32(0x106f32c7u); f_106f3730();
  /* 106f32c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f32ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f32cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f32d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f32d3 jmp 0x106f323e */
  goto L_106f323e;
L_106f32d8:;
  /* 106f32d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f32da:;
  /* 106f32da mov esp, ebp */
  ESP = (EBP);
  /* 106f32dc pop ebp */
  EBP = (pop32());
  /* 106f32dd ret  */
  ESPCHK(0x106f3230u, _esp0);
  ESP += 4; return;
}

/* FUN_100132e0 @ 0x106f32e0 (970 bytes, 340 insns) */
void f_106f32e0(void) {
  FTRACE(0x106f32e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f32e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f32e1 mov ebp, esp */
  EBP = (ESP);
  /* 106f32e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106f32e5 push 0x1070b980 */
  push32((uint32_t)(0x1070b980u));
  /* 106f32ea push 0x106ec838 */
  push32((uint32_t)(0x106ec838u));
  /* 106f32ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106f32f5 push eax */
  push32((uint32_t)(EAX));
  /* 106f32f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106f32fd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3300 push ebx */
  push32((uint32_t)(EBX));
  /* 106f3301 push esi */
  push32((uint32_t)(ESI));
  /* 106f3302 push edi */
  push32((uint32_t)(EDI));
  /* 106f3303 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106f3306 cmp dword ptr [0x1070f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f330d jne 0x106f3366 */
  if (!C.zf) goto L_106f3366;
  /* 106f330f push 1 */
  push32((uint32_t)(0x1u));
  /* 106f3311 push 0x1070afdc */
  push32((uint32_t)(0x1070afdcu));
  /* 106f3316 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f3318 push 0x1070afdc */
  push32((uint32_t)(0x1070afdcu));
  /* 106f331d push 0 */
  push32((uint32_t)(0x0u));
  /* 106f331f push 0 */
  push32((uint32_t)(0x0u));
  /* 106f3321 call dword ptr [0x10712268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712268))), 0x106f3327u);
  /* 106f3327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f3329 je 0x106f3337 */
  if (C.zf) goto L_106f3337;
  /* 106f332b mov dword ptr [0x1070f824], 1 */
  w32((uint32_t)(0x1070f824), (0x1u));
  /* 106f3335 jmp 0x106f3366 */
  goto L_106f3366;
L_106f3337:;
  /* 106f3337 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f3339 push 0x1070afd8 */
  push32((uint32_t)(0x1070afd8u));
  /* 106f333e push 1 */
  push32((uint32_t)(0x1u));
  /* 106f3340 push 0x1070afd8 */
  push32((uint32_t)(0x1070afd8u));
  /* 106f3345 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f3347 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f3349 call dword ptr [0x1071226c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071226c))), 0x106f334fu);
  /* 106f334f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f3351 je 0x106f335f */
  if (C.zf) goto L_106f335f;
  /* 106f3353 mov dword ptr [0x1070f824], 2 */
  w32((uint32_t)(0x1070f824), (0x2u));
  /* 106f335d jmp 0x106f3366 */
  goto L_106f3366;
L_106f335f:;
  /* 106f335f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f3361 jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f3366:;
  /* 106f3366 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f336a jle 0x106f337f */
  if ((C.zf||C.sf!=C.of)) goto L_106f337f;
  /* 106f336c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f336f push eax */
  push32((uint32_t)(EAX));
  /* 106f3370 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f3373 push ecx */
  push32((uint32_t)(ECX));
  /* 106f3374 call 0x106f36e0 */
  push32(0x106f3379u); f_106f36e0();
  /* 106f3379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f337c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_106f337f:;
  /* 106f337f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3383 jle 0x106f3398 */
  if ((C.zf||C.sf!=C.of)) goto L_106f3398;
  /* 106f3385 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106f3388 push edx */
  push32((uint32_t)(EDX));
  /* 106f3389 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f338c push eax */
  push32((uint32_t)(EAX));
  /* 106f338d call 0x106f36e0 */
  push32(0x106f3392u); f_106f36e0();
  /* 106f3392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3395 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_106f3398:;
  /* 106f3398 cmp dword ptr [0x1070f824], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1070f824))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f339f jne 0x106f33c4 */
  if (!C.zf) goto L_106f33c4;
  /* 106f33a1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106f33a4 push ecx */
  push32((uint32_t)(ECX));
  /* 106f33a5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f33a8 push edx */
  push32((uint32_t)(EDX));
  /* 106f33a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f33ac push eax */
  push32((uint32_t)(EAX));
  /* 106f33ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f33b0 push ecx */
  push32((uint32_t)(ECX));
  /* 106f33b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f33b4 push edx */
  push32((uint32_t)(EDX));
  /* 106f33b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f33b8 push eax */
  push32((uint32_t)(EAX));
  /* 106f33b9 call dword ptr [0x1071226c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071226c))), 0x106f33bfu);
  /* 106f33bf jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f33c4:;
  /* 106f33c4 cmp dword ptr [0x1070f824], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f824))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f33cb jne 0x106f36c2 */
  if (!C.zf) goto L_106f36c2;
  /* 106f33d1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f33d5 jne 0x106f33e0 */
  if (!C.zf) goto L_106f33e0;
  /* 106f33d7 mov ecx, dword ptr [0x1070f6d0] */
  ECX = (r32((uint32_t)(0x1070f6d0)));
  /* 106f33dd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_106f33e0:;
  /* 106f33e0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f33e4 je 0x106f33f0 */
  if (C.zf) goto L_106f33f0;
  /* 106f33e6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f33ea jne 0x106f356c */
  if (!C.zf) goto L_106f356c;
L_106f33f0:;
  /* 106f33f0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f33f3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f33f6 jne 0x106f3402 */
  if (!C.zf) goto L_106f3402;
  /* 106f33f8 mov eax, 2 */
  EAX = (0x2u);
  /* 106f33fd jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f3402:;
  /* 106f3402 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3406 jle 0x106f3412 */
  if ((C.zf||C.sf!=C.of)) goto L_106f3412;
  /* 106f3408 mov eax, 1 */
  EAX = (0x1u);
  /* 106f340d jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f3412:;
  /* 106f3412 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3416 jle 0x106f3422 */
  if ((C.zf||C.sf!=C.of)) goto L_106f3422;
  /* 106f3418 mov eax, 3 */
  EAX = (0x3u);
  /* 106f341d jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f3422:;
  /* 106f3422 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 106f3425 push eax */
  push32((uint32_t)(EAX));
  /* 106f3426 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 106f3429 push ecx */
  push32((uint32_t)(ECX));
  /* 106f342a call dword ptr [0x10712374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712374))), 0x106f3430u);
  /* 106f3430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f3432 jne 0x106f343b */
  if (!C.zf) goto L_106f343b;
  /* 106f3434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f3436 jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f343b:;
  /* 106f343b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f343f jne 0x106f3447 */
  if (!C.zf) goto L_106f3447;
  /* 106f3441 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3445 je 0x106f3474 */
  if (C.zf) goto L_106f3474;
L_106f3447:;
  /* 106f3447 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f344b jne 0x106f3453 */
  if (!C.zf) goto L_106f3453;
  /* 106f344d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3451 je 0x106f3474 */
  if (C.zf) goto L_106f3474;
L_106f3453:;
  /* 106f3453 push 0x1070b940 */
  push32((uint32_t)(0x1070b940u));
  /* 106f3458 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f345a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 106f345f push 0x1070b938 */
  push32((uint32_t)(0x1070b938u));
  /* 106f3464 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f3466 call 0x106e27f0 */
  push32(0x106f346bu); f_106e27f0();
  /* 106f346b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f346e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3471 jne 0x106f3474 */
  if (!C.zf) goto L_106f3474;
  /* 106f3473 int3  */
  x86_unimpl("int3 @ 0x106f3473");
L_106f3474:;
  /* 106f3474 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f3476 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f3478 jne 0x106f343b */
  if (!C.zf) goto L_106f343b;
  /* 106f347a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f347e jle 0x106f34f3 */
  if ((C.zf||C.sf!=C.of)) goto L_106f34f3;
  /* 106f3480 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3484 jae 0x106f3490 */
  if (!C.cf) goto L_106f3490;
  /* 106f3486 mov eax, 3 */
  EAX = (0x3u);
  /* 106f348b jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f3490:;
  /* 106f3490 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 106f3493 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 106f3496 jmp 0x106f34a1 */
  goto L_106f34a1;
L_106f3498:;
  /* 106f3498 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106f349b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f349e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_106f34a1:;
  /* 106f34a1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 106f34a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f34a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f34a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f34aa je 0x106f34e9 */
  if (C.zf) goto L_106f34e9;
  /* 106f34ac mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106f34af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f34b1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 106f34b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f34b6 je 0x106f34e9 */
  if (C.zf) goto L_106f34e9;
  /* 106f34b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f34bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f34bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f34bf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 106f34c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f34c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f34c6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f34c8 jl 0x106f34e7 */
  if ((C.sf!=C.of)) goto L_106f34e7;
  /* 106f34ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f34cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f34cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106f34d1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 106f34d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f34d6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106f34d9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f34db jg 0x106f34e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f34e7;
  /* 106f34dd mov eax, 2 */
  EAX = (0x2u);
  /* 106f34e2 jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f34e7:;
  /* 106f34e7 jmp 0x106f3498 */
  goto L_106f3498;
L_106f34e9:;
  /* 106f34e9 mov eax, 3 */
  EAX = (0x3u);
  /* 106f34ee jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f34f3:;
  /* 106f34f3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f34f7 jle 0x106f356c */
  if ((C.zf||C.sf!=C.of)) goto L_106f356c;
  /* 106f34f9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f34fd jae 0x106f3509 */
  if (!C.cf) goto L_106f3509;
  /* 106f34ff mov eax, 1 */
  EAX = (0x1u);
  /* 106f3504 jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f3509:;
  /* 106f3509 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 106f350c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 106f350f jmp 0x106f351a */
  goto L_106f351a;
L_106f3511:;
  /* 106f3511 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 106f3514 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3517 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_106f351a:;
  /* 106f351a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106f351d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f351f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106f3521 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f3523 je 0x106f3562 */
  if (C.zf) goto L_106f3562;
  /* 106f3525 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 106f3528 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f352a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106f352d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f352f je 0x106f3562 */
  if (C.zf) goto L_106f3562;
  /* 106f3531 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f3534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f3536 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f3538 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106f353b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106f353d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106f353f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3541 jl 0x106f3560 */
  if ((C.sf!=C.of)) goto L_106f3560;
  /* 106f3543 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f3546 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f3548 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f354a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 106f354d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f354f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106f3552 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3554 jg 0x106f3560 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f3560;
  /* 106f3556 mov eax, 2 */
  EAX = (0x2u);
  /* 106f355b jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f3560:;
  /* 106f3560 jmp 0x106f3511 */
  goto L_106f3511;
L_106f3562:;
  /* 106f3562 mov eax, 1 */
  EAX = (0x1u);
  /* 106f3567 jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f356c:;
  /* 106f356c push 0 */
  push32((uint32_t)(0x0u));
  /* 106f356e push 0 */
  push32((uint32_t)(0x0u));
  /* 106f3570 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f3573 push ecx */
  push32((uint32_t)(ECX));
  /* 106f3574 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f3577 push edx */
  push32((uint32_t)(EDX));
  /* 106f3578 push 9 */
  push32((uint32_t)(0x9u));
  /* 106f357a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106f357d push eax */
  push32((uint32_t)(EAX));
  /* 106f357e call dword ptr [0x107122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b8))), 0x106f3584u);
  /* 106f3584 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106f3587 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f358b jne 0x106f3594 */
  if (!C.zf) goto L_106f3594;
  /* 106f358d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f358f jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f3594:;
  /* 106f3594 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106f359b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106f359e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106f35a0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f35a3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106f35a5 call 0x106e68d0 */
  push32(0x106f35aau); f_106e68d0();
  /* 106f35aa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 106f35ad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106f35b0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 106f35b3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106f35b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106f35bd jmp 0x106f35d6 */
  goto L_106f35d6;
  /* 106f35bf mov eax, 1 */
  EAX = (0x1u);
  /* 106f35c4 ret  */
  ESPCHK(0x106f32e0u, _esp0);
  ESP += 4; return;
  /* 106f35c5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106f35c8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106f35cf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106f35d6:;
  /* 106f35d6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f35da jne 0x106f35e3 */
  if (!C.zf) goto L_106f35e3;
  /* 106f35dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f35de jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f35e3:;
  /* 106f35e3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106f35e6 push edx */
  push32((uint32_t)(EDX));
  /* 106f35e7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106f35ea push eax */
  push32((uint32_t)(EAX));
  /* 106f35eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f35ee push ecx */
  push32((uint32_t)(ECX));
  /* 106f35ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f35f2 push edx */
  push32((uint32_t)(EDX));
  /* 106f35f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f35f5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106f35f8 push eax */
  push32((uint32_t)(EAX));
  /* 106f35f9 call dword ptr [0x107122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b8))), 0x106f35ffu);
  /* 106f35ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f3601 jne 0x106f360a */
  if (!C.zf) goto L_106f360a;
  /* 106f3603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f3605 jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f360a:;
  /* 106f360a push 0 */
  push32((uint32_t)(0x0u));
  /* 106f360c push 0 */
  push32((uint32_t)(0x0u));
  /* 106f360e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106f3611 push ecx */
  push32((uint32_t)(ECX));
  /* 106f3612 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f3615 push edx */
  push32((uint32_t)(EDX));
  /* 106f3616 push 9 */
  push32((uint32_t)(0x9u));
  /* 106f3618 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106f361b push eax */
  push32((uint32_t)(EAX));
  /* 106f361c call dword ptr [0x107122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b8))), 0x106f3622u);
  /* 106f3622 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106f3625 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3629 jne 0x106f3632 */
  if (!C.zf) goto L_106f3632;
  /* 106f362b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f362d jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f3632:;
  /* 106f3632 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106f3639 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106f363c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106f363e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3641 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106f3643 call 0x106e68d0 */
  push32(0x106f3648u); f_106e68d0();
  /* 106f3648 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 106f364b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106f364e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 106f3651 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 106f3654 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106f365b jmp 0x106f3674 */
  goto L_106f3674;
  /* 106f365d mov eax, 1 */
  EAX = (0x1u);
  /* 106f3662 ret  */
  ESPCHK(0x106f32e0u, _esp0);
  ESP += 4; return;
  /* 106f3663 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106f3666 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 106f366d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106f3674:;
  /* 106f3674 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3678 jne 0x106f367e */
  if (!C.zf) goto L_106f367e;
  /* 106f367a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f367c jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f367e:;
  /* 106f367e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106f3681 push edx */
  push32((uint32_t)(EDX));
  /* 106f3682 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106f3685 push eax */
  push32((uint32_t)(EAX));
  /* 106f3686 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106f3689 push ecx */
  push32((uint32_t)(ECX));
  /* 106f368a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106f368d push edx */
  push32((uint32_t)(EDX));
  /* 106f368e push 1 */
  push32((uint32_t)(0x1u));
  /* 106f3690 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106f3693 push eax */
  push32((uint32_t)(EAX));
  /* 106f3694 call dword ptr [0x107122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b8))), 0x106f369au);
  /* 106f369a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f369c jne 0x106f36a2 */
  if (!C.zf) goto L_106f36a2;
  /* 106f369e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f36a0 jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f36a2:;
  /* 106f36a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106f36a5 push ecx */
  push32((uint32_t)(ECX));
  /* 106f36a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106f36a9 push edx */
  push32((uint32_t)(EDX));
  /* 106f36aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106f36ad push eax */
  push32((uint32_t)(EAX));
  /* 106f36ae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106f36b1 push ecx */
  push32((uint32_t)(ECX));
  /* 106f36b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f36b5 push edx */
  push32((uint32_t)(EDX));
  /* 106f36b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f36b9 push eax */
  push32((uint32_t)(EAX));
  /* 106f36ba call dword ptr [0x10712268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712268))), 0x106f36c0u);
  /* 106f36c0 jmp 0x106f36c4 */
  goto L_106f36c4;
L_106f36c2:;
  /* 106f36c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f36c4:;
  /* 106f36c4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 106f36c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f36ca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106f36d1 pop edi */
  EDI = (pop32());
  /* 106f36d2 pop esi */
  ESI = (pop32());
  /* 106f36d3 pop ebx */
  EBX = (pop32());
  /* 106f36d4 mov esp, ebp */
  ESP = (EBP);
  /* 106f36d6 pop ebp */
  EBP = (pop32());
  /* 106f36d7 ret  */
  ESPCHK(0x106f32e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136e0 @ 0x106f36e0 (80 bytes, 32 insns) */
void f_106f36e0(void) {
  FTRACE(0x106f36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f36e1 mov ebp, esp */
  EBP = (ESP);
  /* 106f36e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f36e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f36e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f36ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f36ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106f36f2:;
  /* 106f36f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f36f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f36f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f36fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f36fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f3700 je 0x106f3717 */
  if (C.zf) goto L_106f3717;
  /* 106f3702 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3705 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106f3708 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f370a je 0x106f3717 */
  if (C.zf) goto L_106f3717;
  /* 106f370c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f370f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3712 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f3715 jmp 0x106f36f2 */
  goto L_106f36f2;
L_106f3717:;
  /* 106f3717 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f371a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106f371d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f371f jne 0x106f3729 */
  if (!C.zf) goto L_106f3729;
  /* 106f3721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3724 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f3727 jmp 0x106f372c */
  goto L_106f372c;
L_106f3729:;
  /* 106f3729 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_106f372c:;
  /* 106f372c mov esp, ebp */
  ESP = (EBP);
  /* 106f372e pop ebp */
  EBP = (pop32());
  /* 106f372f ret  */
  ESPCHK(0x106f36e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013730 @ 0x106f3730 (736 bytes, 224 insns) */
void f_106f3730(void) {
  FTRACE(0x106f3730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f3730 push ebp */
  push32((uint32_t)(EBP));
  /* 106f3731 mov ebp, esp */
  EBP = (ESP);
  /* 106f3733 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f3736 push esi */
  push32((uint32_t)(ESI));
  /* 106f3737 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f373b je 0x106f375c */
  if (C.zf) goto L_106f375c;
  /* 106f373d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 106f373f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3742 push eax */
  push32((uint32_t)(EAX));
  /* 106f3743 call 0x106f3b80 */
  push32(0x106f3748u); f_106f3b80();
  /* 106f3748 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f374b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106f374e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3752 je 0x106f375c */
  if (C.zf) goto L_106f375c;
  /* 106f3754 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3757 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f375a jne 0x106f3764 */
  if (!C.zf) goto L_106f3764;
L_106f375c:;
  /* 106f375c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f375f jmp 0x106f3a0b */
  goto L_106f3a0b;
L_106f3764:;
  /* 106f3764 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f3767 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106f376b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106f376d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f376f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 106f3770 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106f3773 mov ecx, dword ptr [0x1070f4dc] */
  ECX = (r32((uint32_t)(0x1070f4dc)));
  /* 106f3779 cmp ecx, dword ptr [0x1070f4e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1070f4e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f377f jne 0x106f3795 */
  if (!C.zf) goto L_106f3795;
  /* 106f3781 mov edx, dword ptr [0x1070f4dc] */
  EDX = (r32((uint32_t)(0x1070f4dc)));
  /* 106f3787 push edx */
  push32((uint32_t)(EDX));
  /* 106f3788 call 0x106f3a90 */
  push32(0x106f378du); f_106f3a90();
  /* 106f378d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3790 mov dword ptr [0x1070f4dc], eax */
  w32((uint32_t)(0x1070f4dc), (EAX));
L_106f3795:;
  /* 106f3795 cmp dword ptr [0x1070f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f379c jne 0x106f3855 */
  if (!C.zf) goto L_106f3855;
  /* 106f37a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f37a6 je 0x106f37c7 */
  if (C.zf) goto L_106f37c7;
  /* 106f37a8 cmp dword ptr [0x1070f4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f37af je 0x106f37c7 */
  if (C.zf) goto L_106f37c7;
  /* 106f37b1 call 0x106f3230 */
  push32(0x106f37b6u); f_106f3230();
  /* 106f37b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f37b8 je 0x106f37c2 */
  if (C.zf) goto L_106f37c2;
  /* 106f37ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f37bd jmp 0x106f3a0b */
  goto L_106f3a0b;
L_106f37c2:;
  /* 106f37c2 jmp 0x106f3855 */
  goto L_106f3855;
L_106f37c7:;
  /* 106f37c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f37cb je 0x106f37d4 */
  if (C.zf) goto L_106f37d4;
  /* 106f37cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f37cf jmp 0x106f3a0b */
  goto L_106f3a0b;
L_106f37d4:;
  /* 106f37d4 cmp dword ptr [0x1070f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f37db jne 0x106f3814 */
  if (!C.zf) goto L_106f3814;
  /* 106f37dd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 106f37e2 push 0x1070b998 */
  push32((uint32_t)(0x1070b998u));
  /* 106f37e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f37e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 106f37eb call 0x106e3730 */
  push32(0x106f37f0u); f_106e3730();
  /* 106f37f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f37f3 mov dword ptr [0x1070f4dc], eax */
  w32((uint32_t)(0x1070f4dc), (EAX));
  /* 106f37f8 cmp dword ptr [0x1070f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f37ff jne 0x106f3809 */
  if (!C.zf) goto L_106f3809;
  /* 106f3801 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f3804 jmp 0x106f3a0b */
  goto L_106f3a0b;
L_106f3809:;
  /* 106f3809 mov eax, dword ptr [0x1070f4dc] */
  EAX = (r32((uint32_t)(0x1070f4dc)));
  /* 106f380e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_106f3814:;
  /* 106f3814 cmp dword ptr [0x1070f4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f381b jne 0x106f3855 */
  if (!C.zf) goto L_106f3855;
  /* 106f381d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 106f3822 push 0x1070b998 */
  push32((uint32_t)(0x1070b998u));
  /* 106f3827 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f3829 push 4 */
  push32((uint32_t)(0x4u));
  /* 106f382b call 0x106e3730 */
  push32(0x106f3830u); f_106e3730();
  /* 106f3830 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3833 mov dword ptr [0x1070f4e4], eax */
  w32((uint32_t)(0x1070f4e4), (EAX));
  /* 106f3838 cmp dword ptr [0x1070f4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f383f jne 0x106f3849 */
  if (!C.zf) goto L_106f3849;
  /* 106f3841 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f3844 jmp 0x106f3a0b */
  goto L_106f3a0b;
L_106f3849:;
  /* 106f3849 mov ecx, dword ptr [0x1070f4e4] */
  ECX = (r32((uint32_t)(0x1070f4e4)));
  /* 106f384f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_106f3855:;
  /* 106f3855 mov edx, dword ptr [0x1070f4dc] */
  EDX = (r32((uint32_t)(0x1070f4dc)));
  /* 106f385b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106f385e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f3861 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f3864 push eax */
  push32((uint32_t)(EAX));
  /* 106f3865 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3868 push ecx */
  push32((uint32_t)(ECX));
  /* 106f3869 call 0x106f3a10 */
  push32(0x106f386eu); f_106f3a10();
  /* 106f386e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3871 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f3874 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3878 jl 0x106f3911 */
  if ((C.sf!=C.of)) goto L_106f3911;
  /* 106f387e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3881 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3884 je 0x106f3911 */
  if (C.zf) goto L_106f3911;
  /* 106f388a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f388e je 0x106f3903 */
  if (C.zf) goto L_106f3903;
  /* 106f3890 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f3892 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3898 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106f389b push edx */
  push32((uint32_t)(EDX));
  /* 106f389c call 0x106e41c0 */
  push32(0x106f38a1u); f_106e41c0();
  /* 106f38a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f38a4 jmp 0x106f38af */
  goto L_106f38af;
L_106f38a6:;
  /* 106f38a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f38a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f38ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106f38af:;
  /* 106f38af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f38b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f38b5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f38b9 je 0x106f38d0 */
  if (C.zf) goto L_106f38d0;
  /* 106f38bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f38be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f38c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f38c4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 106f38c7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 106f38cb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 106f38ce jmp 0x106f38a6 */
  goto L_106f38a6;
L_106f38d0:;
  /* 106f38d0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 106f38d5 push 0x1070b998 */
  push32((uint32_t)(0x1070b998u));
  /* 106f38da push 2 */
  push32((uint32_t)(0x2u));
  /* 106f38dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f38df shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 106f38e2 push eax */
  push32((uint32_t)(EAX));
  /* 106f38e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f38e6 push ecx */
  push32((uint32_t)(ECX));
  /* 106f38e7 call 0x106e3bc0 */
  push32(0x106f38ecu); f_106e3bc0();
  /* 106f38ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f38ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f38f2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f38f6 je 0x106f3901 */
  if (C.zf) goto L_106f3901;
  /* 106f38f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f38fb mov dword ptr [0x1070f4dc], edx */
  w32((uint32_t)(0x1070f4dc), (EDX));
L_106f3901:;
  /* 106f3901 jmp 0x106f390f */
  goto L_106f390f;
L_106f3903:;
  /* 106f3903 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3906 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3909 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f390c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_106f390f:;
  /* 106f390f jmp 0x106f3984 */
  goto L_106f3984;
L_106f3911:;
  /* 106f3911 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3915 jne 0x106f397d */
  if (!C.zf) goto L_106f397d;
  /* 106f3917 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f391b jge 0x106f3925 */
  if ((C.sf==C.of)) goto L_106f3925;
  /* 106f391d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3920 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106f3922 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106f3925:;
  /* 106f3925 push 0xce */
  push32((uint32_t)(0xceu));
  /* 106f392a push 0x1070b998 */
  push32((uint32_t)(0x1070b998u));
  /* 106f392f push 2 */
  push32((uint32_t)(0x2u));
  /* 106f3931 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3934 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 106f393b push edx */
  push32((uint32_t)(EDX));
  /* 106f393c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f393f push eax */
  push32((uint32_t)(EAX));
  /* 106f3940 call 0x106e3bc0 */
  push32(0x106f3945u); f_106e3bc0();
  /* 106f3945 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3948 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f394b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f394f jne 0x106f3959 */
  if (!C.zf) goto L_106f3959;
  /* 106f3951 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f3954 jmp 0x106f3a0b */
  goto L_106f3a0b;
L_106f3959:;
  /* 106f3959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f395c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f395f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3962 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 106f3965 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3968 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f396b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 106f3973 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3976 mov dword ptr [0x1070f4dc], eax */
  w32((uint32_t)(0x1070f4dc), (EAX));
  /* 106f397b jmp 0x106f3984 */
  goto L_106f3984;
L_106f397d:;
  /* 106f397d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f397f jmp 0x106f3a0b */
  goto L_106f3a0b;
L_106f3984:;
  /* 106f3984 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3988 je 0x106f3a09 */
  if (C.zf) goto L_106f3a09;
  /* 106f398a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 106f398f push 0x1070b998 */
  push32((uint32_t)(0x1070b998u));
  /* 106f3994 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f3996 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3999 push ecx */
  push32((uint32_t)(ECX));
  /* 106f399a call 0x106e6560 */
  push32(0x106f399fu); f_106e6560();
  /* 106f399f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f39a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f39a5 push eax */
  push32((uint32_t)(EAX));
  /* 106f39a6 call 0x106e3730 */
  push32(0x106f39abu); f_106e3730();
  /* 106f39ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f39ae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106f39b1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f39b5 je 0x106f3a09 */
  if (C.zf) goto L_106f3a09;
  /* 106f39b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f39ba push edx */
  push32((uint32_t)(EDX));
  /* 106f39bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f39be push eax */
  push32((uint32_t)(EAX));
  /* 106f39bf call 0x106e66e0 */
  push32(0x106f39c4u); f_106e66e0();
  /* 106f39c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f39c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106f39ca sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f39cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f39d0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f39d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106f39d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f39d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106f39db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f39de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f39e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f39e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106f39e7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106f39e9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f39eb not edx */
  EDX = (~(EDX));
  /* 106f39ed and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 106f39f0 push edx */
  push32((uint32_t)(EDX));
  /* 106f39f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f39f4 push eax */
  push32((uint32_t)(EAX));
  /* 106f39f5 call dword ptr [0x10712264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712264))), 0x106f39fbu);
  /* 106f39fb push 2 */
  push32((uint32_t)(0x2u));
  /* 106f39fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f3a00 push ecx */
  push32((uint32_t)(ECX));
  /* 106f3a01 call 0x106e41c0 */
  push32(0x106f3a06u); f_106e41c0();
  /* 106f3a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f3a09:;
  /* 106f3a09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f3a0b:;
  /* 106f3a0b pop esi */
  ESI = (pop32());
  /* 106f3a0c mov esp, ebp */
  ESP = (EBP);
  /* 106f3a0e pop ebp */
  EBP = (pop32());
  /* 106f3a0f ret  */
  ESPCHK(0x106f3730u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x106f3a10 (124 bytes, 47 insns) */
void f_106f3a10(void) {
  FTRACE(0x106f3a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f3a10 push ebp */
  push32((uint32_t)(EBP));
  /* 106f3a11 mov ebp, esp */
  EBP = (ESP);
  /* 106f3a13 push ecx */
  push32((uint32_t)(ECX));
  /* 106f3a14 mov eax, dword ptr [0x1070f4dc] */
  EAX = (r32((uint32_t)(0x1070f4dc)));
  /* 106f3a19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f3a1c jmp 0x106f3a27 */
  goto L_106f3a27;
L_106f3a1e:;
  /* 106f3a1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3a21 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3a24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106f3a27:;
  /* 106f3a27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3a2a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3a2d je 0x106f3a7a */
  if (C.zf) goto L_106f3a7a;
  /* 106f3a2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f3a32 push eax */
  push32((uint32_t)(EAX));
  /* 106f3a33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3a36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f3a38 push edx */
  push32((uint32_t)(EDX));
  /* 106f3a39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3a3c push eax */
  push32((uint32_t)(EAX));
  /* 106f3a3d call 0x106f31e0 */
  push32(0x106f3a42u); f_106f31e0();
  /* 106f3a42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3a45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f3a47 jne 0x106f3a78 */
  if (!C.zf) goto L_106f3a78;
  /* 106f3a49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3a4c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f3a4e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f3a51 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 106f3a55 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3a58 je 0x106f3a6a */
  if (C.zf) goto L_106f3a6a;
  /* 106f3a5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3a5d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f3a5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f3a62 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 106f3a66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f3a68 jne 0x106f3a78 */
  if (!C.zf) goto L_106f3a78;
L_106f3a6a:;
  /* 106f3a6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3a6d sub eax, dword ptr [0x1070f4dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070f4dc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f3a73 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 106f3a76 jmp 0x106f3a88 */
  goto L_106f3a88;
L_106f3a78:;
  /* 106f3a78 jmp 0x106f3a1e */
  goto L_106f3a1e;
L_106f3a7a:;
  /* 106f3a7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3a7d sub eax, dword ptr [0x1070f4dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070f4dc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f3a83 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 106f3a86 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_106f3a88:;
  /* 106f3a88 mov esp, ebp */
  ESP = (EBP);
  /* 106f3a8a pop ebp */
  EBP = (pop32());
  /* 106f3a8b ret  */
  ESPCHK(0x106f3a10u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x106f3a90 (238 bytes, 80 insns) */
void f_106f3a90(void) {
  FTRACE(0x106f3a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f3a90 push ebp */
  push32((uint32_t)(EBP));
  /* 106f3a91 mov ebp, esp */
  EBP = (ESP);
  /* 106f3a93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f3a96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106f3a9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3aa0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f3aa3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3aa7 jne 0x106f3ab0 */
  if (!C.zf) goto L_106f3ab0;
  /* 106f3aa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f3aab jmp 0x106f3b7a */
  goto L_106f3b7a;
L_106f3ab0:;
  /* 106f3ab0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3ab3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f3ab5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3ab8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3abb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f3abe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f3ac0 je 0x106f3acd */
  if (C.zf) goto L_106f3acd;
  /* 106f3ac2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f3ac5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3ac8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106f3acb jmp 0x106f3ab0 */
  goto L_106f3ab0;
L_106f3acd:;
  /* 106f3acd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 106f3ad2 push 0x1070b998 */
  push32((uint32_t)(0x1070b998u));
  /* 106f3ad7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106f3ad9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f3adc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 106f3ae3 push eax */
  push32((uint32_t)(EAX));
  /* 106f3ae4 call 0x106e3730 */
  push32(0x106f3ae9u); f_106e3730();
  /* 106f3ae9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3aec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f3aef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3af2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f3af5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3af9 jne 0x106f3b05 */
  if (!C.zf) goto L_106f3b05;
  /* 106f3afb push 9 */
  push32((uint32_t)(0x9u));
  /* 106f3afd call 0x106e26a0 */
  push32(0x106f3b02u); f_106e26a0();
  /* 106f3b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f3b05:;
  /* 106f3b05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3b08 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106f3b0b:;
  /* 106f3b0b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3b0e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3b11 je 0x106f3b6e */
  if (C.zf) goto L_106f3b6e;
  /* 106f3b13 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 106f3b18 push 0x1070b998 */
  push32((uint32_t)(0x1070b998u));
  /* 106f3b1d push 2 */
  push32((uint32_t)(0x2u));
  /* 106f3b1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3b22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106f3b24 push edx */
  push32((uint32_t)(EDX));
  /* 106f3b25 call 0x106e6560 */
  push32(0x106f3b2au); f_106e6560();
  /* 106f3b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3b30 push eax */
  push32((uint32_t)(EAX));
  /* 106f3b31 call 0x106e3730 */
  push32(0x106f3b36u); f_106e3730();
  /* 106f3b36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3b39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3b3c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106f3b3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3b41 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3b44 je 0x106f3b5a */
  if (C.zf) goto L_106f3b5a;
  /* 106f3b46 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3b49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106f3b4b push ecx */
  push32((uint32_t)(ECX));
  /* 106f3b4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3b4f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106f3b51 push eax */
  push32((uint32_t)(EAX));
  /* 106f3b52 call 0x106e66e0 */
  push32(0x106f3b57u); f_106e66e0();
  /* 106f3b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106f3b5a:;
  /* 106f3b5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f3b5d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3b60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106f3b63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3b66 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3b69 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106f3b6c jmp 0x106f3b0b */
  goto L_106f3b0b;
L_106f3b6e:;
  /* 106f3b6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f3b71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106f3b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106f3b7a:;
  /* 106f3b7a mov esp, ebp */
  ESP = (EBP);
  /* 106f3b7c pop ebp */
  EBP = (pop32());
  /* 106f3b7d ret  */
  ESPCHK(0x106f3a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x106f3b80 (237 bytes, 81 insns) */
void f_106f3b80(void) {
  FTRACE(0x106f3b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f3b80 push ebp */
  push32((uint32_t)(EBP));
  /* 106f3b81 mov ebp, esp */
  EBP = (ESP);
  /* 106f3b83 push ecx */
  push32((uint32_t)(ECX));
  /* 106f3b84 cmp dword ptr [0x10710c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3b8b jne 0x106f3ba2 */
  if (!C.zf) goto L_106f3ba2;
  /* 106f3b8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f3b90 push eax */
  push32((uint32_t)(EAX));
  /* 106f3b91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3b94 push ecx */
  push32((uint32_t)(ECX));
  /* 106f3b95 call 0x106f3c80 */
  push32(0x106f3b9au); f_106f3c80();
  /* 106f3b9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3b9d jmp 0x106f3c69 */
  goto L_106f3c69;
L_106f3ba2:;
  /* 106f3ba2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106f3ba4 call 0x106e7130 */
  push32(0x106f3ba9u); f_106e7130();
  /* 106f3ba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3bac jmp 0x106f3bb7 */
  goto L_106f3bb7;
L_106f3bae:;
  /* 106f3bae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3bb1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3bb4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_106f3bb7:;
  /* 106f3bb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3bba movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 106f3bbe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 106f3bc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3bc5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106f3bcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f3bcd je 0x106f3c4b */
  if (C.zf) goto L_106f3c4b;
  /* 106f3bcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3bd2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f3bd7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f3bd9 mov cl, byte ptr [eax + 0x10710d41] */
  CL = (r8((uint32_t)(EAX + 0x10710d41)));
  /* 106f3bdf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106f3be2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f3be4 je 0x106f3c36 */
  if (C.zf) goto L_106f3c36;
  /* 106f3be6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3be9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3bec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106f3bef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3bf2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f3bf4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f3bf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f3bf8 jne 0x106f3c08 */
  if (!C.zf) goto L_106f3c08;
  /* 106f3bfa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106f3bfc call 0x106e71d0 */
  push32(0x106f3c01u); f_106e71d0();
  /* 106f3c01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3c04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f3c06 jmp 0x106f3c69 */
  goto L_106f3c69;
L_106f3c08:;
  /* 106f3c08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3c0b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106f3c11 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 106f3c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3c17 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106f3c19 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f3c1b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106f3c1d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3c20 jne 0x106f3c34 */
  if (!C.zf) goto L_106f3c34;
  /* 106f3c22 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106f3c24 call 0x106e71d0 */
  push32(0x106f3c29u); f_106e71d0();
  /* 106f3c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3c2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3c2f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f3c32 jmp 0x106f3c69 */
  goto L_106f3c69;
L_106f3c34:;
  /* 106f3c34 jmp 0x106f3c46 */
  goto L_106f3c46;
L_106f3c36:;
  /* 106f3c36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3c39 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106f3c3f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3c42 jne 0x106f3c46 */
  if (!C.zf) goto L_106f3c46;
  /* 106f3c44 jmp 0x106f3c4b */
  goto L_106f3c4b;
L_106f3c46:;
  /* 106f3c46 jmp 0x106f3bae */
  goto L_106f3bae;
L_106f3c4b:;
  /* 106f3c4b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106f3c4d call 0x106e71d0 */
  push32(0x106f3c52u); f_106e71d0();
  /* 106f3c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3c55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f3c58 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f3c5d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f3c60 jne 0x106f3c67 */
  if (!C.zf) goto L_106f3c67;
  /* 106f3c62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f3c65 jmp 0x106f3c69 */
  goto L_106f3c69;
L_106f3c67:;
  /* 106f3c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f3c69:;
  /* 106f3c69 mov esp, ebp */
  ESP = (EBP);
  /* 106f3c6b pop ebp */
  EBP = (pop32());
  /* 106f3c6c ret  */
  ESPCHK(0x106f3b80u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x106f3c80 (193 bytes, 87 insns) */
void f_106f3c80(void) {
  FTRACE(0x106f3c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f3c80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f3c82 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 106f3c86 push ebx */
  push32((uint32_t)(EBX));
  /* 106f3c87 mov ebx, eax */
  EBX = (EAX);
  /* 106f3c89 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 106f3c8c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 106f3c90 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 106f3c96 je 0x106f3cab */
  if (C.zf) goto L_106f3cab;
L_106f3c98:;
  /* 106f3c98 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 106f3c9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 106f3c9b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f3c9d je 0x106f3c70 */
  if (C.zf) { jmp_ind(0x106f3c70u); return; }
  /* 106f3c9f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 106f3ca1 je 0x106f3cf4 */
  if (C.zf) goto L_106f3cf4;
  /* 106f3ca3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 106f3ca9 jne 0x106f3c98 */
  if (!C.zf) goto L_106f3c98;
L_106f3cab:;
  /* 106f3cab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 106f3cad push edi */
  push32((uint32_t)(EDI));
  /* 106f3cae mov eax, ebx */
  EAX = (EBX);
  /* 106f3cb0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 106f3cb3 push esi */
  push32((uint32_t)(ESI));
  /* 106f3cb4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_106f3cb6:;
  /* 106f3cb6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 106f3cb8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 106f3cbd mov eax, ecx */
  EAX = (ECX);
  /* 106f3cbf mov esi, edi */
  ESI = (EDI);
  /* 106f3cc1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 106f3cc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3cc5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3cc7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106f3cca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f3ccd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 106f3ccf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 106f3cd1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f3cd4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 106f3cda jne 0x106f3cf8 */
  if (!C.zf) goto L_106f3cf8;
  /* 106f3cdc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 106f3ce1 je 0x106f3cb6 */
  if (C.zf) goto L_106f3cb6;
  /* 106f3ce3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 106f3ce8 jne 0x106f3cf2 */
  if (!C.zf) goto L_106f3cf2;
  /* 106f3cea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 106f3cf0 jne 0x106f3cb6 */
  if (!C.zf) goto L_106f3cb6;
L_106f3cf2:;
  /* 106f3cf2 pop esi */
  ESI = (pop32());
  /* 106f3cf3 pop edi */
  EDI = (pop32());
L_106f3cf4:;
  /* 106f3cf4 pop ebx */
  EBX = (pop32());
  /* 106f3cf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f3cf7 ret  */
  ESPCHK(0x106f3c80u, _esp0);
  ESP += 4; return;
L_106f3cf8:;
  /* 106f3cf8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 106f3cfb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f3cfd je 0x106f3d35 */
  if (C.zf) goto L_106f3d35;
  /* 106f3cff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106f3d01 je 0x106f3cf2 */
  if (C.zf) goto L_106f3cf2;
  /* 106f3d03 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f3d05 je 0x106f3d2e */
  if (C.zf) goto L_106f3d2e;
  /* 106f3d07 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 106f3d09 je 0x106f3cf2 */
  if (C.zf) goto L_106f3cf2;
  /* 106f3d0b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106f3d0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f3d10 je 0x106f3d27 */
  if (C.zf) goto L_106f3d27;
  /* 106f3d12 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106f3d14 je 0x106f3cf2 */
  if (C.zf) goto L_106f3cf2;
  /* 106f3d16 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106f3d18 je 0x106f3d20 */
  if (C.zf) goto L_106f3d20;
  /* 106f3d1a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 106f3d1c je 0x106f3cf2 */
  if (C.zf) goto L_106f3cf2;
  /* 106f3d1e jmp 0x106f3cb6 */
  goto L_106f3cb6;
L_106f3d20:;
  /* 106f3d20 pop esi */
  ESI = (pop32());
  /* 106f3d21 pop edi */
  EDI = (pop32());
  /* 106f3d22 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 106f3d25 pop ebx */
  EBX = (pop32());
  /* 106f3d26 ret  */
  ESPCHK(0x106f3c80u, _esp0);
  ESP += 4; return;
L_106f3d27:;
  /* 106f3d27 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 106f3d2a pop esi */
  ESI = (pop32());
  /* 106f3d2b pop edi */
  EDI = (pop32());
  /* 106f3d2c pop ebx */
  EBX = (pop32());
  /* 106f3d2d ret  */
  ESPCHK(0x106f3c80u, _esp0);
  ESP += 4; return;
L_106f3d2e:;
  /* 106f3d2e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 106f3d31 pop esi */
  ESI = (pop32());
  /* 106f3d32 pop edi */
  EDI = (pop32());
  /* 106f3d33 pop ebx */
  EBX = (pop32());
  /* 106f3d34 ret  */
  ESPCHK(0x106f3c80u, _esp0);
  ESP += 4; return;
L_106f3d35:;
  /* 106f3d35 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 106f3d38 pop esi */
  ESI = (pop32());
  /* 106f3d39 pop edi */
  EDI = (pop32());
  /* 106f3d3a pop ebx */
  EBX = (pop32());
  /* 106f3d3b ret  */
  ESPCHK(0x106f3c80u, _esp0);
  ESP += 4; return;
  /* 106f3d3c jmp dword ptr [0x107122bc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x107122bc)))); return;
}

/* RtlUnwind @ 0x106f3e8c (6 bytes, 1 insns) */
void f_106f3e8c(void) {
  FTRACE(0x106f3e8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f3e8c jmp dword ptr [0x107122a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x107122a0)))); return;
}

