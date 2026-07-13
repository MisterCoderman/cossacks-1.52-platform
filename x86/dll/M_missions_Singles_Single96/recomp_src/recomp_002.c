#include "recomp.h"

/* FUN_100115b0 @ 0x120715b0 (58 bytes, 32 insns) */
void f_120715b0(void) {
  FTRACE(0x120715b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120715b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120715b1 mov ebp, esp */
  EBP = (ESP);
  /* 120715b3 push esi */
  push32((uint32_t)(ESI));
  /* 120715b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120715b6 push eax */
  push32((uint32_t)(EAX));
  /* 120715b7 push eax */
  push32((uint32_t)(EAX));
  /* 120715b8 push eax */
  push32((uint32_t)(EAX));
  /* 120715b9 push eax */
  push32((uint32_t)(EAX));
  /* 120715ba push eax */
  push32((uint32_t)(EAX));
  /* 120715bb push eax */
  push32((uint32_t)(EAX));
  /* 120715bc push eax */
  push32((uint32_t)(EAX));
  /* 120715bd push eax */
  push32((uint32_t)(EAX));
  /* 120715be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120715c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120715c4:;
  /* 120715c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120715c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120715c8 je 0x120715d1 */
  if (C.zf) goto L_120715d1;
  /* 120715ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120715cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x120715cb");
  /* 120715cf jmp 0x120715c4 */
  goto L_120715c4;
L_120715d1:;
  /* 120715d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_120715d4:;
  /* 120715d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120715d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120715d8 je 0x120715e4 */
  if (C.zf) goto L_120715e4;
  /* 120715da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120715db bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x120715db");
  /* 120715df jae 0x120715d4 */
  if (!C.cf) goto L_120715d4;
  /* 120715e1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_120715e4:;
  /* 120715e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120715e7 pop esi */
  ESI = (pop32());
  /* 120715e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120715e9 ret  */
  ESPCHK(0x120715b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100115f0 @ 0x120715f0 (512 bytes, 147 insns) */
void f_120715f0(void) {
  FTRACE(0x120715f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120715f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120715f1 mov ebp, esp */
  EBP = (ESP);
  /* 120715f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120715f6 cmp dword ptr [0x12091844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120715fd jne 0x12071622 */
  if (!C.zf) goto L_12071622;
  /* 120715ff call 0x120720c0 */
  push32(0x12071604u); f_120720c0();
  /* 12071604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071606 je 0x12071612 */
  if (C.zf) goto L_12071612;
  /* 12071608 mov eax, dword ptr [0x120942ec] */
  EAX = (r32((uint32_t)(0x120942ec)));
  /* 1207160d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12071610 jmp 0x12071619 */
  goto L_12071619;
L_12071612:;
  /* 12071612 mov dword ptr [ebp - 8], 0x12072110 */
  w32((uint32_t)(EBP + -0x8), (0x12072110u));
L_12071619:;
  /* 12071619 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1207161c mov dword ptr [0x12091844], ecx */
  w32((uint32_t)(0x12091844), (ECX));
L_12071622:;
  /* 12071622 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071626 jne 0x12071632 */
  if (!C.zf) goto L_12071632;
  /* 12071628 call 0x12071f10 */
  push32(0x1207162du); f_12071f10();
  /* 1207162d jmp 0x120716fe */
  goto L_120716fe;
L_12071632:;
  /* 12071632 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071635 mov dword ptr [0x12091834], edx */
  w32((uint32_t)(0x12091834), (EDX));
  /* 1207163b cmp dword ptr [0x12091834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071642 je 0x12071664 */
  if (C.zf) goto L_12071664;
  /* 12071644 mov eax, dword ptr [0x12091834] */
  EAX = (r32((uint32_t)(0x12091834)));
  /* 12071649 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1207164c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1207164e je 0x12071664 */
  if (C.zf) goto L_12071664;
  /* 12071650 push 0x12091834 */
  push32((uint32_t)(0x12091834u));
  /* 12071655 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12071657 push 0x12090aa0 */
  push32((uint32_t)(0x12090aa0u));
  /* 1207165c call 0x120717f0 */
  push32(0x12071661u); f_120717f0();
  /* 12071661 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12071664:;
  /* 12071664 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071667 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207166a mov dword ptr [0x12091838], edx */
  w32((uint32_t)(0x12091838), (EDX));
  /* 12071670 cmp dword ptr [0x12091838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071677 je 0x12071699 */
  if (C.zf) goto L_12071699;
  /* 12071679 mov eax, dword ptr [0x12091838] */
  EAX = (r32((uint32_t)(0x12091838)));
  /* 1207167e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12071681 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12071683 je 0x12071699 */
  if (C.zf) goto L_12071699;
  /* 12071685 push 0x12091838 */
  push32((uint32_t)(0x12091838u));
  /* 1207168a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1207168c push 0x120909e8 */
  push32((uint32_t)(0x120909e8u));
  /* 12071691 call 0x120717f0 */
  push32(0x12071696u); f_120717f0();
  /* 12071696 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12071699:;
  /* 12071699 mov dword ptr [0x1209183c], 0 */
  w32((uint32_t)(0x1209183c), (0x0u));
  /* 120716a3 cmp dword ptr [0x12091834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120716aa je 0x120716dd */
  if (C.zf) goto L_120716dd;
  /* 120716ac mov edx, dword ptr [0x12091834] */
  EDX = (r32((uint32_t)(0x12091834)));
  /* 120716b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120716b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120716b7 je 0x120716dd */
  if (C.zf) goto L_120716dd;
  /* 120716b9 cmp dword ptr [0x12091838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120716c0 je 0x120716d6 */
  if (C.zf) goto L_120716d6;
  /* 120716c2 mov ecx, dword ptr [0x12091838] */
  ECX = (r32((uint32_t)(0x12091838)));
  /* 120716c8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120716cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120716cd je 0x120716d6 */
  if (C.zf) goto L_120716d6;
  /* 120716cf call 0x12071880 */
  push32(0x120716d4u); f_12071880();
  /* 120716d4 jmp 0x120716db */
  goto L_120716db;
L_120716d6:;
  /* 120716d6 call 0x12071c70 */
  push32(0x120716dbu); f_12071c70();
L_120716db:;
  /* 120716db jmp 0x120716fe */
  goto L_120716fe;
L_120716dd:;
  /* 120716dd cmp dword ptr [0x12091838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120716e4 je 0x120716f9 */
  if (C.zf) goto L_120716f9;
  /* 120716e6 mov eax, dword ptr [0x12091838] */
  EAX = (r32((uint32_t)(0x12091838)));
  /* 120716eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120716ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120716f0 je 0x120716f9 */
  if (C.zf) goto L_120716f9;
  /* 120716f2 call 0x12071e10 */
  push32(0x120716f7u); f_12071e10();
  /* 120716f7 jmp 0x120716fe */
  goto L_120716fe;
L_120716f9:;
  /* 120716f9 call 0x12071f10 */
  push32(0x120716feu); f_12071f10();
L_120716fe:;
  /* 120716fe cmp dword ptr [0x1209183c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209183c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071705 jne 0x1207170e */
  if (!C.zf) goto L_1207170e;
  /* 12071707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12071709 jmp 0x120717ec */
  goto L_120717ec;
L_1207170e:;
  /* 1207170e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071711 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071717 push edx */
  push32((uint32_t)(EDX));
  /* 12071718 call 0x12071f40 */
  push32(0x1207171du); f_12071f40();
  /* 1207171d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071720 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12071723 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071727 je 0x1207173c */
  if (C.zf) goto L_1207173c;
  /* 12071729 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207172c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12071731 push eax */
  push32((uint32_t)(EAX));
  /* 12071732 call dword ptr [0x120942f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942f0))), 0x12071738u);
  /* 12071738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1207173a jne 0x12071743 */
  if (!C.zf) goto L_12071743;
L_1207173c:;
  /* 1207173c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207173e jmp 0x120717ec */
  goto L_120717ec;
L_12071743:;
  /* 12071743 push 1 */
  push32((uint32_t)(0x1u));
  /* 12071745 mov ecx, dword ptr [0x12091824] */
  ECX = (r32((uint32_t)(0x12091824)));
  /* 1207174b push ecx */
  push32((uint32_t)(ECX));
  /* 1207174c call dword ptr [0x12094300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094300))), 0x12071752u);
  /* 12071752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071754 jne 0x1207175d */
  if (!C.zf) goto L_1207175d;
  /* 12071756 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12071758 jmp 0x120717ec */
  goto L_120717ec;
L_1207175d:;
  /* 1207175d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071761 je 0x12071788 */
  if (C.zf) goto L_12071788;
  /* 12071763 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12071766 mov ax, word ptr [0x12091824] */
  AX = (r16((uint32_t)(0x12091824)));
  /* 1207176c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1207176f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12071772 mov dx, word ptr [0x12091840] */
  DX = (r16((uint32_t)(0x12091840)));
  /* 12071779 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1207177d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12071780 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12071784 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12071788:;
  /* 12071788 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207178c je 0x120717e7 */
  if (C.zf) goto L_120717e7;
  /* 1207178e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12071790 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12071793 push edx */
  push32((uint32_t)(EDX));
  /* 12071794 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12071799 mov eax, dword ptr [0x12091824] */
  EAX = (r32((uint32_t)(0x12091824)));
  /* 1207179e push eax */
  push32((uint32_t)(EAX));
  /* 1207179f call dword ptr [0x12091844] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091844))), 0x120717a5u);
  /* 120717a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120717a7 jne 0x120717ad */
  if (!C.zf) goto L_120717ad;
  /* 120717a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120717ab jmp 0x120717ec */
  goto L_120717ec;
L_120717ad:;
  /* 120717ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 120717af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120717b2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120717b5 push ecx */
  push32((uint32_t)(ECX));
  /* 120717b6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 120717bb mov edx, dword ptr [0x12091840] */
  EDX = (r32((uint32_t)(0x12091840)));
  /* 120717c1 push edx */
  push32((uint32_t)(EDX));
  /* 120717c2 call dword ptr [0x12091844] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091844))), 0x120717c8u);
  /* 120717c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120717ca jne 0x120717d0 */
  if (!C.zf) goto L_120717d0;
  /* 120717cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120717ce jmp 0x120717ec */
  goto L_120717ec;
L_120717d0:;
  /* 120717d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 120717d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120717d5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120717da push eax */
  push32((uint32_t)(EAX));
  /* 120717db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120717de push ecx */
  push32((uint32_t)(ECX));
  /* 120717df call 0x12068350 */
  push32(0x120717e4u); f_12068350();
  /* 120717e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120717e7:;
  /* 120717e7 mov eax, 1 */
  EAX = (0x1u);
L_120717ec:;
  /* 120717ec mov esp, ebp */
  ESP = (EBP);
  /* 120717ee pop ebp */
  EBP = (pop32());
  /* 120717ef ret  */
  ESPCHK(0x120715f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117f0 @ 0x120717f0 (130 bytes, 47 insns) */
void f_120717f0(void) {
  FTRACE(0x120717f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120717f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120717f1 mov ebp, esp */
  EBP = (ESP);
  /* 120717f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120717f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 120717fd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12071804:;
  /* 12071804 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12071807 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207180a jg 0x1207186e */
  if ((!C.zf&&C.sf==C.of)) goto L_1207186e;
  /* 1207180c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071810 je 0x1207186e */
  if (C.zf) goto L_1207186e;
  /* 12071812 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12071815 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071818 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12071819 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1207181b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1207181d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12071820 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12071823 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071826 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12071829 push eax */
  push32((uint32_t)(EAX));
  /* 1207182a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207182d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1207182f push edx */
  push32((uint32_t)(EDX));
  /* 12071830 call 0x12073ee0 */
  push32(0x12071835u); f_12073ee0();
  /* 12071835 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071838 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1207183b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207183f jne 0x12071852 */
  if (!C.zf) goto L_12071852;
  /* 12071841 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12071844 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071847 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1207184b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207184e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12071850 jmp 0x1207186c */
  goto L_1207186c;
L_12071852:;
  /* 12071852 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071856 jge 0x12071863 */
  if ((C.sf==C.of)) goto L_12071863;
  /* 12071858 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207185b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1207185e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12071861 jmp 0x1207186c */
  goto L_1207186c;
L_12071863:;
  /* 12071863 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12071866 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071869 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1207186c:;
  /* 1207186c jmp 0x12071804 */
  goto L_12071804;
L_1207186e:;
  /* 1207186e mov esp, ebp */
  ESP = (EBP);
  /* 12071870 pop ebp */
  EBP = (pop32());
  /* 12071871 ret  */
  ESPCHK(0x120717f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011880 @ 0x12071880 (186 bytes, 50 insns) */
void f_12071880(void) {
  FTRACE(0x12071880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071880 push ebp */
  push32((uint32_t)(EBP));
  /* 12071881 mov ebp, esp */
  EBP = (ESP);
  /* 12071883 push ecx */
  push32((uint32_t)(ECX));
  /* 12071884 mov eax, dword ptr [0x12091834] */
  EAX = (r32((uint32_t)(0x12091834)));
  /* 12071889 push eax */
  push32((uint32_t)(EAX));
  /* 1207188a call 0x12068640 */
  push32(0x1207188fu); f_12068640();
  /* 1207188f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071892 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12071894 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071897 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1207189a mov dword ptr [0x12091830], ecx */
  w32((uint32_t)(0x12091830), (ECX));
  /* 120718a0 mov edx, dword ptr [0x12091838] */
  EDX = (r32((uint32_t)(0x12091838)));
  /* 120718a6 push edx */
  push32((uint32_t)(EDX));
  /* 120718a7 call 0x12068640 */
  push32(0x120718acu); f_12068640();
  /* 120718ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120718af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120718b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120718b4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 120718b7 mov dword ptr [0x12091828], ecx */
  w32((uint32_t)(0x12091828), (ECX));
  /* 120718bd mov dword ptr [0x12091824], 0 */
  w32((uint32_t)(0x12091824), (0x0u));
  /* 120718c7 cmp dword ptr [0x12091830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120718ce je 0x120718d9 */
  if (C.zf) goto L_120718d9;
  /* 120718d0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 120718d7 jmp 0x120718eb */
  goto L_120718eb;
L_120718d9:;
  /* 120718d9 mov edx, dword ptr [0x12091834] */
  EDX = (r32((uint32_t)(0x12091834)));
  /* 120718df push edx */
  push32((uint32_t)(EDX));
  /* 120718e0 call 0x12072320 */
  push32(0x120718e5u); f_12072320();
  /* 120718e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120718e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120718eb:;
  /* 120718eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120718ee mov dword ptr [0x1209182c], eax */
  w32((uint32_t)(0x1209182c), (EAX));
  /* 120718f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120718f5 push 0x12071940 */
  push32((uint32_t)(0x12071940u));
  /* 120718fa call dword ptr [0x120942f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942f4))), 0x12071900u);
  /* 12071900 mov ecx, dword ptr [0x1209183c] */
  ECX = (r32((uint32_t)(0x1209183c)));
  /* 12071906 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1207190c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1207190e je 0x1207192c */
  if (C.zf) goto L_1207192c;
  /* 12071910 mov edx, dword ptr [0x1209183c] */
  EDX = (r32((uint32_t)(0x1209183c)));
  /* 12071916 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1207191c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1207191e je 0x1207192c */
  if (C.zf) goto L_1207192c;
  /* 12071920 mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071925 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12071928 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1207192a jne 0x12071936 */
  if (!C.zf) goto L_12071936;
L_1207192c:;
  /* 1207192c mov dword ptr [0x1209183c], 0 */
  w32((uint32_t)(0x1209183c), (0x0u));
L_12071936:;
  /* 12071936 mov esp, ebp */
  ESP = (EBP);
  /* 12071938 pop ebp */
  EBP = (pop32());
  /* 12071939 ret  */
  ESPCHK(0x12071880u, _esp0);
  ESP += 4; return;
}

/* FUN_10011940 @ 0x12071940 (804 bytes, 220 insns) */
void f_12071940(void) {
  FTRACE(0x12071940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071940 push ebp */
  push32((uint32_t)(EBP));
  /* 12071941 mov ebp, esp */
  EBP = (ESP);
  /* 12071943 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071949 push eax */
  push32((uint32_t)(EAX));
  /* 1207194a call 0x120722a0 */
  push32(0x1207194fu); f_120722a0();
  /* 1207194f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071952 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12071955 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12071957 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1207195a push ecx */
  push32((uint32_t)(ECX));
  /* 1207195b mov edx, dword ptr [0x12091828] */
  EDX = (r32((uint32_t)(0x12091828)));
  /* 12071961 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12071963 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071965 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1207196b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071971 push edx */
  push32((uint32_t)(EDX));
  /* 12071972 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071975 push eax */
  push32((uint32_t)(EAX));
  /* 12071976 call dword ptr [0x12091844] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091844))), 0x1207197cu);
  /* 1207197c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1207197e jne 0x12071994 */
  if (!C.zf) goto L_12071994;
  /* 12071980 mov dword ptr [0x1209183c], 0 */
  w32((uint32_t)(0x1209183c), (0x0u));
  /* 1207198a mov eax, 1 */
  EAX = (0x1u);
  /* 1207198f jmp 0x12071c5e */
  goto L_12071c5e;
L_12071994:;
  /* 12071994 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12071997 push ecx */
  push32((uint32_t)(ECX));
  /* 12071998 mov edx, dword ptr [0x12091838] */
  EDX = (r32((uint32_t)(0x12091838)));
  /* 1207199e push edx */
  push32((uint32_t)(EDX));
  /* 1207199f call 0x12073ee0 */
  push32(0x120719a4u); f_12073ee0();
  /* 120719a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120719a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120719a9 jne 0x12071acf */
  if (!C.zf) goto L_12071acf;
  /* 120719af push 0x78 */
  push32((uint32_t)(0x78u));
  /* 120719b1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 120719b4 push eax */
  push32((uint32_t)(EAX));
  /* 120719b5 mov ecx, dword ptr [0x12091830] */
  ECX = (r32((uint32_t)(0x12091830)));
  /* 120719bb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120719bd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120719bf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 120719c5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120719cb push ecx */
  push32((uint32_t)(ECX));
  /* 120719cc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120719cf push edx */
  push32((uint32_t)(EDX));
  /* 120719d0 call dword ptr [0x12091844] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091844))), 0x120719d6u);
  /* 120719d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120719d8 jne 0x120719ee */
  if (!C.zf) goto L_120719ee;
  /* 120719da mov dword ptr [0x1209183c], 0 */
  w32((uint32_t)(0x1209183c), (0x0u));
  /* 120719e4 mov eax, 1 */
  EAX = (0x1u);
  /* 120719e9 jmp 0x12071c5e */
  goto L_12071c5e;
L_120719ee:;
  /* 120719ee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 120719f1 push eax */
  push32((uint32_t)(EAX));
  /* 120719f2 mov ecx, dword ptr [0x12091834] */
  ECX = (r32((uint32_t)(0x12091834)));
  /* 120719f8 push ecx */
  push32((uint32_t)(ECX));
  /* 120719f9 call 0x12073ee0 */
  push32(0x120719feu); f_12073ee0();
  /* 120719fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071a01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071a03 jne 0x12071a30 */
  if (!C.zf) goto L_12071a30;
  /* 12071a05 mov edx, dword ptr [0x1209183c] */
  EDX = (r32((uint32_t)(0x1209183c)));
  /* 12071a0b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12071a11 mov dword ptr [0x1209183c], edx */
  w32((uint32_t)(0x1209183c), (EDX));
  /* 12071a17 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071a1a mov dword ptr [0x12091840], eax */
  w32((uint32_t)(0x12091840), (EAX));
  /* 12071a1f mov ecx, dword ptr [0x12091840] */
  ECX = (r32((uint32_t)(0x12091840)));
  /* 12071a25 mov dword ptr [0x12091824], ecx */
  w32((uint32_t)(0x12091824), (ECX));
  /* 12071a2b jmp 0x12071acf */
  goto L_12071acf;
L_12071a30:;
  /* 12071a30 mov edx, dword ptr [0x1209183c] */
  EDX = (r32((uint32_t)(0x1209183c)));
  /* 12071a36 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12071a39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12071a3b jne 0x12071acf */
  if (!C.zf) goto L_12071acf;
  /* 12071a41 cmp dword ptr [0x1209182c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209182c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071a48 je 0x12071a9d */
  if (C.zf) goto L_12071a9d;
  /* 12071a4a mov eax, dword ptr [0x1209182c] */
  EAX = (r32((uint32_t)(0x1209182c)));
  /* 12071a4f push eax */
  push32((uint32_t)(EAX));
  /* 12071a50 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12071a53 push ecx */
  push32((uint32_t)(ECX));
  /* 12071a54 mov edx, dword ptr [0x12091834] */
  EDX = (r32((uint32_t)(0x12091834)));
  /* 12071a5a push edx */
  push32((uint32_t)(EDX));
  /* 12071a5b call 0x12073fb0 */
  push32(0x12071a60u); f_12073fb0();
  /* 12071a60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071a63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071a65 jne 0x12071a9d */
  if (!C.zf) goto L_12071a9d;
  /* 12071a67 mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071a6c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12071a6e mov dword ptr [0x1209183c], eax */
  w32((uint32_t)(0x1209183c), (EAX));
  /* 12071a73 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071a76 mov dword ptr [0x12091840], ecx */
  w32((uint32_t)(0x12091840), (ECX));
  /* 12071a7c mov edx, dword ptr [0x12091834] */
  EDX = (r32((uint32_t)(0x12091834)));
  /* 12071a82 push edx */
  push32((uint32_t)(EDX));
  /* 12071a83 call 0x12068640 */
  push32(0x12071a88u); f_12068640();
  /* 12071a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071a8b cmp eax, dword ptr [0x1209182c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1209182c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071a91 jne 0x12071a9b */
  if (!C.zf) goto L_12071a9b;
  /* 12071a93 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071a96 mov dword ptr [0x12091824], eax */
  w32((uint32_t)(0x12091824), (EAX));
L_12071a9b:;
  /* 12071a9b jmp 0x12071acf */
  goto L_12071acf;
L_12071a9d:;
  /* 12071a9d mov ecx, dword ptr [0x1209183c] */
  ECX = (r32((uint32_t)(0x1209183c)));
  /* 12071aa3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12071aa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12071aa8 jne 0x12071acf */
  if (!C.zf) goto L_12071acf;
  /* 12071aaa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071aad push edx */
  push32((uint32_t)(EDX));
  /* 12071aae call 0x12071fe0 */
  push32(0x12071ab3u); f_12071fe0();
  /* 12071ab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071ab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071ab8 je 0x12071acf */
  if (C.zf) goto L_12071acf;
  /* 12071aba mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071abf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12071ac1 mov dword ptr [0x1209183c], eax */
  w32((uint32_t)(0x1209183c), (EAX));
  /* 12071ac6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071ac9 mov dword ptr [0x12091840], ecx */
  w32((uint32_t)(0x12091840), (ECX));
L_12071acf:;
  /* 12071acf mov edx, dword ptr [0x1209183c] */
  EDX = (r32((uint32_t)(0x1209183c)));
  /* 12071ad5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12071adb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071ae1 je 0x12071c51 */
  if (C.zf) goto L_12071c51;
  /* 12071ae7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12071ae9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12071aec push eax */
  push32((uint32_t)(EAX));
  /* 12071aed mov ecx, dword ptr [0x12091830] */
  ECX = (r32((uint32_t)(0x12091830)));
  /* 12071af3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12071af5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071af7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12071afd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12071b04 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071b07 push edx */
  push32((uint32_t)(EDX));
  /* 12071b08 call dword ptr [0x12091844] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091844))), 0x12071b0eu);
  /* 12071b0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071b10 jne 0x12071b26 */
  if (!C.zf) goto L_12071b26;
  /* 12071b12 mov dword ptr [0x1209183c], 0 */
  w32((uint32_t)(0x1209183c), (0x0u));
  /* 12071b1c mov eax, 1 */
  EAX = (0x1u);
  /* 12071b21 jmp 0x12071c5e */
  goto L_12071c5e;
L_12071b26:;
  /* 12071b26 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12071b29 push eax */
  push32((uint32_t)(EAX));
  /* 12071b2a mov ecx, dword ptr [0x12091834] */
  ECX = (r32((uint32_t)(0x12091834)));
  /* 12071b30 push ecx */
  push32((uint32_t)(ECX));
  /* 12071b31 call 0x12073ee0 */
  push32(0x12071b36u); f_12073ee0();
  /* 12071b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071b39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071b3b jne 0x12071bf0 */
  if (!C.zf) goto L_12071bf0;
  /* 12071b41 mov edx, dword ptr [0x1209183c] */
  EDX = (r32((uint32_t)(0x1209183c)));
  /* 12071b47 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12071b4a mov dword ptr [0x1209183c], edx */
  w32((uint32_t)(0x1209183c), (EDX));
  /* 12071b50 cmp dword ptr [0x12091830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071b57 je 0x12071b7a */
  if (C.zf) goto L_12071b7a;
  /* 12071b59 mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071b5e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12071b61 mov dword ptr [0x1209183c], eax */
  w32((uint32_t)(0x1209183c), (EAX));
  /* 12071b66 cmp dword ptr [0x12091824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071b6d jne 0x12071b78 */
  if (!C.zf) goto L_12071b78;
  /* 12071b6f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071b72 mov dword ptr [0x12091824], ecx */
  w32((uint32_t)(0x12091824), (ECX));
L_12071b78:;
  /* 12071b78 jmp 0x12071bee */
  goto L_12071bee;
L_12071b7a:;
  /* 12071b7a cmp dword ptr [0x1209182c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209182c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071b81 je 0x12071bcf */
  if (C.zf) goto L_12071bcf;
  /* 12071b83 mov edx, dword ptr [0x12091834] */
  EDX = (r32((uint32_t)(0x12091834)));
  /* 12071b89 push edx */
  push32((uint32_t)(EDX));
  /* 12071b8a call 0x12068640 */
  push32(0x12071b8fu); f_12068640();
  /* 12071b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071b92 cmp eax, dword ptr [0x1209182c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1209182c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071b98 jne 0x12071bcf */
  if (!C.zf) goto L_12071bcf;
  /* 12071b9a push 1 */
  push32((uint32_t)(0x1u));
  /* 12071b9c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071b9f push eax */
  push32((uint32_t)(EAX));
  /* 12071ba0 call 0x12072030 */
  push32(0x12071ba5u); f_12072030();
  /* 12071ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071baa je 0x12071bcd */
  if (C.zf) goto L_12071bcd;
  /* 12071bac mov ecx, dword ptr [0x1209183c] */
  ECX = (r32((uint32_t)(0x1209183c)));
  /* 12071bb2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12071bb5 mov dword ptr [0x1209183c], ecx */
  w32((uint32_t)(0x1209183c), (ECX));
  /* 12071bbb cmp dword ptr [0x12091824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071bc2 jne 0x12071bcd */
  if (!C.zf) goto L_12071bcd;
  /* 12071bc4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071bc7 mov dword ptr [0x12091824], edx */
  w32((uint32_t)(0x12091824), (EDX));
L_12071bcd:;
  /* 12071bcd jmp 0x12071bee */
  goto L_12071bee;
L_12071bcf:;
  /* 12071bcf mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071bd4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12071bd7 mov dword ptr [0x1209183c], eax */
  w32((uint32_t)(0x1209183c), (EAX));
  /* 12071bdc cmp dword ptr [0x12091824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071be3 jne 0x12071bee */
  if (!C.zf) goto L_12071bee;
  /* 12071be5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071be8 mov dword ptr [0x12091824], ecx */
  w32((uint32_t)(0x12091824), (ECX));
L_12071bee:;
  /* 12071bee jmp 0x12071c51 */
  goto L_12071c51;
L_12071bf0:;
  /* 12071bf0 cmp dword ptr [0x12091830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071bf7 jne 0x12071c51 */
  if (!C.zf) goto L_12071c51;
  /* 12071bf9 cmp dword ptr [0x1209182c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209182c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071c00 je 0x12071c51 */
  if (C.zf) goto L_12071c51;
  /* 12071c02 mov edx, dword ptr [0x1209182c] */
  EDX = (r32((uint32_t)(0x1209182c)));
  /* 12071c08 push edx */
  push32((uint32_t)(EDX));
  /* 12071c09 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12071c0c push eax */
  push32((uint32_t)(EAX));
  /* 12071c0d mov ecx, dword ptr [0x12091834] */
  ECX = (r32((uint32_t)(0x12091834)));
  /* 12071c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12071c14 call 0x12073fb0 */
  push32(0x12071c19u); f_12073fb0();
  /* 12071c19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071c1e jne 0x12071c51 */
  if (!C.zf) goto L_12071c51;
  /* 12071c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12071c22 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071c25 push edx */
  push32((uint32_t)(EDX));
  /* 12071c26 call 0x12072030 */
  push32(0x12071c2bu); f_12072030();
  /* 12071c2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071c30 je 0x12071c51 */
  if (C.zf) goto L_12071c51;
  /* 12071c32 mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071c37 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12071c3a mov dword ptr [0x1209183c], eax */
  w32((uint32_t)(0x1209183c), (EAX));
  /* 12071c3f cmp dword ptr [0x12091824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071c46 jne 0x12071c51 */
  if (!C.zf) goto L_12071c51;
  /* 12071c48 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071c4b mov dword ptr [0x12091824], ecx */
  w32((uint32_t)(0x12091824), (ECX));
L_12071c51:;
  /* 12071c51 mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071c56 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12071c59 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12071c5b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071c5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12071c5e:;
  /* 12071c5e mov esp, ebp */
  ESP = (EBP);
  /* 12071c60 pop ebp */
  EBP = (pop32());
  /* 12071c61 ret 4 */
  ESPCHK(0x12071940u, _esp0);
  ESP += 8; return;
}

/* FUN_10011c70 @ 0x12071c70 (116 bytes, 33 insns) */
void f_12071c70(void) {
  FTRACE(0x12071c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12071c71 mov ebp, esp */
  EBP = (ESP);
  /* 12071c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12071c74 mov eax, dword ptr [0x12091834] */
  EAX = (r32((uint32_t)(0x12091834)));
  /* 12071c79 push eax */
  push32((uint32_t)(EAX));
  /* 12071c7a call 0x12068640 */
  push32(0x12071c7fu); f_12068640();
  /* 12071c7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071c82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12071c84 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071c87 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12071c8a mov dword ptr [0x12091830], ecx */
  w32((uint32_t)(0x12091830), (ECX));
  /* 12071c90 cmp dword ptr [0x12091830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071c97 je 0x12071ca2 */
  if (C.zf) goto L_12071ca2;
  /* 12071c99 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12071ca0 jmp 0x12071cb4 */
  goto L_12071cb4;
L_12071ca2:;
  /* 12071ca2 mov edx, dword ptr [0x12091834] */
  EDX = (r32((uint32_t)(0x12091834)));
  /* 12071ca8 push edx */
  push32((uint32_t)(EDX));
  /* 12071ca9 call 0x12072320 */
  push32(0x12071caeu); f_12072320();
  /* 12071cae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071cb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12071cb4:;
  /* 12071cb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12071cb7 mov dword ptr [0x1209182c], eax */
  w32((uint32_t)(0x1209182c), (EAX));
  /* 12071cbc push 1 */
  push32((uint32_t)(0x1u));
  /* 12071cbe push 0x12071cf0 */
  push32((uint32_t)(0x12071cf0u));
  /* 12071cc3 call dword ptr [0x120942f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942f4))), 0x12071cc9u);
  /* 12071cc9 mov ecx, dword ptr [0x1209183c] */
  ECX = (r32((uint32_t)(0x1209183c)));
  /* 12071ccf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12071cd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12071cd4 jne 0x12071ce0 */
  if (!C.zf) goto L_12071ce0;
  /* 12071cd6 mov dword ptr [0x1209183c], 0 */
  w32((uint32_t)(0x1209183c), (0x0u));
L_12071ce0:;
  /* 12071ce0 mov esp, ebp */
  ESP = (EBP);
  /* 12071ce2 pop ebp */
  EBP = (pop32());
  /* 12071ce3 ret  */
  ESPCHK(0x12071c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cf0 @ 0x12071cf0 (287 bytes, 86 insns) */
void f_12071cf0(void) {
  FTRACE(0x12071cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12071cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12071cf3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071cf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071cf9 push eax */
  push32((uint32_t)(EAX));
  /* 12071cfa call 0x120722a0 */
  push32(0x12071cffu); f_120722a0();
  /* 12071cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071d02 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12071d05 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12071d07 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12071d0a push ecx */
  push32((uint32_t)(ECX));
  /* 12071d0b mov edx, dword ptr [0x12091830] */
  EDX = (r32((uint32_t)(0x12091830)));
  /* 12071d11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12071d13 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071d15 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12071d1b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071d21 push edx */
  push32((uint32_t)(EDX));
  /* 12071d22 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071d25 push eax */
  push32((uint32_t)(EAX));
  /* 12071d26 call dword ptr [0x12091844] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091844))), 0x12071d2cu);
  /* 12071d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071d2e jne 0x12071d44 */
  if (!C.zf) goto L_12071d44;
  /* 12071d30 mov dword ptr [0x1209183c], 0 */
  w32((uint32_t)(0x1209183c), (0x0u));
  /* 12071d3a mov eax, 1 */
  EAX = (0x1u);
  /* 12071d3f jmp 0x12071e09 */
  goto L_12071e09;
L_12071d44:;
  /* 12071d44 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12071d47 push ecx */
  push32((uint32_t)(ECX));
  /* 12071d48 mov edx, dword ptr [0x12091834] */
  EDX = (r32((uint32_t)(0x12091834)));
  /* 12071d4e push edx */
  push32((uint32_t)(EDX));
  /* 12071d4f call 0x12073ee0 */
  push32(0x12071d54u); f_12073ee0();
  /* 12071d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071d59 jne 0x12071d99 */
  if (!C.zf) goto L_12071d99;
  /* 12071d5b cmp dword ptr [0x12091830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071d62 jne 0x12071d76 */
  if (!C.zf) goto L_12071d76;
  /* 12071d64 push 1 */
  push32((uint32_t)(0x1u));
  /* 12071d66 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071d69 push eax */
  push32((uint32_t)(EAX));
  /* 12071d6a call 0x12072030 */
  push32(0x12071d6fu); f_12072030();
  /* 12071d6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071d74 je 0x12071d97 */
  if (C.zf) goto L_12071d97;
L_12071d76:;
  /* 12071d76 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071d79 mov dword ptr [0x12091840], ecx */
  w32((uint32_t)(0x12091840), (ECX));
  /* 12071d7f mov edx, dword ptr [0x12091840] */
  EDX = (r32((uint32_t)(0x12091840)));
  /* 12071d85 mov dword ptr [0x12091824], edx */
  w32((uint32_t)(0x12091824), (EDX));
  /* 12071d8b mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071d90 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12071d92 mov dword ptr [0x1209183c], eax */
  w32((uint32_t)(0x1209183c), (EAX));
L_12071d97:;
  /* 12071d97 jmp 0x12071dfc */
  goto L_12071dfc;
L_12071d99:;
  /* 12071d99 cmp dword ptr [0x12091830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071da0 jne 0x12071dfc */
  if (!C.zf) goto L_12071dfc;
  /* 12071da2 cmp dword ptr [0x1209182c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209182c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071da9 je 0x12071dfc */
  if (C.zf) goto L_12071dfc;
  /* 12071dab mov ecx, dword ptr [0x1209182c] */
  ECX = (r32((uint32_t)(0x1209182c)));
  /* 12071db1 push ecx */
  push32((uint32_t)(ECX));
  /* 12071db2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12071db5 push edx */
  push32((uint32_t)(EDX));
  /* 12071db6 mov eax, dword ptr [0x12091834] */
  EAX = (r32((uint32_t)(0x12091834)));
  /* 12071dbb push eax */
  push32((uint32_t)(EAX));
  /* 12071dbc call 0x12073fb0 */
  push32(0x12071dc1u); f_12073fb0();
  /* 12071dc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071dc6 jne 0x12071dfc */
  if (!C.zf) goto L_12071dfc;
  /* 12071dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12071dca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071dcd push ecx */
  push32((uint32_t)(ECX));
  /* 12071dce call 0x12072030 */
  push32(0x12071dd3u); f_12072030();
  /* 12071dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071dd8 je 0x12071dfc */
  if (C.zf) goto L_12071dfc;
  /* 12071dda mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071ddd mov dword ptr [0x12091840], edx */
  w32((uint32_t)(0x12091840), (EDX));
  /* 12071de3 mov eax, dword ptr [0x12091840] */
  EAX = (r32((uint32_t)(0x12091840)));
  /* 12071de8 mov dword ptr [0x12091824], eax */
  w32((uint32_t)(0x12091824), (EAX));
  /* 12071ded mov ecx, dword ptr [0x1209183c] */
  ECX = (r32((uint32_t)(0x1209183c)));
  /* 12071df3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12071df6 mov dword ptr [0x1209183c], ecx */
  w32((uint32_t)(0x1209183c), (ECX));
L_12071dfc:;
  /* 12071dfc mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071e01 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12071e04 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12071e06 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071e08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12071e09:;
  /* 12071e09 mov esp, ebp */
  ESP = (EBP);
  /* 12071e0b pop ebp */
  EBP = (pop32());
  /* 12071e0c ret 4 */
  ESPCHK(0x12071cf0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011e10 @ 0x12071e10 (69 bytes, 20 insns) */
void f_12071e10(void) {
  FTRACE(0x12071e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12071e11 mov ebp, esp */
  EBP = (ESP);
  /* 12071e13 mov eax, dword ptr [0x12091838] */
  EAX = (r32((uint32_t)(0x12091838)));
  /* 12071e18 push eax */
  push32((uint32_t)(EAX));
  /* 12071e19 call 0x12068640 */
  push32(0x12071e1eu); f_12068640();
  /* 12071e1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071e21 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12071e23 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071e26 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12071e29 mov dword ptr [0x12091828], ecx */
  w32((uint32_t)(0x12091828), (ECX));
  /* 12071e2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12071e31 push 0x12071e60 */
  push32((uint32_t)(0x12071e60u));
  /* 12071e36 call dword ptr [0x120942f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942f4))), 0x12071e3cu);
  /* 12071e3c mov edx, dword ptr [0x1209183c] */
  EDX = (r32((uint32_t)(0x1209183c)));
  /* 12071e42 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12071e45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12071e47 jne 0x12071e53 */
  if (!C.zf) goto L_12071e53;
  /* 12071e49 mov dword ptr [0x1209183c], 0 */
  w32((uint32_t)(0x1209183c), (0x0u));
L_12071e53:;
  /* 12071e53 pop ebp */
  EBP = (pop32());
  /* 12071e54 ret  */
  ESPCHK(0x12071e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e60 @ 0x12071e60 (172 bytes, 54 insns) */
void f_12071e60(void) {
  FTRACE(0x12071e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12071e61 mov ebp, esp */
  EBP = (ESP);
  /* 12071e63 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071e69 push eax */
  push32((uint32_t)(EAX));
  /* 12071e6a call 0x120722a0 */
  push32(0x12071e6fu); f_120722a0();
  /* 12071e6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071e72 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12071e75 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12071e77 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12071e7a push ecx */
  push32((uint32_t)(ECX));
  /* 12071e7b mov edx, dword ptr [0x12091828] */
  EDX = (r32((uint32_t)(0x12091828)));
  /* 12071e81 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12071e83 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071e85 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12071e8b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071e91 push edx */
  push32((uint32_t)(EDX));
  /* 12071e92 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071e95 push eax */
  push32((uint32_t)(EAX));
  /* 12071e96 call dword ptr [0x12091844] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091844))), 0x12071e9cu);
  /* 12071e9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071e9e jne 0x12071eb1 */
  if (!C.zf) goto L_12071eb1;
  /* 12071ea0 mov dword ptr [0x1209183c], 0 */
  w32((uint32_t)(0x1209183c), (0x0u));
  /* 12071eaa mov eax, 1 */
  EAX = (0x1u);
  /* 12071eaf jmp 0x12071f06 */
  goto L_12071f06;
L_12071eb1:;
  /* 12071eb1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12071eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12071eb5 mov edx, dword ptr [0x12091838] */
  EDX = (r32((uint32_t)(0x12091838)));
  /* 12071ebb push edx */
  push32((uint32_t)(EDX));
  /* 12071ebc call 0x12073ee0 */
  push32(0x12071ec1u); f_12073ee0();
  /* 12071ec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071ec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071ec6 jne 0x12071ef9 */
  if (!C.zf) goto L_12071ef9;
  /* 12071ec8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071ecb push eax */
  push32((uint32_t)(EAX));
  /* 12071ecc call 0x12071fe0 */
  push32(0x12071ed1u); f_12071fe0();
  /* 12071ed1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071ed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071ed6 je 0x12071ef9 */
  if (C.zf) goto L_12071ef9;
  /* 12071ed8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12071edb mov dword ptr [0x12091840], ecx */
  w32((uint32_t)(0x12091840), (ECX));
  /* 12071ee1 mov edx, dword ptr [0x12091840] */
  EDX = (r32((uint32_t)(0x12091840)));
  /* 12071ee7 mov dword ptr [0x12091824], edx */
  w32((uint32_t)(0x12091824), (EDX));
  /* 12071eed mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071ef2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12071ef4 mov dword ptr [0x1209183c], eax */
  w32((uint32_t)(0x1209183c), (EAX));
L_12071ef9:;
  /* 12071ef9 mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071efe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12071f01 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12071f03 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071f05 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12071f06:;
  /* 12071f06 mov esp, ebp */
  ESP = (EBP);
  /* 12071f08 pop ebp */
  EBP = (pop32());
  /* 12071f09 ret 4 */
  ESPCHK(0x12071e60u, _esp0);
  ESP += 8; return;
}

/* FUN_10011f10 @ 0x12071f10 (43 bytes, 11 insns) */
void f_12071f10(void) {
  FTRACE(0x12071f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12071f11 mov ebp, esp */
  EBP = (ESP);
  /* 12071f13 mov eax, dword ptr [0x1209183c] */
  EAX = (r32((uint32_t)(0x1209183c)));
  /* 12071f18 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12071f1d mov dword ptr [0x1209183c], eax */
  w32((uint32_t)(0x1209183c), (EAX));
  /* 12071f22 call dword ptr [0x120942e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942e4))), 0x12071f28u);
  /* 12071f28 mov dword ptr [0x12091840], eax */
  w32((uint32_t)(0x12091840), (EAX));
  /* 12071f2d mov ecx, dword ptr [0x12091840] */
  ECX = (r32((uint32_t)(0x12091840)));
  /* 12071f33 mov dword ptr [0x12091824], ecx */
  w32((uint32_t)(0x12091824), (ECX));
  /* 12071f39 pop ebp */
  EBP = (pop32());
  /* 12071f3a ret  */
  ESPCHK(0x12071f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f40 @ 0x12071f40 (155 bytes, 57 insns) */
void f_12071f40(void) {
  FTRACE(0x12071f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12071f41 mov ebp, esp */
  EBP = (ESP);
  /* 12071f43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071f46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071f4a je 0x12071f6b */
  if (C.zf) goto L_12071f6b;
  /* 12071f4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071f4f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12071f52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12071f54 je 0x12071f6b */
  if (C.zf) goto L_12071f6b;
  /* 12071f56 push 0x1208d854 */
  push32((uint32_t)(0x1208d854u));
  /* 12071f5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071f5e push edx */
  push32((uint32_t)(EDX));
  /* 12071f5f call 0x120714a0 */
  push32(0x12071f64u); f_120714a0();
  /* 12071f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071f67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071f69 jne 0x12071f93 */
  if (!C.zf) goto L_12071f93;
L_12071f6b:;
  /* 12071f6b push 8 */
  push32((uint32_t)(0x8u));
  /* 12071f6d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12071f70 push eax */
  push32((uint32_t)(EAX));
  /* 12071f71 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12071f76 mov ecx, dword ptr [0x12091840] */
  ECX = (r32((uint32_t)(0x12091840)));
  /* 12071f7c push ecx */
  push32((uint32_t)(ECX));
  /* 12071f7d call dword ptr [0x12091844] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091844))), 0x12071f83u);
  /* 12071f83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071f85 jne 0x12071f8b */
  if (!C.zf) goto L_12071f8b;
  /* 12071f87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12071f89 jmp 0x12071fd7 */
  goto L_12071fd7;
L_12071f8b:;
  /* 12071f8b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12071f8e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12071f91 jmp 0x12071fcb */
  goto L_12071fcb;
L_12071f93:;
  /* 12071f93 push 0x1208d850 */
  push32((uint32_t)(0x1208d850u));
  /* 12071f98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071f9b push eax */
  push32((uint32_t)(EAX));
  /* 12071f9c call 0x120714a0 */
  push32(0x12071fa1u); f_120714a0();
  /* 12071fa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071fa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071fa6 jne 0x12071fcb */
  if (!C.zf) goto L_12071fcb;
  /* 12071fa8 push 8 */
  push32((uint32_t)(0x8u));
  /* 12071faa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12071fad push ecx */
  push32((uint32_t)(ECX));
  /* 12071fae push 0xb */
  push32((uint32_t)(0xbu));
  /* 12071fb0 mov edx, dword ptr [0x12091840] */
  EDX = (r32((uint32_t)(0x12091840)));
  /* 12071fb6 push edx */
  push32((uint32_t)(EDX));
  /* 12071fb7 call dword ptr [0x12091844] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091844))), 0x12071fbdu);
  /* 12071fbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071fbf jne 0x12071fc5 */
  if (!C.zf) goto L_12071fc5;
  /* 12071fc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12071fc3 jmp 0x12071fd7 */
  goto L_12071fd7;
L_12071fc5:;
  /* 12071fc5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12071fc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12071fcb:;
  /* 12071fcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071fce push ecx */
  push32((uint32_t)(ECX));
  /* 12071fcf call 0x120740c0 */
  push32(0x12071fd4u); f_120740c0();
  /* 12071fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12071fd7:;
  /* 12071fd7 mov esp, ebp */
  ESP = (EBP);
  /* 12071fd9 pop ebp */
  EBP = (pop32());
  /* 12071fda ret  */
  ESPCHK(0x12071f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fe0 @ 0x12071fe0 (79 bytes, 26 insns) */
void f_12071fe0(void) {
  FTRACE(0x12071fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12071fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12071fe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12071fe6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12071fea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12071fee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12071ff5 jmp 0x12072000 */
  goto L_12072000;
L_12071ff7:;
  /* 12071ff7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12071ffa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071ffd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12072000:;
  /* 12072000 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072004 jae 0x12072026 */
  if (!C.cf) goto L_12072026;
  /* 12072006 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12072009 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1207200f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12072012 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12072014 mov cx, word ptr [eax*2 + 0x120909d4] */
  CX = (r16((uint32_t)(EAX*2 + 0x120909d4)));
  /* 1207201c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207201e jne 0x12072024 */
  if (!C.zf) goto L_12072024;
  /* 12072020 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12072022 jmp 0x1207202b */
  goto L_1207202b;
L_12072024:;
  /* 12072024 jmp 0x12071ff7 */
  goto L_12071ff7;
L_12072026:;
  /* 12072026 mov eax, 1 */
  EAX = (0x1u);
L_1207202b:;
  /* 1207202b mov esp, ebp */
  ESP = (EBP);
  /* 1207202d pop ebp */
  EBP = (pop32());
  /* 1207202e ret  */
  ESPCHK(0x12071fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012030 @ 0x12072030 (135 bytes, 48 insns) */
void f_12072030(void) {
  FTRACE(0x12072030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12072030 push ebp */
  push32((uint32_t)(EBP));
  /* 12072031 mov ebp, esp */
  EBP = (ESP);
  /* 12072033 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072036 push esi */
  push32((uint32_t)(ESI));
  /* 12072037 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207203a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1207203f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12072044 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12072049 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1207204c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12072051 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12072054 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12072056 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12072059 push ecx */
  push32((uint32_t)(ECX));
  /* 1207205a push 1 */
  push32((uint32_t)(0x1u));
  /* 1207205c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207205f push edx */
  push32((uint32_t)(EDX));
  /* 12072060 call dword ptr [0x12091844] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091844))), 0x12072066u);
  /* 12072066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12072068 jne 0x1207206e */
  if (!C.zf) goto L_1207206e;
  /* 1207206a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207206c jmp 0x120720b2 */
  goto L_120720b2;
L_1207206e:;
  /* 1207206e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12072071 push eax */
  push32((uint32_t)(EAX));
  /* 12072072 call 0x120722a0 */
  push32(0x12072077u); f_120722a0();
  /* 12072077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207207a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207207d je 0x120720ad */
  if (C.zf) goto L_120720ad;
  /* 1207207f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072083 je 0x120720ad */
  if (C.zf) goto L_120720ad;
  /* 12072085 mov ecx, dword ptr [0x12091834] */
  ECX = (r32((uint32_t)(0x12091834)));
  /* 1207208b push ecx */
  push32((uint32_t)(ECX));
  /* 1207208c call 0x12072320 */
  push32(0x12072091u); f_12072320();
  /* 12072091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072094 mov esi, eax */
  ESI = (EAX);
  /* 12072096 mov edx, dword ptr [0x12091834] */
  EDX = (r32((uint32_t)(0x12091834)));
  /* 1207209c push edx */
  push32((uint32_t)(EDX));
  /* 1207209d call 0x12068640 */
  push32(0x120720a2u); f_12068640();
  /* 120720a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120720a5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120720a7 jne 0x120720ad */
  if (!C.zf) goto L_120720ad;
  /* 120720a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120720ab jmp 0x120720b2 */
  goto L_120720b2;
L_120720ad:;
  /* 120720ad mov eax, 1 */
  EAX = (0x1u);
L_120720b2:;
  /* 120720b2 pop esi */
  ESI = (pop32());
  /* 120720b3 mov esp, ebp */
  ESP = (EBP);
  /* 120720b5 pop ebp */
  EBP = (pop32());
  /* 120720b6 ret  */
  ESPCHK(0x12072030u, _esp0);
  ESP += 4; return;
}

/* FUN_100120c0 @ 0x120720c0 (77 bytes, 18 insns) */
void f_120720c0(void) {
  FTRACE(0x120720c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120720c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120720c1 mov ebp, esp */
  EBP = (ESP);
  /* 120720c3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120720c9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 120720d3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 120720d9 push eax */
  push32((uint32_t)(EAX));
  /* 120720da call dword ptr [0x120942e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942e0))), 0x120720e0u);
  /* 120720e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120720e2 je 0x120720f9 */
  if (C.zf) goto L_120720f9;
  /* 120720e4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120720eb jne 0x120720f9 */
  if (!C.zf) goto L_120720f9;
  /* 120720ed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 120720f7 jmp 0x12072103 */
  goto L_12072103;
L_120720f9:;
  /* 120720f9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12072103:;
  /* 12072103 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12072109 mov esp, ebp */
  ESP = (EBP);
  /* 1207210b pop ebp */
  EBP = (pop32());
  /* 1207210c ret  */
  ESPCHK(0x120720c0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12072110 (388 bytes, 118 insns) */
void f_12072110(void) {
  FTRACE(0x12072110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12072110 push ebp */
  push32((uint32_t)(EBP));
  /* 12072111 mov ebp, esp */
  EBP = (ESP);
  /* 12072113 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072116 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1207211d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12072124 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1207212b:;
  /* 1207212b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1207212e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072131 jg 0x12072278 */
  if ((!C.zf&&C.sf==C.of)) goto L_12072278;
  /* 12072137 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1207213a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207213d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1207213e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072140 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12072142 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12072145 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072148 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1207214b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207214e cmp edx, dword ptr [ecx + 0x12090530] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12090530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072154 jne 0x1207224e */
  if (!C.zf) goto L_1207224e;
  /* 1207215a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1207215d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12072160 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072164 ja 0x12072187 */
  if ((!C.cf&&!C.zf)) goto L_12072187;
  /* 12072166 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207216a je 0x120721f9 */
  if (C.zf) goto L_120721f9;
  /* 12072170 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072174 je 0x120721a4 */
  if (C.zf) goto L_120721a4;
  /* 12072176 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207217a je 0x120721c6 */
  if (C.zf) goto L_120721c6;
  /* 1207217c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072180 je 0x120721e8 */
  if (C.zf) goto L_120721e8;
  /* 12072182 jmp 0x12072218 */
  goto L_12072218;
L_12072187:;
  /* 12072187 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207218e je 0x120721b5 */
  if (C.zf) goto L_120721b5;
  /* 12072190 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072197 je 0x120721d7 */
  if (C.zf) goto L_120721d7;
  /* 12072199 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120721a0 je 0x1207220a */
  if (C.zf) goto L_1207220a;
  /* 120721a2 jmp 0x12072218 */
  goto L_12072218;
L_120721a4:;
  /* 120721a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120721a7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120721aa add ecx, 0x12090534 */
  { uint32_t _a=(ECX),_b=(0x12090534u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120721b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120721b3 jmp 0x12072218 */
  goto L_12072218;
L_120721b5:;
  /* 120721b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120721b8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120721bb mov eax, dword ptr [edx + 0x1209053c] */
  EAX = (r32((uint32_t)(EDX + 0x1209053c)));
  /* 120721c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120721c4 jmp 0x12072218 */
  goto L_12072218;
L_120721c6:;
  /* 120721c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120721c9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120721cc add ecx, 0x12090540 */
  { uint32_t _a=(ECX),_b=(0x12090540u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120721d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120721d5 jmp 0x12072218 */
  goto L_12072218;
L_120721d7:;
  /* 120721d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120721da imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120721dd mov eax, dword ptr [edx + 0x12090544] */
  EAX = (r32((uint32_t)(EDX + 0x12090544)));
  /* 120721e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120721e6 jmp 0x12072218 */
  goto L_12072218;
L_120721e8:;
  /* 120721e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120721eb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120721ee add ecx, 0x12090548 */
  { uint32_t _a=(ECX),_b=(0x12090548u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120721f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120721f7 jmp 0x12072218 */
  goto L_12072218;
L_120721f9:;
  /* 120721f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120721fc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120721ff add edx, 0x1209054c */
  { uint32_t _a=(EDX),_b=(0x1209054cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072205 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12072208 jmp 0x12072218 */
  goto L_12072218;
L_1207220a:;
  /* 1207220a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207220d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12072210 add eax, 0x12090554 */
  { uint32_t _a=(EAX),_b=(0x12090554u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072215 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12072218:;
  /* 12072218 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207221c je 0x12072224 */
  if (C.zf) goto L_12072224;
  /* 1207221e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072222 jge 0x12072226 */
  if ((C.sf==C.of)) goto L_12072226;
L_12072224:;
  /* 12072224 jmp 0x12072278 */
  goto L_12072278;
L_12072226:;
  /* 12072226 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072229 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1207222c push ecx */
  push32((uint32_t)(ECX));
  /* 1207222d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12072230 push edx */
  push32((uint32_t)(EDX));
  /* 12072231 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072234 push eax */
  push32((uint32_t)(EAX));
  /* 12072235 call 0x12069030 */
  push32(0x1207223au); f_12069030();
  /* 1207223a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207223d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072240 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072243 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12072247 mov eax, 1 */
  EAX = (0x1u);
  /* 1207224c jmp 0x1207228e */
  goto L_1207228e;
L_1207224e:;
  /* 1207224e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072251 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12072254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072257 cmp eax, dword ptr [edx + 0x12090530] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12090530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207225d jae 0x1207226a */
  if (!C.cf) goto L_1207226a;
  /* 1207225f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072262 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072265 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12072268 jmp 0x12072273 */
  goto L_12072273;
L_1207226a:;
  /* 1207226a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207226d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072270 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12072273:;
  /* 12072273 jmp 0x1207212b */
  goto L_1207212b;
L_12072278:;
  /* 12072278 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207227b push eax */
  push32((uint32_t)(EAX));
  /* 1207227c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207227f push ecx */
  push32((uint32_t)(ECX));
  /* 12072280 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072283 push edx */
  push32((uint32_t)(EDX));
  /* 12072284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072287 push eax */
  push32((uint32_t)(EAX));
  /* 12072288 call dword ptr [0x120942ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942ec))), 0x1207228eu);
L_1207228e:;
  /* 1207228e mov esp, ebp */
  ESP = (EBP);
  /* 12072290 pop ebp */
  EBP = (pop32());
  /* 12072291 ret 0x10 */
  ESPCHK(0x12072110u, _esp0);
  ESP += 20; return;
}

/* FUN_100122a0 @ 0x120722a0 (118 bytes, 42 insns) */
void f_120722a0(void) {
  FTRACE(0x120722a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120722a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120722a1 mov ebp, esp */
  EBP = (ESP);
  /* 120722a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120722a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120722ad:;
  /* 120722ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120722b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120722b2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 120722b5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120722b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120722bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120722bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120722c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120722c4 je 0x1207230f */
  if (C.zf) goto L_1207230f;
  /* 120722c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120722ca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120722cd jl 0x120722e2 */
  if ((C.sf!=C.of)) goto L_120722e2;
  /* 120722cf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120722d3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120722d6 jg 0x120722e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_120722e2;
  /* 120722d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120722db add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120722dd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 120722e0 jmp 0x120722fc */
  goto L_120722fc;
L_120722e2:;
  /* 120722e2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120722e6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120722e9 jl 0x120722fc */
  if ((C.sf!=C.of)) goto L_120722fc;
  /* 120722eb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120722ef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120722f2 jg 0x120722fc */
  if ((!C.zf&&C.sf==C.of)) goto L_120722fc;
  /* 120722f4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120722f7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120722f9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_120722fc:;
  /* 120722fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120722ff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12072302 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12072306 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1207230a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1207230d jmp 0x120722ad */
  goto L_120722ad;
L_1207230f:;
  /* 1207230f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12072312 mov esp, ebp */
  ESP = (EBP);
  /* 12072314 pop ebp */
  EBP = (pop32());
  /* 12072315 ret  */
  ESPCHK(0x120722a0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12072320 (101 bytes, 36 insns) */
void f_12072320(void) {
  FTRACE(0x12072320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12072320 push ebp */
  push32((uint32_t)(EBP));
  /* 12072321 mov ebp, esp */
  EBP = (ESP);
  /* 12072323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072326 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1207232d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072330 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12072332 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12072335 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072338 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207233b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1207233e:;
  /* 1207233e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12072342 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072345 jl 0x12072350 */
  if ((C.sf!=C.of)) goto L_12072350;
  /* 12072347 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1207234b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207234e jle 0x12072362 */
  if ((C.zf||C.sf!=C.of)) goto L_12072362;
L_12072350:;
  /* 12072350 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12072354 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072357 jl 0x1207237e */
  if ((C.sf!=C.of)) goto L_1207237e;
  /* 12072359 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1207235d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072360 jg 0x1207237e */
  if ((!C.zf&&C.sf==C.of)) goto L_1207237e;
L_12072362:;
  /* 12072362 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12072365 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072368 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1207236b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207236e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12072370 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12072373 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072376 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072379 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1207237c jmp 0x1207233e */
  goto L_1207233e;
L_1207237e:;
  /* 1207237e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12072381 mov esp, ebp */
  ESP = (EBP);
  /* 12072383 pop ebp */
  EBP = (pop32());
  /* 12072384 ret  */
  ESPCHK(0x12072320u, _esp0);
  ESP += 4; return;
}

/* FUN_10012390 @ 0x12072390 (122 bytes, 39 insns) */
void f_12072390(void) {
  FTRACE(0x12072390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12072390 push ebp */
  push32((uint32_t)(EBP));
  /* 12072391 mov ebp, esp */
  EBP = (ESP);
  /* 12072393 push ecx */
  push32((uint32_t)(ECX));
  /* 12072394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072397 cmp eax, dword ptr [0x120930dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120930dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207239d jae 0x120723c1 */
  if (!C.cf) goto L_120723c1;
  /* 1207239f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120723a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120723a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120723a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120723ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120723ae mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 120723b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 120723ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120723bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120723bf jne 0x120723dc */
  if (!C.zf) goto L_120723dc;
L_120723c1:;
  /* 120723c1 call 0x1206d6e0 */
  push32(0x120723c6u); f_1206d6e0();
  /* 120723c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120723cc call 0x1206d6f0 */
  push32(0x120723d1u); f_1206d6f0();
  /* 120723d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120723d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120723da jmp 0x12072406 */
  goto L_12072406;
L_120723dc:;
  /* 120723dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120723df push edx */
  push32((uint32_t)(EDX));
  /* 120723e0 call 0x1206ef00 */
  push32(0x120723e5u); f_1206ef00();
  /* 120723e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120723e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120723eb push eax */
  push32((uint32_t)(EAX));
  /* 120723ec call 0x12072410 */
  push32(0x120723f1u); f_12072410();
  /* 120723f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120723f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120723f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120723fa push ecx */
  push32((uint32_t)(ECX));
  /* 120723fb call 0x1206ef90 */
  push32(0x12072400u); f_1206ef90();
  /* 12072400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072403 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12072406:;
  /* 12072406 mov esp, ebp */
  ESP = (EBP);
  /* 12072408 pop ebp */
  EBP = (pop32());
  /* 12072409 ret  */
  ESPCHK(0x12072390u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12072410 (170 bytes, 59 insns) */
void f_12072410(void) {
  FTRACE(0x12072410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12072410 push ebp */
  push32((uint32_t)(EBP));
  /* 12072411 mov ebp, esp */
  EBP = (ESP);
  /* 12072413 push ecx */
  push32((uint32_t)(ECX));
  /* 12072414 push esi */
  push32((uint32_t)(ESI));
  /* 12072415 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072418 push eax */
  push32((uint32_t)(EAX));
  /* 12072419 call 0x1206ed80 */
  push32(0x1207241eu); f_1206ed80();
  /* 1207241e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072421 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072424 je 0x12072463 */
  if (C.zf) goto L_12072463;
  /* 12072426 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207242a je 0x12072432 */
  if (C.zf) goto L_12072432;
  /* 1207242c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072430 jne 0x1207244c */
  if (!C.zf) goto L_1207244c;
L_12072432:;
  /* 12072432 push 1 */
  push32((uint32_t)(0x1u));
  /* 12072434 call 0x1206ed80 */
  push32(0x12072439u); f_1206ed80();
  /* 12072439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207243c mov esi, eax */
  ESI = (EAX);
  /* 1207243e push 2 */
  push32((uint32_t)(0x2u));
  /* 12072440 call 0x1206ed80 */
  push32(0x12072445u); f_1206ed80();
  /* 12072445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072448 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207244a je 0x12072463 */
  if (C.zf) goto L_12072463;
L_1207244c:;
  /* 1207244c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207244f push ecx */
  push32((uint32_t)(ECX));
  /* 12072450 call 0x1206ed80 */
  push32(0x12072455u); f_1206ed80();
  /* 12072455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072458 push eax */
  push32((uint32_t)(EAX));
  /* 12072459 call dword ptr [0x120942e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942e8))), 0x1207245fu);
  /* 1207245f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12072461 je 0x1207246c */
  if (C.zf) goto L_1207246c;
L_12072463:;
  /* 12072463 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1207246a jmp 0x12072475 */
  goto L_12072475;
L_1207246c:;
  /* 1207246c call dword ptr [0x120943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943ac))), 0x12072472u);
  /* 12072472 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12072475:;
  /* 12072475 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072478 push edx */
  push32((uint32_t)(EDX));
  /* 12072479 call 0x1206eca0 */
  push32(0x1207247eu); f_1206eca0();
  /* 1207247e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072484 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12072487 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207248a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1207248d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12072490 mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 12072497 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1207249c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120724a0 je 0x120724b3 */
  if (C.zf) goto L_120724b3;
  /* 120724a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120724a5 push eax */
  push32((uint32_t)(EAX));
  /* 120724a6 call 0x1206d640 */
  push32(0x120724abu); f_1206d640();
  /* 120724ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120724ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120724b1 jmp 0x120724b5 */
  goto L_120724b5;
L_120724b3:;
  /* 120724b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120724b5:;
  /* 120724b5 pop esi */
  ESI = (pop32());
  /* 120724b6 mov esp, ebp */
  ESP = (EBP);
  /* 120724b8 pop ebp */
  EBP = (pop32());
  /* 120724b9 ret  */
  ESPCHK(0x12072410u, _esp0);
  ESP += 4; return;
}

/* FUN_100124c0 @ 0x120724c0 (146 bytes, 52 insns) */
void f_120724c0(void) {
  FTRACE(0x120724c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120724c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120724c1 mov ebp, esp */
  EBP = (ESP);
  /* 120724c3 push ebx */
  push32((uint32_t)(EBX));
  /* 120724c4 push esi */
  push32((uint32_t)(ESI));
  /* 120724c5 push edi */
  push32((uint32_t)(EDI));
L_120724c6:;
  /* 120724c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120724ca jne 0x120724ea */
  if (!C.zf) goto L_120724ea;
  /* 120724cc push 0x1208d190 */
  push32((uint32_t)(0x1208d190u));
  /* 120724d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120724d3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120724d5 push 0x1208d858 */
  push32((uint32_t)(0x1208d858u));
  /* 120724da push 2 */
  push32((uint32_t)(0x2u));
  /* 120724dc call 0x120648d0 */
  push32(0x120724e1u); f_120648d0();
  /* 120724e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120724e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120724e7 jne 0x120724ea */
  if (!C.zf) goto L_120724ea;
  /* 120724e9 int3  */
  x86_unimpl("int3 @ 0x120724e9");
L_120724ea:;
  /* 120724ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120724ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120724ee jne 0x120724c6 */
  if (!C.zf) goto L_120724c6;
  /* 120724f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120724f3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120724f6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 120724fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120724fe je 0x1207254d */
  if (C.zf) goto L_1207254d;
  /* 12072500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072503 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12072506 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12072509 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1207250b je 0x1207254d */
  if (C.zf) goto L_1207254d;
  /* 1207250d push 2 */
  push32((uint32_t)(0x2u));
  /* 1207250f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072512 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12072515 push eax */
  push32((uint32_t)(EAX));
  /* 12072516 call 0x120662a0 */
  push32(0x1207251bu); f_120662a0();
  /* 1207251b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207251e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072521 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12072524 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1207252a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207252d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12072530 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072533 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12072539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207253c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12072543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072546 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1207254d:;
  /* 1207254d pop edi */
  EDI = (pop32());
  /* 1207254e pop esi */
  ESI = (pop32());
  /* 1207254f pop ebx */
  EBX = (pop32());
  /* 12072550 pop ebp */
  EBP = (pop32());
  /* 12072551 ret  */
  ESPCHK(0x120724c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012560 @ 0x12072560 (289 bytes, 97 insns) */
void f_12072560(void) {
  FTRACE(0x12072560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12072560 push ebp */
  push32((uint32_t)(EBP));
  /* 12072561 mov ebp, esp */
  EBP = (ESP);
  /* 12072563 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072566 push esi */
  push32((uint32_t)(ESI));
  /* 12072567 mov eax, dword ptr [0x12090ca8] */
  EAX = (r32((uint32_t)(0x12090ca8)));
  /* 1207256c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1207256f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12072576 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1207257d jmp 0x12072588 */
  goto L_12072588;
L_1207257f:;
  /* 1207257f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072582 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072585 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12072588:;
  /* 12072588 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207258c jae 0x120725c1 */
  if (!C.cf) goto L_120725c1;
  /* 1207258e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072591 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072594 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12072597 push ecx */
  push32((uint32_t)(ECX));
  /* 12072598 call 0x12068640 */
  push32(0x1207259du); f_12068640();
  /* 1207259d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120725a0 mov esi, eax */
  ESI = (EAX);
  /* 120725a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120725a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120725a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 120725ac push ecx */
  push32((uint32_t)(ECX));
  /* 120725ad call 0x12068640 */
  push32(0x120725b2u); f_12068640();
  /* 120725b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120725b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120725b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 120725bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120725bf jmp 0x1207257f */
  goto L_1207257f;
L_120725c1:;
  /* 120725c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120725c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120725c7 push eax */
  push32((uint32_t)(EAX));
  /* 120725c8 call 0x120657f0 */
  push32(0x120725cdu); f_120657f0();
  /* 120725cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120725d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120725d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120725d7 je 0x12072679 */
  if (C.zf) goto L_12072679;
  /* 120725dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120725e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120725e3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120725ea jmp 0x120725f5 */
  goto L_120725f5;
L_120725ec:;
  /* 120725ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120725ef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120725f2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120725f5:;
  /* 120725f5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120725f9 jae 0x1207266a */
  if (!C.cf) goto L_1207266a;
  /* 120725fb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120725fe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12072601 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072604 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072607 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1207260a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1207260d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072610 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12072613 push ecx */
  push32((uint32_t)(ECX));
  /* 12072614 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072617 push edx */
  push32((uint32_t)(EDX));
  /* 12072618 call 0x120687c0 */
  push32(0x1207261du); f_120687c0();
  /* 1207261d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072620 push eax */
  push32((uint32_t)(EAX));
  /* 12072621 call 0x12068640 */
  push32(0x12072626u); f_12068640();
  /* 12072626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072629 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207262c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207262e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12072631 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072634 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12072637 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207263a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207263d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12072640 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072643 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072646 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1207264a push eax */
  push32((uint32_t)(EAX));
  /* 1207264b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207264e push ecx */
  push32((uint32_t)(ECX));
  /* 1207264f call 0x120687c0 */
  push32(0x12072654u); f_120687c0();
  /* 12072654 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072657 push eax */
  push32((uint32_t)(EAX));
  /* 12072658 call 0x12068640 */
  push32(0x1207265du); f_12068640();
  /* 1207265d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072660 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072663 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072665 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12072668 jmp 0x120725ec */
  goto L_120725ec;
L_1207266a:;
  /* 1207266a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207266d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12072670 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072673 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072676 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12072679:;
  /* 12072679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207267c pop esi */
  ESI = (pop32());
  /* 1207267d mov esp, ebp */
  ESP = (EBP);
  /* 1207267f pop ebp */
  EBP = (pop32());
  /* 12072680 ret  */
  ESPCHK(0x12072560u, _esp0);
  ESP += 4; return;
}

/* FUN_10012690 @ 0x12072690 (291 bytes, 97 insns) */
void f_12072690(void) {
  FTRACE(0x12072690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12072690 push ebp */
  push32((uint32_t)(EBP));
  /* 12072691 mov ebp, esp */
  EBP = (ESP);
  /* 12072693 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072696 push esi */
  push32((uint32_t)(ESI));
  /* 12072697 mov eax, dword ptr [0x12090ca8] */
  EAX = (r32((uint32_t)(0x12090ca8)));
  /* 1207269c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1207269f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120726a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120726ad jmp 0x120726b8 */
  goto L_120726b8;
L_120726af:;
  /* 120726af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120726b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120726b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120726b8:;
  /* 120726b8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120726bc jae 0x120726f2 */
  if (!C.cf) goto L_120726f2;
  /* 120726be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120726c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120726c4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 120726c8 push ecx */
  push32((uint32_t)(ECX));
  /* 120726c9 call 0x12068640 */
  push32(0x120726ceu); f_12068640();
  /* 120726ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120726d1 mov esi, eax */
  ESI = (EAX);
  /* 120726d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120726d6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120726d9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 120726dd push ecx */
  push32((uint32_t)(ECX));
  /* 120726de call 0x12068640 */
  push32(0x120726e3u); f_12068640();
  /* 120726e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120726e6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120726e9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 120726ed mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120726f0 jmp 0x120726af */
  goto L_120726af;
L_120726f2:;
  /* 120726f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120726f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120726f8 push eax */
  push32((uint32_t)(EAX));
  /* 120726f9 call 0x120657f0 */
  push32(0x120726feu); f_120657f0();
  /* 120726fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072701 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12072704 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072708 je 0x120727ab */
  if (C.zf) goto L_120727ab;
  /* 1207270e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12072711 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12072714 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1207271b jmp 0x12072726 */
  goto L_12072726;
L_1207271d:;
  /* 1207271d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072720 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072723 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12072726:;
  /* 12072726 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207272a jae 0x1207279c */
  if (!C.cf) goto L_1207279c;
  /* 1207272c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207272f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12072732 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072735 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072738 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1207273b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1207273e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072741 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12072745 push ecx */
  push32((uint32_t)(ECX));
  /* 12072746 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072749 push edx */
  push32((uint32_t)(EDX));
  /* 1207274a call 0x120687c0 */
  push32(0x1207274fu); f_120687c0();
  /* 1207274f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072752 push eax */
  push32((uint32_t)(EAX));
  /* 12072753 call 0x12068640 */
  push32(0x12072758u); f_12068640();
  /* 12072758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207275b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207275e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072760 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12072763 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072766 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12072769 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207276c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207276f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12072772 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072775 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072778 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1207277c push eax */
  push32((uint32_t)(EAX));
  /* 1207277d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072780 push ecx */
  push32((uint32_t)(ECX));
  /* 12072781 call 0x120687c0 */
  push32(0x12072786u); f_120687c0();
  /* 12072786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072789 push eax */
  push32((uint32_t)(EAX));
  /* 1207278a call 0x12068640 */
  push32(0x1207278fu); f_12068640();
  /* 1207278f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072792 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072795 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072797 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1207279a jmp 0x1207271d */
  goto L_1207271d;
L_1207279c:;
  /* 1207279c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207279f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 120727a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120727a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120727a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_120727ab:;
  /* 120727ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120727ae pop esi */
  ESI = (pop32());
  /* 120727af mov esp, ebp */
  ESP = (EBP);
  /* 120727b1 pop ebp */
  EBP = (pop32());
  /* 120727b2 ret  */
  ESPCHK(0x12072690u, _esp0);
  ESP += 4; return;
}

/* FUN_100127c0 @ 0x120727c0 (878 bytes, 273 insns) */
void f_120727c0(void) {
  FTRACE(0x120727c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120727c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120727c1 mov ebp, esp */
  EBP = (ESP);
  /* 120727c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120727c6 push esi */
  push32((uint32_t)(ESI));
  /* 120727c7 mov eax, dword ptr [0x12090ca8] */
  EAX = (r32((uint32_t)(0x12090ca8)));
  /* 120727cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120727cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120727d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120727dd jmp 0x120727e8 */
  goto L_120727e8;
L_120727df:;
  /* 120727df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120727e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120727e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120727e8:;
  /* 120727e8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120727ec jae 0x12072821 */
  if (!C.cf) goto L_12072821;
  /* 120727ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120727f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120727f4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 120727f7 push ecx */
  push32((uint32_t)(ECX));
  /* 120727f8 call 0x12068640 */
  push32(0x120727fdu); f_12068640();
  /* 120727fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072800 mov esi, eax */
  ESI = (EAX);
  /* 12072802 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072805 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072808 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1207280c push ecx */
  push32((uint32_t)(ECX));
  /* 1207280d call 0x12068640 */
  push32(0x12072812u); f_12068640();
  /* 12072812 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072815 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072818 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1207281c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1207281f jmp 0x120727df */
  goto L_120727df;
L_12072821:;
  /* 12072821 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12072828 jmp 0x12072833 */
  goto L_12072833;
L_1207282a:;
  /* 1207282a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1207282d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072830 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12072833:;
  /* 12072833 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072837 jae 0x1207286d */
  if (!C.cf) goto L_1207286d;
  /* 12072839 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1207283c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207283f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12072843 push eax */
  push32((uint32_t)(EAX));
  /* 12072844 call 0x12068640 */
  push32(0x12072849u); f_12068640();
  /* 12072849 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207284c mov esi, eax */
  ESI = (EAX);
  /* 1207284e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072851 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072854 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12072858 push eax */
  push32((uint32_t)(EAX));
  /* 12072859 call 0x12068640 */
  push32(0x1207285eu); f_12068640();
  /* 1207285e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072861 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072864 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12072868 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1207286b jmp 0x1207282a */
  goto L_1207282a;
L_1207286d:;
  /* 1207286d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072870 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12072876 push eax */
  push32((uint32_t)(EAX));
  /* 12072877 call 0x12068640 */
  push32(0x1207287cu); f_12068640();
  /* 1207287c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207287f mov esi, eax */
  ESI = (EAX);
  /* 12072881 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072884 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1207288a push edx */
  push32((uint32_t)(EDX));
  /* 1207288b call 0x12068640 */
  push32(0x12072890u); f_12068640();
  /* 12072890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072893 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072896 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1207289a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1207289d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120728a0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 120728a6 push edx */
  push32((uint32_t)(EDX));
  /* 120728a7 call 0x12068640 */
  push32(0x120728acu); f_12068640();
  /* 120728ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120728af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120728b2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120728b6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120728b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120728bc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 120728c2 push ecx */
  push32((uint32_t)(ECX));
  /* 120728c3 call 0x12068640 */
  push32(0x120728c8u); f_12068640();
  /* 120728c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120728cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120728ce lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 120728d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120728d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120728d8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 120728de push edx */
  push32((uint32_t)(EDX));
  /* 120728df call 0x12068640 */
  push32(0x120728e4u); f_12068640();
  /* 120728e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120728e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120728ea lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120728ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120728f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120728f4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120728f9 push eax */
  push32((uint32_t)(EAX));
  /* 120728fa call 0x120657f0 */
  push32(0x120728ffu); f_120657f0();
  /* 120728ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072902 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12072905 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072909 je 0x12072b26 */
  if (C.zf) goto L_12072b26;
  /* 1207290f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12072912 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12072915 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12072918 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207291e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12072921 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12072926 mov eax, dword ptr [0x12090ca8] */
  EAX = (r32((uint32_t)(0x12090ca8)));
  /* 1207292b push eax */
  push32((uint32_t)(EAX));
  /* 1207292c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207292f push ecx */
  push32((uint32_t)(ECX));
  /* 12072930 call 0x1206c0f0 */
  push32(0x12072935u); f_1206c0f0();
  /* 12072935 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072938 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1207293f jmp 0x1207294a */
  goto L_1207294a;
L_12072941:;
  /* 12072941 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072944 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072947 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1207294a:;
  /* 1207294a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207294e jae 0x120729be */
  if (!C.cf) goto L_120729be;
  /* 12072950 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072953 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12072956 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072959 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1207295c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1207295f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072962 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12072965 push edx */
  push32((uint32_t)(EDX));
  /* 12072966 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072969 push eax */
  push32((uint32_t)(EAX));
  /* 1207296a call 0x120687c0 */
  push32(0x1207296fu); f_120687c0();
  /* 1207296f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072972 push eax */
  push32((uint32_t)(EAX));
  /* 12072973 call 0x12068640 */
  push32(0x12072978u); f_12068640();
  /* 12072978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207297b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207297e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12072982 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12072985 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072988 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1207298b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207298e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12072992 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072995 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072998 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1207299c push edx */
  push32((uint32_t)(EDX));
  /* 1207299d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120729a0 push eax */
  push32((uint32_t)(EAX));
  /* 120729a1 call 0x120687c0 */
  push32(0x120729a6u); f_120687c0();
  /* 120729a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120729a9 push eax */
  push32((uint32_t)(EAX));
  /* 120729aa call 0x12068640 */
  push32(0x120729afu); f_12068640();
  /* 120729af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120729b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120729b5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120729b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120729bc jmp 0x12072941 */
  goto L_12072941;
L_120729be:;
  /* 120729be mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120729c5 jmp 0x120729d0 */
  goto L_120729d0;
L_120729c7:;
  /* 120729c7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120729ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120729cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120729d0:;
  /* 120729d0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120729d4 jae 0x12072a46 */
  if (!C.cf) goto L_12072a46;
  /* 120729d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120729d9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120729dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120729df mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 120729e3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120729e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120729e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 120729ed push eax */
  push32((uint32_t)(EAX));
  /* 120729ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120729f1 push ecx */
  push32((uint32_t)(ECX));
  /* 120729f2 call 0x120687c0 */
  push32(0x120729f7u); f_120687c0();
  /* 120729f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120729fa push eax */
  push32((uint32_t)(EAX));
  /* 120729fb call 0x12068640 */
  push32(0x12072a00u); f_12068640();
  /* 12072a00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072a03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072a06 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12072a0a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12072a0d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072a10 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12072a13 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072a16 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12072a1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072a1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072a20 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12072a24 push eax */
  push32((uint32_t)(EAX));
  /* 12072a25 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072a28 push ecx */
  push32((uint32_t)(ECX));
  /* 12072a29 call 0x120687c0 */
  push32(0x12072a2eu); f_120687c0();
  /* 12072a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072a31 push eax */
  push32((uint32_t)(EAX));
  /* 12072a32 call 0x12068640 */
  push32(0x12072a37u); f_12068640();
  /* 12072a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072a3a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072a3d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12072a41 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12072a44 jmp 0x120729c7 */
  goto L_120729c7;
L_12072a46:;
  /* 12072a46 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12072a49 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072a4c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12072a52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072a55 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12072a5b push ecx */
  push32((uint32_t)(ECX));
  /* 12072a5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072a5f push edx */
  push32((uint32_t)(EDX));
  /* 12072a60 call 0x120687c0 */
  push32(0x12072a65u); f_120687c0();
  /* 12072a65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072a68 push eax */
  push32((uint32_t)(EAX));
  /* 12072a69 call 0x12068640 */
  push32(0x12072a6eu); f_12068640();
  /* 12072a6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072a71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072a74 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12072a78 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12072a7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12072a7e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072a81 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12072a87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072a8a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12072a90 push eax */
  push32((uint32_t)(EAX));
  /* 12072a91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072a94 push ecx */
  push32((uint32_t)(ECX));
  /* 12072a95 call 0x120687c0 */
  push32(0x12072a9au); f_120687c0();
  /* 12072a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072a9d push eax */
  push32((uint32_t)(EAX));
  /* 12072a9e call 0x12068640 */
  push32(0x12072aa3u); f_12068640();
  /* 12072aa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072aa6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072aa9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12072aad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12072ab0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12072ab3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072ab6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12072abc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072abf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12072ac5 push ecx */
  push32((uint32_t)(ECX));
  /* 12072ac6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072ac9 push edx */
  push32((uint32_t)(EDX));
  /* 12072aca call 0x120687c0 */
  push32(0x12072acfu); f_120687c0();
  /* 12072acf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072ad2 push eax */
  push32((uint32_t)(EAX));
  /* 12072ad3 call 0x12068640 */
  push32(0x12072ad8u); f_12068640();
  /* 12072ad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072adb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072ade lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12072ae2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12072ae5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12072ae8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072aeb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12072af1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072af4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12072afa push eax */
  push32((uint32_t)(EAX));
  /* 12072afb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072afe push ecx */
  push32((uint32_t)(ECX));
  /* 12072aff call 0x120687c0 */
  push32(0x12072b04u); f_120687c0();
  /* 12072b04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072b07 push eax */
  push32((uint32_t)(EAX));
  /* 12072b08 call 0x12068640 */
  push32(0x12072b0du); f_12068640();
  /* 12072b0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072b10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072b13 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12072b17 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12072b1a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12072b1d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12072b20 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12072b26:;
  /* 12072b26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12072b29 pop esi */
  ESI = (pop32());
  /* 12072b2a mov esp, ebp */
  ESP = (EBP);
  /* 12072b2c pop ebp */
  EBP = (pop32());
  /* 12072b2d ret  */
  ESPCHK(0x120727c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b30 @ 0x12072b30 (31 bytes, 15 insns) */
void f_12072b30(void) {
  FTRACE(0x12072b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12072b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12072b31 mov ebp, esp */
  EBP = (ESP);
  /* 12072b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12072b35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072b38 push eax */
  push32((uint32_t)(EAX));
  /* 12072b39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072b3c push ecx */
  push32((uint32_t)(ECX));
  /* 12072b3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072b40 push edx */
  push32((uint32_t)(EDX));
  /* 12072b41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072b44 push eax */
  push32((uint32_t)(EAX));
  /* 12072b45 call 0x12072b50 */
  push32(0x12072b4au); f_12072b50();
  /* 12072b4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072b4d pop ebp */
  EBP = (pop32());
  /* 12072b4e ret  */
  ESPCHK(0x12072b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b50 @ 0x12072b50 (393 bytes, 123 insns) */
void f_12072b50(void) {
  FTRACE(0x12072b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12072b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12072b51 mov ebp, esp */
  EBP = (ESP);
  /* 12072b53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072b56 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072b5a jne 0x12072b66 */
  if (!C.zf) goto L_12072b66;
  /* 12072b5c mov eax, dword ptr [0x12090ca8] */
  EAX = (r32((uint32_t)(0x12090ca8)));
  /* 12072b61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12072b64 jmp 0x12072b6c */
  goto L_12072b6c;
L_12072b66:;
  /* 12072b66 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072b69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12072b6c:;
  /* 12072b6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12072b6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12072b72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072b75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12072b78 push 0x12091944 */
  push32((uint32_t)(0x12091944u));
  /* 12072b7d call dword ptr [0x1209439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209439c))), 0x12072b83u);
  /* 12072b83 cmp dword ptr [0x12091934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072b8a je 0x12072baa */
  if (C.zf) goto L_12072baa;
  /* 12072b8c push 0x12091944 */
  push32((uint32_t)(0x12091944u));
  /* 12072b91 call dword ptr [0x1209438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209438c))), 0x12072b97u);
  /* 12072b97 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12072b99 call 0x12069210 */
  push32(0x12072b9eu); f_12069210();
  /* 12072b9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072ba1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12072ba8 jmp 0x12072bb1 */
  goto L_12072bb1;
L_12072baa:;
  /* 12072baa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12072bb1:;
  /* 12072bb1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072bb5 jbe 0x12072ca2 */
  if ((C.cf||C.zf)) goto L_12072ca2;
  /* 12072bbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072bbe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12072bc0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12072bc3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12072bc7 je 0x12072bd1 */
  if (C.zf) goto L_12072bd1;
  /* 12072bc9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12072bcd je 0x12072bd6 */
  if (C.zf) goto L_12072bd6;
  /* 12072bcf jmp 0x12072c30 */
  goto L_12072c30;
L_12072bd1:;
  /* 12072bd1 jmp 0x12072ca2 */
  goto L_12072ca2;
L_12072bd6:;
  /* 12072bd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072bd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072bdc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12072bdf mov dword ptr [0x12091920], 0 */
  w32((uint32_t)(0x12091920), (0x0u));
  /* 12072be9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072bec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12072bef cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072bf2 jne 0x12072c07 */
  if (!C.zf) goto L_12072c07;
  /* 12072bf4 mov dword ptr [0x12091920], 1 */
  w32((uint32_t)(0x12091920), (0x1u));
  /* 12072bfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072c01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072c04 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12072c07:;
  /* 12072c07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12072c0a push ecx */
  push32((uint32_t)(ECX));
  /* 12072c0b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12072c0e push edx */
  push32((uint32_t)(EDX));
  /* 12072c0f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12072c12 push eax */
  push32((uint32_t)(EAX));
  /* 12072c13 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072c16 push ecx */
  push32((uint32_t)(ECX));
  /* 12072c17 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072c1a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12072c1c push eax */
  push32((uint32_t)(EAX));
  /* 12072c1d call 0x12072ce0 */
  push32(0x12072c22u); f_12072ce0();
  /* 12072c22 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072c25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072c28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072c2b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12072c2e jmp 0x12072c9d */
  goto L_12072c9d;
L_12072c30:;
  /* 12072c30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12072c35 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12072c37 mov ecx, dword ptr [0x1208fca8] */
  ECX = (r32((uint32_t)(0x1208fca8)));
  /* 12072c3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12072c3f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12072c43 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12072c49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12072c4b je 0x12072c78 */
  if (C.zf) goto L_12072c78;
  /* 12072c4d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072c51 jbe 0x12072c78 */
  if ((C.cf||C.zf)) goto L_12072c78;
  /* 12072c53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072c56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072c59 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12072c5b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12072c5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072c60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072c63 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12072c66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072c69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072c6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12072c6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072c72 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072c75 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12072c78:;
  /* 12072c78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072c7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072c7e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12072c80 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12072c82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072c85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072c88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12072c8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072c8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072c91 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12072c94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072c97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072c9a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12072c9d:;
  /* 12072c9d jmp 0x12072bb1 */
  goto L_12072bb1;
L_12072ca2:;
  /* 12072ca2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072ca6 je 0x12072cb4 */
  if (C.zf) goto L_12072cb4;
  /* 12072ca8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12072caa call 0x120692b0 */
  push32(0x12072cafu); f_120692b0();
  /* 12072caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072cb2 jmp 0x12072cbf */
  goto L_12072cbf;
L_12072cb4:;
  /* 12072cb4 push 0x12091944 */
  push32((uint32_t)(0x12091944u));
  /* 12072cb9 call dword ptr [0x1209438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209438c))), 0x12072cbfu);
L_12072cbf:;
  /* 12072cbf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072cc3 jbe 0x12072cd3 */
  if ((C.cf||C.zf)) goto L_12072cd3;
  /* 12072cc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12072cc8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12072ccb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072cce sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072cd1 jmp 0x12072cd5 */
  goto L_12072cd5;
L_12072cd3:;
  /* 12072cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12072cd5:;
  /* 12072cd5 mov esp, ebp */
  ESP = (EBP);
  /* 12072cd7 pop ebp */
  EBP = (pop32());
  /* 12072cd8 ret  */
  ESPCHK(0x12072b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ce0 @ 0x12072ce0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12072ce0(void) {
  FTRACE(0x12072ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12072ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12072ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12072ce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072ce6 push esi */
  push32((uint32_t)(ESI));
  /* 12072ce7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12072ceb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12072cee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072cf1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072cf4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12072cf7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072cfb ja 0x12073248 */
  if ((!C.cf&&!C.zf)) goto L_12073248;
  /* 12072d01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12072d04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12072d06 mov dl, byte ptr [eax + 0x120732a9] */
  DL = (r8((uint32_t)(EAX + 0x120732a9)));
  /* 12072d0c jmp dword ptr [edx*4 + 0x1207324d] */
  switch (EDX) {
    case 0: goto L_12073226;
    case 1: goto L_12072d35;
    case 2: goto L_12072d7b;
    case 3: goto L_12072ec8;
    case 4: goto L_12072ef0;
    case 5: goto L_12072f8f;
    case 6: goto L_12072ffb;
    case 7: goto L_12073024;
    case 8: goto L_12073065;
    case 9: goto L_12073147;
    case 10: goto L_120731ae;
    case 11: goto L_120731fb;
    case 12: goto L_12072d13;
    case 13: goto L_12072d58;
    case 14: goto L_12072d9e;
    case 15: goto L_12072e9e;
    case 16: goto L_12072f35;
    case 17: goto L_12072f62;
    case 18: goto L_12072fb7;
    case 19: goto L_1207303b;
    case 20: goto L_120730e9;
    case 21: goto L_12073178;
    case 22: goto L_12073248;
    default: x86_unimpl("switch@0x12072d0c out of table"); return;
  }
L_12072d13:;
  /* 12072d13 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072d16 push ecx */
  push32((uint32_t)(ECX));
  /* 12072d17 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072d1a push edx */
  push32((uint32_t)(EDX));
  /* 12072d1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072d1e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12072d21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072d24 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12072d27 push eax */
  push32((uint32_t)(EAX));
  /* 12072d28 call 0x12073300 */
  push32(0x12072d2du); f_12073300();
  /* 12072d2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072d30 jmp 0x12073248 */
  goto L_12073248;
L_12072d35:;
  /* 12072d35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072d38 push ecx */
  push32((uint32_t)(ECX));
  /* 12072d39 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072d3c push edx */
  push32((uint32_t)(EDX));
  /* 12072d3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072d40 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12072d43 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072d46 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12072d4a push eax */
  push32((uint32_t)(EAX));
  /* 12072d4b call 0x12073300 */
  push32(0x12072d50u); f_12073300();
  /* 12072d50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072d53 jmp 0x12073248 */
  goto L_12073248;
L_12072d58:;
  /* 12072d58 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072d5b push ecx */
  push32((uint32_t)(ECX));
  /* 12072d5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072d5f push edx */
  push32((uint32_t)(EDX));
  /* 12072d60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072d63 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12072d66 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072d69 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12072d6d push eax */
  push32((uint32_t)(EAX));
  /* 12072d6e call 0x12073300 */
  push32(0x12072d73u); f_12073300();
  /* 12072d73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072d76 jmp 0x12073248 */
  goto L_12073248;
L_12072d7b:;
  /* 12072d7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072d7e push ecx */
  push32((uint32_t)(ECX));
  /* 12072d7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072d82 push edx */
  push32((uint32_t)(EDX));
  /* 12072d83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072d86 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12072d89 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072d8c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12072d90 push eax */
  push32((uint32_t)(EAX));
  /* 12072d91 call 0x12073300 */
  push32(0x12072d96u); f_12073300();
  /* 12072d96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072d99 jmp 0x12073248 */
  goto L_12073248;
L_12072d9e:;
  /* 12072d9e cmp dword ptr [0x12091920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072da5 je 0x12072e26 */
  if (C.zf) goto L_12072e26;
  /* 12072da7 mov dword ptr [0x12091920], 0 */
  w32((uint32_t)(0x12091920), (0x0u));
  /* 12072db1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072db4 push ecx */
  push32((uint32_t)(ECX));
  /* 12072db5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072db8 push edx */
  push32((uint32_t)(EDX));
  /* 12072db9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072dbc push eax */
  push32((uint32_t)(EAX));
  /* 12072dbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12072dc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072dc4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12072dca push eax */
  push32((uint32_t)(EAX));
  /* 12072dcb call 0x120734b0 */
  push32(0x12072dd0u); f_120734b0();
  /* 12072dd0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072dd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072dd6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072dd9 jne 0x12072de0 */
  if (!C.zf) goto L_12072de0;
  /* 12072ddb jmp 0x12073248 */
  goto L_12073248;
L_12072de0:;
  /* 12072de0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072de3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12072de5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12072de8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072deb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12072ded add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072df0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072df3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12072df5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072df8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12072dfa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072dfd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072e00 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12072e02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072e05 push ecx */
  push32((uint32_t)(ECX));
  /* 12072e06 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072e09 push edx */
  push32((uint32_t)(EDX));
  /* 12072e0a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072e0d push eax */
  push32((uint32_t)(EAX));
  /* 12072e0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072e11 push ecx */
  push32((uint32_t)(ECX));
  /* 12072e12 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072e15 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12072e1b push eax */
  push32((uint32_t)(EAX));
  /* 12072e1c call 0x120734b0 */
  push32(0x12072e21u); f_120734b0();
  /* 12072e21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072e24 jmp 0x12072e99 */
  goto L_12072e99;
L_12072e26:;
  /* 12072e26 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072e29 push ecx */
  push32((uint32_t)(ECX));
  /* 12072e2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072e2d push edx */
  push32((uint32_t)(EDX));
  /* 12072e2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072e31 push eax */
  push32((uint32_t)(EAX));
  /* 12072e32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072e35 push ecx */
  push32((uint32_t)(ECX));
  /* 12072e36 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072e39 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12072e3f push eax */
  push32((uint32_t)(EAX));
  /* 12072e40 call 0x120734b0 */
  push32(0x12072e45u); f_120734b0();
  /* 12072e45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072e48 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072e4b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072e4e jne 0x12072e55 */
  if (!C.zf) goto L_12072e55;
  /* 12072e50 jmp 0x12073248 */
  goto L_12073248;
L_12072e55:;
  /* 12072e55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072e58 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12072e5a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12072e5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072e60 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12072e62 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072e65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072e68 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12072e6a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072e6d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12072e6f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12072e72 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072e75 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12072e77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072e7a push ecx */
  push32((uint32_t)(ECX));
  /* 12072e7b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072e7e push edx */
  push32((uint32_t)(EDX));
  /* 12072e7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072e82 push eax */
  push32((uint32_t)(EAX));
  /* 12072e83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072e86 push ecx */
  push32((uint32_t)(ECX));
  /* 12072e87 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072e8a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12072e90 push eax */
  push32((uint32_t)(EAX));
  /* 12072e91 call 0x120734b0 */
  push32(0x12072e96u); f_120734b0();
  /* 12072e96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12072e99:;
  /* 12072e99 jmp 0x12073248 */
  goto L_12073248;
L_12072e9e:;
  /* 12072e9e mov ecx, dword ptr [0x12091920] */
  ECX = (r32((uint32_t)(0x12091920)));
  /* 12072ea4 mov dword ptr [0x12091930], ecx */
  w32((uint32_t)(0x12091930), (ECX));
  /* 12072eaa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072ead push edx */
  push32((uint32_t)(EDX));
  /* 12072eae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072eb1 push eax */
  push32((uint32_t)(EAX));
  /* 12072eb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12072eb4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072eb7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12072eba push edx */
  push32((uint32_t)(EDX));
  /* 12072ebb call 0x12073350 */
  push32(0x12072ec0u); f_12073350();
  /* 12072ec0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072ec3 jmp 0x12073248 */
  goto L_12073248;
L_12072ec8:;
  /* 12072ec8 mov eax, dword ptr [0x12091920] */
  EAX = (r32((uint32_t)(0x12091920)));
  /* 12072ecd mov dword ptr [0x12091930], eax */
  w32((uint32_t)(0x12091930), (EAX));
  /* 12072ed2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 12072ed6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072ed9 push edx */
  push32((uint32_t)(EDX));
  /* 12072eda push 2 */
  push32((uint32_t)(0x2u));
  /* 12072edc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072edf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12072ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 12072ee3 call 0x12073350 */
  push32(0x12072ee8u); f_12073350();
  /* 12072ee8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072eeb jmp 0x12073248 */
  goto L_12073248;
L_12072ef0:;
  /* 12072ef0 mov edx, dword ptr [0x12091920] */
  EDX = (r32((uint32_t)(0x12091920)));
  /* 12072ef6 mov dword ptr [0x12091930], edx */
  w32((uint32_t)(0x12091930), (EDX));
  /* 12072efc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072eff mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12072f02 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12072f03 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12072f08 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12072f0a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12072f0d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072f11 jne 0x12072f1a */
  if (!C.zf) goto L_12072f1a;
  /* 12072f13 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12072f1a:;
  /* 12072f1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072f1d push edx */
  push32((uint32_t)(EDX));
  /* 12072f1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072f21 push eax */
  push32((uint32_t)(EAX));
  /* 12072f22 push 2 */
  push32((uint32_t)(0x2u));
  /* 12072f24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12072f27 push ecx */
  push32((uint32_t)(ECX));
  /* 12072f28 call 0x12073350 */
  push32(0x12072f2du); f_12073350();
  /* 12072f2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072f30 jmp 0x12073248 */
  goto L_12073248;
L_12072f35:;
  /* 12072f35 mov edx, dword ptr [0x12091920] */
  EDX = (r32((uint32_t)(0x12091920)));
  /* 12072f3b mov dword ptr [0x12091930], edx */
  w32((uint32_t)(0x12091930), (EDX));
  /* 12072f41 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072f44 push eax */
  push32((uint32_t)(EAX));
  /* 12072f45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072f48 push ecx */
  push32((uint32_t)(ECX));
  /* 12072f49 push 3 */
  push32((uint32_t)(0x3u));
  /* 12072f4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072f4e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12072f51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072f54 push eax */
  push32((uint32_t)(EAX));
  /* 12072f55 call 0x12073350 */
  push32(0x12072f5au); f_12073350();
  /* 12072f5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072f5d jmp 0x12073248 */
  goto L_12073248;
L_12072f62:;
  /* 12072f62 mov ecx, dword ptr [0x12091920] */
  ECX = (r32((uint32_t)(0x12091920)));
  /* 12072f68 mov dword ptr [0x12091930], ecx */
  w32((uint32_t)(0x12091930), (ECX));
  /* 12072f6e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072f71 push edx */
  push32((uint32_t)(EDX));
  /* 12072f72 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072f75 push eax */
  push32((uint32_t)(EAX));
  /* 12072f76 push 2 */
  push32((uint32_t)(0x2u));
  /* 12072f78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072f7b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12072f7e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12072f81 push edx */
  push32((uint32_t)(EDX));
  /* 12072f82 call 0x12073350 */
  push32(0x12072f87u); f_12073350();
  /* 12072f87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072f8a jmp 0x12073248 */
  goto L_12073248;
L_12072f8f:;
  /* 12072f8f mov eax, dword ptr [0x12091920] */
  EAX = (r32((uint32_t)(0x12091920)));
  /* 12072f94 mov dword ptr [0x12091930], eax */
  w32((uint32_t)(0x12091930), (EAX));
  /* 12072f99 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072f9c push ecx */
  push32((uint32_t)(ECX));
  /* 12072f9d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072fa0 push edx */
  push32((uint32_t)(EDX));
  /* 12072fa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12072fa3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072fa6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12072fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 12072faa call 0x12073350 */
  push32(0x12072fafu); f_12073350();
  /* 12072faf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072fb2 jmp 0x12073248 */
  goto L_12073248;
L_12072fb7:;
  /* 12072fb7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12072fba cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12072fbe jg 0x12072fdc */
  if ((!C.zf&&C.sf==C.of)) goto L_12072fdc;
  /* 12072fc0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072fc3 push eax */
  push32((uint32_t)(EAX));
  /* 12072fc4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12072fc8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072fcb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12072fd1 push eax */
  push32((uint32_t)(EAX));
  /* 12072fd2 call 0x12073300 */
  push32(0x12072fd7u); f_12073300();
  /* 12072fd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12072fda jmp 0x12072ff6 */
  goto L_12072ff6;
L_12072fdc:;
  /* 12072fdc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12072fdf push ecx */
  push32((uint32_t)(ECX));
  /* 12072fe0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12072fe3 push edx */
  push32((uint32_t)(EDX));
  /* 12072fe4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12072fe7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12072fed push ecx */
  push32((uint32_t)(ECX));
  /* 12072fee call 0x12073300 */
  push32(0x12072ff3u); f_12073300();
  /* 12072ff3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12072ff6:;
  /* 12072ff6 jmp 0x12073248 */
  goto L_12073248;
L_12072ffb:;
  /* 12072ffb mov edx, dword ptr [0x12091920] */
  EDX = (r32((uint32_t)(0x12091920)));
  /* 12073001 mov dword ptr [0x12091930], edx */
  w32((uint32_t)(0x12091930), (EDX));
  /* 12073007 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207300a push eax */
  push32((uint32_t)(EAX));
  /* 1207300b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207300e push ecx */
  push32((uint32_t)(ECX));
  /* 1207300f push 2 */
  push32((uint32_t)(0x2u));
  /* 12073011 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073014 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12073016 push eax */
  push32((uint32_t)(EAX));
  /* 12073017 call 0x12073350 */
  push32(0x1207301cu); f_12073350();
  /* 1207301c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207301f jmp 0x12073248 */
  goto L_12073248;
L_12073024:;
  /* 12073024 mov ecx, dword ptr [0x12091920] */
  ECX = (r32((uint32_t)(0x12091920)));
  /* 1207302a mov dword ptr [0x12091930], ecx */
  w32((uint32_t)(0x12091930), (ECX));
  /* 12073030 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073033 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12073036 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12073039 jmp 0x1207308d */
  goto L_1207308d;
L_1207303b:;
  /* 1207303b mov ecx, dword ptr [0x12091920] */
  ECX = (r32((uint32_t)(0x12091920)));
  /* 12073041 mov dword ptr [0x12091930], ecx */
  w32((uint32_t)(0x12091930), (ECX));
  /* 12073047 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207304a push edx */
  push32((uint32_t)(EDX));
  /* 1207304b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207304e push eax */
  push32((uint32_t)(EAX));
  /* 1207304f push 1 */
  push32((uint32_t)(0x1u));
  /* 12073051 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073054 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12073057 push edx */
  push32((uint32_t)(EDX));
  /* 12073058 call 0x12073350 */
  push32(0x1207305du); f_12073350();
  /* 1207305d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073060 jmp 0x12073248 */
  goto L_12073248;
L_12073065:;
  /* 12073065 mov eax, dword ptr [0x12091920] */
  EAX = (r32((uint32_t)(0x12091920)));
  /* 1207306a mov dword ptr [0x12091930], eax */
  w32((uint32_t)(0x12091930), (EAX));
  /* 1207306f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073072 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073076 jne 0x12073081 */
  if (!C.zf) goto L_12073081;
  /* 12073078 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1207307f jmp 0x1207308d */
  goto L_1207308d;
L_12073081:;
  /* 12073081 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073084 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12073087 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1207308a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1207308d:;
  /* 1207308d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073090 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12073093 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073096 jge 0x120730a1 */
  if ((C.sf==C.of)) goto L_120730a1;
  /* 12073098 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1207309f jmp 0x120730ce */
  goto L_120730ce;
L_120730a1:;
  /* 120730a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120730a4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120730a7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120730a8 mov ecx, 7 */
  ECX = (0x7u);
  /* 120730ad idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120730af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120730b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120730b5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120730b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120730b9 mov ecx, 7 */
  ECX = (0x7u);
  /* 120730be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120730c0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120730c3 jl 0x120730ce */
  if ((C.sf!=C.of)) goto L_120730ce;
  /* 120730c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120730c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120730cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120730ce:;
  /* 120730ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120730d1 push eax */
  push32((uint32_t)(EAX));
  /* 120730d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120730d5 push ecx */
  push32((uint32_t)(ECX));
  /* 120730d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120730d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120730db push edx */
  push32((uint32_t)(EDX));
  /* 120730dc call 0x12073350 */
  push32(0x120730e1u); f_12073350();
  /* 120730e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120730e4 jmp 0x12073248 */
  goto L_12073248;
L_120730e9:;
  /* 120730e9 cmp dword ptr [0x12091920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120730f0 je 0x12073120 */
  if (C.zf) goto L_12073120;
  /* 120730f2 mov dword ptr [0x12091920], 0 */
  w32((uint32_t)(0x12091920), (0x0u));
  /* 120730fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120730ff push eax */
  push32((uint32_t)(EAX));
  /* 12073100 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073103 push ecx */
  push32((uint32_t)(ECX));
  /* 12073104 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073107 push edx */
  push32((uint32_t)(EDX));
  /* 12073108 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1207310b push eax */
  push32((uint32_t)(EAX));
  /* 1207310c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1207310f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12073115 push edx */
  push32((uint32_t)(EDX));
  /* 12073116 call 0x120734b0 */
  push32(0x1207311bu); f_120734b0();
  /* 1207311b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207311e jmp 0x12073142 */
  goto L_12073142;
L_12073120:;
  /* 12073120 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12073123 push eax */
  push32((uint32_t)(EAX));
  /* 12073124 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073127 push ecx */
  push32((uint32_t)(ECX));
  /* 12073128 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207312b push edx */
  push32((uint32_t)(EDX));
  /* 1207312c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1207312f push eax */
  push32((uint32_t)(EAX));
  /* 12073130 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12073133 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12073139 push edx */
  push32((uint32_t)(EDX));
  /* 1207313a call 0x120734b0 */
  push32(0x1207313fu); f_120734b0();
  /* 1207313f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12073142:;
  /* 12073142 jmp 0x12073248 */
  goto L_12073248;
L_12073147:;
  /* 12073147 mov dword ptr [0x12091920], 0 */
  w32((uint32_t)(0x12091920), (0x0u));
  /* 12073151 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12073154 push eax */
  push32((uint32_t)(EAX));
  /* 12073155 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073158 push ecx */
  push32((uint32_t)(ECX));
  /* 12073159 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207315c push edx */
  push32((uint32_t)(EDX));
  /* 1207315d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073160 push eax */
  push32((uint32_t)(EAX));
  /* 12073161 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12073164 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1207316a push edx */
  push32((uint32_t)(EDX));
  /* 1207316b call 0x120734b0 */
  push32(0x12073170u); f_120734b0();
  /* 12073170 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073173 jmp 0x12073248 */
  goto L_12073248;
L_12073178:;
  /* 12073178 mov eax, dword ptr [0x12091920] */
  EAX = (r32((uint32_t)(0x12091920)));
  /* 1207317d mov dword ptr [0x12091930], eax */
  w32((uint32_t)(0x12091930), (EAX));
  /* 12073182 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073185 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12073188 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12073189 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1207318e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12073190 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12073193 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073196 push edx */
  push32((uint32_t)(EDX));
  /* 12073197 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207319a push eax */
  push32((uint32_t)(EAX));
  /* 1207319b push 2 */
  push32((uint32_t)(0x2u));
  /* 1207319d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120731a0 push ecx */
  push32((uint32_t)(ECX));
  /* 120731a1 call 0x12073350 */
  push32(0x120731a6u); f_12073350();
  /* 120731a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120731a9 jmp 0x12073248 */
  goto L_12073248;
L_120731ae:;
  /* 120731ae mov edx, dword ptr [0x12091920] */
  EDX = (r32((uint32_t)(0x12091920)));
  /* 120731b4 mov dword ptr [0x12091930], edx */
  w32((uint32_t)(0x12091930), (EDX));
  /* 120731ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120731bd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 120731c0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120731c1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 120731c6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120731c8 mov ecx, eax */
  ECX = (EAX);
  /* 120731ca add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120731cd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120731d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120731d3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120731d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120731d7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 120731dc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120731de add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120731e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120731e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120731e6 push eax */
  push32((uint32_t)(EAX));
  /* 120731e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120731ea push ecx */
  push32((uint32_t)(ECX));
  /* 120731eb push 4 */
  push32((uint32_t)(0x4u));
  /* 120731ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120731f0 push edx */
  push32((uint32_t)(EDX));
  /* 120731f1 call 0x12073350 */
  push32(0x120731f6u); f_12073350();
  /* 120731f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120731f9 jmp 0x12073248 */
  goto L_12073248;
L_120731fb:;
  /* 120731fb call 0x12074310 */
  push32(0x12073200u); f_12074310();
  /* 12073200 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073203 push eax */
  push32((uint32_t)(EAX));
  /* 12073204 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073207 push ecx */
  push32((uint32_t)(ECX));
  /* 12073208 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1207320b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207320d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073211 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12073214 mov ecx, dword ptr [eax*4 + 0x12090e2c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12090e2c)));
  /* 1207321b push ecx */
  push32((uint32_t)(ECX));
  /* 1207321c call 0x12073300 */
  push32(0x12073221u); f_12073300();
  /* 12073221 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073224 jmp 0x12073248 */
  goto L_12073248;
L_12073226:;
  /* 12073226 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073229 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1207322b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1207322e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073231 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12073233 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073236 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073239 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1207323b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207323e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12073240 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073243 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073246 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12073248:;
  /* 12073248 pop esi */
  ESI = (pop32());
  /* 12073249 mov esp, ebp */
  ESP = (EBP);
  /* 1207324b pop ebp */
  EBP = (pop32());
  /* 1207324c ret  */
  ESPCHK(0x12072ce0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12073300 (72 bytes, 30 insns) */
void f_12073300(void) {
  FTRACE(0x12073300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12073300 push ebp */
  push32((uint32_t)(EBP));
  /* 12073301 mov ebp, esp */
  EBP = (ESP);
L_12073303:;
  /* 12073303 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073306 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073309 je 0x12073346 */
  if (C.zf) goto L_12073346;
  /* 1207330b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207330e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12073311 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12073313 je 0x12073346 */
  if (C.zf) goto L_12073346;
  /* 12073315 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073318 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1207331a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207331d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1207331f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12073321 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073324 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12073326 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073329 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1207332c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1207332e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073331 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073334 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12073337 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207333a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1207333c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1207333f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073342 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12073344 jmp 0x12073303 */
  goto L_12073303;
L_12073346:;
  /* 12073346 pop ebp */
  EBP = (pop32());
  /* 12073347 ret  */
  ESPCHK(0x12073300u, _esp0);
  ESP += 4; return;
}

/* FUN_10013350 @ 0x12073350 (173 bytes, 64 insns) */
void f_12073350(void) {
  FTRACE(0x12073350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12073350 push ebp */
  push32((uint32_t)(EBP));
  /* 12073351 mov ebp, esp */
  EBP = (ESP);
  /* 12073353 push ecx */
  push32((uint32_t)(ECX));
  /* 12073354 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1207335b cmp dword ptr [0x12091930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073362 je 0x1207337a */
  if (C.zf) goto L_1207337a;
  /* 12073364 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073367 push eax */
  push32((uint32_t)(EAX));
  /* 12073368 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207336b push ecx */
  push32((uint32_t)(ECX));
  /* 1207336c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207336f push edx */
  push32((uint32_t)(EDX));
  /* 12073370 call 0x12073400 */
  push32(0x12073375u); f_12073400();
  /* 12073375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073378 jmp 0x120733f9 */
  goto L_120733f9;
L_1207337a:;
  /* 1207337a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207337d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073380 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073382 jae 0x120733f0 */
  if (!C.cf) goto L_120733f0;
  /* 12073384 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073387 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1207338a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1207338d jmp 0x12073398 */
  goto L_12073398;
L_1207338f:;
  /* 1207338f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073392 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073395 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12073398:;
  /* 12073398 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1207339b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207339e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120733a0 je 0x120733d4 */
  if (C.zf) goto L_120733d4;
  /* 120733a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120733a5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120733a6 mov ecx, 0xa */
  ECX = (0xau);
  /* 120733ab idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120733ad add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120733b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120733b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120733b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120733b8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 120733bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120733be cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120733bf mov ecx, 0xa */
  ECX = (0xau);
  /* 120733c4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120733c6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120733c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120733cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120733cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120733d2 jmp 0x1207338f */
  goto L_1207338f;
L_120733d4:;
  /* 120733d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120733d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120733d9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120733dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120733df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120733e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120733e4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120733e6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120733e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120733ec mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120733ee jmp 0x120733f9 */
  goto L_120733f9;
L_120733f0:;
  /* 120733f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120733f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_120733f9:;
  /* 120733f9 mov esp, ebp */
  ESP = (EBP);
  /* 120733fb pop ebp */
  EBP = (pop32());
  /* 120733fc ret  */
  ESPCHK(0x12073350u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12073400 (172 bytes, 65 insns) */
void f_12073400(void) {
  FTRACE(0x12073400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12073400 push ebp */
  push32((uint32_t)(EBP));
  /* 12073401 mov ebp, esp */
  EBP = (ESP);
  /* 12073403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073406 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073409 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1207340b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1207340e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073411 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073414 jbe 0x1207345b */
  if ((C.cf||C.zf)) goto L_1207345b;
L_12073416:;
  /* 12073416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073419 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1207341a mov ecx, 0xa */
  ECX = (0xau);
  /* 1207341f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12073421 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12073427 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12073429 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207342c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207342f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12073432 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073435 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12073437 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1207343a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207343d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1207343f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073442 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12073443 mov ecx, 0xa */
  ECX = (0xau);
  /* 12073448 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1207344a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1207344d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073451 jle 0x1207345b */
  if ((C.zf||C.sf!=C.of)) goto L_1207345b;
  /* 12073453 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073456 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073459 ja 0x12073416 */
  if ((!C.cf&&!C.zf)) goto L_12073416;
L_1207345b:;
  /* 1207345b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1207345e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12073460 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12073463 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12073469 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1207346b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207346e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073471 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12073474:;
  /* 12073474 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12073477 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12073479 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1207347c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207347f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12073482 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12073484 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12073486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12073489 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1207348c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1207348f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12073492 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12073495 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12073497 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1207349a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207349d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120734a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120734a3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120734a6 jb 0x12073474 */
  if (C.cf) goto L_12073474;
  /* 120734a8 mov esp, ebp */
  ESP = (EBP);
  /* 120734aa pop ebp */
  EBP = (pop32());
  /* 120734ab ret  */
  ESPCHK(0x12073400u, _esp0);
  ESP += 4; return;
}

/* FUN_100134b0 @ 0x120734b0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_120734b0(void) {
  FTRACE(0x120734b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120734b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120734b1 mov ebp, esp */
  EBP = (ESP);
  /* 120734b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_120734b6:;
  /* 120734b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120734b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120734bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120734be je 0x1207392c */
  if (C.zf) goto L_1207392c;
  /* 120734c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120734c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120734ca je 0x1207392c */
  if (C.zf) goto L_1207392c;
  /* 120734d0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120734d4 mov dword ptr [0x12091930], 0 */
  w32((uint32_t)(0x12091930), (0x0u));
  /* 120734de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120734e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120734e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120734eb jmp 0x120734f6 */
  goto L_120734f6;
L_120734ed:;
  /* 120734ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120734f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120734f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_120734f6:;
  /* 120734f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120734f9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120734fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120734ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12073502 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12073505 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073508 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1207350b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207350d jne 0x12073511 */
  if (!C.zf) goto L_12073511;
  /* 1207350f jmp 0x120734ed */
  goto L_120734ed;
L_12073511:;
  /* 12073511 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12073514 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073517 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1207351a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207351d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12073520 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12073523 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12073526 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073529 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1207352c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073530 ja 0x12073880 */
  if ((!C.cf&&!C.zf)) goto L_12073880;
  /* 12073536 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12073539 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207353b mov al, byte ptr [ecx + 0x1207395c] */
  AL = (r8((uint32_t)(ECX + 0x1207395c)));
  /* 12073541 jmp dword ptr [eax*4 + 0x12073930] */
  switch (EAX) {
    case 0: goto L_1207379f;
    case 1: goto L_12073683;
    case 2: goto L_1207360e;
    case 3: goto L_12073548;
    case 4: goto L_12073586;
    case 5: goto L_120735e7;
    case 6: goto L_12073635;
    case 7: goto L_1207365c;
    case 8: goto L_120736ca;
    case 9: goto L_120735c4;
    case 10: goto L_12073880;
    default: x86_unimpl("switch@0x12073541 out of table"); return;
  }
L_12073548:;
  /* 12073548 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207354b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1207354e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12073551 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073554 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12073557 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207355b ja 0x12073581 */
  if ((!C.cf&&!C.zf)) goto L_12073581;
  /* 1207355d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12073560 jmp dword ptr [ecx*4 + 0x120739af] */
  switch (ECX) {
    case 0: goto L_12073567;
    case 1: goto L_12073571;
    case 2: goto L_12073577;
    case 3: goto L_1207357d;
    case 4: goto L_120735a5;
    case 5: goto L_120735af;
    case 6: goto L_120735b5;
    case 7: goto L_120735bb;
    default: x86_unimpl("switch@0x12073560 out of table"); return;
  }
L_12073567:;
  /* 12073567 mov dword ptr [0x12091930], 1 */
  w32((uint32_t)(0x12091930), (0x1u));
L_12073571:;
  /* 12073571 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12073575 jmp 0x12073581 */
  goto L_12073581;
L_12073577:;
  /* 12073577 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1207357b jmp 0x12073581 */
  goto L_12073581;
L_1207357d:;
  /* 1207357d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12073581:;
  /* 12073581 jmp 0x12073880 */
  goto L_12073880;
L_12073586:;
  /* 12073586 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12073589 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1207358c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1207358f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073592 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12073595 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073599 ja 0x120735bf */
  if ((!C.cf&&!C.zf)) goto L_120735bf;
  /* 1207359b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1207359e jmp dword ptr [ecx*4 + 0x120739bf] */
  switch (ECX) {
    case 0: goto L_120735a5;
    case 1: goto L_120735af;
    case 2: goto L_120735b5;
    case 3: goto L_120735bb;
    default: x86_unimpl("switch@0x1207359e out of table"); return;
  }
L_120735a5:;
  /* 120735a5 mov dword ptr [0x12091930], 1 */
  w32((uint32_t)(0x12091930), (0x1u));
L_120735af:;
  /* 120735af mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 120735b3 jmp 0x120735bf */
  goto L_120735bf;
L_120735b5:;
  /* 120735b5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 120735b9 jmp 0x120735bf */
  goto L_120735bf;
L_120735bb:;
  /* 120735bb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_120735bf:;
  /* 120735bf jmp 0x12073880 */
  goto L_12073880;
L_120735c4:;
  /* 120735c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120735c7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 120735ca cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120735ce je 0x120735d8 */
  if (C.zf) goto L_120735d8;
  /* 120735d0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120735d4 je 0x120735de */
  if (C.zf) goto L_120735de;
  /* 120735d6 jmp 0x120735e2 */
  goto L_120735e2;
L_120735d8:;
  /* 120735d8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 120735dc jmp 0x120735e2 */
  goto L_120735e2;
L_120735de:;
  /* 120735de mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_120735e2:;
  /* 120735e2 jmp 0x12073880 */
  goto L_12073880;
L_120735e7:;
  /* 120735e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120735ea mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120735ed cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120735f1 je 0x120735fb */
  if (C.zf) goto L_120735fb;
  /* 120735f3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120735f7 je 0x12073605 */
  if (C.zf) goto L_12073605;
  /* 120735f9 jmp 0x12073609 */
  goto L_12073609;
L_120735fb:;
  /* 120735fb mov dword ptr [0x12091930], 1 */
  w32((uint32_t)(0x12091930), (0x1u));
L_12073605:;
  /* 12073605 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12073609:;
  /* 12073609 jmp 0x12073880 */
  goto L_12073880;
L_1207360e:;
  /* 1207360e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12073611 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12073614 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073618 je 0x12073622 */
  if (C.zf) goto L_12073622;
  /* 1207361a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207361e je 0x1207362c */
  if (C.zf) goto L_1207362c;
  /* 12073620 jmp 0x12073630 */
  goto L_12073630;
L_12073622:;
  /* 12073622 mov dword ptr [0x12091930], 1 */
  w32((uint32_t)(0x12091930), (0x1u));
L_1207362c:;
  /* 1207362c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12073630:;
  /* 12073630 jmp 0x12073880 */
  goto L_12073880;
L_12073635:;
  /* 12073635 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12073638 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1207363b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207363f je 0x12073649 */
  if (C.zf) goto L_12073649;
  /* 12073641 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073645 je 0x12073653 */
  if (C.zf) goto L_12073653;
  /* 12073647 jmp 0x12073657 */
  goto L_12073657;
L_12073649:;
  /* 12073649 mov dword ptr [0x12091930], 1 */
  w32((uint32_t)(0x12091930), (0x1u));
L_12073653:;
  /* 12073653 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12073657:;
  /* 12073657 jmp 0x12073880 */
  goto L_12073880;
L_1207365c:;
  /* 1207365c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207365f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12073662 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073666 je 0x12073670 */
  if (C.zf) goto L_12073670;
  /* 12073668 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207366c je 0x1207367a */
  if (C.zf) goto L_1207367a;
  /* 1207366e jmp 0x1207367e */
  goto L_1207367e;
L_12073670:;
  /* 12073670 mov dword ptr [0x12091930], 1 */
  w32((uint32_t)(0x12091930), (0x1u));
L_1207367a:;
  /* 1207367a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1207367e:;
  /* 1207367e jmp 0x12073880 */
  goto L_12073880;
L_12073683:;
  /* 12073683 push 0x1208d98c */
  push32((uint32_t)(0x1208d98cu));
  /* 12073688 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207368b push ecx */
  push32((uint32_t)(ECX));
  /* 1207368c call 0x12073ee0 */
  push32(0x12073691u); f_12073ee0();
  /* 12073691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073694 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12073696 jne 0x120736a3 */
  if (!C.zf) goto L_120736a3;
  /* 12073698 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207369b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207369e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120736a1 jmp 0x120736c1 */
  goto L_120736c1;
L_120736a3:;
  /* 120736a3 push 0x1208d988 */
  push32((uint32_t)(0x1208d988u));
  /* 120736a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120736ab push eax */
  push32((uint32_t)(EAX));
  /* 120736ac call 0x12073ee0 */
  push32(0x120736b1u); f_12073ee0();
  /* 120736b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120736b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120736b6 jne 0x120736c1 */
  if (!C.zf) goto L_120736c1;
  /* 120736b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120736bb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120736be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120736c1:;
  /* 120736c1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 120736c5 jmp 0x12073880 */
  goto L_12073880;
L_120736ca:;
  /* 120736ca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120736cd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120736d1 jg 0x120736e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_120736e1;
  /* 120736d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120736d6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 120736dc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120736df jmp 0x120736ed */
  goto L_120736ed;
L_120736e1:;
  /* 120736e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120736e4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 120736ea mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120736ed:;
  /* 120736ed cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120736f1 jle 0x12073794 */
  if ((C.zf||C.sf!=C.of)) goto L_12073794;
  /* 120736f7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120736fa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120736fd jbe 0x12073794 */
  if ((C.cf||C.zf)) goto L_12073794;
  /* 12073703 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12073706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12073708 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1207370a mov ecx, dword ptr [0x1208fca8] */
  ECX = (r32((uint32_t)(0x1208fca8)));
  /* 12073710 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12073712 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12073716 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1207371c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1207371e je 0x12073757 */
  if (C.zf) goto L_12073757;
  /* 12073720 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073723 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073726 jbe 0x12073757 */
  if ((C.cf||C.zf)) goto L_12073757;
  /* 12073728 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207372b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1207372d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12073730 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12073732 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12073734 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073737 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12073739 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207373c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207373f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12073741 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12073744 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073747 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1207374a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207374d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1207374f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073752 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073755 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12073757:;
  /* 12073757 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207375a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1207375c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1207375f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12073761 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12073763 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073766 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12073768 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207376b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207376e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12073770 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12073773 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073776 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12073779 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207377c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1207377e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073781 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073784 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12073786 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12073789 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1207378c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1207378f jmp 0x120736ed */
  goto L_120736ed;
L_12073794:;
  /* 12073794 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12073797 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1207379a jmp 0x120734b6 */
  goto L_120734b6;
L_1207379f:;
  /* 1207379f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120737a2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120737a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120737a7 je 0x12073872 */
  if (C.zf) goto L_12073872;
  /* 120737ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120737b0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120737b3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_120737b6:;
  /* 120737b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120737b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120737bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120737be je 0x12073870 */
  if (C.zf) goto L_12073870;
  /* 120737c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120737c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120737ca je 0x12073870 */
  if (C.zf) goto L_12073870;
  /* 120737d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120737d3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120737d6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120737d9 jne 0x120737e9 */
  if (!C.zf) goto L_120737e9;
  /* 120737db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120737de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120737e1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120737e4 jmp 0x12073870 */
  goto L_12073870;
L_120737e9:;
  /* 120737e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120737ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120737ee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120737f0 mov edx, dword ptr [0x1208fca8] */
  EDX = (r32((uint32_t)(0x1208fca8)));
  /* 120737f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120737f8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 120737fc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12073801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12073803 je 0x1207383c */
  if (C.zf) goto L_1207383c;
  /* 12073805 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073808 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207380b jbe 0x1207383c */
  if ((C.cf||C.zf)) goto L_1207383c;
  /* 1207380d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073810 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12073812 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073815 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12073817 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12073819 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207381c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1207381e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073821 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073824 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12073826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073829 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207382c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1207382f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073832 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12073834 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073837 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207383a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1207383c:;
  /* 1207383c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207383f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12073841 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073844 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12073846 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12073848 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207384b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1207384d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073850 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073853 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12073855 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073858 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207385b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1207385e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073861 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12073863 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073866 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073869 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1207386b jmp 0x120737b6 */
  goto L_120737b6;
L_12073870:;
  /* 12073870 jmp 0x1207387b */
  goto L_1207387b;
L_12073872:;
  /* 12073872 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073875 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073878 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1207387b:;
  /* 1207387b jmp 0x120734b6 */
  goto L_120734b6;
L_12073880:;
  /* 12073880 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12073884 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12073886 je 0x120738ac */
  if (C.zf) goto L_120738ac;
  /* 12073888 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1207388b push edx */
  push32((uint32_t)(EDX));
  /* 1207388c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207388f push eax */
  push32((uint32_t)(EAX));
  /* 12073890 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073893 push ecx */
  push32((uint32_t)(ECX));
  /* 12073894 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073897 push edx */
  push32((uint32_t)(EDX));
  /* 12073898 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1207389b push eax */
  push32((uint32_t)(EAX));
  /* 1207389c call 0x12072ce0 */
  push32(0x120738a1u); f_12072ce0();
  /* 120738a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120738a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120738a7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120738aa jmp 0x12073927 */
  goto L_12073927;
L_120738ac:;
  /* 120738ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120738af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120738b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120738b3 mov ecx, dword ptr [0x1208fca8] */
  ECX = (r32((uint32_t)(0x1208fca8)));
  /* 120738b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120738bb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120738bf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 120738c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120738c7 je 0x120738f8 */
  if (C.zf) goto L_120738f8;
  /* 120738c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120738cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120738ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120738d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120738d3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120738d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120738d8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120738da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120738dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120738e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120738e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120738e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120738e8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120738eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120738ee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120738f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120738f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120738f6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120738f8:;
  /* 120738f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120738fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120738fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073900 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12073902 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12073904 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073907 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12073909 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207390c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207390f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12073911 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073914 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073917 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1207391a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207391d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1207391f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073922 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073925 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12073927:;
  /* 12073927 jmp 0x120734b6 */
  goto L_120734b6;
L_1207392c:;
  /* 1207392c mov esp, ebp */
  ESP = (EBP);
  /* 1207392e pop ebp */
  EBP = (pop32());
  /* 1207392f ret  */
  ESPCHK(0x120734b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139d0 @ 0x120739d0 (650 bytes, 178 insns) */
void f_120739d0(void) {
  FTRACE(0x120739d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120739d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120739d1 mov ebp, esp */
  EBP = (ESP);
  /* 120739d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120739d9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120739dd jne 0x12073b39 */
  if (!C.zf) goto L_12073b39;
  /* 120739e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120739e6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 120739ec lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 120739f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120739f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120739fc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12073a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12073a08 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12073a0e push edx */
  push32((uint32_t)(EDX));
  /* 12073a0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12073a12 push eax */
  push32((uint32_t)(EAX));
  /* 12073a13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073a16 push ecx */
  push32((uint32_t)(ECX));
  /* 12073a17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073a1a push edx */
  push32((uint32_t)(EDX));
  /* 12073a1b call 0x12074df0 */
  push32(0x12073a20u); f_12074df0();
  /* 12073a20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073a23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12073a26 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073a2a jne 0x12073abf */
  if (!C.zf) goto L_12073abf;
  /* 12073a30 call dword ptr [0x120943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943ac))), 0x12073a36u);
  /* 12073a36 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073a39 je 0x12073a40 */
  if (C.zf) goto L_12073a40;
  /* 12073a3b jmp 0x12073b1d */
  goto L_12073b1d;
L_12073a40:;
  /* 12073a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12073a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12073a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12073a46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073a49 push eax */
  push32((uint32_t)(EAX));
  /* 12073a4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073a4d push ecx */
  push32((uint32_t)(ECX));
  /* 12073a4e call 0x12074df0 */
  push32(0x12073a53u); f_12074df0();
  /* 12073a53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073a56 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12073a5c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073a63 jne 0x12073a6a */
  if (!C.zf) goto L_12073a6a;
  /* 12073a65 jmp 0x12073b1d */
  goto L_12073b1d;
L_12073a6a:;
  /* 12073a6a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12073a6c push 0x1208d994 */
  push32((uint32_t)(0x1208d994u));
  /* 12073a71 push 2 */
  push32((uint32_t)(0x2u));
  /* 12073a73 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12073a79 push edx */
  push32((uint32_t)(EDX));
  /* 12073a7a call 0x12065810 */
  push32(0x12073a7fu); f_12065810();
  /* 12073a7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073a82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12073a85 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073a89 jne 0x12073a90 */
  if (!C.zf) goto L_12073a90;
  /* 12073a8b jmp 0x12073b1d */
  goto L_12073b1d;
L_12073a90:;
  /* 12073a90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12073a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12073a99 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12073a9f push eax */
  push32((uint32_t)(EAX));
  /* 12073aa0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12073aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12073aa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073aa7 push edx */
  push32((uint32_t)(EDX));
  /* 12073aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073aab push eax */
  push32((uint32_t)(EAX));
  /* 12073aac call 0x12074df0 */
  push32(0x12073ab1u); f_12074df0();
  /* 12073ab1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073ab4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12073ab7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073abb jne 0x12073abf */
  if (!C.zf) goto L_12073abf;
  /* 12073abd jmp 0x12073b1d */
  goto L_12073b1d;
L_12073abf:;
  /* 12073abf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12073ac1 push 0x1208d994 */
  push32((uint32_t)(0x1208d994u));
  /* 12073ac6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12073ac8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12073acb push ecx */
  push32((uint32_t)(ECX));
  /* 12073acc call 0x12065810 */
  push32(0x12073ad1u); f_12065810();
  /* 12073ad1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073ad4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12073ada mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12073adc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12073ae2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073ae5 jne 0x12073ae9 */
  if (!C.zf) goto L_12073ae9;
  /* 12073ae7 jmp 0x12073b1d */
  goto L_12073b1d;
L_12073ae9:;
  /* 12073ae9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12073aec push ecx */
  push32((uint32_t)(ECX));
  /* 12073aed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12073af0 push edx */
  push32((uint32_t)(EDX));
  /* 12073af1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12073af7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12073af9 push ecx */
  push32((uint32_t)(ECX));
  /* 12073afa call 0x12069030 */
  push32(0x12073affu); f_12069030();
  /* 12073aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073b02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073b06 je 0x12073b16 */
  if (C.zf) goto L_12073b16;
  /* 12073b08 push 2 */
  push32((uint32_t)(0x2u));
  /* 12073b0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12073b0d push edx */
  push32((uint32_t)(EDX));
  /* 12073b0e call 0x120662a0 */
  push32(0x12073b13u); f_120662a0();
  /* 12073b13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12073b16:;
  /* 12073b16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12073b18 jmp 0x12073c56 */
  goto L_12073c56;
L_12073b1d:;
  /* 12073b1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073b21 je 0x12073b31 */
  if (C.zf) goto L_12073b31;
  /* 12073b23 push 2 */
  push32((uint32_t)(0x2u));
  /* 12073b25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12073b28 push eax */
  push32((uint32_t)(EAX));
  /* 12073b29 call 0x120662a0 */
  push32(0x12073b2eu); f_120662a0();
  /* 12073b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12073b31:;
  /* 12073b31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12073b34 jmp 0x12073c56 */
  goto L_12073c56;
L_12073b39:;
  /* 12073b39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073b3d jne 0x12073c53 */
  if (!C.zf) goto L_12073c53;
  /* 12073b43 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12073b4d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073b50 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12073b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12073b58 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12073b5e push edx */
  push32((uint32_t)(EDX));
  /* 12073b5f push 0x12091848 */
  push32((uint32_t)(0x12091848u));
  /* 12073b64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073b67 push eax */
  push32((uint32_t)(EAX));
  /* 12073b68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073b6b push ecx */
  push32((uint32_t)(ECX));
  /* 12073b6c call 0x12074c50 */
  push32(0x12073b71u); f_12074c50();
  /* 12073b71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12073b76 jne 0x12073b80 */
  if (!C.zf) goto L_12073b80;
  /* 12073b78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12073b7b jmp 0x12073c56 */
  goto L_12073c56;
L_12073b80:;
  /* 12073b80 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12073b86 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12073b89 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12073b93 jmp 0x12073ba4 */
  goto L_12073ba4;
L_12073b95:;
  /* 12073b95 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12073b9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073b9e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12073ba4:;
  /* 12073ba4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073bab jge 0x12073c4f */
  if ((C.sf==C.of)) goto L_12073c4f;
  /* 12073bb1 cmp dword ptr [0x1208feb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1208feb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073bb8 jle 0x12073beb */
  if ((C.zf||C.sf!=C.of)) goto L_12073beb;
  /* 12073bba push 4 */
  push32((uint32_t)(0x4u));
  /* 12073bbc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12073bc2 mov dl, byte ptr [ecx*2 + 0x12091848] */
  DL = (r8((uint32_t)(ECX*2 + 0x12091848)));
  /* 12073bc9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12073bcf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12073bd5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12073bda push eax */
  push32((uint32_t)(EAX));
  /* 12073bdb call 0x1206b820 */
  push32(0x12073be0u); f_1206b820();
  /* 12073be0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073be3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12073be9 jmp 0x12073c1e */
  goto L_12073c1e;
L_12073beb:;
  /* 12073beb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12073bf1 mov dl, byte ptr [ecx*2 + 0x12091848] */
  DL = (r8((uint32_t)(ECX*2 + 0x12091848)));
  /* 12073bf8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12073bfe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12073c04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12073c09 mov ecx, dword ptr [0x1208fca8] */
  ECX = (r32((uint32_t)(0x1208fca8)));
  /* 12073c0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12073c11 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12073c15 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12073c18 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12073c1e:;
  /* 12073c1e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073c25 je 0x12073c48 */
  if (C.zf) goto L_12073c48;
  /* 12073c27 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12073c2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12073c30 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12073c33 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12073c3a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12073c3e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12073c44 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12073c46 jmp 0x12073c4a */
  goto L_12073c4a;
L_12073c48:;
  /* 12073c48 jmp 0x12073c4f */
  goto L_12073c4f;
L_12073c4a:;
  /* 12073c4a jmp 0x12073b95 */
  goto L_12073b95;
L_12073c4f:;
  /* 12073c4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12073c51 jmp 0x12073c56 */
  goto L_12073c56;
L_12073c53:;
  /* 12073c53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12073c56:;
  /* 12073c56 mov esp, ebp */
  ESP = (EBP);
  /* 12073c58 pop ebp */
  EBP = (pop32());
  /* 12073c59 ret  */
  ESPCHK(0x120739d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c60 @ 0x12073c60 (10 bytes, 5 insns) */
void f_12073c60(void) {
  FTRACE(0x12073c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12073c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12073c61 mov ebp, esp */
  EBP = (ESP);
  /* 12073c63 mov eax, dword ptr [0x12090d98] */
  EAX = (r32((uint32_t)(0x12090d98)));
  /* 12073c68 pop ebp */
  EBP = (pop32());
  /* 12073c69 ret  */
  ESPCHK(0x12073c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c70 @ 0x12073c70 (575 bytes, 196 insns) */
void f_12073c70(void) {
  FTRACE(0x12073c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12073c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12073c71 mov ebp, esp */
  EBP = (ESP);
  /* 12073c73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12073c75 push 0x1208d9a0 */
  push32((uint32_t)(0x1208d9a0u));
  /* 12073c7a push 0x1206e918 */
  push32((uint32_t)(0x1206e918u));
  /* 12073c7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12073c85 push eax */
  push32((uint32_t)(EAX));
  /* 12073c86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12073c8d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073c90 push ebx */
  push32((uint32_t)(EBX));
  /* 12073c91 push esi */
  push32((uint32_t)(ESI));
  /* 12073c92 push edi */
  push32((uint32_t)(EDI));
  /* 12073c93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12073c96 cmp dword ptr [0x12091854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073c9d jne 0x12073cee */
  if (!C.zf) goto L_12073cee;
  /* 12073c9f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12073ca2 push eax */
  push32((uint32_t)(EAX));
  /* 12073ca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12073ca5 push 0x1208d0d0 */
  push32((uint32_t)(0x1208d0d0u));
  /* 12073caa push 1 */
  push32((uint32_t)(0x1u));
  /* 12073cac call dword ptr [0x12094314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094314))), 0x12073cb2u);
  /* 12073cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12073cb4 je 0x12073cc2 */
  if (C.zf) goto L_12073cc2;
  /* 12073cb6 mov dword ptr [0x12091854], 1 */
  w32((uint32_t)(0x12091854), (0x1u));
  /* 12073cc0 jmp 0x12073cee */
  goto L_12073cee;
L_12073cc2:;
  /* 12073cc2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12073cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12073cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12073cc8 push 0x1208d0cc */
  push32((uint32_t)(0x1208d0ccu));
  /* 12073ccd push 1 */
  push32((uint32_t)(0x1u));
  /* 12073ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 12073cd1 call dword ptr [0x12094324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094324))), 0x12073cd7u);
  /* 12073cd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12073cd9 je 0x12073ce7 */
  if (C.zf) goto L_12073ce7;
  /* 12073cdb mov dword ptr [0x12091854], 2 */
  w32((uint32_t)(0x12091854), (0x2u));
  /* 12073ce5 jmp 0x12073cee */
  goto L_12073cee;
L_12073ce7:;
  /* 12073ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12073ce9 jmp 0x12073ec9 */
  goto L_12073ec9;
L_12073cee:;
  /* 12073cee cmp dword ptr [0x12091854], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12091854))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073cf5 jne 0x12073d12 */
  if (!C.zf) goto L_12073d12;
  /* 12073cf7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073cfa push edx */
  push32((uint32_t)(EDX));
  /* 12073cfb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073cfe push eax */
  push32((uint32_t)(EAX));
  /* 12073cff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073d02 push ecx */
  push32((uint32_t)(ECX));
  /* 12073d03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073d06 push edx */
  push32((uint32_t)(EDX));
  /* 12073d07 call dword ptr [0x12094314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094314))), 0x12073d0du);
  /* 12073d0d jmp 0x12073ec9 */
  goto L_12073ec9;
L_12073d12:;
  /* 12073d12 cmp dword ptr [0x12091854], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12091854))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073d19 jne 0x12073ec7 */
  if (!C.zf) goto L_12073ec7;
  /* 12073d1f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073d23 jne 0x12073d2d */
  if (!C.zf) goto L_12073d2d;
  /* 12073d25 mov eax, dword ptr [0x120917c8] */
  EAX = (r32((uint32_t)(0x120917c8)));
  /* 12073d2a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12073d2d:;
  /* 12073d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12073d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12073d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12073d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12073d35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073d38 push ecx */
  push32((uint32_t)(ECX));
  /* 12073d39 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073d3c push edx */
  push32((uint32_t)(EDX));
  /* 12073d3d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12073d42 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12073d45 push eax */
  push32((uint32_t)(EAX));
  /* 12073d46 call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x12073d4cu);
  /* 12073d4c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12073d4f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073d53 jne 0x12073d5c */
  if (!C.zf) goto L_12073d5c;
  /* 12073d55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12073d57 jmp 0x12073ec9 */
  goto L_12073ec9;
L_12073d5c:;
  /* 12073d5c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12073d63 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12073d66 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073d69 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12073d6b call 0x120689b0 */
  push32(0x12073d70u); f_120689b0();
  /* 12073d70 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12073d73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12073d76 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12073d79 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12073d7c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12073d7f push edx */
  push32((uint32_t)(EDX));
  /* 12073d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12073d82 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12073d85 push eax */
  push32((uint32_t)(EAX));
  /* 12073d86 call 0x12069580 */
  push32(0x12073d8bu); f_12069580();
  /* 12073d8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073d8e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12073d95 jmp 0x12073dae */
  goto L_12073dae;
  /* 12073d97 mov eax, 1 */
  EAX = (0x1u);
  /* 12073d9c ret  */
  ESPCHK(0x12073c70u, _esp0);
  ESP += 4; return;
  /* 12073d9d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12073da0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12073da7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12073dae:;
  /* 12073dae cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073db2 jne 0x12073dbb */
  if (!C.zf) goto L_12073dbb;
  /* 12073db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12073db6 jmp 0x12073ec9 */
  goto L_12073ec9;
L_12073dbb:;
  /* 12073dbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12073dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12073dbf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12073dc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12073dc3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12073dc6 push edx */
  push32((uint32_t)(EDX));
  /* 12073dc7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073dca push eax */
  push32((uint32_t)(EAX));
  /* 12073dcb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12073dce push ecx */
  push32((uint32_t)(ECX));
  /* 12073dcf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12073dd4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12073dd7 push edx */
  push32((uint32_t)(EDX));
  /* 12073dd8 call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x12073ddeu);
  /* 12073dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12073de0 jne 0x12073de9 */
  if (!C.zf) goto L_12073de9;
  /* 12073de2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12073de4 jmp 0x12073ec9 */
  goto L_12073ec9;
L_12073de9:;
  /* 12073de9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12073df0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12073df3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12073df7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12073dfa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12073dfc call 0x120689b0 */
  push32(0x12073e01u); f_120689b0();
  /* 12073e01 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12073e04 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12073e07 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12073e0a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12073e0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12073e14 jmp 0x12073e2d */
  goto L_12073e2d;
  /* 12073e16 mov eax, 1 */
  EAX = (0x1u);
  /* 12073e1b ret  */
  ESPCHK(0x12073c70u, _esp0);
  ESP += 4; return;
  /* 12073e1c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12073e1f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12073e26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12073e2d:;
  /* 12073e2d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073e31 jne 0x12073e3a */
  if (!C.zf) goto L_12073e3a;
  /* 12073e33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12073e35 jmp 0x12073ec9 */
  goto L_12073ec9;
L_12073e3a:;
  /* 12073e3a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073e3e jne 0x12073e49 */
  if (!C.zf) goto L_12073e49;
  /* 12073e40 mov edx, dword ptr [0x120917b8] */
  EDX = (r32((uint32_t)(0x120917b8)));
  /* 12073e46 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12073e49:;
  /* 12073e49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073e4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12073e4f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12073e55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073e58 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12073e5b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12073e62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12073e65 push ecx */
  push32((uint32_t)(ECX));
  /* 12073e66 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12073e69 push edx */
  push32((uint32_t)(EDX));
  /* 12073e6a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12073e6d push eax */
  push32((uint32_t)(EAX));
  /* 12073e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12073e71 push ecx */
  push32((uint32_t)(ECX));
  /* 12073e72 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12073e75 push edx */
  push32((uint32_t)(EDX));
  /* 12073e76 call dword ptr [0x12094324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094324))), 0x12073e7cu);
  /* 12073e7c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12073e7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073e82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12073e85 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12073e87 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12073e8c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073e92 je 0x12073ea8 */
  if (C.zf) goto L_12073ea8;
  /* 12073e94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073e97 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12073e9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12073e9c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12073ea0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073ea6 je 0x12073eac */
  if (C.zf) goto L_12073eac;
L_12073ea8:;
  /* 12073ea8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12073eaa jmp 0x12073ec9 */
  goto L_12073ec9;
L_12073eac:;
  /* 12073eac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073eaf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12073eb1 push eax */
  push32((uint32_t)(EAX));
  /* 12073eb2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12073eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12073eb6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12073eb9 push edx */
  push32((uint32_t)(EDX));
  /* 12073eba call 0x1206d700 */
  push32(0x12073ebfu); f_1206d700();
  /* 12073ebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073ec2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12073ec5 jmp 0x12073ec9 */
  goto L_12073ec9;
L_12073ec7:;
  /* 12073ec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12073ec9:;
  /* 12073ec9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12073ecc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12073ecf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12073ed6 pop edi */
  EDI = (pop32());
  /* 12073ed7 pop esi */
  ESI = (pop32());
  /* 12073ed8 pop ebx */
  EBX = (pop32());
  /* 12073ed9 mov esp, ebp */
  ESP = (EBP);
  /* 12073edb pop ebp */
  EBP = (pop32());
  /* 12073edc ret  */
  ESPCHK(0x12073c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ee0 @ 0x12073ee0 (208 bytes, 85 insns) */
void f_12073ee0(void) {
  FTRACE(0x12073ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12073ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12073ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12073ee3 push edi */
  push32((uint32_t)(EDI));
  /* 12073ee4 push esi */
  push32((uint32_t)(ESI));
  /* 12073ee5 push ebx */
  push32((uint32_t)(EBX));
  /* 12073ee6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12073ee9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12073eec lea eax, [0x120917b0] */
  EAX = ((uint32_t)(0x120917b0));
  /* 12073ef2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073ef6 jne 0x12073f33 */
  if (!C.zf) goto L_12073f33;
  /* 12073ef8 mov al, 0xff */
  AL = (0xffu);
  /* 12073efa mov edi, edi */
  EDI = (EDI);
L_12073efc:;
  /* 12073efc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12073efe je 0x12073f2e */
  if (C.zf) goto L_12073f2e;
  /* 12073f00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12073f02 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12073f03 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12073f05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12073f06 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12073f08 je 0x12073efc */
  if (C.zf) goto L_12073efc;
  /* 12073f0a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12073f0c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12073f0e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12073f10 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12073f13 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12073f15 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12073f17 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12073f19 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12073f1b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12073f1d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12073f1f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12073f22 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12073f24 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12073f26 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12073f28 je 0x12073efc */
  if (C.zf) goto L_12073efc;
  /* 12073f2a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12073f2c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12073f2e:;
  /* 12073f2e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12073f31 jmp 0x12073fab */
  goto L_12073fab;
L_12073f33:;
  /* 12073f33 lock inc dword ptr [0x12091944] */
  x86_unimpl("lock inc @ 0x12073f33");
  /* 12073f3a cmp dword ptr [0x12091934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073f41 jg 0x12073f47 */
  if ((!C.zf&&C.sf==C.of)) goto L_12073f47;
  /* 12073f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12073f45 jmp 0x12073f5c */
  goto L_12073f5c;
L_12073f47:;
  /* 12073f47 lock dec dword ptr [0x12091944] */
  x86_unimpl("lock dec @ 0x12073f47");
  /* 12073f4e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12073f50 call 0x12069210 */
  push32(0x12073f55u); f_12069210();
  /* 12073f55 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12073f5c:;
  /* 12073f5c mov eax, 0xff */
  EAX = (0xffu);
  /* 12073f61 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12073f63 nop  */
  /* nop */
L_12073f64:;
  /* 12073f64 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12073f66 je 0x12073f8f */
  if (C.zf) goto L_12073f8f;
  /* 12073f68 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12073f6a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12073f6b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12073f6d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12073f6e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12073f70 je 0x12073f64 */
  if (C.zf) goto L_12073f64;
  /* 12073f72 push eax */
  push32((uint32_t)(EAX));
  /* 12073f73 push ebx */
  push32((uint32_t)(EBX));
  /* 12073f74 call 0x12075050 */
  push32(0x12073f79u); f_12075050();
  /* 12073f79 mov ebx, eax */
  EBX = (EAX);
  /* 12073f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073f7e call 0x12075050 */
  push32(0x12073f83u); f_12075050();
  /* 12073f83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12073f86 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12073f88 je 0x12073f64 */
  if (C.zf) goto L_12073f64;
  /* 12073f8a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12073f8c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12073f8f:;
  /* 12073f8f mov ebx, eax */
  EBX = (EAX);
  /* 12073f91 pop eax */
  EAX = (pop32());
  /* 12073f92 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12073f94 jne 0x12073f9f */
  if (!C.zf) goto L_12073f9f;
  /* 12073f96 lock dec dword ptr [0x12091944] */
  x86_unimpl("lock dec @ 0x12073f96");
  /* 12073f9d jmp 0x12073fa9 */
  goto L_12073fa9;
L_12073f9f:;
  /* 12073f9f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12073fa1 call 0x120692b0 */
  push32(0x12073fa6u); f_120692b0();
  /* 12073fa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12073fa9:;
  /* 12073fa9 mov eax, ebx */
  EAX = (EBX);
L_12073fab:;
  /* 12073fab pop ebx */
  EBX = (pop32());
  /* 12073fac pop esi */
  ESI = (pop32());
  /* 12073fad pop edi */
  EDI = (pop32());
  /* 12073fae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12073faf ret  */
  ESPCHK(0x12073ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fb0 @ 0x12073fb0 (257 bytes, 103 insns) */
void f_12073fb0(void) {
  FTRACE(0x12073fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12073fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12073fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12073fb3 push edi */
  push32((uint32_t)(EDI));
  /* 12073fb4 push esi */
  push32((uint32_t)(ESI));
  /* 12073fb5 push ebx */
  push32((uint32_t)(EBX));
  /* 12073fb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12073fb9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12073fbb je 0x120740aa */
  if (C.zf) goto L_120740aa;
  /* 12073fc1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12073fc4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12073fc7 lea eax, [0x120917b0] */
  EAX = ((uint32_t)(0x120917b0));
  /* 12073fcd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12073fd1 jne 0x12074021 */
  if (!C.zf) goto L_12074021;
  /* 12073fd3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12073fd5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12073fd7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12073fd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12073fdc:;
  /* 12073fdc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12073fde or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12073fe0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12073fe2 je 0x12074005 */
  if (C.zf) goto L_12074005;
  /* 12073fe4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12073fe6 je 0x12074005 */
  if (C.zf) goto L_12074005;
  /* 12073fe8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12073fe9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12073fea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12073fec jb 0x12073ff4 */
  if (C.cf) goto L_12073ff4;
  /* 12073fee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12073ff0 ja 0x12073ff4 */
  if ((!C.cf&&!C.zf)) goto L_12073ff4;
  /* 12073ff2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12073ff4:;
  /* 12073ff4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12073ff6 jb 0x12073ffe */
  if (C.cf) goto L_12073ffe;
  /* 12073ff8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12073ffa ja 0x12073ffe */
  if ((!C.cf&&!C.zf)) goto L_12073ffe;
  /* 12073ffc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12073ffe:;
  /* 12073ffe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12074000 jne 0x1207400f */
  if (!C.zf) goto L_1207400f;
  /* 12074002 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12074003 jne 0x12073fdc */
  if (!C.zf) goto L_12073fdc;
L_12074005:;
  /* 12074005 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12074007 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12074009 je 0x120740aa */
  if (C.zf) goto L_120740aa;
L_1207400f:;
  /* 1207400f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12074014 jb 0x120740aa */
  if (C.cf) goto L_120740aa;
  /* 1207401a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1207401c jmp 0x120740aa */
  goto L_120740aa;
L_12074021:;
  /* 12074021 lock inc dword ptr [0x12091944] */
  x86_unimpl("lock inc @ 0x12074021");
  /* 12074028 cmp dword ptr [0x12091934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207402f jg 0x12074035 */
  if ((!C.zf&&C.sf==C.of)) goto L_12074035;
  /* 12074031 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074033 jmp 0x1207404e */
  goto L_1207404e;
L_12074035:;
  /* 12074035 lock dec dword ptr [0x12091944] */
  x86_unimpl("lock dec @ 0x12074035");
  /* 1207403c mov ebx, ecx */
  EBX = (ECX);
  /* 1207403e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12074040 call 0x12069210 */
  push32(0x12074045u); f_12069210();
  /* 12074045 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1207404c mov ecx, ebx */
  ECX = (EBX);
L_1207404e:;
  /* 1207404e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074050 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12074052 mov edi, edi */
  EDI = (EDI);
L_12074054:;
  /* 12074054 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12074056 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074058 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1207405a je 0x1207407f */
  if (C.zf) goto L_1207407f;
  /* 1207405c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1207405e je 0x1207407f */
  if (C.zf) goto L_1207407f;
  /* 12074060 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12074061 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12074062 push ecx */
  push32((uint32_t)(ECX));
  /* 12074063 push eax */
  push32((uint32_t)(EAX));
  /* 12074064 push ebx */
  push32((uint32_t)(EBX));
  /* 12074065 call 0x12075050 */
  push32(0x1207406au); f_12075050();
  /* 1207406a mov ebx, eax */
  EBX = (EAX);
  /* 1207406c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207406f call 0x12075050 */
  push32(0x12074074u); f_12075050();
  /* 12074074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074077 pop ecx */
  ECX = (pop32());
  /* 12074078 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207407a jne 0x12074085 */
  if (!C.zf) goto L_12074085;
  /* 1207407c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1207407d jne 0x12074054 */
  if (!C.zf) goto L_12074054;
L_1207407f:;
  /* 1207407f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12074081 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074083 je 0x1207408e */
  if (C.zf) goto L_1207408e;
L_12074085:;
  /* 12074085 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1207408a jb 0x1207408e */
  if (C.cf) goto L_1207408e;
  /* 1207408c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1207408e:;
  /* 1207408e pop eax */
  EAX = (pop32());
  /* 1207408f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074091 jne 0x1207409c */
  if (!C.zf) goto L_1207409c;
  /* 12074093 lock dec dword ptr [0x12091944] */
  x86_unimpl("lock dec @ 0x12074093");
  /* 1207409a jmp 0x120740aa */
  goto L_120740aa;
L_1207409c:;
  /* 1207409c mov ebx, ecx */
  EBX = (ECX);
  /* 1207409e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120740a0 call 0x120692b0 */
  push32(0x120740a5u); f_120692b0();
  /* 120740a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120740a8 mov ecx, ebx */
  ECX = (EBX);
L_120740aa:;
  /* 120740aa mov eax, ecx */
  EAX = (ECX);
  /* 120740ac pop ebx */
  EBX = (pop32());
  /* 120740ad pop esi */
  ESI = (pop32());
  /* 120740ae pop edi */
  EDI = (pop32());
  /* 120740af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120740b0 ret  */
  ESPCHK(0x12073fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100140c0 @ 0x120740c0 (255 bytes, 88 insns) */
void f_120740c0(void) {
  FTRACE(0x120740c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120740c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120740c1 mov ebp, esp */
  EBP = (ESP);
  /* 120740c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_120740c6:;
  /* 120740c6 cmp dword ptr [0x1208feb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1208feb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120740cd jle 0x120740e6 */
  if ((C.zf||C.sf!=C.of)) goto L_120740e6;
  /* 120740cf push 8 */
  push32((uint32_t)(0x8u));
  /* 120740d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120740d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120740d6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120740d8 push ecx */
  push32((uint32_t)(ECX));
  /* 120740d9 call 0x1206b820 */
  push32(0x120740deu); f_1206b820();
  /* 120740de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120740e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120740e4 jmp 0x120740ff */
  goto L_120740ff;
L_120740e6:;
  /* 120740e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120740e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120740eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120740ed mov ecx, dword ptr [0x1208fca8] */
  ECX = (r32((uint32_t)(0x1208fca8)));
  /* 120740f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120740f5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120740f9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 120740fc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120740ff:;
  /* 120740ff cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074103 je 0x12074110 */
  if (C.zf) goto L_12074110;
  /* 12074105 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074108 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207410b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1207410e jmp 0x120740c6 */
  goto L_120740c6;
L_12074110:;
  /* 12074110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074113 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12074115 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12074117 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1207411a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207411d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074120 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12074123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12074126 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12074129 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207412d je 0x12074135 */
  if (C.zf) goto L_12074135;
  /* 1207412f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074133 jne 0x12074148 */
  if (!C.zf) goto L_12074148;
L_12074135:;
  /* 12074135 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074138 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207413a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1207413c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1207413f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074142 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074145 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12074148:;
  /* 12074148 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1207414f:;
  /* 1207414f cmp dword ptr [0x1208feb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1208feb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074156 jle 0x1207416b */
  if ((C.zf||C.sf!=C.of)) goto L_1207416b;
  /* 12074158 push 4 */
  push32((uint32_t)(0x4u));
  /* 1207415a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207415d push edx */
  push32((uint32_t)(EDX));
  /* 1207415e call 0x1206b820 */
  push32(0x12074163u); f_1206b820();
  /* 12074163 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074166 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12074169 jmp 0x12074180 */
  goto L_12074180;
L_1207416b:;
  /* 1207416b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207416e mov ecx, dword ptr [0x1208fca8] */
  ECX = (r32((uint32_t)(0x1208fca8)));
  /* 12074174 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12074176 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1207417a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1207417d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12074180:;
  /* 12074180 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074184 je 0x120741ab */
  if (C.zf) goto L_120741ab;
  /* 12074186 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12074189 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1207418c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207418f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12074193 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12074196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074199 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1207419b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1207419d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120741a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120741a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120741a6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120741a9 jmp 0x1207414f */
  goto L_1207414f;
L_120741ab:;
  /* 120741ab cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120741af jne 0x120741b8 */
  if (!C.zf) goto L_120741b8;
  /* 120741b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120741b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120741b6 jmp 0x120741bb */
  goto L_120741bb;
L_120741b8:;
  /* 120741b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_120741bb:;
  /* 120741bb mov esp, ebp */
  ESP = (EBP);
  /* 120741bd pop ebp */
  EBP = (pop32());
  /* 120741be ret  */
  ESPCHK(0x120740c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100141c0 @ 0x120741c0 (17 bytes, 8 insns) */
void f_120741c0(void) {
  FTRACE(0x120741c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120741c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120741c1 mov ebp, esp */
  EBP = (ESP);
  /* 120741c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120741c6 push eax */
  push32((uint32_t)(EAX));
  /* 120741c7 call 0x120740c0 */
  push32(0x120741ccu); f_120740c0();
  /* 120741cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120741cf pop ebp */
  EBP = (pop32());
  /* 120741d0 ret  */
  ESPCHK(0x120741c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100141e0 @ 0x120741e0 (297 bytes, 106 insns) */
void f_120741e0(void) {
  FTRACE(0x120741e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120741e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120741e1 mov ebp, esp */
  EBP = (ESP);
  /* 120741e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120741e6 push esi */
  push32((uint32_t)(ESI));
L_120741e7:;
  /* 120741e7 cmp dword ptr [0x1208feb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1208feb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120741ee jle 0x12074207 */
  if ((C.zf||C.sf!=C.of)) goto L_12074207;
  /* 120741f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 120741f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120741f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120741f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120741f9 push ecx */
  push32((uint32_t)(ECX));
  /* 120741fa call 0x1206b820 */
  push32(0x120741ffu); f_1206b820();
  /* 120741ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074202 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12074205 jmp 0x12074220 */
  goto L_12074220;
L_12074207:;
  /* 12074207 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207420a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207420c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1207420e mov ecx, dword ptr [0x1208fca8] */
  ECX = (r32((uint32_t)(0x1208fca8)));
  /* 12074214 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12074216 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1207421a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1207421d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12074220:;
  /* 12074220 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074224 je 0x12074231 */
  if (C.zf) goto L_12074231;
  /* 12074226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074229 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207422c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1207422f jmp 0x120741e7 */
  goto L_120741e7;
L_12074231:;
  /* 12074231 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074234 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12074236 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12074238 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1207423b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207423e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074241 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12074244 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12074247 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1207424a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207424e je 0x12074256 */
  if (C.zf) goto L_12074256;
  /* 12074250 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074254 jne 0x12074269 */
  if (!C.zf) goto L_12074269;
L_12074256:;
  /* 12074256 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074259 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207425b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1207425d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12074260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074263 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074266 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12074269:;
  /* 12074269 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12074270 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12074277:;
  /* 12074277 cmp dword ptr [0x1208feb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1208feb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207427e jle 0x12074293 */
  if ((C.zf||C.sf!=C.of)) goto L_12074293;
  /* 12074280 push 4 */
  push32((uint32_t)(0x4u));
  /* 12074282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12074285 push edx */
  push32((uint32_t)(EDX));
  /* 12074286 call 0x1206b820 */
  push32(0x1207428bu); f_1206b820();
  /* 1207428b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207428e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12074291 jmp 0x120742a8 */
  goto L_120742a8;
L_12074293:;
  /* 12074293 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12074296 mov ecx, dword ptr [0x1208fca8] */
  ECX = (r32((uint32_t)(0x1208fca8)));
  /* 1207429c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1207429e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120742a2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120742a5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_120742a8:;
  /* 120742a8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120742ac je 0x120742e9 */
  if (C.zf) goto L_120742e9;
  /* 120742ae push 0 */
  push32((uint32_t)(0x0u));
  /* 120742b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 120742b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120742b5 push eax */
  push32((uint32_t)(EAX));
  /* 120742b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120742b9 push ecx */
  push32((uint32_t)(ECX));
  /* 120742ba call 0x12075180 */
  push32(0x120742bfu); f_12075180();
  /* 120742bf mov ecx, eax */
  ECX = (EAX);
  /* 120742c1 mov esi, edx */
  ESI = (EDX);
  /* 120742c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120742c6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120742c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120742ca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120742cc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120742ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120742d1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 120742d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120742d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120742d9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120742db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120742de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120742e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120742e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120742e7 jmp 0x12074277 */
  goto L_12074277;
L_120742e9:;
  /* 120742e9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120742ed jne 0x120742fe */
  if (!C.zf) goto L_120742fe;
  /* 120742ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120742f2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120742f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120742f7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120742fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120742fc jmp 0x12074304 */
  goto L_12074304;
L_120742fe:;
  /* 120742fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074301 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12074304:;
  /* 12074304 pop esi */
  ESI = (pop32());
  /* 12074305 mov esp, ebp */
  ESP = (EBP);
  /* 12074307 pop ebp */
  EBP = (pop32());
  /* 12074308 ret  */
  ESPCHK(0x120741e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014310 @ 0x12074310 (61 bytes, 18 insns) */
void f_12074310(void) {
  FTRACE(0x12074310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12074310 push ebp */
  push32((uint32_t)(EBP));
  /* 12074311 mov ebp, esp */
  EBP = (ESP);
  /* 12074313 cmp dword ptr [0x12091910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207431a jne 0x1207434b */
  if (!C.zf) goto L_1207434b;
  /* 1207431c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1207431e call 0x12069210 */
  push32(0x12074323u); f_12069210();
  /* 12074323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074326 cmp dword ptr [0x12091910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207432d jne 0x12074341 */
  if (!C.zf) goto L_12074341;
  /* 1207432f call 0x12074370 */
  push32(0x12074334u); f_12074370();
  /* 12074334 mov eax, dword ptr [0x12091910] */
  EAX = (r32((uint32_t)(0x12091910)));
  /* 12074339 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207433c mov dword ptr [0x12091910], eax */
  w32((uint32_t)(0x12091910), (EAX));
L_12074341:;
  /* 12074341 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12074343 call 0x120692b0 */
  push32(0x12074348u); f_120692b0();
  /* 12074348 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1207434b:;
  /* 1207434b pop ebp */
  EBP = (pop32());
  /* 1207434c ret  */
  ESPCHK(0x12074310u, _esp0);
  ESP += 4; return;
}

/* FUN_10014350 @ 0x12074350 (30 bytes, 11 insns) */
void f_12074350(void) {
  FTRACE(0x12074350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12074350 push ebp */
  push32((uint32_t)(EBP));
  /* 12074351 mov ebp, esp */
  EBP = (ESP);
  /* 12074353 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12074355 call 0x12069210 */
  push32(0x1207435au); f_12069210();
  /* 1207435a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207435d call 0x12074370 */
  push32(0x12074362u); f_12074370();
  /* 12074362 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12074364 call 0x120692b0 */
  push32(0x12074369u); f_120692b0();
  /* 12074369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207436c pop ebp */
  EBP = (pop32());
  /* 1207436d ret  */
  ESPCHK(0x12074350u, _esp0);
  ESP += 4; return;
}

/* FUN_10014370 @ 0x12074370 (939 bytes, 266 insns) */
void f_12074370(void) {
  FTRACE(0x12074370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12074370 push ebp */
  push32((uint32_t)(EBP));
  /* 12074371 mov ebp, esp */
  EBP = (ESP);
  /* 12074373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074376 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1207437d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1207437f call 0x12069210 */
  push32(0x12074384u); f_12069210();
  /* 12074384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074387 mov dword ptr [0x12091858], 0 */
  w32((uint32_t)(0x12091858), (0x0u));
  /* 12074391 mov dword ptr [0x12090e48], 0xffffffff */
  w32((uint32_t)(0x12090e48), (0xffffffffu));
  /* 1207439b mov eax, dword ptr [0x12090e48] */
  EAX = (r32((uint32_t)(0x12090e48)));
  /* 120743a0 mov dword ptr [0x12090e38], eax */
  w32((uint32_t)(0x12090e38), (EAX));
  /* 120743a5 push 0x1208da00 */
  push32((uint32_t)(0x1208da00u));
  /* 120743aa call 0x120751f0 */
  push32(0x120743afu); f_120751f0();
  /* 120743af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120743b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120743b5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120743b9 jne 0x120744f3 */
  if (!C.zf) goto L_120744f3;
  /* 120743bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 120743c1 call 0x120692b0 */
  push32(0x120743c6u); f_120692b0();
  /* 120743c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120743c9 push 0x12091860 */
  push32((uint32_t)(0x12091860u));
  /* 120743ce call dword ptr [0x120942d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942d8))), 0x120743d4u);
  /* 120743d4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120743d7 je 0x120744ee */
  if (C.zf) goto L_120744ee;
  /* 120743dd mov dword ptr [0x12091858], 1 */
  w32((uint32_t)(0x12091858), (0x1u));
  /* 120743e7 mov ecx, dword ptr [0x12091860] */
  ECX = (r32((uint32_t)(0x12091860)));
  /* 120743ed imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120743f0 mov dword ptr [0x12090da0], ecx */
  w32((uint32_t)(0x12090da0), (ECX));
  /* 120743f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120743f8 mov dx, word ptr [0x120918a6] */
  DX = (r16((uint32_t)(0x120918a6)));
  /* 120743ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12074401 je 0x12074419 */
  if (C.zf) goto L_12074419;
  /* 12074403 mov eax, dword ptr [0x120918b4] */
  EAX = (r32((uint32_t)(0x120918b4)));
  /* 12074408 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1207440b mov ecx, dword ptr [0x12090da0] */
  ECX = (r32((uint32_t)(0x12090da0)));
  /* 12074411 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074413 mov dword ptr [0x12090da0], ecx */
  w32((uint32_t)(0x12090da0), (ECX));
L_12074419:;
  /* 12074419 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1207441b mov dx, word ptr [0x120918fa] */
  DX = (r16((uint32_t)(0x120918fa)));
  /* 12074422 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12074424 je 0x1207444e */
  if (C.zf) goto L_1207444e;
  /* 12074426 cmp dword ptr [0x12091908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207442d je 0x1207444e */
  if (C.zf) goto L_1207444e;
  /* 1207442f mov dword ptr [0x12090da4], 1 */
  w32((uint32_t)(0x12090da4), (0x1u));
  /* 12074439 mov eax, dword ptr [0x12091908] */
  EAX = (r32((uint32_t)(0x12091908)));
  /* 1207443e sub eax, dword ptr [0x120918b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120918b4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074444 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074447 mov dword ptr [0x12090da8], eax */
  w32((uint32_t)(0x12090da8), (EAX));
  /* 1207444c jmp 0x12074462 */
  goto L_12074462;
L_1207444e:;
  /* 1207444e mov dword ptr [0x12090da4], 0 */
  w32((uint32_t)(0x12090da4), (0x0u));
  /* 12074458 mov dword ptr [0x12090da8], 0 */
  w32((uint32_t)(0x12090da8), (0x0u));
L_12074462:;
  /* 12074462 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12074465 push ecx */
  push32((uint32_t)(ECX));
  /* 12074466 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074468 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1207446a mov edx, dword ptr [0x12090e2c] */
  EDX = (r32((uint32_t)(0x12090e2c)));
  /* 12074470 push edx */
  push32((uint32_t)(EDX));
  /* 12074471 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12074473 push 0x12091864 */
  push32((uint32_t)(0x12091864u));
  /* 12074478 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1207447d mov eax, dword ptr [0x120917c8] */
  EAX = (r32((uint32_t)(0x120917c8)));
  /* 12074482 push eax */
  push32((uint32_t)(EAX));
  /* 12074483 call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x12074489u);
  /* 12074489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1207448b je 0x1207449f */
  if (C.zf) goto L_1207449f;
  /* 1207448d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074491 jne 0x1207449f */
  if (!C.zf) goto L_1207449f;
  /* 12074493 mov ecx, dword ptr [0x12090e2c] */
  ECX = (r32((uint32_t)(0x12090e2c)));
  /* 12074499 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1207449d jmp 0x120744a8 */
  goto L_120744a8;
L_1207449f:;
  /* 1207449f mov edx, dword ptr [0x12090e2c] */
  EDX = (r32((uint32_t)(0x12090e2c)));
  /* 120744a5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_120744a8:;
  /* 120744a8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 120744ab push eax */
  push32((uint32_t)(EAX));
  /* 120744ac push 0 */
  push32((uint32_t)(0x0u));
  /* 120744ae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120744b0 mov ecx, dword ptr [0x12090e30] */
  ECX = (r32((uint32_t)(0x12090e30)));
  /* 120744b6 push ecx */
  push32((uint32_t)(ECX));
  /* 120744b7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120744b9 push 0x120918b8 */
  push32((uint32_t)(0x120918b8u));
  /* 120744be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120744c3 mov edx, dword ptr [0x120917c8] */
  EDX = (r32((uint32_t)(0x120917c8)));
  /* 120744c9 push edx */
  push32((uint32_t)(EDX));
  /* 120744ca call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x120744d0u);
  /* 120744d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120744d2 je 0x120744e5 */
  if (C.zf) goto L_120744e5;
  /* 120744d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120744d8 jne 0x120744e5 */
  if (!C.zf) goto L_120744e5;
  /* 120744da mov eax, dword ptr [0x12090e30] */
  EAX = (r32((uint32_t)(0x12090e30)));
  /* 120744df mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 120744e3 jmp 0x120744ee */
  goto L_120744ee;
L_120744e5:;
  /* 120744e5 mov ecx, dword ptr [0x12090e30] */
  ECX = (r32((uint32_t)(0x12090e30)));
  /* 120744eb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_120744ee:;
  /* 120744ee jmp 0x12074717 */
  goto L_12074717;
L_120744f3:;
  /* 120744f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120744f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120744f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120744fb je 0x1207451d */
  if (C.zf) goto L_1207451d;
  /* 120744fd cmp dword ptr [0x1209190c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209190c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074504 je 0x1207452c */
  if (C.zf) goto L_1207452c;
  /* 12074506 mov ecx, dword ptr [0x1209190c] */
  ECX = (r32((uint32_t)(0x1209190c)));
  /* 1207450c push ecx */
  push32((uint32_t)(ECX));
  /* 1207450d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074510 push edx */
  push32((uint32_t)(EDX));
  /* 12074511 call 0x120714a0 */
  push32(0x12074516u); f_120714a0();
  /* 12074516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1207451b jne 0x1207452c */
  if (!C.zf) goto L_1207452c;
L_1207451d:;
  /* 1207451d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1207451f call 0x120692b0 */
  push32(0x12074524u); f_120692b0();
  /* 12074524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074527 jmp 0x12074717 */
  goto L_12074717;
L_1207452c:;
  /* 1207452c push 2 */
  push32((uint32_t)(0x2u));
  /* 1207452e mov eax, dword ptr [0x1209190c] */
  EAX = (r32((uint32_t)(0x1209190c)));
  /* 12074533 push eax */
  push32((uint32_t)(EAX));
  /* 12074534 call 0x120662a0 */
  push32(0x12074539u); f_120662a0();
  /* 12074539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207453c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12074541 push 0x1208d9f8 */
  push32((uint32_t)(0x1208d9f8u));
  /* 12074546 push 2 */
  push32((uint32_t)(0x2u));
  /* 12074548 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207454b push ecx */
  push32((uint32_t)(ECX));
  /* 1207454c call 0x12068640 */
  push32(0x12074551u); f_12068640();
  /* 12074551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074554 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074557 push eax */
  push32((uint32_t)(EAX));
  /* 12074558 call 0x12065810 */
  push32(0x1207455du); f_12065810();
  /* 1207455d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074560 mov dword ptr [0x1209190c], eax */
  w32((uint32_t)(0x1209190c), (EAX));
  /* 12074565 cmp dword ptr [0x1209190c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209190c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207456c jne 0x1207457d */
  if (!C.zf) goto L_1207457d;
  /* 1207456e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12074570 call 0x120692b0 */
  push32(0x12074575u); f_120692b0();
  /* 12074575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074578 jmp 0x12074717 */
  goto L_12074717;
L_1207457d:;
  /* 1207457d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074580 push edx */
  push32((uint32_t)(EDX));
  /* 12074581 mov eax, dword ptr [0x1209190c] */
  EAX = (r32((uint32_t)(0x1209190c)));
  /* 12074586 push eax */
  push32((uint32_t)(EAX));
  /* 12074587 call 0x120687c0 */
  push32(0x1207458cu); f_120687c0();
  /* 1207458c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207458f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12074591 call 0x120692b0 */
  push32(0x12074596u); f_120692b0();
  /* 12074596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074599 push 3 */
  push32((uint32_t)(0x3u));
  /* 1207459b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207459e push ecx */
  push32((uint32_t)(ECX));
  /* 1207459f mov edx, dword ptr [0x12090e2c] */
  EDX = (r32((uint32_t)(0x12090e2c)));
  /* 120745a5 push edx */
  push32((uint32_t)(EDX));
  /* 120745a6 call 0x12069030 */
  push32(0x120745abu); f_12069030();
  /* 120745ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120745ae mov eax, dword ptr [0x12090e2c] */
  EAX = (r32((uint32_t)(0x12090e2c)));
  /* 120745b3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 120745b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120745ba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120745bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120745c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120745c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120745c6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120745c9 jne 0x120745dd */
  if (!C.zf) goto L_120745dd;
  /* 120745cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120745ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120745d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120745d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120745d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120745da mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120745dd:;
  /* 120745dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120745e0 push eax */
  push32((uint32_t)(EAX));
  /* 120745e1 call 0x120740c0 */
  push32(0x120745e6u); f_120740c0();
  /* 120745e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120745e9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120745ef mov dword ptr [0x12090da0], eax */
  w32((uint32_t)(0x12090da0), (EAX));
L_120745f4:;
  /* 120745f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120745f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120745fa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120745fd je 0x12074615 */
  if (C.zf) goto L_12074615;
  /* 120745ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074602 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12074605 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074608 jl 0x12074620 */
  if ((C.sf!=C.of)) goto L_12074620;
  /* 1207460a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207460d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12074610 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074613 jg 0x12074620 */
  if ((!C.zf&&C.sf==C.of)) goto L_12074620;
L_12074615:;
  /* 12074615 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074618 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207461b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1207461e jmp 0x120745f4 */
  goto L_120745f4;
L_12074620:;
  /* 12074620 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074623 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12074626 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074629 jne 0x120746c5 */
  if (!C.zf) goto L_120746c5;
  /* 1207462f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074632 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074635 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12074638 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207463b push edx */
  push32((uint32_t)(EDX));
  /* 1207463c call 0x120740c0 */
  push32(0x12074641u); f_120740c0();
  /* 12074641 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074644 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074647 mov ecx, dword ptr [0x12090da0] */
  ECX = (r32((uint32_t)(0x12090da0)));
  /* 1207464d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207464f mov dword ptr [0x12090da0], ecx */
  w32((uint32_t)(0x12090da0), (ECX));
L_12074655:;
  /* 12074655 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074658 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1207465b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207465e jl 0x12074676 */
  if ((C.sf!=C.of)) goto L_12074676;
  /* 12074660 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074663 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12074666 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074669 jg 0x12074676 */
  if ((!C.zf&&C.sf==C.of)) goto L_12074676;
  /* 1207466b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207466e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074671 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12074674 jmp 0x12074655 */
  goto L_12074655;
L_12074676:;
  /* 12074676 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074679 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1207467c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207467f jne 0x120746c5 */
  if (!C.zf) goto L_120746c5;
  /* 12074681 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074684 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074687 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1207468a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207468d push ecx */
  push32((uint32_t)(ECX));
  /* 1207468e call 0x120740c0 */
  push32(0x12074693u); f_120740c0();
  /* 12074693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074696 mov edx, dword ptr [0x12090da0] */
  EDX = (r32((uint32_t)(0x12090da0)));
  /* 1207469c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207469e mov dword ptr [0x12090da0], edx */
  w32((uint32_t)(0x12090da0), (EDX));
L_120746a4:;
  /* 120746a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120746a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120746aa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120746ad jl 0x120746c5 */
  if ((C.sf!=C.of)) goto L_120746c5;
  /* 120746af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120746b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120746b5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120746b8 jg 0x120746c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_120746c5;
  /* 120746ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120746bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120746c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120746c3 jmp 0x120746a4 */
  goto L_120746a4;
L_120746c5:;
  /* 120746c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120746c9 je 0x120746d9 */
  if (C.zf) goto L_120746d9;
  /* 120746cb mov edx, dword ptr [0x12090da0] */
  EDX = (r32((uint32_t)(0x12090da0)));
  /* 120746d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120746d3 mov dword ptr [0x12090da0], edx */
  w32((uint32_t)(0x12090da0), (EDX));
L_120746d9:;
  /* 120746d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120746dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120746df mov dword ptr [0x12090da4], ecx */
  w32((uint32_t)(0x12090da4), (ECX));
  /* 120746e5 cmp dword ptr [0x12090da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12090da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120746ec je 0x1207470e */
  if (C.zf) goto L_1207470e;
  /* 120746ee push 3 */
  push32((uint32_t)(0x3u));
  /* 120746f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120746f3 push edx */
  push32((uint32_t)(EDX));
  /* 120746f4 mov eax, dword ptr [0x12090e30] */
  EAX = (r32((uint32_t)(0x12090e30)));
  /* 120746f9 push eax */
  push32((uint32_t)(EAX));
  /* 120746fa call 0x12069030 */
  push32(0x120746ffu); f_12069030();
  /* 120746ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074702 mov ecx, dword ptr [0x12090e30] */
  ECX = (r32((uint32_t)(0x12090e30)));
  /* 12074708 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1207470c jmp 0x12074717 */
  goto L_12074717;
L_1207470e:;
  /* 1207470e mov edx, dword ptr [0x12090e30] */
  EDX = (r32((uint32_t)(0x12090e30)));
  /* 12074714 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12074717:;
  /* 12074717 mov esp, ebp */
  ESP = (EBP);
  /* 12074719 pop ebp */
  EBP = (pop32());
  /* 1207471a ret  */
  ESPCHK(0x12074370u, _esp0);
  ESP += 4; return;
}

/* FUN_10014720 @ 0x12074720 (46 bytes, 18 insns) */
void f_12074720(void) {
  FTRACE(0x12074720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12074720 push ebp */
  push32((uint32_t)(EBP));
  /* 12074721 mov ebp, esp */
  EBP = (ESP);
  /* 12074723 push ecx */
  push32((uint32_t)(ECX));
  /* 12074724 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12074726 call 0x12069210 */
  push32(0x1207472bu); f_12069210();
  /* 1207472b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207472e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074731 push eax */
  push32((uint32_t)(EAX));
  /* 12074732 call 0x12074750 */
  push32(0x12074737u); f_12074750();
  /* 12074737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207473a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1207473d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1207473f call 0x120692b0 */
  push32(0x12074744u); f_120692b0();
  /* 12074744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207474a mov esp, ebp */
  ESP = (EBP);
  /* 1207474c pop ebp */
  EBP = (pop32());
  /* 1207474d ret  */
  ESPCHK(0x12074720u, _esp0);
  ESP += 4; return;
}

/* FUN_10014750 @ 0x12074750 (762 bytes, 246 insns) */
void f_12074750(void) {
  FTRACE(0x12074750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12074750 push ebp */
  push32((uint32_t)(EBP));
  /* 12074751 mov ebp, esp */
  EBP = (ESP);
  /* 12074753 push ecx */
  push32((uint32_t)(ECX));
  /* 12074754 cmp dword ptr [0x12090da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12090da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207475b jne 0x12074764 */
  if (!C.zf) goto L_12074764;
  /* 1207475d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207475f jmp 0x12074a46 */
  goto L_12074a46;
L_12074764:;
  /* 12074764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074767 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1207476a cmp ecx, dword ptr [0x12090e38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12090e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074770 jne 0x12074784 */
  if (!C.zf) goto L_12074784;
  /* 12074772 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074775 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12074778 cmp eax, dword ptr [0x12090e48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12090e48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207477e je 0x1207494b */
  if (C.zf) goto L_1207494b;
L_12074784:;
  /* 12074784 cmp dword ptr [0x12091858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207478b je 0x12074905 */
  if (C.zf) goto L_12074905;
  /* 12074791 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12074793 mov cx, word ptr [0x120918f8] */
  CX = (r16((uint32_t)(0x120918f8)));
  /* 1207479a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1207479c jne 0x120747f9 */
  if (!C.zf) goto L_120747f9;
  /* 1207479e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120747a0 mov dx, word ptr [0x12091906] */
  DX = (r16((uint32_t)(0x12091906)));
  /* 120747a7 push edx */
  push32((uint32_t)(EDX));
  /* 120747a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120747aa mov ax, word ptr [0x12091904] */
  AX = (r16((uint32_t)(0x12091904)));
  /* 120747b0 push eax */
  push32((uint32_t)(EAX));
  /* 120747b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120747b3 mov cx, word ptr [0x12091902] */
  CX = (r16((uint32_t)(0x12091902)));
  /* 120747ba push ecx */
  push32((uint32_t)(ECX));
  /* 120747bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120747bd mov dx, word ptr [0x12091900] */
  DX = (r16((uint32_t)(0x12091900)));
  /* 120747c4 push edx */
  push32((uint32_t)(EDX));
  /* 120747c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120747c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120747c9 mov ax, word ptr [0x120918fc] */
  AX = (r16((uint32_t)(0x120918fc)));
  /* 120747cf push eax */
  push32((uint32_t)(EAX));
  /* 120747d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120747d2 mov cx, word ptr [0x120918fe] */
  CX = (r16((uint32_t)(0x120918fe)));
  /* 120747d9 push ecx */
  push32((uint32_t)(ECX));
  /* 120747da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120747dc mov dx, word ptr [0x120918fa] */
  DX = (r16((uint32_t)(0x120918fa)));
  /* 120747e3 push edx */
  push32((uint32_t)(EDX));
  /* 120747e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120747e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120747ea push ecx */
  push32((uint32_t)(ECX));
  /* 120747eb push 1 */
  push32((uint32_t)(0x1u));
  /* 120747ed push 1 */
  push32((uint32_t)(0x1u));
  /* 120747ef call 0x12074a50 */
  push32(0x120747f4u); f_12074a50();
  /* 120747f4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120747f7 jmp 0x1207484a */
  goto L_1207484a;
L_120747f9:;
  /* 120747f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120747fb mov dx, word ptr [0x12091906] */
  DX = (r16((uint32_t)(0x12091906)));
  /* 12074802 push edx */
  push32((uint32_t)(EDX));
  /* 12074803 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074805 mov ax, word ptr [0x12091904] */
  AX = (r16((uint32_t)(0x12091904)));
  /* 1207480b push eax */
  push32((uint32_t)(EAX));
  /* 1207480c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1207480e mov cx, word ptr [0x12091902] */
  CX = (r16((uint32_t)(0x12091902)));
  /* 12074815 push ecx */
  push32((uint32_t)(ECX));
  /* 12074816 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12074818 mov dx, word ptr [0x12091900] */
  DX = (r16((uint32_t)(0x12091900)));
  /* 1207481f push edx */
  push32((uint32_t)(EDX));
  /* 12074820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074822 mov ax, word ptr [0x120918fe] */
  AX = (r16((uint32_t)(0x120918fe)));
  /* 12074828 push eax */
  push32((uint32_t)(EAX));
  /* 12074829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1207482b push 0 */
  push32((uint32_t)(0x0u));
  /* 1207482d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1207482f mov cx, word ptr [0x120918fa] */
  CX = (r16((uint32_t)(0x120918fa)));
  /* 12074836 push ecx */
  push32((uint32_t)(ECX));
  /* 12074837 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207483a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1207483d push eax */
  push32((uint32_t)(EAX));
  /* 1207483e push 0 */
  push32((uint32_t)(0x0u));
  /* 12074840 push 1 */
  push32((uint32_t)(0x1u));
  /* 12074842 call 0x12074a50 */
  push32(0x12074847u); f_12074a50();
  /* 12074847 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1207484a:;
  /* 1207484a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1207484c mov cx, word ptr [0x120918a4] */
  CX = (r16((uint32_t)(0x120918a4)));
  /* 12074853 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12074855 jne 0x120748b2 */
  if (!C.zf) goto L_120748b2;
  /* 12074857 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12074859 mov dx, word ptr [0x120918b2] */
  DX = (r16((uint32_t)(0x120918b2)));
  /* 12074860 push edx */
  push32((uint32_t)(EDX));
  /* 12074861 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074863 mov ax, word ptr [0x120918b0] */
  AX = (r16((uint32_t)(0x120918b0)));
  /* 12074869 push eax */
  push32((uint32_t)(EAX));
  /* 1207486a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1207486c mov cx, word ptr [0x120918ae] */
  CX = (r16((uint32_t)(0x120918ae)));
  /* 12074873 push ecx */
  push32((uint32_t)(ECX));
  /* 12074874 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12074876 mov dx, word ptr [0x120918ac] */
  DX = (r16((uint32_t)(0x120918ac)));
  /* 1207487d push edx */
  push32((uint32_t)(EDX));
  /* 1207487e push 0 */
  push32((uint32_t)(0x0u));
  /* 12074880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074882 mov ax, word ptr [0x120918a8] */
  AX = (r16((uint32_t)(0x120918a8)));
  /* 12074888 push eax */
  push32((uint32_t)(EAX));
  /* 12074889 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1207488b mov cx, word ptr [0x120918aa] */
  CX = (r16((uint32_t)(0x120918aa)));
  /* 12074892 push ecx */
  push32((uint32_t)(ECX));
  /* 12074893 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12074895 mov dx, word ptr [0x120918a6] */
  DX = (r16((uint32_t)(0x120918a6)));
  /* 1207489c push edx */
  push32((uint32_t)(EDX));
  /* 1207489d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120748a0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120748a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120748a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120748a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120748a8 call 0x12074a50 */
  push32(0x120748adu); f_12074a50();
  /* 120748ad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120748b0 jmp 0x12074903 */
  goto L_12074903;
L_120748b2:;
  /* 120748b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120748b4 mov dx, word ptr [0x120918b2] */
  DX = (r16((uint32_t)(0x120918b2)));
  /* 120748bb push edx */
  push32((uint32_t)(EDX));
  /* 120748bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120748be mov ax, word ptr [0x120918b0] */
  AX = (r16((uint32_t)(0x120918b0)));
  /* 120748c4 push eax */
  push32((uint32_t)(EAX));
  /* 120748c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120748c7 mov cx, word ptr [0x120918ae] */
  CX = (r16((uint32_t)(0x120918ae)));
  /* 120748ce push ecx */
  push32((uint32_t)(ECX));
  /* 120748cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120748d1 mov dx, word ptr [0x120918ac] */
  DX = (r16((uint32_t)(0x120918ac)));
  /* 120748d8 push edx */
  push32((uint32_t)(EDX));
  /* 120748d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120748db mov ax, word ptr [0x120918aa] */
  AX = (r16((uint32_t)(0x120918aa)));
  /* 120748e1 push eax */
  push32((uint32_t)(EAX));
  /* 120748e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120748e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120748e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120748e8 mov cx, word ptr [0x120918a6] */
  CX = (r16((uint32_t)(0x120918a6)));
  /* 120748ef push ecx */
  push32((uint32_t)(ECX));
  /* 120748f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120748f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120748f6 push eax */
  push32((uint32_t)(EAX));
  /* 120748f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120748f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120748fb call 0x12074a50 */
  push32(0x12074900u); f_12074a50();
  /* 12074900 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12074903:;
  /* 12074903 jmp 0x1207494b */
  goto L_1207494b;
L_12074905:;
  /* 12074905 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074907 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074909 push 0 */
  push32((uint32_t)(0x0u));
  /* 1207490b push 2 */
  push32((uint32_t)(0x2u));
  /* 1207490d push 0 */
  push32((uint32_t)(0x0u));
  /* 1207490f push 0 */
  push32((uint32_t)(0x0u));
  /* 12074911 push 1 */
  push32((uint32_t)(0x1u));
  /* 12074913 push 4 */
  push32((uint32_t)(0x4u));
  /* 12074915 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074918 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1207491b push edx */
  push32((uint32_t)(EDX));
  /* 1207491c push 1 */
  push32((uint32_t)(0x1u));
  /* 1207491e push 1 */
  push32((uint32_t)(0x1u));
  /* 12074920 call 0x12074a50 */
  push32(0x12074925u); f_12074a50();
  /* 12074925 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074928 push 0 */
  push32((uint32_t)(0x0u));
  /* 1207492a push 0 */
  push32((uint32_t)(0x0u));
  /* 1207492c push 0 */
  push32((uint32_t)(0x0u));
  /* 1207492e push 2 */
  push32((uint32_t)(0x2u));
  /* 12074930 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074932 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074934 push 5 */
  push32((uint32_t)(0x5u));
  /* 12074936 push 0xa */
  push32((uint32_t)(0xau));
  /* 12074938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207493b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1207493e push ecx */
  push32((uint32_t)(ECX));
  /* 1207493f push 1 */
  push32((uint32_t)(0x1u));
  /* 12074941 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074943 call 0x12074a50 */
  push32(0x12074948u); f_12074a50();
  /* 12074948 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1207494b:;
  /* 1207494b mov edx, dword ptr [0x12090e3c] */
  EDX = (r32((uint32_t)(0x12090e3c)));
  /* 12074951 cmp edx, dword ptr [0x12090e4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12090e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074957 jge 0x120749a4 */
  if ((C.sf==C.of)) goto L_120749a4;
  /* 12074959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207495c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1207495f cmp ecx, dword ptr [0x12090e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12090e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074965 jl 0x12074975 */
  if ((C.sf!=C.of)) goto L_12074975;
  /* 12074967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207496a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1207496d cmp eax, dword ptr [0x12090e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12090e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074973 jle 0x1207497c */
  if ((C.zf||C.sf!=C.of)) goto L_1207497c;
L_12074975:;
  /* 12074975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074977 jmp 0x12074a46 */
  goto L_12074a46;
L_1207497c:;
  /* 1207497c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207497f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12074982 cmp edx, dword ptr [0x12090e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12090e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074988 jle 0x120749a2 */
  if ((C.zf||C.sf!=C.of)) goto L_120749a2;
  /* 1207498a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207498d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12074990 cmp ecx, dword ptr [0x12090e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12090e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074996 jge 0x120749a2 */
  if ((C.sf==C.of)) goto L_120749a2;
  /* 12074998 mov eax, 1 */
  EAX = (0x1u);
  /* 1207499d jmp 0x12074a46 */
  goto L_12074a46;
L_120749a2:;
  /* 120749a2 jmp 0x120749e7 */
  goto L_120749e7;
L_120749a4:;
  /* 120749a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120749a7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120749aa cmp eax, dword ptr [0x12090e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12090e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120749b0 jl 0x120749c0 */
  if ((C.sf!=C.of)) goto L_120749c0;
  /* 120749b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120749b5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120749b8 cmp edx, dword ptr [0x12090e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12090e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120749be jle 0x120749c7 */
  if ((C.zf||C.sf!=C.of)) goto L_120749c7;
L_120749c0:;
  /* 120749c0 mov eax, 1 */
  EAX = (0x1u);
  /* 120749c5 jmp 0x12074a46 */
  goto L_12074a46;
L_120749c7:;
  /* 120749c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120749ca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120749cd cmp ecx, dword ptr [0x12090e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12090e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120749d3 jle 0x120749e7 */
  if ((C.zf||C.sf!=C.of)) goto L_120749e7;
  /* 120749d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120749d8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120749db cmp eax, dword ptr [0x12090e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12090e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120749e1 jge 0x120749e7 */
  if ((C.sf==C.of)) goto L_120749e7;
  /* 120749e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120749e5 jmp 0x12074a46 */
  goto L_12074a46;
L_120749e7:;
  /* 120749e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120749ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120749ed imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120749f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120749f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120749f5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120749f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120749fa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120749fd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074a03 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074a05 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074a0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12074a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074a11 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12074a14 cmp edx, dword ptr [0x12090e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12090e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074a1a jne 0x12074a32 */
  if (!C.zf) goto L_12074a32;
  /* 12074a1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12074a1f cmp eax, dword ptr [0x12090e40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12090e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074a25 jl 0x12074a2e */
  if ((C.sf!=C.of)) goto L_12074a2e;
  /* 12074a27 mov eax, 1 */
  EAX = (0x1u);
  /* 12074a2c jmp 0x12074a46 */
  goto L_12074a46;
L_12074a2e:;
  /* 12074a2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074a30 jmp 0x12074a46 */
  goto L_12074a46;
L_12074a32:;
  /* 12074a32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12074a35 cmp ecx, dword ptr [0x12090e50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12090e50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074a3b jge 0x12074a44 */
  if ((C.sf==C.of)) goto L_12074a44;
  /* 12074a3d mov eax, 1 */
  EAX = (0x1u);
  /* 12074a42 jmp 0x12074a46 */
  goto L_12074a46;
L_12074a44:;
  /* 12074a44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12074a46:;
  /* 12074a46 mov esp, ebp */
  ESP = (EBP);
  /* 12074a48 pop ebp */
  EBP = (pop32());
  /* 12074a49 ret  */
  ESPCHK(0x12074750u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a50 @ 0x12074a50 (504 bytes, 145 insns) */
void f_12074a50(void) {
  FTRACE(0x12074a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12074a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12074a51 mov ebp, esp */
  EBP = (ESP);
  /* 12074a53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074a56 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074a5a jne 0x12074b2c */
  if (!C.zf) goto L_12074b2c;
  /* 12074a60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074a63 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12074a66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12074a68 jne 0x12074a79 */
  if (!C.zf) goto L_12074a79;
  /* 12074a6a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12074a6d mov edx, dword ptr [ecx*4 + 0x12090e5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12090e5c)));
  /* 12074a74 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12074a77 jmp 0x12074a86 */
  goto L_12074a86;
L_12074a79:;
  /* 12074a79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12074a7c mov ecx, dword ptr [eax*4 + 0x12090e90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12090e90)));
  /* 12074a83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12074a86:;
  /* 12074a86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12074a89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074a8c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12074a8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074a92 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074a95 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074a9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12074a9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074aa0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074aa3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074aa6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12074aa9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12074aad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12074aae mov ecx, 7 */
  ECX = (0x7u);
  /* 12074ab3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12074ab5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12074ab8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12074abb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074abe jge 0x12074ad9 */
  if ((C.sf==C.of)) goto L_12074ad9;
  /* 12074ac0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12074ac3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074ac6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12074ac9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074acc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074acf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074ad2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074ad4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12074ad7 jmp 0x12074aed */
  goto L_12074aed;
L_12074ad9:;
  /* 12074ad9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12074adc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074adf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12074ae2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074ae5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074ae8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074aea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12074aed:;
  /* 12074aed cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074af1 jne 0x12074b2a */
  if (!C.zf) goto L_12074b2a;
  /* 12074af3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074af6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12074af9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12074afb jne 0x12074b0c */
  if (!C.zf) goto L_12074b0c;
  /* 12074afd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12074b00 mov eax, dword ptr [edx*4 + 0x12090e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12090e60)));
  /* 12074b07 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12074b0a jmp 0x12074b19 */
  goto L_12074b19;
L_12074b0c:;
  /* 12074b0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12074b0f mov edx, dword ptr [ecx*4 + 0x12090e94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12090e94)));
  /* 12074b16 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12074b19:;
  /* 12074b19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12074b1c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074b1f jle 0x12074b2a */
  if ((C.zf||C.sf!=C.of)) goto L_12074b2a;
  /* 12074b21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12074b24 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074b27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12074b2a:;
  /* 12074b2a jmp 0x12074b61 */
  goto L_12074b61;
L_12074b2c:;
  /* 12074b2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074b2f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12074b32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12074b34 jne 0x12074b45 */
  if (!C.zf) goto L_12074b45;
  /* 12074b36 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12074b39 mov ecx, dword ptr [eax*4 + 0x12090e5c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12090e5c)));
  /* 12074b40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12074b43 jmp 0x12074b52 */
  goto L_12074b52;
L_12074b45:;
  /* 12074b45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12074b48 mov eax, dword ptr [edx*4 + 0x12090e90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12090e90)));
  /* 12074b4f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12074b52:;
  /* 12074b52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12074b55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12074b58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12074b5b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074b5e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12074b61:;
  /* 12074b61 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074b65 jne 0x12074ba1 */
  if (!C.zf) goto L_12074ba1;
  /* 12074b67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12074b6a mov dword ptr [0x12090e3c], eax */
  w32((uint32_t)(0x12090e3c), (EAX));
  /* 12074b6f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12074b72 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074b75 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12074b78 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074b7a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074b7d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12074b80 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074b82 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074b88 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12074b8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074b8d mov dword ptr [0x12090e40], ecx */
  w32((uint32_t)(0x12090e40), (ECX));
  /* 12074b93 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074b96 mov dword ptr [0x12090e38], edx */
  w32((uint32_t)(0x12090e38), (EDX));
  /* 12074b9c jmp 0x12074c44 */
  goto L_12074c44;
L_12074ba1:;
  /* 12074ba1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12074ba4 mov dword ptr [0x12090e4c], eax */
  w32((uint32_t)(0x12090e4c), (EAX));
  /* 12074ba9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12074bac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074baf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12074bb2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074bb4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074bb7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12074bba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074bbc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074bc2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12074bc5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074bc7 mov dword ptr [0x12090e50], ecx */
  w32((uint32_t)(0x12090e50), (ECX));
  /* 12074bcd mov edx, dword ptr [0x12090da8] */
  EDX = (r32((uint32_t)(0x12090da8)));
  /* 12074bd3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12074bd9 mov eax, dword ptr [0x12090e50] */
  EAX = (r32((uint32_t)(0x12090e50)));
  /* 12074bde add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074be0 mov dword ptr [0x12090e50], eax */
  w32((uint32_t)(0x12090e50), (EAX));
  /* 12074be5 cmp dword ptr [0x12090e50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12090e50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074bec jge 0x12074c11 */
  if ((C.sf==C.of)) goto L_12074c11;
  /* 12074bee mov ecx, dword ptr [0x12090e50] */
  ECX = (r32((uint32_t)(0x12090e50)));
  /* 12074bf4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074bfa mov dword ptr [0x12090e50], ecx */
  w32((uint32_t)(0x12090e50), (ECX));
  /* 12074c00 mov edx, dword ptr [0x12090e4c] */
  EDX = (r32((uint32_t)(0x12090e4c)));
  /* 12074c06 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074c09 mov dword ptr [0x12090e4c], edx */
  w32((uint32_t)(0x12090e4c), (EDX));
  /* 12074c0f jmp 0x12074c3b */
  goto L_12074c3b;
L_12074c11:;
  /* 12074c11 cmp dword ptr [0x12090e50], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12090e50))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074c1b jl 0x12074c3b */
  if ((C.sf!=C.of)) goto L_12074c3b;
  /* 12074c1d mov eax, dword ptr [0x12090e50] */
  EAX = (r32((uint32_t)(0x12090e50)));
  /* 12074c22 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12074c27 mov dword ptr [0x12090e50], eax */
  w32((uint32_t)(0x12090e50), (EAX));
  /* 12074c2c mov ecx, dword ptr [0x12090e4c] */
  ECX = (r32((uint32_t)(0x12090e4c)));
  /* 12074c32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074c35 mov dword ptr [0x12090e4c], ecx */
  w32((uint32_t)(0x12090e4c), (ECX));
L_12074c3b:;
  /* 12074c3b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074c3e mov dword ptr [0x12090e48], edx */
  w32((uint32_t)(0x12090e48), (EDX));
L_12074c44:;
  /* 12074c44 mov esp, ebp */
  ESP = (EBP);
  /* 12074c46 pop ebp */
  EBP = (pop32());
  /* 12074c47 ret  */
  ESPCHK(0x12074a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c50 @ 0x12074c50 (382 bytes, 135 insns) */
void f_12074c50(void) {
  FTRACE(0x12074c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12074c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12074c51 mov ebp, esp */
  EBP = (ESP);
  /* 12074c53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12074c55 push 0x1208da08 */
  push32((uint32_t)(0x1208da08u));
  /* 12074c5a push 0x1206e918 */
  push32((uint32_t)(0x1206e918u));
  /* 12074c5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12074c65 push eax */
  push32((uint32_t)(EAX));
  /* 12074c66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12074c6d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074c70 push ebx */
  push32((uint32_t)(EBX));
  /* 12074c71 push esi */
  push32((uint32_t)(ESI));
  /* 12074c72 push edi */
  push32((uint32_t)(EDI));
  /* 12074c73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12074c76 cmp dword ptr [0x12091914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074c7d jne 0x12074cc2 */
  if (!C.zf) goto L_12074cc2;
  /* 12074c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12074c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12074c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074c87 call dword ptr [0x120942d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942d4))), 0x12074c8du);
  /* 12074c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12074c8f je 0x12074c9d */
  if (C.zf) goto L_12074c9d;
  /* 12074c91 mov dword ptr [0x12091914], 1 */
  w32((uint32_t)(0x12091914), (0x1u));
  /* 12074c9b jmp 0x12074cc2 */
  goto L_12074cc2;
L_12074c9d:;
  /* 12074c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12074c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12074ca1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12074ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074ca5 call dword ptr [0x120942ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942ec))), 0x12074cabu);
  /* 12074cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12074cad je 0x12074cbb */
  if (C.zf) goto L_12074cbb;
  /* 12074caf mov dword ptr [0x12091914], 2 */
  w32((uint32_t)(0x12091914), (0x2u));
  /* 12074cb9 jmp 0x12074cc2 */
  goto L_12074cc2;
L_12074cbb:;
  /* 12074cbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074cbd jmp 0x12074dd1 */
  goto L_12074dd1;
L_12074cc2:;
  /* 12074cc2 cmp dword ptr [0x12091914], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12091914))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074cc9 jne 0x12074ce6 */
  if (!C.zf) goto L_12074ce6;
  /* 12074ccb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12074cce push eax */
  push32((uint32_t)(EAX));
  /* 12074ccf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12074cd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12074cd6 push edx */
  push32((uint32_t)(EDX));
  /* 12074cd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074cda push eax */
  push32((uint32_t)(EAX));
  /* 12074cdb call dword ptr [0x120942d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942d4))), 0x12074ce1u);
  /* 12074ce1 jmp 0x12074dd1 */
  goto L_12074dd1;
L_12074ce6:;
  /* 12074ce6 cmp dword ptr [0x12091914], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12091914))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074ced jne 0x12074dcf */
  if (!C.zf) goto L_12074dcf;
  /* 12074cf3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074cf7 jne 0x12074d02 */
  if (!C.zf) goto L_12074d02;
  /* 12074cf9 mov ecx, dword ptr [0x120917c8] */
  ECX = (r32((uint32_t)(0x120917c8)));
  /* 12074cff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12074d02:;
  /* 12074d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074d06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12074d09 push edx */
  push32((uint32_t)(EDX));
  /* 12074d0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074d0d push eax */
  push32((uint32_t)(EAX));
  /* 12074d0e call dword ptr [0x120942ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942ec))), 0x12074d14u);
  /* 12074d14 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12074d17 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074d1b jne 0x12074d24 */
  if (!C.zf) goto L_12074d24;
  /* 12074d1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074d1f jmp 0x12074dd1 */
  goto L_12074dd1;
L_12074d24:;
  /* 12074d24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12074d2b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12074d2e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074d31 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12074d33 call 0x120689b0 */
  push32(0x12074d38u); f_120689b0();
  /* 12074d38 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12074d3b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12074d3e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12074d41 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12074d44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12074d4b jmp 0x12074d64 */
  goto L_12074d64;
  /* 12074d4d mov eax, 1 */
  EAX = (0x1u);
  /* 12074d52 ret  */
  ESPCHK(0x12074c50u, _esp0);
  ESP += 4; return;
  /* 12074d53 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12074d56 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12074d5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12074d64:;
  /* 12074d64 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074d68 jne 0x12074d6e */
  if (!C.zf) goto L_12074d6e;
  /* 12074d6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074d6c jmp 0x12074dd1 */
  goto L_12074dd1;
L_12074d6e:;
  /* 12074d6e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12074d71 push edx */
  push32((uint32_t)(EDX));
  /* 12074d72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12074d75 push eax */
  push32((uint32_t)(EAX));
  /* 12074d76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12074d79 push ecx */
  push32((uint32_t)(ECX));
  /* 12074d7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074d7d push edx */
  push32((uint32_t)(EDX));
  /* 12074d7e call dword ptr [0x120942ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942ec))), 0x12074d84u);
  /* 12074d84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12074d86 jne 0x12074d8c */
  if (!C.zf) goto L_12074d8c;
  /* 12074d88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074d8a jmp 0x12074dd1 */
  goto L_12074dd1;
L_12074d8c:;
  /* 12074d8c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074d90 jne 0x12074dad */
  if (!C.zf) goto L_12074dad;
  /* 12074d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074d96 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12074d98 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12074d9b push eax */
  push32((uint32_t)(EAX));
  /* 12074d9c push 1 */
  push32((uint32_t)(0x1u));
  /* 12074d9e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12074da1 push ecx */
  push32((uint32_t)(ECX));
  /* 12074da2 call dword ptr [0x1209431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209431c))), 0x12074da8u);
  /* 12074da8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12074dab jmp 0x12074dca */
  goto L_12074dca;
L_12074dad:;
  /* 12074dad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12074db0 push edx */
  push32((uint32_t)(EDX));
  /* 12074db1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074db4 push eax */
  push32((uint32_t)(EAX));
  /* 12074db5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12074db7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12074dba push ecx */
  push32((uint32_t)(ECX));
  /* 12074dbb push 1 */
  push32((uint32_t)(0x1u));
  /* 12074dbd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12074dc0 push edx */
  push32((uint32_t)(EDX));
  /* 12074dc1 call dword ptr [0x1209431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209431c))), 0x12074dc7u);
  /* 12074dc7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12074dca:;
  /* 12074dca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12074dcd jmp 0x12074dd1 */
  goto L_12074dd1;
L_12074dcf:;
  /* 12074dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12074dd1:;
  /* 12074dd1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12074dd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12074dd7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12074dde pop edi */
  EDI = (pop32());
  /* 12074ddf pop esi */
  ESI = (pop32());
  /* 12074de0 pop ebx */
  EBX = (pop32());
  /* 12074de1 mov esp, ebp */
  ESP = (EBP);
  /* 12074de3 pop ebp */
  EBP = (pop32());
  /* 12074de4 ret  */
  ESPCHK(0x12074c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014df0 @ 0x12074df0 (398 bytes, 140 insns) */
void f_12074df0(void) {
  FTRACE(0x12074df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12074df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12074df1 mov ebp, esp */
  EBP = (ESP);
  /* 12074df3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12074df5 push 0x1208da18 */
  push32((uint32_t)(0x1208da18u));
  /* 12074dfa push 0x1206e918 */
  push32((uint32_t)(0x1206e918u));
  /* 12074dff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12074e05 push eax */
  push32((uint32_t)(EAX));
  /* 12074e06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12074e0d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12074e10 push ebx */
  push32((uint32_t)(EBX));
  /* 12074e11 push esi */
  push32((uint32_t)(ESI));
  /* 12074e12 push edi */
  push32((uint32_t)(EDI));
  /* 12074e13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12074e16 cmp dword ptr [0x12091918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074e1d jne 0x12074e62 */
  if (!C.zf) goto L_12074e62;
  /* 12074e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12074e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12074e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074e27 call dword ptr [0x120942d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942d4))), 0x12074e2du);
  /* 12074e2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12074e2f je 0x12074e3d */
  if (C.zf) goto L_12074e3d;
  /* 12074e31 mov dword ptr [0x12091918], 1 */
  w32((uint32_t)(0x12091918), (0x1u));
  /* 12074e3b jmp 0x12074e62 */
  goto L_12074e62;
L_12074e3d:;
  /* 12074e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12074e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12074e41 push 1 */
  push32((uint32_t)(0x1u));
  /* 12074e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074e45 call dword ptr [0x120942ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942ec))), 0x12074e4bu);
  /* 12074e4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12074e4d je 0x12074e5b */
  if (C.zf) goto L_12074e5b;
  /* 12074e4f mov dword ptr [0x12091918], 2 */
  w32((uint32_t)(0x12091918), (0x2u));
  /* 12074e59 jmp 0x12074e62 */
  goto L_12074e62;
L_12074e5b:;
  /* 12074e5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074e5d jmp 0x12074f81 */
  goto L_12074f81;
L_12074e62:;
  /* 12074e62 cmp dword ptr [0x12091918], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12091918))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074e69 jne 0x12074e86 */
  if (!C.zf) goto L_12074e86;
  /* 12074e6b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12074e6e push eax */
  push32((uint32_t)(EAX));
  /* 12074e6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074e72 push ecx */
  push32((uint32_t)(ECX));
  /* 12074e73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12074e76 push edx */
  push32((uint32_t)(EDX));
  /* 12074e77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074e7a push eax */
  push32((uint32_t)(EAX));
  /* 12074e7b call dword ptr [0x120942ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942ec))), 0x12074e81u);
  /* 12074e81 jmp 0x12074f81 */
  goto L_12074f81;
L_12074e86:;
  /* 12074e86 cmp dword ptr [0x12091918], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12091918))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074e8d jne 0x12074f7f */
  if (!C.zf) goto L_12074f7f;
  /* 12074e93 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074e97 jne 0x12074ea2 */
  if (!C.zf) goto L_12074ea2;
  /* 12074e99 mov ecx, dword ptr [0x120917c8] */
  ECX = (r32((uint32_t)(0x120917c8)));
  /* 12074e9f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12074ea2:;
  /* 12074ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074ea6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12074ea9 push edx */
  push32((uint32_t)(EDX));
  /* 12074eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074ead push eax */
  push32((uint32_t)(EAX));
  /* 12074eae call dword ptr [0x120942d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942d4))), 0x12074eb4u);
  /* 12074eb4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12074eb7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074ebb jne 0x12074ec4 */
  if (!C.zf) goto L_12074ec4;
  /* 12074ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074ebf jmp 0x12074f81 */
  goto L_12074f81;
L_12074ec4:;
  /* 12074ec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12074ecb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12074ece shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12074ed0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074ed3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12074ed5 call 0x120689b0 */
  push32(0x12074edau); f_120689b0();
  /* 12074eda mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12074edd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12074ee0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12074ee3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12074ee6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12074eed jmp 0x12074f06 */
  goto L_12074f06;
  /* 12074eef mov eax, 1 */
  EAX = (0x1u);
  /* 12074ef4 ret  */
  ESPCHK(0x12074df0u, _esp0);
  ESP += 4; return;
  /* 12074ef5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12074ef8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12074eff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12074f06:;
  /* 12074f06 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074f0a jne 0x12074f10 */
  if (!C.zf) goto L_12074f10;
  /* 12074f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074f0e jmp 0x12074f81 */
  goto L_12074f81;
L_12074f10:;
  /* 12074f10 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12074f13 push edx */
  push32((uint32_t)(EDX));
  /* 12074f14 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12074f17 push eax */
  push32((uint32_t)(EAX));
  /* 12074f18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12074f1b push ecx */
  push32((uint32_t)(ECX));
  /* 12074f1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074f1f push edx */
  push32((uint32_t)(EDX));
  /* 12074f20 call dword ptr [0x120942d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942d4))), 0x12074f26u);
  /* 12074f26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12074f28 jne 0x12074f2e */
  if (!C.zf) goto L_12074f2e;
  /* 12074f2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12074f2c jmp 0x12074f81 */
  goto L_12074f81;
L_12074f2e:;
  /* 12074f2e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074f32 jne 0x12074f56 */
  if (!C.zf) goto L_12074f56;
  /* 12074f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12074f3c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12074f3e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12074f41 push eax */
  push32((uint32_t)(EAX));
  /* 12074f42 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12074f47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12074f4a push ecx */
  push32((uint32_t)(ECX));
  /* 12074f4b call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x12074f51u);
  /* 12074f51 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12074f54 jmp 0x12074f7a */
  goto L_12074f7a;
L_12074f56:;
  /* 12074f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074f58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12074f5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12074f5d push edx */
  push32((uint32_t)(EDX));
  /* 12074f5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12074f61 push eax */
  push32((uint32_t)(EAX));
  /* 12074f62 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12074f64 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12074f67 push ecx */
  push32((uint32_t)(ECX));
  /* 12074f68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12074f6d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12074f70 push edx */
  push32((uint32_t)(EDX));
  /* 12074f71 call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x12074f77u);
  /* 12074f77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12074f7a:;
  /* 12074f7a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12074f7d jmp 0x12074f81 */
  goto L_12074f81;
L_12074f7f:;
  /* 12074f7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12074f81:;
  /* 12074f81 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12074f84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12074f87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12074f8e pop edi */
  EDI = (pop32());
  /* 12074f8f pop esi */
  ESI = (pop32());
  /* 12074f90 pop ebx */
  EBX = (pop32());
  /* 12074f91 mov esp, ebp */
  ESP = (EBP);
  /* 12074f93 pop ebp */
  EBP = (pop32());
  /* 12074f94 ret  */
  ESPCHK(0x12074df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fa0 @ 0x12074fa0 (11 bytes, 6 insns) */
void f_12074fa0(void) {
  FTRACE(0x12074fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12074fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12074fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12074fa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074fa6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074fa9 pop ebp */
  EBP = (pop32());
  /* 12074faa ret  */
  ESPCHK(0x12074fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fb0 @ 0x12074fb0 (147 bytes, 43 insns) */
void f_12074fb0(void) {
  FTRACE(0x12074fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12074fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12074fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12074fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12074fb4 cmp dword ptr [0x120917b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074fbb jne 0x12074fd7 */
  if (!C.zf) goto L_12074fd7;
  /* 12074fbd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074fc1 jl 0x12074fd2 */
  if ((C.sf!=C.of)) goto L_12074fd2;
  /* 12074fc3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074fc7 jg 0x12074fd2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12074fd2;
  /* 12074fc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074fcc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12074fcf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12074fd2:;
  /* 12074fd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12074fd5 jmp 0x1207503f */
  goto L_1207503f;
L_12074fd7:;
  /* 12074fd7 push 0x12091944 */
  push32((uint32_t)(0x12091944u));
  /* 12074fdc call dword ptr [0x1209439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209439c))), 0x12074fe2u);
  /* 12074fe2 cmp dword ptr [0x12091934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12074fe9 je 0x12075009 */
  if (C.zf) goto L_12075009;
  /* 12074feb push 0x12091944 */
  push32((uint32_t)(0x12091944u));
  /* 12074ff0 call dword ptr [0x1209438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209438c))), 0x12074ff6u);
  /* 12074ff6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12074ff8 call 0x12069210 */
  push32(0x12074ffdu); f_12069210();
  /* 12074ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075000 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12075007 jmp 0x12075010 */
  goto L_12075010;
L_12075009:;
  /* 12075009 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12075010:;
  /* 12075010 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075013 push ecx */
  push32((uint32_t)(ECX));
  /* 12075014 call 0x12075050 */
  push32(0x12075019u); f_12075050();
  /* 12075019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207501c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1207501f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075023 je 0x12075031 */
  if (C.zf) goto L_12075031;
  /* 12075025 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12075027 call 0x120692b0 */
  push32(0x1207502cu); f_120692b0();
  /* 1207502c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207502f jmp 0x1207503c */
  goto L_1207503c;
L_12075031:;
  /* 12075031 push 0x12091944 */
  push32((uint32_t)(0x12091944u));
  /* 12075036 call dword ptr [0x1209438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209438c))), 0x1207503cu);
L_1207503c:;
  /* 1207503c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1207503f:;
  /* 1207503f mov esp, ebp */
  ESP = (EBP);
  /* 12075041 pop ebp */
  EBP = (pop32());
  /* 12075042 ret  */
  ESPCHK(0x12074fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015050 @ 0x12075050 (299 bytes, 91 insns) */
void f_12075050(void) {
  FTRACE(0x12075050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12075050 push ebp */
  push32((uint32_t)(EBP));
  /* 12075051 mov ebp, esp */
  EBP = (ESP);
  /* 12075053 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075056 cmp dword ptr [0x120917b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207505d jne 0x1207507c */
  if (!C.zf) goto L_1207507c;
  /* 1207505f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075063 jl 0x12075074 */
  if ((C.sf!=C.of)) goto L_12075074;
  /* 12075065 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075069 jg 0x12075074 */
  if ((!C.zf&&C.sf==C.of)) goto L_12075074;
  /* 1207506b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207506e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075071 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12075074:;
  /* 12075074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075077 jmp 0x12075177 */
  goto L_12075177;
L_1207507c:;
  /* 1207507c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075083 jge 0x120750c3 */
  if ((C.sf==C.of)) goto L_120750c3;
  /* 12075085 cmp dword ptr [0x1208feb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1208feb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207508c jle 0x120750a1 */
  if ((C.zf||C.sf!=C.of)) goto L_120750a1;
  /* 1207508e push 1 */
  push32((uint32_t)(0x1u));
  /* 12075090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075093 push ecx */
  push32((uint32_t)(ECX));
  /* 12075094 call 0x1206b820 */
  push32(0x12075099u); f_1206b820();
  /* 12075099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207509c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1207509f jmp 0x120750b5 */
  goto L_120750b5;
L_120750a1:;
  /* 120750a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120750a4 mov eax, dword ptr [0x1208fca8] */
  EAX = (r32((uint32_t)(0x1208fca8)));
  /* 120750a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120750ab mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 120750af and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120750b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120750b5:;
  /* 120750b5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120750b9 jne 0x120750c3 */
  if (!C.zf) goto L_120750c3;
  /* 120750bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120750be jmp 0x12075177 */
  goto L_12075177;
L_120750c3:;
  /* 120750c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120750c6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 120750c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120750cf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120750d5 mov eax, dword ptr [0x1208fca8] */
  EAX = (r32((uint32_t)(0x1208fca8)));
  /* 120750da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120750dc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 120750e0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 120750e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120750e8 je 0x1207510c */
  if (C.zf) goto L_1207510c;
  /* 120750ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120750ed sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 120750f0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120750f6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 120750f9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 120750fc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 120750ff mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12075103 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1207510a jmp 0x1207511d */
  goto L_1207511d;
L_1207510c:;
  /* 1207510c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1207510f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12075112 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12075116 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1207511d:;
  /* 1207511d push 1 */
  push32((uint32_t)(0x1u));
  /* 1207511f push 0 */
  push32((uint32_t)(0x0u));
  /* 12075121 push 3 */
  push32((uint32_t)(0x3u));
  /* 12075123 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12075126 push edx */
  push32((uint32_t)(EDX));
  /* 12075127 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207512a push eax */
  push32((uint32_t)(EAX));
  /* 1207512b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1207512e push ecx */
  push32((uint32_t)(ECX));
  /* 1207512f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12075134 mov edx, dword ptr [0x120917b8] */
  EDX = (r32((uint32_t)(0x120917b8)));
  /* 1207513a push edx */
  push32((uint32_t)(EDX));
  /* 1207513b call 0x1206dc00 */
  push32(0x12075140u); f_1206dc00();
  /* 12075140 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075143 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12075146 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207514a jne 0x12075151 */
  if (!C.zf) goto L_12075151;
  /* 1207514c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207514f jmp 0x12075177 */
  goto L_12075177;
L_12075151:;
  /* 12075151 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075155 jne 0x12075161 */
  if (!C.zf) goto L_12075161;
  /* 12075157 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207515a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1207515f jmp 0x12075177 */
  goto L_12075177;
L_12075161:;
  /* 12075161 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075164 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12075169 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1207516c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12075172 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12075175 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12075177:;
  /* 12075177 mov esp, ebp */
  ESP = (EBP);
  /* 12075179 pop ebp */
  EBP = (pop32());
  /* 1207517a ret  */
  ESPCHK(0x12075050u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12075180 (52 bytes, 19 insns) */
void f_12075180(void) {
  FTRACE(0x12075180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12075180 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12075184 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12075188 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207518a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1207518e jne 0x12075199 */
  if (!C.zf) goto L_12075199;
  /* 12075190 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12075194 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12075196 ret 0x10 */
  ESPCHK(0x12075180u, _esp0);
  ESP += 20; return;
L_12075199:;
  /* 12075199 push ebx */
  push32((uint32_t)(EBX));
  /* 1207519a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1207519c mov ebx, eax */
  EBX = (EAX);
  /* 1207519e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120751a2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120751a6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120751a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120751ac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120751ae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120751b0 pop ebx */
  EBX = (pop32());
  /* 120751b1 ret 0x10 */
  ESPCHK(0x12075180u, _esp0);
  ESP += 20; return;
}

/* FUN_100151c0 @ 0x120751c0 (46 bytes, 18 insns) */
void f_120751c0(void) {
  FTRACE(0x120751c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120751c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120751c1 mov ebp, esp */
  EBP = (ESP);
  /* 120751c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120751c4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 120751c6 call 0x12069210 */
  push32(0x120751cbu); f_12069210();
  /* 120751cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120751ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120751d1 push eax */
  push32((uint32_t)(EAX));
  /* 120751d2 call 0x120751f0 */
  push32(0x120751d7u); f_120751f0();
  /* 120751d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120751da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120751dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 120751df call 0x120692b0 */
  push32(0x120751e4u); f_120692b0();
  /* 120751e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120751e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120751ea mov esp, ebp */
  ESP = (EBP);
  /* 120751ec pop ebp */
  EBP = (pop32());
  /* 120751ed ret  */
  ESPCHK(0x120751c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x120751f0 (198 bytes, 69 insns) */
void f_120751f0(void) {
  FTRACE(0x120751f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120751f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120751f1 mov ebp, esp */
  EBP = (ESP);
  /* 120751f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120751f6 mov eax, dword ptr [0x120915d4] */
  EAX = (r32((uint32_t)(0x120915d4)));
  /* 120751fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120751fe cmp dword ptr [0x120930e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120930e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075205 jne 0x1207520e */
  if (!C.zf) goto L_1207520e;
  /* 12075207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075209 jmp 0x120752b2 */
  goto L_120752b2;
L_1207520e:;
  /* 1207520e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075212 jne 0x12075236 */
  if (!C.zf) goto L_12075236;
  /* 12075214 cmp dword ptr [0x120915dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207521b je 0x12075236 */
  if (C.zf) goto L_12075236;
  /* 1207521d call 0x12075310 */
  push32(0x12075222u); f_12075310();
  /* 12075222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12075224 je 0x1207522d */
  if (C.zf) goto L_1207522d;
  /* 12075226 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075228 jmp 0x120752b2 */
  goto L_120752b2;
L_1207522d:;
  /* 1207522d mov ecx, dword ptr [0x120915d4] */
  ECX = (r32((uint32_t)(0x120915d4)));
  /* 12075233 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12075236:;
  /* 12075236 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207523a je 0x120752b0 */
  if (C.zf) goto L_120752b0;
  /* 1207523c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075240 je 0x120752b0 */
  if (C.zf) goto L_120752b0;
  /* 12075242 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075245 push edx */
  push32((uint32_t)(EDX));
  /* 12075246 call 0x12068640 */
  push32(0x1207524bu); f_12068640();
  /* 1207524b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207524e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12075251:;
  /* 12075251 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075254 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075257 je 0x120752b0 */
  if (C.zf) goto L_120752b0;
  /* 12075259 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1207525c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1207525e push edx */
  push32((uint32_t)(EDX));
  /* 1207525f call 0x12068640 */
  push32(0x12075264u); f_12068640();
  /* 12075264 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075267 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207526a jbe 0x120752a5 */
  if ((C.cf||C.zf)) goto L_120752a5;
  /* 1207526c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1207526f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12075271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075274 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12075278 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207527b jne 0x120752a5 */
  if (!C.zf) goto L_120752a5;
  /* 1207527d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075280 push ecx */
  push32((uint32_t)(ECX));
  /* 12075281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075284 push edx */
  push32((uint32_t)(EDX));
  /* 12075285 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075288 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1207528a push ecx */
  push32((uint32_t)(ECX));
  /* 1207528b call 0x120752c0 */
  push32(0x12075290u); f_120752c0();
  /* 12075290 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075293 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12075295 jne 0x120752a5 */
  if (!C.zf) goto L_120752a5;
  /* 12075297 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1207529a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1207529c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207529f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 120752a3 jmp 0x120752b2 */
  goto L_120752b2;
L_120752a5:;
  /* 120752a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120752a8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120752ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120752ae jmp 0x12075251 */
  goto L_12075251;
L_120752b0:;
  /* 120752b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120752b2:;
  /* 120752b2 mov esp, ebp */
  ESP = (EBP);
  /* 120752b4 pop ebp */
  EBP = (pop32());
  /* 120752b5 ret  */
  ESPCHK(0x120751f0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x120752c0 (79 bytes, 32 insns) */
void f_120752c0(void) {
  FTRACE(0x120752c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120752c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120752c1 mov ebp, esp */
  EBP = (ESP);
  /* 120752c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120752c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120752c8 jne 0x120752ce */
  if (!C.zf) goto L_120752ce;
  /* 120752ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120752cc jmp 0x1207530b */
  goto L_1207530b;
L_120752ce:;
  /* 120752ce mov eax, dword ptr [0x12092ca4] */
  EAX = (r32((uint32_t)(0x12092ca4)));
  /* 120752d3 push eax */
  push32((uint32_t)(EAX));
  /* 120752d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120752d7 push ecx */
  push32((uint32_t)(ECX));
  /* 120752d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120752db push edx */
  push32((uint32_t)(EDX));
  /* 120752dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120752df push eax */
  push32((uint32_t)(EAX));
  /* 120752e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120752e3 push ecx */
  push32((uint32_t)(ECX));
  /* 120752e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120752e6 mov edx, dword ptr [0x12092f44] */
  EDX = (r32((uint32_t)(0x12092f44)));
  /* 120752ec push edx */
  push32((uint32_t)(EDX));
  /* 120752ed call 0x120753c0 */
  push32(0x120752f2u); f_120753c0();
  /* 120752f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120752f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120752f8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120752fc jne 0x12075305 */
  if (!C.zf) goto L_12075305;
  /* 120752fe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12075303 jmp 0x1207530b */
  goto L_1207530b;
L_12075305:;
  /* 12075305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075308 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1207530b:;
  /* 1207530b mov esp, ebp */
  ESP = (EBP);
  /* 1207530d pop ebp */
  EBP = (pop32());
  /* 1207530e ret  */
  ESPCHK(0x120752c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015310 @ 0x12075310 (174 bytes, 66 insns) */
void f_12075310(void) {
  FTRACE(0x12075310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12075310 push ebp */
  push32((uint32_t)(EBP));
  /* 12075311 mov ebp, esp */
  EBP = (ESP);
  /* 12075313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075316 mov eax, dword ptr [0x120915dc] */
  EAX = (r32((uint32_t)(0x120915dc)));
  /* 1207531b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1207531e:;
  /* 1207531e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075321 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075324 je 0x120753b8 */
  if (C.zf) goto L_120753b8;
  /* 1207532a push 0 */
  push32((uint32_t)(0x0u));
  /* 1207532c push 0 */
  push32((uint32_t)(0x0u));
  /* 1207532e push 0 */
  push32((uint32_t)(0x0u));
  /* 12075330 push 0 */
  push32((uint32_t)(0x0u));
  /* 12075332 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12075334 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075337 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12075339 push eax */
  push32((uint32_t)(EAX));
  /* 1207533a push 0 */
  push32((uint32_t)(0x0u));
  /* 1207533c push 1 */
  push32((uint32_t)(0x1u));
  /* 1207533e call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x12075344u);
  /* 12075344 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12075347 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207534b jne 0x12075352 */
  if (!C.zf) goto L_12075352;
  /* 1207534d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12075350 jmp 0x120753ba */
  goto L_120753ba;
L_12075352:;
  /* 12075352 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12075354 push 0x1208da24 */
  push32((uint32_t)(0x1208da24u));
  /* 12075359 push 2 */
  push32((uint32_t)(0x2u));
  /* 1207535b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207535e push ecx */
  push32((uint32_t)(ECX));
  /* 1207535f call 0x12065810 */
  push32(0x12075364u); f_12065810();
  /* 12075364 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075367 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1207536a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207536e jne 0x12075375 */
  if (!C.zf) goto L_12075375;
  /* 12075370 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12075373 jmp 0x120753ba */
  goto L_120753ba;
L_12075375:;
  /* 12075375 push 0 */
  push32((uint32_t)(0x0u));
  /* 12075377 push 0 */
  push32((uint32_t)(0x0u));
  /* 12075379 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207537c push edx */
  push32((uint32_t)(EDX));
  /* 1207537d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075380 push eax */
  push32((uint32_t)(EAX));
  /* 12075381 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12075383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075386 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12075388 push edx */
  push32((uint32_t)(EDX));
  /* 12075389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1207538b push 1 */
  push32((uint32_t)(0x1u));
  /* 1207538d call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x12075393u);
  /* 12075393 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12075395 jne 0x1207539c */
  if (!C.zf) goto L_1207539c;
  /* 12075397 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1207539a jmp 0x120753ba */
  goto L_120753ba;
L_1207539c:;
  /* 1207539c push 0 */
  push32((uint32_t)(0x0u));
  /* 1207539e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120753a1 push eax */
  push32((uint32_t)(EAX));
  /* 120753a2 call 0x12075810 */
  push32(0x120753a7u); f_12075810();
  /* 120753a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120753aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120753ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120753b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120753b3 jmp 0x1207531e */
  goto L_1207531e;
L_120753b8:;
  /* 120753b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120753ba:;
  /* 120753ba mov esp, ebp */
  ESP = (EBP);
  /* 120753bc pop ebp */
  EBP = (pop32());
  /* 120753bd ret  */
  ESPCHK(0x12075310u, _esp0);
  ESP += 4; return;
}

/* FUN_100153c0 @ 0x120753c0 (970 bytes, 340 insns) */
void f_120753c0(void) {
  FTRACE(0x120753c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120753c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120753c1 mov ebp, esp */
  EBP = (ESP);
  /* 120753c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120753c5 push 0x1208da78 */
  push32((uint32_t)(0x1208da78u));
  /* 120753ca push 0x1206e918 */
  push32((uint32_t)(0x1206e918u));
  /* 120753cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120753d5 push eax */
  push32((uint32_t)(EAX));
  /* 120753d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120753dd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120753e0 push ebx */
  push32((uint32_t)(EBX));
  /* 120753e1 push esi */
  push32((uint32_t)(ESI));
  /* 120753e2 push edi */
  push32((uint32_t)(EDI));
  /* 120753e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120753e6 cmp dword ptr [0x1209191c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209191c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120753ed jne 0x12075446 */
  if (!C.zf) goto L_12075446;
  /* 120753ef push 1 */
  push32((uint32_t)(0x1u));
  /* 120753f1 push 0x1208d0d0 */
  push32((uint32_t)(0x1208d0d0u));
  /* 120753f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120753f8 push 0x1208d0d0 */
  push32((uint32_t)(0x1208d0d0u));
  /* 120753fd push 0 */
  push32((uint32_t)(0x0u));
  /* 120753ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12075401 call dword ptr [0x120942d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942d0))), 0x12075407u);
  /* 12075407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12075409 je 0x12075417 */
  if (C.zf) goto L_12075417;
  /* 1207540b mov dword ptr [0x1209191c], 1 */
  w32((uint32_t)(0x1209191c), (0x1u));
  /* 12075415 jmp 0x12075446 */
  goto L_12075446;
L_12075417:;
  /* 12075417 push 1 */
  push32((uint32_t)(0x1u));
  /* 12075419 push 0x1208d0cc */
  push32((uint32_t)(0x1208d0ccu));
  /* 1207541e push 1 */
  push32((uint32_t)(0x1u));
  /* 12075420 push 0x1208d0cc */
  push32((uint32_t)(0x1208d0ccu));
  /* 12075425 push 0 */
  push32((uint32_t)(0x0u));
  /* 12075427 push 0 */
  push32((uint32_t)(0x0u));
  /* 12075429 call dword ptr [0x120942dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942dc))), 0x1207542fu);
  /* 1207542f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12075431 je 0x1207543f */
  if (C.zf) goto L_1207543f;
  /* 12075433 mov dword ptr [0x1209191c], 2 */
  w32((uint32_t)(0x1209191c), (0x2u));
  /* 1207543d jmp 0x12075446 */
  goto L_12075446;
L_1207543f:;
  /* 1207543f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075441 jmp 0x120757a4 */
  goto L_120757a4;
L_12075446:;
  /* 12075446 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207544a jle 0x1207545f */
  if ((C.zf||C.sf!=C.of)) goto L_1207545f;
  /* 1207544c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207544f push eax */
  push32((uint32_t)(EAX));
  /* 12075450 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12075453 push ecx */
  push32((uint32_t)(ECX));
  /* 12075454 call 0x120757c0 */
  push32(0x12075459u); f_120757c0();
  /* 12075459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207545c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1207545f:;
  /* 1207545f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075463 jle 0x12075478 */
  if ((C.zf||C.sf!=C.of)) goto L_12075478;
  /* 12075465 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12075468 push edx */
  push32((uint32_t)(EDX));
  /* 12075469 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1207546c push eax */
  push32((uint32_t)(EAX));
  /* 1207546d call 0x120757c0 */
  push32(0x12075472u); f_120757c0();
  /* 12075472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075475 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12075478:;
  /* 12075478 cmp dword ptr [0x1209191c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1209191c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207547f jne 0x120754a4 */
  if (!C.zf) goto L_120754a4;
  /* 12075481 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12075484 push ecx */
  push32((uint32_t)(ECX));
  /* 12075485 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12075488 push edx */
  push32((uint32_t)(EDX));
  /* 12075489 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1207548c push eax */
  push32((uint32_t)(EAX));
  /* 1207548d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12075490 push ecx */
  push32((uint32_t)(ECX));
  /* 12075491 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12075494 push edx */
  push32((uint32_t)(EDX));
  /* 12075495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075498 push eax */
  push32((uint32_t)(EAX));
  /* 12075499 call dword ptr [0x120942dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942dc))), 0x1207549fu);
  /* 1207549f jmp 0x120757a4 */
  goto L_120757a4;
L_120754a4:;
  /* 120754a4 cmp dword ptr [0x1209191c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1209191c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120754ab jne 0x120757a2 */
  if (!C.zf) goto L_120757a2;
  /* 120754b1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120754b5 jne 0x120754c0 */
  if (!C.zf) goto L_120754c0;
  /* 120754b7 mov ecx, dword ptr [0x120917c8] */
  ECX = (r32((uint32_t)(0x120917c8)));
  /* 120754bd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_120754c0:;
  /* 120754c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120754c4 je 0x120754d0 */
  if (C.zf) goto L_120754d0;
  /* 120754c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120754ca jne 0x1207564c */
  if (!C.zf) goto L_1207564c;
L_120754d0:;
  /* 120754d0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120754d3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120754d6 jne 0x120754e2 */
  if (!C.zf) goto L_120754e2;
  /* 120754d8 mov eax, 2 */
  EAX = (0x2u);
  /* 120754dd jmp 0x120757a4 */
  goto L_120757a4;
L_120754e2:;
  /* 120754e2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120754e6 jle 0x120754f2 */
  if ((C.zf||C.sf!=C.of)) goto L_120754f2;
  /* 120754e8 mov eax, 1 */
  EAX = (0x1u);
  /* 120754ed jmp 0x120757a4 */
  goto L_120757a4;
L_120754f2:;
  /* 120754f2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120754f6 jle 0x12075502 */
  if ((C.zf||C.sf!=C.of)) goto L_12075502;
  /* 120754f8 mov eax, 3 */
  EAX = (0x3u);
  /* 120754fd jmp 0x120757a4 */
  goto L_120757a4;
L_12075502:;
  /* 12075502 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12075505 push eax */
  push32((uint32_t)(EAX));
  /* 12075506 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12075509 push ecx */
  push32((uint32_t)(ECX));
  /* 1207550a call dword ptr [0x12094328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094328))), 0x12075510u);
  /* 12075510 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12075512 jne 0x1207551b */
  if (!C.zf) goto L_1207551b;
  /* 12075514 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075516 jmp 0x120757a4 */
  goto L_120757a4;
L_1207551b:;
  /* 1207551b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207551f jne 0x12075527 */
  if (!C.zf) goto L_12075527;
  /* 12075521 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075525 je 0x12075554 */
  if (C.zf) goto L_12075554;
L_12075527:;
  /* 12075527 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207552b jne 0x12075533 */
  if (!C.zf) goto L_12075533;
  /* 1207552d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075531 je 0x12075554 */
  if (C.zf) goto L_12075554;
L_12075533:;
  /* 12075533 push 0x1208da38 */
  push32((uint32_t)(0x1208da38u));
  /* 12075538 push 0 */
  push32((uint32_t)(0x0u));
  /* 1207553a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1207553f push 0x1208da30 */
  push32((uint32_t)(0x1208da30u));
  /* 12075544 push 2 */
  push32((uint32_t)(0x2u));
  /* 12075546 call 0x120648d0 */
  push32(0x1207554bu); f_120648d0();
  /* 1207554b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207554e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075551 jne 0x12075554 */
  if (!C.zf) goto L_12075554;
  /* 12075553 int3  */
  x86_unimpl("int3 @ 0x12075553");
L_12075554:;
  /* 12075554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12075556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12075558 jne 0x1207551b */
  if (!C.zf) goto L_1207551b;
  /* 1207555a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207555e jle 0x120755d3 */
  if ((C.zf||C.sf!=C.of)) goto L_120755d3;
  /* 12075560 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075564 jae 0x12075570 */
  if (!C.cf) goto L_12075570;
  /* 12075566 mov eax, 3 */
  EAX = (0x3u);
  /* 1207556b jmp 0x120757a4 */
  goto L_120757a4;
L_12075570:;
  /* 12075570 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12075573 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12075576 jmp 0x12075581 */
  goto L_12075581;
L_12075578:;
  /* 12075578 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1207557b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207557e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12075581:;
  /* 12075581 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12075584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075586 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12075588 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1207558a je 0x120755c9 */
  if (C.zf) goto L_120755c9;
  /* 1207558c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1207558f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12075591 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12075594 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12075596 je 0x120755c9 */
  if (C.zf) goto L_120755c9;
  /* 12075598 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1207559b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1207559d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1207559f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 120755a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120755a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120755a6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120755a8 jl 0x120755c7 */
  if ((C.sf!=C.of)) goto L_120755c7;
  /* 120755aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120755ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120755af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120755b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120755b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120755b6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 120755b9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120755bb jg 0x120755c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_120755c7;
  /* 120755bd mov eax, 2 */
  EAX = (0x2u);
  /* 120755c2 jmp 0x120757a4 */
  goto L_120757a4;
L_120755c7:;
  /* 120755c7 jmp 0x12075578 */
  goto L_12075578;
L_120755c9:;
  /* 120755c9 mov eax, 3 */
  EAX = (0x3u);
  /* 120755ce jmp 0x120757a4 */
  goto L_120757a4;
L_120755d3:;
  /* 120755d3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120755d7 jle 0x1207564c */
  if ((C.zf||C.sf!=C.of)) goto L_1207564c;
  /* 120755d9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120755dd jae 0x120755e9 */
  if (!C.cf) goto L_120755e9;
  /* 120755df mov eax, 1 */
  EAX = (0x1u);
  /* 120755e4 jmp 0x120757a4 */
  goto L_120757a4;
L_120755e9:;
  /* 120755e9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 120755ec mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 120755ef jmp 0x120755fa */
  goto L_120755fa;
L_120755f1:;
  /* 120755f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120755f4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120755f7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_120755fa:;
  /* 120755fa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 120755fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120755ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12075601 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12075603 je 0x12075642 */
  if (C.zf) goto L_12075642;
  /* 12075605 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12075608 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1207560a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1207560d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1207560f je 0x12075642 */
  if (C.zf) goto L_12075642;
  /* 12075611 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12075614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075616 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12075618 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1207561b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1207561d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1207561f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075621 jl 0x12075640 */
  if ((C.sf!=C.of)) goto L_12075640;
  /* 12075623 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12075626 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12075628 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1207562a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1207562d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207562f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12075632 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075634 jg 0x12075640 */
  if ((!C.zf&&C.sf==C.of)) goto L_12075640;
  /* 12075636 mov eax, 2 */
  EAX = (0x2u);
  /* 1207563b jmp 0x120757a4 */
  goto L_120757a4;
L_12075640:;
  /* 12075640 jmp 0x120755f1 */
  goto L_120755f1;
L_12075642:;
  /* 12075642 mov eax, 1 */
  EAX = (0x1u);
  /* 12075647 jmp 0x120757a4 */
  goto L_120757a4;
L_1207564c:;
  /* 1207564c push 0 */
  push32((uint32_t)(0x0u));
  /* 1207564e push 0 */
  push32((uint32_t)(0x0u));
  /* 12075650 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12075653 push ecx */
  push32((uint32_t)(ECX));
  /* 12075654 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12075657 push edx */
  push32((uint32_t)(EDX));
  /* 12075658 push 9 */
  push32((uint32_t)(0x9u));
  /* 1207565a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1207565d push eax */
  push32((uint32_t)(EAX));
  /* 1207565e call dword ptr [0x1209431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209431c))), 0x12075664u);
  /* 12075664 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12075667 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207566b jne 0x12075674 */
  if (!C.zf) goto L_12075674;
  /* 1207566d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207566f jmp 0x120757a4 */
  goto L_120757a4;
L_12075674:;
  /* 12075674 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1207567b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1207567e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12075680 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075683 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12075685 call 0x120689b0 */
  push32(0x1207568au); f_120689b0();
  /* 1207568a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1207568d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12075690 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12075693 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12075696 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1207569d jmp 0x120756b6 */
  goto L_120756b6;
  /* 1207569f mov eax, 1 */
  EAX = (0x1u);
  /* 120756a4 ret  */
  ESPCHK(0x120753c0u, _esp0);
  ESP += 4; return;
  /* 120756a5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120756a8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120756af mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120756b6:;
  /* 120756b6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120756ba jne 0x120756c3 */
  if (!C.zf) goto L_120756c3;
  /* 120756bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120756be jmp 0x120757a4 */
  goto L_120757a4;
L_120756c3:;
  /* 120756c3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120756c6 push edx */
  push32((uint32_t)(EDX));
  /* 120756c7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120756ca push eax */
  push32((uint32_t)(EAX));
  /* 120756cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120756ce push ecx */
  push32((uint32_t)(ECX));
  /* 120756cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120756d2 push edx */
  push32((uint32_t)(EDX));
  /* 120756d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120756d5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120756d8 push eax */
  push32((uint32_t)(EAX));
  /* 120756d9 call dword ptr [0x1209431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209431c))), 0x120756dfu);
  /* 120756df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120756e1 jne 0x120756ea */
  if (!C.zf) goto L_120756ea;
  /* 120756e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120756e5 jmp 0x120757a4 */
  goto L_120757a4;
L_120756ea:;
  /* 120756ea push 0 */
  push32((uint32_t)(0x0u));
  /* 120756ec push 0 */
  push32((uint32_t)(0x0u));
  /* 120756ee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120756f1 push ecx */
  push32((uint32_t)(ECX));
  /* 120756f2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120756f5 push edx */
  push32((uint32_t)(EDX));
  /* 120756f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 120756f8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120756fb push eax */
  push32((uint32_t)(EAX));
  /* 120756fc call dword ptr [0x1209431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209431c))), 0x12075702u);
  /* 12075702 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12075705 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075709 jne 0x12075712 */
  if (!C.zf) goto L_12075712;
  /* 1207570b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207570d jmp 0x120757a4 */
  goto L_120757a4;
L_12075712:;
  /* 12075712 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12075719 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1207571c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1207571e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075721 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12075723 call 0x120689b0 */
  push32(0x12075728u); f_120689b0();
  /* 12075728 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1207572b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1207572e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12075731 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12075734 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1207573b jmp 0x12075754 */
  goto L_12075754;
  /* 1207573d mov eax, 1 */
  EAX = (0x1u);
  /* 12075742 ret  */
  ESPCHK(0x120753c0u, _esp0);
  ESP += 4; return;
  /* 12075743 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12075746 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1207574d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12075754:;
  /* 12075754 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075758 jne 0x1207575e */
  if (!C.zf) goto L_1207575e;
  /* 1207575a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207575c jmp 0x120757a4 */
  goto L_120757a4;
L_1207575e:;
  /* 1207575e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12075761 push edx */
  push32((uint32_t)(EDX));
  /* 12075762 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12075765 push eax */
  push32((uint32_t)(EAX));
  /* 12075766 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12075769 push ecx */
  push32((uint32_t)(ECX));
  /* 1207576a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1207576d push edx */
  push32((uint32_t)(EDX));
  /* 1207576e push 1 */
  push32((uint32_t)(0x1u));
  /* 12075770 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12075773 push eax */
  push32((uint32_t)(EAX));
  /* 12075774 call dword ptr [0x1209431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209431c))), 0x1207577au);
  /* 1207577a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1207577c jne 0x12075782 */
  if (!C.zf) goto L_12075782;
  /* 1207577e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075780 jmp 0x120757a4 */
  goto L_120757a4;
L_12075782:;
  /* 12075782 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12075785 push ecx */
  push32((uint32_t)(ECX));
  /* 12075786 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12075789 push edx */
  push32((uint32_t)(EDX));
  /* 1207578a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1207578d push eax */
  push32((uint32_t)(EAX));
  /* 1207578e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12075791 push ecx */
  push32((uint32_t)(ECX));
  /* 12075792 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12075795 push edx */
  push32((uint32_t)(EDX));
  /* 12075796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075799 push eax */
  push32((uint32_t)(EAX));
  /* 1207579a call dword ptr [0x120942d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942d0))), 0x120757a0u);
  /* 120757a0 jmp 0x120757a4 */
  goto L_120757a4;
L_120757a2:;
  /* 120757a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120757a4:;
  /* 120757a4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 120757a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120757aa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120757b1 pop edi */
  EDI = (pop32());
  /* 120757b2 pop esi */
  ESI = (pop32());
  /* 120757b3 pop ebx */
  EBX = (pop32());
  /* 120757b4 mov esp, ebp */
  ESP = (EBP);
  /* 120757b6 pop ebp */
  EBP = (pop32());
  /* 120757b7 ret  */
  ESPCHK(0x120753c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157c0 @ 0x120757c0 (80 bytes, 32 insns) */
void f_120757c0(void) {
  FTRACE(0x120757c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120757c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120757c1 mov ebp, esp */
  EBP = (ESP);
  /* 120757c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120757c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120757c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120757cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120757cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120757d2:;
  /* 120757d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120757d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120757d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120757db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120757de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120757e0 je 0x120757f7 */
  if (C.zf) goto L_120757f7;
  /* 120757e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120757e5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120757e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120757ea je 0x120757f7 */
  if (C.zf) goto L_120757f7;
  /* 120757ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120757ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120757f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120757f5 jmp 0x120757d2 */
  goto L_120757d2;
L_120757f7:;
  /* 120757f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120757fa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120757fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120757ff jne 0x12075809 */
  if (!C.zf) goto L_12075809;
  /* 12075801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075804 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075807 jmp 0x1207580c */
  goto L_1207580c;
L_12075809:;
  /* 12075809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1207580c:;
  /* 1207580c mov esp, ebp */
  ESP = (EBP);
  /* 1207580e pop ebp */
  EBP = (pop32());
  /* 1207580f ret  */
  ESPCHK(0x120757c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015810 @ 0x12075810 (736 bytes, 224 insns) */
void f_12075810(void) {
  FTRACE(0x12075810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12075810 push ebp */
  push32((uint32_t)(EBP));
  /* 12075811 mov ebp, esp */
  EBP = (ESP);
  /* 12075813 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075816 push esi */
  push32((uint32_t)(ESI));
  /* 12075817 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207581b je 0x1207583c */
  if (C.zf) goto L_1207583c;
  /* 1207581d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1207581f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075822 push eax */
  push32((uint32_t)(EAX));
  /* 12075823 call 0x12075c60 */
  push32(0x12075828u); f_12075c60();
  /* 12075828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207582b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1207582e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075832 je 0x1207583c */
  if (C.zf) goto L_1207583c;
  /* 12075834 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075837 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207583a jne 0x12075844 */
  if (!C.zf) goto L_12075844;
L_1207583c:;
  /* 1207583c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1207583f jmp 0x12075aeb */
  goto L_12075aeb;
L_12075844:;
  /* 12075844 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12075847 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1207584b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1207584d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1207584f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12075850 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12075853 mov ecx, dword ptr [0x120915d4] */
  ECX = (r32((uint32_t)(0x120915d4)));
  /* 12075859 cmp ecx, dword ptr [0x120915d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120915d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207585f jne 0x12075875 */
  if (!C.zf) goto L_12075875;
  /* 12075861 mov edx, dword ptr [0x120915d4] */
  EDX = (r32((uint32_t)(0x120915d4)));
  /* 12075867 push edx */
  push32((uint32_t)(EDX));
  /* 12075868 call 0x12075b70 */
  push32(0x1207586du); f_12075b70();
  /* 1207586d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075870 mov dword ptr [0x120915d4], eax */
  w32((uint32_t)(0x120915d4), (EAX));
L_12075875:;
  /* 12075875 cmp dword ptr [0x120915d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207587c jne 0x12075935 */
  if (!C.zf) goto L_12075935;
  /* 12075882 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075886 je 0x120758a7 */
  if (C.zf) goto L_120758a7;
  /* 12075888 cmp dword ptr [0x120915dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207588f je 0x120758a7 */
  if (C.zf) goto L_120758a7;
  /* 12075891 call 0x12075310 */
  push32(0x12075896u); f_12075310();
  /* 12075896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12075898 je 0x120758a2 */
  if (C.zf) goto L_120758a2;
  /* 1207589a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1207589d jmp 0x12075aeb */
  goto L_12075aeb;
L_120758a2:;
  /* 120758a2 jmp 0x12075935 */
  goto L_12075935;
L_120758a7:;
  /* 120758a7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120758ab je 0x120758b4 */
  if (C.zf) goto L_120758b4;
  /* 120758ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120758af jmp 0x12075aeb */
  goto L_12075aeb;
L_120758b4:;
  /* 120758b4 cmp dword ptr [0x120915d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120758bb jne 0x120758f4 */
  if (!C.zf) goto L_120758f4;
  /* 120758bd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 120758c2 push 0x1208da90 */
  push32((uint32_t)(0x1208da90u));
  /* 120758c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 120758c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 120758cb call 0x12065810 */
  push32(0x120758d0u); f_12065810();
  /* 120758d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120758d3 mov dword ptr [0x120915d4], eax */
  w32((uint32_t)(0x120915d4), (EAX));
  /* 120758d8 cmp dword ptr [0x120915d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120758df jne 0x120758e9 */
  if (!C.zf) goto L_120758e9;
  /* 120758e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120758e4 jmp 0x12075aeb */
  goto L_12075aeb;
L_120758e9:;
  /* 120758e9 mov eax, dword ptr [0x120915d4] */
  EAX = (r32((uint32_t)(0x120915d4)));
  /* 120758ee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_120758f4:;
  /* 120758f4 cmp dword ptr [0x120915dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120758fb jne 0x12075935 */
  if (!C.zf) goto L_12075935;
  /* 120758fd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12075902 push 0x1208da90 */
  push32((uint32_t)(0x1208da90u));
  /* 12075907 push 2 */
  push32((uint32_t)(0x2u));
  /* 12075909 push 4 */
  push32((uint32_t)(0x4u));
  /* 1207590b call 0x12065810 */
  push32(0x12075910u); f_12065810();
  /* 12075910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075913 mov dword ptr [0x120915dc], eax */
  w32((uint32_t)(0x120915dc), (EAX));
  /* 12075918 cmp dword ptr [0x120915dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207591f jne 0x12075929 */
  if (!C.zf) goto L_12075929;
  /* 12075921 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12075924 jmp 0x12075aeb */
  goto L_12075aeb;
L_12075929:;
  /* 12075929 mov ecx, dword ptr [0x120915dc] */
  ECX = (r32((uint32_t)(0x120915dc)));
  /* 1207592f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12075935:;
  /* 12075935 mov edx, dword ptr [0x120915d4] */
  EDX = (r32((uint32_t)(0x120915d4)));
  /* 1207593b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1207593e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12075941 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075944 push eax */
  push32((uint32_t)(EAX));
  /* 12075945 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075948 push ecx */
  push32((uint32_t)(ECX));
  /* 12075949 call 0x12075af0 */
  push32(0x1207594eu); f_12075af0();
  /* 1207594e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075951 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12075954 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075958 jl 0x120759f1 */
  if ((C.sf!=C.of)) goto L_120759f1;
  /* 1207595e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075961 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075964 je 0x120759f1 */
  if (C.zf) goto L_120759f1;
  /* 1207596a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207596e je 0x120759e3 */
  if (C.zf) goto L_120759e3;
  /* 12075970 push 2 */
  push32((uint32_t)(0x2u));
  /* 12075972 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075975 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075978 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1207597b push edx */
  push32((uint32_t)(EDX));
  /* 1207597c call 0x120662a0 */
  push32(0x12075981u); f_120662a0();
  /* 12075981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075984 jmp 0x1207598f */
  goto L_1207598f;
L_12075986:;
  /* 12075986 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075989 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207598c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1207598f:;
  /* 1207598f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075992 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075995 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075999 je 0x120759b0 */
  if (C.zf) goto L_120759b0;
  /* 1207599b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1207599e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120759a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120759a4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 120759a7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 120759ab mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 120759ae jmp 0x12075986 */
  goto L_12075986;
L_120759b0:;
  /* 120759b0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 120759b5 push 0x1208da90 */
  push32((uint32_t)(0x1208da90u));
  /* 120759ba push 2 */
  push32((uint32_t)(0x2u));
  /* 120759bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120759bf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120759c2 push eax */
  push32((uint32_t)(EAX));
  /* 120759c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120759c6 push ecx */
  push32((uint32_t)(ECX));
  /* 120759c7 call 0x12065ca0 */
  push32(0x120759ccu); f_12065ca0();
  /* 120759cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120759cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120759d2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120759d6 je 0x120759e1 */
  if (C.zf) goto L_120759e1;
  /* 120759d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120759db mov dword ptr [0x120915d4], edx */
  w32((uint32_t)(0x120915d4), (EDX));
L_120759e1:;
  /* 120759e1 jmp 0x120759ef */
  goto L_120759ef;
L_120759e3:;
  /* 120759e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120759e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120759e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120759ec mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_120759ef:;
  /* 120759ef jmp 0x12075a64 */
  goto L_12075a64;
L_120759f1:;
  /* 120759f1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120759f5 jne 0x12075a5d */
  if (!C.zf) goto L_12075a5d;
  /* 120759f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120759fb jge 0x12075a05 */
  if ((C.sf==C.of)) goto L_12075a05;
  /* 120759fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075a00 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12075a02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12075a05:;
  /* 12075a05 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12075a0a push 0x1208da90 */
  push32((uint32_t)(0x1208da90u));
  /* 12075a0f push 2 */
  push32((uint32_t)(0x2u));
  /* 12075a11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075a14 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12075a1b push edx */
  push32((uint32_t)(EDX));
  /* 12075a1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075a1f push eax */
  push32((uint32_t)(EAX));
  /* 12075a20 call 0x12065ca0 */
  push32(0x12075a25u); f_12065ca0();
  /* 12075a25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075a28 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12075a2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075a2f jne 0x12075a39 */
  if (!C.zf) goto L_12075a39;
  /* 12075a31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12075a34 jmp 0x12075aeb */
  goto L_12075aeb;
L_12075a39:;
  /* 12075a39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075a3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075a3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075a42 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12075a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075a48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075a4b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12075a53 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075a56 mov dword ptr [0x120915d4], eax */
  w32((uint32_t)(0x120915d4), (EAX));
  /* 12075a5b jmp 0x12075a64 */
  goto L_12075a64;
L_12075a5d:;
  /* 12075a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075a5f jmp 0x12075aeb */
  goto L_12075aeb;
L_12075a64:;
  /* 12075a64 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075a68 je 0x12075ae9 */
  if (C.zf) goto L_12075ae9;
  /* 12075a6a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12075a6f push 0x1208da90 */
  push32((uint32_t)(0x1208da90u));
  /* 12075a74 push 2 */
  push32((uint32_t)(0x2u));
  /* 12075a76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075a79 push ecx */
  push32((uint32_t)(ECX));
  /* 12075a7a call 0x12068640 */
  push32(0x12075a7fu); f_12068640();
  /* 12075a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075a82 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075a85 push eax */
  push32((uint32_t)(EAX));
  /* 12075a86 call 0x12065810 */
  push32(0x12075a8bu); f_12065810();
  /* 12075a8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075a8e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12075a91 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075a95 je 0x12075ae9 */
  if (C.zf) goto L_12075ae9;
  /* 12075a97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075a9a push edx */
  push32((uint32_t)(EDX));
  /* 12075a9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12075a9e push eax */
  push32((uint32_t)(EAX));
  /* 12075a9f call 0x120687c0 */
  push32(0x12075aa4u); f_120687c0();
  /* 12075aa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075aa7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12075aaa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075aad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12075ab0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075ab2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12075ab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075ab8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12075abb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075abe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075ac1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12075ac4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12075ac7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12075ac9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075acb not edx */
  EDX = (~(EDX));
  /* 12075acd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12075ad0 push edx */
  push32((uint32_t)(EDX));
  /* 12075ad1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12075ad4 push eax */
  push32((uint32_t)(EAX));
  /* 12075ad5 call dword ptr [0x120942cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942cc))), 0x12075adbu);
  /* 12075adb push 2 */
  push32((uint32_t)(0x2u));
  /* 12075add mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12075ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 12075ae1 call 0x120662a0 */
  push32(0x12075ae6u); f_120662a0();
  /* 12075ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12075ae9:;
  /* 12075ae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12075aeb:;
  /* 12075aeb pop esi */
  ESI = (pop32());
  /* 12075aec mov esp, ebp */
  ESP = (EBP);
  /* 12075aee pop ebp */
  EBP = (pop32());
  /* 12075aef ret  */
  ESPCHK(0x12075810u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12075af0 (124 bytes, 47 insns) */
void f_12075af0(void) {
  FTRACE(0x12075af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12075af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12075af1 mov ebp, esp */
  EBP = (ESP);
  /* 12075af3 push ecx */
  push32((uint32_t)(ECX));
  /* 12075af4 mov eax, dword ptr [0x120915d4] */
  EAX = (r32((uint32_t)(0x120915d4)));
  /* 12075af9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12075afc jmp 0x12075b07 */
  goto L_12075b07;
L_12075afe:;
  /* 12075afe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075b01 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075b04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12075b07:;
  /* 12075b07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075b0a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075b0d je 0x12075b5a */
  if (C.zf) goto L_12075b5a;
  /* 12075b0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12075b12 push eax */
  push32((uint32_t)(EAX));
  /* 12075b13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075b16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12075b18 push edx */
  push32((uint32_t)(EDX));
  /* 12075b19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075b1c push eax */
  push32((uint32_t)(EAX));
  /* 12075b1d call 0x120752c0 */
  push32(0x12075b22u); f_120752c0();
  /* 12075b22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12075b27 jne 0x12075b58 */
  if (!C.zf) goto L_12075b58;
  /* 12075b29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075b2c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12075b2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12075b31 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12075b35 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075b38 je 0x12075b4a */
  if (C.zf) goto L_12075b4a;
  /* 12075b3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075b3d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12075b3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12075b42 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12075b46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12075b48 jne 0x12075b58 */
  if (!C.zf) goto L_12075b58;
L_12075b4a:;
  /* 12075b4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075b4d sub eax, dword ptr [0x120915d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120915d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075b53 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12075b56 jmp 0x12075b68 */
  goto L_12075b68;
L_12075b58:;
  /* 12075b58 jmp 0x12075afe */
  goto L_12075afe;
L_12075b5a:;
  /* 12075b5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075b5d sub eax, dword ptr [0x120915d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120915d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075b63 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12075b66 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12075b68:;
  /* 12075b68 mov esp, ebp */
  ESP = (EBP);
  /* 12075b6a pop ebp */
  EBP = (pop32());
  /* 12075b6b ret  */
  ESPCHK(0x12075af0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12075b70 (238 bytes, 80 insns) */
void f_12075b70(void) {
  FTRACE(0x12075b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12075b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12075b71 mov ebp, esp */
  EBP = (ESP);
  /* 12075b73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075b76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12075b7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075b80 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12075b83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075b87 jne 0x12075b90 */
  if (!C.zf) goto L_12075b90;
  /* 12075b89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075b8b jmp 0x12075c5a */
  goto L_12075c5a;
L_12075b90:;
  /* 12075b90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075b93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12075b95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075b98 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075b9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12075b9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12075ba0 je 0x12075bad */
  if (C.zf) goto L_12075bad;
  /* 12075ba2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12075ba5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075ba8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12075bab jmp 0x12075b90 */
  goto L_12075b90;
L_12075bad:;
  /* 12075bad push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12075bb2 push 0x1208da90 */
  push32((uint32_t)(0x1208da90u));
  /* 12075bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12075bb9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12075bbc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12075bc3 push eax */
  push32((uint32_t)(EAX));
  /* 12075bc4 call 0x12065810 */
  push32(0x12075bc9u); f_12065810();
  /* 12075bc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075bcc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12075bcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075bd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12075bd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075bd9 jne 0x12075be5 */
  if (!C.zf) goto L_12075be5;
  /* 12075bdb push 9 */
  push32((uint32_t)(0x9u));
  /* 12075bdd call 0x12064780 */
  push32(0x12075be2u); f_12064780();
  /* 12075be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12075be5:;
  /* 12075be5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075be8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12075beb:;
  /* 12075beb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075bee cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075bf1 je 0x12075c4e */
  if (C.zf) goto L_12075c4e;
  /* 12075bf3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12075bf8 push 0x1208da90 */
  push32((uint32_t)(0x1208da90u));
  /* 12075bfd push 2 */
  push32((uint32_t)(0x2u));
  /* 12075bff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075c02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12075c04 push edx */
  push32((uint32_t)(EDX));
  /* 12075c05 call 0x12068640 */
  push32(0x12075c0au); f_12068640();
  /* 12075c0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075c0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075c10 push eax */
  push32((uint32_t)(EAX));
  /* 12075c11 call 0x12065810 */
  push32(0x12075c16u); f_12065810();
  /* 12075c16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075c19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075c1c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12075c1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075c21 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075c24 je 0x12075c3a */
  if (C.zf) goto L_12075c3a;
  /* 12075c26 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075c29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12075c2b push ecx */
  push32((uint32_t)(ECX));
  /* 12075c2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075c2f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12075c31 push eax */
  push32((uint32_t)(EAX));
  /* 12075c32 call 0x120687c0 */
  push32(0x12075c37u); f_120687c0();
  /* 12075c37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12075c3a:;
  /* 12075c3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12075c3d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075c40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12075c43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075c46 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075c49 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12075c4c jmp 0x12075beb */
  goto L_12075beb;
L_12075c4e:;
  /* 12075c4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12075c51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12075c57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12075c5a:;
  /* 12075c5a mov esp, ebp */
  ESP = (EBP);
  /* 12075c5c pop ebp */
  EBP = (pop32());
  /* 12075c5d ret  */
  ESPCHK(0x12075b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c60 @ 0x12075c60 (237 bytes, 81 insns) */
void f_12075c60(void) {
  FTRACE(0x12075c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12075c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12075c61 mov ebp, esp */
  EBP = (ESP);
  /* 12075c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12075c64 cmp dword ptr [0x12092d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12092d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075c6b jne 0x12075c82 */
  if (!C.zf) goto L_12075c82;
  /* 12075c6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12075c70 push eax */
  push32((uint32_t)(EAX));
  /* 12075c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075c74 push ecx */
  push32((uint32_t)(ECX));
  /* 12075c75 call 0x12075d60 */
  push32(0x12075c7au); f_12075d60();
  /* 12075c7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075c7d jmp 0x12075d49 */
  goto L_12075d49;
L_12075c82:;
  /* 12075c82 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12075c84 call 0x12069210 */
  push32(0x12075c89u); f_12069210();
  /* 12075c89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075c8c jmp 0x12075c97 */
  goto L_12075c97;
L_12075c8e:;
  /* 12075c8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075c91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075c94 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12075c97:;
  /* 12075c97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075c9a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12075c9e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12075ca2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075ca5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12075cab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12075cad je 0x12075d2b */
  if (C.zf) goto L_12075d2b;
  /* 12075caf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075cb2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12075cb7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12075cb9 mov cl, byte ptr [eax + 0x12092e41] */
  CL = (r8((uint32_t)(EAX + 0x12092e41)));
  /* 12075cbf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12075cc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12075cc4 je 0x12075d16 */
  if (C.zf) goto L_12075d16;
  /* 12075cc6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075cc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075ccc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12075ccf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075cd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12075cd4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12075cd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12075cd8 jne 0x12075ce8 */
  if (!C.zf) goto L_12075ce8;
  /* 12075cda push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12075cdc call 0x120692b0 */
  push32(0x12075ce1u); f_120692b0();
  /* 12075ce1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075ce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075ce6 jmp 0x12075d49 */
  goto L_12075d49;
L_12075ce8:;
  /* 12075ce8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075ceb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12075cf1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12075cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075cf7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12075cf9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12075cfb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12075cfd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075d00 jne 0x12075d14 */
  if (!C.zf) goto L_12075d14;
  /* 12075d02 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12075d04 call 0x120692b0 */
  push32(0x12075d09u); f_120692b0();
  /* 12075d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075d0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075d0f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12075d12 jmp 0x12075d49 */
  goto L_12075d49;
L_12075d14:;
  /* 12075d14 jmp 0x12075d26 */
  goto L_12075d26;
L_12075d16:;
  /* 12075d16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075d19 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12075d1f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075d22 jne 0x12075d26 */
  if (!C.zf) goto L_12075d26;
  /* 12075d24 jmp 0x12075d2b */
  goto L_12075d2b;
L_12075d26:;
  /* 12075d26 jmp 0x12075c8e */
  goto L_12075c8e;
L_12075d2b:;
  /* 12075d2b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12075d2d call 0x120692b0 */
  push32(0x12075d32u); f_120692b0();
  /* 12075d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12075d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12075d38 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12075d3d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12075d40 jne 0x12075d47 */
  if (!C.zf) goto L_12075d47;
  /* 12075d42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12075d45 jmp 0x12075d49 */
  goto L_12075d49;
L_12075d47:;
  /* 12075d47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12075d49:;
  /* 12075d49 mov esp, ebp */
  ESP = (EBP);
  /* 12075d4b pop ebp */
  EBP = (pop32());
  /* 12075d4c ret  */
  ESPCHK(0x12075c60u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12075d60 (193 bytes, 87 insns) */
void f_12075d60(void) {
  FTRACE(0x12075d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12075d60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075d62 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12075d66 push ebx */
  push32((uint32_t)(EBX));
  /* 12075d67 mov ebx, eax */
  EBX = (EAX);
  /* 12075d69 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12075d6c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12075d70 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12075d76 je 0x12075d8b */
  if (C.zf) goto L_12075d8b;
L_12075d78:;
  /* 12075d78 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12075d7a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12075d7b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12075d7d je 0x12075d50 */
  if (C.zf) { jmp_ind(0x12075d50u); return; }
  /* 12075d7f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12075d81 je 0x12075dd4 */
  if (C.zf) goto L_12075dd4;
  /* 12075d83 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12075d89 jne 0x12075d78 */
  if (!C.zf) goto L_12075d78;
L_12075d8b:;
  /* 12075d8b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12075d8d push edi */
  push32((uint32_t)(EDI));
  /* 12075d8e mov eax, ebx */
  EAX = (EBX);
  /* 12075d90 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12075d93 push esi */
  push32((uint32_t)(ESI));
  /* 12075d94 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12075d96:;
  /* 12075d96 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12075d98 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12075d9d mov eax, ecx */
  EAX = (ECX);
  /* 12075d9f mov esi, edi */
  ESI = (EDI);
  /* 12075da1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12075da3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12075da5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12075da7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12075daa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12075dad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12075daf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12075db1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12075db4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12075dba jne 0x12075dd8 */
  if (!C.zf) goto L_12075dd8;
  /* 12075dbc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12075dc1 je 0x12075d96 */
  if (C.zf) goto L_12075d96;
  /* 12075dc3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12075dc8 jne 0x12075dd2 */
  if (!C.zf) goto L_12075dd2;
  /* 12075dca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12075dd0 jne 0x12075d96 */
  if (!C.zf) goto L_12075d96;
L_12075dd2:;
  /* 12075dd2 pop esi */
  ESI = (pop32());
  /* 12075dd3 pop edi */
  EDI = (pop32());
L_12075dd4:;
  /* 12075dd4 pop ebx */
  EBX = (pop32());
  /* 12075dd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12075dd7 ret  */
  ESPCHK(0x12075d60u, _esp0);
  ESP += 4; return;
L_12075dd8:;
  /* 12075dd8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12075ddb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12075ddd je 0x12075e15 */
  if (C.zf) goto L_12075e15;
  /* 12075ddf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12075de1 je 0x12075dd2 */
  if (C.zf) goto L_12075dd2;
  /* 12075de3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12075de5 je 0x12075e0e */
  if (C.zf) goto L_12075e0e;
  /* 12075de7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12075de9 je 0x12075dd2 */
  if (C.zf) goto L_12075dd2;
  /* 12075deb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12075dee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12075df0 je 0x12075e07 */
  if (C.zf) goto L_12075e07;
  /* 12075df2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12075df4 je 0x12075dd2 */
  if (C.zf) goto L_12075dd2;
  /* 12075df6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12075df8 je 0x12075e00 */
  if (C.zf) goto L_12075e00;
  /* 12075dfa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12075dfc je 0x12075dd2 */
  if (C.zf) goto L_12075dd2;
  /* 12075dfe jmp 0x12075d96 */
  goto L_12075d96;
L_12075e00:;
  /* 12075e00 pop esi */
  ESI = (pop32());
  /* 12075e01 pop edi */
  EDI = (pop32());
  /* 12075e02 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12075e05 pop ebx */
  EBX = (pop32());
  /* 12075e06 ret  */
  ESPCHK(0x12075d60u, _esp0);
  ESP += 4; return;
L_12075e07:;
  /* 12075e07 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12075e0a pop esi */
  ESI = (pop32());
  /* 12075e0b pop edi */
  EDI = (pop32());
  /* 12075e0c pop ebx */
  EBX = (pop32());
  /* 12075e0d ret  */
  ESPCHK(0x12075d60u, _esp0);
  ESP += 4; return;
L_12075e0e:;
  /* 12075e0e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12075e11 pop esi */
  ESI = (pop32());
  /* 12075e12 pop edi */
  EDI = (pop32());
  /* 12075e13 pop ebx */
  EBX = (pop32());
  /* 12075e14 ret  */
  ESPCHK(0x12075d60u, _esp0);
  ESP += 4; return;
L_12075e15:;
  /* 12075e15 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12075e18 pop esi */
  ESI = (pop32());
  /* 12075e19 pop edi */
  EDI = (pop32());
  /* 12075e1a pop ebx */
  EBX = (pop32());
  /* 12075e1b ret  */
  ESPCHK(0x12075d60u, _esp0);
  ESP += 4; return;
  /* 12075e1c jmp dword ptr [0x12094378] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12094378)))); return;
}

/* RtlUnwind @ 0x12075f6c (6 bytes, 1 insns) */
void f_12075f6c(void) {
  FTRACE(0x12075f6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12075f6c jmp dword ptr [0x12094304] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12094304)))); return;
}

