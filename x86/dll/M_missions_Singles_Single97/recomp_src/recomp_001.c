#include "recomp.h"

/* FUN_100063e0 @ 0x120a63e0 (120 bytes, 47 insns) */
void f_120a63e0(void) {
  FTRACE(0x120a63e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a63e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a63e1 mov ebp, esp */
  EBP = (ESP);
  /* 120a63e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a63e6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a63e7 push esi */
  push32((uint32_t)(ESI));
  /* 120a63e8 push edi */
  push32((uint32_t)(EDI));
  /* 120a63e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 120a63ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 120a63f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a63f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_120a63f8:;
  /* 120a63f8 mov esi, esp */
  ESI = (ESP);
  /* 120a63fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a63fd push eax */
  push32((uint32_t)(EAX));
  /* 120a63fe call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a6404u);
  /* 120a6404 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6407 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6409 call 0x120aa8e0 */
  push32(0x120a640eu); f_120aa8e0();
  /* 120a640e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a6410 je 0x120a642c */
  if (C.zf) goto L_120a642c;
  /* 120a6412 mov esi, esp */
  ESI = (ESP);
  /* 120a6414 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a6416 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6419 push ecx */
  push32((uint32_t)(ECX));
  /* 120a641a call dword ptr [0x120e3500] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3500))), 0x120a6420u);
  /* 120a6420 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6423 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6425 call 0x120aa8e0 */
  push32(0x120a642au); f_120aa8e0();
  /* 120a642a jmp 0x120a63f8 */
  goto L_120a63f8;
L_120a642c:;
  /* 120a642c mov esi, esp */
  ESI = (ESP);
  /* 120a642e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6431 push edx */
  push32((uint32_t)(EDX));
  /* 120a6432 call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a6438u);
  /* 120a6438 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a643b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a643d call 0x120aa8e0 */
  push32(0x120a6442u); f_120aa8e0();
  /* 120a6442 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120a6444 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6446 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120a6447 pop edi */
  EDI = (pop32());
  /* 120a6448 pop esi */
  ESI = (pop32());
  /* 120a6449 pop ebx */
  EBX = (pop32());
  /* 120a644a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a644d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a644f call 0x120aa8e0 */
  push32(0x120a6454u); f_120aa8e0();
  /* 120a6454 mov esp, ebp */
  ESP = (EBP);
  /* 120a6456 pop ebp */
  EBP = (pop32());
  /* 120a6457 ret  */
  ESPCHK(0x120a63e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006480 @ 0x120a6480 (77 bytes, 35 insns) */
void f_120a6480(void) {
  FTRACE(0x120a6480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6480 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6481 mov ebp, esp */
  EBP = (ESP);
  /* 120a6483 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6486 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6487 push esi */
  push32((uint32_t)(ESI));
  /* 120a6488 push edi */
  push32((uint32_t)(EDI));
  /* 120a6489 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 120a648c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 120a6491 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6496 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a649b cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a649e jge 0x120a64a2 */
  if ((C.sf==C.of)) goto L_120a64a2;
  /* 120a64a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120a64a2:;
  /* 120a64a2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a64a5 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a64a8 jge 0x120a64ac */
  if ((C.sf==C.of)) goto L_120a64ac;
  /* 120a64aa neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120a64ac:;
  /* 120a64ac mov ecx, eax */
  ECX = (EAX);
  /* 120a64ae cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a64b0 ja 0x120a64b4 */
  if ((!C.cf&&!C.zf)) goto L_120a64b4;
  /* 120a64b2 mov ecx, ebx */
  ECX = (EBX);
L_120a64b4:;
  /* 120a64b4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a64b6 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a64b8 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120a64ba mov eax, ecx */
  EAX = (ECX);
  /* 120a64bc pop edi */
  EDI = (pop32());
  /* 120a64bd pop esi */
  ESI = (pop32());
  /* 120a64be pop ebx */
  EBX = (pop32());
  /* 120a64bf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a64c2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a64c4 call 0x120aa8e0 */
  push32(0x120a64c9u); f_120aa8e0();
  /* 120a64c9 mov esp, ebp */
  ESP = (EBP);
  /* 120a64cb pop ebp */
  EBP = (pop32());
  /* 120a64cc ret  */
  ESPCHK(0x120a6480u, _esp0);
  ESP += 4; return;
}

/* FUN_100064e0 @ 0x120a64e0 (70 bytes, 30 insns) */
void f_120a64e0(void) {
  FTRACE(0x120a64e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a64e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a64e1 mov ebp, esp */
  EBP = (ESP);
  /* 120a64e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a64e6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a64e7 push esi */
  push32((uint32_t)(ESI));
  /* 120a64e8 push edi */
  push32((uint32_t)(EDI));
  /* 120a64e9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a64ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a64ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a64f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a64f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a64f9 pop ecx */
  ECX = (pop32());
  /* 120a64fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a64fd mov esi, esp */
  ESI = (ESP);
  /* 120a64ff push 0 */
  push32((uint32_t)(0x0u));
  /* 120a6501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6504 push eax */
  push32((uint32_t)(EAX));
  /* 120a6505 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a650bu);
  /* 120a650b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a650e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6510 call 0x120aa8e0 */
  push32(0x120a6515u); f_120aa8e0();
  /* 120a6515 pop edi */
  EDI = (pop32());
  /* 120a6516 pop esi */
  ESI = (pop32());
  /* 120a6517 pop ebx */
  EBX = (pop32());
  /* 120a6518 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a651b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a651d call 0x120aa8e0 */
  push32(0x120a6522u); f_120aa8e0();
  /* 120a6522 mov esp, ebp */
  ESP = (EBP);
  /* 120a6524 pop ebp */
  EBP = (pop32());
  /* 120a6525 ret  */
  ESPCHK(0x120a64e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006540 @ 0x120a6540 (79 bytes, 32 insns) */
void f_120a6540(void) {
  FTRACE(0x120a6540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6540 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6541 mov ebp, esp */
  EBP = (ESP);
  /* 120a6543 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6546 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6547 push esi */
  push32((uint32_t)(ESI));
  /* 120a6548 push edi */
  push32((uint32_t)(EDI));
  /* 120a6549 push ecx */
  push32((uint32_t)(ECX));
  /* 120a654a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a654d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6552 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6557 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6559 pop ecx */
  ECX = (pop32());
  /* 120a655a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a655d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6560 call 0x120a1195 */
  push32(0x120a6565u); f_120a1195();
  /* 120a6565 mov esi, esp */
  ESI = (ESP);
  /* 120a6567 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a656a mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 120a656d push ecx */
  push32((uint32_t)(ECX));
  /* 120a656e call dword ptr [0x120e34fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34fc))), 0x120a6574u);
  /* 120a6574 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6579 call 0x120aa8e0 */
  push32(0x120a657eu); f_120aa8e0();
  /* 120a657e pop edi */
  EDI = (pop32());
  /* 120a657f pop esi */
  ESI = (pop32());
  /* 120a6580 pop ebx */
  EBX = (pop32());
  /* 120a6581 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6584 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6586 call 0x120aa8e0 */
  push32(0x120a658bu); f_120aa8e0();
  /* 120a658b mov esp, ebp */
  ESP = (EBP);
  /* 120a658d pop ebp */
  EBP = (pop32());
  /* 120a658e ret  */
  ESPCHK(0x120a6540u, _esp0);
  ESP += 4; return;
}

/* FUN_100065b0 @ 0x120a65b0 (68 bytes, 29 insns) */
void f_120a65b0(void) {
  FTRACE(0x120a65b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a65b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a65b1 mov ebp, esp */
  EBP = (ESP);
  /* 120a65b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a65b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a65b7 push esi */
  push32((uint32_t)(ESI));
  /* 120a65b8 push edi */
  push32((uint32_t)(EDI));
  /* 120a65b9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a65ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a65bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a65c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a65c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a65c9 pop ecx */
  ECX = (pop32());
  /* 120a65ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a65cd mov esi, esp */
  ESI = (ESP);
  /* 120a65cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a65d2 push eax */
  push32((uint32_t)(EAX));
  /* 120a65d3 call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a65d9u);
  /* 120a65d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a65dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a65de call 0x120aa8e0 */
  push32(0x120a65e3u); f_120aa8e0();
  /* 120a65e3 pop edi */
  EDI = (pop32());
  /* 120a65e4 pop esi */
  ESI = (pop32());
  /* 120a65e5 pop ebx */
  EBX = (pop32());
  /* 120a65e6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a65e9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a65eb call 0x120aa8e0 */
  push32(0x120a65f0u); f_120aa8e0();
  /* 120a65f0 mov esp, ebp */
  ESP = (EBP);
  /* 120a65f2 pop ebp */
  EBP = (pop32());
  /* 120a65f3 ret  */
  ESPCHK(0x120a65b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x120a6610 (69 bytes, 29 insns) */
void f_120a6610(void) {
  FTRACE(0x120a6610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6610 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6611 mov ebp, esp */
  EBP = (ESP);
  /* 120a6613 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6616 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6617 push esi */
  push32((uint32_t)(ESI));
  /* 120a6618 push edi */
  push32((uint32_t)(EDI));
  /* 120a6619 push ecx */
  push32((uint32_t)(ECX));
  /* 120a661a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a661d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a6622 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6627 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6629 pop ecx */
  ECX = (pop32());
  /* 120a662a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a662d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a6631 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6634 call 0x120a119f */
  push32(0x120a6639u); f_120a119f();
  /* 120a6639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a663b jle 0x120a6641 */
  if ((C.zf||C.sf!=C.of)) goto L_120a6641;
  /* 120a663d mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a6641:;
  /* 120a6641 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a6644 pop edi */
  EDI = (pop32());
  /* 120a6645 pop esi */
  ESI = (pop32());
  /* 120a6646 pop ebx */
  EBX = (pop32());
  /* 120a6647 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a664a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a664c call 0x120aa8e0 */
  push32(0x120a6651u); f_120aa8e0();
  /* 120a6651 mov esp, ebp */
  ESP = (EBP);
  /* 120a6653 pop ebp */
  EBP = (pop32());
  /* 120a6654 ret  */
  ESPCHK(0x120a6610u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x120a6670 (39 bytes, 20 insns) */
void f_120a6670(void) {
  FTRACE(0x120a6670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6670 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6671 mov ebp, esp */
  EBP = (ESP);
  /* 120a6673 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6676 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6677 push esi */
  push32((uint32_t)(ESI));
  /* 120a6678 push edi */
  push32((uint32_t)(EDI));
  /* 120a6679 push ecx */
  push32((uint32_t)(ECX));
  /* 120a667a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a667d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6682 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6687 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6689 pop ecx */
  ECX = (pop32());
  /* 120a668a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a668d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6690 pop edi */
  EDI = (pop32());
  /* 120a6691 pop esi */
  ESI = (pop32());
  /* 120a6692 pop ebx */
  EBX = (pop32());
  /* 120a6693 mov esp, ebp */
  ESP = (EBP);
  /* 120a6695 pop ebp */
  EBP = (pop32());
  /* 120a6696 ret  */
  ESPCHK(0x120a6670u, _esp0);
  ESP += 4; return;
}

/* FUN_100066a0 @ 0x120a66a0 (71 bytes, 30 insns) */
void f_120a66a0(void) {
  FTRACE(0x120a66a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a66a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a66a1 mov ebp, esp */
  EBP = (ESP);
  /* 120a66a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a66a6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a66a7 push esi */
  push32((uint32_t)(ESI));
  /* 120a66a8 push edi */
  push32((uint32_t)(EDI));
  /* 120a66a9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a66aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a66ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a66b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a66b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a66b9 pop ecx */
  ECX = (pop32());
  /* 120a66ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a66bd mov esi, esp */
  ESI = (ESP);
  /* 120a66bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a66c2 push eax */
  push32((uint32_t)(EAX));
  /* 120a66c3 call dword ptr [0x120e35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35a4))), 0x120a66c9u);
  /* 120a66c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a66cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a66ce call 0x120aa8e0 */
  push32(0x120a66d3u); f_120aa8e0();
  /* 120a66d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a66d6 pop edi */
  EDI = (pop32());
  /* 120a66d7 pop esi */
  ESI = (pop32());
  /* 120a66d8 pop ebx */
  EBX = (pop32());
  /* 120a66d9 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a66dc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a66de call 0x120aa8e0 */
  push32(0x120a66e3u); f_120aa8e0();
  /* 120a66e3 mov esp, ebp */
  ESP = (EBP);
  /* 120a66e5 pop ebp */
  EBP = (pop32());
  /* 120a66e6 ret  */
  ESPCHK(0x120a66a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006700 @ 0x120a6700 (47 bytes, 22 insns) */
void f_120a6700(void) {
  FTRACE(0x120a6700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6700 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6701 mov ebp, esp */
  EBP = (ESP);
  /* 120a6703 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6706 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6707 push esi */
  push32((uint32_t)(ESI));
  /* 120a6708 push edi */
  push32((uint32_t)(EDI));
  /* 120a6709 push ecx */
  push32((uint32_t)(ECX));
  /* 120a670a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a670d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6712 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6717 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6719 pop ecx */
  ECX = (pop32());
  /* 120a671a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a671d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6723 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 120a6726 pop edi */
  EDI = (pop32());
  /* 120a6727 pop esi */
  ESI = (pop32());
  /* 120a6728 pop ebx */
  EBX = (pop32());
  /* 120a6729 mov esp, ebp */
  ESP = (EBP);
  /* 120a672b pop ebp */
  EBP = (pop32());
  /* 120a672c ret 4 */
  ESPCHK(0x120a6700u, _esp0);
  ESP += 8; return;
}

/* FUN_10006740 @ 0x120a6740 (94 bytes, 39 insns) */
void f_120a6740(void) {
  FTRACE(0x120a6740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6740 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6741 mov ebp, esp */
  EBP = (ESP);
  /* 120a6743 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6746 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6747 push esi */
  push32((uint32_t)(ESI));
  /* 120a6748 push edi */
  push32((uint32_t)(EDI));
  /* 120a6749 push ecx */
  push32((uint32_t)(ECX));
  /* 120a674a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a674d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6752 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6757 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6759 pop ecx */
  ECX = (pop32());
  /* 120a675a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a675d mov esi, esp */
  ESI = (ESP);
  /* 120a675f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6762 push eax */
  push32((uint32_t)(EAX));
  /* 120a6763 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6766 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6767 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a676a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120a676d push eax */
  push32((uint32_t)(EAX));
  /* 120a676e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6771 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6774 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6775 call dword ptr [0x120e34f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34f8))), 0x120a677bu);
  /* 120a677b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a677e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6780 call 0x120aa8e0 */
  push32(0x120a6785u); f_120aa8e0();
  /* 120a6785 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6788 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a678b pop edi */
  EDI = (pop32());
  /* 120a678c pop esi */
  ESI = (pop32());
  /* 120a678d pop ebx */
  EBX = (pop32());
  /* 120a678e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6791 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6793 call 0x120aa8e0 */
  push32(0x120a6798u); f_120aa8e0();
  /* 120a6798 mov esp, ebp */
  ESP = (EBP);
  /* 120a679a pop ebp */
  EBP = (pop32());
  /* 120a679b ret 4 */
  ESPCHK(0x120a6740u, _esp0);
  ESP += 8; return;
}

/* FUN_100067c0 @ 0x120a67c0 (221 bytes, 81 insns) */
void f_120a67c0(void) {
  FTRACE(0x120a67c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a67c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a67c1 mov ebp, esp */
  EBP = (ESP);
  /* 120a67c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a67c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a67c7 push esi */
  push32((uint32_t)(ESI));
  /* 120a67c8 push edi */
  push32((uint32_t)(EDI));
  /* 120a67c9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a67ca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a67cd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a67d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a67d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a67d9 pop ecx */
  ECX = (pop32());
  /* 120a67da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a67dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a67e0 call 0x120a119f */
  push32(0x120a67e5u); f_120a119f();
  /* 120a67e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a67e7 jne 0x120a688a */
  if (!C.zf) goto L_120a688a;
  /* 120a67ed mov esi, esp */
  ESI = (ESP);
  /* 120a67ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a67f2 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 120a67f5 push ecx */
  push32((uint32_t)(ECX));
  /* 120a67f6 call dword ptr [0x120e3560] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3560))), 0x120a67fcu);
  /* 120a67fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a67ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6801 call 0x120aa8e0 */
  push32(0x120a6806u); f_120aa8e0();
  /* 120a6806 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a680d jmp 0x120a6818 */
  goto L_120a6818;
L_120a680f:;
  /* 120a680f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a6812 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6815 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120a6818:;
  /* 120a6818 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a681b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a681e jge 0x120a686b */
  if ((C.sf==C.of)) goto L_120a686b;
  /* 120a6820 mov esi, esp */
  ESI = (ESP);
  /* 120a6822 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a6824 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6827 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6828 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a682b mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 120a682e push eax */
  push32((uint32_t)(EAX));
  /* 120a682f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6832 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120a6835 push edx */
  push32((uint32_t)(EDX));
  /* 120a6836 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6839 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120a683c push ecx */
  push32((uint32_t)(ECX));
  /* 120a683d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6840 push edx */
  push32((uint32_t)(EDX));
  /* 120a6841 call dword ptr [0x120e3568] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3568))), 0x120a6847u);
  /* 120a6847 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a684a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a684c call 0x120aa8e0 */
  push32(0x120a6851u); f_120aa8e0();
  /* 120a6851 mov esi, esp */
  ESI = (ESP);
  /* 120a6853 push 1 */
  push32((uint32_t)(0x1u));
  /* 120a6855 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6858 push eax */
  push32((uint32_t)(EAX));
  /* 120a6859 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a685fu);
  /* 120a685f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6862 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6864 call 0x120aa8e0 */
  push32(0x120a6869u); f_120aa8e0();
  /* 120a6869 jmp 0x120a680f */
  goto L_120a680f;
L_120a686b:;
  /* 120a686b mov esi, esp */
  ESI = (ESP);
  /* 120a686d push 0 */
  push32((uint32_t)(0x0u));
  /* 120a686f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6872 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6873 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6876 mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 120a6879 push eax */
  push32((uint32_t)(EAX));
  /* 120a687a call dword ptr [0x120e35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35ac))), 0x120a6880u);
  /* 120a6880 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6885 call 0x120aa8e0 */
  push32(0x120a688au); f_120aa8e0();
L_120a688a:;
  /* 120a688a pop edi */
  EDI = (pop32());
  /* 120a688b pop esi */
  ESI = (pop32());
  /* 120a688c pop ebx */
  EBX = (pop32());
  /* 120a688d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6890 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6892 call 0x120aa8e0 */
  push32(0x120a6897u); f_120aa8e0();
  /* 120a6897 mov esp, ebp */
  ESP = (EBP);
  /* 120a6899 pop ebp */
  EBP = (pop32());
  /* 120a689a ret 8 */
  ESPCHK(0x120a67c0u, _esp0);
  ESP += 12; return;
}

/* FUN_100068e0 @ 0x120a68e0 (47 bytes, 22 insns) */
void f_120a68e0(void) {
  FTRACE(0x120a68e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a68e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a68e1 mov ebp, esp */
  EBP = (ESP);
  /* 120a68e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a68e6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a68e7 push esi */
  push32((uint32_t)(ESI));
  /* 120a68e8 push edi */
  push32((uint32_t)(EDI));
  /* 120a68e9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a68ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a68ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a68f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a68f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a68f9 pop ecx */
  ECX = (pop32());
  /* 120a68fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a68fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6900 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6903 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 120a6906 pop edi */
  EDI = (pop32());
  /* 120a6907 pop esi */
  ESI = (pop32());
  /* 120a6908 pop ebx */
  EBX = (pop32());
  /* 120a6909 mov esp, ebp */
  ESP = (EBP);
  /* 120a690b pop ebp */
  EBP = (pop32());
  /* 120a690c ret 4 */
  ESPCHK(0x120a68e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006920 @ 0x120a6920 (47 bytes, 22 insns) */
void f_120a6920(void) {
  FTRACE(0x120a6920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6920 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6921 mov ebp, esp */
  EBP = (ESP);
  /* 120a6923 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6926 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6927 push esi */
  push32((uint32_t)(ESI));
  /* 120a6928 push edi */
  push32((uint32_t)(EDI));
  /* 120a6929 push ecx */
  push32((uint32_t)(ECX));
  /* 120a692a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a692d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6932 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6937 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6939 pop ecx */
  ECX = (pop32());
  /* 120a693a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a693d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6940 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6943 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 120a6946 pop edi */
  EDI = (pop32());
  /* 120a6947 pop esi */
  ESI = (pop32());
  /* 120a6948 pop ebx */
  EBX = (pop32());
  /* 120a6949 mov esp, ebp */
  ESP = (EBP);
  /* 120a694b pop ebp */
  EBP = (pop32());
  /* 120a694c ret 4 */
  ESPCHK(0x120a6920u, _esp0);
  ESP += 8; return;
}

/* FUN_10006960 @ 0x120a6960 (131 bytes, 48 insns) */
void f_120a6960(void) {
  FTRACE(0x120a6960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6960 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6961 mov ebp, esp */
  EBP = (ESP);
  /* 120a6963 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6966 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6967 push esi */
  push32((uint32_t)(ESI));
  /* 120a6968 push edi */
  push32((uint32_t)(EDI));
  /* 120a6969 push ecx */
  push32((uint32_t)(ECX));
  /* 120a696a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 120a696d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 120a6972 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6977 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6979 pop ecx */
  ECX = (pop32());
  /* 120a697a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a697d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a6984 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120a698b jmp 0x120a6996 */
  goto L_120a6996;
L_120a698d:;
  /* 120a698d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120a6990 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6993 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120a6996:;
  /* 120a6996 cmp dword ptr [ebp - 0xc], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a699a jge 0x120a69c9 */
  if ((C.sf==C.of)) goto L_120a69c9;
  /* 120a699c mov esi, esp */
  ESI = (ESP);
  /* 120a699e mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 120a69a1 push ecx */
  push32((uint32_t)(ECX));
  /* 120a69a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a69a5 push edx */
  push32((uint32_t)(EDX));
  /* 120a69a6 call dword ptr [0x120e3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3504))), 0x120a69acu);
  /* 120a69ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a69af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a69b1 call 0x120aa8e0 */
  push32(0x120a69b6u); f_120aa8e0();
  /* 120a69b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a69b8 jle 0x120a69c7 */
  if ((C.zf||C.sf!=C.of)) goto L_120a69c7;
  /* 120a69ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120a69bd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120a69c0 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
L_120a69c7:;
  /* 120a69c7 jmp 0x120a698d */
  goto L_120a698d;
L_120a69c9:;
  /* 120a69c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a69cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a69cf mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 120a69d2 pop edi */
  EDI = (pop32());
  /* 120a69d3 pop esi */
  ESI = (pop32());
  /* 120a69d4 pop ebx */
  EBX = (pop32());
  /* 120a69d5 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a69d8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a69da call 0x120aa8e0 */
  push32(0x120a69dfu); f_120aa8e0();
  /* 120a69df mov esp, ebp */
  ESP = (EBP);
  /* 120a69e1 pop ebp */
  EBP = (pop32());
  /* 120a69e2 ret  */
  ESPCHK(0x120a6960u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a10 @ 0x120a6a10 (47 bytes, 22 insns) */
void f_120a6a10(void) {
  FTRACE(0x120a6a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6a10 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6a11 mov ebp, esp */
  EBP = (ESP);
  /* 120a6a13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6a16 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6a17 push esi */
  push32((uint32_t)(ESI));
  /* 120a6a18 push edi */
  push32((uint32_t)(EDI));
  /* 120a6a19 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6a1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a6a1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6a22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6a27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6a29 pop ecx */
  ECX = (pop32());
  /* 120a6a2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6a2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6a30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6a33 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 120a6a36 pop edi */
  EDI = (pop32());
  /* 120a6a37 pop esi */
  ESI = (pop32());
  /* 120a6a38 pop ebx */
  EBX = (pop32());
  /* 120a6a39 mov esp, ebp */
  ESP = (EBP);
  /* 120a6a3b pop ebp */
  EBP = (pop32());
  /* 120a6a3c ret 4 */
  ESPCHK(0x120a6a10u, _esp0);
  ESP += 8; return;
}

/* FUN_10006a50 @ 0x120a6a50 (65 bytes, 28 insns) */
void f_120a6a50(void) {
  FTRACE(0x120a6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6a51 mov ebp, esp */
  EBP = (ESP);
  /* 120a6a53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6a56 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6a57 push esi */
  push32((uint32_t)(ESI));
  /* 120a6a58 push edi */
  push32((uint32_t)(EDI));
  /* 120a6a59 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6a5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a6a5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6a62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6a67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6a69 pop ecx */
  ECX = (pop32());
  /* 120a6a6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6a6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6a70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6a73 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 120a6a76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6a79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a6a7c mov dword ptr [edx + 0x1c], eax */
  w32((uint32_t)(EDX + 0x1c), (EAX));
  /* 120a6a7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6a82 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120a6a85 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 120a6a88 pop edi */
  EDI = (pop32());
  /* 120a6a89 pop esi */
  ESI = (pop32());
  /* 120a6a8a pop ebx */
  EBX = (pop32());
  /* 120a6a8b mov esp, ebp */
  ESP = (EBP);
  /* 120a6a8d pop ebp */
  EBP = (pop32());
  /* 120a6a8e ret 0xc */
  ESPCHK(0x120a6a50u, _esp0);
  ESP += 16; return;
}

/* FUN_10006ab0 @ 0x120a6ab0 (166 bytes, 58 insns) */
void f_120a6ab0(void) {
  FTRACE(0x120a6ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6ab1 mov ebp, esp */
  EBP = (ESP);
  /* 120a6ab3 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6ab7 push esi */
  push32((uint32_t)(ESI));
  /* 120a6ab8 push edi */
  push32((uint32_t)(EDI));
  /* 120a6ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6aba lea edi, [ebp - 0x70] */
  EDI = ((uint32_t)(EBP + -0x70));
  /* 120a6abd mov ecx, 0x1c */
  ECX = (0x1cu);
  /* 120a6ac2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6ac7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6ac9 pop ecx */
  ECX = (pop32());
  /* 120a6aca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6acd mov esi, esp */
  ESI = (ESP);
  /* 120a6acf lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 120a6ad2 push eax */
  push32((uint32_t)(EAX));
  /* 120a6ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a6ad5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6ad8 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6ad9 call dword ptr [0x120e35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b4))), 0x120a6adfu);
  /* 120a6adf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6ae2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6ae4 call 0x120aa8e0 */
  push32(0x120a6ae9u); f_120aa8e0();
  /* 120a6ae9 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120a6aec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120a6af2 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6af5 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 120a6af8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a6afd cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6aff jge 0x120a6b0d */
  if ((C.sf==C.of)) goto L_120a6b0d;
  /* 120a6b01 mov cx, word ptr [ebp - 0x2c] */
  CX = (r16((uint32_t)(EBP + -0x2c)));
  /* 120a6b05 add cx, word ptr [ebp + 8] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EBP + 0x8))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 120a6b09 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_120a6b0d:;
  /* 120a6b0d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120a6b10 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120a6b16 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6b19 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 120a6b1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a6b21 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6b23 jl 0x120a6b2d */
  if ((C.sf!=C.of)) goto L_120a6b2d;
  /* 120a6b25 mov cx, word ptr [ebp - 0x2a] */
  CX = (r16((uint32_t)(EBP + -0x2a)));
  /* 120a6b29 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_120a6b2d:;
  /* 120a6b2d mov esi, esp */
  ESI = (ESP);
  /* 120a6b2f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 120a6b32 push edx */
  push32((uint32_t)(EDX));
  /* 120a6b33 call dword ptr [0x120e34f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34f4))), 0x120a6b39u);
  /* 120a6b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6b3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6b3e call 0x120aa8e0 */
  push32(0x120a6b43u); f_120aa8e0();
  /* 120a6b43 pop edi */
  EDI = (pop32());
  /* 120a6b44 pop esi */
  ESI = (pop32());
  /* 120a6b45 pop ebx */
  EBX = (pop32());
  /* 120a6b46 add esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6b49 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6b4b call 0x120aa8e0 */
  push32(0x120a6b50u); f_120aa8e0();
  /* 120a6b50 mov esp, ebp */
  ESP = (EBP);
  /* 120a6b52 pop ebp */
  EBP = (pop32());
  /* 120a6b53 ret 4 */
  ESPCHK(0x120a6ab0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006b80 @ 0x120a6b80 (114 bytes, 42 insns) */
void f_120a6b80(void) {
  FTRACE(0x120a6b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6b80 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6b81 mov ebp, esp */
  EBP = (ESP);
  /* 120a6b83 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6b86 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6b87 push esi */
  push32((uint32_t)(ESI));
  /* 120a6b88 push edi */
  push32((uint32_t)(EDI));
  /* 120a6b89 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6b8a lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 120a6b8d mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 120a6b92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6b97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6b99 pop ecx */
  ECX = (pop32());
  /* 120a6b9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6b9d mov esi, esp */
  ESI = (ESP);
  /* 120a6b9f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 120a6ba2 push eax */
  push32((uint32_t)(EAX));
  /* 120a6ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a6ba5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6ba9 call dword ptr [0x120e35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b4))), 0x120a6bafu);
  /* 120a6baf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6bb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6bb4 call 0x120aa8e0 */
  push32(0x120a6bb9u); f_120aa8e0();
  /* 120a6bb9 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120a6bbc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120a6bc2 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 120a6bc5 fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 120a6bc8 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 120a6bcb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a6bd0 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 120a6bd3 fidiv dword ptr [ebp - 0x38] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 120a6bd6 fmul dword ptr [0x120db050] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(0x120db050)));
  /* 120a6bdc call 0x120aabcc */
  push32(0x120a6be1u); f_120aabcc();
  /* 120a6be1 pop edi */
  EDI = (pop32());
  /* 120a6be2 pop esi */
  ESI = (pop32());
  /* 120a6be3 pop ebx */
  EBX = (pop32());
  /* 120a6be4 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6be7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6be9 call 0x120aa8e0 */
  push32(0x120a6beeu); f_120aa8e0();
  /* 120a6bee mov esp, ebp */
  ESP = (EBP);
  /* 120a6bf0 pop ebp */
  EBP = (pop32());
  /* 120a6bf1 ret  */
  ESPCHK(0x120a6b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c10 @ 0x120a6c10 (94 bytes, 37 insns) */
void f_120a6c10(void) {
  FTRACE(0x120a6c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6c10 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6c11 mov ebp, esp */
  EBP = (ESP);
  /* 120a6c13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6c16 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6c17 push esi */
  push32((uint32_t)(ESI));
  /* 120a6c18 push edi */
  push32((uint32_t)(EDI));
  /* 120a6c19 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6c1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a6c1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6c22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6c27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6c29 pop ecx */
  ECX = (pop32());
  /* 120a6c2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6c2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6c30 call 0x120a1195 */
  push32(0x120a6c35u); f_120a1195();
  /* 120a6c35 mov esi, esp */
  ESI = (ESP);
  /* 120a6c37 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 120a6c3a push eax */
  push32((uint32_t)(EAX));
  /* 120a6c3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6c3e mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 120a6c41 push edx */
  push32((uint32_t)(EDX));
  /* 120a6c42 call dword ptr [0x120e34f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34f0))), 0x120a6c48u);
  /* 120a6c48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6c4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6c4d call 0x120aa8e0 */
  push32(0x120a6c52u); f_120aa8e0();
  /* 120a6c52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6c55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6c58 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 120a6c5b pop edi */
  EDI = (pop32());
  /* 120a6c5c pop esi */
  ESI = (pop32());
  /* 120a6c5d pop ebx */
  EBX = (pop32());
  /* 120a6c5e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6c61 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6c63 call 0x120aa8e0 */
  push32(0x120a6c68u); f_120aa8e0();
  /* 120a6c68 mov esp, ebp */
  ESP = (EBP);
  /* 120a6c6a pop ebp */
  EBP = (pop32());
  /* 120a6c6b ret 4 */
  ESPCHK(0x120a6c10u, _esp0);
  ESP += 8; return;
}

/* FUN_10006c90 @ 0x120a6c90 (39 bytes, 20 insns) */
void f_120a6c90(void) {
  FTRACE(0x120a6c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6c90 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6c91 mov ebp, esp */
  EBP = (ESP);
  /* 120a6c93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6c96 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6c97 push esi */
  push32((uint32_t)(ESI));
  /* 120a6c98 push edi */
  push32((uint32_t)(EDI));
  /* 120a6c99 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6c9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a6c9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6ca2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6ca7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6ca9 pop ecx */
  ECX = (pop32());
  /* 120a6caa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6cb0 pop edi */
  EDI = (pop32());
  /* 120a6cb1 pop esi */
  ESI = (pop32());
  /* 120a6cb2 pop ebx */
  EBX = (pop32());
  /* 120a6cb3 mov esp, ebp */
  ESP = (EBP);
  /* 120a6cb5 pop ebp */
  EBP = (pop32());
  /* 120a6cb6 ret  */
  ESPCHK(0x120a6c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x120a6cc0 (98 bytes, 39 insns) */
void f_120a6cc0(void) {
  FTRACE(0x120a6cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6cc1 mov ebp, esp */
  EBP = (ESP);
  /* 120a6cc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6cc7 push esi */
  push32((uint32_t)(ESI));
  /* 120a6cc8 push edi */
  push32((uint32_t)(EDI));
  /* 120a6cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6cca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a6ccd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6cd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6cd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6cd9 pop ecx */
  ECX = (pop32());
  /* 120a6cda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6cdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6ce0 call 0x120a1195 */
  push32(0x120a6ce5u); f_120a1195();
  /* 120a6ce5 mov esi, esp */
  ESI = (ESP);
  /* 120a6ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a6ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a6ceb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6cee push eax */
  push32((uint32_t)(EAX));
  /* 120a6cef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6cf2 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 120a6cf5 push edx */
  push32((uint32_t)(EDX));
  /* 120a6cf6 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a6cfcu);
  /* 120a6cfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6cff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6d01 call 0x120aa8e0 */
  push32(0x120a6d06u); f_120aa8e0();
  /* 120a6d06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6d09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6d0c mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 120a6d0f pop edi */
  EDI = (pop32());
  /* 120a6d10 pop esi */
  ESI = (pop32());
  /* 120a6d11 pop ebx */
  EBX = (pop32());
  /* 120a6d12 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6d15 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6d17 call 0x120aa8e0 */
  push32(0x120a6d1cu); f_120aa8e0();
  /* 120a6d1c mov esp, ebp */
  ESP = (EBP);
  /* 120a6d1e pop ebp */
  EBP = (pop32());
  /* 120a6d1f ret 4 */
  ESPCHK(0x120a6cc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006d40 @ 0x120a6d40 (87 bytes, 35 insns) */
void f_120a6d40(void) {
  FTRACE(0x120a6d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6d40 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6d41 mov ebp, esp */
  EBP = (ESP);
  /* 120a6d43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6d46 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6d47 push esi */
  push32((uint32_t)(ESI));
  /* 120a6d48 push edi */
  push32((uint32_t)(EDI));
  /* 120a6d49 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6d4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a6d4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6d52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6d57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6d59 pop ecx */
  ECX = (pop32());
  /* 120a6d5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6d5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6d60 call 0x120a1195 */
  push32(0x120a6d65u); f_120a1195();
  /* 120a6d65 mov esi, esp */
  ESI = (ESP);
  /* 120a6d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a6d69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6d6c push eax */
  push32((uint32_t)(EAX));
  /* 120a6d6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6d70 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 120a6d73 push edx */
  push32((uint32_t)(EDX));
  /* 120a6d74 call dword ptr [0x120e34ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34ec))), 0x120a6d7au);
  /* 120a6d7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6d7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6d7f call 0x120aa8e0 */
  push32(0x120a6d84u); f_120aa8e0();
  /* 120a6d84 pop edi */
  EDI = (pop32());
  /* 120a6d85 pop esi */
  ESI = (pop32());
  /* 120a6d86 pop ebx */
  EBX = (pop32());
  /* 120a6d87 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6d8a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6d8c call 0x120aa8e0 */
  push32(0x120a6d91u); f_120aa8e0();
  /* 120a6d91 mov esp, ebp */
  ESP = (EBP);
  /* 120a6d93 pop ebp */
  EBP = (pop32());
  /* 120a6d94 ret 4 */
  ESPCHK(0x120a6d40u, _esp0);
  ESP += 8; return;
}

/* FUN_10006db0 @ 0x120a6db0 (90 bytes, 37 insns) */
void f_120a6db0(void) {
  FTRACE(0x120a6db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6db0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6db1 mov ebp, esp */
  EBP = (ESP);
  /* 120a6db3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6db6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6db7 push esi */
  push32((uint32_t)(ESI));
  /* 120a6db8 push edi */
  push32((uint32_t)(EDI));
  /* 120a6db9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6dba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a6dbd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a6dc2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6dc7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6dc9 pop ecx */
  ECX = (pop32());
  /* 120a6dca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6dcd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a6dd1 mov esi, esp */
  ESI = (ESP);
  /* 120a6dd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6dd6 push eax */
  push32((uint32_t)(EAX));
  /* 120a6dd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6dda mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 120a6ddd push edx */
  push32((uint32_t)(EDX));
  /* 120a6dde call dword ptr [0x120e359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e359c))), 0x120a6de4u);
  /* 120a6de4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6de7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6de9 call 0x120aa8e0 */
  push32(0x120a6deeu); f_120aa8e0();
  /* 120a6dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a6df0 jle 0x120a6df6 */
  if ((C.zf||C.sf!=C.of)) goto L_120a6df6;
  /* 120a6df2 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a6df6:;
  /* 120a6df6 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a6df9 pop edi */
  EDI = (pop32());
  /* 120a6dfa pop esi */
  ESI = (pop32());
  /* 120a6dfb pop ebx */
  EBX = (pop32());
  /* 120a6dfc add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6dff cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6e01 call 0x120aa8e0 */
  push32(0x120a6e06u); f_120aa8e0();
  /* 120a6e06 mov esp, ebp */
  ESP = (EBP);
  /* 120a6e08 pop ebp */
  EBP = (pop32());
  /* 120a6e09 ret  */
  ESPCHK(0x120a6db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e20 @ 0x120a6e20 (89 bytes, 36 insns) */
void f_120a6e20(void) {
  FTRACE(0x120a6e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6e20 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6e21 mov ebp, esp */
  EBP = (ESP);
  /* 120a6e23 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6e26 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6e27 push esi */
  push32((uint32_t)(ESI));
  /* 120a6e28 push edi */
  push32((uint32_t)(EDI));
  /* 120a6e29 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6e2a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a6e2d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a6e32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6e37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6e39 pop ecx */
  ECX = (pop32());
  /* 120a6e3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6e3d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a6e41 mov esi, esp */
  ESI = (ESP);
  /* 120a6e43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6e46 push eax */
  push32((uint32_t)(EAX));
  /* 120a6e47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6e4a push ecx */
  push32((uint32_t)(ECX));
  /* 120a6e4b call dword ptr [0x120e359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e359c))), 0x120a6e51u);
  /* 120a6e51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6e54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6e56 call 0x120aa8e0 */
  push32(0x120a6e5bu); f_120aa8e0();
  /* 120a6e5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a6e5d jle 0x120a6e63 */
  if ((C.zf||C.sf!=C.of)) goto L_120a6e63;
  /* 120a6e5f mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a6e63:;
  /* 120a6e63 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a6e66 pop edi */
  EDI = (pop32());
  /* 120a6e67 pop esi */
  ESI = (pop32());
  /* 120a6e68 pop ebx */
  EBX = (pop32());
  /* 120a6e69 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6e6c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6e6e call 0x120aa8e0 */
  push32(0x120a6e73u); f_120aa8e0();
  /* 120a6e73 mov esp, ebp */
  ESP = (EBP);
  /* 120a6e75 pop ebp */
  EBP = (pop32());
  /* 120a6e76 ret 4 */
  ESPCHK(0x120a6e20u, _esp0);
  ESP += 8; return;
}

/* FUN_10006e90 @ 0x120a6e90 (47 bytes, 22 insns) */
void f_120a6e90(void) {
  FTRACE(0x120a6e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6e90 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6e91 mov ebp, esp */
  EBP = (ESP);
  /* 120a6e93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6e96 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6e97 push esi */
  push32((uint32_t)(ESI));
  /* 120a6e98 push edi */
  push32((uint32_t)(EDI));
  /* 120a6e99 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6e9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a6e9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6ea2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6ea7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6ea9 pop ecx */
  ECX = (pop32());
  /* 120a6eaa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6ead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6eb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6eb3 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 120a6eb6 pop edi */
  EDI = (pop32());
  /* 120a6eb7 pop esi */
  ESI = (pop32());
  /* 120a6eb8 pop ebx */
  EBX = (pop32());
  /* 120a6eb9 mov esp, ebp */
  ESP = (EBP);
  /* 120a6ebb pop ebp */
  EBP = (pop32());
  /* 120a6ebc ret 4 */
  ESPCHK(0x120a6e90u, _esp0);
  ESP += 8; return;
}

/* FUN_10006ed0 @ 0x120a6ed0 (81 bytes, 33 insns) */
void f_120a6ed0(void) {
  FTRACE(0x120a6ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6ed1 mov ebp, esp */
  EBP = (ESP);
  /* 120a6ed3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6ed6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6ed7 push esi */
  push32((uint32_t)(ESI));
  /* 120a6ed8 push edi */
  push32((uint32_t)(EDI));
  /* 120a6ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6eda lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a6edd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6ee2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6ee7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6ee9 pop ecx */
  ECX = (pop32());
  /* 120a6eea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6eed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6ef0 call 0x120a1195 */
  push32(0x120a6ef5u); f_120a1195();
  /* 120a6ef5 mov esi, esp */
  ESI = (ESP);
  /* 120a6ef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120a6ef9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6efc mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 120a6eff push ecx */
  push32((uint32_t)(ECX));
  /* 120a6f00 call dword ptr [0x120e358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e358c))), 0x120a6f06u);
  /* 120a6f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6f09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6f0b call 0x120aa8e0 */
  push32(0x120a6f10u); f_120aa8e0();
  /* 120a6f10 pop edi */
  EDI = (pop32());
  /* 120a6f11 pop esi */
  ESI = (pop32());
  /* 120a6f12 pop ebx */
  EBX = (pop32());
  /* 120a6f13 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6f16 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6f18 call 0x120aa8e0 */
  push32(0x120a6f1du); f_120aa8e0();
  /* 120a6f1d mov esp, ebp */
  ESP = (EBP);
  /* 120a6f1f pop ebp */
  EBP = (pop32());
  /* 120a6f20 ret  */
  ESPCHK(0x120a6ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f40 @ 0x120a6f40 (99 bytes, 38 insns) */
void f_120a6f40(void) {
  FTRACE(0x120a6f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6f40 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6f41 mov ebp, esp */
  EBP = (ESP);
  /* 120a6f43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6f46 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6f47 push esi */
  push32((uint32_t)(ESI));
  /* 120a6f48 push edi */
  push32((uint32_t)(EDI));
  /* 120a6f49 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6f4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a6f4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6f52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6f57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6f59 pop ecx */
  ECX = (pop32());
  /* 120a6f5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6f5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6f60 call 0x120a1023 */
  push32(0x120a6f65u); f_120a1023();
  /* 120a6f65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a6f6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a6f6c je 0x120a6f92 */
  if (C.zf) goto L_120a6f92;
  /* 120a6f6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6f71 call 0x120a1285 */
  push32(0x120a6f76u); f_120a1285();
  /* 120a6f76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6f79 call 0x120a10a0 */
  push32(0x120a6f7eu); f_120a10a0();
  /* 120a6f7e cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6f81 jge 0x120a6f92 */
  if ((C.sf==C.of)) goto L_120a6f92;
  /* 120a6f83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6f86 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 120a6f89 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6f8d call 0x120a122b */
  push32(0x120a6f92u); f_120a122b();
L_120a6f92:;
  /* 120a6f92 pop edi */
  EDI = (pop32());
  /* 120a6f93 pop esi */
  ESI = (pop32());
  /* 120a6f94 pop ebx */
  EBX = (pop32());
  /* 120a6f95 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6f98 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6f9a call 0x120aa8e0 */
  push32(0x120a6f9fu); f_120aa8e0();
  /* 120a6f9f mov esp, ebp */
  ESP = (EBP);
  /* 120a6fa1 pop ebp */
  EBP = (pop32());
  /* 120a6fa2 ret  */
  ESPCHK(0x120a6f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fc0 @ 0x120a6fc0 (76 bytes, 32 insns) */
void f_120a6fc0(void) {
  FTRACE(0x120a6fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a6fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a6fc1 mov ebp, esp */
  EBP = (ESP);
  /* 120a6fc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a6fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a6fc7 push esi */
  push32((uint32_t)(ESI));
  /* 120a6fc8 push edi */
  push32((uint32_t)(EDI));
  /* 120a6fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6fca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a6fcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a6fd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a6fd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a6fd9 pop ecx */
  ECX = (pop32());
  /* 120a6fda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a6fdd mov esi, esp */
  ESI = (ESP);
  /* 120a6fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 120a6fe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a6fe4 push eax */
  push32((uint32_t)(EAX));
  /* 120a6fe5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a6fe8 push ecx */
  push32((uint32_t)(ECX));
  /* 120a6fe9 call dword ptr [0x120e3594] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3594))), 0x120a6fefu);
  /* 120a6fef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6ff2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a6ff4 call 0x120aa8e0 */
  push32(0x120a6ff9u); f_120aa8e0();
  /* 120a6ff9 pop edi */
  EDI = (pop32());
  /* 120a6ffa pop esi */
  ESI = (pop32());
  /* 120a6ffb pop ebx */
  EBX = (pop32());
  /* 120a6ffc add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a6fff cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7001 call 0x120aa8e0 */
  push32(0x120a7006u); f_120aa8e0();
  /* 120a7006 mov esp, ebp */
  ESP = (EBP);
  /* 120a7008 pop ebp */
  EBP = (pop32());
  /* 120a7009 ret 4 */
  ESPCHK(0x120a6fc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007020 @ 0x120a7020 (95 bytes, 37 insns) */
void f_120a7020(void) {
  FTRACE(0x120a7020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7020 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7021 mov ebp, esp */
  EBP = (ESP);
  /* 120a7023 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7026 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7027 push esi */
  push32((uint32_t)(ESI));
  /* 120a7028 push edi */
  push32((uint32_t)(EDI));
  /* 120a7029 push ecx */
  push32((uint32_t)(ECX));
  /* 120a702a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a702d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a7032 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7037 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7039 pop ecx */
  ECX = (pop32());
  /* 120a703a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a703d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a7041 mov esi, esp */
  ESI = (ESP);
  /* 120a7043 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a7045 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 120a704a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a704d call 0x120a12d5 */
  push32(0x120a7052u); f_120a12d5();
  /* 120a7052 push eax */
  push32((uint32_t)(EAX));
  /* 120a7053 call dword ptr [0x120e3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3584))), 0x120a7059u);
  /* 120a7059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a705c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a705e call 0x120aa8e0 */
  push32(0x120a7063u); f_120aa8e0();
  /* 120a7063 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a7065 jle 0x120a706b */
  if ((C.zf||C.sf!=C.of)) goto L_120a706b;
  /* 120a7067 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a706b:;
  /* 120a706b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a706e pop edi */
  EDI = (pop32());
  /* 120a706f pop esi */
  ESI = (pop32());
  /* 120a7070 pop ebx */
  EBX = (pop32());
  /* 120a7071 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7074 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7076 call 0x120aa8e0 */
  push32(0x120a707bu); f_120aa8e0();
  /* 120a707b mov esp, ebp */
  ESP = (EBP);
  /* 120a707d pop ebp */
  EBP = (pop32());
  /* 120a707e ret  */
  ESPCHK(0x120a7020u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x120a70a0 (47 bytes, 22 insns) */
void f_120a70a0(void) {
  FTRACE(0x120a70a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a70a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a70a1 mov ebp, esp */
  EBP = (ESP);
  /* 120a70a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a70a6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a70a7 push esi */
  push32((uint32_t)(ESI));
  /* 120a70a8 push edi */
  push32((uint32_t)(EDI));
  /* 120a70a9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a70aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a70ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a70b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a70b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a70b9 pop ecx */
  ECX = (pop32());
  /* 120a70ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a70bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a70c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a70c3 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 120a70c6 pop edi */
  EDI = (pop32());
  /* 120a70c7 pop esi */
  ESI = (pop32());
  /* 120a70c8 pop ebx */
  EBX = (pop32());
  /* 120a70c9 mov esp, ebp */
  ESP = (EBP);
  /* 120a70cb pop ebp */
  EBP = (pop32());
  /* 120a70cc ret 4 */
  ESPCHK(0x120a70a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100070e0 @ 0x120a70e0 (64 bytes, 27 insns) */
void f_120a70e0(void) {
  FTRACE(0x120a70e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a70e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a70e1 mov ebp, esp */
  EBP = (ESP);
  /* 120a70e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a70e6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a70e7 push esi */
  push32((uint32_t)(ESI));
  /* 120a70e8 push edi */
  push32((uint32_t)(EDI));
  /* 120a70e9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a70ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a70ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a70f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a70f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a70f9 pop ecx */
  ECX = (pop32());
  /* 120a70fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a70fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7100 call 0x120a11f9 */
  push32(0x120a7105u); f_120a11f9();
  /* 120a7105 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7108 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 120a710c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a710f pop edi */
  EDI = (pop32());
  /* 120a7110 pop esi */
  ESI = (pop32());
  /* 120a7111 pop ebx */
  EBX = (pop32());
  /* 120a7112 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7115 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7117 call 0x120aa8e0 */
  push32(0x120a711cu); f_120aa8e0();
  /* 120a711c mov esp, ebp */
  ESP = (EBP);
  /* 120a711e pop ebp */
  EBP = (pop32());
  /* 120a711f ret  */
  ESPCHK(0x120a70e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007130 @ 0x120a7130 (57 bytes, 25 insns) */
void f_120a7130(void) {
  FTRACE(0x120a7130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7130 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7131 mov ebp, esp */
  EBP = (ESP);
  /* 120a7133 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7136 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7137 push esi */
  push32((uint32_t)(ESI));
  /* 120a7138 push edi */
  push32((uint32_t)(EDI));
  /* 120a7139 push ecx */
  push32((uint32_t)(ECX));
  /* 120a713a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a713d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7142 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7147 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7149 pop ecx */
  ECX = (pop32());
  /* 120a714a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a714d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7150 call 0x120a128f */
  push32(0x120a7155u); f_120a128f();
  /* 120a7155 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7158 pop edi */
  EDI = (pop32());
  /* 120a7159 pop esi */
  ESI = (pop32());
  /* 120a715a pop ebx */
  EBX = (pop32());
  /* 120a715b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a715e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7160 call 0x120aa8e0 */
  push32(0x120a7165u); f_120aa8e0();
  /* 120a7165 mov esp, ebp */
  ESP = (EBP);
  /* 120a7167 pop ebp */
  EBP = (pop32());
  /* 120a7168 ret  */
  ESPCHK(0x120a7130u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x120a7180 (56 bytes, 25 insns) */
void f_120a7180(void) {
  FTRACE(0x120a7180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7180 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7181 mov ebp, esp */
  EBP = (ESP);
  /* 120a7183 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7186 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7187 push esi */
  push32((uint32_t)(ESI));
  /* 120a7188 push edi */
  push32((uint32_t)(EDI));
  /* 120a7189 push ecx */
  push32((uint32_t)(ECX));
  /* 120a718a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a718d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7192 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7197 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7199 pop ecx */
  ECX = (pop32());
  /* 120a719a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a719d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a71a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a71a3 mov dword ptr [eax + 0x24], ecx */
  w32((uint32_t)(EAX + 0x24), (ECX));
  /* 120a71a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a71a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a71ac mov dword ptr [edx + 0x28], eax */
  w32((uint32_t)(EDX + 0x28), (EAX));
  /* 120a71af pop edi */
  EDI = (pop32());
  /* 120a71b0 pop esi */
  ESI = (pop32());
  /* 120a71b1 pop ebx */
  EBX = (pop32());
  /* 120a71b2 mov esp, ebp */
  ESP = (EBP);
  /* 120a71b4 pop ebp */
  EBP = (pop32());
  /* 120a71b5 ret 8 */
  ESPCHK(0x120a7180u, _esp0);
  ESP += 12; return;
}

/* FUN_100071d0 @ 0x120a71d0 (566 bytes, 177 insns) [1 switch table(s)] */
void f_120a71d0(void) {
  FTRACE(0x120a71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a71d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a71d1 mov ebp, esp */
  EBP = (ESP);
  /* 120a71d3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a71d6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a71d7 push esi */
  push32((uint32_t)(ESI));
  /* 120a71d8 push edi */
  push32((uint32_t)(EDI));
  /* 120a71d9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a71da lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 120a71dd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 120a71e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a71e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a71e9 pop ecx */
  ECX = (pop32());
  /* 120a71ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a71ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a71f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120a71f2 mov cl, byte ptr [eax + 0x2c] */
  CL = (r8((uint32_t)(EAX + 0x2c)));
  /* 120a71f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120a71f7 je 0x120a73f5 */
  if (C.zf) goto L_120a73f5;
  /* 120a71fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7200 call 0x120a1023 */
  push32(0x120a7205u); f_120a1023();
  /* 120a7205 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a720a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a720c je 0x120a73f5 */
  if (C.zf) goto L_120a73f5;
  /* 120a7212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7215 cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7219 je 0x120a73f5 */
  if (C.zf) goto L_120a73f5;
  /* 120a721f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7222 cmp dword ptr [eax + 0x10], 6 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7226 je 0x120a726d */
  if (C.zf) goto L_120a726d;
  /* 120a7228 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a722b call 0x120a10a0 */
  push32(0x120a7230u); f_120a10a0();
  /* 120a7230 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7233 jge 0x120a723d */
  if ((C.sf==C.of)) goto L_120a723d;
  /* 120a7235 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7238 call 0x120a12a3 */
  push32(0x120a723du); f_120a12a3();
L_120a723d:;
  /* 120a723d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7240 call 0x120a12a8 */
  push32(0x120a7245u); f_120a12a8();
  /* 120a7245 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a724a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a724c je 0x120a7268 */
  if (C.zf) goto L_120a7268;
  /* 120a724e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7251 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7255 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 120a7258 push eax */
  push32((uint32_t)(EAX));
  /* 120a7259 call 0x120a12d0 */
  push32(0x120a725eu); f_120a12d0();
  /* 120a725e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7261 mov ecx, eax */
  ECX = (EAX);
  /* 120a7263 call 0x120a11ef */
  push32(0x120a7268u); f_120a11ef();
L_120a7268:;
  /* 120a7268 jmp 0x120a73f5 */
  goto L_120a73f5;
L_120a726d:;
  /* 120a726d mov esi, esp */
  ESI = (ESP);
  /* 120a726f push 0 */
  push32((uint32_t)(0x0u));
  /* 120a7271 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 120a7276 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7279 call 0x120a12d5 */
  push32(0x120a727eu); f_120a12d5();
  /* 120a727e push eax */
  push32((uint32_t)(EAX));
  /* 120a727f call dword ptr [0x120e3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3584))), 0x120a7285u);
  /* 120a7285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7288 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a728a call 0x120aa8e0 */
  push32(0x120a728fu); f_120aa8e0();
  /* 120a728f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a7291 jle 0x120a73f5 */
  if ((C.zf||C.sf!=C.of)) goto L_120a73f5;
  /* 120a7297 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a729a cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a729e je 0x120a73f5 */
  if (C.zf) goto L_120a73f5;
  /* 120a72a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a72a7 mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 120a72aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120a72ad cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a72b1 ja 0x120a7382 */
  if ((!C.cf&&!C.zf)) goto L_120a7382;
  /* 120a72b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a72ba jmp dword ptr [ecx*4 + 0x120a7406] */
  switch (ECX) {
    case 0: goto L_120a72c1;
    case 1: goto L_120a72e4;
    case 2: goto L_120a7304;
    case 3: goto L_120a7324;
    case 4: goto L_120a7344;
    case 5: goto L_120a7364;
    default: x86_unimpl("switch@0x120a72ba out of table"); return;
  }
L_120a72c1:;
  /* 120a72c1 mov esi, esp */
  ESI = (ESP);
  /* 120a72c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a72c6 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 120a72c9 push eax */
  push32((uint32_t)(EAX));
  /* 120a72ca push 0x120db2b0 */
  push32((uint32_t)(0x120db2b0u));
  /* 120a72cf call dword ptr [0x120e34e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34e4))), 0x120a72d5u);
  /* 120a72d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a72d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a72da call 0x120aa8e0 */
  push32(0x120a72dfu); f_120aa8e0();
  /* 120a72df jmp 0x120a7382 */
  goto L_120a7382;
L_120a72e4:;
  /* 120a72e4 mov esi, esp */
  ESI = (ESP);
  /* 120a72e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a72e9 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 120a72ec push edx */
  push32((uint32_t)(EDX));
  /* 120a72ed push 0x120db2a4 */
  push32((uint32_t)(0x120db2a4u));
  /* 120a72f2 call dword ptr [0x120e34e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34e4))), 0x120a72f8u);
  /* 120a72f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a72fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a72fd call 0x120aa8e0 */
  push32(0x120a7302u); f_120aa8e0();
  /* 120a7302 jmp 0x120a7382 */
  goto L_120a7382;
L_120a7304:;
  /* 120a7304 mov esi, esp */
  ESI = (ESP);
  /* 120a7306 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7309 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 120a730c push ecx */
  push32((uint32_t)(ECX));
  /* 120a730d push 0x120db298 */
  push32((uint32_t)(0x120db298u));
  /* 120a7312 call dword ptr [0x120e34e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34e4))), 0x120a7318u);
  /* 120a7318 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a731b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a731d call 0x120aa8e0 */
  push32(0x120a7322u); f_120aa8e0();
  /* 120a7322 jmp 0x120a7382 */
  goto L_120a7382;
L_120a7324:;
  /* 120a7324 mov esi, esp */
  ESI = (ESP);
  /* 120a7326 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7329 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 120a732c push eax */
  push32((uint32_t)(EAX));
  /* 120a732d push 0x120db28c */
  push32((uint32_t)(0x120db28cu));
  /* 120a7332 call dword ptr [0x120e34e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34e4))), 0x120a7338u);
  /* 120a7338 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a733b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a733d call 0x120aa8e0 */
  push32(0x120a7342u); f_120aa8e0();
  /* 120a7342 jmp 0x120a7382 */
  goto L_120a7382;
L_120a7344:;
  /* 120a7344 mov esi, esp */
  ESI = (ESP);
  /* 120a7346 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7349 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 120a734c push edx */
  push32((uint32_t)(EDX));
  /* 120a734d push 0x120db280 */
  push32((uint32_t)(0x120db280u));
  /* 120a7352 call dword ptr [0x120e34e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34e4))), 0x120a7358u);
  /* 120a7358 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a735b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a735d call 0x120aa8e0 */
  push32(0x120a7362u); f_120aa8e0();
  /* 120a7362 jmp 0x120a7382 */
  goto L_120a7382;
L_120a7364:;
  /* 120a7364 mov esi, esp */
  ESI = (ESP);
  /* 120a7366 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7369 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 120a736c push ecx */
  push32((uint32_t)(ECX));
  /* 120a736d push 0x120db274 */
  push32((uint32_t)(0x120db274u));
  /* 120a7372 call dword ptr [0x120e34e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34e4))), 0x120a7378u);
  /* 120a7378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a737b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a737d call 0x120aa8e0 */
  push32(0x120a7382u); f_120aa8e0();
L_120a7382:;
  /* 120a7382 mov esi, esp */
  ESI = (ESP);
  /* 120a7384 push 0x120db264 */
  push32((uint32_t)(0x120db264u));
  /* 120a7389 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a738b push 0x120db25c */
  push32((uint32_t)(0x120db25cu));
  /* 120a7390 push 7 */
  push32((uint32_t)(0x7u));
  /* 120a7392 call dword ptr [0x120e34e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34e8))), 0x120a7398u);
  /* 120a7398 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a739b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a739d call 0x120aa8e0 */
  push32(0x120a73a2u); f_120aa8e0();
  /* 120a73a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120a73a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a73a9 je 0x120a73b3 */
  if (C.zf) goto L_120a73b3;
  /* 120a73ab cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a73af je 0x120a73bf */
  if (C.zf) goto L_120a73bf;
  /* 120a73b1 jmp 0x120a73c7 */
  goto L_120a73c7;
L_120a73b3:;
  /* 120a73b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a73b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a73b8 call 0x120a1127 */
  push32(0x120a73bdu); f_120a1127();
  /* 120a73bd jmp 0x120a73c7 */
  goto L_120a73c7;
L_120a73bf:;
  /* 120a73bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a73c2 call 0x120a1154 */
  push32(0x120a73c7u); f_120a1154();
L_120a73c7:;
  /* 120a73c7 mov esi, esp */
  ESI = (ESP);
  /* 120a73c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a73cc mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 120a73cf push eax */
  push32((uint32_t)(EAX));
  /* 120a73d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a73d3 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 120a73d6 push edx */
  push32((uint32_t)(EDX));
  /* 120a73d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a73d9 call dword ptr [0x120e3544] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3544))), 0x120a73dfu);
  /* 120a73df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a73e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a73e4 call 0x120aa8e0 */
  push32(0x120a73e9u); f_120aa8e0();
  /* 120a73e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a73eb push 0 */
  push32((uint32_t)(0x0u));
  /* 120a73ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a73f0 call 0x120a11cc */
  push32(0x120a73f5u); f_120a11cc();
L_120a73f5:;
  /* 120a73f5 pop edi */
  EDI = (pop32());
  /* 120a73f6 pop esi */
  ESI = (pop32());
  /* 120a73f7 pop ebx */
  EBX = (pop32());
  /* 120a73f8 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a73fb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a73fd call 0x120aa8e0 */
  push32(0x120a7402u); f_120aa8e0();
  /* 120a7402 mov esp, ebp */
  ESP = (EBP);
  /* 120a7404 pop ebp */
  EBP = (pop32());
  /* 120a7405 ret  */
  ESPCHK(0x120a71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074c0 @ 0x120a74c0 (112 bytes, 43 insns) */
void f_120a74c0(void) {
  FTRACE(0x120a74c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a74c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a74c1 mov ebp, esp */
  EBP = (ESP);
  /* 120a74c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a74c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a74c7 push esi */
  push32((uint32_t)(ESI));
  /* 120a74c8 push edi */
  push32((uint32_t)(EDI));
  /* 120a74c9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a74ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a74cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a74d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a74d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a74d9 pop ecx */
  ECX = (pop32());
  /* 120a74da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a74dd push 6 */
  push32((uint32_t)(0x6u));
  /* 120a74df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a74e2 call 0x120a1127 */
  push32(0x120a74e7u); f_120a1127();
  /* 120a74e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a74ea call 0x120a1195 */
  push32(0x120a74efu); f_120a1195();
  /* 120a74ef mov esi, esp */
  ESI = (ESP);
  /* 120a74f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a74f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a74f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 120a74f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a74fa call 0x120a12d5 */
  push32(0x120a74ffu); f_120a12d5();
  /* 120a74ff push eax */
  push32((uint32_t)(EAX));
  /* 120a7500 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7503 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 120a7506 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7507 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a750du);
  /* 120a750d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7510 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7512 call 0x120aa8e0 */
  push32(0x120a7517u); f_120aa8e0();
  /* 120a7517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a751a call 0x120a12c6 */
  push32(0x120a751fu); f_120a12c6();
  /* 120a751f pop edi */
  EDI = (pop32());
  /* 120a7520 pop esi */
  ESI = (pop32());
  /* 120a7521 pop ebx */
  EBX = (pop32());
  /* 120a7522 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7525 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7527 call 0x120aa8e0 */
  push32(0x120a752cu); f_120aa8e0();
  /* 120a752c mov esp, ebp */
  ESP = (EBP);
  /* 120a752e pop ebp */
  EBP = (pop32());
  /* 120a752f ret  */
  ESPCHK(0x120a74c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x120a7550 (75 bytes, 32 insns) */
void f_120a7550(void) {
  FTRACE(0x120a7550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7550 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7551 mov ebp, esp */
  EBP = (ESP);
  /* 120a7553 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7556 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7557 push esi */
  push32((uint32_t)(ESI));
  /* 120a7558 push edi */
  push32((uint32_t)(EDI));
  /* 120a7559 push ecx */
  push32((uint32_t)(ECX));
  /* 120a755a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a755d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7562 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7567 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7569 pop ecx */
  ECX = (pop32());
  /* 120a756a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a756d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120a7570 push eax */
  push32((uint32_t)(EAX));
  /* 120a7571 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a7574 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7575 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a7578 push edx */
  push32((uint32_t)(EDX));
  /* 120a7579 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a757c call 0x120a1019 */
  push32(0x120a7581u); f_120a1019();
  /* 120a7581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7584 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 120a7588 pop edi */
  EDI = (pop32());
  /* 120a7589 pop esi */
  ESI = (pop32());
  /* 120a758a pop ebx */
  EBX = (pop32());
  /* 120a758b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a758e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7590 call 0x120aa8e0 */
  push32(0x120a7595u); f_120aa8e0();
  /* 120a7595 mov esp, ebp */
  ESP = (EBP);
  /* 120a7597 pop ebp */
  EBP = (pop32());
  /* 120a7598 ret 0xc */
  ESPCHK(0x120a7550u, _esp0);
  ESP += 16; return;
}

/* FUN_100075b0 @ 0x120a75b0 (95 bytes, 37 insns) */
void f_120a75b0(void) {
  FTRACE(0x120a75b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a75b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a75b1 mov ebp, esp */
  EBP = (ESP);
  /* 120a75b3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a75b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a75b7 push esi */
  push32((uint32_t)(ESI));
  /* 120a75b8 push edi */
  push32((uint32_t)(EDI));
  /* 120a75b9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a75ba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a75bd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a75c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a75c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a75c9 pop ecx */
  ECX = (pop32());
  /* 120a75ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a75cd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a75d1 mov esi, esp */
  ESI = (ESP);
  /* 120a75d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a75d5 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 120a75da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a75dd call 0x120a12d5 */
  push32(0x120a75e2u); f_120a12d5();
  /* 120a75e2 push eax */
  push32((uint32_t)(EAX));
  /* 120a75e3 call dword ptr [0x120e3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3584))), 0x120a75e9u);
  /* 120a75e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a75ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a75ee call 0x120aa8e0 */
  push32(0x120a75f3u); f_120aa8e0();
  /* 120a75f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a75f5 jle 0x120a75fb */
  if ((C.zf||C.sf!=C.of)) goto L_120a75fb;
  /* 120a75f7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a75fb:;
  /* 120a75fb mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a75fe pop edi */
  EDI = (pop32());
  /* 120a75ff pop esi */
  ESI = (pop32());
  /* 120a7600 pop ebx */
  EBX = (pop32());
  /* 120a7601 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7604 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7606 call 0x120aa8e0 */
  push32(0x120a760bu); f_120aa8e0();
  /* 120a760b mov esp, ebp */
  ESP = (EBP);
  /* 120a760d pop ebp */
  EBP = (pop32());
  /* 120a760e ret  */
  ESPCHK(0x120a75b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007630 @ 0x120a7630 (78 bytes, 28 insns) */
void f_120a7630(void) {
  FTRACE(0x120a7630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7630 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7631 mov ebp, esp */
  EBP = (ESP);
  /* 120a7633 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7636 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7637 push esi */
  push32((uint32_t)(ESI));
  /* 120a7638 push edi */
  push32((uint32_t)(EDI));
  /* 120a7639 push ecx */
  push32((uint32_t)(ECX));
  /* 120a763a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a763d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7642 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7647 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7649 pop ecx */
  ECX = (pop32());
  /* 120a764a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a764d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a7653 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120a7656 mov edx, dword ptr [0x120e109c] */
  EDX = (r32((uint32_t)(0x120e109c)));
  /* 120a765c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a765f mov dword ptr [edx*4 + 0x120e104c], eax */
  w32((uint32_t)(EDX*4 + 0x120e104c), (EAX));
  /* 120a7666 mov ecx, dword ptr [0x120e109c] */
  ECX = (r32((uint32_t)(0x120e109c)));
  /* 120a766c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a766f mov dword ptr [0x120e109c], ecx */
  w32((uint32_t)(0x120e109c), (ECX));
  /* 120a7675 pop edi */
  EDI = (pop32());
  /* 120a7676 pop esi */
  ESI = (pop32());
  /* 120a7677 pop ebx */
  EBX = (pop32());
  /* 120a7678 mov esp, ebp */
  ESP = (EBP);
  /* 120a767a pop ebp */
  EBP = (pop32());
  /* 120a767b ret 4 */
  ESPCHK(0x120a7630u, _esp0);
  ESP += 8; return;
}

/* FUN_100076a0 @ 0x120a76a0 (128 bytes, 44 insns) */
void f_120a76a0(void) {
  FTRACE(0x120a76a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a76a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a76a1 mov ebp, esp */
  EBP = (ESP);
  /* 120a76a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a76a6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a76a7 push esi */
  push32((uint32_t)(ESI));
  /* 120a76a8 push edi */
  push32((uint32_t)(EDI));
  /* 120a76a9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a76ac mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a76b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a76b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a76b8 mov eax, dword ptr [0x120e104c] */
  EAX = (r32((uint32_t)(0x120e104c)));
  /* 120a76bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120a76c0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a76c7 jmp 0x120a76d2 */
  goto L_120a76d2;
L_120a76c9:;
  /* 120a76c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a76cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a76cf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120a76d2:;
  /* 120a76d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a76d5 cmp edx, dword ptr [0x120e109c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120e109c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a76db jge 0x120a770c */
  if ((C.sf==C.of)) goto L_120a770c;
  /* 120a76dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a76e0 mov ecx, dword ptr [eax*4 + 0x120e104c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120e104c)));
  /* 120a76e7 call 0x120a1136 */
  push32(0x120a76ecu); f_120a1136();
  /* 120a76ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120a76ee mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 120a76f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a76f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120a76f6 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 120a76f9 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a76fb jne 0x120a770a */
  if (!C.zf) goto L_120a770a;
  /* 120a76fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a7700 mov edx, dword ptr [ecx*4 + 0x120e104c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120e104c)));
  /* 120a7707 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120a770a:;
  /* 120a770a jmp 0x120a76c9 */
  goto L_120a76c9;
L_120a770c:;
  /* 120a770c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a770f pop edi */
  EDI = (pop32());
  /* 120a7710 pop esi */
  ESI = (pop32());
  /* 120a7711 pop ebx */
  EBX = (pop32());
  /* 120a7712 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7715 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7717 call 0x120aa8e0 */
  push32(0x120a771cu); f_120aa8e0();
  /* 120a771c mov esp, ebp */
  ESP = (EBP);
  /* 120a771e pop ebp */
  EBP = (pop32());
  /* 120a771f ret  */
  ESPCHK(0x120a76a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007740 @ 0x120a7740 (47 bytes, 22 insns) */
void f_120a7740(void) {
  FTRACE(0x120a7740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7740 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7741 mov ebp, esp */
  EBP = (ESP);
  /* 120a7743 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7746 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7747 push esi */
  push32((uint32_t)(ESI));
  /* 120a7748 push edi */
  push32((uint32_t)(EDI));
  /* 120a7749 push ecx */
  push32((uint32_t)(ECX));
  /* 120a774a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a774d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7752 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7757 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7759 pop ecx */
  ECX = (pop32());
  /* 120a775a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a775d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7760 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a7763 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 120a7766 pop edi */
  EDI = (pop32());
  /* 120a7767 pop esi */
  ESI = (pop32());
  /* 120a7768 pop ebx */
  EBX = (pop32());
  /* 120a7769 mov esp, ebp */
  ESP = (EBP);
  /* 120a776b pop ebp */
  EBP = (pop32());
  /* 120a776c ret 4 */
  ESPCHK(0x120a7740u, _esp0);
  ESP += 8; return;
}

/* FUN_10007780 @ 0x120a7780 (47 bytes, 22 insns) */
void f_120a7780(void) {
  FTRACE(0x120a7780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7780 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7781 mov ebp, esp */
  EBP = (ESP);
  /* 120a7783 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7786 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7787 push esi */
  push32((uint32_t)(ESI));
  /* 120a7788 push edi */
  push32((uint32_t)(EDI));
  /* 120a7789 push ecx */
  push32((uint32_t)(ECX));
  /* 120a778a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a778d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7792 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7797 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7799 pop ecx */
  ECX = (pop32());
  /* 120a779a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a779d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a77a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a77a3 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 120a77a6 pop edi */
  EDI = (pop32());
  /* 120a77a7 pop esi */
  ESI = (pop32());
  /* 120a77a8 pop ebx */
  EBX = (pop32());
  /* 120a77a9 mov esp, ebp */
  ESP = (EBP);
  /* 120a77ab pop ebp */
  EBP = (pop32());
  /* 120a77ac ret 4 */
  ESPCHK(0x120a7780u, _esp0);
  ESP += 8; return;
}

/* FUN_100077c0 @ 0x120a77c0 (47 bytes, 22 insns) */
void f_120a77c0(void) {
  FTRACE(0x120a77c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a77c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a77c1 mov ebp, esp */
  EBP = (ESP);
  /* 120a77c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a77c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a77c7 push esi */
  push32((uint32_t)(ESI));
  /* 120a77c8 push edi */
  push32((uint32_t)(EDI));
  /* 120a77c9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a77ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a77cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a77d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a77d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a77d9 pop ecx */
  ECX = (pop32());
  /* 120a77da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a77dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a77e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a77e3 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 120a77e6 pop edi */
  EDI = (pop32());
  /* 120a77e7 pop esi */
  ESI = (pop32());
  /* 120a77e8 pop ebx */
  EBX = (pop32());
  /* 120a77e9 mov esp, ebp */
  ESP = (EBP);
  /* 120a77eb pop ebp */
  EBP = (pop32());
  /* 120a77ec ret 4 */
  ESPCHK(0x120a77c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007800 @ 0x120a7800 (85 bytes, 35 insns) */
void f_120a7800(void) {
  FTRACE(0x120a7800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7800 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7801 mov ebp, esp */
  EBP = (ESP);
  /* 120a7803 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7806 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7807 push esi */
  push32((uint32_t)(ESI));
  /* 120a7808 push edi */
  push32((uint32_t)(EDI));
  /* 120a7809 push ecx */
  push32((uint32_t)(ECX));
  /* 120a780a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a780d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7812 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7817 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7819 pop ecx */
  ECX = (pop32());
  /* 120a781a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a781d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7820 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120a7823 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7824 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7827 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120a782a push eax */
  push32((uint32_t)(EAX));
  /* 120a782b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a782e call 0x120a11cc */
  push32(0x120a7833u); f_120a11cc();
  /* 120a7833 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7836 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120a7839 push edx */
  push32((uint32_t)(EDX));
  /* 120a783a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a783d call 0x120a122b */
  push32(0x120a7842u); f_120a122b();
  /* 120a7842 pop edi */
  EDI = (pop32());
  /* 120a7843 pop esi */
  ESI = (pop32());
  /* 120a7844 pop ebx */
  EBX = (pop32());
  /* 120a7845 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7848 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a784a call 0x120aa8e0 */
  push32(0x120a784fu); f_120aa8e0();
  /* 120a784f mov esp, ebp */
  ESP = (EBP);
  /* 120a7851 pop ebp */
  EBP = (pop32());
  /* 120a7852 ret 4 */
  ESPCHK(0x120a7800u, _esp0);
  ESP += 8; return;
}

/* FUN_10007870 @ 0x120a7870 (42 bytes, 21 insns) */
void f_120a7870(void) {
  FTRACE(0x120a7870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7870 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7871 mov ebp, esp */
  EBP = (ESP);
  /* 120a7873 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7876 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7877 push esi */
  push32((uint32_t)(ESI));
  /* 120a7878 push edi */
  push32((uint32_t)(EDI));
  /* 120a7879 push ecx */
  push32((uint32_t)(ECX));
  /* 120a787a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a787d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7882 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7887 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7889 pop ecx */
  ECX = (pop32());
  /* 120a788a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a788d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7890 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 120a7893 pop edi */
  EDI = (pop32());
  /* 120a7894 pop esi */
  ESI = (pop32());
  /* 120a7895 pop ebx */
  EBX = (pop32());
  /* 120a7896 mov esp, ebp */
  ESP = (EBP);
  /* 120a7898 pop ebp */
  EBP = (pop32());
  /* 120a7899 ret  */
  ESPCHK(0x120a7870u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b0 @ 0x120a78b0 (39 bytes, 20 insns) */
void f_120a78b0(void) {
  FTRACE(0x120a78b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a78b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a78b1 mov ebp, esp */
  EBP = (ESP);
  /* 120a78b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a78b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a78b7 push esi */
  push32((uint32_t)(ESI));
  /* 120a78b8 push edi */
  push32((uint32_t)(EDI));
  /* 120a78b9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a78ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a78bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a78c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a78c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a78c9 pop ecx */
  ECX = (pop32());
  /* 120a78ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a78cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a78d0 pop edi */
  EDI = (pop32());
  /* 120a78d1 pop esi */
  ESI = (pop32());
  /* 120a78d2 pop ebx */
  EBX = (pop32());
  /* 120a78d3 mov esp, ebp */
  ESP = (EBP);
  /* 120a78d5 pop ebp */
  EBP = (pop32());
  /* 120a78d6 ret  */
  ESPCHK(0x120a78b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078e0 @ 0x120a78e0 (518 bytes, 176 insns) */
void f_120a78e0(void) {
  FTRACE(0x120a78e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a78e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a78e1 mov ebp, esp */
  EBP = (ESP);
  /* 120a78e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a78e6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a78e7 push esi */
  push32((uint32_t)(ESI));
  /* 120a78e8 push edi */
  push32((uint32_t)(EDI));
  /* 120a78e9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a78ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a78ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a78f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a78f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a78f9 pop ecx */
  ECX = (pop32());
  /* 120a78fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a78fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7900 call 0x120a11ae */
  push32(0x120a7905u); f_120a11ae();
  /* 120a7905 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a7907 jle 0x120a7ad5 */
  if ((C.zf||C.sf!=C.of)) goto L_120a7ad5;
  /* 120a790d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7910 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120a7913 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7916 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7919 cmp ecx, dword ptr [edx + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a791c jge 0x120a7ad5 */
  if ((C.sf==C.of)) goto L_120a7ad5;
  /* 120a7922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7925 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120a7928 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a792b cmp dword ptr [edx + ecx*8 + 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7930 jne 0x120a79f9 */
  if (!C.zf) goto L_120a79f9;
  /* 120a7936 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7939 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120a793c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a793f mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 120a7943 push eax */
  push32((uint32_t)(EAX));
  /* 120a7944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7947 call 0x120a10cd */
  push32(0x120a794cu); f_120a10cd();
  /* 120a794c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a7951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a7953 je 0x120a7980 */
  if (C.zf) goto L_120a7980;
  /* 120a7955 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7958 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120a795b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a795e mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 120a7962 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7966 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120a7969 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a796c mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 120a7970 push edx */
  push32((uint32_t)(EDX));
  /* 120a7971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7974 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7977 push eax */
  push32((uint32_t)(EAX));
  /* 120a7978 call 0x120a1069 */
  push32(0x120a797du); f_120a1069();
  /* 120a797d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120a7980:;
  /* 120a7980 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7983 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120a7986 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7989 mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 120a798d push ecx */
  push32((uint32_t)(ECX));
  /* 120a798e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7991 call 0x120a10cd */
  push32(0x120a7996u); f_120a10cd();
  /* 120a7996 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a799b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a799d je 0x120a79f4 */
  if (C.zf) goto L_120a79f4;
  /* 120a799f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a79a2 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120a79a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a79a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a79ab mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 120a79ae mov esi, esp */
  ESI = (ESP);
  /* 120a79b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a79b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a79b5 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a79b8 push edx */
  push32((uint32_t)(EDX));
  /* 120a79b9 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a79bfu);
  /* 120a79bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a79c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a79c4 call 0x120aa8e0 */
  push32(0x120a79c9u); f_120aa8e0();
  /* 120a79c9 mov esi, esp */
  ESI = (ESP);
  /* 120a79cb push 0 */
  push32((uint32_t)(0x0u));
  /* 120a79cd push 0 */
  push32((uint32_t)(0x0u));
  /* 120a79cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a79d2 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120a79d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a79d8 mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 120a79dc push eax */
  push32((uint32_t)(EAX));
  /* 120a79dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a79e0 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 120a79e3 push edx */
  push32((uint32_t)(EDX));
  /* 120a79e4 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a79eau);
  /* 120a79ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a79ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a79ef call 0x120aa8e0 */
  push32(0x120a79f4u); f_120aa8e0();
L_120a79f4:;
  /* 120a79f4 jmp 0x120a7ad5 */
  goto L_120a7ad5;
L_120a79f9:;
  /* 120a79f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a79fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120a79ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a02 cmp dword ptr [edx + ecx*8 + 0x34], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7a07 je 0x120a7a19 */
  if (C.zf) goto L_120a7a19;
  /* 120a7a09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a0c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120a7a0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a12 cmp dword ptr [edx + ecx*8 + 0x34], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7a17 jne 0x120a7a70 */
  if (!C.zf) goto L_120a7a70;
L_120a7a19:;
  /* 120a7a19 mov esi, esp */
  ESI = (ESP);
  /* 120a7a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 120a7a1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a20 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7a23 push eax */
  push32((uint32_t)(EAX));
  /* 120a7a24 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a7a2au);
  /* 120a7a2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7a2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7a2f call 0x120aa8e0 */
  push32(0x120a7a34u); f_120aa8e0();
  /* 120a7a34 mov esi, esp */
  ESI = (ESP);
  /* 120a7a36 push 2 */
  push32((uint32_t)(0x2u));
  /* 120a7a38 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a7a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a3d mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120a7a40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7a43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a46 mov dword ptr [eax + 0x1c], edx */
  w32((uint32_t)(EAX + 0x1c), (EDX));
  /* 120a7a49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a4c mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120a7a4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a52 mov ecx, dword ptr [eax + edx*8 + 0x28] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x28)));
  /* 120a7a56 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7a57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a5a mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 120a7a5d push eax */
  push32((uint32_t)(EAX));
  /* 120a7a5e call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a7a64u);
  /* 120a7a64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7a67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7a69 call 0x120aa8e0 */
  push32(0x120a7a6eu); f_120aa8e0();
  /* 120a7a6e jmp 0x120a7ad5 */
  goto L_120a7ad5;
L_120a7a70:;
  /* 120a7a70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a73 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120a7a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a79 cmp dword ptr [eax + edx*8 + 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*8 + 0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7a7e jne 0x120a7ad5 */
  if (!C.zf) goto L_120a7ad5;
  /* 120a7a80 mov esi, esp */
  ESI = (ESP);
  /* 120a7a82 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a7a84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7a87 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7a8a push ecx */
  push32((uint32_t)(ECX));
  /* 120a7a8b call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a7a91u);
  /* 120a7a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7a96 call 0x120aa8e0 */
  push32(0x120a7a9bu); f_120aa8e0();
  /* 120a7a9b mov esi, esp */
  ESI = (ESP);
  /* 120a7a9d push 0 */
  push32((uint32_t)(0x0u));
  /* 120a7a9f push 0 */
  push32((uint32_t)(0x0u));
  /* 120a7aa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7aa4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120a7aa7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7aad mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 120a7ab0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7ab3 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120a7ab6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7ab9 mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 120a7abd push edx */
  push32((uint32_t)(EDX));
  /* 120a7abe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7ac1 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 120a7ac4 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7ac5 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a7acbu);
  /* 120a7acb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7ace cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7ad0 call 0x120aa8e0 */
  push32(0x120a7ad5u); f_120aa8e0();
L_120a7ad5:;
  /* 120a7ad5 pop edi */
  EDI = (pop32());
  /* 120a7ad6 pop esi */
  ESI = (pop32());
  /* 120a7ad7 pop ebx */
  EBX = (pop32());
  /* 120a7ad8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7adb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7add call 0x120aa8e0 */
  push32(0x120a7ae2u); f_120aa8e0();
  /* 120a7ae2 mov esp, ebp */
  ESP = (EBP);
  /* 120a7ae4 pop ebp */
  EBP = (pop32());
  /* 120a7ae5 ret  */
  ESPCHK(0x120a78e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b70 @ 0x120a7b70 (38 bytes, 20 insns) */
void f_120a7b70(void) {
  FTRACE(0x120a7b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7b70 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7b71 mov ebp, esp */
  EBP = (ESP);
  /* 120a7b73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7b76 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7b77 push esi */
  push32((uint32_t)(ESI));
  /* 120a7b78 push edi */
  push32((uint32_t)(EDI));
  /* 120a7b79 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7b7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a7b7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7b82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7b87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7b89 pop ecx */
  ECX = (pop32());
  /* 120a7b8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a7b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120a7b8f pop edi */
  EDI = (pop32());
  /* 120a7b90 pop esi */
  ESI = (pop32());
  /* 120a7b91 pop ebx */
  EBX = (pop32());
  /* 120a7b92 mov esp, ebp */
  ESP = (EBP);
  /* 120a7b94 pop ebp */
  EBP = (pop32());
  /* 120a7b95 ret  */
  ESPCHK(0x120a7b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ba0 @ 0x120a7ba0 (85 bytes, 34 insns) */
void f_120a7ba0(void) {
  FTRACE(0x120a7ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7ba1 mov ebp, esp */
  EBP = (ESP);
  /* 120a7ba3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7ba7 push esi */
  push32((uint32_t)(ESI));
  /* 120a7ba8 push edi */
  push32((uint32_t)(EDI));
  /* 120a7ba9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7baa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a7bad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7bb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7bb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7bb9 pop ecx */
  ECX = (pop32());
  /* 120a7bba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a7bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7bc0 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 120a7bc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a7bc9 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 120a7bcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7bd0 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 120a7bd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7bd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a7bd9 mov dword ptr [eax + edx*8 + 0x2c], ecx */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (ECX));
  /* 120a7bdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7be0 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 120a7be3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7be6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7be9 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 120a7bec pop edi */
  EDI = (pop32());
  /* 120a7bed pop esi */
  ESI = (pop32());
  /* 120a7bee pop ebx */
  EBX = (pop32());
  /* 120a7bef mov esp, ebp */
  ESP = (EBP);
  /* 120a7bf1 pop ebp */
  EBP = (pop32());
  /* 120a7bf2 ret 8 */
  ESPCHK(0x120a7ba0u, _esp0);
  ESP += 12; return;
}

/* FUN_10007c10 @ 0x120a7c10 (86 bytes, 33 insns) */
void f_120a7c10(void) {
  FTRACE(0x120a7c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7c10 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7c11 mov ebp, esp */
  EBP = (ESP);
  /* 120a7c13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7c16 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7c17 push esi */
  push32((uint32_t)(ESI));
  /* 120a7c18 push edi */
  push32((uint32_t)(EDI));
  /* 120a7c19 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7c1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a7c1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7c22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7c27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7c29 pop ecx */
  ECX = (pop32());
  /* 120a7c2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a7c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7c30 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 120a7c33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a7c39 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 120a7c3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7c40 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 120a7c43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7c46 mov dword ptr [eax + edx*8 + 0x2c], 2 */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (0x2u));
  /* 120a7c4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7c51 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 120a7c54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7c57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7c5a mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 120a7c5d pop edi */
  EDI = (pop32());
  /* 120a7c5e pop esi */
  ESI = (pop32());
  /* 120a7c5f pop ebx */
  EBX = (pop32());
  /* 120a7c60 mov esp, ebp */
  ESP = (EBP);
  /* 120a7c62 pop ebp */
  EBP = (pop32());
  /* 120a7c63 ret 4 */
  ESPCHK(0x120a7c10u, _esp0);
  ESP += 8; return;
}

/* FUN_10007c80 @ 0x120a7c80 (119 bytes, 43 insns) */
void f_120a7c80(void) {
  FTRACE(0x120a7c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7c80 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7c81 mov ebp, esp */
  EBP = (ESP);
  /* 120a7c83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7c86 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7c87 push esi */
  push32((uint32_t)(ESI));
  /* 120a7c88 push edi */
  push32((uint32_t)(EDI));
  /* 120a7c89 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7c8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a7c8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7c92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7c97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7c99 pop ecx */
  ECX = (pop32());
  /* 120a7c9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a7c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7ca0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7ca3 mov esi, esp */
  ESI = (ESP);
  /* 120a7ca5 push eax */
  push32((uint32_t)(EAX));
  /* 120a7ca6 call dword ptr [0x120e35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35a4))), 0x120a7cacu);
  /* 120a7cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7caf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7cb1 call 0x120aa8e0 */
  push32(0x120a7cb6u); f_120aa8e0();
  /* 120a7cb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7cb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a7cbc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120a7cbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7cc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a7cc4 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120a7cc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7cca mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
  /* 120a7cd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7cd4 mov dword ptr [eax + 0x20], 0 */
  w32((uint32_t)(EAX + 0x20), (0x0u));
  /* 120a7cdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7cde mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120a7ce1 mov dword ptr [ecx + 0x24], edx */
  w32((uint32_t)(ECX + 0x24), (EDX));
  /* 120a7ce4 pop edi */
  EDI = (pop32());
  /* 120a7ce5 pop esi */
  ESI = (pop32());
  /* 120a7ce6 pop ebx */
  EBX = (pop32());
  /* 120a7ce7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7cea cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7cec call 0x120aa8e0 */
  push32(0x120a7cf1u); f_120aa8e0();
  /* 120a7cf1 mov esp, ebp */
  ESP = (EBP);
  /* 120a7cf3 pop ebp */
  EBP = (pop32());
  /* 120a7cf4 ret 0xc */
  ESPCHK(0x120a7c80u, _esp0);
  ESP += 16; return;
}

/* FUN_10007d20 @ 0x120a7d20 (263 bytes, 93 insns) */
void f_120a7d20(void) {
  FTRACE(0x120a7d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7d20 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7d21 mov ebp, esp */
  EBP = (ESP);
  /* 120a7d23 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7d26 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7d27 push esi */
  push32((uint32_t)(ESI));
  /* 120a7d28 push edi */
  push32((uint32_t)(EDI));
  /* 120a7d29 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7d2a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a7d2d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a7d32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7d37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7d39 pop ecx */
  ECX = (pop32());
  /* 120a7d3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a7d3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7d40 call 0x120a11ae */
  push32(0x120a7d45u); f_120a11ae();
  /* 120a7d45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a7d47 jne 0x120a7e14 */
  if (!C.zf) goto L_120a7e14;
  /* 120a7d4d mov esi, esp */
  ESI = (ESP);
  /* 120a7d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7d52 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 120a7d55 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7d56 call dword ptr [0x120e3560] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3560))), 0x120a7d5cu);
  /* 120a7d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7d5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7d61 call 0x120aa8e0 */
  push32(0x120a7d66u); f_120aa8e0();
  /* 120a7d66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a7d6d jmp 0x120a7d78 */
  goto L_120a7d78;
L_120a7d6f:;
  /* 120a7d6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a7d72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7d75 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120a7d78:;
  /* 120a7d78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a7d7b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7d7e jge 0x120a7dd0 */
  if ((C.sf==C.of)) goto L_120a7dd0;
  /* 120a7d80 mov esi, esp */
  ESI = (ESP);
  /* 120a7d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a7d84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a7d87 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7d88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7d8b mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 120a7d8e push eax */
  push32((uint32_t)(EAX));
  /* 120a7d8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7d92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120a7d94 push edx */
  push32((uint32_t)(EDX));
  /* 120a7d95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7d98 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120a7d9b push ecx */
  push32((uint32_t)(ECX));
  /* 120a7d9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7d9f add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7da2 push edx */
  push32((uint32_t)(EDX));
  /* 120a7da3 call dword ptr [0x120e3568] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3568))), 0x120a7da9u);
  /* 120a7da9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7dae call 0x120aa8e0 */
  push32(0x120a7db3u); f_120aa8e0();
  /* 120a7db3 mov esi, esp */
  ESI = (ESP);
  /* 120a7db5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120a7db7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7dba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7dbd push eax */
  push32((uint32_t)(EAX));
  /* 120a7dbe call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a7dc4u);
  /* 120a7dc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7dc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7dc9 call 0x120aa8e0 */
  push32(0x120a7dceu); f_120aa8e0();
  /* 120a7dce jmp 0x120a7d6f */
  goto L_120a7d6f;
L_120a7dd0:;
  /* 120a7dd0 mov esi, esp */
  ESI = (ESP);
  /* 120a7dd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a7dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7dd7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7dda push ecx */
  push32((uint32_t)(ECX));
  /* 120a7ddb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7dde mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 120a7de1 push eax */
  push32((uint32_t)(EAX));
  /* 120a7de2 call dword ptr [0x120e35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35ac))), 0x120a7de8u);
  /* 120a7de8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7deb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7ded call 0x120aa8e0 */
  push32(0x120a7df2u); f_120aa8e0();
  /* 120a7df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7df5 mov dword ptr [ecx + 0x20], 0 */
  w32((uint32_t)(ECX + 0x20), (0x0u));
  /* 120a7dfc push 0 */
  push32((uint32_t)(0x0u));
  /* 120a7dfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a7e01 push edx */
  push32((uint32_t)(EDX));
  /* 120a7e02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7e05 call 0x120a105f */
  push32(0x120a7e0au); f_120a105f();
  /* 120a7e0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7e0d mov dword ptr [eax + 0x1c], 0 */
  w32((uint32_t)(EAX + 0x1c), (0x0u));
L_120a7e14:;
  /* 120a7e14 pop edi */
  EDI = (pop32());
  /* 120a7e15 pop esi */
  ESI = (pop32());
  /* 120a7e16 pop ebx */
  EBX = (pop32());
  /* 120a7e17 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7e1a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7e1c call 0x120aa8e0 */
  push32(0x120a7e21u); f_120aa8e0();
  /* 120a7e21 mov esp, ebp */
  ESP = (EBP);
  /* 120a7e23 pop ebp */
  EBP = (pop32());
  /* 120a7e24 ret 8 */
  ESPCHK(0x120a7d20u, _esp0);
  ESP += 12; return;
}

/* FUN_10007e70 @ 0x120a7e70 (42 bytes, 21 insns) */
void f_120a7e70(void) {
  FTRACE(0x120a7e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7e70 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7e71 mov ebp, esp */
  EBP = (ESP);
  /* 120a7e73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7e76 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7e77 push esi */
  push32((uint32_t)(ESI));
  /* 120a7e78 push edi */
  push32((uint32_t)(EDI));
  /* 120a7e79 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7e7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a7e7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7e82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7e87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7e89 pop ecx */
  ECX = (pop32());
  /* 120a7e8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a7e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7e90 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7e93 pop edi */
  EDI = (pop32());
  /* 120a7e94 pop esi */
  ESI = (pop32());
  /* 120a7e95 pop ebx */
  EBX = (pop32());
  /* 120a7e96 mov esp, ebp */
  ESP = (EBP);
  /* 120a7e98 pop ebp */
  EBP = (pop32());
  /* 120a7e99 ret  */
  ESPCHK(0x120a7e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007eb0 @ 0x120a7eb0 (78 bytes, 33 insns) */
void f_120a7eb0(void) {
  FTRACE(0x120a7eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7eb1 mov ebp, esp */
  EBP = (ESP);
  /* 120a7eb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7eb7 push esi */
  push32((uint32_t)(ESI));
  /* 120a7eb8 push edi */
  push32((uint32_t)(EDI));
  /* 120a7eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7eba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a7ebd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7ec2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7ec7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7ec9 pop ecx */
  ECX = (pop32());
  /* 120a7eca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a7ecd mov esi, esp */
  ESI = (ESP);
  /* 120a7ecf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7ed2 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 120a7ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7ed6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7ed9 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7edc push edx */
  push32((uint32_t)(EDX));
  /* 120a7edd call dword ptr [0x120e3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3504))), 0x120a7ee3u);
  /* 120a7ee3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7ee6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7ee8 call 0x120aa8e0 */
  push32(0x120a7eedu); f_120aa8e0();
  /* 120a7eed pop edi */
  EDI = (pop32());
  /* 120a7eee pop esi */
  ESI = (pop32());
  /* 120a7eef pop ebx */
  EBX = (pop32());
  /* 120a7ef0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7ef3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7ef5 call 0x120aa8e0 */
  push32(0x120a7efau); f_120aa8e0();
  /* 120a7efa mov esp, ebp */
  ESP = (EBP);
  /* 120a7efc pop ebp */
  EBP = (pop32());
  /* 120a7efd ret  */
  ESPCHK(0x120a7eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f20 @ 0x120a7f20 (102 bytes, 40 insns) */
void f_120a7f20(void) {
  FTRACE(0x120a7f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7f20 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7f21 mov ebp, esp */
  EBP = (ESP);
  /* 120a7f23 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7f26 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7f27 push esi */
  push32((uint32_t)(ESI));
  /* 120a7f28 push edi */
  push32((uint32_t)(EDI));
  /* 120a7f29 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7f2a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a7f2d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a7f32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7f37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7f39 pop ecx */
  ECX = (pop32());
  /* 120a7f3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a7f3d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a7f41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7f44 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7f47 mov esi, esp */
  ESI = (ESP);
  /* 120a7f49 push eax */
  push32((uint32_t)(EAX));
  /* 120a7f4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a7f4d push ecx */
  push32((uint32_t)(ECX));
  /* 120a7f4e call dword ptr [0x120e359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e359c))), 0x120a7f54u);
  /* 120a7f54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7f57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7f59 call 0x120aa8e0 */
  push32(0x120a7f5eu); f_120aa8e0();
  /* 120a7f5e mov esi, eax */
  ESI = (EAX);
  /* 120a7f60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7f63 call 0x120a11ae */
  push32(0x120a7f68u); f_120a11ae();
  /* 120a7f68 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7f6a jne 0x120a7f70 */
  if (!C.zf) goto L_120a7f70;
  /* 120a7f6c mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a7f70:;
  /* 120a7f70 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a7f73 pop edi */
  EDI = (pop32());
  /* 120a7f74 pop esi */
  ESI = (pop32());
  /* 120a7f75 pop ebx */
  EBX = (pop32());
  /* 120a7f76 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7f79 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7f7b call 0x120aa8e0 */
  push32(0x120a7f80u); f_120aa8e0();
  /* 120a7f80 mov esp, ebp */
  ESP = (EBP);
  /* 120a7f82 pop ebp */
  EBP = (pop32());
  /* 120a7f83 ret 4 */
  ESPCHK(0x120a7f20u, _esp0);
  ESP += 8; return;
}

/* FUN_10007fa0 @ 0x120a7fa0 (122 bytes, 45 insns) */
void f_120a7fa0(void) {
  FTRACE(0x120a7fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a7fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a7fa1 mov ebp, esp */
  EBP = (ESP);
  /* 120a7fa3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a7fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a7fa7 push esi */
  push32((uint32_t)(ESI));
  /* 120a7fa8 push edi */
  push32((uint32_t)(EDI));
  /* 120a7fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7faa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a7fad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a7fb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a7fb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a7fb9 pop ecx */
  ECX = (pop32());
  /* 120a7fba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a7fbd mov esi, esp */
  ESI = (ESP);
  /* 120a7fbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a7fc2 push eax */
  push32((uint32_t)(EAX));
  /* 120a7fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7fc6 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a7fca call dword ptr [0x120e357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e357c))), 0x120a7fd0u);
  /* 120a7fd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7fd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a7fd5 call 0x120aa8e0 */
  push32(0x120a7fdau); f_120aa8e0();
  /* 120a7fda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7fdd add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7fe0 push edx */
  push32((uint32_t)(EDX));
  /* 120a7fe1 call 0x120a10d2 */
  push32(0x120a7fe6u); f_120a10d2();
  /* 120a7fe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a7fe9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a7fee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7ff1 mov dword ptr [ecx + 0x18], eax */
  w32((uint32_t)(ECX + 0x18), (EAX));
  /* 120a7ff4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a7ff7 mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
  /* 120a7ffe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8001 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a8004 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 120a8007 pop edi */
  EDI = (pop32());
  /* 120a8008 pop esi */
  ESI = (pop32());
  /* 120a8009 pop ebx */
  EBX = (pop32());
  /* 120a800a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a800d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a800f call 0x120aa8e0 */
  push32(0x120a8014u); f_120aa8e0();
  /* 120a8014 mov esp, ebp */
  ESP = (EBP);
  /* 120a8016 pop ebp */
  EBP = (pop32());
  /* 120a8017 ret 8 */
  ESPCHK(0x120a7fa0u, _esp0);
  ESP += 12; return;
}

/* FUN_10008040 @ 0x120a8040 (56 bytes, 25 insns) */
void f_120a8040(void) {
  FTRACE(0x120a8040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8040 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8041 mov ebp, esp */
  EBP = (ESP);
  /* 120a8043 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8046 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8047 push esi */
  push32((uint32_t)(ESI));
  /* 120a8048 push edi */
  push32((uint32_t)(EDI));
  /* 120a8049 push ecx */
  push32((uint32_t)(ECX));
  /* 120a804a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a804d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a8052 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8057 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8059 pop ecx */
  ECX = (pop32());
  /* 120a805a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a805d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a8061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8064 cmp dword ptr [eax + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8068 jne 0x120a806e */
  if (!C.zf) goto L_120a806e;
  /* 120a806a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a806e:;
  /* 120a806e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a8071 pop edi */
  EDI = (pop32());
  /* 120a8072 pop esi */
  ESI = (pop32());
  /* 120a8073 pop ebx */
  EBX = (pop32());
  /* 120a8074 mov esp, ebp */
  ESP = (EBP);
  /* 120a8076 pop ebp */
  EBP = (pop32());
  /* 120a8077 ret  */
  ESPCHK(0x120a8040u, _esp0);
  ESP += 4; return;
}

/* FUN_10008090 @ 0x120a8090 (163 bytes, 60 insns) */
void f_120a8090(void) {
  FTRACE(0x120a8090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8090 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8091 mov ebp, esp */
  EBP = (ESP);
  /* 120a8093 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8096 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8097 push esi */
  push32((uint32_t)(ESI));
  /* 120a8098 push edi */
  push32((uint32_t)(EDI));
  /* 120a8099 push ecx */
  push32((uint32_t)(ECX));
  /* 120a809a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a809d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a80a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a80a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a80a9 pop ecx */
  ECX = (pop32());
  /* 120a80aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a80ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a80b0 call 0x120a10f0 */
  push32(0x120a80b5u); f_120a10f0();
  /* 120a80b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a80ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a80bc je 0x120a8120 */
  if (C.zf) goto L_120a8120;
  /* 120a80be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a80c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a80c4 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 120a80c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a80ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a80cd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120a80cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a80d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120a80d5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 120a80d8 mov esi, esp */
  ESI = (ESP);
  /* 120a80da push 0 */
  push32((uint32_t)(0x0u));
  /* 120a80dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a80df add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a80e2 push eax */
  push32((uint32_t)(EAX));
  /* 120a80e3 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a80e9u);
  /* 120a80e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a80ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a80ee call 0x120aa8e0 */
  push32(0x120a80f3u); f_120aa8e0();
  /* 120a80f3 mov esi, esp */
  ESI = (ESP);
  /* 120a80f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a80f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a80f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a80fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120a80fe push edx */
  push32((uint32_t)(EDX));
  /* 120a80ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8102 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 120a8105 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8106 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a810cu);
  /* 120a810c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a810f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8111 call 0x120aa8e0 */
  push32(0x120a8116u); f_120aa8e0();
  /* 120a8116 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8119 mov dword ptr [edx + 0x14], 1 */
  w32((uint32_t)(EDX + 0x14), (0x1u));
L_120a8120:;
  /* 120a8120 pop edi */
  EDI = (pop32());
  /* 120a8121 pop esi */
  ESI = (pop32());
  /* 120a8122 pop ebx */
  EBX = (pop32());
  /* 120a8123 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8126 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8128 call 0x120aa8e0 */
  push32(0x120a812du); f_120aa8e0();
  /* 120a812d mov esp, ebp */
  ESP = (EBP);
  /* 120a812f pop ebp */
  EBP = (pop32());
  /* 120a8130 ret 0xc */
  ESPCHK(0x120a8090u, _esp0);
  ESP += 16; return;
}

/* FUN_10008160 @ 0x120a8160 (140 bytes, 53 insns) */
void f_120a8160(void) {
  FTRACE(0x120a8160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8160 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8161 mov ebp, esp */
  EBP = (ESP);
  /* 120a8163 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8166 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8167 push esi */
  push32((uint32_t)(ESI));
  /* 120a8168 push edi */
  push32((uint32_t)(EDI));
  /* 120a8169 push ecx */
  push32((uint32_t)(ECX));
  /* 120a816a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a816d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a8172 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8177 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8179 pop ecx */
  ECX = (pop32());
  /* 120a817a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a817d mov esi, esp */
  ESI = (ESP);
  /* 120a817f push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8181 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8184 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8187 push eax */
  push32((uint32_t)(EAX));
  /* 120a8188 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a818eu);
  /* 120a818e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8193 call 0x120aa8e0 */
  push32(0x120a8198u); f_120aa8e0();
  /* 120a8198 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a819c mov esi, esp */
  ESI = (ESP);
  /* 120a819e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a81a1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120a81a4 push edx */
  push32((uint32_t)(EDX));
  /* 120a81a5 call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a81abu);
  /* 120a81ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a81ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a81b0 call 0x120aa8e0 */
  push32(0x120a81b5u); f_120aa8e0();
  /* 120a81b5 mov esi, eax */
  ESI = (EAX);
  /* 120a81b7 mov edi, esp */
  EDI = (ESP);
  /* 120a81b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a81bc mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 120a81bf push ecx */
  push32((uint32_t)(ECX));
  /* 120a81c0 call dword ptr [0x120e34e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34e0))), 0x120a81c6u);
  /* 120a81c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a81c9 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a81cb call 0x120aa8e0 */
  push32(0x120a81d0u); f_120aa8e0();
  /* 120a81d0 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a81d2 jne 0x120a81d8 */
  if (!C.zf) goto L_120a81d8;
  /* 120a81d4 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a81d8:;
  /* 120a81d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a81db pop edi */
  EDI = (pop32());
  /* 120a81dc pop esi */
  ESI = (pop32());
  /* 120a81dd pop ebx */
  EBX = (pop32());
  /* 120a81de add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a81e1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a81e3 call 0x120aa8e0 */
  push32(0x120a81e8u); f_120aa8e0();
  /* 120a81e8 mov esp, ebp */
  ESP = (EBP);
  /* 120a81ea pop ebp */
  EBP = (pop32());
  /* 120a81eb ret  */
  ESPCHK(0x120a8160u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x120a8210 (125 bytes, 48 insns) */
void f_120a8210(void) {
  FTRACE(0x120a8210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8210 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8211 mov ebp, esp */
  EBP = (ESP);
  /* 120a8213 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8216 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8217 push esi */
  push32((uint32_t)(ESI));
  /* 120a8218 push edi */
  push32((uint32_t)(EDI));
  /* 120a8219 push ecx */
  push32((uint32_t)(ECX));
  /* 120a821a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a821d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a8222 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8227 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8229 pop ecx */
  ECX = (pop32());
  /* 120a822a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a822d mov esi, esp */
  ESI = (ESP);
  /* 120a822f push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8231 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8234 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8237 push eax */
  push32((uint32_t)(EAX));
  /* 120a8238 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a823eu);
  /* 120a823e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8241 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8243 call 0x120aa8e0 */
  push32(0x120a8248u); f_120aa8e0();
  /* 120a8248 mov esi, esp */
  ESI = (ESP);
  /* 120a824a push 1 */
  push32((uint32_t)(0x1u));
  /* 120a824c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a824f mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120a8252 push edx */
  push32((uint32_t)(EDX));
  /* 120a8253 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a8259u);
  /* 120a8259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a825c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a825e call 0x120aa8e0 */
  push32(0x120a8263u); f_120aa8e0();
  /* 120a8263 mov esi, esp */
  ESI = (ESP);
  /* 120a8265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8268 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 120a826b push ecx */
  push32((uint32_t)(ECX));
  /* 120a826c call dword ptr [0x120e34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34dc))), 0x120a8272u);
  /* 120a8272 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8277 call 0x120aa8e0 */
  push32(0x120a827cu); f_120aa8e0();
  /* 120a827c pop edi */
  EDI = (pop32());
  /* 120a827d pop esi */
  ESI = (pop32());
  /* 120a827e pop ebx */
  EBX = (pop32());
  /* 120a827f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8282 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8284 call 0x120aa8e0 */
  push32(0x120a8289u); f_120aa8e0();
  /* 120a8289 mov esp, ebp */
  ESP = (EBP);
  /* 120a828b pop ebp */
  EBP = (pop32());
  /* 120a828c ret  */
  ESPCHK(0x120a8210u, _esp0);
  ESP += 4; return;
}

/* FUN_100082b0 @ 0x120a82b0 (98 bytes, 39 insns) */
void f_120a82b0(void) {
  FTRACE(0x120a82b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a82b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a82b1 mov ebp, esp */
  EBP = (ESP);
  /* 120a82b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a82b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a82b7 push esi */
  push32((uint32_t)(ESI));
  /* 120a82b8 push edi */
  push32((uint32_t)(EDI));
  /* 120a82b9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a82ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a82bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a82c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a82c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a82c9 pop ecx */
  ECX = (pop32());
  /* 120a82ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a82cd mov esi, esp */
  ESI = (ESP);
  /* 120a82cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120a82d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a82d4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a82d7 push eax */
  push32((uint32_t)(EAX));
  /* 120a82d8 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a82deu);
  /* 120a82de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a82e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a82e3 call 0x120aa8e0 */
  push32(0x120a82e8u); f_120aa8e0();
  /* 120a82e8 mov esi, esp */
  ESI = (ESP);
  /* 120a82ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a82ed mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 120a82f0 push edx */
  push32((uint32_t)(EDX));
  /* 120a82f1 call dword ptr [0x120e34d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34d8))), 0x120a82f7u);
  /* 120a82f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a82fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a82fc call 0x120aa8e0 */
  push32(0x120a8301u); f_120aa8e0();
  /* 120a8301 pop edi */
  EDI = (pop32());
  /* 120a8302 pop esi */
  ESI = (pop32());
  /* 120a8303 pop ebx */
  EBX = (pop32());
  /* 120a8304 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8307 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8309 call 0x120aa8e0 */
  push32(0x120a830eu); f_120aa8e0();
  /* 120a830e mov esp, ebp */
  ESP = (EBP);
  /* 120a8310 pop ebp */
  EBP = (pop32());
  /* 120a8311 ret  */
  ESPCHK(0x120a82b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008330 @ 0x120a8330 (402 bytes, 129 insns) [1 switch table(s)] */
void f_120a8330(void) {
  FTRACE(0x120a8330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8330 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8331 mov ebp, esp */
  EBP = (ESP);
  /* 120a8333 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8336 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8337 push esi */
  push32((uint32_t)(ESI));
  /* 120a8338 push edi */
  push32((uint32_t)(EDI));
  /* 120a8339 push ecx */
  push32((uint32_t)(ECX));
  /* 120a833a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a833d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a8342 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8347 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8349 pop ecx */
  ECX = (pop32());
  /* 120a834a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a834d mov esi, esp */
  ESI = (ESP);
  /* 120a834f push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8351 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8354 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8357 push eax */
  push32((uint32_t)(EAX));
  /* 120a8358 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a835eu);
  /* 120a835e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8361 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8363 call 0x120aa8e0 */
  push32(0x120a8368u); f_120aa8e0();
  /* 120a8368 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a836b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120a836e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120a8371 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a8374 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8377 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120a837a cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a837e ja 0x120a84b1 */
  if ((!C.cf&&!C.zf)) goto L_120a84b1;
  /* 120a8384 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120a8387 jmp dword ptr [ecx*4 + 0x120a84c2] */
  switch (ECX) {
    case 0: goto L_120a838e;
    case 1: goto L_120a83c7;
    case 2: goto L_120a840b;
    case 3: goto L_120a8441;
    case 4: goto L_120a8485;
    default: x86_unimpl("switch@0x120a8387 out of table"); return;
  }
L_120a838e:;
  /* 120a838e mov esi, esp */
  ESI = (ESP);
  /* 120a8390 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8393 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 120a8396 push eax */
  push32((uint32_t)(EAX));
  /* 120a8397 call dword ptr [0x120e34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34d4))), 0x120a839du);
  /* 120a839d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a83a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a83a2 call 0x120aa8e0 */
  push32(0x120a83a7u); f_120aa8e0();
  /* 120a83a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a83ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a83ae je 0x120a83c2 */
  if (C.zf) goto L_120a83c2;
  /* 120a83b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a83b3 call 0x120a1226 */
  push32(0x120a83b8u); f_120a1226();
  /* 120a83b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a83bb mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_120a83c2:;
  /* 120a83c2 jmp 0x120a84b1 */
  goto L_120a84b1;
L_120a83c7:;
  /* 120a83c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a83ca call 0x120a1145 */
  push32(0x120a83cfu); f_120a1145();
  /* 120a83cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a83d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a83d6 je 0x120a8406 */
  if (C.zf) goto L_120a8406;
  /* 120a83d8 mov esi, esp */
  ESI = (ESP);
  /* 120a83da push 0 */
  push32((uint32_t)(0x0u));
  /* 120a83dc push 0 */
  push32((uint32_t)(0x0u));
  /* 120a83de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a83e1 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120a83e4 push eax */
  push32((uint32_t)(EAX));
  /* 120a83e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a83e8 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 120a83eb push edx */
  push32((uint32_t)(EDX));
  /* 120a83ec call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a83f2u);
  /* 120a83f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a83f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a83f7 call 0x120aa8e0 */
  push32(0x120a83fcu); f_120aa8e0();
  /* 120a83fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a83ff mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_120a8406:;
  /* 120a8406 jmp 0x120a84b1 */
  goto L_120a84b1;
L_120a840b:;
  /* 120a840b mov esi, esp */
  ESI = (ESP);
  /* 120a840d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8410 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 120a8413 push edx */
  push32((uint32_t)(EDX));
  /* 120a8414 call dword ptr [0x120e34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34d4))), 0x120a841au);
  /* 120a841a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a841d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a841f call 0x120aa8e0 */
  push32(0x120a8424u); f_120aa8e0();
  /* 120a8424 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a8429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a842b je 0x120a843f */
  if (C.zf) goto L_120a843f;
  /* 120a842d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8430 call 0x120a1078 */
  push32(0x120a8435u); f_120a1078();
  /* 120a8435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8438 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_120a843f:;
  /* 120a843f jmp 0x120a84b1 */
  goto L_120a84b1;
L_120a8441:;
  /* 120a8441 mov esi, esp */
  ESI = (ESP);
  /* 120a8443 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8446 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 120a8449 push edx */
  push32((uint32_t)(EDX));
  /* 120a844a call dword ptr [0x120e34e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34e0))), 0x120a8450u);
  /* 120a8450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8453 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8455 call 0x120aa8e0 */
  push32(0x120a845au); f_120aa8e0();
  /* 120a845a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a845c jne 0x120a8483 */
  if (!C.zf) goto L_120a8483;
  /* 120a845e mov esi, esp */
  ESI = (ESP);
  /* 120a8460 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 120a8462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8465 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 120a8468 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8469 call dword ptr [0x120e3518] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3518))), 0x120a846fu);
  /* 120a846f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8472 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8474 call 0x120aa8e0 */
  push32(0x120a8479u); f_120aa8e0();
  /* 120a8479 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a847c mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_120a8483:;
  /* 120a8483 jmp 0x120a84b1 */
  goto L_120a84b1;
L_120a8485:;
  /* 120a8485 mov esi, esp */
  ESI = (ESP);
  /* 120a8487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a848a mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 120a848d push ecx */
  push32((uint32_t)(ECX));
  /* 120a848e call dword ptr [0x120e351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e351c))), 0x120a8494u);
  /* 120a8494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8497 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8499 call 0x120aa8e0 */
  push32(0x120a849eu); f_120aa8e0();
  /* 120a849e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a84a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a84a5 je 0x120a84b1 */
  if (C.zf) goto L_120a84b1;
  /* 120a84a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a84aa mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_120a84b1:;
  /* 120a84b1 pop edi */
  EDI = (pop32());
  /* 120a84b2 pop esi */
  ESI = (pop32());
  /* 120a84b3 pop ebx */
  EBX = (pop32());
  /* 120a84b4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a84b7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a84b9 call 0x120aa8e0 */
  push32(0x120a84beu); f_120aa8e0();
  /* 120a84be mov esp, ebp */
  ESP = (EBP);
  /* 120a84c0 pop ebp */
  EBP = (pop32());
  /* 120a84c1 ret  */
  ESPCHK(0x120a8330u, _esp0);
  ESP += 4; return;
}

/* FUN_10008540 @ 0x120a8540 (39 bytes, 18 insns) */
void f_120a8540(void) {
  FTRACE(0x120a8540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8540 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8541 mov ebp, esp */
  EBP = (ESP);
  /* 120a8543 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8546 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8547 push esi */
  push32((uint32_t)(ESI));
  /* 120a8548 push edi */
  push32((uint32_t)(EDI));
  /* 120a8549 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 120a854c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 120a8551 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8556 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8558 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a855b mov dword ptr [0x120e10a0], eax */
  w32((uint32_t)(0x120e10a0), (EAX));
  /* 120a8560 pop edi */
  EDI = (pop32());
  /* 120a8561 pop esi */
  ESI = (pop32());
  /* 120a8562 pop ebx */
  EBX = (pop32());
  /* 120a8563 mov esp, ebp */
  ESP = (EBP);
  /* 120a8565 pop ebp */
  EBP = (pop32());
  /* 120a8566 ret  */
  ESPCHK(0x120a8540u, _esp0);
  ESP += 4; return;
}

/* FUN_10008570 @ 0x120a8570 (93 bytes, 34 insns) */
void f_120a8570(void) {
  FTRACE(0x120a8570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8570 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8571 mov ebp, esp */
  EBP = (ESP);
  /* 120a8573 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8576 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8577 push esi */
  push32((uint32_t)(ESI));
  /* 120a8578 push edi */
  push32((uint32_t)(EDI));
  /* 120a8579 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 120a857c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 120a8581 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8586 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8588 cmp dword ptr [0x120e10a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e10a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a858f je 0x120a85bc */
  if (C.zf) goto L_120a85bc;
  /* 120a8591 mov ecx, dword ptr [0x120e10a0] */
  ECX = (r32((uint32_t)(0x120e10a0)));
  /* 120a8597 call 0x120a10f0 */
  push32(0x120a859cu); f_120a10f0();
  /* 120a859c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a85a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a85a3 je 0x120a85bc */
  if (C.zf) goto L_120a85bc;
  /* 120a85a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120a85a8 push eax */
  push32((uint32_t)(EAX));
  /* 120a85a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a85ac push ecx */
  push32((uint32_t)(ECX));
  /* 120a85ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a85b0 push edx */
  push32((uint32_t)(EDX));
  /* 120a85b1 mov ecx, dword ptr [0x120e10a0] */
  ECX = (r32((uint32_t)(0x120e10a0)));
  /* 120a85b7 call 0x120a1122 */
  push32(0x120a85bcu); f_120a1122();
L_120a85bc:;
  /* 120a85bc pop edi */
  EDI = (pop32());
  /* 120a85bd pop esi */
  ESI = (pop32());
  /* 120a85be pop ebx */
  EBX = (pop32());
  /* 120a85bf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a85c2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a85c4 call 0x120aa8e0 */
  push32(0x120a85c9u); f_120aa8e0();
  /* 120a85c9 mov esp, ebp */
  ESP = (EBP);
  /* 120a85cb pop ebp */
  EBP = (pop32());
  /* 120a85cc ret  */
  ESPCHK(0x120a8570u, _esp0);
  ESP += 4; return;
}

/* FUN_100085f0 @ 0x120a85f0 (437 bytes, 146 insns) */
void f_120a85f0(void) {
  FTRACE(0x120a85f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a85f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a85f1 mov ebp, esp */
  EBP = (ESP);
  /* 120a85f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a85f6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a85f7 push esi */
  push32((uint32_t)(ESI));
  /* 120a85f8 push edi */
  push32((uint32_t)(EDI));
  /* 120a85f9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a85fa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a85fd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a8602 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8607 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8609 pop ecx */
  ECX = (pop32());
  /* 120a860a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a860d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8610 call 0x120a105a */
  push32(0x120a8615u); f_120a105a();
  /* 120a8615 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a861a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a861c je 0x120a8794 */
  if (C.zf) goto L_120a8794;
  /* 120a8622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8625 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 120a8628 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 120a862b cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120a862f je 0x120a86e9 */
  if (C.zf) goto L_120a86e9;
  /* 120a8635 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120a8639 je 0x120a8640 */
  if (C.zf) goto L_120a8640;
  /* 120a863b jmp 0x120a873f */
  goto L_120a873f;
L_120a8640:;
  /* 120a8640 cmp dword ptr [0x120e10a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e10a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8647 je 0x120a868f */
  if (C.zf) goto L_120a868f;
  /* 120a8649 mov esi, esp */
  ESI = (ESP);
  /* 120a864b push 3 */
  push32((uint32_t)(0x3u));
  /* 120a864d mov edx, dword ptr [0x120e10a8] */
  EDX = (r32((uint32_t)(0x120e10a8)));
  /* 120a8653 push edx */
  push32((uint32_t)(EDX));
  /* 120a8654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8657 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a865a push eax */
  push32((uint32_t)(EAX));
  /* 120a865b call dword ptr [0x120e3594] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3594))), 0x120a8661u);
  /* 120a8661 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8664 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8666 call 0x120aa8e0 */
  push32(0x120a866bu); f_120aa8e0();
  /* 120a866b mov esi, esp */
  ESI = (ESP);
  /* 120a866d push 0 */
  push32((uint32_t)(0x0u));
  /* 120a866f mov ecx, dword ptr [0x120e10a8] */
  ECX = (r32((uint32_t)(0x120e10a8)));
  /* 120a8675 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8676 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8679 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a867c push edx */
  push32((uint32_t)(EDX));
  /* 120a867d call dword ptr [0x120e3594] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3594))), 0x120a8683u);
  /* 120a8683 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8686 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8688 call 0x120aa8e0 */
  push32(0x120a868du); f_120aa8e0();
  /* 120a868d jmp 0x120a86e4 */
  goto L_120a86e4;
L_120a868f:;
  /* 120a868f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8692 call 0x120a109b */
  push32(0x120a8697u); f_120a109b();
  /* 120a8697 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a869c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a869e jne 0x120a86e4 */
  if (!C.zf) goto L_120a86e4;
  /* 120a86a0 mov esi, esp */
  ESI = (ESP);
  /* 120a86a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a86a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a86a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a86aa push eax */
  push32((uint32_t)(EAX));
  /* 120a86ab call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a86b1u);
  /* 120a86b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a86b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a86b6 call 0x120aa8e0 */
  push32(0x120a86bbu); f_120aa8e0();
  /* 120a86bb mov esi, esp */
  ESI = (ESP);
  /* 120a86bd push 0 */
  push32((uint32_t)(0x0u));
  /* 120a86bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a86c2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 120a86c5 push edx */
  push32((uint32_t)(EDX));
  /* 120a86c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a86c9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a86cc push eax */
  push32((uint32_t)(EAX));
  /* 120a86cd mov cl, byte ptr [0x120e10a4] */
  CL = (r8((uint32_t)(0x120e10a4)));
  /* 120a86d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120a86d4 call dword ptr [0x120e3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3590))), 0x120a86dau);
  /* 120a86da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a86dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a86df call 0x120aa8e0 */
  push32(0x120a86e4u); f_120aa8e0();
L_120a86e4:;
  /* 120a86e4 jmp 0x120a8794 */
  goto L_120a8794;
L_120a86e9:;
  /* 120a86e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a86ec call 0x120a109b */
  push32(0x120a86f1u); f_120a109b();
  /* 120a86f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a86f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a86f8 jne 0x120a873d */
  if (!C.zf) goto L_120a873d;
  /* 120a86fa mov esi, esp */
  ESI = (ESP);
  /* 120a86fc push 0 */
  push32((uint32_t)(0x0u));
  /* 120a86fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8701 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8704 push edx */
  push32((uint32_t)(EDX));
  /* 120a8705 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a870bu);
  /* 120a870b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a870e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8710 call 0x120aa8e0 */
  push32(0x120a8715u); f_120aa8e0();
  /* 120a8715 mov esi, esp */
  ESI = (ESP);
  /* 120a8717 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8719 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a871c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 120a871f push ecx */
  push32((uint32_t)(ECX));
  /* 120a8720 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8723 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8726 push edx */
  push32((uint32_t)(EDX));
  /* 120a8727 mov al, byte ptr [0x120e10a4] */
  AL = (r8((uint32_t)(0x120e10a4)));
  /* 120a872c push eax */
  push32((uint32_t)(EAX));
  /* 120a872d call dword ptr [0x120e3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3590))), 0x120a8733u);
  /* 120a8733 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8736 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8738 call 0x120aa8e0 */
  push32(0x120a873du); f_120aa8e0();
L_120a873d:;
  /* 120a873d jmp 0x120a8794 */
  goto L_120a8794;
L_120a873f:;
  /* 120a873f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8742 call 0x120a109b */
  push32(0x120a8747u); f_120a109b();
  /* 120a8747 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a874c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a874e jne 0x120a8794 */
  if (!C.zf) goto L_120a8794;
  /* 120a8750 mov esi, esp */
  ESI = (ESP);
  /* 120a8752 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8754 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8757 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a875a push ecx */
  push32((uint32_t)(ECX));
  /* 120a875b call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a8761u);
  /* 120a8761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8764 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8766 call 0x120aa8e0 */
  push32(0x120a876bu); f_120aa8e0();
  /* 120a876b mov esi, esp */
  ESI = (ESP);
  /* 120a876d push 0 */
  push32((uint32_t)(0x0u));
  /* 120a876f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8772 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 120a8775 push eax */
  push32((uint32_t)(EAX));
  /* 120a8776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8779 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a877c push ecx */
  push32((uint32_t)(ECX));
  /* 120a877d mov dl, byte ptr [0x120e10a4] */
  DL = (r8((uint32_t)(0x120e10a4)));
  /* 120a8783 push edx */
  push32((uint32_t)(EDX));
  /* 120a8784 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a878au);
  /* 120a878a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a878d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a878f call 0x120aa8e0 */
  push32(0x120a8794u); f_120aa8e0();
L_120a8794:;
  /* 120a8794 pop edi */
  EDI = (pop32());
  /* 120a8795 pop esi */
  ESI = (pop32());
  /* 120a8796 pop ebx */
  EBX = (pop32());
  /* 120a8797 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a879a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a879c call 0x120aa8e0 */
  push32(0x120a87a1u); f_120aa8e0();
  /* 120a87a1 mov esp, ebp */
  ESP = (EBP);
  /* 120a87a3 pop ebp */
  EBP = (pop32());
  /* 120a87a4 ret  */
  ESPCHK(0x120a85f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008820 @ 0x120a8820 (235 bytes, 78 insns) */
void f_120a8820(void) {
  FTRACE(0x120a8820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8820 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8821 mov ebp, esp */
  EBP = (ESP);
  /* 120a8823 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8829 push ebx */
  push32((uint32_t)(EBX));
  /* 120a882a push esi */
  push32((uint32_t)(ESI));
  /* 120a882b push edi */
  push32((uint32_t)(EDI));
  /* 120a882c push ecx */
  push32((uint32_t)(ECX));
  /* 120a882d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 120a8833 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 120a8838 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a883d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a883f pop ecx */
  ECX = (pop32());
  /* 120a8840 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a8843 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 120a884a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 120a8851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8854 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8857 mov esi, esp */
  ESI = (ESP);
  /* 120a8859 push eax */
  push32((uint32_t)(EAX));
  /* 120a885a call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a8860u);
  /* 120a8860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8863 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8865 call 0x120aa8e0 */
  push32(0x120a886au); f_120aa8e0();
  /* 120a886a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 120a886d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8871 jle 0x120a88e4 */
  if ((C.zf||C.sf!=C.of)) goto L_120a88e4;
  /* 120a8873 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 120a887a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 120a8881 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 120a8888 jmp 0x120a8893 */
  goto L_120a8893;
L_120a888a:;
  /* 120a888a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 120a888d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8890 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_120a8893:;
  /* 120a8893 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 120a8896 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8899 jge 0x120a88d0 */
  if ((C.sf==C.of)) goto L_120a88d0;
  /* 120a889b mov esi, esp */
  ESI = (ESP);
  /* 120a889d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 120a88a0 push eax */
  push32((uint32_t)(EAX));
  /* 120a88a1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 120a88a4 push ecx */
  push32((uint32_t)(ECX));
  /* 120a88a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a88a8 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a88ab push edx */
  push32((uint32_t)(EDX));
  /* 120a88ac call dword ptr [0x120e35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b4))), 0x120a88b2u);
  /* 120a88b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a88b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a88b7 call 0x120aa8e0 */
  push32(0x120a88bcu); f_120aa8e0();
  /* 120a88bc mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120a88bf add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a88c2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 120a88c5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 120a88c8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a88cb mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 120a88ce jmp 0x120a888a */
  goto L_120a888a;
L_120a88d0:;
  /* 120a88d0 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120a88d3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120a88d4 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120a88d7 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 120a88da mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 120a88dd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120a88de idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120a88e1 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_120a88e4:;
  /* 120a88e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a88e7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120a88ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120a88ec mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 120a88ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120a88f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a88f5 pop edi */
  EDI = (pop32());
  /* 120a88f6 pop esi */
  ESI = (pop32());
  /* 120a88f7 pop ebx */
  EBX = (pop32());
  /* 120a88f8 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a88fe cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8900 call 0x120aa8e0 */
  push32(0x120a8905u); f_120aa8e0();
  /* 120a8905 mov esp, ebp */
  ESP = (EBP);
  /* 120a8907 pop ebp */
  EBP = (pop32());
  /* 120a8908 ret 4 */
  ESPCHK(0x120a8820u, _esp0);
  ESP += 8; return;
}

/* FUN_10008950 @ 0x120a8950 (120 bytes, 47 insns) */
void f_120a8950(void) {
  FTRACE(0x120a8950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8950 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8951 mov ebp, esp */
  EBP = (ESP);
  /* 120a8953 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8956 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8957 push esi */
  push32((uint32_t)(ESI));
  /* 120a8958 push edi */
  push32((uint32_t)(EDI));
  /* 120a8959 push ecx */
  push32((uint32_t)(ECX));
  /* 120a895a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a895d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a8962 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8967 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8969 pop ecx */
  ECX = (pop32());
  /* 120a896a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a896d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a8971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8974 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8977 mov esi, esp */
  ESI = (ESP);
  /* 120a8979 push eax */
  push32((uint32_t)(EAX));
  /* 120a897a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a897d add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8980 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8981 call dword ptr [0x120e359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e359c))), 0x120a8987u);
  /* 120a8987 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a898a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a898c call 0x120aa8e0 */
  push32(0x120a8991u); f_120aa8e0();
  /* 120a8991 mov esi, eax */
  ESI = (EAX);
  /* 120a8993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8996 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8999 mov edi, esp */
  EDI = (ESP);
  /* 120a899b push edx */
  push32((uint32_t)(EDX));
  /* 120a899c call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a89a2u);
  /* 120a89a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a89a5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a89a7 call 0x120aa8e0 */
  push32(0x120a89acu); f_120aa8e0();
  /* 120a89ac cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a89ae jne 0x120a89b4 */
  if (!C.zf) goto L_120a89b4;
  /* 120a89b0 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a89b4:;
  /* 120a89b4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a89b7 pop edi */
  EDI = (pop32());
  /* 120a89b8 pop esi */
  ESI = (pop32());
  /* 120a89b9 pop ebx */
  EBX = (pop32());
  /* 120a89ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a89bd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a89bf call 0x120aa8e0 */
  push32(0x120a89c4u); f_120aa8e0();
  /* 120a89c4 mov esp, ebp */
  ESP = (EBP);
  /* 120a89c6 pop ebp */
  EBP = (pop32());
  /* 120a89c7 ret  */
  ESPCHK(0x120a8950u, _esp0);
  ESP += 4; return;
}

/* FUN_100089f0 @ 0x120a89f0 (86 bytes, 35 insns) */
void f_120a89f0(void) {
  FTRACE(0x120a89f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a89f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a89f1 mov ebp, esp */
  EBP = (ESP);
  /* 120a89f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a89f6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a89f7 push esi */
  push32((uint32_t)(ESI));
  /* 120a89f8 push edi */
  push32((uint32_t)(EDI));
  /* 120a89f9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a89fa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a89fd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a8a02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8a07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8a09 pop ecx */
  ECX = (pop32());
  /* 120a8a0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a8a0d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a8a11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8a14 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8a17 mov esi, esp */
  ESI = (ESP);
  /* 120a8a19 push eax */
  push32((uint32_t)(EAX));
  /* 120a8a1a call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a8a20u);
  /* 120a8a20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8a23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8a25 call 0x120aa8e0 */
  push32(0x120a8a2au); f_120aa8e0();
  /* 120a8a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a8a2c jle 0x120a8a32 */
  if ((C.zf||C.sf!=C.of)) goto L_120a8a32;
  /* 120a8a2e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a8a32:;
  /* 120a8a32 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a8a35 pop edi */
  EDI = (pop32());
  /* 120a8a36 pop esi */
  ESI = (pop32());
  /* 120a8a37 pop ebx */
  EBX = (pop32());
  /* 120a8a38 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8a3b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8a3d call 0x120aa8e0 */
  push32(0x120a8a42u); f_120aa8e0();
  /* 120a8a42 mov esp, ebp */
  ESP = (EBP);
  /* 120a8a44 pop ebp */
  EBP = (pop32());
  /* 120a8a45 ret  */
  ESPCHK(0x120a89f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a60 @ 0x120a8a60 (42 bytes, 21 insns) */
void f_120a8a60(void) {
  FTRACE(0x120a8a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8a60 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8a61 mov ebp, esp */
  EBP = (ESP);
  /* 120a8a63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8a66 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8a67 push esi */
  push32((uint32_t)(ESI));
  /* 120a8a68 push edi */
  push32((uint32_t)(EDI));
  /* 120a8a69 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8a6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a8a6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a8a72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8a77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8a79 pop ecx */
  ECX = (pop32());
  /* 120a8a7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a8a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8a80 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8a83 pop edi */
  EDI = (pop32());
  /* 120a8a84 pop esi */
  ESI = (pop32());
  /* 120a8a85 pop ebx */
  EBX = (pop32());
  /* 120a8a86 mov esp, ebp */
  ESP = (EBP);
  /* 120a8a88 pop ebp */
  EBP = (pop32());
  /* 120a8a89 ret  */
  ESPCHK(0x120a8a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008aa0 @ 0x120a8aa0 (77 bytes, 32 insns) */
void f_120a8aa0(void) {
  FTRACE(0x120a8aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8aa1 mov ebp, esp */
  EBP = (ESP);
  /* 120a8aa3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8aa7 push esi */
  push32((uint32_t)(ESI));
  /* 120a8aa8 push edi */
  push32((uint32_t)(EDI));
  /* 120a8aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8aaa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a8aad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a8ab2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8ab7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8ab9 pop ecx */
  ECX = (pop32());
  /* 120a8aba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a8abd mov esi, esp */
  ESI = (ESP);
  /* 120a8abf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a8ac2 push eax */
  push32((uint32_t)(EAX));
  /* 120a8ac3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8ac6 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8aca call dword ptr [0x120e357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e357c))), 0x120a8ad0u);
  /* 120a8ad0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8ad3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8ad5 call 0x120aa8e0 */
  push32(0x120a8adau); f_120aa8e0();
  /* 120a8ada pop edi */
  EDI = (pop32());
  /* 120a8adb pop esi */
  ESI = (pop32());
  /* 120a8adc pop ebx */
  EBX = (pop32());
  /* 120a8add add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8ae0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8ae2 call 0x120aa8e0 */
  push32(0x120a8ae7u); f_120aa8e0();
  /* 120a8ae7 mov esp, ebp */
  ESP = (EBP);
  /* 120a8ae9 pop ebp */
  EBP = (pop32());
  /* 120a8aea ret 4 */
  ESPCHK(0x120a8aa0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008b00 @ 0x120a8b00 (413 bytes, 143 insns) */
void f_120a8b00(void) {
  FTRACE(0x120a8b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8b00 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8b01 mov ebp, esp */
  EBP = (ESP);
  /* 120a8b03 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8b06 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8b07 push esi */
  push32((uint32_t)(ESI));
  /* 120a8b08 push edi */
  push32((uint32_t)(EDI));
  /* 120a8b09 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8b0a lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 120a8b0d mov ecx, 0x15 */
  ECX = (0x15u);
  /* 120a8b12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8b17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8b19 pop ecx */
  ECX = (pop32());
  /* 120a8b1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a8b1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8b20 call 0x120a10e1 */
  push32(0x120a8b25u); f_120a10e1();
  /* 120a8b25 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a8b2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a8b2c je 0x120a8c8c */
  if (C.zf) goto L_120a8c8c;
  /* 120a8b32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8b35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120a8b37 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 120a8b3a cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8b3d jne 0x120a8be8 */
  if (!C.zf) goto L_120a8be8;
  /* 120a8b43 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 120a8b48 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120a8b4b push edx */
  push32((uint32_t)(EDX));
  /* 120a8b4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8b4f call 0x120a10be */
  push32(0x120a8b54u); f_120a10be();
  /* 120a8b54 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120a8b57 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8b58 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 120a8b5a push edx */
  push32((uint32_t)(EDX));
  /* 120a8b5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8b5e add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8b61 push eax */
  push32((uint32_t)(EAX));
  /* 120a8b62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8b65 call 0x120a12da */
  push32(0x120a8b6au); f_120a12da();
  /* 120a8b6a mov esi, esp */
  ESI = (ESP);
  /* 120a8b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8b6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8b71 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8b74 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8b75 call dword ptr [0x120e3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3584))), 0x120a8b7bu);
  /* 120a8b7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8b7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8b80 call 0x120aa8e0 */
  push32(0x120a8b85u); f_120aa8e0();
  /* 120a8b85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8b88 jge 0x120a8b93 */
  if ((C.sf==C.of)) goto L_120a8b93;
  /* 120a8b8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8b8d mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 120a8b91 jmp 0x120a8be8 */
  goto L_120a8be8;
L_120a8b93:;
  /* 120a8b93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8b96 call 0x120a117c */
  push32(0x120a8b9bu); f_120a117c();
  /* 120a8b9b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a8ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a8ba2 jne 0x120a8be8 */
  if (!C.zf) goto L_120a8be8;
  /* 120a8ba4 mov esi, esp */
  ESI = (ESP);
  /* 120a8ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8bab add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8bae push eax */
  push32((uint32_t)(EAX));
  /* 120a8baf call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a8bb5u);
  /* 120a8bb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8bb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8bba call 0x120aa8e0 */
  push32(0x120a8bbfu); f_120aa8e0();
  /* 120a8bbf mov esi, esp */
  ESI = (ESP);
  /* 120a8bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8bc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8bc6 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 120a8bc9 push edx */
  push32((uint32_t)(EDX));
  /* 120a8bca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8bcd add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8bd0 push eax */
  push32((uint32_t)(EAX));
  /* 120a8bd1 mov cl, byte ptr [0x120ded88] */
  CL = (r8((uint32_t)(0x120ded88)));
  /* 120a8bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8bd8 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a8bdeu);
  /* 120a8bde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8be1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8be3 call 0x120aa8e0 */
  push32(0x120a8be8u); f_120aa8e0();
L_120a8be8:;
  /* 120a8be8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8beb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120a8bed mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 120a8bf0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8bf3 jne 0x120a8c8c */
  if (!C.zf) goto L_120a8c8c;
  /* 120a8bf9 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 120a8bfe lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 120a8c01 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8c02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8c05 call 0x120a10be */
  push32(0x120a8c0au); f_120a10be();
  /* 120a8c0a mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 120a8c0d push edx */
  push32((uint32_t)(EDX));
  /* 120a8c0e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 120a8c10 push eax */
  push32((uint32_t)(EAX));
  /* 120a8c11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8c14 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8c17 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8c18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8c1b call 0x120a12da */
  push32(0x120a8c20u); f_120a12da();
  /* 120a8c20 mov esi, esp */
  ESI = (ESP);
  /* 120a8c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8c24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8c27 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8c2a push edx */
  push32((uint32_t)(EDX));
  /* 120a8c2b call dword ptr [0x120e3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3584))), 0x120a8c31u);
  /* 120a8c31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8c34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8c36 call 0x120aa8e0 */
  push32(0x120a8c3bu); f_120aa8e0();
  /* 120a8c3b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8c3e jge 0x120a8c85 */
  if ((C.sf==C.of)) goto L_120a8c85;
  /* 120a8c40 mov esi, esp */
  ESI = (ESP);
  /* 120a8c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8c44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8c47 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8c4a push eax */
  push32((uint32_t)(EAX));
  /* 120a8c4b call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a8c51u);
  /* 120a8c51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8c54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8c56 call 0x120aa8e0 */
  push32(0x120a8c5bu); f_120aa8e0();
  /* 120a8c5b mov esi, esp */
  ESI = (ESP);
  /* 120a8c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8c5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8c62 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 120a8c65 push edx */
  push32((uint32_t)(EDX));
  /* 120a8c66 mov eax, dword ptr [0x120e10ac] */
  EAX = (r32((uint32_t)(0x120e10ac)));
  /* 120a8c6b push eax */
  push32((uint32_t)(EAX));
  /* 120a8c6c mov cl, byte ptr [0x120ded88] */
  CL = (r8((uint32_t)(0x120ded88)));
  /* 120a8c72 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8c73 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a8c79u);
  /* 120a8c79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8c7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8c7e call 0x120aa8e0 */
  push32(0x120a8c83u); f_120aa8e0();
  /* 120a8c83 jmp 0x120a8c8c */
  goto L_120a8c8c;
L_120a8c85:;
  /* 120a8c85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8c88 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_120a8c8c:;
  /* 120a8c8c pop edi */
  EDI = (pop32());
  /* 120a8c8d pop esi */
  ESI = (pop32());
  /* 120a8c8e pop ebx */
  EBX = (pop32());
  /* 120a8c8f add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8c92 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8c94 call 0x120aa8e0 */
  push32(0x120a8c99u); f_120aa8e0();
  /* 120a8c99 mov esp, ebp */
  ESP = (EBP);
  /* 120a8c9b pop ebp */
  EBP = (pop32());
  /* 120a8c9c ret  */
  ESPCHK(0x120a8b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x120a8d10 (311 bytes, 104 insns) */
void f_120a8d10(void) {
  FTRACE(0x120a8d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8d10 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8d11 mov ebp, esp */
  EBP = (ESP);
  /* 120a8d13 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8d19 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8d1a push esi */
  push32((uint32_t)(ESI));
  /* 120a8d1b push edi */
  push32((uint32_t)(EDI));
  /* 120a8d1c push ecx */
  push32((uint32_t)(ECX));
  /* 120a8d1d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 120a8d23 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 120a8d28 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8d2d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8d2f pop ecx */
  ECX = (pop32());
  /* 120a8d30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a8d33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a8d36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120a8d39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a8d3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120a8d3f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 120a8d42 push edx */
  push32((uint32_t)(EDX));
  /* 120a8d43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8d46 call 0x120a10be */
  push32(0x120a8d4bu); f_120a10be();
  /* 120a8d4b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120a8d4d mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 120a8d50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120a8d53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120a8d56 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120a8d59 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120a8d5c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120a8d5f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 120a8d62 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120a8d65 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8d68 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 120a8d6b fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 120a8d6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120a8d71 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8d74 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 120a8d77 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 120a8d7a fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 120a8d7c sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8d7f fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 120a8d82 call 0x120aaa94 */
  push32(0x120a8d87u); f_120aaa94();
  /* 120a8d87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8d8a fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 120a8d8d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120a8d90 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8d93 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120a8d95 jge 0x120a8da3 */
  if ((C.sf==C.of)) goto L_120a8da3;
  /* 120a8d97 fld qword ptr [0x120db040] */
  fpu_push(rf64((uint32_t)(0x120db040)));
  /* 120a8d9d fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 120a8da0 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_120a8da3:;
  /* 120a8da3 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 120a8da6 fmul qword ptr [0x120db030] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x120db030)));
  /* 120a8dac fdiv qword ptr [0x120db020] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x120db020)));
  /* 120a8db2 call 0x120aabcc */
  push32(0x120a8db7u); f_120aabcc();
  /* 120a8db7 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120a8dba fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 120a8dbd fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 120a8dc0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120a8dc3 push edx */
  push32((uint32_t)(EDX));
  /* 120a8dc4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120a8dc7 push eax */
  push32((uint32_t)(EAX));
  /* 120a8dc8 call 0x120aa9e4 */
  push32(0x120a8dcdu); f_120aa9e4();
  /* 120a8dcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8dd0 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 120a8dd3 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 120a8dd6 call 0x120aabcc */
  push32(0x120a8ddbu); f_120aabcc();
  /* 120a8ddb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120a8dde fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 120a8de1 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 120a8de4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120a8de7 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8de8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120a8deb push edx */
  push32((uint32_t)(EDX));
  /* 120a8dec call 0x120aa934 */
  push32(0x120a8df1u); f_120aa934();
  /* 120a8df1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8df4 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 120a8df7 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 120a8dfa call 0x120aabcc */
  push32(0x120a8dffu); f_120aabcc();
  /* 120a8dff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120a8e02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 120a8e04 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120a8e07 push eax */
  push32((uint32_t)(EAX));
  /* 120a8e08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120a8e0b push ecx */
  push32((uint32_t)(ECX));
  /* 120a8e0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8e0f add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8e12 push edx */
  push32((uint32_t)(EDX));
  /* 120a8e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8e16 call 0x120a12da */
  push32(0x120a8e1bu); f_120a12da();
  /* 120a8e1b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120a8e1e add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8e26 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 120a8e29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8e2c call 0x120a1230 */
  push32(0x120a8e31u); f_120a1230();
  /* 120a8e31 pop edi */
  EDI = (pop32());
  /* 120a8e32 pop esi */
  ESI = (pop32());
  /* 120a8e33 pop ebx */
  EBX = (pop32());
  /* 120a8e34 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8e3a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8e3c call 0x120aa8e0 */
  push32(0x120a8e41u); f_120aa8e0();
  /* 120a8e41 mov esp, ebp */
  ESP = (EBP);
  /* 120a8e43 pop ebp */
  EBP = (pop32());
  /* 120a8e44 ret 0xc */
  ESPCHK(0x120a8d10u, _esp0);
  ESP += 16; return;
}

/* FUN_10008ea0 @ 0x120a8ea0 (198 bytes, 71 insns) */
void f_120a8ea0(void) {
  FTRACE(0x120a8ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8ea1 mov ebp, esp */
  EBP = (ESP);
  /* 120a8ea3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8ea7 push esi */
  push32((uint32_t)(ESI));
  /* 120a8ea8 push edi */
  push32((uint32_t)(EDI));
  /* 120a8ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8eaa lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 120a8ead mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 120a8eb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8eb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8eb9 pop ecx */
  ECX = (pop32());
  /* 120a8eba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a8ebd mov esi, esp */
  ESI = (ESP);
  /* 120a8ebf lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 120a8ec2 push eax */
  push32((uint32_t)(EAX));
  /* 120a8ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a8ec5 mov ecx, dword ptr [0x120e10b0] */
  ECX = (r32((uint32_t)(0x120e10b0)));
  /* 120a8ecb push ecx */
  push32((uint32_t)(ECX));
  /* 120a8ecc call dword ptr [0x120e35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b4))), 0x120a8ed2u);
  /* 120a8ed2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8ed5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8ed7 call 0x120aa8e0 */
  push32(0x120a8edcu); f_120aa8e0();
  /* 120a8edc mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120a8edf mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 120a8ee2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120a8ee5 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 120a8ee8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a8eeb mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 120a8eee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120a8ef1 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120a8ef4 mov esi, esp */
  ESI = (ESP);
  /* 120a8ef6 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 120a8ef9 push eax */
  push32((uint32_t)(EAX));
  /* 120a8efa call dword ptr [0x120e34f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34f4))), 0x120a8f00u);
  /* 120a8f00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8f03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8f05 call 0x120aa8e0 */
  push32(0x120a8f0au); f_120aa8e0();
  /* 120a8f0a mov esi, esp */
  ESI = (ESP);
  /* 120a8f0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120a8f0f push ecx */
  push32((uint32_t)(ECX));
  /* 120a8f10 mov edx, dword ptr [0x120e10b0] */
  EDX = (r32((uint32_t)(0x120e10b0)));
  /* 120a8f16 push edx */
  push32((uint32_t)(EDX));
  /* 120a8f17 mov eax, dword ptr [0x120e10ac] */
  EAX = (r32((uint32_t)(0x120e10ac)));
  /* 120a8f1c push eax */
  push32((uint32_t)(EAX));
  /* 120a8f1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a8f20 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8f21 call dword ptr [0x120e34f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34f8))), 0x120a8f27u);
  /* 120a8f27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8f2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8f2c call 0x120aa8e0 */
  push32(0x120a8f31u); f_120aa8e0();
  /* 120a8f31 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 120a8f34 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120a8f37 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120a8f3a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120a8f3d mov esi, esp */
  ESI = (ESP);
  /* 120a8f3f lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 120a8f42 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8f43 call dword ptr [0x120e34f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34f4))), 0x120a8f49u);
  /* 120a8f49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8f4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8f4e call 0x120aa8e0 */
  push32(0x120a8f53u); f_120aa8e0();
  /* 120a8f53 pop edi */
  EDI = (pop32());
  /* 120a8f54 pop esi */
  ESI = (pop32());
  /* 120a8f55 pop ebx */
  EBX = (pop32());
  /* 120a8f56 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8f59 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8f5b call 0x120aa8e0 */
  push32(0x120a8f60u); f_120aa8e0();
  /* 120a8f60 mov esp, ebp */
  ESP = (EBP);
  /* 120a8f62 pop ebp */
  EBP = (pop32());
  /* 120a8f63 ret 0x10 */
  ESPCHK(0x120a8ea0u, _esp0);
  ESP += 20; return;
}

/* FUN_10008fa0 @ 0x120a8fa0 (120 bytes, 47 insns) */
void f_120a8fa0(void) {
  FTRACE(0x120a8fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a8fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a8fa1 mov ebp, esp */
  EBP = (ESP);
  /* 120a8fa3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a8fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a8fa7 push esi */
  push32((uint32_t)(ESI));
  /* 120a8fa8 push edi */
  push32((uint32_t)(EDI));
  /* 120a8fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8faa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a8fad mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a8fb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a8fb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a8fb9 pop ecx */
  ECX = (pop32());
  /* 120a8fba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a8fbd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a8fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8fc4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8fc7 mov esi, esp */
  ESI = (ESP);
  /* 120a8fc9 push eax */
  push32((uint32_t)(EAX));
  /* 120a8fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8fcd add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 120a8fd1 call dword ptr [0x120e359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e359c))), 0x120a8fd7u);
  /* 120a8fd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8fda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8fdc call 0x120aa8e0 */
  push32(0x120a8fe1u); f_120aa8e0();
  /* 120a8fe1 mov esi, eax */
  ESI = (EAX);
  /* 120a8fe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a8fe6 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8fe9 mov edi, esp */
  EDI = (ESP);
  /* 120a8feb push edx */
  push32((uint32_t)(EDX));
  /* 120a8fec call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a8ff2u);
  /* 120a8ff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a8ff5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8ff7 call 0x120aa8e0 */
  push32(0x120a8ffcu); f_120aa8e0();
  /* 120a8ffc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a8ffe jne 0x120a9004 */
  if (!C.zf) goto L_120a9004;
  /* 120a9000 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a9004:;
  /* 120a9004 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a9007 pop edi */
  EDI = (pop32());
  /* 120a9008 pop esi */
  ESI = (pop32());
  /* 120a9009 pop ebx */
  EBX = (pop32());
  /* 120a900a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a900d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a900f call 0x120aa8e0 */
  push32(0x120a9014u); f_120aa8e0();
  /* 120a9014 mov esp, ebp */
  ESP = (EBP);
  /* 120a9016 pop ebp */
  EBP = (pop32());
  /* 120a9017 ret  */
  ESPCHK(0x120a8fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009040 @ 0x120a9040 (86 bytes, 35 insns) */
void f_120a9040(void) {
  FTRACE(0x120a9040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9040 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9041 mov ebp, esp */
  EBP = (ESP);
  /* 120a9043 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9046 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9047 push esi */
  push32((uint32_t)(ESI));
  /* 120a9048 push edi */
  push32((uint32_t)(EDI));
  /* 120a9049 push ecx */
  push32((uint32_t)(ECX));
  /* 120a904a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a904d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a9052 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9057 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9059 pop ecx */
  ECX = (pop32());
  /* 120a905a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a905d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a9061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9064 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9067 mov esi, esp */
  ESI = (ESP);
  /* 120a9069 push eax */
  push32((uint32_t)(EAX));
  /* 120a906a call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a9070u);
  /* 120a9070 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9073 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9075 call 0x120aa8e0 */
  push32(0x120a907au); f_120aa8e0();
  /* 120a907a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a907c jle 0x120a9082 */
  if ((C.zf||C.sf!=C.of)) goto L_120a9082;
  /* 120a907e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a9082:;
  /* 120a9082 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a9085 pop edi */
  EDI = (pop32());
  /* 120a9086 pop esi */
  ESI = (pop32());
  /* 120a9087 pop ebx */
  EBX = (pop32());
  /* 120a9088 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a908b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a908d call 0x120aa8e0 */
  push32(0x120a9092u); f_120aa8e0();
  /* 120a9092 mov esp, ebp */
  ESP = (EBP);
  /* 120a9094 pop ebp */
  EBP = (pop32());
  /* 120a9095 ret  */
  ESPCHK(0x120a9040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x120a90b0 (42 bytes, 21 insns) */
void f_120a90b0(void) {
  FTRACE(0x120a90b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a90b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a90b1 mov ebp, esp */
  EBP = (ESP);
  /* 120a90b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a90b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a90b7 push esi */
  push32((uint32_t)(ESI));
  /* 120a90b8 push edi */
  push32((uint32_t)(EDI));
  /* 120a90b9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a90ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a90bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a90c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a90c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a90c9 pop ecx */
  ECX = (pop32());
  /* 120a90ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a90cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a90d0 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a90d3 pop edi */
  EDI = (pop32());
  /* 120a90d4 pop esi */
  ESI = (pop32());
  /* 120a90d5 pop ebx */
  EBX = (pop32());
  /* 120a90d6 mov esp, ebp */
  ESP = (EBP);
  /* 120a90d8 pop ebp */
  EBP = (pop32());
  /* 120a90d9 ret  */
  ESPCHK(0x120a90b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090f0 @ 0x120a90f0 (235 bytes, 78 insns) */
void f_120a90f0(void) {
  FTRACE(0x120a90f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a90f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a90f1 mov ebp, esp */
  EBP = (ESP);
  /* 120a90f3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a90f9 push ebx */
  push32((uint32_t)(EBX));
  /* 120a90fa push esi */
  push32((uint32_t)(ESI));
  /* 120a90fb push edi */
  push32((uint32_t)(EDI));
  /* 120a90fc push ecx */
  push32((uint32_t)(ECX));
  /* 120a90fd lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 120a9103 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 120a9108 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a910d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a910f pop ecx */
  ECX = (pop32());
  /* 120a9110 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9113 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 120a911a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 120a9121 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9124 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9127 mov esi, esp */
  ESI = (ESP);
  /* 120a9129 push eax */
  push32((uint32_t)(EAX));
  /* 120a912a call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a9130u);
  /* 120a9130 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9133 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9135 call 0x120aa8e0 */
  push32(0x120a913au); f_120aa8e0();
  /* 120a913a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 120a913d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9141 jle 0x120a91b4 */
  if ((C.zf||C.sf!=C.of)) goto L_120a91b4;
  /* 120a9143 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 120a914a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 120a9151 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 120a9158 jmp 0x120a9163 */
  goto L_120a9163;
L_120a915a:;
  /* 120a915a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 120a915d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9160 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_120a9163:;
  /* 120a9163 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 120a9166 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9169 jge 0x120a91a0 */
  if ((C.sf==C.of)) goto L_120a91a0;
  /* 120a916b mov esi, esp */
  ESI = (ESP);
  /* 120a916d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 120a9170 push eax */
  push32((uint32_t)(EAX));
  /* 120a9171 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 120a9174 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9175 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9178 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a917b push edx */
  push32((uint32_t)(EDX));
  /* 120a917c call dword ptr [0x120e35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b4))), 0x120a9182u);
  /* 120a9182 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9185 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9187 call 0x120aa8e0 */
  push32(0x120a918cu); f_120aa8e0();
  /* 120a918c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120a918f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9192 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 120a9195 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 120a9198 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a919b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 120a919e jmp 0x120a915a */
  goto L_120a915a;
L_120a91a0:;
  /* 120a91a0 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120a91a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120a91a4 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120a91a7 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 120a91aa mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 120a91ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120a91ae idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120a91b1 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_120a91b4:;
  /* 120a91b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a91b7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120a91ba mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120a91bc mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 120a91bf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120a91c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a91c5 pop edi */
  EDI = (pop32());
  /* 120a91c6 pop esi */
  ESI = (pop32());
  /* 120a91c7 pop ebx */
  EBX = (pop32());
  /* 120a91c8 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a91ce cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a91d0 call 0x120aa8e0 */
  push32(0x120a91d5u); f_120aa8e0();
  /* 120a91d5 mov esp, ebp */
  ESP = (EBP);
  /* 120a91d7 pop ebp */
  EBP = (pop32());
  /* 120a91d8 ret 4 */
  ESPCHK(0x120a90f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009220 @ 0x120a9220 (250 bytes, 89 insns) */
void f_120a9220(void) {
  FTRACE(0x120a9220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9220 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9221 mov ebp, esp */
  EBP = (ESP);
  /* 120a9223 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9226 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9227 push esi */
  push32((uint32_t)(ESI));
  /* 120a9228 push edi */
  push32((uint32_t)(EDI));
  /* 120a9229 push ecx */
  push32((uint32_t)(ECX));
  /* 120a922a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a922d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a9232 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9237 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9239 pop ecx */
  ECX = (pop32());
  /* 120a923a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a923d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9240 call 0x120a110e */
  push32(0x120a9245u); f_120a110e();
  /* 120a9245 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a924a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a924c je 0x120a9309 */
  if (C.zf) goto L_120a9309;
  /* 120a9252 mov esi, esp */
  ESI = (ESP);
  /* 120a9254 mov eax, dword ptr [0x120ded8c] */
  EAX = (r32((uint32_t)(0x120ded8c)));
  /* 120a9259 push eax */
  push32((uint32_t)(EAX));
  /* 120a925a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a925d push ecx */
  push32((uint32_t)(ECX));
  /* 120a925e mov edx, dword ptr [0x120e10b4] */
  EDX = (r32((uint32_t)(0x120e10b4)));
  /* 120a9264 push edx */
  push32((uint32_t)(EDX));
  /* 120a9265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9268 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a926b push eax */
  push32((uint32_t)(EAX));
  /* 120a926c call dword ptr [0x120e34f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34f8))), 0x120a9272u);
  /* 120a9272 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9277 call 0x120aa8e0 */
  push32(0x120a927cu); f_120aa8e0();
  /* 120a927c mov esi, esp */
  ESI = (ESP);
  /* 120a927e push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9280 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9283 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9286 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9287 call dword ptr [0x120e3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3584))), 0x120a928du);
  /* 120a928d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9292 call 0x120aa8e0 */
  push32(0x120a9297u); f_120aa8e0();
  /* 120a9297 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a9299 jle 0x120a92bc */
  if ((C.zf||C.sf!=C.of)) goto L_120a92bc;
  /* 120a929b mov esi, esp */
  ESI = (ESP);
  /* 120a929d push 0 */
  push32((uint32_t)(0x0u));
  /* 120a929f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a92a2 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a92a5 push edx */
  push32((uint32_t)(EDX));
  /* 120a92a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a92a9 push eax */
  push32((uint32_t)(EAX));
  /* 120a92aa call dword ptr [0x120e3594] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3594))), 0x120a92b0u);
  /* 120a92b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a92b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a92b5 call 0x120aa8e0 */
  push32(0x120a92bau); f_120aa8e0();
  /* 120a92ba jmp 0x120a9309 */
  goto L_120a9309;
L_120a92bc:;
  /* 120a92bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a92bf call 0x120a1244 */
  push32(0x120a92c4u); f_120a1244();
  /* 120a92c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a92c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a92cb jne 0x120a9309 */
  if (!C.zf) goto L_120a9309;
  /* 120a92cd mov esi, esp */
  ESI = (ESP);
  /* 120a92cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120a92d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a92d4 push ecx */
  push32((uint32_t)(ECX));
  /* 120a92d5 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a92dbu);
  /* 120a92db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a92de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a92e0 call 0x120aa8e0 */
  push32(0x120a92e5u); f_120aa8e0();
  /* 120a92e5 mov esi, esp */
  ESI = (ESP);
  /* 120a92e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a92e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a92eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a92ee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120a92f1 push eax */
  push32((uint32_t)(EAX));
  /* 120a92f2 mov cl, byte ptr [0x120ded90] */
  CL = (r8((uint32_t)(0x120ded90)));
  /* 120a92f8 push ecx */
  push32((uint32_t)(ECX));
  /* 120a92f9 call dword ptr [0x120e3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3590))), 0x120a92ffu);
  /* 120a92ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9302 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9304 call 0x120aa8e0 */
  push32(0x120a9309u); f_120aa8e0();
L_120a9309:;
  /* 120a9309 pop edi */
  EDI = (pop32());
  /* 120a930a pop esi */
  ESI = (pop32());
  /* 120a930b pop ebx */
  EBX = (pop32());
  /* 120a930c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a930f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9311 call 0x120aa8e0 */
  push32(0x120a9316u); f_120aa8e0();
  /* 120a9316 mov esp, ebp */
  ESP = (EBP);
  /* 120a9318 pop ebp */
  EBP = (pop32());
  /* 120a9319 ret  */
  ESPCHK(0x120a9220u, _esp0);
  ESP += 4; return;
}

/* FUN_10009360 @ 0x120a9360 (74 bytes, 31 insns) */
void f_120a9360(void) {
  FTRACE(0x120a9360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9360 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9361 mov ebp, esp */
  EBP = (ESP);
  /* 120a9363 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9366 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9367 push esi */
  push32((uint32_t)(ESI));
  /* 120a9368 push edi */
  push32((uint32_t)(EDI));
  /* 120a9369 push ecx */
  push32((uint32_t)(ECX));
  /* 120a936a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a936d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a9372 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9377 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9379 pop ecx */
  ECX = (pop32());
  /* 120a937a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a937d mov esi, esp */
  ESI = (ESP);
  /* 120a937f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a9382 push eax */
  push32((uint32_t)(EAX));
  /* 120a9383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9386 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9387 call dword ptr [0x120e357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e357c))), 0x120a938du);
  /* 120a938d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9392 call 0x120aa8e0 */
  push32(0x120a9397u); f_120aa8e0();
  /* 120a9397 pop edi */
  EDI = (pop32());
  /* 120a9398 pop esi */
  ESI = (pop32());
  /* 120a9399 pop ebx */
  EBX = (pop32());
  /* 120a939a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a939d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a939f call 0x120aa8e0 */
  push32(0x120a93a4u); f_120aa8e0();
  /* 120a93a4 mov esp, ebp */
  ESP = (EBP);
  /* 120a93a6 pop ebp */
  EBP = (pop32());
  /* 120a93a7 ret 4 */
  ESPCHK(0x120a9360u, _esp0);
  ESP += 8; return;
}

/* FUN_100093c0 @ 0x120a93c0 (114 bytes, 45 insns) */
void f_120a93c0(void) {
  FTRACE(0x120a93c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a93c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a93c1 mov ebp, esp */
  EBP = (ESP);
  /* 120a93c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a93c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a93c7 push esi */
  push32((uint32_t)(ESI));
  /* 120a93c8 push edi */
  push32((uint32_t)(EDI));
  /* 120a93c9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a93ca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a93cd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a93d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a93d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a93d9 pop ecx */
  ECX = (pop32());
  /* 120a93da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a93dd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a93e1 mov esi, esp */
  ESI = (ESP);
  /* 120a93e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a93e6 push eax */
  push32((uint32_t)(EAX));
  /* 120a93e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a93ea mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120a93ed push edx */
  push32((uint32_t)(EDX));
  /* 120a93ee call dword ptr [0x120e359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e359c))), 0x120a93f4u);
  /* 120a93f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a93f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a93f9 call 0x120aa8e0 */
  push32(0x120a93feu); f_120aa8e0();
  /* 120a93fe mov esi, eax */
  ESI = (EAX);
  /* 120a9400 mov edi, esp */
  EDI = (ESP);
  /* 120a9402 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9405 push eax */
  push32((uint32_t)(EAX));
  /* 120a9406 call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a940cu);
  /* 120a940c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a940f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9411 call 0x120aa8e0 */
  push32(0x120a9416u); f_120aa8e0();
  /* 120a9416 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9418 jne 0x120a941e */
  if (!C.zf) goto L_120a941e;
  /* 120a941a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a941e:;
  /* 120a941e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a9421 pop edi */
  EDI = (pop32());
  /* 120a9422 pop esi */
  ESI = (pop32());
  /* 120a9423 pop ebx */
  EBX = (pop32());
  /* 120a9424 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9427 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9429 call 0x120aa8e0 */
  push32(0x120a942eu); f_120aa8e0();
  /* 120a942e mov esp, ebp */
  ESP = (EBP);
  /* 120a9430 pop ebp */
  EBP = (pop32());
  /* 120a9431 ret  */
  ESPCHK(0x120a93c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009450 @ 0x120a9450 (83 bytes, 34 insns) */
void f_120a9450(void) {
  FTRACE(0x120a9450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9450 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9451 mov ebp, esp */
  EBP = (ESP);
  /* 120a9453 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9456 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9457 push esi */
  push32((uint32_t)(ESI));
  /* 120a9458 push edi */
  push32((uint32_t)(EDI));
  /* 120a9459 push ecx */
  push32((uint32_t)(ECX));
  /* 120a945a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a945d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a9462 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9467 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9469 pop ecx */
  ECX = (pop32());
  /* 120a946a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a946d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a9471 mov esi, esp */
  ESI = (ESP);
  /* 120a9473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9476 push eax */
  push32((uint32_t)(EAX));
  /* 120a9477 call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a947du);
  /* 120a947d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9480 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9482 call 0x120aa8e0 */
  push32(0x120a9487u); f_120aa8e0();
  /* 120a9487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a9489 jle 0x120a948f */
  if ((C.zf||C.sf!=C.of)) goto L_120a948f;
  /* 120a948b mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a948f:;
  /* 120a948f mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a9492 pop edi */
  EDI = (pop32());
  /* 120a9493 pop esi */
  ESI = (pop32());
  /* 120a9494 pop ebx */
  EBX = (pop32());
  /* 120a9495 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9498 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a949a call 0x120aa8e0 */
  push32(0x120a949fu); f_120aa8e0();
  /* 120a949f mov esp, ebp */
  ESP = (EBP);
  /* 120a94a1 pop ebp */
  EBP = (pop32());
  /* 120a94a2 ret  */
  ESPCHK(0x120a9450u, _esp0);
  ESP += 4; return;
}

/* FUN_100094c0 @ 0x120a94c0 (126 bytes, 48 insns) */
void f_120a94c0(void) {
  FTRACE(0x120a94c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a94c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a94c1 mov ebp, esp */
  EBP = (ESP);
  /* 120a94c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a94c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a94c7 push esi */
  push32((uint32_t)(ESI));
  /* 120a94c8 push edi */
  push32((uint32_t)(EDI));
  /* 120a94c9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a94ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a94cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a94d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a94d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a94d9 pop ecx */
  ECX = (pop32());
  /* 120a94da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a94dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a94e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a94e3 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 120a94e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a94e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a94ec mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 120a94ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a94f2 push ecx */
  push32((uint32_t)(ECX));
  /* 120a94f3 call 0x120a10d2 */
  push32(0x120a94f8u); f_120a10d2();
  /* 120a94f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a94fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a94fe mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 120a9501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9504 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 120a9507 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 120a9509 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a950c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120a950f mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 120a9512 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9515 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9518 mov esi, esp */
  ESI = (ESP);
  /* 120a951a push ecx */
  push32((uint32_t)(ECX));
  /* 120a951b call dword ptr [0x120e35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35a4))), 0x120a9521u);
  /* 120a9521 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9524 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9526 call 0x120aa8e0 */
  push32(0x120a952bu); f_120aa8e0();
  /* 120a952b pop edi */
  EDI = (pop32());
  /* 120a952c pop esi */
  ESI = (pop32());
  /* 120a952d pop ebx */
  EBX = (pop32());
  /* 120a952e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9531 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9533 call 0x120aa8e0 */
  push32(0x120a9538u); f_120aa8e0();
  /* 120a9538 mov esp, ebp */
  ESP = (EBP);
  /* 120a953a pop ebp */
  EBP = (pop32());
  /* 120a953b ret 0x10 */
  ESPCHK(0x120a94c0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009560 @ 0x120a9560 (136 bytes, 54 insns) */
void f_120a9560(void) {
  FTRACE(0x120a9560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9560 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9561 mov ebp, esp */
  EBP = (ESP);
  /* 120a9563 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9566 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9567 push esi */
  push32((uint32_t)(ESI));
  /* 120a9568 push edi */
  push32((uint32_t)(EDI));
  /* 120a9569 push ecx */
  push32((uint32_t)(ECX));
  /* 120a956a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a956d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a9572 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9577 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9579 pop ecx */
  ECX = (pop32());
  /* 120a957a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a957d mov esi, esp */
  ESI = (ESP);
  /* 120a957f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a9582 push eax */
  push32((uint32_t)(EAX));
  /* 120a9583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9586 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9589 push ecx */
  push32((uint32_t)(ECX));
  /* 120a958a call dword ptr [0x120e357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e357c))), 0x120a9590u);
  /* 120a9590 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9593 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9595 call 0x120aa8e0 */
  push32(0x120a959au); f_120aa8e0();
  /* 120a959a mov esi, esp */
  ESI = (ESP);
  /* 120a959c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a959f push edx */
  push32((uint32_t)(EDX));
  /* 120a95a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a95a3 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a95a6 push eax */
  push32((uint32_t)(EAX));
  /* 120a95a7 call dword ptr [0x120e3570] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3570))), 0x120a95adu);
  /* 120a95ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a95b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a95b2 call 0x120aa8e0 */
  push32(0x120a95b7u); f_120aa8e0();
  /* 120a95b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120a95ba push ecx */
  push32((uint32_t)(ECX));
  /* 120a95bb mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 120a95be push edx */
  push32((uint32_t)(EDX));
  /* 120a95bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a95c2 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a95c5 push eax */
  push32((uint32_t)(EAX));
  /* 120a95c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a95c9 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a95cc push ecx */
  push32((uint32_t)(ECX));
  /* 120a95cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a95d0 call 0x120a1073 */
  push32(0x120a95d5u); f_120a1073();
  /* 120a95d5 pop edi */
  EDI = (pop32());
  /* 120a95d6 pop esi */
  ESI = (pop32());
  /* 120a95d7 pop ebx */
  EBX = (pop32());
  /* 120a95d8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a95db cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a95dd call 0x120aa8e0 */
  push32(0x120a95e2u); f_120aa8e0();
  /* 120a95e2 mov esp, ebp */
  ESP = (EBP);
  /* 120a95e4 pop ebp */
  EBP = (pop32());
  /* 120a95e5 ret 0x10 */
  ESPCHK(0x120a9560u, _esp0);
  ESP += 20; return;
}

/* FUN_10009610 @ 0x120a9610 (150 bytes, 58 insns) */
void f_120a9610(void) {
  FTRACE(0x120a9610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9610 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9611 mov ebp, esp */
  EBP = (ESP);
  /* 120a9613 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9616 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9617 push esi */
  push32((uint32_t)(ESI));
  /* 120a9618 push edi */
  push32((uint32_t)(EDI));
  /* 120a9619 push ecx */
  push32((uint32_t)(ECX));
  /* 120a961a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a961d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a9622 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9627 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9629 pop ecx */
  ECX = (pop32());
  /* 120a962a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a962d mov esi, esp */
  ESI = (ESP);
  /* 120a962f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a9632 push eax */
  push32((uint32_t)(EAX));
  /* 120a9633 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9636 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9639 push ecx */
  push32((uint32_t)(ECX));
  /* 120a963a call dword ptr [0x120e357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e357c))), 0x120a9640u);
  /* 120a9640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9645 call 0x120aa8e0 */
  push32(0x120a964au); f_120aa8e0();
  /* 120a964a mov esi, esp */
  ESI = (ESP);
  /* 120a964c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 120a9651 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9654 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9657 push edx */
  push32((uint32_t)(EDX));
  /* 120a9658 mov eax, dword ptr [0x120e10b8] */
  EAX = (r32((uint32_t)(0x120e10b8)));
  /* 120a965d push eax */
  push32((uint32_t)(EAX));
  /* 120a965e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9661 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9664 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9665 call dword ptr [0x120e34f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34f8))), 0x120a966bu);
  /* 120a966b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a966e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9670 call 0x120aa8e0 */
  push32(0x120a9675u); f_120aa8e0();
  /* 120a9675 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120a9678 push edx */
  push32((uint32_t)(EDX));
  /* 120a9679 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 120a967c push eax */
  push32((uint32_t)(EAX));
  /* 120a967d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9680 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9683 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9687 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a968a push edx */
  push32((uint32_t)(EDX));
  /* 120a968b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a968e call 0x120a1073 */
  push32(0x120a9693u); f_120a1073();
  /* 120a9693 pop edi */
  EDI = (pop32());
  /* 120a9694 pop esi */
  ESI = (pop32());
  /* 120a9695 pop ebx */
  EBX = (pop32());
  /* 120a9696 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9699 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a969b call 0x120aa8e0 */
  push32(0x120a96a0u); f_120aa8e0();
  /* 120a96a0 mov esp, ebp */
  ESP = (EBP);
  /* 120a96a2 pop ebp */
  EBP = (pop32());
  /* 120a96a3 ret 0xc */
  ESPCHK(0x120a9610u, _esp0);
  ESP += 16; return;
}

/* FUN_100096d0 @ 0x120a96d0 (255 bytes, 92 insns) */
void f_120a96d0(void) {
  FTRACE(0x120a96d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a96d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a96d1 mov ebp, esp */
  EBP = (ESP);
  /* 120a96d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a96d6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a96d7 push esi */
  push32((uint32_t)(ESI));
  /* 120a96d8 push edi */
  push32((uint32_t)(EDI));
  /* 120a96d9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a96da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a96dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a96e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a96e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a96e9 pop ecx */
  ECX = (pop32());
  /* 120a96ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a96ed mov esi, esp */
  ESI = (ESP);
  /* 120a96ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a96f2 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 120a96f5 push ecx */
  push32((uint32_t)(ECX));
  /* 120a96f6 call dword ptr [0x120e3548] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3548))), 0x120a96fcu);
  /* 120a96fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a96ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9701 call 0x120aa8e0 */
  push32(0x120a9706u); f_120aa8e0();
  /* 120a9706 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a970b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a970d je 0x120a9755 */
  if (C.zf) goto L_120a9755;
  /* 120a970f mov esi, esp */
  ESI = (ESP);
  /* 120a9711 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9714 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120a9716 push eax */
  push32((uint32_t)(EAX));
  /* 120a9717 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a971a mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 120a971d push edx */
  push32((uint32_t)(EDX));
  /* 120a971e call dword ptr [0x120e3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3584))), 0x120a9724u);
  /* 120a9724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9727 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9729 call 0x120aa8e0 */
  push32(0x120a972eu); f_120aa8e0();
  /* 120a972e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a9730 jle 0x120a9755 */
  if ((C.zf||C.sf!=C.of)) goto L_120a9755;
  /* 120a9732 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9735 call 0x120a12cb */
  push32(0x120a973au); f_120a12cb();
  /* 120a973a mov esi, esp */
  ESI = (ESP);
  /* 120a973c push 0 */
  push32((uint32_t)(0x0u));
  /* 120a973e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9741 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 120a9744 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9745 call dword ptr [0x120e354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e354c))), 0x120a974bu);
  /* 120a974b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a974e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9750 call 0x120aa8e0 */
  push32(0x120a9755u); f_120aa8e0();
L_120a9755:;
  /* 120a9755 mov esi, esp */
  ESI = (ESP);
  /* 120a9757 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a975a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 120a975d push eax */
  push32((uint32_t)(EAX));
  /* 120a975e call dword ptr [0x120e3548] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3548))), 0x120a9764u);
  /* 120a9764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9767 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9769 call 0x120aa8e0 */
  push32(0x120a976eu); f_120aa8e0();
  /* 120a976e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a9773 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a9775 jne 0x120a97be */
  if (!C.zf) goto L_120a97be;
  /* 120a9777 mov esi, esp */
  ESI = (ESP);
  /* 120a9779 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a977c mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120a977e push edx */
  push32((uint32_t)(EDX));
  /* 120a977f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9782 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 120a9785 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9786 call dword ptr [0x120e3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3584))), 0x120a978cu);
  /* 120a978c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a978f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9791 call 0x120aa8e0 */
  push32(0x120a9796u); f_120aa8e0();
  /* 120a9796 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9799 jge 0x120a97be */
  if ((C.sf==C.of)) goto L_120a97be;
  /* 120a979b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a979e call 0x120a10eb */
  push32(0x120a97a3u); f_120a10eb();
  /* 120a97a3 mov esi, esp */
  ESI = (ESP);
  /* 120a97a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120a97a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a97aa mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 120a97ad push eax */
  push32((uint32_t)(EAX));
  /* 120a97ae call dword ptr [0x120e354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e354c))), 0x120a97b4u);
  /* 120a97b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a97b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a97b9 call 0x120aa8e0 */
  push32(0x120a97beu); f_120aa8e0();
L_120a97be:;
  /* 120a97be pop edi */
  EDI = (pop32());
  /* 120a97bf pop esi */
  ESI = (pop32());
  /* 120a97c0 pop ebx */
  EBX = (pop32());
  /* 120a97c1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a97c4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a97c6 call 0x120aa8e0 */
  push32(0x120a97cbu); f_120aa8e0();
  /* 120a97cb mov esp, ebp */
  ESP = (EBP);
  /* 120a97cd pop ebp */
  EBP = (pop32());
  /* 120a97ce ret  */
  ESPCHK(0x120a96d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x120a9810 (158 bytes, 60 insns) */
void f_120a9810(void) {
  FTRACE(0x120a9810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9810 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9811 mov ebp, esp */
  EBP = (ESP);
  /* 120a9813 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9816 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9817 push esi */
  push32((uint32_t)(ESI));
  /* 120a9818 push edi */
  push32((uint32_t)(EDI));
  /* 120a9819 push ecx */
  push32((uint32_t)(ECX));
  /* 120a981a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a981d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a9822 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9827 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9829 pop ecx */
  ECX = (pop32());
  /* 120a982a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a982d mov esi, esp */
  ESI = (ESP);
  /* 120a982f push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9831 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9834 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9837 push eax */
  push32((uint32_t)(EAX));
  /* 120a9838 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a983b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120a983d push edx */
  push32((uint32_t)(EDX));
  /* 120a983e call dword ptr [0x120e35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35ac))), 0x120a9844u);
  /* 120a9844 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9847 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9849 call 0x120aa8e0 */
  push32(0x120a984eu); f_120aa8e0();
  /* 120a984e mov esi, esp */
  ESI = (ESP);
  /* 120a9850 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9852 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9855 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 120a9858 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9859 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a985fu);
  /* 120a985f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9862 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9864 call 0x120aa8e0 */
  push32(0x120a9869u); f_120aa8e0();
  /* 120a9869 mov esi, esp */
  ESI = (ESP);
  /* 120a986b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a986e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 120a9871 push eax */
  push32((uint32_t)(EAX));
  /* 120a9872 call dword ptr [0x120e34d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34d0))), 0x120a9878u);
  /* 120a9878 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a987b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a987d call 0x120aa8e0 */
  push32(0x120a9882u); f_120aa8e0();
  /* 120a9882 mov esi, esp */
  ESI = (ESP);
  /* 120a9884 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9886 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9889 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a988c push ecx */
  push32((uint32_t)(ECX));
  /* 120a988d call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a9893u);
  /* 120a9893 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9896 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9898 call 0x120aa8e0 */
  push32(0x120a989du); f_120aa8e0();
  /* 120a989d pop edi */
  EDI = (pop32());
  /* 120a989e pop esi */
  ESI = (pop32());
  /* 120a989f pop ebx */
  EBX = (pop32());
  /* 120a98a0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a98a3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a98a5 call 0x120aa8e0 */
  push32(0x120a98aau); f_120aa8e0();
  /* 120a98aa mov esp, ebp */
  ESP = (EBP);
  /* 120a98ac pop ebp */
  EBP = (pop32());
  /* 120a98ad ret  */
  ESPCHK(0x120a9810u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x120a98e0 (158 bytes, 60 insns) */
void f_120a98e0(void) {
  FTRACE(0x120a98e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a98e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a98e1 mov ebp, esp */
  EBP = (ESP);
  /* 120a98e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a98e6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a98e7 push esi */
  push32((uint32_t)(ESI));
  /* 120a98e8 push edi */
  push32((uint32_t)(EDI));
  /* 120a98e9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a98ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a98ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a98f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a98f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a98f9 pop ecx */
  ECX = (pop32());
  /* 120a98fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a98fd mov esi, esp */
  ESI = (ESP);
  /* 120a98ff push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9901 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9904 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9907 push eax */
  push32((uint32_t)(EAX));
  /* 120a9908 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a990b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120a990d push edx */
  push32((uint32_t)(EDX));
  /* 120a990e call dword ptr [0x120e35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35ac))), 0x120a9914u);
  /* 120a9914 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9917 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9919 call 0x120aa8e0 */
  push32(0x120a991eu); f_120aa8e0();
  /* 120a991e mov esi, esp */
  ESI = (ESP);
  /* 120a9920 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9925 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 120a9928 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9929 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a992fu);
  /* 120a992f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9932 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9934 call 0x120aa8e0 */
  push32(0x120a9939u); f_120aa8e0();
  /* 120a9939 mov esi, esp */
  ESI = (ESP);
  /* 120a993b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a993e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 120a9941 push eax */
  push32((uint32_t)(EAX));
  /* 120a9942 call dword ptr [0x120e34cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34cc))), 0x120a9948u);
  /* 120a9948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a994b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a994d call 0x120aa8e0 */
  push32(0x120a9952u); f_120aa8e0();
  /* 120a9952 mov esi, esp */
  ESI = (ESP);
  /* 120a9954 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9956 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9959 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a995c push ecx */
  push32((uint32_t)(ECX));
  /* 120a995d call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a9963u);
  /* 120a9963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9966 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9968 call 0x120aa8e0 */
  push32(0x120a996du); f_120aa8e0();
  /* 120a996d pop edi */
  EDI = (pop32());
  /* 120a996e pop esi */
  ESI = (pop32());
  /* 120a996f pop ebx */
  EBX = (pop32());
  /* 120a9970 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9973 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9975 call 0x120aa8e0 */
  push32(0x120a997au); f_120aa8e0();
  /* 120a997a mov esp, ebp */
  ESP = (EBP);
  /* 120a997c pop ebp */
  EBP = (pop32());
  /* 120a997d ret  */
  ESPCHK(0x120a98e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099b0 @ 0x120a99b0 (49 bytes, 22 insns) */
void f_120a99b0(void) {
  FTRACE(0x120a99b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a99b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a99b1 mov ebp, esp */
  EBP = (ESP);
  /* 120a99b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a99b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a99b7 push esi */
  push32((uint32_t)(ESI));
  /* 120a99b8 push edi */
  push32((uint32_t)(EDI));
  /* 120a99b9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a99ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a99bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a99c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a99c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a99c9 pop ecx */
  ECX = (pop32());
  /* 120a99ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a99cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a99d0 mov dword ptr [eax + 0x2c], 0xffffffff */
  w32((uint32_t)(EAX + 0x2c), (0xffffffffu));
  /* 120a99d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a99da pop edi */
  EDI = (pop32());
  /* 120a99db pop esi */
  ESI = (pop32());
  /* 120a99dc pop ebx */
  EBX = (pop32());
  /* 120a99dd mov esp, ebp */
  ESP = (EBP);
  /* 120a99df pop ebp */
  EBP = (pop32());
  /* 120a99e0 ret  */
  ESPCHK(0x120a99b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099f0 @ 0x120a99f0 (77 bytes, 32 insns) */
void f_120a99f0(void) {
  FTRACE(0x120a99f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a99f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a99f1 mov ebp, esp */
  EBP = (ESP);
  /* 120a99f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a99f6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a99f7 push esi */
  push32((uint32_t)(ESI));
  /* 120a99f8 push edi */
  push32((uint32_t)(EDI));
  /* 120a99f9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a99fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a99fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a9a02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9a07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9a09 pop ecx */
  ECX = (pop32());
  /* 120a9a0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9a0d mov esi, esp */
  ESI = (ESP);
  /* 120a9a0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a9a12 push eax */
  push32((uint32_t)(EAX));
  /* 120a9a13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9a16 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9a19 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9a1a call dword ptr [0x120e357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e357c))), 0x120a9a20u);
  /* 120a9a20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9a23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9a25 call 0x120aa8e0 */
  push32(0x120a9a2au); f_120aa8e0();
  /* 120a9a2a pop edi */
  EDI = (pop32());
  /* 120a9a2b pop esi */
  ESI = (pop32());
  /* 120a9a2c pop ebx */
  EBX = (pop32());
  /* 120a9a2d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9a30 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9a32 call 0x120aa8e0 */
  push32(0x120a9a37u); f_120aa8e0();
  /* 120a9a37 mov esp, ebp */
  ESP = (EBP);
  /* 120a9a39 pop ebp */
  EBP = (pop32());
  /* 120a9a3a ret 4 */
  ESPCHK(0x120a99f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009a50 @ 0x120a9a50 (102 bytes, 40 insns) */
void f_120a9a50(void) {
  FTRACE(0x120a9a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9a50 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9a51 mov ebp, esp */
  EBP = (ESP);
  /* 120a9a53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9a56 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9a57 push esi */
  push32((uint32_t)(ESI));
  /* 120a9a58 push edi */
  push32((uint32_t)(EDI));
  /* 120a9a59 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9a5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a9a5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a9a62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9a67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9a69 pop ecx */
  ECX = (pop32());
  /* 120a9a6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9a6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9a70 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9a73 mov esi, esp */
  ESI = (ESP);
  /* 120a9a75 push eax */
  push32((uint32_t)(EAX));
  /* 120a9a76 call dword ptr [0x120e35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35a4))), 0x120a9a7cu);
  /* 120a9a7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9a7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9a81 call 0x120aa8e0 */
  push32(0x120a9a86u); f_120aa8e0();
  /* 120a9a86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9a89 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9a8c mov esi, esp */
  ESI = (ESP);
  /* 120a9a8e push ecx */
  push32((uint32_t)(ECX));
  /* 120a9a8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a9a92 push edx */
  push32((uint32_t)(EDX));
  /* 120a9a93 call dword ptr [0x120e34c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34c8))), 0x120a9a99u);
  /* 120a9a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9a9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9a9e call 0x120aa8e0 */
  push32(0x120a9aa3u); f_120aa8e0();
  /* 120a9aa3 pop edi */
  EDI = (pop32());
  /* 120a9aa4 pop esi */
  ESI = (pop32());
  /* 120a9aa5 pop ebx */
  EBX = (pop32());
  /* 120a9aa6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9aa9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9aab call 0x120aa8e0 */
  push32(0x120a9ab0u); f_120aa8e0();
  /* 120a9ab0 mov esp, ebp */
  ESP = (EBP);
  /* 120a9ab2 pop ebp */
  EBP = (pop32());
  /* 120a9ab3 ret 4 */
  ESPCHK(0x120a9a50u, _esp0);
  ESP += 8; return;
}

/* FUN_10009ad0 @ 0x120a9ad0 (184 bytes, 69 insns) */
void f_120a9ad0(void) {
  FTRACE(0x120a9ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9ad1 mov ebp, esp */
  EBP = (ESP);
  /* 120a9ad3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9ad6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9ad7 push esi */
  push32((uint32_t)(ESI));
  /* 120a9ad8 push edi */
  push32((uint32_t)(EDI));
  /* 120a9ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9ada lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a9add mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a9ae2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9ae7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9ae9 pop ecx */
  ECX = (pop32());
  /* 120a9aea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9aed mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a9af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9af4 cmp dword ptr [eax + 0x2c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x2c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9af8 jne 0x120a9b27 */
  if (!C.zf) goto L_120a9b27;
  /* 120a9afa mov esi, esp */
  ESI = (ESP);
  /* 120a9afc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9aff push ecx */
  push32((uint32_t)(ECX));
  /* 120a9b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9b02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9b05 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9b08 push edx */
  push32((uint32_t)(EDX));
  /* 120a9b09 call dword ptr [0x120e35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b4))), 0x120a9b0fu);
  /* 120a9b0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9b12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9b14 call 0x120aa8e0 */
  push32(0x120a9b19u); f_120aa8e0();
  /* 120a9b19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9b1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120a9b1e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 120a9b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9b24 mov dword ptr [edx + 0x2c], ecx */
  w32((uint32_t)(EDX + 0x2c), (ECX));
L_120a9b27:;
  /* 120a9b27 mov esi, esp */
  ESI = (ESP);
  /* 120a9b29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a9b2c push eax */
  push32((uint32_t)(EAX));
  /* 120a9b2d call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120a9b33u);
  /* 120a9b33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9b36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9b38 call 0x120aa8e0 */
  push32(0x120a9b3du); f_120aa8e0();
  /* 120a9b3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9b40 jne 0x120a9b72 */
  if (!C.zf) goto L_120a9b72;
  /* 120a9b42 mov esi, esp */
  ESI = (ESP);
  /* 120a9b44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9b47 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9b4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a9b4d push edx */
  push32((uint32_t)(EDX));
  /* 120a9b4e call dword ptr [0x120e35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b4))), 0x120a9b54u);
  /* 120a9b54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9b57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9b59 call 0x120aa8e0 */
  push32(0x120a9b5eu); f_120aa8e0();
  /* 120a9b5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9b61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120a9b63 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 120a9b66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9b69 cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9b6c jne 0x120a9b72 */
  if (!C.zf) goto L_120a9b72;
  /* 120a9b6e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a9b72:;
  /* 120a9b72 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a9b75 pop edi */
  EDI = (pop32());
  /* 120a9b76 pop esi */
  ESI = (pop32());
  /* 120a9b77 pop ebx */
  EBX = (pop32());
  /* 120a9b78 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9b7b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9b7d call 0x120aa8e0 */
  push32(0x120a9b82u); f_120aa8e0();
  /* 120a9b82 mov esp, ebp */
  ESP = (EBP);
  /* 120a9b84 pop ebp */
  EBP = (pop32());
  /* 120a9b85 ret 4 */
  ESPCHK(0x120a9ad0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009bc0 @ 0x120a9bc0 (110 bytes, 43 insns) */
void f_120a9bc0(void) {
  FTRACE(0x120a9bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9bc1 mov ebp, esp */
  EBP = (ESP);
  /* 120a9bc3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9bc7 push esi */
  push32((uint32_t)(ESI));
  /* 120a9bc8 push edi */
  push32((uint32_t)(EDI));
  /* 120a9bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9bca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120a9bcd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120a9bd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9bd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9bd9 pop ecx */
  ECX = (pop32());
  /* 120a9bda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9bdd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a9be1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a9be4 push eax */
  push32((uint32_t)(EAX));
  /* 120a9be5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9be8 call 0x120a100a */
  push32(0x120a9bedu); f_120a100a();
  /* 120a9bed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120a9bf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a9bf4 je 0x120a9c18 */
  if (C.zf) goto L_120a9c18;
  /* 120a9bf6 mov esi, esp */
  ESI = (ESP);
  /* 120a9bf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a9bfb push ecx */
  push32((uint32_t)(ECX));
  /* 120a9bfc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120a9bff push edx */
  push32((uint32_t)(EDX));
  /* 120a9c00 call dword ptr [0x120e359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e359c))), 0x120a9c06u);
  /* 120a9c06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9c09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9c0b call 0x120aa8e0 */
  push32(0x120a9c10u); f_120aa8e0();
  /* 120a9c10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a9c12 jle 0x120a9c18 */
  if ((C.zf||C.sf!=C.of)) goto L_120a9c18;
  /* 120a9c14 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a9c18:;
  /* 120a9c18 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a9c1b pop edi */
  EDI = (pop32());
  /* 120a9c1c pop esi */
  ESI = (pop32());
  /* 120a9c1d pop ebx */
  EBX = (pop32());
  /* 120a9c1e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9c21 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9c23 call 0x120aa8e0 */
  push32(0x120a9c28u); f_120aa8e0();
  /* 120a9c28 mov esp, ebp */
  ESP = (EBP);
  /* 120a9c2a pop ebp */
  EBP = (pop32());
  /* 120a9c2b ret 8 */
  ESPCHK(0x120a9bc0u, _esp0);
  ESP += 12; return;
}

/* FUN_10009c50 @ 0x120a9c50 (42 bytes, 21 insns) */
void f_120a9c50(void) {
  FTRACE(0x120a9c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9c50 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9c51 mov ebp, esp */
  EBP = (ESP);
  /* 120a9c53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9c56 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9c57 push esi */
  push32((uint32_t)(ESI));
  /* 120a9c58 push edi */
  push32((uint32_t)(EDI));
  /* 120a9c59 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9c5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a9c5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a9c62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9c67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9c69 pop ecx */
  ECX = (pop32());
  /* 120a9c6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9c6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9c70 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9c73 pop edi */
  EDI = (pop32());
  /* 120a9c74 pop esi */
  ESI = (pop32());
  /* 120a9c75 pop ebx */
  EBX = (pop32());
  /* 120a9c76 mov esp, ebp */
  ESP = (EBP);
  /* 120a9c78 pop ebp */
  EBP = (pop32());
  /* 120a9c79 ret  */
  ESPCHK(0x120a9c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c90 @ 0x120a9c90 (155 bytes, 58 insns) */
void f_120a9c90(void) {
  FTRACE(0x120a9c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9c90 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9c91 mov ebp, esp */
  EBP = (ESP);
  /* 120a9c93 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9c96 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9c97 push esi */
  push32((uint32_t)(ESI));
  /* 120a9c98 push edi */
  push32((uint32_t)(EDI));
  /* 120a9c99 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9c9a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 120a9c9d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 120a9ca2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9ca7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9ca9 pop ecx */
  ECX = (pop32());
  /* 120a9caa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120a9cb3 mov dword ptr [eax + 0x45], ecx */
  w32((uint32_t)(EAX + 0x45), (ECX));
  /* 120a9cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9cb9 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 120a9cbc mov byte ptr [edx + 0x38], al */
  w8((uint32_t)(EDX + 0x38), (AL));
  /* 120a9cbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9cc2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120a9cc5 mov dword ptr [ecx + 0x39], edx */
  w32((uint32_t)(ECX + 0x39), (EDX));
  /* 120a9cc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9ccb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120a9cce mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 120a9cd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9cd4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120a9cd7 mov dword ptr [edx + 0x41], eax */
  w32((uint32_t)(EDX + 0x41), (EAX));
  /* 120a9cda mov esi, esp */
  ESI = (ESP);
  /* 120a9cdc push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 120a9ce1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9ce4 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 120a9ce7 push edx */
  push32((uint32_t)(EDX));
  /* 120a9ce8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120a9ceb push eax */
  push32((uint32_t)(EAX));
  /* 120a9cec call dword ptr [0x120e35a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35a0))), 0x120a9cf2u);
  /* 120a9cf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9cf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9cf7 call 0x120aa8e0 */
  push32(0x120a9cfcu); f_120aa8e0();
  /* 120a9cfc mov esi, esp */
  ESI = (ESP);
  /* 120a9cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9d02 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 120a9d05 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9d08 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a9d0eu);
  /* 120a9d0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9d11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9d13 call 0x120aa8e0 */
  push32(0x120a9d18u); f_120aa8e0();
  /* 120a9d18 pop edi */
  EDI = (pop32());
  /* 120a9d19 pop esi */
  ESI = (pop32());
  /* 120a9d1a pop ebx */
  EBX = (pop32());
  /* 120a9d1b add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9d1e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9d20 call 0x120aa8e0 */
  push32(0x120a9d25u); f_120aa8e0();
  /* 120a9d25 mov esp, ebp */
  ESP = (EBP);
  /* 120a9d27 pop ebp */
  EBP = (pop32());
  /* 120a9d28 ret 0x14 */
  ESPCHK(0x120a9c90u, _esp0);
  ESP += 24; return;
}

/* FUN_10009d60 @ 0x120a9d60 (252 bytes, 91 insns) */
void f_120a9d60(void) {
  FTRACE(0x120a9d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9d60 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9d61 mov ebp, esp */
  EBP = (ESP);
  /* 120a9d63 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9d66 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9d67 push esi */
  push32((uint32_t)(ESI));
  /* 120a9d68 push edi */
  push32((uint32_t)(EDI));
  /* 120a9d69 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9d6a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 120a9d6d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 120a9d72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9d77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9d79 pop ecx */
  ECX = (pop32());
  /* 120a9d7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9d7d mov esi, esp */
  ESI = (ESP);
  /* 120a9d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9d84 mov ecx, dword ptr [eax + 0x45] */
  ECX = (r32((uint32_t)(EAX + 0x45)));
  /* 120a9d87 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9d88 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120a9d8eu);
  /* 120a9d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9d91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9d93 call 0x120aa8e0 */
  push32(0x120a9d98u); f_120aa8e0();
  /* 120a9d98 mov esi, esp */
  ESI = (ESP);
  /* 120a9d9a push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 120a9d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9da2 mov eax, dword ptr [edx + 0x45] */
  EAX = (r32((uint32_t)(EDX + 0x45)));
  /* 120a9da5 push eax */
  push32((uint32_t)(EAX));
  /* 120a9da6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 120a9da9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9daa call dword ptr [0x120e35a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35a0))), 0x120a9db0u);
  /* 120a9db0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9db3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9db5 call 0x120aa8e0 */
  push32(0x120a9dbau); f_120aa8e0();
  /* 120a9dba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9dbd cmp dword ptr [edx + 0x39], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x39))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9dc1 je 0x120a9dd2 */
  if (C.zf) goto L_120a9dd2;
  /* 120a9dc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9dc6 mov cx, word ptr [ebp - 0xc] */
  CX = (r16((uint32_t)(EBP + -0xc)));
  /* 120a9dca add cx, word ptr [eax + 0x39] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EAX + 0x39))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 120a9dce mov word ptr [ebp - 0xc], cx */
  w16((uint32_t)(EBP + -0xc), (CX));
L_120a9dd2:;
  /* 120a9dd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9dd5 cmp dword ptr [edx + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9dd9 je 0x120a9de6 */
  if (C.zf) goto L_120a9de6;
  /* 120a9ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9dde mov cx, word ptr [eax + 0x3d] */
  CX = (r16((uint32_t)(EAX + 0x3d)));
  /* 120a9de2 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_120a9de6:;
  /* 120a9de6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9de9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120a9deb mov al, byte ptr [edx + 0x38] */
  AL = (r8((uint32_t)(EDX + 0x38)));
  /* 120a9dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a9df0 jne 0x120a9e13 */
  if (!C.zf) goto L_120a9e13;
  /* 120a9df2 mov esi, esp */
  ESI = (ESP);
  /* 120a9df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9df6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9df9 mov dl, byte ptr [ecx + 0x41] */
  DL = (r8((uint32_t)(ECX + 0x41)));
  /* 120a9dfc push edx */
  push32((uint32_t)(EDX));
  /* 120a9dfd lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120a9e00 push eax */
  push32((uint32_t)(EAX));
  /* 120a9e01 push 3 */
  push32((uint32_t)(0x3u));
  /* 120a9e03 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120a9e09u);
  /* 120a9e09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9e0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9e0e call 0x120aa8e0 */
  push32(0x120a9e13u); f_120aa8e0();
L_120a9e13:;
  /* 120a9e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9e16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120a9e18 mov dl, byte ptr [ecx + 0x38] */
  DL = (r8((uint32_t)(ECX + 0x38)));
  /* 120a9e1b cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9e1e jne 0x120a9e41 */
  if (!C.zf) goto L_120a9e41;
  /* 120a9e20 mov esi, esp */
  ESI = (ESP);
  /* 120a9e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 120a9e24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9e27 mov cl, byte ptr [eax + 0x41] */
  CL = (r8((uint32_t)(EAX + 0x41)));
  /* 120a9e2a push ecx */
  push32((uint32_t)(ECX));
  /* 120a9e2b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120a9e2e push edx */
  push32((uint32_t)(EDX));
  /* 120a9e2f push 3 */
  push32((uint32_t)(0x3u));
  /* 120a9e31 call dword ptr [0x120e3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3590))), 0x120a9e37u);
  /* 120a9e37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9e3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9e3c call 0x120aa8e0 */
  push32(0x120a9e41u); f_120aa8e0();
L_120a9e41:;
  /* 120a9e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9e44 mov dword ptr [eax + 0x45], 0 */
  w32((uint32_t)(EAX + 0x45), (0x0u));
  /* 120a9e4b pop edi */
  EDI = (pop32());
  /* 120a9e4c pop esi */
  ESI = (pop32());
  /* 120a9e4d pop ebx */
  EBX = (pop32());
  /* 120a9e4e add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9e51 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9e53 call 0x120aa8e0 */
  push32(0x120a9e58u); f_120aa8e0();
  /* 120a9e58 mov esp, ebp */
  ESP = (EBP);
  /* 120a9e5a pop ebp */
  EBP = (pop32());
  /* 120a9e5b ret  */
  ESPCHK(0x120a9d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ea0 @ 0x120a9ea0 (143 bytes, 53 insns) */
void f_120a9ea0(void) {
  FTRACE(0x120a9ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9ea1 mov ebp, esp */
  EBP = (ESP);
  /* 120a9ea3 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9ea7 push esi */
  push32((uint32_t)(ESI));
  /* 120a9ea8 push edi */
  push32((uint32_t)(EDI));
  /* 120a9ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9eaa lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 120a9ead mov ecx, 0x14 */
  ECX = (0x14u);
  /* 120a9eb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9eb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9eb9 pop ecx */
  ECX = (pop32());
  /* 120a9eba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9ebd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120a9ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9ec4 cmp dword ptr [eax + 0x45], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x45))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9ec8 je 0x120a9f1b */
  if (C.zf) goto L_120a9f1b;
  /* 120a9eca mov esi, esp */
  ESI = (ESP);
  /* 120a9ecc push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 120a9ed1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9ed4 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 120a9ed7 push edx */
  push32((uint32_t)(EDX));
  /* 120a9ed8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120a9edb push eax */
  push32((uint32_t)(EAX));
  /* 120a9edc call dword ptr [0x120e35a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35a0))), 0x120a9ee2u);
  /* 120a9ee2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9ee7 call 0x120aa8e0 */
  push32(0x120a9eecu); f_120aa8e0();
  /* 120a9eec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9eef call 0x120a125d */
  push32(0x120a9ef4u); f_120a125d();
  /* 120a9ef4 mov esi, esp */
  ESI = (ESP);
  /* 120a9ef6 push eax */
  push32((uint32_t)(EAX));
  /* 120a9ef7 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 120a9efa push ecx */
  push32((uint32_t)(ECX));
  /* 120a9efb call dword ptr [0x120e359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e359c))), 0x120a9f01u);
  /* 120a9f01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9f04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9f06 call 0x120aa8e0 */
  push32(0x120a9f0bu); f_120aa8e0();
  /* 120a9f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120a9f0d jle 0x120a9f1b */
  if ((C.zf||C.sf!=C.of)) goto L_120a9f1b;
  /* 120a9f0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9f12 call 0x120a1096 */
  push32(0x120a9f17u); f_120a1096();
  /* 120a9f17 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120a9f1b:;
  /* 120a9f1b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120a9f1e pop edi */
  EDI = (pop32());
  /* 120a9f1f pop esi */
  ESI = (pop32());
  /* 120a9f20 pop ebx */
  EBX = (pop32());
  /* 120a9f21 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9f24 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9f26 call 0x120aa8e0 */
  push32(0x120a9f2bu); f_120aa8e0();
  /* 120a9f2b mov esp, ebp */
  ESP = (EBP);
  /* 120a9f2d pop ebp */
  EBP = (pop32());
  /* 120a9f2e ret  */
  ESPCHK(0x120a9ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f60 @ 0x120a9f60 (39 bytes, 20 insns) */
void f_120a9f60(void) {
  FTRACE(0x120a9f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9f60 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9f61 mov ebp, esp */
  EBP = (ESP);
  /* 120a9f63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9f66 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9f67 push esi */
  push32((uint32_t)(ESI));
  /* 120a9f68 push edi */
  push32((uint32_t)(EDI));
  /* 120a9f69 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9f6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a9f6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a9f72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9f77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9f79 pop ecx */
  ECX = (pop32());
  /* 120a9f7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9f7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9f80 pop edi */
  EDI = (pop32());
  /* 120a9f81 pop esi */
  ESI = (pop32());
  /* 120a9f82 pop ebx */
  EBX = (pop32());
  /* 120a9f83 mov esp, ebp */
  ESP = (EBP);
  /* 120a9f85 pop ebp */
  EBP = (pop32());
  /* 120a9f86 ret  */
  ESPCHK(0x120a9f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f90 @ 0x120a9f90 (88 bytes, 36 insns) */
void f_120a9f90(void) {
  FTRACE(0x120a9f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120a9f90 push ebp */
  push32((uint32_t)(EBP));
  /* 120a9f91 mov ebp, esp */
  EBP = (ESP);
  /* 120a9f93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120a9f96 push ebx */
  push32((uint32_t)(EBX));
  /* 120a9f97 push esi */
  push32((uint32_t)(ESI));
  /* 120a9f98 push edi */
  push32((uint32_t)(EDI));
  /* 120a9f99 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9f9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120a9f9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120a9fa2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120a9fa7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120a9fa9 pop ecx */
  ECX = (pop32());
  /* 120a9faa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120a9fad mov esi, esp */
  ESI = (ESP);
  /* 120a9faf mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 120a9fb3 push eax */
  push32((uint32_t)(EAX));
  /* 120a9fb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 120a9fb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9fbb add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9fbe push edx */
  push32((uint32_t)(EDX));
  /* 120a9fbf call dword ptr [0x120e35a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35a0))), 0x120a9fc5u);
  /* 120a9fc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9fc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9fca call 0x120aa8e0 */
  push32(0x120a9fcfu); f_120aa8e0();
  /* 120a9fcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120a9fd2 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9fd5 pop edi */
  EDI = (pop32());
  /* 120a9fd6 pop esi */
  ESI = (pop32());
  /* 120a9fd7 pop ebx */
  EBX = (pop32());
  /* 120a9fd8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120a9fdb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120a9fdd call 0x120aa8e0 */
  push32(0x120a9fe2u); f_120aa8e0();
  /* 120a9fe2 mov esp, ebp */
  ESP = (EBP);
  /* 120a9fe4 pop ebp */
  EBP = (pop32());
  /* 120a9fe5 ret 4 */
  ESPCHK(0x120a9f90u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a000 @ 0x120aa000 (59 bytes, 25 insns) */
void f_120aa000(void) {
  FTRACE(0x120aa000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa000 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa001 mov ebp, esp */
  EBP = (ESP);
  /* 120aa003 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa006 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa007 push esi */
  push32((uint32_t)(ESI));
  /* 120aa008 push edi */
  push32((uint32_t)(EDI));
  /* 120aa009 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa00a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa00d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa012 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa017 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa019 pop ecx */
  ECX = (pop32());
  /* 120aa01a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa01d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 120aa022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa025 call 0x120a11c2 */
  push32(0x120aa02au); f_120a11c2();
  /* 120aa02a pop edi */
  EDI = (pop32());
  /* 120aa02b pop esi */
  ESI = (pop32());
  /* 120aa02c pop ebx */
  EBX = (pop32());
  /* 120aa02d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa030 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa032 call 0x120aa8e0 */
  push32(0x120aa037u); f_120aa8e0();
  /* 120aa037 mov esp, ebp */
  ESP = (EBP);
  /* 120aa039 pop ebp */
  EBP = (pop32());
  /* 120aa03a ret  */
  ESPCHK(0x120aa000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a050 @ 0x120aa050 (97 bytes, 38 insns) */
void f_120aa050(void) {
  FTRACE(0x120aa050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa050 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa051 mov ebp, esp */
  EBP = (ESP);
  /* 120aa053 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa056 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa057 push esi */
  push32((uint32_t)(ESI));
  /* 120aa058 push edi */
  push32((uint32_t)(EDI));
  /* 120aa059 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa05a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 120aa05d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 120aa062 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa067 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa069 pop ecx */
  ECX = (pop32());
  /* 120aa06a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa06d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa070 call 0x120a10a5 */
  push32(0x120aa075u); f_120a10a5();
  /* 120aa075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa078 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120aa07a mov cx, word ptr [eax + 8] */
  CX = (r16((uint32_t)(EAX + 0x8)));
  /* 120aa07e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120aa081 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120aa086 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 120aa08a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120aa08d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa090 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120aa093 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120aa095 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120aa098 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120aa09b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa09e pop edi */
  EDI = (pop32());
  /* 120aa09f pop esi */
  ESI = (pop32());
  /* 120aa0a0 pop ebx */
  EBX = (pop32());
  /* 120aa0a1 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa0a4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa0a6 call 0x120aa8e0 */
  push32(0x120aa0abu); f_120aa8e0();
  /* 120aa0ab mov esp, ebp */
  ESP = (EBP);
  /* 120aa0ad pop ebp */
  EBP = (pop32());
  /* 120aa0ae ret 4 */
  ESPCHK(0x120aa050u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a0d0 @ 0x120aa0d0 (89 bytes, 36 insns) */
void f_120aa0d0(void) {
  FTRACE(0x120aa0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa0d1 mov ebp, esp */
  EBP = (ESP);
  /* 120aa0d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa0d6 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa0d7 push esi */
  push32((uint32_t)(ESI));
  /* 120aa0d8 push edi */
  push32((uint32_t)(EDI));
  /* 120aa0d9 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa0da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa0dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa0e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa0e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa0e9 pop ecx */
  ECX = (pop32());
  /* 120aa0ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa0ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa0f0 call 0x120a12ad */
  push32(0x120aa0f5u); f_120a12ad();
  /* 120aa0f5 mov esi, esp */
  ESI = (ESP);
  /* 120aa0f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aa0f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aa0fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa0fe push eax */
  push32((uint32_t)(EAX));
  /* 120aa0ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa102 mov dl, byte ptr [ecx + 0x3c] */
  DL = (r8((uint32_t)(ECX + 0x3c)));
  /* 120aa105 push edx */
  push32((uint32_t)(EDX));
  /* 120aa106 call dword ptr [0x120e3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3590))), 0x120aa10cu);
  /* 120aa10c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa10f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa111 call 0x120aa8e0 */
  push32(0x120aa116u); f_120aa8e0();
  /* 120aa116 pop edi */
  EDI = (pop32());
  /* 120aa117 pop esi */
  ESI = (pop32());
  /* 120aa118 pop ebx */
  EBX = (pop32());
  /* 120aa119 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa11c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa11e call 0x120aa8e0 */
  push32(0x120aa123u); f_120aa8e0();
  /* 120aa123 mov esp, ebp */
  ESP = (EBP);
  /* 120aa125 pop ebp */
  EBP = (pop32());
  /* 120aa126 ret 4 */
  ESPCHK(0x120aa0d0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a140 @ 0x120aa140 (103 bytes, 41 insns) */
void f_120aa140(void) {
  FTRACE(0x120aa140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa140 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa141 mov ebp, esp */
  EBP = (ESP);
  /* 120aa143 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa146 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa147 push esi */
  push32((uint32_t)(ESI));
  /* 120aa148 push edi */
  push32((uint32_t)(EDI));
  /* 120aa149 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa14a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa14d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa152 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa157 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa159 pop ecx */
  ECX = (pop32());
  /* 120aa15a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa15d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa160 call 0x120a12ad */
  push32(0x120aa165u); f_120a12ad();
  /* 120aa165 mov esi, esp */
  ESI = (ESP);
  /* 120aa167 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 120aa16a push eax */
  push32((uint32_t)(EAX));
  /* 120aa16b call 0x120ab2e0 */
  push32(0x120aa170u); f_120ab2e0();
  /* 120aa170 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120aa171 mov ecx, 0xff */
  ECX = (0xffu);
  /* 120aa176 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120aa178 push edx */
  push32((uint32_t)(EDX));
  /* 120aa179 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa17c push edx */
  push32((uint32_t)(EDX));
  /* 120aa17d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa180 mov cl, byte ptr [eax + 0x3c] */
  CL = (r8((uint32_t)(EAX + 0x3c)));
  /* 120aa183 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa184 call dword ptr [0x120e3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3598))), 0x120aa18au);
  /* 120aa18a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa18d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa18f call 0x120aa8e0 */
  push32(0x120aa194u); f_120aa8e0();
  /* 120aa194 pop edi */
  EDI = (pop32());
  /* 120aa195 pop esi */
  ESI = (pop32());
  /* 120aa196 pop ebx */
  EBX = (pop32());
  /* 120aa197 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa19a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa19c call 0x120aa8e0 */
  push32(0x120aa1a1u); f_120aa8e0();
  /* 120aa1a1 mov esp, ebp */
  ESP = (EBP);
  /* 120aa1a3 pop ebp */
  EBP = (pop32());
  /* 120aa1a4 ret 8 */
  ESPCHK(0x120aa140u, _esp0);
  ESP += 12; return;
}

/* FUN_1000a1c0 @ 0x120aa1c0 (62 bytes, 27 insns) */
void f_120aa1c0(void) {
  FTRACE(0x120aa1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa1c1 mov ebp, esp */
  EBP = (ESP);
  /* 120aa1c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa1c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa1c7 push esi */
  push32((uint32_t)(ESI));
  /* 120aa1c8 push edi */
  push32((uint32_t)(EDI));
  /* 120aa1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa1ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa1cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa1d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa1d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa1d9 pop ecx */
  ECX = (pop32());
  /* 120aa1da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa1dd push 0 */
  push32((uint32_t)(0x0u));
  /* 120aa1df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa1e2 push eax */
  push32((uint32_t)(EAX));
  /* 120aa1e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa1e6 call 0x120a1046 */
  push32(0x120aa1ebu); f_120a1046();
  /* 120aa1eb pop edi */
  EDI = (pop32());
  /* 120aa1ec pop esi */
  ESI = (pop32());
  /* 120aa1ed pop ebx */
  EBX = (pop32());
  /* 120aa1ee add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa1f1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa1f3 call 0x120aa8e0 */
  push32(0x120aa1f8u); f_120aa8e0();
  /* 120aa1f8 mov esp, ebp */
  ESP = (EBP);
  /* 120aa1fa pop ebp */
  EBP = (pop32());
  /* 120aa1fb ret 4 */
  ESPCHK(0x120aa1c0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a210 @ 0x120aa210 (39 bytes, 20 insns) */
void f_120aa210(void) {
  FTRACE(0x120aa210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa210 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa211 mov ebp, esp */
  EBP = (ESP);
  /* 120aa213 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa216 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa217 push esi */
  push32((uint32_t)(ESI));
  /* 120aa218 push edi */
  push32((uint32_t)(EDI));
  /* 120aa219 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa21a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa21d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa222 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa227 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa229 pop ecx */
  ECX = (pop32());
  /* 120aa22a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa22d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa230 pop edi */
  EDI = (pop32());
  /* 120aa231 pop esi */
  ESI = (pop32());
  /* 120aa232 pop ebx */
  EBX = (pop32());
  /* 120aa233 mov esp, ebp */
  ESP = (EBP);
  /* 120aa235 pop ebp */
  EBP = (pop32());
  /* 120aa236 ret  */
  ESPCHK(0x120aa210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a240 @ 0x120aa240 (70 bytes, 30 insns) */
void f_120aa240(void) {
  FTRACE(0x120aa240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa240 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa241 mov ebp, esp */
  EBP = (ESP);
  /* 120aa243 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa246 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa247 push esi */
  push32((uint32_t)(ESI));
  /* 120aa248 push edi */
  push32((uint32_t)(EDI));
  /* 120aa249 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa24a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa24d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa252 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa257 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa259 pop ecx */
  ECX = (pop32());
  /* 120aa25a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa25d mov esi, esp */
  ESI = (ESP);
  /* 120aa25f push 0 */
  push32((uint32_t)(0x0u));
  /* 120aa261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa264 push eax */
  push32((uint32_t)(EAX));
  /* 120aa265 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120aa26bu);
  /* 120aa26b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa26e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa270 call 0x120aa8e0 */
  push32(0x120aa275u); f_120aa8e0();
  /* 120aa275 pop edi */
  EDI = (pop32());
  /* 120aa276 pop esi */
  ESI = (pop32());
  /* 120aa277 pop ebx */
  EBX = (pop32());
  /* 120aa278 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa27b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa27d call 0x120aa8e0 */
  push32(0x120aa282u); f_120aa8e0();
  /* 120aa282 mov esp, ebp */
  ESP = (EBP);
  /* 120aa284 pop ebp */
  EBP = (pop32());
  /* 120aa285 ret  */
  ESPCHK(0x120aa240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2a0 @ 0x120aa2a0 (123 bytes, 48 insns) */
void f_120aa2a0(void) {
  FTRACE(0x120aa2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa2a1 mov ebp, esp */
  EBP = (ESP);
  /* 120aa2a3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa2a6 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa2a7 push esi */
  push32((uint32_t)(ESI));
  /* 120aa2a8 push edi */
  push32((uint32_t)(EDI));
  /* 120aa2a9 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa2aa lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 120aa2ad mov ecx, 0x13 */
  ECX = (0x13u);
  /* 120aa2b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa2b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa2b9 pop ecx */
  ECX = (pop32());
  /* 120aa2ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa2bd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120aa2c1 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 120aa2c5 jmp 0x120aa2cf */
  goto L_120aa2cf;
L_120aa2c7:;
  /* 120aa2c7 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 120aa2ca add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120aa2cc mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_120aa2cf:;
  /* 120aa2cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120aa2d2 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120aa2d8 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa2db jge 0x120aa307 */
  if ((C.sf==C.of)) goto L_120aa307;
  /* 120aa2dd mov esi, esp */
  ESI = (ESP);
  /* 120aa2df mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 120aa2e2 push edx */
  push32((uint32_t)(EDX));
  /* 120aa2e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa2e6 push eax */
  push32((uint32_t)(EAX));
  /* 120aa2e7 call dword ptr [0x120e3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3504))), 0x120aa2edu);
  /* 120aa2ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa2f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa2f2 call 0x120aa8e0 */
  push32(0x120aa2f7u); f_120aa8e0();
  /* 120aa2f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aa2f9 jle 0x120aa305 */
  if ((C.zf||C.sf!=C.of)) goto L_120aa305;
  /* 120aa2fb mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 120aa2fe mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 120aa301 mov byte ptr [ebp - 0xc], 8 */
  w8((uint32_t)(EBP + -0xc), (0x8u));
L_120aa305:;
  /* 120aa305 jmp 0x120aa2c7 */
  goto L_120aa2c7;
L_120aa307:;
  /* 120aa307 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120aa30a pop edi */
  EDI = (pop32());
  /* 120aa30b pop esi */
  ESI = (pop32());
  /* 120aa30c pop ebx */
  EBX = (pop32());
  /* 120aa30d add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa310 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa312 call 0x120aa8e0 */
  push32(0x120aa317u); f_120aa8e0();
  /* 120aa317 mov esp, ebp */
  ESP = (EBP);
  /* 120aa319 pop ebp */
  EBP = (pop32());
  /* 120aa31a ret  */
  ESPCHK(0x120aa2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a340 @ 0x120aa340 (68 bytes, 29 insns) */
void f_120aa340(void) {
  FTRACE(0x120aa340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa340 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa341 mov ebp, esp */
  EBP = (ESP);
  /* 120aa343 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa346 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa347 push esi */
  push32((uint32_t)(ESI));
  /* 120aa348 push edi */
  push32((uint32_t)(EDI));
  /* 120aa349 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa34a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa34d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa352 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa357 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa359 pop ecx */
  ECX = (pop32());
  /* 120aa35a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa35d mov esi, esp */
  ESI = (ESP);
  /* 120aa35f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa362 push eax */
  push32((uint32_t)(EAX));
  /* 120aa363 call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120aa369u);
  /* 120aa369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa36c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa36e call 0x120aa8e0 */
  push32(0x120aa373u); f_120aa8e0();
  /* 120aa373 pop edi */
  EDI = (pop32());
  /* 120aa374 pop esi */
  ESI = (pop32());
  /* 120aa375 pop ebx */
  EBX = (pop32());
  /* 120aa376 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa379 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa37b call 0x120aa8e0 */
  push32(0x120aa380u); f_120aa8e0();
  /* 120aa380 mov esp, ebp */
  ESP = (EBP);
  /* 120aa382 pop ebp */
  EBP = (pop32());
  /* 120aa383 ret  */
  ESPCHK(0x120aa340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3a0 @ 0x120aa3a0 (69 bytes, 29 insns) */
void f_120aa3a0(void) {
  FTRACE(0x120aa3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa3a1 mov ebp, esp */
  EBP = (ESP);
  /* 120aa3a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa3a6 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa3a7 push esi */
  push32((uint32_t)(ESI));
  /* 120aa3a8 push edi */
  push32((uint32_t)(EDI));
  /* 120aa3a9 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa3aa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120aa3ad mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120aa3b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa3b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa3b9 pop ecx */
  ECX = (pop32());
  /* 120aa3ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa3bd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120aa3c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa3c4 call 0x120a123f */
  push32(0x120aa3c9u); f_120a123f();
  /* 120aa3c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aa3cb jle 0x120aa3d1 */
  if ((C.zf||C.sf!=C.of)) goto L_120aa3d1;
  /* 120aa3cd mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120aa3d1:;
  /* 120aa3d1 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120aa3d4 pop edi */
  EDI = (pop32());
  /* 120aa3d5 pop esi */
  ESI = (pop32());
  /* 120aa3d6 pop ebx */
  EBX = (pop32());
  /* 120aa3d7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa3da cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa3dc call 0x120aa8e0 */
  push32(0x120aa3e1u); f_120aa8e0();
  /* 120aa3e1 mov esp, ebp */
  ESP = (EBP);
  /* 120aa3e3 pop ebp */
  EBP = (pop32());
  /* 120aa3e4 ret  */
  ESPCHK(0x120aa3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a400 @ 0x120aa400 (88 bytes, 35 insns) */
void f_120aa400(void) {
  FTRACE(0x120aa400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa400 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa401 mov ebp, esp */
  EBP = (ESP);
  /* 120aa403 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa406 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa407 push esi */
  push32((uint32_t)(ESI));
  /* 120aa408 push edi */
  push32((uint32_t)(EDI));
  /* 120aa409 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa40a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa40d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa412 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa417 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa419 pop ecx */
  ECX = (pop32());
  /* 120aa41a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa41d mov esi, esp */
  ESI = (ESP);
  /* 120aa41f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa422 push eax */
  push32((uint32_t)(EAX));
  /* 120aa423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa426 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa427 call dword ptr [0x120e357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e357c))), 0x120aa42du);
  /* 120aa42d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa430 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa432 call 0x120aa8e0 */
  push32(0x120aa437u); f_120aa8e0();
  /* 120aa437 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa43a call 0x120a1294 */
  push32(0x120aa43fu); f_120a1294();
  /* 120aa43f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa442 mov byte ptr [edx + 0x3c], al */
  w8((uint32_t)(EDX + 0x3c), (AL));
  /* 120aa445 pop edi */
  EDI = (pop32());
  /* 120aa446 pop esi */
  ESI = (pop32());
  /* 120aa447 pop ebx */
  EBX = (pop32());
  /* 120aa448 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa44b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa44d call 0x120aa8e0 */
  push32(0x120aa452u); f_120aa8e0();
  /* 120aa452 mov esp, ebp */
  ESP = (EBP);
  /* 120aa454 pop ebp */
  EBP = (pop32());
  /* 120aa455 ret 4 */
  ESPCHK(0x120aa400u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a470 @ 0x120aa470 (110 bytes, 42 insns) */
void f_120aa470(void) {
  FTRACE(0x120aa470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa470 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa471 mov ebp, esp */
  EBP = (ESP);
  /* 120aa473 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa476 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa477 push esi */
  push32((uint32_t)(ESI));
  /* 120aa478 push edi */
  push32((uint32_t)(EDI));
  /* 120aa479 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa47a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa47d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa482 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa487 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa489 pop ecx */
  ECX = (pop32());
  /* 120aa48a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa48d mov esi, esp */
  ESI = (ESP);
  /* 120aa48f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa492 push eax */
  push32((uint32_t)(EAX));
  /* 120aa493 call dword ptr [0x120e35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35a4))), 0x120aa499u);
  /* 120aa499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa49c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa49e call 0x120aa8e0 */
  push32(0x120aa4a3u); f_120aa8e0();
  /* 120aa4a3 mov esi, esp */
  ESI = (ESP);
  /* 120aa4a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa4a8 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa4a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa4ac push edx */
  push32((uint32_t)(EDX));
  /* 120aa4ad call dword ptr [0x120e34c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e34c8))), 0x120aa4b3u);
  /* 120aa4b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa4b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa4b8 call 0x120aa8e0 */
  push32(0x120aa4bdu); f_120aa8e0();
  /* 120aa4bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa4c0 call 0x120a1294 */
  push32(0x120aa4c5u); f_120a1294();
  /* 120aa4c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa4c8 mov byte ptr [ecx + 0x3c], al */
  w8((uint32_t)(ECX + 0x3c), (AL));
  /* 120aa4cb pop edi */
  EDI = (pop32());
  /* 120aa4cc pop esi */
  ESI = (pop32());
  /* 120aa4cd pop ebx */
  EBX = (pop32());
  /* 120aa4ce add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa4d1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa4d3 call 0x120aa8e0 */
  push32(0x120aa4d8u); f_120aa8e0();
  /* 120aa4d8 mov esp, ebp */
  ESP = (EBP);
  /* 120aa4da pop ebp */
  EBP = (pop32());
  /* 120aa4db ret 4 */
  ESPCHK(0x120aa470u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a500 @ 0x120aa500 (113 bytes, 44 insns) */
void f_120aa500(void) {
  FTRACE(0x120aa500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa500 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa501 mov ebp, esp */
  EBP = (ESP);
  /* 120aa503 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa506 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa507 push esi */
  push32((uint32_t)(ESI));
  /* 120aa508 push edi */
  push32((uint32_t)(EDI));
  /* 120aa509 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa50a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120aa50d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120aa512 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa517 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa519 pop ecx */
  ECX = (pop32());
  /* 120aa51a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa51d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120aa521 mov esi, esp */
  ESI = (ESP);
  /* 120aa523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa526 push eax */
  push32((uint32_t)(EAX));
  /* 120aa527 call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120aa52du);
  /* 120aa52d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa532 call 0x120aa8e0 */
  push32(0x120aa537u); f_120aa8e0();
  /* 120aa537 mov esi, eax */
  ESI = (EAX);
  /* 120aa539 mov edi, esp */
  EDI = (ESP);
  /* 120aa53b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa53e push ecx */
  push32((uint32_t)(ECX));
  /* 120aa53f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa542 push edx */
  push32((uint32_t)(EDX));
  /* 120aa543 call dword ptr [0x120e359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e359c))), 0x120aa549u);
  /* 120aa549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa54c cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa54e call 0x120aa8e0 */
  push32(0x120aa553u); f_120aa8e0();
  /* 120aa553 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa555 jne 0x120aa55b */
  if (!C.zf) goto L_120aa55b;
  /* 120aa557 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_120aa55b:;
  /* 120aa55b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120aa55e pop edi */
  EDI = (pop32());
  /* 120aa55f pop esi */
  ESI = (pop32());
  /* 120aa560 pop ebx */
  EBX = (pop32());
  /* 120aa561 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa564 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa566 call 0x120aa8e0 */
  push32(0x120aa56bu); f_120aa8e0();
  /* 120aa56b mov esp, ebp */
  ESP = (EBP);
  /* 120aa56d pop ebp */
  EBP = (pop32());
  /* 120aa56e ret 4 */
  ESPCHK(0x120aa500u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a590 @ 0x120aa590 (47 bytes, 22 insns) */
void f_120aa590(void) {
  FTRACE(0x120aa590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa590 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa591 mov ebp, esp */
  EBP = (ESP);
  /* 120aa593 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa596 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa597 push esi */
  push32((uint32_t)(ESI));
  /* 120aa598 push edi */
  push32((uint32_t)(EDI));
  /* 120aa599 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa59a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa59d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa5a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa5a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa5a9 pop ecx */
  ECX = (pop32());
  /* 120aa5aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa5ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa5b0 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 120aa5b3 mov byte ptr [eax + 0x3c], cl */
  w8((uint32_t)(EAX + 0x3c), (CL));
  /* 120aa5b6 pop edi */
  EDI = (pop32());
  /* 120aa5b7 pop esi */
  ESI = (pop32());
  /* 120aa5b8 pop ebx */
  EBX = (pop32());
  /* 120aa5b9 mov esp, ebp */
  ESP = (EBP);
  /* 120aa5bb pop ebp */
  EBP = (pop32());
  /* 120aa5bc ret 4 */
  ESPCHK(0x120aa590u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a5d0 @ 0x120aa5d0 (47 bytes, 22 insns) */
void f_120aa5d0(void) {
  FTRACE(0x120aa5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa5d1 mov ebp, esp */
  EBP = (ESP);
  /* 120aa5d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa5d6 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa5d7 push esi */
  push32((uint32_t)(ESI));
  /* 120aa5d8 push edi */
  push32((uint32_t)(EDI));
  /* 120aa5d9 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa5da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa5dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa5e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa5e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa5e9 pop ecx */
  ECX = (pop32());
  /* 120aa5ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa5ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa5f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa5f3 mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 120aa5f6 pop edi */
  EDI = (pop32());
  /* 120aa5f7 pop esi */
  ESI = (pop32());
  /* 120aa5f8 pop ebx */
  EBX = (pop32());
  /* 120aa5f9 mov esp, ebp */
  ESP = (EBP);
  /* 120aa5fb pop ebp */
  EBP = (pop32());
  /* 120aa5fc ret 4 */
  ESPCHK(0x120aa5d0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a610 @ 0x120aa610 (127 bytes, 48 insns) */
void f_120aa610(void) {
  FTRACE(0x120aa610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa610 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa611 mov ebp, esp */
  EBP = (ESP);
  /* 120aa613 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa616 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa617 push esi */
  push32((uint32_t)(ESI));
  /* 120aa618 push edi */
  push32((uint32_t)(EDI));
  /* 120aa619 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa61a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa61d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa622 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa627 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa629 pop ecx */
  ECX = (pop32());
  /* 120aa62a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa62d mov esi, esp */
  ESI = (ESP);
  /* 120aa62f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa632 push eax */
  push32((uint32_t)(EAX));
  /* 120aa633 call dword ptr [0x120e35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35b0))), 0x120aa639u);
  /* 120aa639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa63c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa63e call 0x120aa8e0 */
  push32(0x120aa643u); f_120aa8e0();
  /* 120aa643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aa645 jle 0x120aa67c */
  if ((C.zf||C.sf!=C.of)) goto L_120aa67c;
  /* 120aa647 mov esi, esp */
  ESI = (ESP);
  /* 120aa649 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aa64b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa64e call 0x120a11f4 */
  push32(0x120aa653u); f_120a11f4();
  /* 120aa653 push eax */
  push32((uint32_t)(EAX));
  /* 120aa654 call dword ptr [0x120e3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3588))), 0x120aa65au);
  /* 120aa65a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa65d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa65f call 0x120aa8e0 */
  push32(0x120aa664u); f_120aa8e0();
  /* 120aa664 mov esi, esp */
  ESI = (ESP);
  /* 120aa666 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aa669 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa66a push 1 */
  push32((uint32_t)(0x1u));
  /* 120aa66c call dword ptr [0x120e3558] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3558))), 0x120aa672u);
  /* 120aa672 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa675 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa677 call 0x120aa8e0 */
  push32(0x120aa67cu); f_120aa8e0();
L_120aa67c:;
  /* 120aa67c pop edi */
  EDI = (pop32());
  /* 120aa67d pop esi */
  ESI = (pop32());
  /* 120aa67e pop ebx */
  EBX = (pop32());
  /* 120aa67f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa682 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa684 call 0x120aa8e0 */
  push32(0x120aa689u); f_120aa8e0();
  /* 120aa689 mov esp, ebp */
  ESP = (EBP);
  /* 120aa68b pop ebp */
  EBP = (pop32());
  /* 120aa68c ret 4 */
  ESPCHK(0x120aa610u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a6b0 @ 0x120aa6b0 (70 bytes, 30 insns) */
void f_120aa6b0(void) {
  FTRACE(0x120aa6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa6b1 mov ebp, esp */
  EBP = (ESP);
  /* 120aa6b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa6b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa6b7 push esi */
  push32((uint32_t)(ESI));
  /* 120aa6b8 push edi */
  push32((uint32_t)(EDI));
  /* 120aa6b9 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa6ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa6bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa6c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa6c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa6c9 pop ecx */
  ECX = (pop32());
  /* 120aa6ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa6cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa6d0 cmp dword ptr [eax + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa6d4 je 0x120aa6e5 */
  if (C.zf) goto L_120aa6e5;
  /* 120aa6d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa6d9 mov edx, dword ptr [ecx + 0x3d] */
  EDX = (r32((uint32_t)(ECX + 0x3d)));
  /* 120aa6dc push edx */
  push32((uint32_t)(EDX));
  /* 120aa6dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa6e0 call 0x120a1055 */
  push32(0x120aa6e5u); f_120a1055();
L_120aa6e5:;
  /* 120aa6e5 pop edi */
  EDI = (pop32());
  /* 120aa6e6 pop esi */
  ESI = (pop32());
  /* 120aa6e7 pop ebx */
  EBX = (pop32());
  /* 120aa6e8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa6eb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa6ed call 0x120aa8e0 */
  push32(0x120aa6f2u); f_120aa8e0();
  /* 120aa6f2 mov esp, ebp */
  ESP = (EBP);
  /* 120aa6f4 pop ebp */
  EBP = (pop32());
  /* 120aa6f5 ret  */
  ESPCHK(0x120aa6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a710 @ 0x120aa710 (73 bytes, 30 insns) */
void f_120aa710(void) {
  FTRACE(0x120aa710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa710 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa711 mov ebp, esp */
  EBP = (ESP);
  /* 120aa713 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa716 push ebx */
  push32((uint32_t)(EBX));
  /* 120aa717 push esi */
  push32((uint32_t)(ESI));
  /* 120aa718 push edi */
  push32((uint32_t)(EDI));
  /* 120aa719 push ecx */
  push32((uint32_t)(ECX));
  /* 120aa71a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120aa71d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120aa722 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120aa727 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120aa729 pop ecx */
  ECX = (pop32());
  /* 120aa72a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aa72d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aa730 call 0x120a11f4 */
  push32(0x120aa735u); f_120a11f4();
  /* 120aa735 mov esi, esp */
  ESI = (ESP);
  /* 120aa737 push eax */
  push32((uint32_t)(EAX));
  /* 120aa738 call dword ptr [0x120e35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e35a4))), 0x120aa73eu);
  /* 120aa73e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa743 call 0x120aa8e0 */
  push32(0x120aa748u); f_120aa8e0();
  /* 120aa748 pop edi */
  EDI = (pop32());
  /* 120aa749 pop esi */
  ESI = (pop32());
  /* 120aa74a pop ebx */
  EBX = (pop32());
  /* 120aa74b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa74e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa750 call 0x120aa8e0 */
  push32(0x120aa755u); f_120aa8e0();
  /* 120aa755 mov esp, ebp */
  ESP = (EBP);
  /* 120aa757 pop ebp */
  EBP = (pop32());
  /* 120aa758 ret  */
  ESPCHK(0x120aa710u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x120aa8e0 (56 bytes, 28 insns) */
void f_120aa8e0(void) {
  FTRACE(0x120aa8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa8e0 jne 0x120aa8e3 */
  if (!C.zf) goto L_120aa8e3;
  /* 120aa8e2 ret  */
  ESPCHK(0x120aa8e0u, _esp0);
  ESP += 4; return;
L_120aa8e3:;
  /* 120aa8e3 push ebp */
  push32((uint32_t)(EBP));
  /* 120aa8e4 mov ebp, esp */
  EBP = (ESP);
  /* 120aa8e6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa8e9 push eax */
  push32((uint32_t)(EAX));
  /* 120aa8ea push edx */
  push32((uint32_t)(EDX));
  /* 120aa8eb push ebx */
  push32((uint32_t)(EBX));
  /* 120aa8ec push esi */
  push32((uint32_t)(ESI));
  /* 120aa8ed push edi */
  push32((uint32_t)(EDI));
  /* 120aa8ee push 0x120db2d0 */
  push32((uint32_t)(0x120db2d0u));
  /* 120aa8f3 push 0x120db2cc */
  push32((uint32_t)(0x120db2ccu));
  /* 120aa8f8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 120aa8fa push 0x120db2bc */
  push32((uint32_t)(0x120db2bcu));
  /* 120aa8ff push 1 */
  push32((uint32_t)(0x1u));
  /* 120aa901 call 0x120ab840 */
  push32(0x120aa906u); f_120ab840();
  /* 120aa906 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa909 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa90c jne 0x120aa90f */
  if (!C.zf) goto L_120aa90f;
  /* 120aa90e int3  */
  x86_unimpl("int3 @ 0x120aa90e");
L_120aa90f:;
  /* 120aa90f pop edi */
  EDI = (pop32());
  /* 120aa910 pop esi */
  ESI = (pop32());
  /* 120aa911 pop ebx */
  EBX = (pop32());
  /* 120aa912 pop edx */
  EDX = (pop32());
  /* 120aa913 pop eax */
  EAX = (pop32());
  /* 120aa914 mov esp, ebp */
  ESP = (EBP);
  /* 120aa916 pop ebp */
  EBP = (pop32());
  /* 120aa917 ret  */
  ESPCHK(0x120aa8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a920 @ 0x120aa920 (20 bytes, 6 insns) */
void f_120aa920(void) {
  FTRACE(0x120aa920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa920 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa923 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 120aa926 call 0x120ac138 */
  push32(0x120aa92bu); f_120ac138();
  /* 120aa92b call 0x120aa93d */
  push32(0x120aa930u); f_120aa93d();
  /* 120aa930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa933 ret  */
  ESPCHK(0x120aa920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a934 @ 0x120aa934 (9 bytes, 2 insns) */
void f_120aa934(void) {
  FTRACE(0x120aa934u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa934 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 120aa938 call 0x120ac0f5 */
  push32(0x120aa93du); f_120ac0f5();
}

/* FUN_1000a93d @ 0x120aa93d (145 bytes, 43 insns) */
void f_120aa93d(void) {
  FTRACE(0x120aa93du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa93d push edx */
  push32((uint32_t)(EDX));
  /* 120aa93e wait  */
  /* wait (no observable integer/reg state) */
  /* 120aa93f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 120aa942 je 0x120aa994 */
  if (C.zf) goto L_120aa994;
  /* 120aa944 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120aa94a je 0x120aa952 */
  if (C.zf) goto L_120aa952;
  /* 120aa94c fldcw word ptr [0x120db628] */
  C.fcw = r16((uint32_t)(0x120db628));
L_120aa952:;
  /* 120aa952 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 120aa954 wait  */
  /* wait (no observable integer/reg state) */
  /* 120aa955 fnstsw ax */
  AX = fpu_status();
  /* 120aa957 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 120aa958 jp 0x120aa977 */
  if (C.pf) goto L_120aa977;
L_120aa95a:;
  /* 120aa95a cmp dword ptr [0x120e10d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e10d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa961 jne 0x120ac14e */
  if (!C.zf) { jmp_ind(0x120ac14eu); return; }
  /* 120aa967 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 120aa96c lea ecx, [0x120deda0] */
  ECX = ((uint32_t)(0x120deda0));
  /* 120aa972 jmp 0x120ac15b */
  f_120ac15b(); return;
L_120aa977:;
  /* 120aa977 fld xword ptr [0x120db62a] */
  fpu_push(rf80((uint32_t)(0x120db62a)));
  /* 120aa97d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_120aa97f:;
  /* 120aa97f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 120aa981 wait  */
  /* wait (no observable integer/reg state) */
  /* 120aa982 fnstsw ax */
  AX = fpu_status();
  /* 120aa984 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 120aa985 jp 0x120aa97f */
  if (C.pf) goto L_120aa97f;
  /* 120aa987 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 120aa989 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 120aa98b jmp 0x120aa95a */
  goto L_120aa95a;
L_120aa98d:;
  /* 120aa98d call 0x120ac0dc */
  push32(0x120aa992u); f_120ac0dc();
  /* 120aa992 jmp 0x120aa9af */
  goto L_120aa9af;
L_120aa994:;
  /* 120aa994 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 120aa999 jne 0x120aa98d */
  if (!C.zf) goto L_120aa98d;
  /* 120aa99b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa9a0 jne 0x120aa98d */
  if (!C.zf) goto L_120aa98d;
  /* 120aa9a2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 120aa9a4 fld xword ptr [0x120dee20] */
  fpu_push(rf80((uint32_t)(0x120dee20)));
  /* 120aa9aa mov eax, 1 */
  EAX = (0x1u);
L_120aa9af:;
  /* 120aa9af cmp dword ptr [0x120e10d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e10d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aa9b6 jne 0x120ac14e */
  if (!C.zf) { jmp_ind(0x120ac14eu); return; }
  /* 120aa9bc mov edx, 0x1e */
  EDX = (0x1eu);
  /* 120aa9c1 lea ecx, [0x120deda0] */
  ECX = ((uint32_t)(0x120deda0));
  /* 120aa9c7 call 0x120ac257 */
  push32(0x120aa9ccu); f_120ac257();
  /* 120aa9cc pop edx */
  EDX = (pop32());
  /* 120aa9cd ret  */
  ESPCHK(0x120aa93du, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9d0 @ 0x120aa9d0 (20 bytes, 6 insns) */
void f_120aa9d0(void) {
  FTRACE(0x120aa9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa9d0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aa9d3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 120aa9d6 call 0x120ac138 */
  push32(0x120aa9dbu); f_120ac138();
  /* 120aa9db call 0x120aa9ed */
  push32(0x120aa9e0u); f_120aa9ed();
  /* 120aa9e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aa9e3 ret  */
  ESPCHK(0x120aa9d0u, _esp0);
  ESP += 4; return;
}

