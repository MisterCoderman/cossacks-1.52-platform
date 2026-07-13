#include "recomp.h"

/* FUN_1001a420 @ 0x11ada420 (10 bytes, 5 insns) */
void f_11ada420(void) {
  FTRACE(0x11ada420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ada420 push ebp */
  push32((uint32_t)(EBP));
  /* 11ada421 mov ebp, esp */
  EBP = (ESP);
  /* 11ada423 mov eax, dword ptr [0x11af7f70] */
  EAX = (r32((uint32_t)(0x11af7f70)));
  /* 11ada428 pop ebp */
  EBP = (pop32());
  /* 11ada429 ret  */
  ESPCHK(0x11ada420u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a430 @ 0x11ada430 (575 bytes, 196 insns) */
void f_11ada430(void) {
  FTRACE(0x11ada430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ada430 push ebp */
  push32((uint32_t)(EBP));
  /* 11ada431 mov ebp, esp */
  EBP = (ESP);
  /* 11ada433 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ada435 push 0x11af4ad0 */
  push32((uint32_t)(0x11af4ad0u));
  /* 11ada43a push 0x11ad82b0 */
  push32((uint32_t)(0x11ad82b0u));
  /* 11ada43f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ada445 push eax */
  push32((uint32_t)(EAX));
  /* 11ada446 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ada44d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada450 push ebx */
  push32((uint32_t)(EBX));
  /* 11ada451 push esi */
  push32((uint32_t)(ESI));
  /* 11ada452 push edi */
  push32((uint32_t)(EDI));
  /* 11ada453 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ada456 cmp dword ptr [0x11af9564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada45d jne 0x11ada4ae */
  if (!C.zf) goto L_11ada4ae;
  /* 11ada45f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11ada462 push eax */
  push32((uint32_t)(EAX));
  /* 11ada463 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ada465 push 0x11af41b4 */
  push32((uint32_t)(0x11af41b4u));
  /* 11ada46a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ada46c call dword ptr [0x11afb320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb320))), 0x11ada472u);
  /* 11ada472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ada474 je 0x11ada482 */
  if (C.zf) goto L_11ada482;
  /* 11ada476 mov dword ptr [0x11af9564], 1 */
  w32((uint32_t)(0x11af9564), (0x1u));
  /* 11ada480 jmp 0x11ada4ae */
  goto L_11ada4ae;
L_11ada482:;
  /* 11ada482 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11ada485 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada486 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ada488 push 0x11af41b0 */
  push32((uint32_t)(0x11af41b0u));
  /* 11ada48d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ada48f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada491 call dword ptr [0x11afb318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb318))), 0x11ada497u);
  /* 11ada497 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ada499 je 0x11ada4a7 */
  if (C.zf) goto L_11ada4a7;
  /* 11ada49b mov dword ptr [0x11af9564], 2 */
  w32((uint32_t)(0x11af9564), (0x2u));
  /* 11ada4a5 jmp 0x11ada4ae */
  goto L_11ada4ae;
L_11ada4a7:;
  /* 11ada4a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada4a9 jmp 0x11ada689 */
  goto L_11ada689;
L_11ada4ae:;
  /* 11ada4ae cmp dword ptr [0x11af9564], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af9564))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada4b5 jne 0x11ada4d2 */
  if (!C.zf) goto L_11ada4d2;
  /* 11ada4b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada4ba push edx */
  push32((uint32_t)(EDX));
  /* 11ada4bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada4be push eax */
  push32((uint32_t)(EAX));
  /* 11ada4bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ada4c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada4c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada4c6 push edx */
  push32((uint32_t)(EDX));
  /* 11ada4c7 call dword ptr [0x11afb320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb320))), 0x11ada4cdu);
  /* 11ada4cd jmp 0x11ada689 */
  goto L_11ada689;
L_11ada4d2:;
  /* 11ada4d2 cmp dword ptr [0x11af9564], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11af9564))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada4d9 jne 0x11ada687 */
  if (!C.zf) goto L_11ada687;
  /* 11ada4df cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada4e3 jne 0x11ada4ed */
  if (!C.zf) goto L_11ada4ed;
  /* 11ada4e5 mov eax, dword ptr [0x11af94e4] */
  EAX = (r32((uint32_t)(0x11af94e4)));
  /* 11ada4ea mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11ada4ed:;
  /* 11ada4ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada4ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada4f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada4f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada4f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada4f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada4f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ada4fc push edx */
  push32((uint32_t)(EDX));
  /* 11ada4fd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ada502 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ada505 push eax */
  push32((uint32_t)(EAX));
  /* 11ada506 call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11ada50cu);
  /* 11ada50c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ada50f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada513 jne 0x11ada51c */
  if (!C.zf) goto L_11ada51c;
  /* 11ada515 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada517 jmp 0x11ada689 */
  goto L_11ada689;
L_11ada51c:;
  /* 11ada51c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ada523 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ada526 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada529 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ada52b call 0x11acc800 */
  push32(0x11ada530u); f_11acc800();
  /* 11ada530 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11ada533 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ada536 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ada539 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ada53c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ada53f push edx */
  push32((uint32_t)(EDX));
  /* 11ada540 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada542 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ada545 push eax */
  push32((uint32_t)(EAX));
  /* 11ada546 call 0x11acef20 */
  push32(0x11ada54bu); f_11acef20();
  /* 11ada54b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada54e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ada555 jmp 0x11ada56e */
  goto L_11ada56e;
  /* 11ada557 mov eax, 1 */
  EAX = (0x1u);
  /* 11ada55c ret  */
  ESPCHK(0x11ada430u, _esp0);
  ESP += 4; return;
  /* 11ada55d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ada560 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11ada567 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ada56e:;
  /* 11ada56e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada572 jne 0x11ada57b */
  if (!C.zf) goto L_11ada57b;
  /* 11ada574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada576 jmp 0x11ada689 */
  goto L_11ada689;
L_11ada57b:;
  /* 11ada57b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada57d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada57f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ada582 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada583 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ada586 push edx */
  push32((uint32_t)(EDX));
  /* 11ada587 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada58a push eax */
  push32((uint32_t)(EAX));
  /* 11ada58b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ada58e push ecx */
  push32((uint32_t)(ECX));
  /* 11ada58f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ada594 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ada597 push edx */
  push32((uint32_t)(EDX));
  /* 11ada598 call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11ada59eu);
  /* 11ada59e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ada5a0 jne 0x11ada5a9 */
  if (!C.zf) goto L_11ada5a9;
  /* 11ada5a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada5a4 jmp 0x11ada689 */
  goto L_11ada689;
L_11ada5a9:;
  /* 11ada5a9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ada5b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ada5b3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11ada5b7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada5ba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ada5bc call 0x11acc800 */
  push32(0x11ada5c1u); f_11acc800();
  /* 11ada5c1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11ada5c4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ada5c7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ada5ca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ada5cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ada5d4 jmp 0x11ada5ed */
  goto L_11ada5ed;
  /* 11ada5d6 mov eax, 1 */
  EAX = (0x1u);
  /* 11ada5db ret  */
  ESPCHK(0x11ada430u, _esp0);
  ESP += 4; return;
  /* 11ada5dc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ada5df mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ada5e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ada5ed:;
  /* 11ada5ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada5f1 jne 0x11ada5fa */
  if (!C.zf) goto L_11ada5fa;
  /* 11ada5f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada5f5 jmp 0x11ada689 */
  goto L_11ada689;
L_11ada5fa:;
  /* 11ada5fa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada5fe jne 0x11ada609 */
  if (!C.zf) goto L_11ada609;
  /* 11ada600 mov edx, dword ptr [0x11af94d4] */
  EDX = (r32((uint32_t)(0x11af94d4)));
  /* 11ada606 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11ada609:;
  /* 11ada609 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada60c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ada60f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11ada615 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada618 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ada61b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11ada622 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ada625 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada626 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ada629 push edx */
  push32((uint32_t)(EDX));
  /* 11ada62a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ada62d push eax */
  push32((uint32_t)(EAX));
  /* 11ada62e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada631 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada632 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ada635 push edx */
  push32((uint32_t)(EDX));
  /* 11ada636 call dword ptr [0x11afb318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb318))), 0x11ada63cu);
  /* 11ada63c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ada63f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada642 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ada645 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ada647 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11ada64c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada652 je 0x11ada668 */
  if (C.zf) goto L_11ada668;
  /* 11ada654 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada657 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ada65a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ada65c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ada660 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada666 je 0x11ada66c */
  if (C.zf) goto L_11ada66c;
L_11ada668:;
  /* 11ada668 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada66a jmp 0x11ada689 */
  goto L_11ada689;
L_11ada66c:;
  /* 11ada66c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada66f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ada671 push eax */
  push32((uint32_t)(EAX));
  /* 11ada672 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ada675 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada676 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada679 push edx */
  push32((uint32_t)(EDX));
  /* 11ada67a call 0x11acef80 */
  push32(0x11ada67fu); f_11acef80();
  /* 11ada67f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada682 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ada685 jmp 0x11ada689 */
  goto L_11ada689;
L_11ada687:;
  /* 11ada687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ada689:;
  /* 11ada689 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11ada68c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ada68f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ada696 pop edi */
  EDI = (pop32());
  /* 11ada697 pop esi */
  ESI = (pop32());
  /* 11ada698 pop ebx */
  EBX = (pop32());
  /* 11ada699 mov esp, ebp */
  ESP = (EBP);
  /* 11ada69b pop ebp */
  EBP = (pop32());
  /* 11ada69c ret  */
  ESPCHK(0x11ada430u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a6a0 @ 0x11ada6a0 (208 bytes, 85 insns) */
void f_11ada6a0(void) {
  FTRACE(0x11ada6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ada6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ada6a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ada6a3 push edi */
  push32((uint32_t)(EDI));
  /* 11ada6a4 push esi */
  push32((uint32_t)(ESI));
  /* 11ada6a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11ada6a6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ada6a9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada6ac lea eax, [0x11af94cc] */
  EAX = ((uint32_t)(0x11af94cc));
  /* 11ada6b2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada6b6 jne 0x11ada6f3 */
  if (!C.zf) goto L_11ada6f3;
  /* 11ada6b8 mov al, 0xff */
  AL = (0xffu);
  /* 11ada6ba mov edi, edi */
  EDI = (EDI);
L_11ada6bc:;
  /* 11ada6bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ada6be je 0x11ada6ee */
  if (C.zf) goto L_11ada6ee;
  /* 11ada6c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ada6c2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ada6c3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11ada6c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ada6c6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada6c8 je 0x11ada6bc */
  if (C.zf) goto L_11ada6bc;
  /* 11ada6ca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ada6cc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada6ce sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ada6d0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ada6d3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ada6d5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ada6d7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11ada6d9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ada6db cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada6dd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ada6df and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ada6e2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ada6e4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ada6e6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada6e8 je 0x11ada6bc */
  if (C.zf) goto L_11ada6bc;
  /* 11ada6ea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ada6ec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11ada6ee:;
  /* 11ada6ee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11ada6f1 jmp 0x11ada76b */
  goto L_11ada76b;
L_11ada6f3:;
  /* 11ada6f3 lock inc dword ptr [0x11af9654] */
  x86_unimpl("lock inc @ 0x11ada6f3");
  /* 11ada6fa cmp dword ptr [0x11af9644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada701 jg 0x11ada707 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ada707;
  /* 11ada703 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada705 jmp 0x11ada71c */
  goto L_11ada71c;
L_11ada707:;
  /* 11ada707 lock dec dword ptr [0x11af9654] */
  x86_unimpl("lock dec @ 0x11ada707");
  /* 11ada70e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ada710 call 0x11acd060 */
  push32(0x11ada715u); f_11acd060();
  /* 11ada715 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11ada71c:;
  /* 11ada71c mov eax, 0xff */
  EAX = (0xffu);
  /* 11ada721 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ada723 nop  */
  /* nop */
L_11ada724:;
  /* 11ada724 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ada726 je 0x11ada74f */
  if (C.zf) goto L_11ada74f;
  /* 11ada728 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ada72a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ada72b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11ada72d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ada72e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada730 je 0x11ada724 */
  if (C.zf) goto L_11ada724;
  /* 11ada732 push eax */
  push32((uint32_t)(EAX));
  /* 11ada733 push ebx */
  push32((uint32_t)(EBX));
  /* 11ada734 call 0x11ace320 */
  push32(0x11ada739u); f_11ace320();
  /* 11ada739 mov ebx, eax */
  EBX = (EAX);
  /* 11ada73b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada73e call 0x11ace320 */
  push32(0x11ada743u); f_11ace320();
  /* 11ada743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada746 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada748 je 0x11ada724 */
  if (C.zf) goto L_11ada724;
  /* 11ada74a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ada74c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11ada74f:;
  /* 11ada74f mov ebx, eax */
  EBX = (EAX);
  /* 11ada751 pop eax */
  EAX = (pop32());
  /* 11ada752 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada754 jne 0x11ada75f */
  if (!C.zf) goto L_11ada75f;
  /* 11ada756 lock dec dword ptr [0x11af9654] */
  x86_unimpl("lock dec @ 0x11ada756");
  /* 11ada75d jmp 0x11ada769 */
  goto L_11ada769;
L_11ada75f:;
  /* 11ada75f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ada761 call 0x11acd100 */
  push32(0x11ada766u); f_11acd100();
  /* 11ada766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ada769:;
  /* 11ada769 mov eax, ebx */
  EAX = (EBX);
L_11ada76b:;
  /* 11ada76b pop ebx */
  EBX = (pop32());
  /* 11ada76c pop esi */
  ESI = (pop32());
  /* 11ada76d pop edi */
  EDI = (pop32());
  /* 11ada76e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ada76f ret  */
  ESPCHK(0x11ada6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a770 @ 0x11ada770 (257 bytes, 103 insns) */
void f_11ada770(void) {
  FTRACE(0x11ada770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ada770 push ebp */
  push32((uint32_t)(EBP));
  /* 11ada771 mov ebp, esp */
  EBP = (ESP);
  /* 11ada773 push edi */
  push32((uint32_t)(EDI));
  /* 11ada774 push esi */
  push32((uint32_t)(ESI));
  /* 11ada775 push ebx */
  push32((uint32_t)(EBX));
  /* 11ada776 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada779 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ada77b je 0x11ada86a */
  if (C.zf) goto L_11ada86a;
  /* 11ada781 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada784 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ada787 lea eax, [0x11af94cc] */
  EAX = ((uint32_t)(0x11af94cc));
  /* 11ada78d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada791 jne 0x11ada7e1 */
  if (!C.zf) goto L_11ada7e1;
  /* 11ada793 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11ada795 mov bl, 0x5a */
  BL = (0x5au);
  /* 11ada797 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11ada799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ada79c:;
  /* 11ada79c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11ada79e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ada7a0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11ada7a2 je 0x11ada7c5 */
  if (C.zf) goto L_11ada7c5;
  /* 11ada7a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ada7a6 je 0x11ada7c5 */
  if (C.zf) goto L_11ada7c5;
  /* 11ada7a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ada7a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ada7aa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada7ac jb 0x11ada7b4 */
  if (C.cf) goto L_11ada7b4;
  /* 11ada7ae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada7b0 ja 0x11ada7b4 */
  if ((!C.cf&&!C.zf)) goto L_11ada7b4;
  /* 11ada7b2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11ada7b4:;
  /* 11ada7b4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada7b6 jb 0x11ada7be */
  if (C.cf) goto L_11ada7be;
  /* 11ada7b8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada7ba ja 0x11ada7be */
  if ((!C.cf&&!C.zf)) goto L_11ada7be;
  /* 11ada7bc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11ada7be:;
  /* 11ada7be cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada7c0 jne 0x11ada7cf */
  if (!C.zf) goto L_11ada7cf;
  /* 11ada7c2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ada7c3 jne 0x11ada79c */
  if (!C.zf) goto L_11ada79c;
L_11ada7c5:;
  /* 11ada7c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ada7c7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ada7c9 je 0x11ada86a */
  if (C.zf) goto L_11ada86a;
L_11ada7cf:;
  /* 11ada7cf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11ada7d4 jb 0x11ada86a */
  if (C.cf) goto L_11ada86a;
  /* 11ada7da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ada7dc jmp 0x11ada86a */
  goto L_11ada86a;
L_11ada7e1:;
  /* 11ada7e1 lock inc dword ptr [0x11af9654] */
  x86_unimpl("lock inc @ 0x11ada7e1");
  /* 11ada7e8 cmp dword ptr [0x11af9644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada7ef jg 0x11ada7f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ada7f5;
  /* 11ada7f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada7f3 jmp 0x11ada80e */
  goto L_11ada80e;
L_11ada7f5:;
  /* 11ada7f5 lock dec dword ptr [0x11af9654] */
  x86_unimpl("lock dec @ 0x11ada7f5");
  /* 11ada7fc mov ebx, ecx */
  EBX = (ECX);
  /* 11ada7fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ada800 call 0x11acd060 */
  push32(0x11ada805u); f_11acd060();
  /* 11ada805 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11ada80c mov ecx, ebx */
  ECX = (EBX);
L_11ada80e:;
  /* 11ada80e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada810 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ada812 mov edi, edi */
  EDI = (EDI);
L_11ada814:;
  /* 11ada814 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ada816 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada818 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11ada81a je 0x11ada83f */
  if (C.zf) goto L_11ada83f;
  /* 11ada81c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ada81e je 0x11ada83f */
  if (C.zf) goto L_11ada83f;
  /* 11ada820 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ada821 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ada822 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada823 push eax */
  push32((uint32_t)(EAX));
  /* 11ada824 push ebx */
  push32((uint32_t)(EBX));
  /* 11ada825 call 0x11ace320 */
  push32(0x11ada82au); f_11ace320();
  /* 11ada82a mov ebx, eax */
  EBX = (EAX);
  /* 11ada82c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada82f call 0x11ace320 */
  push32(0x11ada834u); f_11ace320();
  /* 11ada834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada837 pop ecx */
  ECX = (pop32());
  /* 11ada838 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada83a jne 0x11ada845 */
  if (!C.zf) goto L_11ada845;
  /* 11ada83c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ada83d jne 0x11ada814 */
  if (!C.zf) goto L_11ada814;
L_11ada83f:;
  /* 11ada83f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ada841 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada843 je 0x11ada84e */
  if (C.zf) goto L_11ada84e;
L_11ada845:;
  /* 11ada845 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11ada84a jb 0x11ada84e */
  if (C.cf) goto L_11ada84e;
  /* 11ada84c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11ada84e:;
  /* 11ada84e pop eax */
  EAX = (pop32());
  /* 11ada84f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada851 jne 0x11ada85c */
  if (!C.zf) goto L_11ada85c;
  /* 11ada853 lock dec dword ptr [0x11af9654] */
  x86_unimpl("lock dec @ 0x11ada853");
  /* 11ada85a jmp 0x11ada86a */
  goto L_11ada86a;
L_11ada85c:;
  /* 11ada85c mov ebx, ecx */
  EBX = (ECX);
  /* 11ada85e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ada860 call 0x11acd100 */
  push32(0x11ada865u); f_11acd100();
  /* 11ada865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada868 mov ecx, ebx */
  ECX = (EBX);
L_11ada86a:;
  /* 11ada86a mov eax, ecx */
  EAX = (ECX);
  /* 11ada86c pop ebx */
  EBX = (pop32());
  /* 11ada86d pop esi */
  ESI = (pop32());
  /* 11ada86e pop edi */
  EDI = (pop32());
  /* 11ada86f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ada870 ret  */
  ESPCHK(0x11ada770u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a880 @ 0x11ada880 (255 bytes, 88 insns) */
void f_11ada880(void) {
  FTRACE(0x11ada880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ada880 push ebp */
  push32((uint32_t)(EBP));
  /* 11ada881 mov ebp, esp */
  EBP = (ESP);
  /* 11ada883 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11ada886:;
  /* 11ada886 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada88d jle 0x11ada8a6 */
  if ((C.zf||C.sf!=C.of)) goto L_11ada8a6;
  /* 11ada88f push 8 */
  push32((uint32_t)(0x8u));
  /* 11ada891 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada894 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ada896 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ada898 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada899 call 0x11ace1b0 */
  push32(0x11ada89eu); f_11ace1b0();
  /* 11ada89e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada8a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ada8a4 jmp 0x11ada8bf */
  goto L_11ada8bf;
L_11ada8a6:;
  /* 11ada8a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada8a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada8ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ada8ad mov ecx, dword ptr [0x11af6fb8] */
  ECX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ada8b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ada8b5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ada8b9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ada8bc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ada8bf:;
  /* 11ada8bf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada8c3 je 0x11ada8d0 */
  if (C.zf) goto L_11ada8d0;
  /* 11ada8c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada8c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada8cb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ada8ce jmp 0x11ada886 */
  goto L_11ada886;
L_11ada8d0:;
  /* 11ada8d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada8d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ada8d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ada8d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ada8da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada8dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada8e0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ada8e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ada8e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ada8e9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada8ed je 0x11ada8f5 */
  if (C.zf) goto L_11ada8f5;
  /* 11ada8ef cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada8f3 jne 0x11ada908 */
  if (!C.zf) goto L_11ada908;
L_11ada8f5:;
  /* 11ada8f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada8f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada8fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ada8fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ada8ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada902 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada905 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ada908:;
  /* 11ada908 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ada90f:;
  /* 11ada90f cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada916 jle 0x11ada92b */
  if ((C.zf||C.sf!=C.of)) goto L_11ada92b;
  /* 11ada918 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ada91a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ada91d push edx */
  push32((uint32_t)(EDX));
  /* 11ada91e call 0x11ace1b0 */
  push32(0x11ada923u); f_11ace1b0();
  /* 11ada923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada926 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ada929 jmp 0x11ada940 */
  goto L_11ada940;
L_11ada92b:;
  /* 11ada92b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ada92e mov ecx, dword ptr [0x11af6fb8] */
  ECX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ada934 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ada936 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ada93a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ada93d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11ada940:;
  /* 11ada940 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada944 je 0x11ada96b */
  if (C.zf) goto L_11ada96b;
  /* 11ada946 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ada949 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ada94c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ada94f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11ada953 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ada956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada959 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ada95b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ada95d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ada960 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada963 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada966 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ada969 jmp 0x11ada90f */
  goto L_11ada90f;
L_11ada96b:;
  /* 11ada96b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada96f jne 0x11ada978 */
  if (!C.zf) goto L_11ada978;
  /* 11ada971 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ada974 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ada976 jmp 0x11ada97b */
  goto L_11ada97b;
L_11ada978:;
  /* 11ada978 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ada97b:;
  /* 11ada97b mov esp, ebp */
  ESP = (EBP);
  /* 11ada97d pop ebp */
  EBP = (pop32());
  /* 11ada97e ret  */
  ESPCHK(0x11ada880u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a980 @ 0x11ada980 (17 bytes, 8 insns) */
void f_11ada980(void) {
  FTRACE(0x11ada980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ada980 push ebp */
  push32((uint32_t)(EBP));
  /* 11ada981 mov ebp, esp */
  EBP = (ESP);
  /* 11ada983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada986 push eax */
  push32((uint32_t)(EAX));
  /* 11ada987 call 0x11ada880 */
  push32(0x11ada98cu); f_11ada880();
  /* 11ada98c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada98f pop ebp */
  EBP = (pop32());
  /* 11ada990 ret  */
  ESPCHK(0x11ada980u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a9a0 @ 0x11ada9a0 (297 bytes, 106 insns) */
void f_11ada9a0(void) {
  FTRACE(0x11ada9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ada9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ada9a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ada9a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ada9a6 push esi */
  push32((uint32_t)(ESI));
L_11ada9a7:;
  /* 11ada9a7 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada9ae jle 0x11ada9c7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ada9c7;
  /* 11ada9b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ada9b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada9b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ada9b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ada9b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada9ba call 0x11ace1b0 */
  push32(0x11ada9bfu); f_11ace1b0();
  /* 11ada9bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada9c2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ada9c5 jmp 0x11ada9e0 */
  goto L_11ada9e0;
L_11ada9c7:;
  /* 11ada9c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada9ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada9cc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ada9ce mov ecx, dword ptr [0x11af6fb8] */
  ECX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ada9d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ada9d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ada9da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ada9dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11ada9e0:;
  /* 11ada9e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada9e4 je 0x11ada9f1 */
  if (C.zf) goto L_11ada9f1;
  /* 11ada9e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada9e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada9ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ada9ef jmp 0x11ada9a7 */
  goto L_11ada9a7;
L_11ada9f1:;
  /* 11ada9f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada9f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ada9f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ada9f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ada9fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada9fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaa01 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11adaa04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adaa07 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11adaa0a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaa0e je 0x11adaa16 */
  if (C.zf) goto L_11adaa16;
  /* 11adaa10 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaa14 jne 0x11adaa29 */
  if (!C.zf) goto L_11adaa29;
L_11adaa16:;
  /* 11adaa16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adaa19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adaa1b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11adaa1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11adaa20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adaa23 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaa26 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11adaa29:;
  /* 11adaa29 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11adaa30 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11adaa37:;
  /* 11adaa37 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaa3e jle 0x11adaa53 */
  if ((C.zf||C.sf!=C.of)) goto L_11adaa53;
  /* 11adaa40 push 4 */
  push32((uint32_t)(0x4u));
  /* 11adaa42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adaa45 push edx */
  push32((uint32_t)(EDX));
  /* 11adaa46 call 0x11ace1b0 */
  push32(0x11adaa4bu); f_11ace1b0();
  /* 11adaa4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaa4e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11adaa51 jmp 0x11adaa68 */
  goto L_11adaa68;
L_11adaa53:;
  /* 11adaa53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adaa56 mov ecx, dword ptr [0x11af6fb8] */
  ECX = (r32((uint32_t)(0x11af6fb8)));
  /* 11adaa5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adaa5e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11adaa62 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11adaa65 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11adaa68:;
  /* 11adaa68 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaa6c je 0x11adaaa9 */
  if (C.zf) goto L_11adaaa9;
  /* 11adaa6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11adaa70 push 0xa */
  push32((uint32_t)(0xau));
  /* 11adaa72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adaa75 push eax */
  push32((uint32_t)(EAX));
  /* 11adaa76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adaa79 push ecx */
  push32((uint32_t)(ECX));
  /* 11adaa7a call 0x11adb760 */
  push32(0x11adaa7fu); f_11adb760();
  /* 11adaa7f mov ecx, eax */
  ECX = (EAX);
  /* 11adaa81 mov esi, edx */
  ESI = (EDX);
  /* 11adaa83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adaa86 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adaa89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11adaa8a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaa8c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaa8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11adaa91 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11adaa94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adaa97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adaa99 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11adaa9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11adaa9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adaaa1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaaa4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11adaaa7 jmp 0x11adaa37 */
  goto L_11adaa37;
L_11adaaa9:;
  /* 11adaaa9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaaad jne 0x11adaabe */
  if (!C.zf) goto L_11adaabe;
  /* 11adaaaf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adaab2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11adaab4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adaab7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaaba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11adaabc jmp 0x11adaac4 */
  goto L_11adaac4;
L_11adaabe:;
  /* 11adaabe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adaac1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11adaac4:;
  /* 11adaac4 pop esi */
  ESI = (pop32());
  /* 11adaac5 mov esp, ebp */
  ESP = (EBP);
  /* 11adaac7 pop ebp */
  EBP = (pop32());
  /* 11adaac8 ret  */
  ESPCHK(0x11ada9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aad0 @ 0x11adaad0 (61 bytes, 18 insns) */
void f_11adaad0(void) {
  FTRACE(0x11adaad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adaad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adaad1 mov ebp, esp */
  EBP = (ESP);
  /* 11adaad3 cmp dword ptr [0x11af9620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaada jne 0x11adab0b */
  if (!C.zf) goto L_11adab0b;
  /* 11adaadc push 0xb */
  push32((uint32_t)(0xbu));
  /* 11adaade call 0x11acd060 */
  push32(0x11adaae3u); f_11acd060();
  /* 11adaae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaae6 cmp dword ptr [0x11af9620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaaed jne 0x11adab01 */
  if (!C.zf) goto L_11adab01;
  /* 11adaaef call 0x11adab30 */
  push32(0x11adaaf4u); f_11adab30();
  /* 11adaaf4 mov eax, dword ptr [0x11af9620] */
  EAX = (r32((uint32_t)(0x11af9620)));
  /* 11adaaf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaafc mov dword ptr [0x11af9620], eax */
  w32((uint32_t)(0x11af9620), (EAX));
L_11adab01:;
  /* 11adab01 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11adab03 call 0x11acd100 */
  push32(0x11adab08u); f_11acd100();
  /* 11adab08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11adab0b:;
  /* 11adab0b pop ebp */
  EBP = (pop32());
  /* 11adab0c ret  */
  ESPCHK(0x11adaad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab10 @ 0x11adab10 (30 bytes, 11 insns) */
void f_11adab10(void) {
  FTRACE(0x11adab10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adab10 push ebp */
  push32((uint32_t)(EBP));
  /* 11adab11 mov ebp, esp */
  EBP = (ESP);
  /* 11adab13 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11adab15 call 0x11acd060 */
  push32(0x11adab1au); f_11acd060();
  /* 11adab1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adab1d call 0x11adab30 */
  push32(0x11adab22u); f_11adab30();
  /* 11adab22 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11adab24 call 0x11acd100 */
  push32(0x11adab29u); f_11acd100();
  /* 11adab29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adab2c pop ebp */
  EBP = (pop32());
  /* 11adab2d ret  */
  ESPCHK(0x11adab10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab30 @ 0x11adab30 (939 bytes, 266 insns) */
void f_11adab30(void) {
  FTRACE(0x11adab30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adab30 push ebp */
  push32((uint32_t)(EBP));
  /* 11adab31 mov ebp, esp */
  EBP = (ESP);
  /* 11adab33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adab36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11adab3d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11adab3f call 0x11acd060 */
  push32(0x11adab44u); f_11acd060();
  /* 11adab44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adab47 mov dword ptr [0x11af9568], 0 */
  w32((uint32_t)(0x11af9568), (0x0u));
  /* 11adab51 mov dword ptr [0x11af82e0], 0xffffffff */
  w32((uint32_t)(0x11af82e0), (0xffffffffu));
  /* 11adab5b mov eax, dword ptr [0x11af82e0] */
  EAX = (r32((uint32_t)(0x11af82e0)));
  /* 11adab60 mov dword ptr [0x11af82d0], eax */
  w32((uint32_t)(0x11af82d0), (EAX));
  /* 11adab65 push 0x11af4b30 */
  push32((uint32_t)(0x11af4b30u));
  /* 11adab6a call 0x11adb7d0 */
  push32(0x11adab6fu); f_11adb7d0();
  /* 11adab6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adab72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11adab75 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adab79 jne 0x11adacb3 */
  if (!C.zf) goto L_11adacb3;
  /* 11adab7f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11adab81 call 0x11acd100 */
  push32(0x11adab86u); f_11acd100();
  /* 11adab86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adab89 push 0x11af9570 */
  push32((uint32_t)(0x11af9570u));
  /* 11adab8e call dword ptr [0x11afb2e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2e0))), 0x11adab94u);
  /* 11adab94 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adab97 je 0x11adacae */
  if (C.zf) goto L_11adacae;
  /* 11adab9d mov dword ptr [0x11af9568], 1 */
  w32((uint32_t)(0x11af9568), (0x1u));
  /* 11adaba7 mov ecx, dword ptr [0x11af9570] */
  ECX = (r32((uint32_t)(0x11af9570)));
  /* 11adabad imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adabb0 mov dword ptr [0x11af823c], ecx */
  w32((uint32_t)(0x11af823c), (ECX));
  /* 11adabb6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adabb8 mov dx, word ptr [0x11af95b6] */
  DX = (r16((uint32_t)(0x11af95b6)));
  /* 11adabbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adabc1 je 0x11adabd9 */
  if (C.zf) goto L_11adabd9;
  /* 11adabc3 mov eax, dword ptr [0x11af95c4] */
  EAX = (r32((uint32_t)(0x11af95c4)));
  /* 11adabc8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adabcb mov ecx, dword ptr [0x11af823c] */
  ECX = (r32((uint32_t)(0x11af823c)));
  /* 11adabd1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adabd3 mov dword ptr [0x11af823c], ecx */
  w32((uint32_t)(0x11af823c), (ECX));
L_11adabd9:;
  /* 11adabd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adabdb mov dx, word ptr [0x11af960a] */
  DX = (r16((uint32_t)(0x11af960a)));
  /* 11adabe2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adabe4 je 0x11adac0e */
  if (C.zf) goto L_11adac0e;
  /* 11adabe6 cmp dword ptr [0x11af9618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adabed je 0x11adac0e */
  if (C.zf) goto L_11adac0e;
  /* 11adabef mov dword ptr [0x11af8240], 1 */
  w32((uint32_t)(0x11af8240), (0x1u));
  /* 11adabf9 mov eax, dword ptr [0x11af9618] */
  EAX = (r32((uint32_t)(0x11af9618)));
  /* 11adabfe sub eax, dword ptr [0x11af95c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af95c4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adac04 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adac07 mov dword ptr [0x11af8244], eax */
  w32((uint32_t)(0x11af8244), (EAX));
  /* 11adac0c jmp 0x11adac22 */
  goto L_11adac22;
L_11adac0e:;
  /* 11adac0e mov dword ptr [0x11af8240], 0 */
  w32((uint32_t)(0x11af8240), (0x0u));
  /* 11adac18 mov dword ptr [0x11af8244], 0 */
  w32((uint32_t)(0x11af8244), (0x0u));
L_11adac22:;
  /* 11adac22 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11adac25 push ecx */
  push32((uint32_t)(ECX));
  /* 11adac26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adac28 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11adac2a mov edx, dword ptr [0x11af82c8] */
  EDX = (r32((uint32_t)(0x11af82c8)));
  /* 11adac30 push edx */
  push32((uint32_t)(EDX));
  /* 11adac31 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adac33 push 0x11af9574 */
  push32((uint32_t)(0x11af9574u));
  /* 11adac38 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11adac3d mov eax, dword ptr [0x11af94e4] */
  EAX = (r32((uint32_t)(0x11af94e4)));
  /* 11adac42 push eax */
  push32((uint32_t)(EAX));
  /* 11adac43 call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11adac49u);
  /* 11adac49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adac4b je 0x11adac5f */
  if (C.zf) goto L_11adac5f;
  /* 11adac4d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adac51 jne 0x11adac5f */
  if (!C.zf) goto L_11adac5f;
  /* 11adac53 mov ecx, dword ptr [0x11af82c8] */
  ECX = (r32((uint32_t)(0x11af82c8)));
  /* 11adac59 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11adac5d jmp 0x11adac68 */
  goto L_11adac68;
L_11adac5f:;
  /* 11adac5f mov edx, dword ptr [0x11af82c8] */
  EDX = (r32((uint32_t)(0x11af82c8)));
  /* 11adac65 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11adac68:;
  /* 11adac68 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11adac6b push eax */
  push32((uint32_t)(EAX));
  /* 11adac6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11adac6e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11adac70 mov ecx, dword ptr [0x11af82cc] */
  ECX = (r32((uint32_t)(0x11af82cc)));
  /* 11adac76 push ecx */
  push32((uint32_t)(ECX));
  /* 11adac77 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adac79 push 0x11af95c8 */
  push32((uint32_t)(0x11af95c8u));
  /* 11adac7e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11adac83 mov edx, dword ptr [0x11af94e4] */
  EDX = (r32((uint32_t)(0x11af94e4)));
  /* 11adac89 push edx */
  push32((uint32_t)(EDX));
  /* 11adac8a call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11adac90u);
  /* 11adac90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adac92 je 0x11adaca5 */
  if (C.zf) goto L_11adaca5;
  /* 11adac94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adac98 jne 0x11adaca5 */
  if (!C.zf) goto L_11adaca5;
  /* 11adac9a mov eax, dword ptr [0x11af82cc] */
  EAX = (r32((uint32_t)(0x11af82cc)));
  /* 11adac9f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11adaca3 jmp 0x11adacae */
  goto L_11adacae;
L_11adaca5:;
  /* 11adaca5 mov ecx, dword ptr [0x11af82cc] */
  ECX = (r32((uint32_t)(0x11af82cc)));
  /* 11adacab mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11adacae:;
  /* 11adacae jmp 0x11adaed7 */
  goto L_11adaed7;
L_11adacb3:;
  /* 11adacb3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adacb6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11adacb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adacbb je 0x11adacdd */
  if (C.zf) goto L_11adacdd;
  /* 11adacbd cmp dword ptr [0x11af961c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af961c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adacc4 je 0x11adacec */
  if (C.zf) goto L_11adacec;
  /* 11adacc6 mov ecx, dword ptr [0x11af961c] */
  ECX = (r32((uint32_t)(0x11af961c)));
  /* 11adaccc push ecx */
  push32((uint32_t)(ECX));
  /* 11adaccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adacd0 push edx */
  push32((uint32_t)(EDX));
  /* 11adacd1 call 0x11ad72d0 */
  push32(0x11adacd6u); f_11ad72d0();
  /* 11adacd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adacd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adacdb jne 0x11adacec */
  if (!C.zf) goto L_11adacec;
L_11adacdd:;
  /* 11adacdd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11adacdf call 0x11acd100 */
  push32(0x11adace4u); f_11acd100();
  /* 11adace4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adace7 jmp 0x11adaed7 */
  goto L_11adaed7;
L_11adacec:;
  /* 11adacec push 2 */
  push32((uint32_t)(0x2u));
  /* 11adacee mov eax, dword ptr [0x11af961c] */
  EAX = (r32((uint32_t)(0x11af961c)));
  /* 11adacf3 push eax */
  push32((uint32_t)(EAX));
  /* 11adacf4 call 0x11aca0f0 */
  push32(0x11adacf9u); f_11aca0f0();
  /* 11adacf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adacfc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11adad01 push 0x11af4b28 */
  push32((uint32_t)(0x11af4b28u));
  /* 11adad06 push 2 */
  push32((uint32_t)(0x2u));
  /* 11adad08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adad0b push ecx */
  push32((uint32_t)(ECX));
  /* 11adad0c call 0x11acc490 */
  push32(0x11adad11u); f_11acc490();
  /* 11adad11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adad14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adad17 push eax */
  push32((uint32_t)(EAX));
  /* 11adad18 call 0x11ac9660 */
  push32(0x11adad1du); f_11ac9660();
  /* 11adad1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adad20 mov dword ptr [0x11af961c], eax */
  w32((uint32_t)(0x11af961c), (EAX));
  /* 11adad25 cmp dword ptr [0x11af961c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af961c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adad2c jne 0x11adad3d */
  if (!C.zf) goto L_11adad3d;
  /* 11adad2e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11adad30 call 0x11acd100 */
  push32(0x11adad35u); f_11acd100();
  /* 11adad35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adad38 jmp 0x11adaed7 */
  goto L_11adaed7;
L_11adad3d:;
  /* 11adad3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adad40 push edx */
  push32((uint32_t)(EDX));
  /* 11adad41 mov eax, dword ptr [0x11af961c] */
  EAX = (r32((uint32_t)(0x11af961c)));
  /* 11adad46 push eax */
  push32((uint32_t)(EAX));
  /* 11adad47 call 0x11acc610 */
  push32(0x11adad4cu); f_11acc610();
  /* 11adad4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adad4f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11adad51 call 0x11acd100 */
  push32(0x11adad56u); f_11acd100();
  /* 11adad56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adad59 push 3 */
  push32((uint32_t)(0x3u));
  /* 11adad5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adad5e push ecx */
  push32((uint32_t)(ECX));
  /* 11adad5f mov edx, dword ptr [0x11af82c8] */
  EDX = (r32((uint32_t)(0x11af82c8)));
  /* 11adad65 push edx */
  push32((uint32_t)(EDX));
  /* 11adad66 call 0x11acce80 */
  push32(0x11adad6bu); f_11acce80();
  /* 11adad6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adad6e mov eax, dword ptr [0x11af82c8] */
  EAX = (r32((uint32_t)(0x11af82c8)));
  /* 11adad73 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11adad77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adad7a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adad7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11adad80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adad83 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11adad86 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adad89 jne 0x11adad9d */
  if (!C.zf) goto L_11adad9d;
  /* 11adad8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adad8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adad91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11adad94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adad97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adad9a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11adad9d:;
  /* 11adad9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adada0 push eax */
  push32((uint32_t)(EAX));
  /* 11adada1 call 0x11ada880 */
  push32(0x11adada6u); f_11ada880();
  /* 11adada6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adada9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adadaf mov dword ptr [0x11af823c], eax */
  w32((uint32_t)(0x11af823c), (EAX));
L_11adadb4:;
  /* 11adadb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adadb7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11adadba cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adadbd je 0x11adadd5 */
  if (C.zf) goto L_11adadd5;
  /* 11adadbf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adadc2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11adadc5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adadc8 jl 0x11adade0 */
  if ((C.sf!=C.of)) goto L_11adade0;
  /* 11adadca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adadcd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11adadd0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adadd3 jg 0x11adade0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11adade0;
L_11adadd5:;
  /* 11adadd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adadd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaddb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11adadde jmp 0x11adadb4 */
  goto L_11adadb4;
L_11adade0:;
  /* 11adade0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adade3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11adade6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adade9 jne 0x11adae85 */
  if (!C.zf) goto L_11adae85;
  /* 11adadef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adadf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adadf5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11adadf8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adadfb push edx */
  push32((uint32_t)(EDX));
  /* 11adadfc call 0x11ada880 */
  push32(0x11adae01u); f_11ada880();
  /* 11adae01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adae04 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adae07 mov ecx, dword ptr [0x11af823c] */
  ECX = (r32((uint32_t)(0x11af823c)));
  /* 11adae0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adae0f mov dword ptr [0x11af823c], ecx */
  w32((uint32_t)(0x11af823c), (ECX));
L_11adae15:;
  /* 11adae15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adae18 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11adae1b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adae1e jl 0x11adae36 */
  if ((C.sf!=C.of)) goto L_11adae36;
  /* 11adae20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adae23 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11adae26 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adae29 jg 0x11adae36 */
  if ((!C.zf&&C.sf==C.of)) goto L_11adae36;
  /* 11adae2b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adae2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adae31 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11adae34 jmp 0x11adae15 */
  goto L_11adae15;
L_11adae36:;
  /* 11adae36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adae39 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11adae3c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adae3f jne 0x11adae85 */
  if (!C.zf) goto L_11adae85;
  /* 11adae41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adae44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adae47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11adae4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adae4d push ecx */
  push32((uint32_t)(ECX));
  /* 11adae4e call 0x11ada880 */
  push32(0x11adae53u); f_11ada880();
  /* 11adae53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adae56 mov edx, dword ptr [0x11af823c] */
  EDX = (r32((uint32_t)(0x11af823c)));
  /* 11adae5c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adae5e mov dword ptr [0x11af823c], edx */
  w32((uint32_t)(0x11af823c), (EDX));
L_11adae64:;
  /* 11adae64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adae67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11adae6a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adae6d jl 0x11adae85 */
  if ((C.sf!=C.of)) goto L_11adae85;
  /* 11adae6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adae72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11adae75 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adae78 jg 0x11adae85 */
  if ((!C.zf&&C.sf==C.of)) goto L_11adae85;
  /* 11adae7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adae7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adae80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11adae83 jmp 0x11adae64 */
  goto L_11adae64;
L_11adae85:;
  /* 11adae85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adae89 je 0x11adae99 */
  if (C.zf) goto L_11adae99;
  /* 11adae8b mov edx, dword ptr [0x11af823c] */
  EDX = (r32((uint32_t)(0x11af823c)));
  /* 11adae91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11adae93 mov dword ptr [0x11af823c], edx */
  w32((uint32_t)(0x11af823c), (EDX));
L_11adae99:;
  /* 11adae99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adae9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11adae9f mov dword ptr [0x11af8240], ecx */
  w32((uint32_t)(0x11af8240), (ECX));
  /* 11adaea5 cmp dword ptr [0x11af8240], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af8240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaeac je 0x11adaece */
  if (C.zf) goto L_11adaece;
  /* 11adaeae push 3 */
  push32((uint32_t)(0x3u));
  /* 11adaeb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adaeb3 push edx */
  push32((uint32_t)(EDX));
  /* 11adaeb4 mov eax, dword ptr [0x11af82cc] */
  EAX = (r32((uint32_t)(0x11af82cc)));
  /* 11adaeb9 push eax */
  push32((uint32_t)(EAX));
  /* 11adaeba call 0x11acce80 */
  push32(0x11adaebfu); f_11acce80();
  /* 11adaebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaec2 mov ecx, dword ptr [0x11af82cc] */
  ECX = (r32((uint32_t)(0x11af82cc)));
  /* 11adaec8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11adaecc jmp 0x11adaed7 */
  goto L_11adaed7;
L_11adaece:;
  /* 11adaece mov edx, dword ptr [0x11af82cc] */
  EDX = (r32((uint32_t)(0x11af82cc)));
  /* 11adaed4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11adaed7:;
  /* 11adaed7 mov esp, ebp */
  ESP = (EBP);
  /* 11adaed9 pop ebp */
  EBP = (pop32());
  /* 11adaeda ret  */
  ESPCHK(0x11adab30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aee0 @ 0x11adaee0 (46 bytes, 18 insns) */
void f_11adaee0(void) {
  FTRACE(0x11adaee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adaee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adaee1 mov ebp, esp */
  EBP = (ESP);
  /* 11adaee3 push ecx */
  push32((uint32_t)(ECX));
  /* 11adaee4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11adaee6 call 0x11acd060 */
  push32(0x11adaeebu); f_11acd060();
  /* 11adaeeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaeee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adaef1 push eax */
  push32((uint32_t)(EAX));
  /* 11adaef2 call 0x11adaf10 */
  push32(0x11adaef7u); f_11adaf10();
  /* 11adaef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaefa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11adaefd push 0xb */
  push32((uint32_t)(0xbu));
  /* 11adaeff call 0x11acd100 */
  push32(0x11adaf04u); f_11acd100();
  /* 11adaf04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adaf07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adaf0a mov esp, ebp */
  ESP = (EBP);
  /* 11adaf0c pop ebp */
  EBP = (pop32());
  /* 11adaf0d ret  */
  ESPCHK(0x11adaee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001af10 @ 0x11adaf10 (762 bytes, 246 insns) */
void f_11adaf10(void) {
  FTRACE(0x11adaf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adaf10 push ebp */
  push32((uint32_t)(EBP));
  /* 11adaf11 mov ebp, esp */
  EBP = (ESP);
  /* 11adaf13 push ecx */
  push32((uint32_t)(ECX));
  /* 11adaf14 cmp dword ptr [0x11af8240], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af8240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaf1b jne 0x11adaf24 */
  if (!C.zf) goto L_11adaf24;
  /* 11adaf1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adaf1f jmp 0x11adb206 */
  goto L_11adb206;
L_11adaf24:;
  /* 11adaf24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adaf27 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11adaf2a cmp ecx, dword ptr [0x11af82d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af82d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaf30 jne 0x11adaf44 */
  if (!C.zf) goto L_11adaf44;
  /* 11adaf32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adaf35 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11adaf38 cmp eax, dword ptr [0x11af82e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af82e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaf3e je 0x11adb10b */
  if (C.zf) goto L_11adb10b;
L_11adaf44:;
  /* 11adaf44 cmp dword ptr [0x11af9568], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9568))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adaf4b je 0x11adb0c5 */
  if (C.zf) goto L_11adb0c5;
  /* 11adaf51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adaf53 mov cx, word ptr [0x11af9608] */
  CX = (r16((uint32_t)(0x11af9608)));
  /* 11adaf5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11adaf5c jne 0x11adafb9 */
  if (!C.zf) goto L_11adafb9;
  /* 11adaf5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adaf60 mov dx, word ptr [0x11af9616] */
  DX = (r16((uint32_t)(0x11af9616)));
  /* 11adaf67 push edx */
  push32((uint32_t)(EDX));
  /* 11adaf68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adaf6a mov ax, word ptr [0x11af9614] */
  AX = (r16((uint32_t)(0x11af9614)));
  /* 11adaf70 push eax */
  push32((uint32_t)(EAX));
  /* 11adaf71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adaf73 mov cx, word ptr [0x11af9612] */
  CX = (r16((uint32_t)(0x11af9612)));
  /* 11adaf7a push ecx */
  push32((uint32_t)(ECX));
  /* 11adaf7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adaf7d mov dx, word ptr [0x11af9610] */
  DX = (r16((uint32_t)(0x11af9610)));
  /* 11adaf84 push edx */
  push32((uint32_t)(EDX));
  /* 11adaf85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adaf87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adaf89 mov ax, word ptr [0x11af960c] */
  AX = (r16((uint32_t)(0x11af960c)));
  /* 11adaf8f push eax */
  push32((uint32_t)(EAX));
  /* 11adaf90 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adaf92 mov cx, word ptr [0x11af960e] */
  CX = (r16((uint32_t)(0x11af960e)));
  /* 11adaf99 push ecx */
  push32((uint32_t)(ECX));
  /* 11adaf9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adaf9c mov dx, word ptr [0x11af960a] */
  DX = (r16((uint32_t)(0x11af960a)));
  /* 11adafa3 push edx */
  push32((uint32_t)(EDX));
  /* 11adafa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adafa7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11adafaa push ecx */
  push32((uint32_t)(ECX));
  /* 11adafab push 1 */
  push32((uint32_t)(0x1u));
  /* 11adafad push 1 */
  push32((uint32_t)(0x1u));
  /* 11adafaf call 0x11adb210 */
  push32(0x11adafb4u); f_11adb210();
  /* 11adafb4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adafb7 jmp 0x11adb00a */
  goto L_11adb00a;
L_11adafb9:;
  /* 11adafb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adafbb mov dx, word ptr [0x11af9616] */
  DX = (r16((uint32_t)(0x11af9616)));
  /* 11adafc2 push edx */
  push32((uint32_t)(EDX));
  /* 11adafc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adafc5 mov ax, word ptr [0x11af9614] */
  AX = (r16((uint32_t)(0x11af9614)));
  /* 11adafcb push eax */
  push32((uint32_t)(EAX));
  /* 11adafcc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adafce mov cx, word ptr [0x11af9612] */
  CX = (r16((uint32_t)(0x11af9612)));
  /* 11adafd5 push ecx */
  push32((uint32_t)(ECX));
  /* 11adafd6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adafd8 mov dx, word ptr [0x11af9610] */
  DX = (r16((uint32_t)(0x11af9610)));
  /* 11adafdf push edx */
  push32((uint32_t)(EDX));
  /* 11adafe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adafe2 mov ax, word ptr [0x11af960e] */
  AX = (r16((uint32_t)(0x11af960e)));
  /* 11adafe8 push eax */
  push32((uint32_t)(EAX));
  /* 11adafe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adafeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11adafed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adafef mov cx, word ptr [0x11af960a] */
  CX = (r16((uint32_t)(0x11af960a)));
  /* 11adaff6 push ecx */
  push32((uint32_t)(ECX));
  /* 11adaff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adaffa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11adaffd push eax */
  push32((uint32_t)(EAX));
  /* 11adaffe push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb000 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb002 call 0x11adb210 */
  push32(0x11adb007u); f_11adb210();
  /* 11adb007 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11adb00a:;
  /* 11adb00a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adb00c mov cx, word ptr [0x11af95b4] */
  CX = (r16((uint32_t)(0x11af95b4)));
  /* 11adb013 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11adb015 jne 0x11adb072 */
  if (!C.zf) goto L_11adb072;
  /* 11adb017 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adb019 mov dx, word ptr [0x11af95c2] */
  DX = (r16((uint32_t)(0x11af95c2)));
  /* 11adb020 push edx */
  push32((uint32_t)(EDX));
  /* 11adb021 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb023 mov ax, word ptr [0x11af95c0] */
  AX = (r16((uint32_t)(0x11af95c0)));
  /* 11adb029 push eax */
  push32((uint32_t)(EAX));
  /* 11adb02a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adb02c mov cx, word ptr [0x11af95be] */
  CX = (r16((uint32_t)(0x11af95be)));
  /* 11adb033 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb034 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adb036 mov dx, word ptr [0x11af95bc] */
  DX = (r16((uint32_t)(0x11af95bc)));
  /* 11adb03d push edx */
  push32((uint32_t)(EDX));
  /* 11adb03e push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb042 mov ax, word ptr [0x11af95b8] */
  AX = (r16((uint32_t)(0x11af95b8)));
  /* 11adb048 push eax */
  push32((uint32_t)(EAX));
  /* 11adb049 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adb04b mov cx, word ptr [0x11af95ba] */
  CX = (r16((uint32_t)(0x11af95ba)));
  /* 11adb052 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb053 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adb055 mov dx, word ptr [0x11af95b6] */
  DX = (r16((uint32_t)(0x11af95b6)));
  /* 11adb05c push edx */
  push32((uint32_t)(EDX));
  /* 11adb05d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb060 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11adb063 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb064 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb066 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb068 call 0x11adb210 */
  push32(0x11adb06du); f_11adb210();
  /* 11adb06d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb070 jmp 0x11adb0c3 */
  goto L_11adb0c3;
L_11adb072:;
  /* 11adb072 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adb074 mov dx, word ptr [0x11af95c2] */
  DX = (r16((uint32_t)(0x11af95c2)));
  /* 11adb07b push edx */
  push32((uint32_t)(EDX));
  /* 11adb07c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb07e mov ax, word ptr [0x11af95c0] */
  AX = (r16((uint32_t)(0x11af95c0)));
  /* 11adb084 push eax */
  push32((uint32_t)(EAX));
  /* 11adb085 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adb087 mov cx, word ptr [0x11af95be] */
  CX = (r16((uint32_t)(0x11af95be)));
  /* 11adb08e push ecx */
  push32((uint32_t)(ECX));
  /* 11adb08f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adb091 mov dx, word ptr [0x11af95bc] */
  DX = (r16((uint32_t)(0x11af95bc)));
  /* 11adb098 push edx */
  push32((uint32_t)(EDX));
  /* 11adb099 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb09b mov ax, word ptr [0x11af95ba] */
  AX = (r16((uint32_t)(0x11af95ba)));
  /* 11adb0a1 push eax */
  push32((uint32_t)(EAX));
  /* 11adb0a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adb0a8 mov cx, word ptr [0x11af95b6] */
  CX = (r16((uint32_t)(0x11af95b6)));
  /* 11adb0af push ecx */
  push32((uint32_t)(ECX));
  /* 11adb0b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb0b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11adb0b6 push eax */
  push32((uint32_t)(EAX));
  /* 11adb0b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0bb call 0x11adb210 */
  push32(0x11adb0c0u); f_11adb210();
  /* 11adb0c0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11adb0c3:;
  /* 11adb0c3 jmp 0x11adb10b */
  goto L_11adb10b;
L_11adb0c5:;
  /* 11adb0c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0cb push 2 */
  push32((uint32_t)(0x2u));
  /* 11adb0cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb0d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11adb0d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb0d8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11adb0db push edx */
  push32((uint32_t)(EDX));
  /* 11adb0dc push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb0de push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb0e0 call 0x11adb210 */
  push32(0x11adb0e5u); f_11adb210();
  /* 11adb0e5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb0e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11adb0f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb0f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11adb0f6 push 0xa */
  push32((uint32_t)(0xau));
  /* 11adb0f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb0fb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11adb0fe push ecx */
  push32((uint32_t)(ECX));
  /* 11adb0ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb101 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb103 call 0x11adb210 */
  push32(0x11adb108u); f_11adb210();
  /* 11adb108 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11adb10b:;
  /* 11adb10b mov edx, dword ptr [0x11af82d4] */
  EDX = (r32((uint32_t)(0x11af82d4)));
  /* 11adb111 cmp edx, dword ptr [0x11af82e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11af82e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb117 jge 0x11adb164 */
  if ((C.sf==C.of)) goto L_11adb164;
  /* 11adb119 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb11c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11adb11f cmp ecx, dword ptr [0x11af82d4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af82d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb125 jl 0x11adb135 */
  if ((C.sf!=C.of)) goto L_11adb135;
  /* 11adb127 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb12a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11adb12d cmp eax, dword ptr [0x11af82e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af82e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb133 jle 0x11adb13c */
  if ((C.zf||C.sf!=C.of)) goto L_11adb13c;
L_11adb135:;
  /* 11adb135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb137 jmp 0x11adb206 */
  goto L_11adb206;
L_11adb13c:;
  /* 11adb13c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb13f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11adb142 cmp edx, dword ptr [0x11af82d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11af82d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb148 jle 0x11adb162 */
  if ((C.zf||C.sf!=C.of)) goto L_11adb162;
  /* 11adb14a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb14d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11adb150 cmp ecx, dword ptr [0x11af82e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af82e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb156 jge 0x11adb162 */
  if ((C.sf==C.of)) goto L_11adb162;
  /* 11adb158 mov eax, 1 */
  EAX = (0x1u);
  /* 11adb15d jmp 0x11adb206 */
  goto L_11adb206;
L_11adb162:;
  /* 11adb162 jmp 0x11adb1a7 */
  goto L_11adb1a7;
L_11adb164:;
  /* 11adb164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb167 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11adb16a cmp eax, dword ptr [0x11af82e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af82e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb170 jl 0x11adb180 */
  if ((C.sf!=C.of)) goto L_11adb180;
  /* 11adb172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb175 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11adb178 cmp edx, dword ptr [0x11af82d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11af82d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb17e jle 0x11adb187 */
  if ((C.zf||C.sf!=C.of)) goto L_11adb187;
L_11adb180:;
  /* 11adb180 mov eax, 1 */
  EAX = (0x1u);
  /* 11adb185 jmp 0x11adb206 */
  goto L_11adb206;
L_11adb187:;
  /* 11adb187 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb18a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11adb18d cmp ecx, dword ptr [0x11af82e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af82e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb193 jle 0x11adb1a7 */
  if ((C.zf||C.sf!=C.of)) goto L_11adb1a7;
  /* 11adb195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb198 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11adb19b cmp eax, dword ptr [0x11af82d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af82d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb1a1 jge 0x11adb1a7 */
  if ((C.sf==C.of)) goto L_11adb1a7;
  /* 11adb1a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb1a5 jmp 0x11adb206 */
  goto L_11adb206;
L_11adb1a7:;
  /* 11adb1a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb1aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11adb1ad imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb1b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb1b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11adb1b5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb1b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb1ba mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11adb1bd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb1c3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb1c5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb1cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11adb1ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb1d1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11adb1d4 cmp edx, dword ptr [0x11af82d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11af82d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb1da jne 0x11adb1f2 */
  if (!C.zf) goto L_11adb1f2;
  /* 11adb1dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb1df cmp eax, dword ptr [0x11af82d8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af82d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb1e5 jl 0x11adb1ee */
  if ((C.sf!=C.of)) goto L_11adb1ee;
  /* 11adb1e7 mov eax, 1 */
  EAX = (0x1u);
  /* 11adb1ec jmp 0x11adb206 */
  goto L_11adb206;
L_11adb1ee:;
  /* 11adb1ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb1f0 jmp 0x11adb206 */
  goto L_11adb206;
L_11adb1f2:;
  /* 11adb1f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb1f5 cmp ecx, dword ptr [0x11af82e8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af82e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb1fb jge 0x11adb204 */
  if ((C.sf==C.of)) goto L_11adb204;
  /* 11adb1fd mov eax, 1 */
  EAX = (0x1u);
  /* 11adb202 jmp 0x11adb206 */
  goto L_11adb206;
L_11adb204:;
  /* 11adb204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11adb206:;
  /* 11adb206 mov esp, ebp */
  ESP = (EBP);
  /* 11adb208 pop ebp */
  EBP = (pop32());
  /* 11adb209 ret  */
  ESPCHK(0x11adaf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b210 @ 0x11adb210 (504 bytes, 145 insns) */
void f_11adb210(void) {
  FTRACE(0x11adb210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adb210 push ebp */
  push32((uint32_t)(EBP));
  /* 11adb211 mov ebp, esp */
  EBP = (ESP);
  /* 11adb213 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb216 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb21a jne 0x11adb2ec */
  if (!C.zf) goto L_11adb2ec;
  /* 11adb220 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb223 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11adb226 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb228 jne 0x11adb239 */
  if (!C.zf) goto L_11adb239;
  /* 11adb22a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adb22d mov edx, dword ptr [ecx*4 + 0x11af82ec] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af82ec)));
  /* 11adb234 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11adb237 jmp 0x11adb246 */
  goto L_11adb246;
L_11adb239:;
  /* 11adb239 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adb23c mov ecx, dword ptr [eax*4 + 0x11af8320] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11af8320)));
  /* 11adb243 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11adb246:;
  /* 11adb246 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adb249 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb24c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11adb24f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb252 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb255 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb25b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb25e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb260 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb263 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb266 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11adb269 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11adb26d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11adb26e mov ecx, 7 */
  ECX = (0x7u);
  /* 11adb273 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11adb275 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11adb278 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb27b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb27e jge 0x11adb299 */
  if ((C.sf==C.of)) goto L_11adb299;
  /* 11adb280 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11adb283 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb286 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adb289 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb28c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb28f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb292 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb294 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11adb297 jmp 0x11adb2ad */
  goto L_11adb2ad;
L_11adb299:;
  /* 11adb299 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11adb29c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb29f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adb2a2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb2a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb2a8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb2aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11adb2ad:;
  /* 11adb2ad cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb2b1 jne 0x11adb2ea */
  if (!C.zf) goto L_11adb2ea;
  /* 11adb2b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb2b6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11adb2b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11adb2bb jne 0x11adb2cc */
  if (!C.zf) goto L_11adb2cc;
  /* 11adb2bd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adb2c0 mov eax, dword ptr [edx*4 + 0x11af82f0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11af82f0)));
  /* 11adb2c7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11adb2ca jmp 0x11adb2d9 */
  goto L_11adb2d9;
L_11adb2cc:;
  /* 11adb2cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adb2cf mov edx, dword ptr [ecx*4 + 0x11af8324] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af8324)));
  /* 11adb2d6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11adb2d9:;
  /* 11adb2d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb2dc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb2df jle 0x11adb2ea */
  if ((C.zf||C.sf!=C.of)) goto L_11adb2ea;
  /* 11adb2e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb2e4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb2e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11adb2ea:;
  /* 11adb2ea jmp 0x11adb321 */
  goto L_11adb321;
L_11adb2ec:;
  /* 11adb2ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb2ef and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11adb2f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adb2f4 jne 0x11adb305 */
  if (!C.zf) goto L_11adb305;
  /* 11adb2f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adb2f9 mov ecx, dword ptr [eax*4 + 0x11af82ec] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11af82ec)));
  /* 11adb300 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11adb303 jmp 0x11adb312 */
  goto L_11adb312;
L_11adb305:;
  /* 11adb305 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adb308 mov eax, dword ptr [edx*4 + 0x11af8320] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11af8320)));
  /* 11adb30f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11adb312:;
  /* 11adb312 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11adb315 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11adb318 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb31b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb31e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11adb321:;
  /* 11adb321 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb325 jne 0x11adb361 */
  if (!C.zf) goto L_11adb361;
  /* 11adb327 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb32a mov dword ptr [0x11af82d4], eax */
  w32((uint32_t)(0x11af82d4), (EAX));
  /* 11adb32f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11adb332 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb335 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11adb338 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb33a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb33d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11adb340 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb342 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb348 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11adb34b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb34d mov dword ptr [0x11af82d8], ecx */
  w32((uint32_t)(0x11af82d8), (ECX));
  /* 11adb353 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb356 mov dword ptr [0x11af82d0], edx */
  w32((uint32_t)(0x11af82d0), (EDX));
  /* 11adb35c jmp 0x11adb404 */
  goto L_11adb404;
L_11adb361:;
  /* 11adb361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb364 mov dword ptr [0x11af82e4], eax */
  w32((uint32_t)(0x11af82e4), (EAX));
  /* 11adb369 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11adb36c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb36f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11adb372 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb374 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb377 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11adb37a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb37c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb382 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11adb385 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb387 mov dword ptr [0x11af82e8], ecx */
  w32((uint32_t)(0x11af82e8), (ECX));
  /* 11adb38d mov edx, dword ptr [0x11af8244] */
  EDX = (r32((uint32_t)(0x11af8244)));
  /* 11adb393 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11adb399 mov eax, dword ptr [0x11af82e8] */
  EAX = (r32((uint32_t)(0x11af82e8)));
  /* 11adb39e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb3a0 mov dword ptr [0x11af82e8], eax */
  w32((uint32_t)(0x11af82e8), (EAX));
  /* 11adb3a5 cmp dword ptr [0x11af82e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af82e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb3ac jge 0x11adb3d1 */
  if ((C.sf==C.of)) goto L_11adb3d1;
  /* 11adb3ae mov ecx, dword ptr [0x11af82e8] */
  ECX = (r32((uint32_t)(0x11af82e8)));
  /* 11adb3b4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb3ba mov dword ptr [0x11af82e8], ecx */
  w32((uint32_t)(0x11af82e8), (ECX));
  /* 11adb3c0 mov edx, dword ptr [0x11af82e4] */
  EDX = (r32((uint32_t)(0x11af82e4)));
  /* 11adb3c6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb3c9 mov dword ptr [0x11af82e4], edx */
  w32((uint32_t)(0x11af82e4), (EDX));
  /* 11adb3cf jmp 0x11adb3fb */
  goto L_11adb3fb;
L_11adb3d1:;
  /* 11adb3d1 cmp dword ptr [0x11af82e8], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11af82e8))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb3db jl 0x11adb3fb */
  if ((C.sf!=C.of)) goto L_11adb3fb;
  /* 11adb3dd mov eax, dword ptr [0x11af82e8] */
  EAX = (r32((uint32_t)(0x11af82e8)));
  /* 11adb3e2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb3e7 mov dword ptr [0x11af82e8], eax */
  w32((uint32_t)(0x11af82e8), (EAX));
  /* 11adb3ec mov ecx, dword ptr [0x11af82e4] */
  ECX = (r32((uint32_t)(0x11af82e4)));
  /* 11adb3f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb3f5 mov dword ptr [0x11af82e4], ecx */
  w32((uint32_t)(0x11af82e4), (ECX));
L_11adb3fb:;
  /* 11adb3fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb3fe mov dword ptr [0x11af82e0], edx */
  w32((uint32_t)(0x11af82e0), (EDX));
L_11adb404:;
  /* 11adb404 mov esp, ebp */
  ESP = (EBP);
  /* 11adb406 pop ebp */
  EBP = (pop32());
  /* 11adb407 ret  */
  ESPCHK(0x11adb210u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b410 @ 0x11adb410 (382 bytes, 135 insns) */
void f_11adb410(void) {
  FTRACE(0x11adb410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adb410 push ebp */
  push32((uint32_t)(EBP));
  /* 11adb411 mov ebp, esp */
  EBP = (ESP);
  /* 11adb413 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adb415 push 0x11af4b38 */
  push32((uint32_t)(0x11af4b38u));
  /* 11adb41a push 0x11ad82b0 */
  push32((uint32_t)(0x11ad82b0u));
  /* 11adb41f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11adb425 push eax */
  push32((uint32_t)(EAX));
  /* 11adb426 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11adb42d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb430 push ebx */
  push32((uint32_t)(EBX));
  /* 11adb431 push esi */
  push32((uint32_t)(ESI));
  /* 11adb432 push edi */
  push32((uint32_t)(EDI));
  /* 11adb433 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11adb436 cmp dword ptr [0x11af9624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb43d jne 0x11adb482 */
  if (!C.zf) goto L_11adb482;
  /* 11adb43f push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb441 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb443 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb445 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb447 call dword ptr [0x11afb2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2dc))), 0x11adb44du);
  /* 11adb44d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb44f je 0x11adb45d */
  if (C.zf) goto L_11adb45d;
  /* 11adb451 mov dword ptr [0x11af9624], 1 */
  w32((uint32_t)(0x11af9624), (0x1u));
  /* 11adb45b jmp 0x11adb482 */
  goto L_11adb482;
L_11adb45d:;
  /* 11adb45d push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb45f push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb461 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb463 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb465 call dword ptr [0x11afb2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2f8))), 0x11adb46bu);
  /* 11adb46b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb46d je 0x11adb47b */
  if (C.zf) goto L_11adb47b;
  /* 11adb46f mov dword ptr [0x11af9624], 2 */
  w32((uint32_t)(0x11af9624), (0x2u));
  /* 11adb479 jmp 0x11adb482 */
  goto L_11adb482;
L_11adb47b:;
  /* 11adb47b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb47d jmp 0x11adb591 */
  goto L_11adb591;
L_11adb482:;
  /* 11adb482 cmp dword ptr [0x11af9624], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af9624))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb489 jne 0x11adb4a6 */
  if (!C.zf) goto L_11adb4a6;
  /* 11adb48b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adb48e push eax */
  push32((uint32_t)(EAX));
  /* 11adb48f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb492 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb493 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adb496 push edx */
  push32((uint32_t)(EDX));
  /* 11adb497 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb49a push eax */
  push32((uint32_t)(EAX));
  /* 11adb49b call dword ptr [0x11afb2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2dc))), 0x11adb4a1u);
  /* 11adb4a1 jmp 0x11adb591 */
  goto L_11adb591;
L_11adb4a6:;
  /* 11adb4a6 cmp dword ptr [0x11af9624], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11af9624))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb4ad jne 0x11adb58f */
  if (!C.zf) goto L_11adb58f;
  /* 11adb4b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb4b7 jne 0x11adb4c2 */
  if (!C.zf) goto L_11adb4c2;
  /* 11adb4b9 mov ecx, dword ptr [0x11af94e4] */
  ECX = (r32((uint32_t)(0x11af94e4)));
  /* 11adb4bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11adb4c2:;
  /* 11adb4c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb4c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb4c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adb4c9 push edx */
  push32((uint32_t)(EDX));
  /* 11adb4ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb4cd push eax */
  push32((uint32_t)(EAX));
  /* 11adb4ce call dword ptr [0x11afb2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2f8))), 0x11adb4d4u);
  /* 11adb4d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11adb4d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb4db jne 0x11adb4e4 */
  if (!C.zf) goto L_11adb4e4;
  /* 11adb4dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb4df jmp 0x11adb591 */
  goto L_11adb591;
L_11adb4e4:;
  /* 11adb4e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11adb4eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11adb4ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb4f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11adb4f3 call 0x11acc800 */
  push32(0x11adb4f8u); f_11acc800();
  /* 11adb4f8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11adb4fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11adb4fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11adb501 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11adb504 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11adb50b jmp 0x11adb524 */
  goto L_11adb524;
  /* 11adb50d mov eax, 1 */
  EAX = (0x1u);
  /* 11adb512 ret  */
  ESPCHK(0x11adb410u, _esp0);
  ESP += 4; return;
  /* 11adb513 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11adb516 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11adb51d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11adb524:;
  /* 11adb524 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb528 jne 0x11adb52e */
  if (!C.zf) goto L_11adb52e;
  /* 11adb52a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb52c jmp 0x11adb591 */
  goto L_11adb591;
L_11adb52e:;
  /* 11adb52e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11adb531 push edx */
  push32((uint32_t)(EDX));
  /* 11adb532 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11adb535 push eax */
  push32((uint32_t)(EAX));
  /* 11adb536 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adb539 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb53a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb53d push edx */
  push32((uint32_t)(EDX));
  /* 11adb53e call dword ptr [0x11afb2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2f8))), 0x11adb544u);
  /* 11adb544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb546 jne 0x11adb54c */
  if (!C.zf) goto L_11adb54c;
  /* 11adb548 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb54a jmp 0x11adb591 */
  goto L_11adb591;
L_11adb54c:;
  /* 11adb54c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb550 jne 0x11adb56d */
  if (!C.zf) goto L_11adb56d;
  /* 11adb552 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb554 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb556 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adb558 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11adb55b push eax */
  push32((uint32_t)(EAX));
  /* 11adb55c push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb55e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adb561 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb562 call dword ptr [0x11afb31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb31c))), 0x11adb568u);
  /* 11adb568 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11adb56b jmp 0x11adb58a */
  goto L_11adb58a;
L_11adb56d:;
  /* 11adb56d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adb570 push edx */
  push32((uint32_t)(EDX));
  /* 11adb571 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb574 push eax */
  push32((uint32_t)(EAX));
  /* 11adb575 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adb577 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11adb57a push ecx */
  push32((uint32_t)(ECX));
  /* 11adb57b push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb57d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adb580 push edx */
  push32((uint32_t)(EDX));
  /* 11adb581 call dword ptr [0x11afb31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb31c))), 0x11adb587u);
  /* 11adb587 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11adb58a:;
  /* 11adb58a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11adb58d jmp 0x11adb591 */
  goto L_11adb591;
L_11adb58f:;
  /* 11adb58f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11adb591:;
  /* 11adb591 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11adb594 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11adb597 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11adb59e pop edi */
  EDI = (pop32());
  /* 11adb59f pop esi */
  ESI = (pop32());
  /* 11adb5a0 pop ebx */
  EBX = (pop32());
  /* 11adb5a1 mov esp, ebp */
  ESP = (EBP);
  /* 11adb5a3 pop ebp */
  EBP = (pop32());
  /* 11adb5a4 ret  */
  ESPCHK(0x11adb410u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b5b0 @ 0x11adb5b0 (398 bytes, 140 insns) */
void f_11adb5b0(void) {
  FTRACE(0x11adb5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adb5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adb5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11adb5b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adb5b5 push 0x11af4b48 */
  push32((uint32_t)(0x11af4b48u));
  /* 11adb5ba push 0x11ad82b0 */
  push32((uint32_t)(0x11ad82b0u));
  /* 11adb5bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11adb5c5 push eax */
  push32((uint32_t)(EAX));
  /* 11adb5c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11adb5cd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb5d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11adb5d1 push esi */
  push32((uint32_t)(ESI));
  /* 11adb5d2 push edi */
  push32((uint32_t)(EDI));
  /* 11adb5d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11adb5d6 cmp dword ptr [0x11af9628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb5dd jne 0x11adb622 */
  if (!C.zf) goto L_11adb622;
  /* 11adb5df push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb5e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb5e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb5e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb5e7 call dword ptr [0x11afb2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2dc))), 0x11adb5edu);
  /* 11adb5ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb5ef je 0x11adb5fd */
  if (C.zf) goto L_11adb5fd;
  /* 11adb5f1 mov dword ptr [0x11af9628], 1 */
  w32((uint32_t)(0x11af9628), (0x1u));
  /* 11adb5fb jmp 0x11adb622 */
  goto L_11adb622;
L_11adb5fd:;
  /* 11adb5fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb5ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb601 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb603 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb605 call dword ptr [0x11afb2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2f8))), 0x11adb60bu);
  /* 11adb60b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb60d je 0x11adb61b */
  if (C.zf) goto L_11adb61b;
  /* 11adb60f mov dword ptr [0x11af9628], 2 */
  w32((uint32_t)(0x11af9628), (0x2u));
  /* 11adb619 jmp 0x11adb622 */
  goto L_11adb622;
L_11adb61b:;
  /* 11adb61b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb61d jmp 0x11adb741 */
  goto L_11adb741;
L_11adb622:;
  /* 11adb622 cmp dword ptr [0x11af9628], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11af9628))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb629 jne 0x11adb646 */
  if (!C.zf) goto L_11adb646;
  /* 11adb62b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adb62e push eax */
  push32((uint32_t)(EAX));
  /* 11adb62f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb632 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb633 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adb636 push edx */
  push32((uint32_t)(EDX));
  /* 11adb637 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb63a push eax */
  push32((uint32_t)(EAX));
  /* 11adb63b call dword ptr [0x11afb2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2f8))), 0x11adb641u);
  /* 11adb641 jmp 0x11adb741 */
  goto L_11adb741;
L_11adb646:;
  /* 11adb646 cmp dword ptr [0x11af9628], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af9628))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb64d jne 0x11adb73f */
  if (!C.zf) goto L_11adb73f;
  /* 11adb653 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb657 jne 0x11adb662 */
  if (!C.zf) goto L_11adb662;
  /* 11adb659 mov ecx, dword ptr [0x11af94e4] */
  ECX = (r32((uint32_t)(0x11af94e4)));
  /* 11adb65f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11adb662:;
  /* 11adb662 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb664 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb666 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adb669 push edx */
  push32((uint32_t)(EDX));
  /* 11adb66a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb66d push eax */
  push32((uint32_t)(EAX));
  /* 11adb66e call dword ptr [0x11afb2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2dc))), 0x11adb674u);
  /* 11adb674 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11adb677 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb67b jne 0x11adb684 */
  if (!C.zf) goto L_11adb684;
  /* 11adb67d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb67f jmp 0x11adb741 */
  goto L_11adb741;
L_11adb684:;
  /* 11adb684 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11adb68b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11adb68e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11adb690 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb693 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11adb695 call 0x11acc800 */
  push32(0x11adb69au); f_11acc800();
  /* 11adb69a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11adb69d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11adb6a0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11adb6a3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11adb6a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11adb6ad jmp 0x11adb6c6 */
  goto L_11adb6c6;
  /* 11adb6af mov eax, 1 */
  EAX = (0x1u);
  /* 11adb6b4 ret  */
  ESPCHK(0x11adb5b0u, _esp0);
  ESP += 4; return;
  /* 11adb6b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11adb6b8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11adb6bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11adb6c6:;
  /* 11adb6c6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb6ca jne 0x11adb6d0 */
  if (!C.zf) goto L_11adb6d0;
  /* 11adb6cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb6ce jmp 0x11adb741 */
  goto L_11adb741;
L_11adb6d0:;
  /* 11adb6d0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11adb6d3 push edx */
  push32((uint32_t)(EDX));
  /* 11adb6d4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11adb6d7 push eax */
  push32((uint32_t)(EAX));
  /* 11adb6d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adb6db push ecx */
  push32((uint32_t)(ECX));
  /* 11adb6dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb6df push edx */
  push32((uint32_t)(EDX));
  /* 11adb6e0 call dword ptr [0x11afb2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2dc))), 0x11adb6e6u);
  /* 11adb6e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb6e8 jne 0x11adb6ee */
  if (!C.zf) goto L_11adb6ee;
  /* 11adb6ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb6ec jmp 0x11adb741 */
  goto L_11adb741;
L_11adb6ee:;
  /* 11adb6ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb6f2 jne 0x11adb716 */
  if (!C.zf) goto L_11adb716;
  /* 11adb6f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb6f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb6f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb6fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb6fc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adb6fe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11adb701 push eax */
  push32((uint32_t)(EAX));
  /* 11adb702 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11adb707 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adb70a push ecx */
  push32((uint32_t)(ECX));
  /* 11adb70b call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11adb711u);
  /* 11adb711 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11adb714 jmp 0x11adb73a */
  goto L_11adb73a;
L_11adb716:;
  /* 11adb716 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb718 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb71a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adb71d push edx */
  push32((uint32_t)(EDX));
  /* 11adb71e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb721 push eax */
  push32((uint32_t)(EAX));
  /* 11adb722 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adb724 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11adb727 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb728 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11adb72d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adb730 push edx */
  push32((uint32_t)(EDX));
  /* 11adb731 call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11adb737u);
  /* 11adb737 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11adb73a:;
  /* 11adb73a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11adb73d jmp 0x11adb741 */
  goto L_11adb741;
L_11adb73f:;
  /* 11adb73f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11adb741:;
  /* 11adb741 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11adb744 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11adb747 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11adb74e pop edi */
  EDI = (pop32());
  /* 11adb74f pop esi */
  ESI = (pop32());
  /* 11adb750 pop ebx */
  EBX = (pop32());
  /* 11adb751 mov esp, ebp */
  ESP = (EBP);
  /* 11adb753 pop ebp */
  EBP = (pop32());
  /* 11adb754 ret  */
  ESPCHK(0x11adb5b0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11adb760 (52 bytes, 19 insns) */
void f_11adb760(void) {
  FTRACE(0x11adb760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adb760 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11adb764 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11adb768 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11adb76a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11adb76e jne 0x11adb779 */
  if (!C.zf) goto L_11adb779;
  /* 11adb770 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11adb774 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11adb776 ret 0x10 */
  ESPCHK(0x11adb760u, _esp0);
  ESP += 20; return;
L_11adb779:;
  /* 11adb779 push ebx */
  push32((uint32_t)(EBX));
  /* 11adb77a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11adb77c mov ebx, eax */
  EBX = (EAX);
  /* 11adb77e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11adb782 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11adb786 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb788 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11adb78c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11adb78e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb790 pop ebx */
  EBX = (pop32());
  /* 11adb791 ret 0x10 */
  ESPCHK(0x11adb760u, _esp0);
  ESP += 20; return;
}

/* FUN_1001b7a0 @ 0x11adb7a0 (46 bytes, 18 insns) */
void f_11adb7a0(void) {
  FTRACE(0x11adb7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adb7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adb7a1 mov ebp, esp */
  EBP = (ESP);
  /* 11adb7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb7a4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11adb7a6 call 0x11acd060 */
  push32(0x11adb7abu); f_11acd060();
  /* 11adb7ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb7ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb7b1 push eax */
  push32((uint32_t)(EAX));
  /* 11adb7b2 call 0x11adb7d0 */
  push32(0x11adb7b7u); f_11adb7d0();
  /* 11adb7b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb7ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11adb7bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11adb7bf call 0x11acd100 */
  push32(0x11adb7c4u); f_11acd100();
  /* 11adb7c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb7c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb7ca mov esp, ebp */
  ESP = (EBP);
  /* 11adb7cc pop ebp */
  EBP = (pop32());
  /* 11adb7cd ret  */
  ESPCHK(0x11adb7a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11adb7d0 (198 bytes, 69 insns) */
void f_11adb7d0(void) {
  FTRACE(0x11adb7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adb7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adb7d1 mov ebp, esp */
  EBP = (ESP);
  /* 11adb7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb7d6 mov eax, dword ptr [0x11af92e4] */
  EAX = (r32((uint32_t)(0x11af92e4)));
  /* 11adb7db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11adb7de cmp dword ptr [0x11afadc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afadc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb7e5 jne 0x11adb7ee */
  if (!C.zf) goto L_11adb7ee;
  /* 11adb7e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb7e9 jmp 0x11adb892 */
  goto L_11adb892;
L_11adb7ee:;
  /* 11adb7ee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb7f2 jne 0x11adb816 */
  if (!C.zf) goto L_11adb816;
  /* 11adb7f4 cmp dword ptr [0x11af92ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb7fb je 0x11adb816 */
  if (C.zf) goto L_11adb816;
  /* 11adb7fd call 0x11adb8f0 */
  push32(0x11adb802u); f_11adb8f0();
  /* 11adb802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb804 je 0x11adb80d */
  if (C.zf) goto L_11adb80d;
  /* 11adb806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb808 jmp 0x11adb892 */
  goto L_11adb892;
L_11adb80d:;
  /* 11adb80d mov ecx, dword ptr [0x11af92e4] */
  ECX = (r32((uint32_t)(0x11af92e4)));
  /* 11adb813 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11adb816:;
  /* 11adb816 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb81a je 0x11adb890 */
  if (C.zf) goto L_11adb890;
  /* 11adb81c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb820 je 0x11adb890 */
  if (C.zf) goto L_11adb890;
  /* 11adb822 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb825 push edx */
  push32((uint32_t)(EDX));
  /* 11adb826 call 0x11acc490 */
  push32(0x11adb82bu); f_11acc490();
  /* 11adb82b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb82e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11adb831:;
  /* 11adb831 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb834 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb837 je 0x11adb890 */
  if (C.zf) goto L_11adb890;
  /* 11adb839 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb83c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11adb83e push edx */
  push32((uint32_t)(EDX));
  /* 11adb83f call 0x11acc490 */
  push32(0x11adb844u); f_11acc490();
  /* 11adb844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb847 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb84a jbe 0x11adb885 */
  if ((C.cf||C.zf)) goto L_11adb885;
  /* 11adb84c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb84f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11adb851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb854 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11adb858 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb85b jne 0x11adb885 */
  if (!C.zf) goto L_11adb885;
  /* 11adb85d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb860 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb864 push edx */
  push32((uint32_t)(EDX));
  /* 11adb865 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb868 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11adb86a push ecx */
  push32((uint32_t)(ECX));
  /* 11adb86b call 0x11adb8a0 */
  push32(0x11adb870u); f_11adb8a0();
  /* 11adb870 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb875 jne 0x11adb885 */
  if (!C.zf) goto L_11adb885;
  /* 11adb877 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb87a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11adb87c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb87f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11adb883 jmp 0x11adb892 */
  goto L_11adb892;
L_11adb885:;
  /* 11adb885 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb888 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb88b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11adb88e jmp 0x11adb831 */
  goto L_11adb831;
L_11adb890:;
  /* 11adb890 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11adb892:;
  /* 11adb892 mov esp, ebp */
  ESP = (EBP);
  /* 11adb894 pop ebp */
  EBP = (pop32());
  /* 11adb895 ret  */
  ESPCHK(0x11adb7d0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11adb8a0 (79 bytes, 32 insns) */
void f_11adb8a0(void) {
  FTRACE(0x11adb8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adb8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adb8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11adb8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb8a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb8a8 jne 0x11adb8ae */
  if (!C.zf) goto L_11adb8ae;
  /* 11adb8aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adb8ac jmp 0x11adb8eb */
  goto L_11adb8eb;
L_11adb8ae:;
  /* 11adb8ae mov eax, dword ptr [0x11af9658] */
  EAX = (r32((uint32_t)(0x11af9658)));
  /* 11adb8b3 push eax */
  push32((uint32_t)(EAX));
  /* 11adb8b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb8b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb8b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adb8bb push edx */
  push32((uint32_t)(EDX));
  /* 11adb8bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adb8bf push eax */
  push32((uint32_t)(EAX));
  /* 11adb8c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adb8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11adb8c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb8c6 mov edx, dword ptr [0x11af98e4] */
  EDX = (r32((uint32_t)(0x11af98e4)));
  /* 11adb8cc push edx */
  push32((uint32_t)(EDX));
  /* 11adb8cd call 0x11adb9a0 */
  push32(0x11adb8d2u); f_11adb9a0();
  /* 11adb8d2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb8d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11adb8d8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb8dc jne 0x11adb8e5 */
  if (!C.zf) goto L_11adb8e5;
  /* 11adb8de mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11adb8e3 jmp 0x11adb8eb */
  goto L_11adb8eb;
L_11adb8e5:;
  /* 11adb8e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb8e8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11adb8eb:;
  /* 11adb8eb mov esp, ebp */
  ESP = (EBP);
  /* 11adb8ed pop ebp */
  EBP = (pop32());
  /* 11adb8ee ret  */
  ESPCHK(0x11adb8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b8f0 @ 0x11adb8f0 (174 bytes, 66 insns) */
void f_11adb8f0(void) {
  FTRACE(0x11adb8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adb8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adb8f1 mov ebp, esp */
  EBP = (ESP);
  /* 11adb8f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adb8f6 mov eax, dword ptr [0x11af92ec] */
  EAX = (r32((uint32_t)(0x11af92ec)));
  /* 11adb8fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11adb8fe:;
  /* 11adb8fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb901 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb904 je 0x11adb998 */
  if (C.zf) goto L_11adb998;
  /* 11adb90a push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb90c push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb90e push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb910 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb912 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adb914 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb917 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11adb919 push eax */
  push32((uint32_t)(EAX));
  /* 11adb91a push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb91c push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb91e call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11adb924u);
  /* 11adb924 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11adb927 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb92b jne 0x11adb932 */
  if (!C.zf) goto L_11adb932;
  /* 11adb92d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adb930 jmp 0x11adb99a */
  goto L_11adb99a;
L_11adb932:;
  /* 11adb932 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11adb934 push 0x11af4b54 */
  push32((uint32_t)(0x11af4b54u));
  /* 11adb939 push 2 */
  push32((uint32_t)(0x2u));
  /* 11adb93b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adb93e push ecx */
  push32((uint32_t)(ECX));
  /* 11adb93f call 0x11ac9660 */
  push32(0x11adb944u); f_11ac9660();
  /* 11adb944 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb947 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11adb94a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb94e jne 0x11adb955 */
  if (!C.zf) goto L_11adb955;
  /* 11adb950 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adb953 jmp 0x11adb99a */
  goto L_11adb99a;
L_11adb955:;
  /* 11adb955 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb957 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb959 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adb95c push edx */
  push32((uint32_t)(EDX));
  /* 11adb95d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb960 push eax */
  push32((uint32_t)(EAX));
  /* 11adb961 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adb963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb966 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11adb968 push edx */
  push32((uint32_t)(EDX));
  /* 11adb969 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb96b push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb96d call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11adb973u);
  /* 11adb973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb975 jne 0x11adb97c */
  if (!C.zf) goto L_11adb97c;
  /* 11adb977 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adb97a jmp 0x11adb99a */
  goto L_11adb99a;
L_11adb97c:;
  /* 11adb97c push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb97e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adb981 push eax */
  push32((uint32_t)(EAX));
  /* 11adb982 call 0x11adbdf0 */
  push32(0x11adb987u); f_11adbdf0();
  /* 11adb987 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb98a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adb98d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb990 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11adb993 jmp 0x11adb8fe */
  goto L_11adb8fe;
L_11adb998:;
  /* 11adb998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11adb99a:;
  /* 11adb99a mov esp, ebp */
  ESP = (EBP);
  /* 11adb99c pop ebp */
  EBP = (pop32());
  /* 11adb99d ret  */
  ESPCHK(0x11adb8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b9a0 @ 0x11adb9a0 (970 bytes, 340 insns) */
void f_11adb9a0(void) {
  FTRACE(0x11adb9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adb9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adb9a1 mov ebp, esp */
  EBP = (ESP);
  /* 11adb9a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11adb9a5 push 0x11af4ba8 */
  push32((uint32_t)(0x11af4ba8u));
  /* 11adb9aa push 0x11ad82b0 */
  push32((uint32_t)(0x11ad82b0u));
  /* 11adb9af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11adb9b5 push eax */
  push32((uint32_t)(EAX));
  /* 11adb9b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11adb9bd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adb9c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11adb9c1 push esi */
  push32((uint32_t)(ESI));
  /* 11adb9c2 push edi */
  push32((uint32_t)(EDI));
  /* 11adb9c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11adb9c6 cmp dword ptr [0x11af962c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af962c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adb9cd jne 0x11adba26 */
  if (!C.zf) goto L_11adba26;
  /* 11adb9cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb9d1 push 0x11af41b4 */
  push32((uint32_t)(0x11af41b4u));
  /* 11adb9d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb9d8 push 0x11af41b4 */
  push32((uint32_t)(0x11af41b4u));
  /* 11adb9dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb9df push 0 */
  push32((uint32_t)(0x0u));
  /* 11adb9e1 call dword ptr [0x11afb2d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2d8))), 0x11adb9e7u);
  /* 11adb9e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adb9e9 je 0x11adb9f7 */
  if (C.zf) goto L_11adb9f7;
  /* 11adb9eb mov dword ptr [0x11af962c], 1 */
  w32((uint32_t)(0x11af962c), (0x1u));
  /* 11adb9f5 jmp 0x11adba26 */
  goto L_11adba26;
L_11adb9f7:;
  /* 11adb9f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adb9f9 push 0x11af41b0 */
  push32((uint32_t)(0x11af41b0u));
  /* 11adb9fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11adba00 push 0x11af41b0 */
  push32((uint32_t)(0x11af41b0u));
  /* 11adba05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adba07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adba09 call dword ptr [0x11afb2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2e4))), 0x11adba0fu);
  /* 11adba0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adba11 je 0x11adba1f */
  if (C.zf) goto L_11adba1f;
  /* 11adba13 mov dword ptr [0x11af962c], 2 */
  w32((uint32_t)(0x11af962c), (0x2u));
  /* 11adba1d jmp 0x11adba26 */
  goto L_11adba26;
L_11adba1f:;
  /* 11adba1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adba21 jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adba26:;
  /* 11adba26 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adba2a jle 0x11adba3f */
  if ((C.zf||C.sf!=C.of)) goto L_11adba3f;
  /* 11adba2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adba2f push eax */
  push32((uint32_t)(EAX));
  /* 11adba30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adba33 push ecx */
  push32((uint32_t)(ECX));
  /* 11adba34 call 0x11adbda0 */
  push32(0x11adba39u); f_11adbda0();
  /* 11adba39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adba3c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11adba3f:;
  /* 11adba3f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adba43 jle 0x11adba58 */
  if ((C.zf||C.sf!=C.of)) goto L_11adba58;
  /* 11adba45 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11adba48 push edx */
  push32((uint32_t)(EDX));
  /* 11adba49 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adba4c push eax */
  push32((uint32_t)(EAX));
  /* 11adba4d call 0x11adbda0 */
  push32(0x11adba52u); f_11adbda0();
  /* 11adba52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adba55 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11adba58:;
  /* 11adba58 cmp dword ptr [0x11af962c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11af962c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adba5f jne 0x11adba84 */
  if (!C.zf) goto L_11adba84;
  /* 11adba61 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11adba64 push ecx */
  push32((uint32_t)(ECX));
  /* 11adba65 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adba68 push edx */
  push32((uint32_t)(EDX));
  /* 11adba69 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adba6c push eax */
  push32((uint32_t)(EAX));
  /* 11adba6d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adba70 push ecx */
  push32((uint32_t)(ECX));
  /* 11adba71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adba74 push edx */
  push32((uint32_t)(EDX));
  /* 11adba75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adba78 push eax */
  push32((uint32_t)(EAX));
  /* 11adba79 call dword ptr [0x11afb2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2e4))), 0x11adba7fu);
  /* 11adba7f jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adba84:;
  /* 11adba84 cmp dword ptr [0x11af962c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af962c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adba8b jne 0x11adbd82 */
  if (!C.zf) goto L_11adbd82;
  /* 11adba91 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adba95 jne 0x11adbaa0 */
  if (!C.zf) goto L_11adbaa0;
  /* 11adba97 mov ecx, dword ptr [0x11af94e4] */
  ECX = (r32((uint32_t)(0x11af94e4)));
  /* 11adba9d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11adbaa0:;
  /* 11adbaa0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbaa4 je 0x11adbab0 */
  if (C.zf) goto L_11adbab0;
  /* 11adbaa6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbaaa jne 0x11adbc2c */
  if (!C.zf) goto L_11adbc2c;
L_11adbab0:;
  /* 11adbab0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adbab3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbab6 jne 0x11adbac2 */
  if (!C.zf) goto L_11adbac2;
  /* 11adbab8 mov eax, 2 */
  EAX = (0x2u);
  /* 11adbabd jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbac2:;
  /* 11adbac2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbac6 jle 0x11adbad2 */
  if ((C.zf||C.sf!=C.of)) goto L_11adbad2;
  /* 11adbac8 mov eax, 1 */
  EAX = (0x1u);
  /* 11adbacd jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbad2:;
  /* 11adbad2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbad6 jle 0x11adbae2 */
  if ((C.zf||C.sf!=C.of)) goto L_11adbae2;
  /* 11adbad8 mov eax, 3 */
  EAX = (0x3u);
  /* 11adbadd jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbae2:;
  /* 11adbae2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11adbae5 push eax */
  push32((uint32_t)(EAX));
  /* 11adbae6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11adbae9 push ecx */
  push32((uint32_t)(ECX));
  /* 11adbaea call dword ptr [0x11afb330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb330))), 0x11adbaf0u);
  /* 11adbaf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adbaf2 jne 0x11adbafb */
  if (!C.zf) goto L_11adbafb;
  /* 11adbaf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbaf6 jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbafb:;
  /* 11adbafb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbaff jne 0x11adbb07 */
  if (!C.zf) goto L_11adbb07;
  /* 11adbb01 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbb05 je 0x11adbb34 */
  if (C.zf) goto L_11adbb34;
L_11adbb07:;
  /* 11adbb07 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbb0b jne 0x11adbb13 */
  if (!C.zf) goto L_11adbb13;
  /* 11adbb0d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbb11 je 0x11adbb34 */
  if (C.zf) goto L_11adbb34;
L_11adbb13:;
  /* 11adbb13 push 0x11af4b68 */
  push32((uint32_t)(0x11af4b68u));
  /* 11adbb18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11adbb1a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11adbb1f push 0x11af4b60 */
  push32((uint32_t)(0x11af4b60u));
  /* 11adbb24 push 2 */
  push32((uint32_t)(0x2u));
  /* 11adbb26 call 0x11ac6a40 */
  push32(0x11adbb2bu); f_11ac6a40();
  /* 11adbb2b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbb2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbb31 jne 0x11adbb34 */
  if (!C.zf) goto L_11adbb34;
  /* 11adbb33 int3  */
  x86_unimpl("int3 @ 0x11adbb33");
L_11adbb34:;
  /* 11adbb34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adbb36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adbb38 jne 0x11adbafb */
  if (!C.zf) goto L_11adbafb;
  /* 11adbb3a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbb3e jle 0x11adbbb3 */
  if ((C.zf||C.sf!=C.of)) goto L_11adbbb3;
  /* 11adbb40 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbb44 jae 0x11adbb50 */
  if (!C.cf) goto L_11adbb50;
  /* 11adbb46 mov eax, 3 */
  EAX = (0x3u);
  /* 11adbb4b jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbb50:;
  /* 11adbb50 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11adbb53 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11adbb56 jmp 0x11adbb61 */
  goto L_11adbb61;
L_11adbb58:;
  /* 11adbb58 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11adbb5b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbb5e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11adbb61:;
  /* 11adbb61 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11adbb64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbb66 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11adbb68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adbb6a je 0x11adbba9 */
  if (C.zf) goto L_11adbba9;
  /* 11adbb6c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11adbb6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adbb71 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11adbb74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adbb76 je 0x11adbba9 */
  if (C.zf) goto L_11adbba9;
  /* 11adbb78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adbb7b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adbb7d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11adbb7f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11adbb82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbb84 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11adbb86 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbb88 jl 0x11adbba7 */
  if ((C.sf!=C.of)) goto L_11adbba7;
  /* 11adbb8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adbb8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adbb8f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11adbb91 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11adbb94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adbb96 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11adbb99 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbb9b jg 0x11adbba7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11adbba7;
  /* 11adbb9d mov eax, 2 */
  EAX = (0x2u);
  /* 11adbba2 jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbba7:;
  /* 11adbba7 jmp 0x11adbb58 */
  goto L_11adbb58;
L_11adbba9:;
  /* 11adbba9 mov eax, 3 */
  EAX = (0x3u);
  /* 11adbbae jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbbb3:;
  /* 11adbbb3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbbb7 jle 0x11adbc2c */
  if ((C.zf||C.sf!=C.of)) goto L_11adbc2c;
  /* 11adbbb9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbbbd jae 0x11adbbc9 */
  if (!C.cf) goto L_11adbbc9;
  /* 11adbbbf mov eax, 1 */
  EAX = (0x1u);
  /* 11adbbc4 jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbbc9:;
  /* 11adbbc9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11adbbcc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11adbbcf jmp 0x11adbbda */
  goto L_11adbbda;
L_11adbbd1:;
  /* 11adbbd1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11adbbd4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbbd7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11adbbda:;
  /* 11adbbda mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11adbbdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adbbdf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11adbbe1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adbbe3 je 0x11adbc22 */
  if (C.zf) goto L_11adbc22;
  /* 11adbbe5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11adbbe8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adbbea mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11adbbed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11adbbef je 0x11adbc22 */
  if (C.zf) goto L_11adbc22;
  /* 11adbbf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adbbf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbbf6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11adbbf8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11adbbfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11adbbfd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11adbbff cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbc01 jl 0x11adbc20 */
  if ((C.sf!=C.of)) goto L_11adbc20;
  /* 11adbc03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adbc06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adbc08 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11adbc0a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11adbc0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbc0f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11adbc12 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbc14 jg 0x11adbc20 */
  if ((!C.zf&&C.sf==C.of)) goto L_11adbc20;
  /* 11adbc16 mov eax, 2 */
  EAX = (0x2u);
  /* 11adbc1b jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbc20:;
  /* 11adbc20 jmp 0x11adbbd1 */
  goto L_11adbbd1;
L_11adbc22:;
  /* 11adbc22 mov eax, 1 */
  EAX = (0x1u);
  /* 11adbc27 jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbc2c:;
  /* 11adbc2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11adbc2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11adbc30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adbc33 push ecx */
  push32((uint32_t)(ECX));
  /* 11adbc34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adbc37 push edx */
  push32((uint32_t)(EDX));
  /* 11adbc38 push 9 */
  push32((uint32_t)(0x9u));
  /* 11adbc3a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11adbc3d push eax */
  push32((uint32_t)(EAX));
  /* 11adbc3e call dword ptr [0x11afb31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb31c))), 0x11adbc44u);
  /* 11adbc44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11adbc47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbc4b jne 0x11adbc54 */
  if (!C.zf) goto L_11adbc54;
  /* 11adbc4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbc4f jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbc54:;
  /* 11adbc54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11adbc5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11adbc5e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11adbc60 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbc63 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11adbc65 call 0x11acc800 */
  push32(0x11adbc6au); f_11acc800();
  /* 11adbc6a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11adbc6d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11adbc70 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11adbc73 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11adbc76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11adbc7d jmp 0x11adbc96 */
  goto L_11adbc96;
  /* 11adbc7f mov eax, 1 */
  EAX = (0x1u);
  /* 11adbc84 ret  */
  ESPCHK(0x11adb9a0u, _esp0);
  ESP += 4; return;
  /* 11adbc85 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11adbc88 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11adbc8f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11adbc96:;
  /* 11adbc96 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbc9a jne 0x11adbca3 */
  if (!C.zf) goto L_11adbca3;
  /* 11adbc9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbc9e jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbca3:;
  /* 11adbca3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11adbca6 push edx */
  push32((uint32_t)(EDX));
  /* 11adbca7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11adbcaa push eax */
  push32((uint32_t)(EAX));
  /* 11adbcab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11adbcae push ecx */
  push32((uint32_t)(ECX));
  /* 11adbcaf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11adbcb2 push edx */
  push32((uint32_t)(EDX));
  /* 11adbcb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11adbcb5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11adbcb8 push eax */
  push32((uint32_t)(EAX));
  /* 11adbcb9 call dword ptr [0x11afb31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb31c))), 0x11adbcbfu);
  /* 11adbcbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adbcc1 jne 0x11adbcca */
  if (!C.zf) goto L_11adbcca;
  /* 11adbcc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbcc5 jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbcca:;
  /* 11adbcca push 0 */
  push32((uint32_t)(0x0u));
  /* 11adbccc push 0 */
  push32((uint32_t)(0x0u));
  /* 11adbcce mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11adbcd1 push ecx */
  push32((uint32_t)(ECX));
  /* 11adbcd2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adbcd5 push edx */
  push32((uint32_t)(EDX));
  /* 11adbcd6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11adbcd8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11adbcdb push eax */
  push32((uint32_t)(EAX));
  /* 11adbcdc call dword ptr [0x11afb31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb31c))), 0x11adbce2u);
  /* 11adbce2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11adbce5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbce9 jne 0x11adbcf2 */
  if (!C.zf) goto L_11adbcf2;
  /* 11adbceb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbced jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbcf2:;
  /* 11adbcf2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11adbcf9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11adbcfc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11adbcfe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbd01 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11adbd03 call 0x11acc800 */
  push32(0x11adbd08u); f_11acc800();
  /* 11adbd08 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11adbd0b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11adbd0e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11adbd11 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11adbd14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11adbd1b jmp 0x11adbd34 */
  goto L_11adbd34;
  /* 11adbd1d mov eax, 1 */
  EAX = (0x1u);
  /* 11adbd22 ret  */
  ESPCHK(0x11adb9a0u, _esp0);
  ESP += 4; return;
  /* 11adbd23 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11adbd26 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11adbd2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11adbd34:;
  /* 11adbd34 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbd38 jne 0x11adbd3e */
  if (!C.zf) goto L_11adbd3e;
  /* 11adbd3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbd3c jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbd3e:;
  /* 11adbd3e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11adbd41 push edx */
  push32((uint32_t)(EDX));
  /* 11adbd42 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11adbd45 push eax */
  push32((uint32_t)(EAX));
  /* 11adbd46 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11adbd49 push ecx */
  push32((uint32_t)(ECX));
  /* 11adbd4a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11adbd4d push edx */
  push32((uint32_t)(EDX));
  /* 11adbd4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11adbd50 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11adbd53 push eax */
  push32((uint32_t)(EAX));
  /* 11adbd54 call dword ptr [0x11afb31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb31c))), 0x11adbd5au);
  /* 11adbd5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adbd5c jne 0x11adbd62 */
  if (!C.zf) goto L_11adbd62;
  /* 11adbd5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbd60 jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbd62:;
  /* 11adbd62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11adbd65 push ecx */
  push32((uint32_t)(ECX));
  /* 11adbd66 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11adbd69 push edx */
  push32((uint32_t)(EDX));
  /* 11adbd6a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11adbd6d push eax */
  push32((uint32_t)(EAX));
  /* 11adbd6e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11adbd71 push ecx */
  push32((uint32_t)(ECX));
  /* 11adbd72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adbd75 push edx */
  push32((uint32_t)(EDX));
  /* 11adbd76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adbd79 push eax */
  push32((uint32_t)(EAX));
  /* 11adbd7a call dword ptr [0x11afb2d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2d8))), 0x11adbd80u);
  /* 11adbd80 jmp 0x11adbd84 */
  goto L_11adbd84;
L_11adbd82:;
  /* 11adbd82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11adbd84:;
  /* 11adbd84 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11adbd87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11adbd8a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11adbd91 pop edi */
  EDI = (pop32());
  /* 11adbd92 pop esi */
  ESI = (pop32());
  /* 11adbd93 pop ebx */
  EBX = (pop32());
  /* 11adbd94 mov esp, ebp */
  ESP = (EBP);
  /* 11adbd96 pop ebp */
  EBP = (pop32());
  /* 11adbd97 ret  */
  ESPCHK(0x11adb9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bda0 @ 0x11adbda0 (80 bytes, 32 insns) */
void f_11adbda0(void) {
  FTRACE(0x11adbda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adbda0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adbda1 mov ebp, esp */
  EBP = (ESP);
  /* 11adbda3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adbda6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adbda9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11adbdac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adbdaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11adbdb2:;
  /* 11adbdb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbdb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbdb8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adbdbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11adbdbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adbdc0 je 0x11adbdd7 */
  if (C.zf) goto L_11adbdd7;
  /* 11adbdc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adbdc5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11adbdc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adbdca je 0x11adbdd7 */
  if (C.zf) goto L_11adbdd7;
  /* 11adbdcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adbdcf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbdd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11adbdd5 jmp 0x11adbdb2 */
  goto L_11adbdb2;
L_11adbdd7:;
  /* 11adbdd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adbdda movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11adbddd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adbddf jne 0x11adbde9 */
  if (!C.zf) goto L_11adbde9;
  /* 11adbde1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adbde4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adbde7 jmp 0x11adbdec */
  goto L_11adbdec;
L_11adbde9:;
  /* 11adbde9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11adbdec:;
  /* 11adbdec mov esp, ebp */
  ESP = (EBP);
  /* 11adbdee pop ebp */
  EBP = (pop32());
  /* 11adbdef ret  */
  ESPCHK(0x11adbda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bdf0 @ 0x11adbdf0 (736 bytes, 224 insns) */
void f_11adbdf0(void) {
  FTRACE(0x11adbdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adbdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adbdf1 mov ebp, esp */
  EBP = (ESP);
  /* 11adbdf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adbdf6 push esi */
  push32((uint32_t)(ESI));
  /* 11adbdf7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbdfb je 0x11adbe1c */
  if (C.zf) goto L_11adbe1c;
  /* 11adbdfd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11adbdff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adbe02 push eax */
  push32((uint32_t)(EAX));
  /* 11adbe03 call 0x11adc240 */
  push32(0x11adbe08u); f_11adc240();
  /* 11adbe08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbe0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11adbe0e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbe12 je 0x11adbe1c */
  if (C.zf) goto L_11adbe1c;
  /* 11adbe14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adbe17 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbe1a jne 0x11adbe24 */
  if (!C.zf) goto L_11adbe24;
L_11adbe1c:;
  /* 11adbe1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adbe1f jmp 0x11adc0cb */
  goto L_11adc0cb;
L_11adbe24:;
  /* 11adbe24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11adbe27 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11adbe2b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11adbe2d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adbe2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11adbe30 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11adbe33 mov ecx, dword ptr [0x11af92e4] */
  ECX = (r32((uint32_t)(0x11af92e4)));
  /* 11adbe39 cmp ecx, dword ptr [0x11af92e8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af92e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbe3f jne 0x11adbe55 */
  if (!C.zf) goto L_11adbe55;
  /* 11adbe41 mov edx, dword ptr [0x11af92e4] */
  EDX = (r32((uint32_t)(0x11af92e4)));
  /* 11adbe47 push edx */
  push32((uint32_t)(EDX));
  /* 11adbe48 call 0x11adc150 */
  push32(0x11adbe4du); f_11adc150();
  /* 11adbe4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbe50 mov dword ptr [0x11af92e4], eax */
  w32((uint32_t)(0x11af92e4), (EAX));
L_11adbe55:;
  /* 11adbe55 cmp dword ptr [0x11af92e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbe5c jne 0x11adbf15 */
  if (!C.zf) goto L_11adbf15;
  /* 11adbe62 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbe66 je 0x11adbe87 */
  if (C.zf) goto L_11adbe87;
  /* 11adbe68 cmp dword ptr [0x11af92ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbe6f je 0x11adbe87 */
  if (C.zf) goto L_11adbe87;
  /* 11adbe71 call 0x11adb8f0 */
  push32(0x11adbe76u); f_11adb8f0();
  /* 11adbe76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adbe78 je 0x11adbe82 */
  if (C.zf) goto L_11adbe82;
  /* 11adbe7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adbe7d jmp 0x11adc0cb */
  goto L_11adc0cb;
L_11adbe82:;
  /* 11adbe82 jmp 0x11adbf15 */
  goto L_11adbf15;
L_11adbe87:;
  /* 11adbe87 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbe8b je 0x11adbe94 */
  if (C.zf) goto L_11adbe94;
  /* 11adbe8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adbe8f jmp 0x11adc0cb */
  goto L_11adc0cb;
L_11adbe94:;
  /* 11adbe94 cmp dword ptr [0x11af92e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbe9b jne 0x11adbed4 */
  if (!C.zf) goto L_11adbed4;
  /* 11adbe9d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11adbea2 push 0x11af4bc0 */
  push32((uint32_t)(0x11af4bc0u));
  /* 11adbea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11adbea9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11adbeab call 0x11ac9660 */
  push32(0x11adbeb0u); f_11ac9660();
  /* 11adbeb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbeb3 mov dword ptr [0x11af92e4], eax */
  w32((uint32_t)(0x11af92e4), (EAX));
  /* 11adbeb8 cmp dword ptr [0x11af92e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbebf jne 0x11adbec9 */
  if (!C.zf) goto L_11adbec9;
  /* 11adbec1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adbec4 jmp 0x11adc0cb */
  goto L_11adc0cb;
L_11adbec9:;
  /* 11adbec9 mov eax, dword ptr [0x11af92e4] */
  EAX = (r32((uint32_t)(0x11af92e4)));
  /* 11adbece mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11adbed4:;
  /* 11adbed4 cmp dword ptr [0x11af92ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbedb jne 0x11adbf15 */
  if (!C.zf) goto L_11adbf15;
  /* 11adbedd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11adbee2 push 0x11af4bc0 */
  push32((uint32_t)(0x11af4bc0u));
  /* 11adbee7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11adbee9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11adbeeb call 0x11ac9660 */
  push32(0x11adbef0u); f_11ac9660();
  /* 11adbef0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbef3 mov dword ptr [0x11af92ec], eax */
  w32((uint32_t)(0x11af92ec), (EAX));
  /* 11adbef8 cmp dword ptr [0x11af92ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbeff jne 0x11adbf09 */
  if (!C.zf) goto L_11adbf09;
  /* 11adbf01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adbf04 jmp 0x11adc0cb */
  goto L_11adc0cb;
L_11adbf09:;
  /* 11adbf09 mov ecx, dword ptr [0x11af92ec] */
  ECX = (r32((uint32_t)(0x11af92ec)));
  /* 11adbf0f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11adbf15:;
  /* 11adbf15 mov edx, dword ptr [0x11af92e4] */
  EDX = (r32((uint32_t)(0x11af92e4)));
  /* 11adbf1b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11adbf1e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11adbf21 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adbf24 push eax */
  push32((uint32_t)(EAX));
  /* 11adbf25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adbf28 push ecx */
  push32((uint32_t)(ECX));
  /* 11adbf29 call 0x11adc0d0 */
  push32(0x11adbf2eu); f_11adc0d0();
  /* 11adbf2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbf31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11adbf34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbf38 jl 0x11adbfd1 */
  if ((C.sf!=C.of)) goto L_11adbfd1;
  /* 11adbf3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adbf41 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbf44 je 0x11adbfd1 */
  if (C.zf) goto L_11adbfd1;
  /* 11adbf4a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbf4e je 0x11adbfc3 */
  if (C.zf) goto L_11adbfc3;
  /* 11adbf50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11adbf52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbf55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adbf58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11adbf5b push edx */
  push32((uint32_t)(EDX));
  /* 11adbf5c call 0x11aca0f0 */
  push32(0x11adbf61u); f_11aca0f0();
  /* 11adbf61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbf64 jmp 0x11adbf6f */
  goto L_11adbf6f;
L_11adbf66:;
  /* 11adbf66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbf69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbf6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11adbf6f:;
  /* 11adbf6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbf72 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adbf75 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbf79 je 0x11adbf90 */
  if (C.zf) goto L_11adbf90;
  /* 11adbf7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbf7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adbf81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbf84 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11adbf87 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11adbf8b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11adbf8e jmp 0x11adbf66 */
  goto L_11adbf66;
L_11adbf90:;
  /* 11adbf90 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11adbf95 push 0x11af4bc0 */
  push32((uint32_t)(0x11af4bc0u));
  /* 11adbf9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11adbf9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbf9f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11adbfa2 push eax */
  push32((uint32_t)(EAX));
  /* 11adbfa3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adbfa6 push ecx */
  push32((uint32_t)(ECX));
  /* 11adbfa7 call 0x11ac9af0 */
  push32(0x11adbfacu); f_11ac9af0();
  /* 11adbfac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adbfaf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11adbfb2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbfb6 je 0x11adbfc1 */
  if (C.zf) goto L_11adbfc1;
  /* 11adbfb8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adbfbb mov dword ptr [0x11af92e4], edx */
  w32((uint32_t)(0x11af92e4), (EDX));
L_11adbfc1:;
  /* 11adbfc1 jmp 0x11adbfcf */
  goto L_11adbfcf;
L_11adbfc3:;
  /* 11adbfc3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbfc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adbfc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adbfcc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11adbfcf:;
  /* 11adbfcf jmp 0x11adc044 */
  goto L_11adc044;
L_11adbfd1:;
  /* 11adbfd1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbfd5 jne 0x11adc03d */
  if (!C.zf) goto L_11adc03d;
  /* 11adbfd7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adbfdb jge 0x11adbfe5 */
  if ((C.sf==C.of)) goto L_11adbfe5;
  /* 11adbfdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbfe0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11adbfe2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11adbfe5:;
  /* 11adbfe5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11adbfea push 0x11af4bc0 */
  push32((uint32_t)(0x11af4bc0u));
  /* 11adbfef push 2 */
  push32((uint32_t)(0x2u));
  /* 11adbff1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adbff4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11adbffb push edx */
  push32((uint32_t)(EDX));
  /* 11adbffc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adbfff push eax */
  push32((uint32_t)(EAX));
  /* 11adc000 call 0x11ac9af0 */
  push32(0x11adc005u); f_11ac9af0();
  /* 11adc005 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc008 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11adc00b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc00f jne 0x11adc019 */
  if (!C.zf) goto L_11adc019;
  /* 11adc011 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adc014 jmp 0x11adc0cb */
  goto L_11adc0cb;
L_11adc019:;
  /* 11adc019 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adc01c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adc01f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc022 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11adc025 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adc028 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adc02b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11adc033 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adc036 mov dword ptr [0x11af92e4], eax */
  w32((uint32_t)(0x11af92e4), (EAX));
  /* 11adc03b jmp 0x11adc044 */
  goto L_11adc044;
L_11adc03d:;
  /* 11adc03d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adc03f jmp 0x11adc0cb */
  goto L_11adc0cb;
L_11adc044:;
  /* 11adc044 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc048 je 0x11adc0c9 */
  if (C.zf) goto L_11adc0c9;
  /* 11adc04a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11adc04f push 0x11af4bc0 */
  push32((uint32_t)(0x11af4bc0u));
  /* 11adc054 push 2 */
  push32((uint32_t)(0x2u));
  /* 11adc056 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc059 push ecx */
  push32((uint32_t)(ECX));
  /* 11adc05a call 0x11acc490 */
  push32(0x11adc05fu); f_11acc490();
  /* 11adc05f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc062 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc065 push eax */
  push32((uint32_t)(EAX));
  /* 11adc066 call 0x11ac9660 */
  push32(0x11adc06bu); f_11ac9660();
  /* 11adc06b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc06e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11adc071 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc075 je 0x11adc0c9 */
  if (C.zf) goto L_11adc0c9;
  /* 11adc077 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc07a push edx */
  push32((uint32_t)(EDX));
  /* 11adc07b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11adc07e push eax */
  push32((uint32_t)(EAX));
  /* 11adc07f call 0x11acc610 */
  push32(0x11adc084u); f_11acc610();
  /* 11adc084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc087 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11adc08a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adc08d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11adc090 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc092 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11adc095 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc098 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11adc09b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc09e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc0a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11adc0a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11adc0a7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11adc0a9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adc0ab not edx */
  EDX = (~(EDX));
  /* 11adc0ad and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11adc0b0 push edx */
  push32((uint32_t)(EDX));
  /* 11adc0b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11adc0b4 push eax */
  push32((uint32_t)(EAX));
  /* 11adc0b5 call dword ptr [0x11afb2d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2d4))), 0x11adc0bbu);
  /* 11adc0bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11adc0bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11adc0c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11adc0c1 call 0x11aca0f0 */
  push32(0x11adc0c6u); f_11aca0f0();
  /* 11adc0c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11adc0c9:;
  /* 11adc0c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11adc0cb:;
  /* 11adc0cb pop esi */
  ESI = (pop32());
  /* 11adc0cc mov esp, ebp */
  ESP = (EBP);
  /* 11adc0ce pop ebp */
  EBP = (pop32());
  /* 11adc0cf ret  */
  ESPCHK(0x11adbdf0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11adc0d0 (124 bytes, 47 insns) */
void f_11adc0d0(void) {
  FTRACE(0x11adc0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adc0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11adc0d1 mov ebp, esp */
  EBP = (ESP);
  /* 11adc0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11adc0d4 mov eax, dword ptr [0x11af92e4] */
  EAX = (r32((uint32_t)(0x11af92e4)));
  /* 11adc0d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11adc0dc jmp 0x11adc0e7 */
  goto L_11adc0e7;
L_11adc0de:;
  /* 11adc0de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc0e1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc0e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11adc0e7:;
  /* 11adc0e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc0ea cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc0ed je 0x11adc13a */
  if (C.zf) goto L_11adc13a;
  /* 11adc0ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adc0f2 push eax */
  push32((uint32_t)(EAX));
  /* 11adc0f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc0f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11adc0f8 push edx */
  push32((uint32_t)(EDX));
  /* 11adc0f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc0fc push eax */
  push32((uint32_t)(EAX));
  /* 11adc0fd call 0x11adb8a0 */
  push32(0x11adc102u); f_11adb8a0();
  /* 11adc102 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc105 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11adc107 jne 0x11adc138 */
  if (!C.zf) goto L_11adc138;
  /* 11adc109 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc10c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11adc10e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adc111 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11adc115 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc118 je 0x11adc12a */
  if (C.zf) goto L_11adc12a;
  /* 11adc11a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc11d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11adc11f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adc122 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11adc126 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adc128 jne 0x11adc138 */
  if (!C.zf) goto L_11adc138;
L_11adc12a:;
  /* 11adc12a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc12d sub eax, dword ptr [0x11af92e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af92e4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adc133 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11adc136 jmp 0x11adc148 */
  goto L_11adc148;
L_11adc138:;
  /* 11adc138 jmp 0x11adc0de */
  goto L_11adc0de;
L_11adc13a:;
  /* 11adc13a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc13d sub eax, dword ptr [0x11af92e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af92e4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adc143 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11adc146 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11adc148:;
  /* 11adc148 mov esp, ebp */
  ESP = (EBP);
  /* 11adc14a pop ebp */
  EBP = (pop32());
  /* 11adc14b ret  */
  ESPCHK(0x11adc0d0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11adc150 (238 bytes, 80 insns) */
void f_11adc150(void) {
  FTRACE(0x11adc150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adc150 push ebp */
  push32((uint32_t)(EBP));
  /* 11adc151 mov ebp, esp */
  EBP = (ESP);
  /* 11adc153 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adc156 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11adc15d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc160 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11adc163 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc167 jne 0x11adc170 */
  if (!C.zf) goto L_11adc170;
  /* 11adc169 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adc16b jmp 0x11adc23a */
  goto L_11adc23a;
L_11adc170:;
  /* 11adc170 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adc173 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11adc175 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adc178 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc17b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11adc17e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adc180 je 0x11adc18d */
  if (C.zf) goto L_11adc18d;
  /* 11adc182 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11adc185 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc188 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11adc18b jmp 0x11adc170 */
  goto L_11adc170;
L_11adc18d:;
  /* 11adc18d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11adc192 push 0x11af4bc0 */
  push32((uint32_t)(0x11af4bc0u));
  /* 11adc197 push 2 */
  push32((uint32_t)(0x2u));
  /* 11adc199 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11adc19c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11adc1a3 push eax */
  push32((uint32_t)(EAX));
  /* 11adc1a4 call 0x11ac9660 */
  push32(0x11adc1a9u); f_11ac9660();
  /* 11adc1a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc1ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11adc1af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adc1b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11adc1b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc1b9 jne 0x11adc1c5 */
  if (!C.zf) goto L_11adc1c5;
  /* 11adc1bb push 9 */
  push32((uint32_t)(0x9u));
  /* 11adc1bd call 0x11ac68f0 */
  push32(0x11adc1c2u); f_11ac68f0();
  /* 11adc1c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11adc1c5:;
  /* 11adc1c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc1c8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11adc1cb:;
  /* 11adc1cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adc1ce cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc1d1 je 0x11adc22e */
  if (C.zf) goto L_11adc22e;
  /* 11adc1d3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11adc1d8 push 0x11af4bc0 */
  push32((uint32_t)(0x11af4bc0u));
  /* 11adc1dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11adc1df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adc1e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11adc1e4 push edx */
  push32((uint32_t)(EDX));
  /* 11adc1e5 call 0x11acc490 */
  push32(0x11adc1eau); f_11acc490();
  /* 11adc1ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc1ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc1f0 push eax */
  push32((uint32_t)(EAX));
  /* 11adc1f1 call 0x11ac9660 */
  push32(0x11adc1f6u); f_11ac9660();
  /* 11adc1f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc1f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adc1fc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11adc1fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adc201 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc204 je 0x11adc21a */
  if (C.zf) goto L_11adc21a;
  /* 11adc206 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adc209 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11adc20b push ecx */
  push32((uint32_t)(ECX));
  /* 11adc20c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adc20f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11adc211 push eax */
  push32((uint32_t)(EAX));
  /* 11adc212 call 0x11acc610 */
  push32(0x11adc217u); f_11acc610();
  /* 11adc217 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11adc21a:;
  /* 11adc21a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11adc21d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc220 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11adc223 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adc226 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc229 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11adc22c jmp 0x11adc1cb */
  goto L_11adc1cb;
L_11adc22e:;
  /* 11adc22e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11adc231 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11adc237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11adc23a:;
  /* 11adc23a mov esp, ebp */
  ESP = (EBP);
  /* 11adc23c pop ebp */
  EBP = (pop32());
  /* 11adc23d ret  */
  ESPCHK(0x11adc150u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c240 @ 0x11adc240 (237 bytes, 81 insns) */
void f_11adc240(void) {
  FTRACE(0x11adc240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adc240 push ebp */
  push32((uint32_t)(EBP));
  /* 11adc241 mov ebp, esp */
  EBP = (ESP);
  /* 11adc243 push ecx */
  push32((uint32_t)(ECX));
  /* 11adc244 cmp dword ptr [0x11af96dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af96dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc24b jne 0x11adc262 */
  if (!C.zf) goto L_11adc262;
  /* 11adc24d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11adc250 push eax */
  push32((uint32_t)(EAX));
  /* 11adc251 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc254 push ecx */
  push32((uint32_t)(ECX));
  /* 11adc255 call 0x11adc340 */
  push32(0x11adc25au); f_11adc340();
  /* 11adc25a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc25d jmp 0x11adc329 */
  goto L_11adc329;
L_11adc262:;
  /* 11adc262 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11adc264 call 0x11acd060 */
  push32(0x11adc269u); f_11acd060();
  /* 11adc269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc26c jmp 0x11adc277 */
  goto L_11adc277;
L_11adc26e:;
  /* 11adc26e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc271 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc274 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11adc277:;
  /* 11adc277 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc27a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11adc27e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11adc282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc285 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11adc28b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11adc28d je 0x11adc30b */
  if (C.zf) goto L_11adc30b;
  /* 11adc28f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc292 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adc297 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adc299 mov cl, byte ptr [eax + 0x11af97e1] */
  CL = (r8((uint32_t)(EAX + 0x11af97e1)));
  /* 11adc29f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11adc2a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11adc2a4 je 0x11adc2f6 */
  if (C.zf) goto L_11adc2f6;
  /* 11adc2a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc2a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc2ac mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11adc2af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc2b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adc2b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11adc2b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11adc2b8 jne 0x11adc2c8 */
  if (!C.zf) goto L_11adc2c8;
  /* 11adc2ba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11adc2bc call 0x11acd100 */
  push32(0x11adc2c1u); f_11acd100();
  /* 11adc2c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc2c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adc2c6 jmp 0x11adc329 */
  goto L_11adc329;
L_11adc2c8:;
  /* 11adc2c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc2cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11adc2d1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11adc2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc2d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11adc2d9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11adc2db or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11adc2dd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc2e0 jne 0x11adc2f4 */
  if (!C.zf) goto L_11adc2f4;
  /* 11adc2e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11adc2e4 call 0x11acd100 */
  push32(0x11adc2e9u); f_11acd100();
  /* 11adc2e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc2ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc2ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11adc2f2 jmp 0x11adc329 */
  goto L_11adc329;
L_11adc2f4:;
  /* 11adc2f4 jmp 0x11adc306 */
  goto L_11adc306;
L_11adc2f6:;
  /* 11adc2f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc2f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11adc2ff cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc302 jne 0x11adc306 */
  if (!C.zf) goto L_11adc306;
  /* 11adc304 jmp 0x11adc30b */
  goto L_11adc30b;
L_11adc306:;
  /* 11adc306 jmp 0x11adc26e */
  goto L_11adc26e;
L_11adc30b:;
  /* 11adc30b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11adc30d call 0x11acd100 */
  push32(0x11adc312u); f_11acd100();
  /* 11adc312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11adc318 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adc31d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11adc320 jne 0x11adc327 */
  if (!C.zf) goto L_11adc327;
  /* 11adc322 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11adc325 jmp 0x11adc329 */
  goto L_11adc329;
L_11adc327:;
  /* 11adc327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11adc329:;
  /* 11adc329 mov esp, ebp */
  ESP = (EBP);
  /* 11adc32b pop ebp */
  EBP = (pop32());
  /* 11adc32c ret  */
  ESPCHK(0x11adc240u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11adc340 (193 bytes, 87 insns) */
void f_11adc340(void) {
  FTRACE(0x11adc340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adc340 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adc342 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11adc346 push ebx */
  push32((uint32_t)(EBX));
  /* 11adc347 mov ebx, eax */
  EBX = (EAX);
  /* 11adc349 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11adc34c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11adc350 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11adc356 je 0x11adc36b */
  if (C.zf) goto L_11adc36b;
L_11adc358:;
  /* 11adc358 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11adc35a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11adc35b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11adc35d je 0x11adc330 */
  if (C.zf) { jmp_ind(0x11adc330u); return; }
  /* 11adc35f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11adc361 je 0x11adc3b4 */
  if (C.zf) goto L_11adc3b4;
  /* 11adc363 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11adc369 jne 0x11adc358 */
  if (!C.zf) goto L_11adc358;
L_11adc36b:;
  /* 11adc36b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11adc36d push edi */
  push32((uint32_t)(EDI));
  /* 11adc36e mov eax, ebx */
  EAX = (EBX);
  /* 11adc370 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11adc373 push esi */
  push32((uint32_t)(ESI));
  /* 11adc374 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11adc376:;
  /* 11adc376 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11adc378 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11adc37d mov eax, ecx */
  EAX = (ECX);
  /* 11adc37f mov esi, edi */
  ESI = (EDI);
  /* 11adc381 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11adc383 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc385 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc387 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11adc38a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11adc38d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11adc38f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11adc391 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11adc394 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11adc39a jne 0x11adc3b8 */
  if (!C.zf) goto L_11adc3b8;
  /* 11adc39c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11adc3a1 je 0x11adc376 */
  if (C.zf) goto L_11adc376;
  /* 11adc3a3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11adc3a8 jne 0x11adc3b2 */
  if (!C.zf) goto L_11adc3b2;
  /* 11adc3aa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11adc3b0 jne 0x11adc376 */
  if (!C.zf) goto L_11adc376;
L_11adc3b2:;
  /* 11adc3b2 pop esi */
  ESI = (pop32());
  /* 11adc3b3 pop edi */
  EDI = (pop32());
L_11adc3b4:;
  /* 11adc3b4 pop ebx */
  EBX = (pop32());
  /* 11adc3b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11adc3b7 ret  */
  ESPCHK(0x11adc340u, _esp0);
  ESP += 4; return;
L_11adc3b8:;
  /* 11adc3b8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11adc3bb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11adc3bd je 0x11adc3f5 */
  if (C.zf) goto L_11adc3f5;
  /* 11adc3bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11adc3c1 je 0x11adc3b2 */
  if (C.zf) goto L_11adc3b2;
  /* 11adc3c3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11adc3c5 je 0x11adc3ee */
  if (C.zf) goto L_11adc3ee;
  /* 11adc3c7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11adc3c9 je 0x11adc3b2 */
  if (C.zf) goto L_11adc3b2;
  /* 11adc3cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11adc3ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11adc3d0 je 0x11adc3e7 */
  if (C.zf) goto L_11adc3e7;
  /* 11adc3d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11adc3d4 je 0x11adc3b2 */
  if (C.zf) goto L_11adc3b2;
  /* 11adc3d6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11adc3d8 je 0x11adc3e0 */
  if (C.zf) goto L_11adc3e0;
  /* 11adc3da test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11adc3dc je 0x11adc3b2 */
  if (C.zf) goto L_11adc3b2;
  /* 11adc3de jmp 0x11adc376 */
  goto L_11adc376;
L_11adc3e0:;
  /* 11adc3e0 pop esi */
  ESI = (pop32());
  /* 11adc3e1 pop edi */
  EDI = (pop32());
  /* 11adc3e2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11adc3e5 pop ebx */
  EBX = (pop32());
  /* 11adc3e6 ret  */
  ESPCHK(0x11adc340u, _esp0);
  ESP += 4; return;
L_11adc3e7:;
  /* 11adc3e7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11adc3ea pop esi */
  ESI = (pop32());
  /* 11adc3eb pop edi */
  EDI = (pop32());
  /* 11adc3ec pop ebx */
  EBX = (pop32());
  /* 11adc3ed ret  */
  ESPCHK(0x11adc340u, _esp0);
  ESP += 4; return;
L_11adc3ee:;
  /* 11adc3ee lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11adc3f1 pop esi */
  ESI = (pop32());
  /* 11adc3f2 pop edi */
  EDI = (pop32());
  /* 11adc3f3 pop ebx */
  EBX = (pop32());
  /* 11adc3f4 ret  */
  ESPCHK(0x11adc340u, _esp0);
  ESP += 4; return;
L_11adc3f5:;
  /* 11adc3f5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11adc3f8 pop esi */
  ESI = (pop32());
  /* 11adc3f9 pop edi */
  EDI = (pop32());
  /* 11adc3fa pop ebx */
  EBX = (pop32());
  /* 11adc3fb ret  */
  ESPCHK(0x11adc340u, _esp0);
  ESP += 4; return;
  /* 11adc3fc jmp dword ptr [0x11afb380] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11afb380)))); return;
}

/* RtlUnwind @ 0x11adc58e (6 bytes, 1 insns) */
void f_11adc58e(void) {
  FTRACE(0x11adc58eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11adc58e jmp dword ptr [0x11afb2e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11afb2e8)))); return;
}

