#include "recomp.h"

/* __ftol @ 0x119b55ec (39 bytes, 16 insns) */
void f_119b55ec(void) {
  FTRACE(0x119b55ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b55ec push ebp */
  push32((uint32_t)(EBP));
  /* 119b55ed mov ebp, esp */
  EBP = (ESP);
  /* 119b55ef add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b55f2 wait  */
  /* wait (no observable integer/reg state) */
  /* 119b55f3 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 119b55f6 wait  */
  /* wait (no observable integer/reg state) */
  /* 119b55f7 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 119b55fb or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 119b55fe mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 119b5602 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 119b5605 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 119b5608 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 119b560b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b560e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b5611 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119b5612 ret  */
  ESPCHK(0x119b55ecu, _esp0);
  ESP += 4; return;
}

/* FUN_10005620 @ 0x119b5620 (313 bytes, 78 insns) */
void f_119b5620(void) {
  FTRACE(0x119b5620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b5620 push ebp */
  push32((uint32_t)(EBP));
  /* 119b5621 mov ebp, esp */
  EBP = (ESP);
  /* 119b5623 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5627 jne 0x119b56e7 */
  if (!C.zf) goto L_119b56e7;
  /* 119b562d call dword ptr [0x119e93b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93b4))), 0x119b5633u);
  /* 119b5633 mov dword ptr [0x119e710c], eax */
  w32((uint32_t)(0x119e710c), (EAX));
  /* 119b5638 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b563a call 0x119baa00 */
  push32(0x119b563fu); f_119baa00();
  /* 119b563f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5642 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b5644 jne 0x119b564d */
  if (!C.zf) goto L_119b564d;
  /* 119b5646 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b5648 jmp 0x119b5755 */
  goto L_119b5755;
L_119b564d:;
  /* 119b564d mov eax, dword ptr [0x119e710c] */
  EAX = (r32((uint32_t)(0x119e710c)));
  /* 119b5652 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 119b5655 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b565a mov dword ptr [0x119e7118], eax */
  w32((uint32_t)(0x119e7118), (EAX));
  /* 119b565f mov ecx, dword ptr [0x119e710c] */
  ECX = (r32((uint32_t)(0x119e710c)));
  /* 119b5665 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b566b mov dword ptr [0x119e7114], ecx */
  w32((uint32_t)(0x119e7114), (ECX));
  /* 119b5671 mov edx, dword ptr [0x119e7114] */
  EDX = (r32((uint32_t)(0x119e7114)));
  /* 119b5677 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 119b567a add edx, dword ptr [0x119e7118] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119e7118))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5680 mov dword ptr [0x119e7110], edx */
  w32((uint32_t)(0x119e7110), (EDX));
  /* 119b5686 mov eax, dword ptr [0x119e710c] */
  EAX = (r32((uint32_t)(0x119e710c)));
  /* 119b568b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119b568e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b5693 mov dword ptr [0x119e710c], eax */
  w32((uint32_t)(0x119e710c), (EAX));
  /* 119b5698 call 0x119b7b70 */
  push32(0x119b569du); f_119b7b70();
  /* 119b569d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b569f jne 0x119b56ad */
  if (!C.zf) goto L_119b56ad;
  /* 119b56a1 call 0x119baa50 */
  push32(0x119b56a6u); f_119baa50();
  /* 119b56a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b56a8 jmp 0x119b5755 */
  goto L_119b5755;
L_119b56ad:;
  /* 119b56ad call dword ptr [0x119e93b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93b0))), 0x119b56b3u);
  /* 119b56b3 mov dword ptr [0x119e8c48], eax */
  w32((uint32_t)(0x119e8c48), (EAX));
  /* 119b56b8 call 0x119ba7e0 */
  push32(0x119b56bdu); f_119ba7e0();
  /* 119b56bd mov dword ptr [0x119e70f4], eax */
  w32((uint32_t)(0x119e70f4), (EAX));
  /* 119b56c2 call 0x119b7e20 */
  push32(0x119b56c7u); f_119b7e20();
  /* 119b56c7 call 0x119ba2d0 */
  push32(0x119b56ccu); f_119ba2d0();
  /* 119b56cc call 0x119ba180 */
  push32(0x119b56d1u); f_119ba180();
  /* 119b56d1 call 0x119b7970 */
  push32(0x119b56d6u); f_119b7970();
  /* 119b56d6 mov ecx, dword ptr [0x119e70f0] */
  ECX = (r32((uint32_t)(0x119e70f0)));
  /* 119b56dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b56df mov dword ptr [0x119e70f0], ecx */
  w32((uint32_t)(0x119e70f0), (ECX));
  /* 119b56e5 jmp 0x119b5750 */
  goto L_119b5750;
L_119b56e7:;
  /* 119b56e7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b56eb jne 0x119b5740 */
  if (!C.zf) goto L_119b5740;
  /* 119b56ed cmp dword ptr [0x119e70f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e70f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b56f4 jle 0x119b573a */
  if ((C.zf||C.sf!=C.of)) goto L_119b573a;
  /* 119b56f6 mov edx, dword ptr [0x119e70f0] */
  EDX = (r32((uint32_t)(0x119e70f0)));
  /* 119b56fc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b56ff mov dword ptr [0x119e70f0], edx */
  w32((uint32_t)(0x119e70f0), (EDX));
  /* 119b5705 cmp dword ptr [0x119e7144], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7144))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b570c jne 0x119b5713 */
  if (!C.zf) goto L_119b5713;
  /* 119b570e call 0x119b79f0 */
  push32(0x119b5713u); f_119b79f0();
L_119b5713:;
  /* 119b5713 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119b5715 call 0x119b9720 */
  push32(0x119b571au); f_119b9720();
  /* 119b571a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b571d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 119b5720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b5722 je 0x119b5729 */
  if (C.zf) goto L_119b5729;
  /* 119b5724 call 0x119ba030 */
  push32(0x119b5729u); f_119ba030();
L_119b5729:;
  /* 119b5729 call 0x119b8150 */
  push32(0x119b572eu); f_119b8150();
  /* 119b572e call 0x119b7c00 */
  push32(0x119b5733u); f_119b7c00();
  /* 119b5733 call 0x119baa50 */
  push32(0x119b5738u); f_119baa50();
  /* 119b5738 jmp 0x119b573e */
  goto L_119b573e;
L_119b573a:;
  /* 119b573a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b573c jmp 0x119b5755 */
  goto L_119b5755;
L_119b573e:;
  /* 119b573e jmp 0x119b5750 */
  goto L_119b5750;
L_119b5740:;
  /* 119b5740 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5744 jne 0x119b5750 */
  if (!C.zf) goto L_119b5750;
  /* 119b5746 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b5748 call 0x119b7cf0 */
  push32(0x119b574du); f_119b7cf0();
  /* 119b574d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5750:;
  /* 119b5750 mov eax, 1 */
  EAX = (0x1u);
L_119b5755:;
  /* 119b5755 pop ebp */
  EBP = (pop32());
  /* 119b5756 ret 0xc */
  ESPCHK(0x119b5620u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x119b5760 (243 bytes, 86 insns) */
void f_119b5760(void) {
  FTRACE(0x119b5760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b5760 push ebp */
  push32((uint32_t)(EBP));
  /* 119b5761 mov ebp, esp */
  EBP = (ESP);
  /* 119b5763 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5764 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119b576b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b576f jne 0x119b5781 */
  if (!C.zf) goto L_119b5781;
  /* 119b5771 cmp dword ptr [0x119e70f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e70f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5778 jne 0x119b5781 */
  if (!C.zf) goto L_119b5781;
  /* 119b577a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b577c jmp 0x119b584d */
  goto L_119b584d;
L_119b5781:;
  /* 119b5781 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5785 je 0x119b578d */
  if (C.zf) goto L_119b578d;
  /* 119b5787 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b578b jne 0x119b57cf */
  if (!C.zf) goto L_119b57cf;
L_119b578d:;
  /* 119b578d cmp dword ptr [0x119e8c58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8c58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5794 je 0x119b57ab */
  if (C.zf) goto L_119b57ab;
  /* 119b5796 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b5799 push eax */
  push32((uint32_t)(EAX));
  /* 119b579a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b579d push ecx */
  push32((uint32_t)(ECX));
  /* 119b579e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b57a1 push edx */
  push32((uint32_t)(EDX));
  /* 119b57a2 call dword ptr [0x119e8c58] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e8c58))), 0x119b57a8u);
  /* 119b57a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119b57ab:;
  /* 119b57ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b57af je 0x119b57c5 */
  if (C.zf) goto L_119b57c5;
  /* 119b57b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b57b4 push eax */
  push32((uint32_t)(EAX));
  /* 119b57b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b57b8 push ecx */
  push32((uint32_t)(ECX));
  /* 119b57b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b57bc push edx */
  push32((uint32_t)(EDX));
  /* 119b57bd call 0x119b5620 */
  push32(0x119b57c2u); f_119b5620();
  /* 119b57c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119b57c5:;
  /* 119b57c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b57c9 jne 0x119b57cf */
  if (!C.zf) goto L_119b57cf;
  /* 119b57cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b57cd jmp 0x119b584d */
  goto L_119b584d;
L_119b57cf:;
  /* 119b57cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b57d2 push eax */
  push32((uint32_t)(EAX));
  /* 119b57d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b57d6 push ecx */
  push32((uint32_t)(ECX));
  /* 119b57d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b57da push edx */
  push32((uint32_t)(EDX));
  /* 119b57db call 0x119b1037 */
  push32(0x119b57e0u); f_119b1037();
  /* 119b57e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b57e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b57e7 jne 0x119b57fe */
  if (!C.zf) goto L_119b57fe;
  /* 119b57e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b57ed jne 0x119b57fe */
  if (!C.zf) goto L_119b57fe;
  /* 119b57ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b57f2 push eax */
  push32((uint32_t)(EAX));
  /* 119b57f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b57f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b57f8 push ecx */
  push32((uint32_t)(ECX));
  /* 119b57f9 call 0x119b5620 */
  push32(0x119b57feu); f_119b5620();
L_119b57fe:;
  /* 119b57fe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5802 je 0x119b580a */
  if (C.zf) goto L_119b580a;
  /* 119b5804 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5808 jne 0x119b584a */
  if (!C.zf) goto L_119b584a;
L_119b580a:;
  /* 119b580a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b580d push edx */
  push32((uint32_t)(EDX));
  /* 119b580e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b5811 push eax */
  push32((uint32_t)(EAX));
  /* 119b5812 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5815 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5816 call 0x119b5620 */
  push32(0x119b581bu); f_119b5620();
  /* 119b581b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b581d jne 0x119b5826 */
  if (!C.zf) goto L_119b5826;
  /* 119b581f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119b5826:;
  /* 119b5826 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b582a je 0x119b584a */
  if (C.zf) goto L_119b584a;
  /* 119b582c cmp dword ptr [0x119e8c58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8c58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5833 je 0x119b584a */
  if (C.zf) goto L_119b584a;
  /* 119b5835 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b5838 push edx */
  push32((uint32_t)(EDX));
  /* 119b5839 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b583c push eax */
  push32((uint32_t)(EAX));
  /* 119b583d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5840 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5841 call dword ptr [0x119e8c58] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e8c58))), 0x119b5847u);
  /* 119b5847 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119b584a:;
  /* 119b584a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119b584d:;
  /* 119b584d mov esp, ebp */
  ESP = (EBP);
  /* 119b584f pop ebp */
  EBP = (pop32());
  /* 119b5850 ret 0xc */
  ESPCHK(0x119b5760u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x119b5860 (58 bytes, 18 insns) */
void f_119b5860(void) {
  FTRACE(0x119b5860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b5860 push ebp */
  push32((uint32_t)(EBP));
  /* 119b5861 mov ebp, esp */
  EBP = (ESP);
  /* 119b5863 cmp dword ptr [0x119e70fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e70fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b586a je 0x119b587e */
  if (C.zf) goto L_119b587e;
  /* 119b586c cmp dword ptr [0x119e70fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e70fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5873 jne 0x119b5883 */
  if (!C.zf) goto L_119b5883;
  /* 119b5875 cmp dword ptr [0x119e7100], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7100))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b587c jne 0x119b5883 */
  if (!C.zf) goto L_119b5883;
L_119b587e:;
  /* 119b587e call 0x119baaf0 */
  push32(0x119b5883u); f_119baaf0();
L_119b5883:;
  /* 119b5883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5886 push eax */
  push32((uint32_t)(EAX));
  /* 119b5887 call 0x119bab40 */
  push32(0x119b588cu); f_119bab40();
  /* 119b588c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b588f push 0xff */
  push32((uint32_t)(0xffu));
  /* 119b5894 call dword ptr [0x119e4a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e4a44))), 0x119b589au);
  /* 119b589a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b589d pop ebp */
  EBP = (pop32());
  /* 119b589e ret  */
  ESPCHK(0x119b5860u, _esp0);
  ESP += 4; return;
}

/* FUN_100058a0 @ 0x119b58a0 (11 bytes, 5 insns) */
void f_119b58a0(void) {
  FTRACE(0x119b58a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b58a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b58a1 mov ebp, esp */
  EBP = (ESP);
  /* 119b58a3 call dword ptr [0x119e93b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93b8))), 0x119b58a9u);
  /* 119b58a9 pop ebp */
  EBP = (pop32());
  /* 119b58aa ret  */
  ESPCHK(0x119b58a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058b0 @ 0x119b58b0 (87 bytes, 30 insns) */
void f_119b58b0(void) {
  FTRACE(0x119b58b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b58b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b58b1 mov ebp, esp */
  EBP = (ESP);
  /* 119b58b3 push ecx */
  push32((uint32_t)(ECX));
  /* 119b58b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b58b8 jl 0x119b58c0 */
  if ((C.sf!=C.of)) goto L_119b58c0;
  /* 119b58ba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b58be jl 0x119b58c5 */
  if ((C.sf!=C.of)) goto L_119b58c5;
L_119b58c0:;
  /* 119b58c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b58c3 jmp 0x119b5903 */
  goto L_119b5903;
L_119b58c5:;
  /* 119b58c5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b58c9 jne 0x119b58d7 */
  if (!C.zf) goto L_119b58d7;
  /* 119b58cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b58ce mov eax, dword ptr [eax*4 + 0x119e4a4c] */
  EAX = (r32((uint32_t)(EAX*4 + 0x119e4a4c)));
  /* 119b58d5 jmp 0x119b5903 */
  goto L_119b5903;
L_119b58d7:;
  /* 119b58d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b58da and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 119b58dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b58df je 0x119b58e6 */
  if (C.zf) goto L_119b58e6;
  /* 119b58e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b58e4 jmp 0x119b5903 */
  goto L_119b5903;
L_119b58e6:;
  /* 119b58e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b58e9 mov eax, dword ptr [edx*4 + 0x119e4a4c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119e4a4c)));
  /* 119b58f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b58f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b58f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b58f9 mov dword ptr [ecx*4 + 0x119e4a4c], edx */
  w32((uint32_t)(ECX*4 + 0x119e4a4c), (EDX));
  /* 119b5900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119b5903:;
  /* 119b5903 mov esp, ebp */
  ESP = (EBP);
  /* 119b5905 pop ebp */
  EBP = (pop32());
  /* 119b5906 ret  */
  ESPCHK(0x119b58b0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x119b5910 (126 bytes, 38 insns) */
void f_119b5910(void) {
  FTRACE(0x119b5910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b5910 push ebp */
  push32((uint32_t)(EBP));
  /* 119b5911 mov ebp, esp */
  EBP = (ESP);
  /* 119b5913 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5914 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5918 jl 0x119b5920 */
  if ((C.sf!=C.of)) goto L_119b5920;
  /* 119b591a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b591e jl 0x119b5927 */
  if ((C.sf!=C.of)) goto L_119b5927;
L_119b5920:;
  /* 119b5920 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 119b5925 jmp 0x119b598a */
  goto L_119b598a;
L_119b5927:;
  /* 119b5927 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b592b jne 0x119b5939 */
  if (!C.zf) goto L_119b5939;
  /* 119b592d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5930 mov eax, dword ptr [eax*4 + 0x119e4a58] */
  EAX = (r32((uint32_t)(EAX*4 + 0x119e4a58)));
  /* 119b5937 jmp 0x119b598a */
  goto L_119b598a;
L_119b5939:;
  /* 119b5939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b593c mov edx, dword ptr [ecx*4 + 0x119e4a58] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e4a58)));
  /* 119b5943 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b5946 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b594a jne 0x119b5960 */
  if (!C.zf) goto L_119b5960;
  /* 119b594c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 119b594e call dword ptr [0x119e93bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93bc))), 0x119b5954u);
  /* 119b5954 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5957 mov dword ptr [ecx*4 + 0x119e4a58], eax */
  w32((uint32_t)(ECX*4 + 0x119e4a58), (EAX));
  /* 119b595e jmp 0x119b5987 */
  goto L_119b5987;
L_119b5960:;
  /* 119b5960 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5964 jne 0x119b597a */
  if (!C.zf) goto L_119b597a;
  /* 119b5966 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 119b5968 call dword ptr [0x119e93bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93bc))), 0x119b596eu);
  /* 119b596e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5971 mov dword ptr [edx*4 + 0x119e4a58], eax */
  w32((uint32_t)(EDX*4 + 0x119e4a58), (EAX));
  /* 119b5978 jmp 0x119b5987 */
  goto L_119b5987;
L_119b597a:;
  /* 119b597a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b597d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b5980 mov dword ptr [eax*4 + 0x119e4a58], ecx */
  w32((uint32_t)(EAX*4 + 0x119e4a58), (ECX));
L_119b5987:;
  /* 119b5987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119b598a:;
  /* 119b598a mov esp, ebp */
  ESP = (EBP);
  /* 119b598c pop ebp */
  EBP = (pop32());
  /* 119b598d ret  */
  ESPCHK(0x119b5910u, _esp0);
  ESP += 4; return;
}

/* FUN_10005990 @ 0x119b5990 (28 bytes, 11 insns) */
void f_119b5990(void) {
  FTRACE(0x119b5990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b5990 push ebp */
  push32((uint32_t)(EBP));
  /* 119b5991 mov ebp, esp */
  EBP = (ESP);
  /* 119b5993 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5994 mov eax, dword ptr [0x119e8c3c] */
  EAX = (r32((uint32_t)(0x119e8c3c)));
  /* 119b5999 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b599c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b599f mov dword ptr [0x119e8c3c], ecx */
  w32((uint32_t)(0x119e8c3c), (ECX));
  /* 119b59a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b59a8 mov esp, ebp */
  ESP = (EBP);
  /* 119b59aa pop ebp */
  EBP = (pop32());
  /* 119b59ab ret  */
  ESPCHK(0x119b5990u, _esp0);
  ESP += 4; return;
}

/* FUN_100059b0 @ 0x119b59b0 (912 bytes, 248 insns) */
void f_119b59b0(void) {
  FTRACE(0x119b59b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b59b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b59b1 mov ebp, esp */
  EBP = (ESP);
  /* 119b59b3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 119b59b8 call 0x119bb3b0 */
  push32(0x119b59bdu); f_119bb3b0();
  /* 119b59bd push edi */
  push32((uint32_t)(EDI));
  /* 119b59be mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 119b59c5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 119b59ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b59cc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 119b59d2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119b59d4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 119b59d6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 119b59d7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 119b59de mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 119b59e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b59e5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 119b59eb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119b59ed stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 119b59ef stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 119b59f0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 119b59f7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 119b59fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b59fe lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 119b5a04 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119b5a06 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 119b5a08 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 119b5a09 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 119b5a0c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 119b5a12 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5a16 jl 0x119b5a1e */
  if ((C.sf!=C.of)) goto L_119b5a1e;
  /* 119b5a18 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5a1c jl 0x119b5a26 */
  if ((C.sf!=C.of)) goto L_119b5a26;
L_119b5a1e:;
  /* 119b5a1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b5a21 jmp 0x119b5d3b */
  goto L_119b5d3b;
L_119b5a26:;
  /* 119b5a26 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5a2a jne 0x119b5ad0 */
  if (!C.zf) goto L_119b5ad0;
  /* 119b5a30 push 0x119e4a48 */
  push32((uint32_t)(0x119e4a48u));
  /* 119b5a35 call dword ptr [0x119e93d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93d4))), 0x119b5a3bu);
  /* 119b5a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b5a3d jle 0x119b5ad0 */
  if ((C.zf||C.sf!=C.of)) goto L_119b5ad0;
  /* 119b5a43 cmp dword ptr [0x119e7104], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7104))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5a4a jne 0x119b5a8e */
  if (!C.zf) goto L_119b5a8e;
  /* 119b5a4c push 0x119e14cc */
  push32((uint32_t)(0x119e14ccu));
  /* 119b5a51 call dword ptr [0x119e93d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93d0))), 0x119b5a57u);
  /* 119b5a57 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 119b5a5d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5a64 je 0x119b5a86 */
  if (C.zf) goto L_119b5a86;
  /* 119b5a66 push 0x119e14c0 */
  push32((uint32_t)(0x119e14c0u));
  /* 119b5a6b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 119b5a71 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5a72 call dword ptr [0x119e93cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93cc))), 0x119b5a78u);
  /* 119b5a78 mov dword ptr [0x119e7104], eax */
  w32((uint32_t)(0x119e7104), (EAX));
  /* 119b5a7d cmp dword ptr [0x119e7104], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7104))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5a84 jne 0x119b5a8e */
  if (!C.zf) goto L_119b5a8e;
L_119b5a86:;
  /* 119b5a86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b5a89 jmp 0x119b5d3b */
  goto L_119b5d3b;
L_119b5a8e:;
  /* 119b5a8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b5a91 push edx */
  push32((uint32_t)(EDX));
  /* 119b5a92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b5a95 push eax */
  push32((uint32_t)(EAX));
  /* 119b5a96 push 0x119e148c */
  push32((uint32_t)(0x119e148cu));
  /* 119b5a9b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 119b5aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5aa2 call dword ptr [0x119e7104] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7104))), 0x119b5aa8u);
  /* 119b5aa8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5aab lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 119b5ab1 push edx */
  push32((uint32_t)(EDX));
  /* 119b5ab2 call dword ptr [0x119e93c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c8))), 0x119b5ab8u);
  /* 119b5ab8 push 0x119e4a48 */
  push32((uint32_t)(0x119e4a48u));
  /* 119b5abd call dword ptr [0x119e93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c4))), 0x119b5ac3u);
  /* 119b5ac3 call 0x119b58a0 */
  push32(0x119b5ac8u); f_119b58a0();
  /* 119b5ac8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b5acb jmp 0x119b5d3b */
  goto L_119b5d3b;
L_119b5ad0:;
  /* 119b5ad0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5ad4 je 0x119b5b0d */
  if (C.zf) goto L_119b5b0d;
  /* 119b5ad6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 119b5adc push eax */
  push32((uint32_t)(EAX));
  /* 119b5add mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b5ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5ae1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 119b5ae6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 119b5aec push edx */
  push32((uint32_t)(EDX));
  /* 119b5aed call 0x119bb2b0 */
  push32(0x119b5af2u); f_119bb2b0();
  /* 119b5af2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5af5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b5af7 jge 0x119b5b0d */
  if ((C.sf==C.of)) goto L_119b5b0d;
  /* 119b5af9 push 0x119e1460 */
  push32((uint32_t)(0x119e1460u));
  /* 119b5afe lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 119b5b04 push eax */
  push32((uint32_t)(EAX));
  /* 119b5b05 call 0x119bb1c0 */
  push32(0x119b5b0au); f_119bb1c0();
  /* 119b5b0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5b0d:;
  /* 119b5b0d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5b11 jne 0x119b5b45 */
  if (!C.zf) goto L_119b5b45;
  /* 119b5b13 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5b17 je 0x119b5b25 */
  if (C.zf) goto L_119b5b25;
  /* 119b5b19 mov dword ptr [ebp - 0x3028], 0x119e144c */
  w32((uint32_t)(EBP + -0x3028), (0x119e144cu));
  /* 119b5b23 jmp 0x119b5b2f */
  goto L_119b5b2f;
L_119b5b25:;
  /* 119b5b25 mov dword ptr [ebp - 0x3028], 0x119e1438 */
  w32((uint32_t)(EBP + -0x3028), (0x119e1438u));
L_119b5b2f:;
  /* 119b5b2f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 119b5b35 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5b36 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 119b5b3c push edx */
  push32((uint32_t)(EDX));
  /* 119b5b3d call 0x119bb1c0 */
  push32(0x119b5b42u); f_119bb1c0();
  /* 119b5b42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5b45:;
  /* 119b5b45 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 119b5b4b push eax */
  push32((uint32_t)(EAX));
  /* 119b5b4c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 119b5b52 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5b53 call 0x119bb1d0 */
  push32(0x119b5b58u); f_119bb1d0();
  /* 119b5b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5b5b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5b5f jne 0x119b5b9a */
  if (!C.zf) goto L_119b5b9a;
  /* 119b5b61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5b64 mov eax, dword ptr [edx*4 + 0x119e4a4c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119e4a4c)));
  /* 119b5b6b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 119b5b6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b5b70 je 0x119b5b86 */
  if (C.zf) goto L_119b5b86;
  /* 119b5b72 push 0x119e1434 */
  push32((uint32_t)(0x119e1434u));
  /* 119b5b77 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 119b5b7d push ecx */
  push32((uint32_t)(ECX));
  /* 119b5b7e call 0x119bb1d0 */
  push32(0x119b5b83u); f_119bb1d0();
  /* 119b5b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5b86:;
  /* 119b5b86 push 0x119e1430 */
  push32((uint32_t)(0x119e1430u));
  /* 119b5b8b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 119b5b91 push edx */
  push32((uint32_t)(EDX));
  /* 119b5b92 call 0x119bb1d0 */
  push32(0x119b5b97u); f_119bb1d0();
  /* 119b5b97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5b9a:;
  /* 119b5b9a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5b9e je 0x119b5be2 */
  if (C.zf) goto L_119b5be2;
  /* 119b5ba0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 119b5ba6 push eax */
  push32((uint32_t)(EAX));
  /* 119b5ba7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b5baa push ecx */
  push32((uint32_t)(ECX));
  /* 119b5bab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b5bae push edx */
  push32((uint32_t)(EDX));
  /* 119b5baf push 0x119e1424 */
  push32((uint32_t)(0x119e1424u));
  /* 119b5bb4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119b5bb9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 119b5bbf push eax */
  push32((uint32_t)(EAX));
  /* 119b5bc0 call 0x119bb0c0 */
  push32(0x119b5bc5u); f_119bb0c0();
  /* 119b5bc5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5bc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b5bca jge 0x119b5be0 */
  if ((C.sf==C.of)) goto L_119b5be0;
  /* 119b5bcc push 0x119e1460 */
  push32((uint32_t)(0x119e1460u));
  /* 119b5bd1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 119b5bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5bd8 call 0x119bb1c0 */
  push32(0x119b5bddu); f_119bb1c0();
  /* 119b5bdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5be0:;
  /* 119b5be0 jmp 0x119b5bf8 */
  goto L_119b5bf8;
L_119b5be2:;
  /* 119b5be2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 119b5be8 push edx */
  push32((uint32_t)(EDX));
  /* 119b5be9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 119b5bef push eax */
  push32((uint32_t)(EAX));
  /* 119b5bf0 call 0x119bb1c0 */
  push32(0x119b5bf5u); f_119bb1c0();
  /* 119b5bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5bf8:;
  /* 119b5bf8 cmp dword ptr [0x119e8c3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8c3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5bff je 0x119b5c3c */
  if (C.zf) goto L_119b5c3c;
  /* 119b5c01 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 119b5c07 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5c08 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 119b5c0e push edx */
  push32((uint32_t)(EDX));
  /* 119b5c0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5c12 push eax */
  push32((uint32_t)(EAX));
  /* 119b5c13 call dword ptr [0x119e8c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e8c3c))), 0x119b5c19u);
  /* 119b5c19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b5c1e je 0x119b5c3c */
  if (C.zf) goto L_119b5c3c;
  /* 119b5c20 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5c24 jne 0x119b5c31 */
  if (!C.zf) goto L_119b5c31;
  /* 119b5c26 push 0x119e4a48 */
  push32((uint32_t)(0x119e4a48u));
  /* 119b5c2b call dword ptr [0x119e93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c4))), 0x119b5c31u);
L_119b5c31:;
  /* 119b5c31 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 119b5c37 jmp 0x119b5d3b */
  goto L_119b5d3b;
L_119b5c3c:;
  /* 119b5c3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5c3f mov edx, dword ptr [ecx*4 + 0x119e4a4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e4a4c)));
  /* 119b5c46 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119b5c49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b5c4b je 0x119b5c8b */
  if (C.zf) goto L_119b5c8b;
  /* 119b5c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5c50 cmp dword ptr [eax*4 + 0x119e4a58], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x119e4a58))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5c58 je 0x119b5c8b */
  if (C.zf) goto L_119b5c8b;
  /* 119b5c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 119b5c5c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 119b5c62 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5c63 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 119b5c69 push edx */
  push32((uint32_t)(EDX));
  /* 119b5c6a call 0x119bb040 */
  push32(0x119b5c6fu); f_119bb040();
  /* 119b5c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5c72 push eax */
  push32((uint32_t)(EAX));
  /* 119b5c73 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 119b5c79 push eax */
  push32((uint32_t)(EAX));
  /* 119b5c7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5c7d mov edx, dword ptr [ecx*4 + 0x119e4a58] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e4a58)));
  /* 119b5c84 push edx */
  push32((uint32_t)(EDX));
  /* 119b5c85 call dword ptr [0x119e93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c0))), 0x119b5c8bu);
L_119b5c8b:;
  /* 119b5c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5c8e mov ecx, dword ptr [eax*4 + 0x119e4a4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119e4a4c)));
  /* 119b5c95 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 119b5c98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b5c9a je 0x119b5ca9 */
  if (C.zf) goto L_119b5ca9;
  /* 119b5c9c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 119b5ca2 push edx */
  push32((uint32_t)(EDX));
  /* 119b5ca3 call dword ptr [0x119e93c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c8))), 0x119b5ca9u);
L_119b5ca9:;
  /* 119b5ca9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5cac mov ecx, dword ptr [eax*4 + 0x119e4a4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119e4a4c)));
  /* 119b5cb3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119b5cb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b5cb8 je 0x119b5d28 */
  if (C.zf) goto L_119b5d28;
  /* 119b5cba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5cbe je 0x119b5cdd */
  if (C.zf) goto L_119b5cdd;
  /* 119b5cc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 119b5cc2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 119b5cc8 push edx */
  push32((uint32_t)(EDX));
  /* 119b5cc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b5ccc push eax */
  push32((uint32_t)(EAX));
  /* 119b5ccd call 0x119bad50 */
  push32(0x119b5cd2u); f_119bad50();
  /* 119b5cd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5cd5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 119b5cdb jmp 0x119b5ce7 */
  goto L_119b5ce7;
L_119b5cdd:;
  /* 119b5cdd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_119b5ce7:;
  /* 119b5ce7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 119b5ced push ecx */
  push32((uint32_t)(ECX));
  /* 119b5cee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b5cf1 push edx */
  push32((uint32_t)(EDX));
  /* 119b5cf2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 119b5cf8 push eax */
  push32((uint32_t)(EAX));
  /* 119b5cf9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b5cfc push ecx */
  push32((uint32_t)(ECX));
  /* 119b5cfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5d00 push edx */
  push32((uint32_t)(EDX));
  /* 119b5d01 call 0x119b5d40 */
  push32(0x119b5d06u); f_119b5d40();
  /* 119b5d06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5d09 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 119b5d0f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5d13 jne 0x119b5d20 */
  if (!C.zf) goto L_119b5d20;
  /* 119b5d15 push 0x119e4a48 */
  push32((uint32_t)(0x119e4a48u));
  /* 119b5d1a call dword ptr [0x119e93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c4))), 0x119b5d20u);
L_119b5d20:;
  /* 119b5d20 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 119b5d26 jmp 0x119b5d3b */
  goto L_119b5d3b;
L_119b5d28:;
  /* 119b5d28 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5d2c jne 0x119b5d39 */
  if (!C.zf) goto L_119b5d39;
  /* 119b5d2e push 0x119e4a48 */
  push32((uint32_t)(0x119e4a48u));
  /* 119b5d33 call dword ptr [0x119e93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c4))), 0x119b5d39u);
L_119b5d39:;
  /* 119b5d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119b5d3b:;
  /* 119b5d3b pop edi */
  EDI = (pop32());
  /* 119b5d3c mov esp, ebp */
  ESP = (EBP);
  /* 119b5d3e pop ebp */
  EBP = (pop32());
  /* 119b5d3f ret  */
  ESPCHK(0x119b59b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d40 @ 0x119b5d40 (780 bytes, 197 insns) */
void f_119b5d40(void) {
  FTRACE(0x119b5d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b5d40 push ebp */
  push32((uint32_t)(EBP));
  /* 119b5d41 mov ebp, esp */
  EBP = (ESP);
  /* 119b5d43 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 119b5d48 call 0x119bb3b0 */
  push32(0x119b5d4du); f_119bb3b0();
L_119b5d4d:;
  /* 119b5d4d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5d51 jne 0x119b5d78 */
  if (!C.zf) goto L_119b5d78;
  /* 119b5d53 push 0x119e161c */
  push32((uint32_t)(0x119e161cu));
  /* 119b5d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b5d5a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 119b5d5f push 0x119e1610 */
  push32((uint32_t)(0x119e1610u));
  /* 119b5d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b5d66 call 0x119b59b0 */
  push32(0x119b5d6bu); f_119b59b0();
  /* 119b5d6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5d6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5d71 jne 0x119b5d78 */
  if (!C.zf) goto L_119b5d78;
  /* 119b5d73 call 0x119b58a0 */
  push32(0x119b5d78u); f_119b58a0();
L_119b5d78:;
  /* 119b5d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b5d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b5d7c jne 0x119b5d4d */
  if (!C.zf) goto L_119b5d4d;
  /* 119b5d7e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 119b5d83 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 119b5d89 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 119b5d8c call dword ptr [0x119e92e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92e8))), 0x119b5d92u);
  /* 119b5d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b5d94 jne 0x119b5daa */
  if (!C.zf) goto L_119b5daa;
  /* 119b5d96 push 0x119e15f8 */
  push32((uint32_t)(0x119e15f8u));
  /* 119b5d9b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 119b5da1 push edx */
  push32((uint32_t)(EDX));
  /* 119b5da2 call 0x119bb1c0 */
  push32(0x119b5da7u); f_119bb1c0();
  /* 119b5da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5daa:;
  /* 119b5daa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 119b5db0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b5db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b5db6 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5db7 call 0x119bb040 */
  push32(0x119b5dbcu); f_119bb040();
  /* 119b5dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5dbf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5dc2 jbe 0x119b5ded */
  if ((C.cf||C.zf)) goto L_119b5ded;
  /* 119b5dc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b5dc7 push edx */
  push32((uint32_t)(EDX));
  /* 119b5dc8 call 0x119bb040 */
  push32(0x119b5dcdu); f_119bb040();
  /* 119b5dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5dd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b5dd3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 119b5dd7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b5dda push 3 */
  push32((uint32_t)(0x3u));
  /* 119b5ddc push 0x119e15f4 */
  push32((uint32_t)(0x119e15f4u));
  /* 119b5de1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b5de4 push eax */
  push32((uint32_t)(EAX));
  /* 119b5de5 call 0x119bba30 */
  push32(0x119b5deau); f_119bba30();
  /* 119b5dea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5ded:;
  /* 119b5ded mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b5df0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 119b5df6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5dfd je 0x119b5e48 */
  if (C.zf) goto L_119b5e48;
  /* 119b5dff mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 119b5e05 push edx */
  push32((uint32_t)(EDX));
  /* 119b5e06 call 0x119bb040 */
  push32(0x119b5e0bu); f_119bb040();
  /* 119b5e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5e0e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5e11 jbe 0x119b5e48 */
  if ((C.cf||C.zf)) goto L_119b5e48;
  /* 119b5e13 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 119b5e19 push eax */
  push32((uint32_t)(EAX));
  /* 119b5e1a call 0x119bb040 */
  push32(0x119b5e1fu); f_119bb040();
  /* 119b5e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5e22 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 119b5e28 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 119b5e2c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 119b5e32 push 3 */
  push32((uint32_t)(0x3u));
  /* 119b5e34 push 0x119e15f4 */
  push32((uint32_t)(0x119e15f4u));
  /* 119b5e39 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 119b5e3f push eax */
  push32((uint32_t)(EAX));
  /* 119b5e40 call 0x119bba30 */
  push32(0x119b5e45u); f_119bba30();
  /* 119b5e45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5e48:;
  /* 119b5e48 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5e4c jne 0x119b5e5a */
  if (!C.zf) goto L_119b5e5a;
  /* 119b5e4e mov dword ptr [ebp - 0x1114], 0x119e1580 */
  w32((uint32_t)(EBP + -0x1114), (0x119e1580u));
  /* 119b5e58 jmp 0x119b5e64 */
  goto L_119b5e64;
L_119b5e5a:;
  /* 119b5e5a mov dword ptr [ebp - 0x1114], 0x119e12f4 */
  w32((uint32_t)(EBP + -0x1114), (0x119e12f4u));
L_119b5e64:;
  /* 119b5e64 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b5e67 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119b5e6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b5e6c je 0x119b5e79 */
  if (C.zf) goto L_119b5e79;
  /* 119b5e6e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b5e71 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 119b5e77 jmp 0x119b5e83 */
  goto L_119b5e83;
L_119b5e79:;
  /* 119b5e79 mov dword ptr [ebp - 0x1118], 0x119e12f4 */
  w32((uint32_t)(EBP + -0x1118), (0x119e12f4u));
L_119b5e83:;
  /* 119b5e83 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b5e86 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119b5e89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b5e8b je 0x119b5e9f */
  if (C.zf) goto L_119b5e9f;
  /* 119b5e8d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5e91 jne 0x119b5e9f */
  if (!C.zf) goto L_119b5e9f;
  /* 119b5e93 mov dword ptr [ebp - 0x111c], 0x119e1570 */
  w32((uint32_t)(EBP + -0x111c), (0x119e1570u));
  /* 119b5e9d jmp 0x119b5ea9 */
  goto L_119b5ea9;
L_119b5e9f:;
  /* 119b5e9f mov dword ptr [ebp - 0x111c], 0x119e12f4 */
  w32((uint32_t)(EBP + -0x111c), (0x119e12f4u));
L_119b5ea9:;
  /* 119b5ea9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b5eac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b5eaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b5eb1 je 0x119b5ebf */
  if (C.zf) goto L_119b5ebf;
  /* 119b5eb3 mov dword ptr [ebp - 0x1120], 0x119e156c */
  w32((uint32_t)(EBP + -0x1120), (0x119e156cu));
  /* 119b5ebd jmp 0x119b5ec9 */
  goto L_119b5ec9;
L_119b5ebf:;
  /* 119b5ebf mov dword ptr [ebp - 0x1120], 0x119e12f4 */
  w32((uint32_t)(EBP + -0x1120), (0x119e12f4u));
L_119b5ec9:;
  /* 119b5ec9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5ecd je 0x119b5eda */
  if (C.zf) goto L_119b5eda;
  /* 119b5ecf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b5ed2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 119b5ed8 jmp 0x119b5ee4 */
  goto L_119b5ee4;
L_119b5eda:;
  /* 119b5eda mov dword ptr [ebp - 0x1124], 0x119e12f4 */
  w32((uint32_t)(EBP + -0x1124), (0x119e12f4u));
L_119b5ee4:;
  /* 119b5ee4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5ee8 je 0x119b5ef6 */
  if (C.zf) goto L_119b5ef6;
  /* 119b5eea mov dword ptr [ebp - 0x1128], 0x119e1564 */
  w32((uint32_t)(EBP + -0x1128), (0x119e1564u));
  /* 119b5ef4 jmp 0x119b5f00 */
  goto L_119b5f00;
L_119b5ef6:;
  /* 119b5ef6 mov dword ptr [ebp - 0x1128], 0x119e12f4 */
  w32((uint32_t)(EBP + -0x1128), (0x119e12f4u));
L_119b5f00:;
  /* 119b5f00 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5f04 je 0x119b5f11 */
  if (C.zf) goto L_119b5f11;
  /* 119b5f06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b5f09 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 119b5f0f jmp 0x119b5f1b */
  goto L_119b5f1b;
L_119b5f11:;
  /* 119b5f11 mov dword ptr [ebp - 0x112c], 0x119e12f4 */
  w32((uint32_t)(EBP + -0x112c), (0x119e12f4u));
L_119b5f1b:;
  /* 119b5f1b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5f1f je 0x119b5f2d */
  if (C.zf) goto L_119b5f2d;
  /* 119b5f21 mov dword ptr [ebp - 0x1130], 0x119e155c */
  w32((uint32_t)(EBP + -0x1130), (0x119e155cu));
  /* 119b5f2b jmp 0x119b5f37 */
  goto L_119b5f37;
L_119b5f2d:;
  /* 119b5f2d mov dword ptr [ebp - 0x1130], 0x119e12f4 */
  w32((uint32_t)(EBP + -0x1130), (0x119e12f4u));
L_119b5f37:;
  /* 119b5f37 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5f3e je 0x119b5f4e */
  if (C.zf) goto L_119b5f4e;
  /* 119b5f40 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 119b5f46 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 119b5f4c jmp 0x119b5f58 */
  goto L_119b5f58;
L_119b5f4e:;
  /* 119b5f4e mov dword ptr [ebp - 0x1134], 0x119e12f4 */
  w32((uint32_t)(EBP + -0x1134), (0x119e12f4u));
L_119b5f58:;
  /* 119b5f58 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b5f5f je 0x119b5f6d */
  if (C.zf) goto L_119b5f6d;
  /* 119b5f61 mov dword ptr [ebp - 0x1138], 0x119e1550 */
  w32((uint32_t)(EBP + -0x1138), (0x119e1550u));
  /* 119b5f6b jmp 0x119b5f77 */
  goto L_119b5f77;
L_119b5f6d:;
  /* 119b5f6d mov dword ptr [ebp - 0x1138], 0x119e12f4 */
  w32((uint32_t)(EBP + -0x1138), (0x119e12f4u));
L_119b5f77:;
  /* 119b5f77 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 119b5f7d push edx */
  push32((uint32_t)(EDX));
  /* 119b5f7e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 119b5f84 push eax */
  push32((uint32_t)(EAX));
  /* 119b5f85 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 119b5f8b push ecx */
  push32((uint32_t)(ECX));
  /* 119b5f8c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 119b5f92 push edx */
  push32((uint32_t)(EDX));
  /* 119b5f93 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 119b5f99 push eax */
  push32((uint32_t)(EAX));
  /* 119b5f9a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 119b5fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5fa1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 119b5fa7 push edx */
  push32((uint32_t)(EDX));
  /* 119b5fa8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 119b5fae push eax */
  push32((uint32_t)(EAX));
  /* 119b5faf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 119b5fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5fb6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 119b5fbc push edx */
  push32((uint32_t)(EDX));
  /* 119b5fbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b5fc0 push eax */
  push32((uint32_t)(EAX));
  /* 119b5fc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b5fc4 mov edx, dword ptr [ecx*4 + 0x119e4a64] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e4a64)));
  /* 119b5fcb push edx */
  push32((uint32_t)(EDX));
  /* 119b5fcc push 0x119e14fc */
  push32((uint32_t)(0x119e14fcu));
  /* 119b5fd1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119b5fd6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 119b5fdc push eax */
  push32((uint32_t)(EAX));
  /* 119b5fdd call 0x119bb0c0 */
  push32(0x119b5fe2u); f_119bb0c0();
  /* 119b5fe2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b5fe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b5fe7 jge 0x119b5ffd */
  if ((C.sf==C.of)) goto L_119b5ffd;
  /* 119b5fe9 push 0x119e1460 */
  push32((uint32_t)(0x119e1460u));
  /* 119b5fee lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 119b5ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 119b5ff5 call 0x119bb1c0 */
  push32(0x119b5ffau); f_119bb1c0();
  /* 119b5ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b5ffd:;
  /* 119b5ffd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 119b6002 push 0x119e14d8 */
  push32((uint32_t)(0x119e14d8u));
  /* 119b6007 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 119b600d push edx */
  push32((uint32_t)(EDX));
  /* 119b600e call 0x119bb970 */
  push32(0x119b6013u); f_119bb970();
  /* 119b6013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6016 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 119b601c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6023 jne 0x119b6036 */
  if (!C.zf) goto L_119b6036;
  /* 119b6025 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 119b6027 call 0x119bb6b0 */
  push32(0x119b602cu); f_119bb6b0();
  /* 119b602c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b602f push 3 */
  push32((uint32_t)(0x3u));
  /* 119b6031 call 0x119b79d0 */
  push32(0x119b6036u); f_119b79d0();
L_119b6036:;
  /* 119b6036 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b603d jne 0x119b6046 */
  if (!C.zf) goto L_119b6046;
  /* 119b603f mov eax, 1 */
  EAX = (0x1u);
  /* 119b6044 jmp 0x119b6048 */
  goto L_119b6048;
L_119b6046:;
  /* 119b6046 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119b6048:;
  /* 119b6048 mov esp, ebp */
  ESP = (EBP);
  /* 119b604a pop ebp */
  EBP = (pop32());
  /* 119b604b ret  */
  ESPCHK(0x119b5d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006050 @ 0x119b6050 (628 bytes, 214 insns) */
void f_119b6050(void) {
  FTRACE(0x119b6050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b6050 push ebp */
  push32((uint32_t)(EBP));
  /* 119b6051 mov ebp, esp */
  EBP = (ESP);
  /* 119b6053 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b6056 push ebx */
  push32((uint32_t)(EBX));
  /* 119b6057 push esi */
  push32((uint32_t)(ESI));
  /* 119b6058 push edi */
  push32((uint32_t)(EDI));
L_119b6059:;
  /* 119b6059 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b605d jne 0x119b607d */
  if (!C.zf) goto L_119b607d;
  /* 119b605f push 0x119e1680 */
  push32((uint32_t)(0x119e1680u));
  /* 119b6064 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b6066 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 119b6068 push 0x119e1674 */
  push32((uint32_t)(0x119e1674u));
  /* 119b606d push 2 */
  push32((uint32_t)(0x2u));
  /* 119b606f call 0x119b59b0 */
  push32(0x119b6074u); f_119b59b0();
  /* 119b6074 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6077 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b607a jne 0x119b607d */
  if (!C.zf) goto L_119b607d;
  /* 119b607c int3  */
  x86_unimpl("int3 @ 0x119b607c");
L_119b607d:;
  /* 119b607d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b607f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6081 jne 0x119b6059 */
  if (!C.zf) goto L_119b6059;
  /* 119b6083 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b6086 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119b6089 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b608c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119b608f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119b6092 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6095 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119b6098 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 119b609e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b60a0 je 0x119b60af */
  if (C.zf) goto L_119b60af;
  /* 119b60a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b60a5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119b60a8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 119b60ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b60ad je 0x119b60c5 */
  if (C.zf) goto L_119b60c5;
L_119b60af:;
  /* 119b60af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b60b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119b60b5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 119b60b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b60ba mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 119b60bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b60c0 jmp 0x119b62bd */
  goto L_119b62bd;
L_119b60c5:;
  /* 119b60c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b60c8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119b60cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 119b60ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b60d0 je 0x119b611c */
  if (C.zf) goto L_119b611c;
  /* 119b60d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b60d5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 119b60dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b60df mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119b60e2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 119b60e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b60e7 je 0x119b6105 */
  if (C.zf) goto L_119b6105;
  /* 119b60e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b60ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b60ef mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119b60f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119b60f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b60f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119b60fa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 119b60fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6100 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 119b6103 jmp 0x119b611c */
  goto L_119b611c;
L_119b6105:;
  /* 119b6105 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6108 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119b610b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 119b610e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6111 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 119b6114 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b6117 jmp 0x119b62bd */
  goto L_119b62bd;
L_119b611c:;
  /* 119b611c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b611f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119b6122 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 119b6125 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6128 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 119b612b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b612e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119b6131 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 119b6134 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6137 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 119b613a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b613d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 119b6144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119b614b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b614e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119b6151 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6154 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119b6157 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 119b615d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b615f jne 0x119b618f */
  if (!C.zf) goto L_119b618f;
  /* 119b6161 cmp dword ptr [ebp - 8], 0x119e4ba0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x119e4ba0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6168 je 0x119b6173 */
  if (C.zf) goto L_119b6173;
  /* 119b616a cmp dword ptr [ebp - 8], 0x119e4bc0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x119e4bc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6171 jne 0x119b6183 */
  if (!C.zf) goto L_119b6183;
L_119b6173:;
  /* 119b6173 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b6176 push edx */
  push32((uint32_t)(EDX));
  /* 119b6177 call 0x119bc060 */
  push32(0x119b617cu); f_119bc060();
  /* 119b617c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b617f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6181 jne 0x119b618f */
  if (!C.zf) goto L_119b618f;
L_119b6183:;
  /* 119b6183 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6186 push eax */
  push32((uint32_t)(EAX));
  /* 119b6187 call 0x119bbf90 */
  push32(0x119b618cu); f_119bbf90();
  /* 119b618c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b618f:;
  /* 119b618f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6192 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119b6195 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 119b619b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b619d je 0x119b627b */
  if (C.zf) goto L_119b627b;
L_119b61a3:;
  /* 119b61a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b61a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b61a9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 119b61ab sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b61ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b61b0 jge 0x119b61d3 */
  if ((C.sf==C.of)) goto L_119b61d3;
  /* 119b61b2 push 0x119e1634 */
  push32((uint32_t)(0x119e1634u));
  /* 119b61b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b61b9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 119b61be push 0x119e1674 */
  push32((uint32_t)(0x119e1674u));
  /* 119b61c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b61c5 call 0x119b59b0 */
  push32(0x119b61cau); f_119b59b0();
  /* 119b61ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b61cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b61d0 jne 0x119b61d3 */
  if (!C.zf) goto L_119b61d3;
  /* 119b61d2 int3  */
  x86_unimpl("int3 @ 0x119b61d2");
L_119b61d3:;
  /* 119b61d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b61d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b61d7 jne 0x119b61a3 */
  if (!C.zf) goto L_119b61a3;
  /* 119b61d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b61dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b61df mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119b61e1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b61e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b61e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b61ea mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119b61ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b61f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b61f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119b61f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b61f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 119b61fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b61fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6201 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119b6204 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6208 jle 0x119b6226 */
  if ((C.zf||C.sf!=C.of)) goto L_119b6226;
  /* 119b620a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b620d push ecx */
  push32((uint32_t)(ECX));
  /* 119b620e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6211 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119b6214 push eax */
  push32((uint32_t)(EAX));
  /* 119b6215 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b6218 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6219 call 0x119bbc80 */
  push32(0x119b621eu); f_119bbc80();
  /* 119b621e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6221 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119b6224 jmp 0x119b626e */
  goto L_119b626e;
L_119b6226:;
  /* 119b6226 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b622a je 0x119b6249 */
  if (C.zf) goto L_119b6249;
  /* 119b622c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b622f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 119b6232 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b6235 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 119b6238 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119b623b mov ecx, dword ptr [edx*4 + 0x119e8ae0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x119e8ae0)));
  /* 119b6242 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6244 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119b6247 jmp 0x119b6250 */
  goto L_119b6250;
L_119b6249:;
  /* 119b6249 mov dword ptr [ebp - 0x14], 0x119e4a98 */
  w32((uint32_t)(EBP + -0x14), (0x119e4a98u));
L_119b6250:;
  /* 119b6250 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119b6253 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 119b6257 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 119b625a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b625c je 0x119b626e */
  if (C.zf) goto L_119b626e;
  /* 119b625e push 2 */
  push32((uint32_t)(0x2u));
  /* 119b6260 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b6262 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b6265 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6266 call 0x119bbb30 */
  push32(0x119b626bu); f_119bbb30();
  /* 119b626b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b626e:;
  /* 119b626e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6271 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119b6274 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 119b6277 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 119b6279 jmp 0x119b6299 */
  goto L_119b6299;
L_119b627b:;
  /* 119b627b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119b6282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6285 push edx */
  push32((uint32_t)(EDX));
  /* 119b6286 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 119b6289 push eax */
  push32((uint32_t)(EAX));
  /* 119b628a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b628d push ecx */
  push32((uint32_t)(ECX));
  /* 119b628e call 0x119bbc80 */
  push32(0x119b6293u); f_119bbc80();
  /* 119b6293 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6296 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119b6299:;
  /* 119b6299 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b629c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b629f je 0x119b62b5 */
  if (C.zf) goto L_119b62b5;
  /* 119b62a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b62a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119b62a7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 119b62aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b62ad mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 119b62b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b62b3 jmp 0x119b62bd */
  goto L_119b62bd;
L_119b62b5:;
  /* 119b62b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b62b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_119b62bd:;
  /* 119b62bd pop edi */
  EDI = (pop32());
  /* 119b62be pop esi */
  ESI = (pop32());
  /* 119b62bf pop ebx */
  EBX = (pop32());
  /* 119b62c0 mov esp, ebp */
  ESP = (EBP);
  /* 119b62c2 pop ebp */
  EBP = (pop32());
  /* 119b62c3 ret  */
  ESPCHK(0x119b6050u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x119b62d0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_119b62d0(void) {
  FTRACE(0x119b62d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b62d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b62d1 mov ebp, esp */
  EBP = (ESP);
  /* 119b62d3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b62d9 push ebx */
  push32((uint32_t)(EBX));
  /* 119b62da push esi */
  push32((uint32_t)(ESI));
  /* 119b62db push edi */
  push32((uint32_t)(EDI));
  /* 119b62dc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 119b62e3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 119b62ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_119b62f4:;
  /* 119b62f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b62f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119b62f9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 119b62fc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b6300 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b6303 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6306 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 119b6309 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b630b je 0x119b6ee7 */
  if (C.zf) goto L_119b6ee7;
  /* 119b6311 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6318 jl 0x119b6ee7 */
  if ((C.sf!=C.of)) goto L_119b6ee7;
  /* 119b631e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b6322 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6325 jl 0x119b6346 */
  if ((C.sf!=C.of)) goto L_119b6346;
  /* 119b6327 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b632b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b632e jg 0x119b6346 */
  if ((!C.zf&&C.sf==C.of)) goto L_119b6346;
  /* 119b6330 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b6334 movsx ecx, byte ptr [eax + 0x119e166c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x119e166c))));
  /* 119b633b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 119b633e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 119b6344 jmp 0x119b6350 */
  goto L_119b6350;
L_119b6346:;
  /* 119b6346 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_119b6350:;
  /* 119b6350 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 119b6356 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119b6359 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b635c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119b635f movsx edx, byte ptr [ecx + eax*8 + 0x119e168c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x119e168c))));
  /* 119b6367 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 119b636a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119b636d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119b6370 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 119b6376 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b637d ja 0x119b6ee2 */
  if ((!C.cf&&!C.zf)) goto L_119b6ee2;
  /* 119b6383 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 119b6389 jmp dword ptr [ecx*4 + 0x119b6ef4] */
  switch (ECX) {
    case 0: goto L_119b6390;
    case 1: goto L_119b642a;
    case 2: goto L_119b646c;
    case 3: goto L_119b64db;
    case 4: goto L_119b6533;
    case 5: goto L_119b6542;
    case 6: goto L_119b658e;
    case 7: goto L_119b6621;
    case 8: goto L_119b64b8;
    case 9: goto L_119b64c3;
    case 10: goto L_119b64ae;
    case 11: goto L_119b64a3;
    case 12: goto L_119b64ce;
    case 13: goto L_119b64d6;
    default: x86_unimpl("switch@0x119b6389 out of table"); return;
  }
L_119b6390:;
  /* 119b6390 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 119b6397 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119b639a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b63a0 mov eax, dword ptr [0x119e4e00] */
  EAX = (r32((uint32_t)(0x119e4e00)));
  /* 119b63a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b63a7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 119b63ab and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 119b63b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b63b3 je 0x119b640d */
  if (C.zf) goto L_119b640d;
  /* 119b63b5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 119b63bb push edx */
  push32((uint32_t)(EDX));
  /* 119b63bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b63bf push eax */
  push32((uint32_t)(EAX));
  /* 119b63c0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b63c4 push ecx */
  push32((uint32_t)(ECX));
  /* 119b63c5 call 0x119b7000 */
  push32(0x119b63cau); f_119b7000();
  /* 119b63ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b63cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b63d0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119b63d2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 119b63d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b63d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b63db mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_119b63de:;
  /* 119b63de movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b63e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b63e4 jne 0x119b6407 */
  if (!C.zf) goto L_119b6407;
  /* 119b63e6 push 0x119e170c */
  push32((uint32_t)(0x119e170cu));
  /* 119b63eb push 0 */
  push32((uint32_t)(0x0u));
  /* 119b63ed push 0x186 */
  push32((uint32_t)(0x186u));
  /* 119b63f2 push 0x119e1700 */
  push32((uint32_t)(0x119e1700u));
  /* 119b63f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b63f9 call 0x119b59b0 */
  push32(0x119b63feu); f_119b59b0();
  /* 119b63fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6401 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6404 jne 0x119b6407 */
  if (!C.zf) goto L_119b6407;
  /* 119b6406 int3  */
  x86_unimpl("int3 @ 0x119b6406");
L_119b6407:;
  /* 119b6407 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b6409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b640b jne 0x119b63de */
  if (!C.zf) goto L_119b63de;
L_119b640d:;
  /* 119b640d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 119b6413 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6414 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b6417 push edx */
  push32((uint32_t)(EDX));
  /* 119b6418 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b641c push eax */
  push32((uint32_t)(EAX));
  /* 119b641d call 0x119b7000 */
  push32(0x119b6422u); f_119b7000();
  /* 119b6422 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6425 jmp 0x119b6ee2 */
  goto L_119b6ee2;
L_119b642a:;
  /* 119b642a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119b6431 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6434 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 119b643a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 119b6440 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 119b6446 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 119b644c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119b644f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119b6456 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 119b6460 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 119b6467 jmp 0x119b6ee2 */
  goto L_119b6ee2;
L_119b646c:;
  /* 119b646c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b6470 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 119b6476 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 119b647c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b647f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 119b6485 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b648c ja 0x119b64d6 */
  if ((!C.cf&&!C.zf)) goto L_119b64d6;
  /* 119b648e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 119b6494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b6496 mov al, byte ptr [ecx + 0x119b6f2c] */
  AL = (r8((uint32_t)(ECX + 0x119b6f2c)));
  /* 119b649c jmp dword ptr [eax*4 + 0x119b6f14] */
  switch (EAX) {
    case 0: goto L_119b64b8;
    case 1: goto L_119b64c3;
    case 2: goto L_119b64ae;
    case 3: goto L_119b64a3;
    case 4: goto L_119b64ce;
    case 5: goto L_119b64d6;
    default: x86_unimpl("switch@0x119b649c out of table"); return;
  }
L_119b64a3:;
  /* 119b64a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b64a6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119b64a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b64ac jmp 0x119b64d6 */
  goto L_119b64d6;
L_119b64ae:;
  /* 119b64ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b64b1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 119b64b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b64b6 jmp 0x119b64d6 */
  goto L_119b64d6;
L_119b64b8:;
  /* 119b64b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b64bb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 119b64be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b64c1 jmp 0x119b64d6 */
  goto L_119b64d6;
L_119b64c3:;
  /* 119b64c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b64c6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 119b64c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b64cc jmp 0x119b64d6 */
  goto L_119b64d6;
L_119b64ce:;
  /* 119b64ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b64d1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 119b64d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119b64d6:;
  /* 119b64d6 jmp 0x119b6ee2 */
  goto L_119b6ee2;
L_119b64db:;
  /* 119b64db movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b64df cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b64e2 jne 0x119b6517 */
  if (!C.zf) goto L_119b6517;
  /* 119b64e4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 119b64e7 push edx */
  push32((uint32_t)(EDX));
  /* 119b64e8 call 0x119b7110 */
  push32(0x119b64edu); f_119b7110();
  /* 119b64ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b64f0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 119b64f6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b64fd jge 0x119b6515 */
  if ((C.sf==C.of)) goto L_119b6515;
  /* 119b64ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6502 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 119b6504 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b6507 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 119b650d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119b650f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_119b6515:;
  /* 119b6515 jmp 0x119b652e */
  goto L_119b652e;
L_119b6517:;
  /* 119b6517 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 119b651d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119b6520 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b6524 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 119b6528 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_119b652e:;
  /* 119b652e jmp 0x119b6ee2 */
  goto L_119b6ee2;
L_119b6533:;
  /* 119b6533 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 119b653d jmp 0x119b6ee2 */
  goto L_119b6ee2;
L_119b6542:;
  /* 119b6542 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b6546 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6549 jne 0x119b6572 */
  if (!C.zf) goto L_119b6572;
  /* 119b654b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 119b654e push eax */
  push32((uint32_t)(EAX));
  /* 119b654f call 0x119b7110 */
  push32(0x119b6554u); f_119b7110();
  /* 119b6554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6557 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 119b655d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6564 jge 0x119b6570 */
  if ((C.sf==C.of)) goto L_119b6570;
  /* 119b6566 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_119b6570:;
  /* 119b6570 jmp 0x119b6589 */
  goto L_119b6589;
L_119b6572:;
  /* 119b6572 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 119b6578 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119b657b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b657f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 119b6583 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_119b6589:;
  /* 119b6589 jmp 0x119b6ee2 */
  goto L_119b6ee2;
L_119b658e:;
  /* 119b658e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b6592 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 119b6598 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 119b659e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b65a1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 119b65a7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b65ae ja 0x119b661c */
  if ((!C.cf&&!C.zf)) goto L_119b661c;
  /* 119b65b0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 119b65b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b65b8 mov al, byte ptr [ecx + 0x119b6f51] */
  AL = (r8((uint32_t)(ECX + 0x119b6f51)));
  /* 119b65be jmp dword ptr [eax*4 + 0x119b6f3d] */
  switch (EAX) {
    case 0: goto L_119b65d0;
    case 1: goto L_119b6609;
    case 2: goto L_119b65c5;
    case 3: goto L_119b6613;
    case 4: goto L_119b661c;
    default: x86_unimpl("switch@0x119b65be out of table"); return;
  }
L_119b65c5:;
  /* 119b65c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b65c8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 119b65cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b65ce jmp 0x119b661c */
  goto L_119b661c;
L_119b65d0:;
  /* 119b65d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b65d3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b65d6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b65d9 jne 0x119b65fb */
  if (!C.zf) goto L_119b65fb;
  /* 119b65db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b65de movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 119b65e2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b65e5 jne 0x119b65fb */
  if (!C.zf) goto L_119b65fb;
  /* 119b65e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b65ea add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b65ed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119b65f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b65f3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 119b65f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b65f9 jmp 0x119b6607 */
  goto L_119b6607;
L_119b65fb:;
  /* 119b65fb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 119b6602 jmp 0x119b6390 */
  goto L_119b6390;
L_119b6607:;
  /* 119b6607 jmp 0x119b661c */
  goto L_119b661c;
L_119b6609:;
  /* 119b6609 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b660c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 119b660e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b6611 jmp 0x119b661c */
  goto L_119b661c;
L_119b6613:;
  /* 119b6613 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6616 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 119b6619 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119b661c:;
  /* 119b661c jmp 0x119b6ee2 */
  goto L_119b6ee2;
L_119b6621:;
  /* 119b6621 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b6625 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 119b662b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 119b6631 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b6634 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 119b663a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6641 ja 0x119b6d07 */
  if ((!C.cf&&!C.zf)) goto L_119b6d07;
  /* 119b6647 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 119b664d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b664f mov cl, byte ptr [edx + 0x119b6fbc] */
  CL = (r8((uint32_t)(EDX + 0x119b6fbc)));
  /* 119b6655 jmp dword ptr [ecx*4 + 0x119b6f80] */
  switch (ECX) {
    case 0: goto L_119b665c;
    case 1: goto L_119b68f0;
    case 2: goto L_119b6780;
    case 3: goto L_119b6a29;
    case 4: goto L_119b66eb;
    case 5: goto L_119b6671;
    case 6: goto L_119b69fb;
    case 7: goto L_119b6900;
    case 8: goto L_119b68a5;
    case 9: goto L_119b6a75;
    case 10: goto L_119b6a1f;
    case 11: goto L_119b6796;
    case 12: goto L_119b6a13;
    case 13: goto L_119b6a35;
    case 14: goto L_119b6d07;
    default: x86_unimpl("switch@0x119b6655 out of table"); return;
  }
L_119b665c:;
  /* 119b665c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b665f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 119b6664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6666 jne 0x119b6671 */
  if (!C.zf) goto L_119b6671;
  /* 119b6668 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b666b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 119b666e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119b6671:;
  /* 119b6671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6674 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 119b667a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b667c je 0x119b66b7 */
  if (C.zf) goto L_119b66b7;
  /* 119b667e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 119b6681 push eax */
  push32((uint32_t)(EAX));
  /* 119b6682 call 0x119b7150 */
  push32(0x119b6687u); f_119b7150();
  /* 119b6687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b668a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 119b668e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 119b6692 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6693 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 119b6699 push edx */
  push32((uint32_t)(EDX));
  /* 119b669a call 0x119bc2d0 */
  push32(0x119b669fu); f_119bc2d0();
  /* 119b669f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b66a2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119b66a5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b66a9 jge 0x119b66b5 */
  if ((C.sf==C.of)) goto L_119b66b5;
  /* 119b66ab mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_119b66b5:;
  /* 119b66b5 jmp 0x119b66dd */
  goto L_119b66dd;
L_119b66b7:;
  /* 119b66b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 119b66ba push eax */
  push32((uint32_t)(EAX));
  /* 119b66bb call 0x119b7110 */
  push32(0x119b66c0u); f_119b7110();
  /* 119b66c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b66c3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 119b66ca mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 119b66d0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 119b66d6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_119b66dd:;
  /* 119b66dd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 119b66e3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 119b66e6 jmp 0x119b6d07 */
  goto L_119b6d07;
L_119b66eb:;
  /* 119b66eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 119b66ee push eax */
  push32((uint32_t)(EAX));
  /* 119b66ef call 0x119b7110 */
  push32(0x119b66f4u); f_119b7110();
  /* 119b66f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b66f7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 119b66fd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6704 je 0x119b6712 */
  if (C.zf) goto L_119b6712;
  /* 119b6706 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 119b670c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6710 jne 0x119b672c */
  if (!C.zf) goto L_119b672c;
L_119b6712:;
  /* 119b6712 mov edx, dword ptr [0x119e4a70] */
  EDX = (r32((uint32_t)(0x119e4a70)));
  /* 119b6718 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 119b671b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b671e push eax */
  push32((uint32_t)(EAX));
  /* 119b671f call 0x119bb040 */
  push32(0x119b6724u); f_119bb040();
  /* 119b6724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6727 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119b672a jmp 0x119b677b */
  goto L_119b677b;
L_119b672c:;
  /* 119b672c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b672f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 119b6735 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b6737 je 0x119b675c */
  if (C.zf) goto L_119b675c;
  /* 119b6739 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 119b673f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119b6742 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119b6745 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 119b674b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 119b674e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119b6750 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 119b6753 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 119b675a jmp 0x119b677b */
  goto L_119b677b;
L_119b675c:;
  /* 119b675c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 119b6763 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 119b6769 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119b676c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 119b676f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 119b6775 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 119b6778 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_119b677b:;
  /* 119b677b jmp 0x119b6d07 */
  goto L_119b6d07;
L_119b6780:;
  /* 119b6780 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6783 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 119b6789 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b678b jne 0x119b6796 */
  if (!C.zf) goto L_119b6796;
  /* 119b678d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6790 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 119b6793 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119b6796:;
  /* 119b6796 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b679d jne 0x119b67ab */
  if (!C.zf) goto L_119b67ab;
  /* 119b679f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 119b67a9 jmp 0x119b67b7 */
  goto L_119b67b7;
L_119b67ab:;
  /* 119b67ab mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 119b67b1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_119b67b7:;
  /* 119b67b7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 119b67bd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 119b67c3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 119b67c6 push edx */
  push32((uint32_t)(EDX));
  /* 119b67c7 call 0x119b7110 */
  push32(0x119b67ccu); f_119b7110();
  /* 119b67cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b67cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119b67d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b67d5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 119b67da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b67dc je 0x119b6846 */
  if (C.zf) goto L_119b6846;
  /* 119b67de cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b67e2 jne 0x119b67ed */
  if (!C.zf) goto L_119b67ed;
  /* 119b67e4 mov ecx, dword ptr [0x119e4a74] */
  ECX = (r32((uint32_t)(0x119e4a74)));
  /* 119b67ea mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_119b67ed:;
  /* 119b67ed mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 119b67f4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b67f7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_119b67fd:;
  /* 119b67fd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 119b6803 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 119b6809 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b680c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 119b6812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6814 je 0x119b6836 */
  if (C.zf) goto L_119b6836;
  /* 119b6816 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 119b681c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b681e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 119b6821 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6823 je 0x119b6836 */
  if (C.zf) goto L_119b6836;
  /* 119b6825 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 119b682b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b682e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 119b6834 jmp 0x119b67fd */
  goto L_119b67fd;
L_119b6836:;
  /* 119b6836 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 119b683c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b683f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119b6841 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 119b6844 jmp 0x119b68a0 */
  goto L_119b68a0;
L_119b6846:;
  /* 119b6846 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b684a jne 0x119b6854 */
  if (!C.zf) goto L_119b6854;
  /* 119b684c mov eax, dword ptr [0x119e4a70] */
  EAX = (r32((uint32_t)(0x119e4a70)));
  /* 119b6851 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_119b6854:;
  /* 119b6854 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b6857 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_119b685d:;
  /* 119b685d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 119b6863 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 119b6869 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b686c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 119b6872 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6874 je 0x119b6894 */
  if (C.zf) goto L_119b6894;
  /* 119b6876 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 119b687c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119b687f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6881 je 0x119b6894 */
  if (C.zf) goto L_119b6894;
  /* 119b6883 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 119b6889 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b688c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 119b6892 jmp 0x119b685d */
  goto L_119b685d;
L_119b6894:;
  /* 119b6894 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 119b689a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b689d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_119b68a0:;
  /* 119b68a0 jmp 0x119b6d07 */
  goto L_119b6d07;
L_119b68a5:;
  /* 119b68a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 119b68a8 push edx */
  push32((uint32_t)(EDX));
  /* 119b68a9 call 0x119b7110 */
  push32(0x119b68aeu); f_119b7110();
  /* 119b68ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b68b1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 119b68b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b68ba and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 119b68bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b68bf je 0x119b68d3 */
  if (C.zf) goto L_119b68d3;
  /* 119b68c1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 119b68c7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 119b68ce mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 119b68d1 jmp 0x119b68e1 */
  goto L_119b68e1;
L_119b68d3:;
  /* 119b68d3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 119b68d9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 119b68df mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_119b68e1:;
  /* 119b68e1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 119b68eb jmp 0x119b6d07 */
  goto L_119b6d07;
L_119b68f0:;
  /* 119b68f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 119b68f7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 119b68fa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 119b68fd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_119b6900:;
  /* 119b6900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6903 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 119b6905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b6908 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 119b690e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 119b6911 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6918 jge 0x119b6926 */
  if ((C.sf==C.of)) goto L_119b6926;
  /* 119b691a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 119b6924 jmp 0x119b6942 */
  goto L_119b6942;
L_119b6926:;
  /* 119b6926 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b692d jne 0x119b6942 */
  if (!C.zf) goto L_119b6942;
  /* 119b692f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b6933 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6936 jne 0x119b6942 */
  if (!C.zf) goto L_119b6942;
  /* 119b6938 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_119b6942:;
  /* 119b6942 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b6945 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6948 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 119b694b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b694e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b6951 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119b6953 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 119b6956 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 119b695c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 119b6962 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b6965 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6966 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 119b696c push edx */
  push32((uint32_t)(EDX));
  /* 119b696d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b6971 push eax */
  push32((uint32_t)(EAX));
  /* 119b6972 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b6975 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6976 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 119b697c push edx */
  push32((uint32_t)(EDX));
  /* 119b697d call dword ptr [0x119e4a78] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e4a78))), 0x119b6983u);
  /* 119b6983 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6986 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6989 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 119b698e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6990 je 0x119b69a8 */
  if (C.zf) goto L_119b69a8;
  /* 119b6992 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6999 jne 0x119b69a8 */
  if (!C.zf) goto L_119b69a8;
  /* 119b699b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b699e push ecx */
  push32((uint32_t)(ECX));
  /* 119b699f call dword ptr [0x119e4a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e4a84))), 0x119b69a5u);
  /* 119b69a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b69a8:;
  /* 119b69a8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119b69ac cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b69af jne 0x119b69ca */
  if (!C.zf) goto L_119b69ca;
  /* 119b69b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b69b4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 119b69b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b69bb jne 0x119b69ca */
  if (!C.zf) goto L_119b69ca;
  /* 119b69bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b69c0 push ecx */
  push32((uint32_t)(ECX));
  /* 119b69c1 call dword ptr [0x119e4a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e4a7c))), 0x119b69c7u);
  /* 119b69c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b69ca:;
  /* 119b69ca mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b69cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119b69d0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b69d3 jne 0x119b69e7 */
  if (!C.zf) goto L_119b69e7;
  /* 119b69d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b69d8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 119b69db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b69de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b69e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b69e4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_119b69e7:;
  /* 119b69e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b69ea push eax */
  push32((uint32_t)(EAX));
  /* 119b69eb call 0x119bb040 */
  push32(0x119b69f0u); f_119bb040();
  /* 119b69f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b69f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119b69f6 jmp 0x119b6d07 */
  goto L_119b6d07;
L_119b69fb:;
  /* 119b69fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b69fe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 119b6a01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b6a04 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 119b6a0e jmp 0x119b6a95 */
  goto L_119b6a95;
L_119b6a13:;
  /* 119b6a13 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 119b6a1d jmp 0x119b6a95 */
  goto L_119b6a95;
L_119b6a1f:;
  /* 119b6a1f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_119b6a29:;
  /* 119b6a29 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 119b6a33 jmp 0x119b6a3f */
  goto L_119b6a3f;
L_119b6a35:;
  /* 119b6a35 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_119b6a3f:;
  /* 119b6a3f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 119b6a49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6a4c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 119b6a52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6a54 je 0x119b6a73 */
  if (C.zf) goto L_119b6a73;
  /* 119b6a56 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 119b6a5d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 119b6a63 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6a66 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 119b6a6c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_119b6a73:;
  /* 119b6a73 jmp 0x119b6a95 */
  goto L_119b6a95;
L_119b6a75:;
  /* 119b6a75 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 119b6a7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6a82 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 119b6a88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b6a8a je 0x119b6a95 */
  if (C.zf) goto L_119b6a95;
  /* 119b6a8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6a8f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 119b6a92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119b6a95:;
  /* 119b6a95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6a98 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 119b6a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6a9f je 0x119b6abe */
  if (C.zf) goto L_119b6abe;
  /* 119b6aa1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 119b6aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6aa5 call 0x119b7130 */
  push32(0x119b6aaau); f_119b7130();
  /* 119b6aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6aad mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 119b6ab3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 119b6ab9 jmp 0x119b6b4f */
  goto L_119b6b4f;
L_119b6abe:;
  /* 119b6abe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6ac1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 119b6ac4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6ac6 je 0x119b6b10 */
  if (C.zf) goto L_119b6b10;
  /* 119b6ac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6acb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 119b6ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6ad0 je 0x119b6af0 */
  if (C.zf) goto L_119b6af0;
  /* 119b6ad2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 119b6ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6ad6 call 0x119b7110 */
  push32(0x119b6adbu); f_119b7110();
  /* 119b6adb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6ade movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 119b6ae1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119b6ae2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 119b6ae8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 119b6aee jmp 0x119b6b0e */
  goto L_119b6b0e;
L_119b6af0:;
  /* 119b6af0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 119b6af3 push edx */
  push32((uint32_t)(EDX));
  /* 119b6af4 call 0x119b7110 */
  push32(0x119b6af9u); f_119b7110();
  /* 119b6af9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6afc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b6b01 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119b6b02 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 119b6b08 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_119b6b0e:;
  /* 119b6b0e jmp 0x119b6b4f */
  goto L_119b6b4f;
L_119b6b10:;
  /* 119b6b10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6b13 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 119b6b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6b18 je 0x119b6b35 */
  if (C.zf) goto L_119b6b35;
  /* 119b6b1a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 119b6b1d push ecx */
  push32((uint32_t)(ECX));
  /* 119b6b1e call 0x119b7110 */
  push32(0x119b6b23u); f_119b7110();
  /* 119b6b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6b26 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119b6b27 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 119b6b2d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 119b6b33 jmp 0x119b6b4f */
  goto L_119b6b4f;
L_119b6b35:;
  /* 119b6b35 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 119b6b38 push edx */
  push32((uint32_t)(EDX));
  /* 119b6b39 call 0x119b7110 */
  push32(0x119b6b3eu); f_119b7110();
  /* 119b6b3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6b41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b6b43 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 119b6b49 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_119b6b4f:;
  /* 119b6b4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6b52 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 119b6b55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6b57 je 0x119b6b97 */
  if (C.zf) goto L_119b6b97;
  /* 119b6b59 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6b60 jg 0x119b6b97 */
  if ((!C.zf&&C.sf==C.of)) goto L_119b6b97;
  /* 119b6b62 jl 0x119b6b6d */
  if ((C.sf!=C.of)) goto L_119b6b6d;
  /* 119b6b64 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6b6b jae 0x119b6b97 */
  if (!C.cf) goto L_119b6b97;
L_119b6b6d:;
  /* 119b6b6d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 119b6b73 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119b6b75 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 119b6b7b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6b7e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119b6b80 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 119b6b86 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 119b6b8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6b8f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 119b6b92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b6b95 jmp 0x119b6baf */
  goto L_119b6baf;
L_119b6b97:;
  /* 119b6b97 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 119b6b9d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 119b6ba3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 119b6ba9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_119b6baf:;
  /* 119b6baf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6bb2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 119b6bb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6bba jne 0x119b6bd7 */
  if (!C.zf) goto L_119b6bd7;
  /* 119b6bbc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 119b6bc2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 119b6bc8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 119b6bcb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 119b6bd1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_119b6bd7:;
  /* 119b6bd7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6bde jge 0x119b6bec */
  if ((C.sf==C.of)) goto L_119b6bec;
  /* 119b6be0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 119b6bea jmp 0x119b6bf5 */
  goto L_119b6bf5;
L_119b6bec:;
  /* 119b6bec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6bef and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 119b6bf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119b6bf5:;
  /* 119b6bf5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 119b6bfb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 119b6c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6c03 jne 0x119b6c0c */
  if (!C.zf) goto L_119b6c0c;
  /* 119b6c05 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_119b6c0c:;
  /* 119b6c0c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 119b6c0f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_119b6c12:;
  /* 119b6c12 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 119b6c18 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 119b6c1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b6c21 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 119b6c27 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6c29 jg 0x119b6c3f */
  if ((!C.zf&&C.sf==C.of)) goto L_119b6c3f;
  /* 119b6c2b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 119b6c31 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 119b6c37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b6c39 je 0x119b6cc0 */
  if (C.zf) goto L_119b6cc0;
L_119b6c3f:;
  /* 119b6c3f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 119b6c45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119b6c46 push edx */
  push32((uint32_t)(EDX));
  /* 119b6c47 push eax */
  push32((uint32_t)(EAX));
  /* 119b6c48 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 119b6c4e push edx */
  push32((uint32_t)(EDX));
  /* 119b6c4f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 119b6c55 push eax */
  push32((uint32_t)(EAX));
  /* 119b6c56 call 0x119bc460 */
  push32(0x119b6c5bu); f_119bc460();
  /* 119b6c5b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6c5e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 119b6c64 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 119b6c6a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119b6c6b push edx */
  push32((uint32_t)(EDX));
  /* 119b6c6c push eax */
  push32((uint32_t)(EAX));
  /* 119b6c6d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 119b6c73 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6c74 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 119b6c7a push edx */
  push32((uint32_t)(EDX));
  /* 119b6c7b call 0x119bc3f0 */
  push32(0x119b6c80u); f_119bc3f0();
  /* 119b6c80 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 119b6c86 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 119b6c8c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6c93 jle 0x119b6ca7 */
  if ((C.zf||C.sf!=C.of)) goto L_119b6ca7;
  /* 119b6c95 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 119b6c9b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6ca1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_119b6ca7:;
  /* 119b6ca7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b6caa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 119b6cb0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 119b6cb2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b6cb5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b6cb8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119b6cbb jmp 0x119b6c12 */
  goto L_119b6c12;
L_119b6cc0:;
  /* 119b6cc0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 119b6cc3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b6cc6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119b6cc9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b6ccc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6ccf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 119b6cd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6cd5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 119b6cda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6cdc je 0x119b6d07 */
  if (C.zf) goto L_119b6d07;
  /* 119b6cde mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b6ce1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119b6ce4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6ce7 jne 0x119b6cef */
  if (!C.zf) goto L_119b6cef;
  /* 119b6ce9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6ced jne 0x119b6d07 */
  if (!C.zf) goto L_119b6d07;
L_119b6cef:;
  /* 119b6cef mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b6cf2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b6cf5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119b6cf8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b6cfb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 119b6cfe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119b6d01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6d04 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_119b6d07:;
  /* 119b6d07 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6d0e jne 0x119b6ee2 */
  if (!C.zf) goto L_119b6ee2;
  /* 119b6d14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6d17 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 119b6d1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6d1c je 0x119b6d6d */
  if (C.zf) goto L_119b6d6d;
  /* 119b6d1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6d21 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 119b6d27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b6d29 je 0x119b6d3b */
  if (C.zf) goto L_119b6d3b;
  /* 119b6d2b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 119b6d32 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 119b6d39 jmp 0x119b6d6d */
  goto L_119b6d6d;
L_119b6d3b:;
  /* 119b6d3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6d3e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119b6d41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6d43 je 0x119b6d55 */
  if (C.zf) goto L_119b6d55;
  /* 119b6d45 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 119b6d4c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 119b6d53 jmp 0x119b6d6d */
  goto L_119b6d6d;
L_119b6d55:;
  /* 119b6d55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6d58 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 119b6d5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b6d5d je 0x119b6d6d */
  if (C.zf) goto L_119b6d6d;
  /* 119b6d5f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 119b6d66 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_119b6d6d:;
  /* 119b6d6d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 119b6d73 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b6d76 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b6d79 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 119b6d7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6d82 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 119b6d85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6d87 jne 0x119b6da5 */
  if (!C.zf) goto L_119b6da5;
  /* 119b6d89 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 119b6d8f push eax */
  push32((uint32_t)(EAX));
  /* 119b6d90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b6d93 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6d94 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 119b6d9a push edx */
  push32((uint32_t)(EDX));
  /* 119b6d9b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 119b6d9d call 0x119b7080 */
  push32(0x119b6da2u); f_119b7080();
  /* 119b6da2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b6da5:;
  /* 119b6da5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 119b6dab push eax */
  push32((uint32_t)(EAX));
  /* 119b6dac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b6daf push ecx */
  push32((uint32_t)(ECX));
  /* 119b6db0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b6db3 push edx */
  push32((uint32_t)(EDX));
  /* 119b6db4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 119b6dba push eax */
  push32((uint32_t)(EAX));
  /* 119b6dbb call 0x119b70c0 */
  push32(0x119b6dc0u); f_119b70c0();
  /* 119b6dc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6dc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6dc6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 119b6dc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b6dcb je 0x119b6df3 */
  if (C.zf) goto L_119b6df3;
  /* 119b6dcd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6dd0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119b6dd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6dd5 jne 0x119b6df3 */
  if (!C.zf) goto L_119b6df3;
  /* 119b6dd7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 119b6ddd push eax */
  push32((uint32_t)(EAX));
  /* 119b6dde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b6de1 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6de2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 119b6de8 push edx */
  push32((uint32_t)(EDX));
  /* 119b6de9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 119b6deb call 0x119b7080 */
  push32(0x119b6df0u); f_119b7080();
  /* 119b6df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b6df3:;
  /* 119b6df3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6df7 je 0x119b6ea1 */
  if (C.zf) goto L_119b6ea1;
  /* 119b6dfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6e01 jle 0x119b6ea1 */
  if ((C.zf||C.sf!=C.of)) goto L_119b6ea1;
  /* 119b6e07 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b6e0a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 119b6e10 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119b6e13 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_119b6e19:;
  /* 119b6e19 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 119b6e1f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 119b6e25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b6e28 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 119b6e2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6e30 je 0x119b6e9f */
  if (C.zf) goto L_119b6e9f;
  /* 119b6e32 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 119b6e38 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 119b6e3b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 119b6e42 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 119b6e49 push eax */
  push32((uint32_t)(EAX));
  /* 119b6e4a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 119b6e50 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6e51 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 119b6e57 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6e5a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 119b6e60 call 0x119bc2d0 */
  push32(0x119b6e65u); f_119bc2d0();
  /* 119b6e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6e68 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 119b6e6e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b6e75 jg 0x119b6e79 */
  if ((!C.zf&&C.sf==C.of)) goto L_119b6e79;
  /* 119b6e77 jmp 0x119b6e9f */
  goto L_119b6e9f;
L_119b6e79:;
  /* 119b6e79 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 119b6e7f push eax */
  push32((uint32_t)(EAX));
  /* 119b6e80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b6e83 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6e84 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 119b6e8a push edx */
  push32((uint32_t)(EDX));
  /* 119b6e8b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 119b6e91 push eax */
  push32((uint32_t)(EAX));
  /* 119b6e92 call 0x119b70c0 */
  push32(0x119b6e97u); f_119b70c0();
  /* 119b6e97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b6e9a jmp 0x119b6e19 */
  goto L_119b6e19;
L_119b6e9f:;
  /* 119b6e9f jmp 0x119b6ebc */
  goto L_119b6ebc;
L_119b6ea1:;
  /* 119b6ea1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 119b6ea7 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6ea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b6eab push edx */
  push32((uint32_t)(EDX));
  /* 119b6eac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119b6eaf push eax */
  push32((uint32_t)(EAX));
  /* 119b6eb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119b6eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6eb4 call 0x119b70c0 */
  push32(0x119b6eb9u); f_119b70c0();
  /* 119b6eb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b6ebc:;
  /* 119b6ebc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b6ebf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119b6ec2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b6ec4 je 0x119b6ee2 */
  if (C.zf) goto L_119b6ee2;
  /* 119b6ec6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 119b6ecc push eax */
  push32((uint32_t)(EAX));
  /* 119b6ecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b6ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 119b6ed1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 119b6ed7 push edx */
  push32((uint32_t)(EDX));
  /* 119b6ed8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 119b6eda call 0x119b7080 */
  push32(0x119b6edfu); f_119b7080();
  /* 119b6edf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b6ee2:;
  /* 119b6ee2 jmp 0x119b62f4 */
  goto L_119b62f4;
L_119b6ee7:;
  /* 119b6ee7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 119b6eed pop edi */
  EDI = (pop32());
  /* 119b6eee pop esi */
  ESI = (pop32());
  /* 119b6eef pop ebx */
  EBX = (pop32());
  /* 119b6ef0 mov esp, ebp */
  ESP = (EBP);
  /* 119b6ef2 pop ebp */
  EBP = (pop32());
  /* 119b6ef3 ret  */
  ESPCHK(0x119b62d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x119b7000 (119 bytes, 44 insns) */
void f_119b7000(void) {
  FTRACE(0x119b7000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7000 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7001 mov ebp, esp */
  EBP = (ESP);
  /* 119b7003 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7004 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7007 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119b700a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b700d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7010 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119b7013 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7016 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b701a jl 0x119b7042 */
  if ((C.sf!=C.of)) goto L_119b7042;
  /* 119b701c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b701f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119b7021 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 119b7024 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 119b7026 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 119b702a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b7030 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b7033 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7036 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119b7038 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b703b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b703e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119b7040 jmp 0x119b7055 */
  goto L_119b7055;
L_119b7042:;
  /* 119b7042 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7045 push edx */
  push32((uint32_t)(EDX));
  /* 119b7046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7049 push eax */
  push32((uint32_t)(EAX));
  /* 119b704a call 0x119b6050 */
  push32(0x119b704fu); f_119b6050();
  /* 119b704f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7052 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119b7055:;
  /* 119b7055 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7059 jne 0x119b7066 */
  if (!C.zf) goto L_119b7066;
  /* 119b705b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b705e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 119b7064 jmp 0x119b7073 */
  goto L_119b7073;
L_119b7066:;
  /* 119b7066 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b7069 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119b706b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b706e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b7071 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_119b7073:;
  /* 119b7073 mov esp, ebp */
  ESP = (EBP);
  /* 119b7075 pop ebp */
  EBP = (pop32());
  /* 119b7076 ret  */
  ESPCHK(0x119b7000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x119b7080 (53 bytes, 23 insns) */
void f_119b7080(void) {
  FTRACE(0x119b7080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7080 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7081 mov ebp, esp */
  EBP = (ESP);
L_119b7083:;
  /* 119b7083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7086 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7089 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b708c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119b708f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b7091 jle 0x119b70b3 */
  if ((C.zf||C.sf!=C.of)) goto L_119b70b3;
  /* 119b7093 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b7096 push edx */
  push32((uint32_t)(EDX));
  /* 119b7097 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b709a push eax */
  push32((uint32_t)(EAX));
  /* 119b709b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b709e push ecx */
  push32((uint32_t)(ECX));
  /* 119b709f call 0x119b7000 */
  push32(0x119b70a4u); f_119b7000();
  /* 119b70a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b70a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b70aa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b70ad jne 0x119b70b1 */
  if (!C.zf) goto L_119b70b1;
  /* 119b70af jmp 0x119b70b3 */
  goto L_119b70b3;
L_119b70b1:;
  /* 119b70b1 jmp 0x119b7083 */
  goto L_119b7083;
L_119b70b3:;
  /* 119b70b3 pop ebp */
  EBP = (pop32());
  /* 119b70b4 ret  */
  ESPCHK(0x119b7080u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c0 @ 0x119b70c0 (74 bytes, 31 insns) */
void f_119b70c0(void) {
  FTRACE(0x119b70c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b70c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b70c1 mov ebp, esp */
  EBP = (ESP);
  /* 119b70c3 push ecx */
  push32((uint32_t)(ECX));
L_119b70c4:;
  /* 119b70c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b70c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b70ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b70cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119b70d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b70d2 jle 0x119b7106 */
  if ((C.zf||C.sf!=C.of)) goto L_119b7106;
  /* 119b70d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b70d7 push edx */
  push32((uint32_t)(EDX));
  /* 119b70d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b70db push eax */
  push32((uint32_t)(EAX));
  /* 119b70dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b70df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119b70e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b70e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b70e8 push eax */
  push32((uint32_t)(EAX));
  /* 119b70e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b70ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b70ef mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 119b70f2 call 0x119b7000 */
  push32(0x119b70f7u); f_119b7000();
  /* 119b70f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b70fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b70fd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7100 jne 0x119b7104 */
  if (!C.zf) goto L_119b7104;
  /* 119b7102 jmp 0x119b7106 */
  goto L_119b7106;
L_119b7104:;
  /* 119b7104 jmp 0x119b70c4 */
  goto L_119b70c4;
L_119b7106:;
  /* 119b7106 mov esp, ebp */
  ESP = (EBP);
  /* 119b7108 pop ebp */
  EBP = (pop32());
  /* 119b7109 ret  */
  ESPCHK(0x119b70c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007110 @ 0x119b7110 (26 bytes, 12 insns) */
void f_119b7110(void) {
  FTRACE(0x119b7110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7110 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7111 mov ebp, esp */
  EBP = (ESP);
  /* 119b7113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7116 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119b7118 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b711b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b711e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119b7120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7123 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119b7125 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 119b7128 pop ebp */
  EBP = (pop32());
  /* 119b7129 ret  */
  ESPCHK(0x119b7110u, _esp0);
  ESP += 4; return;
}

/* FUN_10007130 @ 0x119b7130 (31 bytes, 14 insns) */
void f_119b7130(void) {
  FTRACE(0x119b7130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7130 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7131 mov ebp, esp */
  EBP = (ESP);
  /* 119b7133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7136 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119b7138 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b713b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b713e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119b7140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7143 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119b7145 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7148 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119b714a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119b714d pop ebp */
  EBP = (pop32());
  /* 119b714e ret  */
  ESPCHK(0x119b7130u, _esp0);
  ESP += 4; return;
}

/* FUN_10007150 @ 0x119b7150 (27 bytes, 12 insns) */
void f_119b7150(void) {
  FTRACE(0x119b7150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7150 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7151 mov ebp, esp */
  EBP = (ESP);
  /* 119b7153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7156 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119b7158 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b715b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b715e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119b7160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7163 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119b7165 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 119b7169 pop ebp */
  EBP = (pop32());
  /* 119b716a ret  */
  ESPCHK(0x119b7150u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x119b7170 (23 bytes, 8 insns) */
void f_119b7170(void) {
  FTRACE(0x119b7170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7170 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7171 mov ebp, esp */
  EBP = (ESP);
  /* 119b7173 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 119b7178 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 119b717d call 0x119bc570 */
  push32(0x119b7182u); f_119bc570();
  /* 119b7182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7185 pop ebp */
  EBP = (pop32());
  /* 119b7186 ret  */
  ESPCHK(0x119b7170u, _esp0);
  ESP += 4; return;
}

/* FUN_10007190 @ 0x119b7190 (94 bytes, 30 insns) */
void f_119b7190(void) {
  FTRACE(0x119b7190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7190 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7191 mov ebp, esp */
  EBP = (ESP);
  /* 119b7193 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7196 push ebx */
  push32((uint32_t)(EBX));
  /* 119b7197 push esi */
  push32((uint32_t)(ESI));
  /* 119b7198 push edi */
  push32((uint32_t)(EDI));
  /* 119b7199 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 119b71a0 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 119b71a7 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 119b71ae mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 119b71b5 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 119b71b8 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 119b71bb fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 119b71be fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 119b71c1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 119b71c4 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 119b71c7 fcomp qword ptr [0x119e1720] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x119e1720)));
  (void)fpu_pop();
  /* 119b71cd fnstsw ax */
  AX = fpu_status();
  /* 119b71cf test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 119b71d2 jne 0x119b71dd */
  if (!C.zf) goto L_119b71dd;
  /* 119b71d4 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 119b71db jmp 0x119b71e4 */
  goto L_119b71e4;
L_119b71dd:;
  /* 119b71dd mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_119b71e4:;
  /* 119b71e4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119b71e7 pop edi */
  EDI = (pop32());
  /* 119b71e8 pop esi */
  ESI = (pop32());
  /* 119b71e9 pop ebx */
  EBX = (pop32());
  /* 119b71ea mov esp, ebp */
  ESP = (EBP);
  /* 119b71ec pop ebp */
  EBP = (pop32());
  /* 119b71ed ret  */
  ESPCHK(0x119b7190u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x119b71f0 (66 bytes, 22 insns) */
void f_119b71f0(void) {
  FTRACE(0x119b71f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b71f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b71f1 mov ebp, esp */
  EBP = (ESP);
  /* 119b71f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b71f6 push 0x119e1744 */
  push32((uint32_t)(0x119e1744u));
  /* 119b71fb call dword ptr [0x119e92e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92e4))), 0x119b7201u);
  /* 119b7201 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b7204 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7208 je 0x119b7229 */
  if (C.zf) goto L_119b7229;
  /* 119b720a push 0x119e1728 */
  push32((uint32_t)(0x119e1728u));
  /* 119b720f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7212 push eax */
  push32((uint32_t)(EAX));
  /* 119b7213 call dword ptr [0x119e93cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93cc))), 0x119b7219u);
  /* 119b7219 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119b721c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7220 je 0x119b7229 */
  if (C.zf) goto L_119b7229;
  /* 119b7222 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b7224 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x119b7227u);
  /* 119b7227 jmp 0x119b722e */
  goto L_119b722e;
L_119b7229:;
  /* 119b7229 call 0x119b7190 */
  push32(0x119b722eu); f_119b7190();
L_119b722e:;
  /* 119b722e mov esp, ebp */
  ESP = (EBP);
  /* 119b7230 pop ebp */
  EBP = (pop32());
  /* 119b7231 ret  */
  ESPCHK(0x119b71f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007240 @ 0x119b7240 (168 bytes, 59 insns) */
void f_119b7240(void) {
  FTRACE(0x119b7240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7240 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7241 mov ebp, esp */
  EBP = (ESP);
  /* 119b7243 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7249 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b724c push ecx */
  push32((uint32_t)(ECX));
  /* 119b724d call 0x119bca50 */
  push32(0x119b7252u); f_119bca50();
  /* 119b7252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7255 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7258 je 0x119b72a0 */
  if (C.zf) goto L_119b72a0;
L_119b725a:;
  /* 119b725a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b725d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7260 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119b7263 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b726a jle 0x119b7282 */
  if ((C.zf||C.sf!=C.of)) goto L_119b7282;
  /* 119b726c push 4 */
  push32((uint32_t)(0x4u));
  /* 119b726e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7271 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b7274 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7275 call 0x119bc980 */
  push32(0x119b727au); f_119bc980();
  /* 119b727a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b727d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119b7280 jmp 0x119b729a */
  goto L_119b729a;
L_119b7282:;
  /* 119b7282 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7285 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119b7288 mov ecx, dword ptr [0x119e4e00] */
  ECX = (r32((uint32_t)(0x119e4e00)));
  /* 119b728e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b7290 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119b7294 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119b7297 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119b729a:;
  /* 119b729a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b729e jne 0x119b725a */
  if (!C.zf) goto L_119b725a;
L_119b72a0:;
  /* 119b72a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b72a3 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119b72a5 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 119b72a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b72ab mov al, byte ptr [0x119e5014] */
  AL = (r8((uint32_t)(0x119e5014)));
  /* 119b72b0 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 119b72b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b72b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b72b8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_119b72bb:;
  /* 119b72bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b72be mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119b72c0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 119b72c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b72c6 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 119b72c9 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 119b72cb mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 119b72ce mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 119b72d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b72d4 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119b72d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b72da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b72dd mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119b72e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b72e2 jne 0x119b72bb */
  if (!C.zf) goto L_119b72bb;
  /* 119b72e4 mov esp, ebp */
  ESP = (EBP);
  /* 119b72e6 pop ebp */
  EBP = (pop32());
  /* 119b72e7 ret  */
  ESPCHK(0x119b7240u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x119b72f0 (215 bytes, 78 insns) */
void f_119b72f0(void) {
  FTRACE(0x119b72f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b72f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b72f1 mov ebp, esp */
  EBP = (ESP);
  /* 119b72f3 push ecx */
  push32((uint32_t)(ECX));
L_119b72f4:;
  /* 119b72f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b72f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b72fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b72fc je 0x119b731a */
  if (C.zf) goto L_119b731a;
  /* 119b72fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7301 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119b7304 movsx ecx, byte ptr [0x119e5014] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x119e5014))));
  /* 119b730b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b730d je 0x119b731a */
  if (C.zf) goto L_119b731a;
  /* 119b730f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7312 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7315 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119b7318 jmp 0x119b72f4 */
  goto L_119b72f4;
L_119b731a:;
  /* 119b731a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b731d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b7320 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7323 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7326 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119b7329 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b732b je 0x119b73c3 */
  if (C.zf) goto L_119b73c3;
L_119b7331:;
  /* 119b7331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7334 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b7337 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b7339 je 0x119b735c */
  if (C.zf) goto L_119b735c;
  /* 119b733b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b733e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119b7341 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7344 je 0x119b735c */
  if (C.zf) goto L_119b735c;
  /* 119b7346 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7349 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119b734c cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b734f je 0x119b735c */
  if (C.zf) goto L_119b735c;
  /* 119b7351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7354 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7357 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119b735a jmp 0x119b7331 */
  goto L_119b7331;
L_119b735c:;
  /* 119b735c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b735f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b7362 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7365 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7368 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_119b736b:;
  /* 119b736b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b736e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b7371 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7374 jne 0x119b7381 */
  if (!C.zf) goto L_119b7381;
  /* 119b7376 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7379 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b737c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119b737f jmp 0x119b736b */
  goto L_119b736b;
L_119b7381:;
  /* 119b7381 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7384 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b7387 movsx edx, byte ptr [0x119e5014] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x119e5014))));
  /* 119b738e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7390 jne 0x119b739b */
  if (!C.zf) goto L_119b739b;
  /* 119b7392 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7395 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7398 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_119b739b:;
  /* 119b739b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b739e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b73a1 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 119b73a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b73a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b73aa mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119b73ac mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 119b73ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b73b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119b73b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b73b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b73ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b73bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b73bf je 0x119b73c3 */
  if (C.zf) goto L_119b73c3;
  /* 119b73c1 jmp 0x119b739b */
  goto L_119b739b;
L_119b73c3:;
  /* 119b73c3 mov esp, ebp */
  ESP = (EBP);
  /* 119b73c5 pop ebp */
  EBP = (pop32());
  /* 119b73c6 ret  */
  ESPCHK(0x119b72f0u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x119b73d0 (45 bytes, 16 insns) */
void f_119b73d0(void) {
  FTRACE(0x119b73d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b73d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b73d1 mov ebp, esp */
  EBP = (ESP);
  /* 119b73d3 push ecx */
  push32((uint32_t)(ECX));
  /* 119b73d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b73d7 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 119b73d9 fcomp qword ptr [0x119e1750] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x119e1750)));
  (void)fpu_pop();
  /* 119b73df fnstsw ax */
  AX = fpu_status();
  /* 119b73e1 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 119b73e4 jne 0x119b73ef */
  if (!C.zf) goto L_119b73ef;
  /* 119b73e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119b73ed jmp 0x119b73f6 */
  goto L_119b73f6;
L_119b73ef:;
  /* 119b73ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119b73f6:;
  /* 119b73f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b73f9 mov esp, ebp */
  ESP = (EBP);
  /* 119b73fb pop ebp */
  EBP = (pop32());
  /* 119b73fc ret  */
  ESPCHK(0x119b73d0u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x119b7400 (72 bytes, 29 insns) */
void f_119b7400(void) {
  FTRACE(0x119b7400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7400 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7401 mov ebp, esp */
  EBP = (ESP);
  /* 119b7403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7406 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b740a je 0x119b742c */
  if (C.zf) goto L_119b742c;
  /* 119b740c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b740f push eax */
  push32((uint32_t)(EAX));
  /* 119b7410 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 119b7413 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7414 call 0x119bd340 */
  push32(0x119b7419u); f_119bd340();
  /* 119b7419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b741c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b741f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b7422 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119b7424 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7427 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119b742a jmp 0x119b7444 */
  goto L_119b7444;
L_119b742c:;
  /* 119b742c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b742f push edx */
  push32((uint32_t)(EDX));
  /* 119b7430 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 119b7433 push eax */
  push32((uint32_t)(EAX));
  /* 119b7434 call 0x119bd3c0 */
  push32(0x119b7439u); f_119bd3c0();
  /* 119b7439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b743c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b743f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b7442 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_119b7444:;
  /* 119b7444 mov esp, ebp */
  ESP = (EBP);
  /* 119b7446 pop ebp */
  EBP = (pop32());
  /* 119b7447 ret  */
  ESPCHK(0x119b7400u, _esp0);
  ESP += 4; return;
}

/* FUN_10007450 @ 0x119b7450 (118 bytes, 49 insns) */
void f_119b7450(void) {
  FTRACE(0x119b7450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7450 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7451 mov ebp, esp */
  EBP = (ESP);
  /* 119b7453 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7456 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 119b7459 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b745c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 119b745f push ecx */
  push32((uint32_t)(ECX));
  /* 119b7460 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 119b7463 push edx */
  push32((uint32_t)(EDX));
  /* 119b7464 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7467 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119b746a push ecx */
  push32((uint32_t)(ECX));
  /* 119b746b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 119b746d push edx */
  push32((uint32_t)(EDX));
  /* 119b746e call 0x119bd500 */
  push32(0x119b7473u); f_119bd500();
  /* 119b7473 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7476 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7479 push eax */
  push32((uint32_t)(EAX));
  /* 119b747a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b747d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7480 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b7486 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7489 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 119b748c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b748f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7491 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b7493 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7497 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 119b749a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b749c push ecx */
  push32((uint32_t)(ECX));
  /* 119b749d call 0x119bd400 */
  push32(0x119b74a2u); f_119bd400();
  /* 119b74a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b74a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b74a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b74aa push eax */
  push32((uint32_t)(EAX));
  /* 119b74ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b74ae push ecx */
  push32((uint32_t)(ECX));
  /* 119b74af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b74b2 push edx */
  push32((uint32_t)(EDX));
  /* 119b74b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b74b6 push eax */
  push32((uint32_t)(EAX));
  /* 119b74b7 call 0x119b74d0 */
  push32(0x119b74bcu); f_119b74d0();
  /* 119b74bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b74bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b74c2 mov esp, ebp */
  ESP = (EBP);
  /* 119b74c4 pop ebp */
  EBP = (pop32());
  /* 119b74c5 ret  */
  ESPCHK(0x119b7450u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d0 @ 0x119b74d0 (358 bytes, 128 insns) */
void f_119b74d0(void) {
  FTRACE(0x119b74d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b74d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b74d1 mov ebp, esp */
  EBP = (ESP);
  /* 119b74d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b74d6 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 119b74da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b74dc je 0x119b7507 */
  if (C.zf) goto L_119b7507;
  /* 119b74de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b74e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b74e3 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b74e6 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 119b74e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b74ec add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b74ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b74f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b74f3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b74f7 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 119b74fa push ecx */
  push32((uint32_t)(ECX));
  /* 119b74fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b74fe push edx */
  push32((uint32_t)(EDX));
  /* 119b74ff call 0x119b7940 */
  push32(0x119b7504u); f_119b7940();
  /* 119b7504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7507:;
  /* 119b7507 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b750a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b750d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b7510 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7513 jne 0x119b7524 */
  if (!C.zf) goto L_119b7524;
  /* 119b7515 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7518 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 119b751b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b751e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7521 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119b7524:;
  /* 119b7524 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7528 jle 0x119b7548 */
  if ((C.zf||C.sf!=C.of)) goto L_119b7548;
  /* 119b752a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b752d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7530 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 119b7533 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119b7535 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7538 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b753b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b753e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7541 mov al, byte ptr [0x119e5014] */
  AL = (r8((uint32_t)(0x119e5014)));
  /* 119b7546 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_119b7548:;
  /* 119b7548 push 0x119e1758 */
  push32((uint32_t)(0x119e1758u));
  /* 119b754d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7550 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7553 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 119b7557 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119b7559 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b755b inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 119b755c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b755e push ecx */
  push32((uint32_t)(ECX));
  /* 119b755f call 0x119bb1c0 */
  push32(0x119b7564u); f_119bb1c0();
  /* 119b7564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7567 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b756a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b756e je 0x119b7576 */
  if (C.zf) goto L_119b7576;
  /* 119b7570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7573 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_119b7576:;
  /* 119b7576 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7579 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b757c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b757f mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b7582 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119b7585 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b7588 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b758b je 0x119b762f */
  if (C.zf) goto L_119b762f;
  /* 119b7591 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b7594 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119b7597 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b759a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119b759d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b75a1 jge 0x119b75b1 */
  if ((C.sf==C.of)) goto L_119b75b1;
  /* 119b75a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b75a6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119b75a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119b75ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b75ae mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_119b75b1:;
  /* 119b75b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b75b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b75b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b75ba cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b75be jl 0x119b75e5 */
  if ((C.sf!=C.of)) goto L_119b75e5;
  /* 119b75c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b75c3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119b75c4 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 119b75c9 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119b75cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b75ce mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 119b75d0 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 119b75d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b75d5 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 119b75d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b75da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119b75db mov ecx, 0x64 */
  ECX = (0x64u);
  /* 119b75e0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119b75e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119b75e5:;
  /* 119b75e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b75e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b75eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b75ee cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b75f2 jl 0x119b7619 */
  if ((C.sf!=C.of)) goto L_119b7619;
  /* 119b75f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b75f7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119b75f8 mov ecx, 0xa */
  ECX = (0xau);
  /* 119b75fd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119b75ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7602 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 119b7604 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 119b7606 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7609 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 119b760b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b760e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119b760f mov ecx, 0xa */
  ECX = (0xau);
  /* 119b7614 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119b7616 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119b7619:;
  /* 119b7619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b761c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b761f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b7622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7625 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119b7627 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 119b762a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b762d mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_119b762f:;
  /* 119b762f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7632 mov esp, ebp */
  ESP = (EBP);
  /* 119b7634 pop ebp */
  EBP = (pop32());
  /* 119b7635 ret  */
  ESPCHK(0x119b74d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007640 @ 0x119b7640 (106 bytes, 44 insns) */
void f_119b7640(void) {
  FTRACE(0x119b7640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7640 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7641 mov ebp, esp */
  EBP = (ESP);
  /* 119b7643 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7646 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 119b7649 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b764c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 119b764f push ecx */
  push32((uint32_t)(ECX));
  /* 119b7650 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 119b7653 push edx */
  push32((uint32_t)(EDX));
  /* 119b7654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7657 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119b765a push ecx */
  push32((uint32_t)(ECX));
  /* 119b765b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 119b765d push edx */
  push32((uint32_t)(EDX));
  /* 119b765e call 0x119bd500 */
  push32(0x119b7663u); f_119bd500();
  /* 119b7663 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7669 push eax */
  push32((uint32_t)(EAX));
  /* 119b766a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b766d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b7670 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7673 push edx */
  push32((uint32_t)(EDX));
  /* 119b7674 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7677 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b7679 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b767c sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 119b767f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7682 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7684 push edx */
  push32((uint32_t)(EDX));
  /* 119b7685 call 0x119bd400 */
  push32(0x119b768au); f_119bd400();
  /* 119b768a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b768d push 0 */
  push32((uint32_t)(0x0u));
  /* 119b768f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7692 push eax */
  push32((uint32_t)(EAX));
  /* 119b7693 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b7696 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7697 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b769a push edx */
  push32((uint32_t)(EDX));
  /* 119b769b call 0x119b76b0 */
  push32(0x119b76a0u); f_119b76b0();
  /* 119b76a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b76a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b76a6 mov esp, ebp */
  ESP = (EBP);
  /* 119b76a8 pop ebp */
  EBP = (pop32());
  /* 119b76a9 ret  */
  ESPCHK(0x119b7640u, _esp0);
  ESP += 4; return;
}

/* FUN_100076b0 @ 0x119b76b0 (317 bytes, 113 insns) */
void f_119b76b0(void) {
  FTRACE(0x119b76b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b76b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b76b1 mov ebp, esp */
  EBP = (ESP);
  /* 119b76b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b76b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b76b9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119b76bc sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b76bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119b76c2 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 119b76c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b76c8 je 0x119b7703 */
  if (C.zf) goto L_119b7703;
  /* 119b76ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b76cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b76cf cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b76d2 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 119b76d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b76d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b76da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b76dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b76e0 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b76e3 jne 0x119b7703 */
  if (!C.zf) goto L_119b7703;
  /* 119b76e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b76e8 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b76eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119b76ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b76f1 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 119b76f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b76f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b76fa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119b76fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b7700 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_119b7703:;
  /* 119b7703 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7706 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b7709 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b770c cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b770f jne 0x119b7720 */
  if (!C.zf) goto L_119b7720;
  /* 119b7711 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7714 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 119b7717 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b771a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b771d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119b7720:;
  /* 119b7720 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b7723 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7727 jg 0x119b7748 */
  if ((!C.zf&&C.sf==C.of)) goto L_119b7748;
  /* 119b7729 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b772b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b772e push ecx */
  push32((uint32_t)(ECX));
  /* 119b772f call 0x119b7940 */
  push32(0x119b7734u); f_119b7940();
  /* 119b7734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7737 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b773a mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 119b773d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7740 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7743 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b7746 jmp 0x119b7754 */
  goto L_119b7754;
L_119b7748:;
  /* 119b7748 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b774b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b774e add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7751 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119b7754:;
  /* 119b7754 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7758 jle 0x119b77e6 */
  if ((C.zf||C.sf!=C.of)) goto L_119b77e6;
  /* 119b775e push 1 */
  push32((uint32_t)(0x1u));
  /* 119b7760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7763 push eax */
  push32((uint32_t)(EAX));
  /* 119b7764 call 0x119b7940 */
  push32(0x119b7769u); f_119b7940();
  /* 119b7769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b776c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b776f mov dl, byte ptr [0x119e5014] */
  DL = (r8((uint32_t)(0x119e5014)));
  /* 119b7775 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 119b7777 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b777a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b777d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b7780 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b7783 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7787 jge 0x119b77e6 */
  if ((C.sf==C.of)) goto L_119b77e6;
  /* 119b7789 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 119b778d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b778f je 0x119b779e */
  if (C.zf) goto L_119b779e;
  /* 119b7791 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b7794 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119b7797 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119b7799 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119b779c jmp 0x119b77c4 */
  goto L_119b77c4;
L_119b779e:;
  /* 119b779e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b77a1 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119b77a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119b77a6 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b77a9 jge 0x119b77b3 */
  if ((C.sf==C.of)) goto L_119b77b3;
  /* 119b77ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b77ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119b77b1 jmp 0x119b77be */
  goto L_119b77be;
L_119b77b3:;
  /* 119b77b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b77b6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119b77b9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119b77bb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_119b77be:;
  /* 119b77be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b77c1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_119b77c4:;
  /* 119b77c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b77c7 push edx */
  push32((uint32_t)(EDX));
  /* 119b77c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b77cb push eax */
  push32((uint32_t)(EAX));
  /* 119b77cc call 0x119b7940 */
  push32(0x119b77d1u); f_119b7940();
  /* 119b77d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b77d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b77d7 push ecx */
  push32((uint32_t)(ECX));
  /* 119b77d8 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 119b77da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b77dd push edx */
  push32((uint32_t)(EDX));
  /* 119b77de call 0x119bd6f0 */
  push32(0x119b77e3u); f_119bd6f0();
  /* 119b77e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b77e6:;
  /* 119b77e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b77e9 mov esp, ebp */
  ESP = (EBP);
  /* 119b77eb pop ebp */
  EBP = (pop32());
  /* 119b77ec ret  */
  ESPCHK(0x119b76b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077f0 @ 0x119b77f0 (229 bytes, 89 insns) */
void f_119b77f0(void) {
  FTRACE(0x119b77f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b77f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b77f1 mov ebp, esp */
  EBP = (ESP);
  /* 119b77f3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b77f6 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 119b77fa lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 119b77fd mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 119b7800 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 119b7803 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7804 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 119b7807 push edx */
  push32((uint32_t)(EDX));
  /* 119b7808 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b780b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119b780e push ecx */
  push32((uint32_t)(ECX));
  /* 119b780f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 119b7811 push edx */
  push32((uint32_t)(EDX));
  /* 119b7812 call 0x119bd500 */
  push32(0x119b7817u); f_119bd500();
  /* 119b7817 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b781a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119b781d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119b7820 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7823 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 119b7826 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119b7829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b782b cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b782e sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 119b7831 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7834 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7836 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b7839 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119b783c push edx */
  push32((uint32_t)(EDX));
  /* 119b783d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b7840 push eax */
  push32((uint32_t)(EAX));
  /* 119b7841 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7844 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7845 call 0x119bd400 */
  push32(0x119b784au); f_119bd400();
  /* 119b784a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b784d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119b7850 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119b7853 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7856 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b7858 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b785b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 119b785e mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 119b7861 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119b7864 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119b7867 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b786a mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 119b786d cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7871 jl 0x119b787b */
  if ((C.sf!=C.of)) goto L_119b787b;
  /* 119b7873 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 119b7876 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7879 jl 0x119b7897 */
  if ((C.sf!=C.of)) goto L_119b7897;
L_119b787b:;
  /* 119b787b push 1 */
  push32((uint32_t)(0x1u));
  /* 119b787d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119b7880 push edx */
  push32((uint32_t)(EDX));
  /* 119b7881 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b7884 push eax */
  push32((uint32_t)(EAX));
  /* 119b7885 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b7888 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7889 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b788c push edx */
  push32((uint32_t)(EDX));
  /* 119b788d call 0x119b74d0 */
  push32(0x119b7892u); f_119b74d0();
  /* 119b7892 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7895 jmp 0x119b78d1 */
  goto L_119b78d1;
L_119b7897:;
  /* 119b7897 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 119b789b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b789d je 0x119b78bb */
  if (C.zf) goto L_119b78bb;
L_119b789f:;
  /* 119b789f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b78a2 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119b78a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b78a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b78ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b78ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b78b0 je 0x119b78b4 */
  if (C.zf) goto L_119b78b4;
  /* 119b78b2 jmp 0x119b789f */
  goto L_119b789f;
L_119b78b4:;
  /* 119b78b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b78b7 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_119b78bb:;
  /* 119b78bb push 1 */
  push32((uint32_t)(0x1u));
  /* 119b78bd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119b78c0 push edx */
  push32((uint32_t)(EDX));
  /* 119b78c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b78c4 push eax */
  push32((uint32_t)(EAX));
  /* 119b78c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b78c8 push ecx */
  push32((uint32_t)(ECX));
  /* 119b78c9 call 0x119b76b0 */
  push32(0x119b78ceu); f_119b76b0();
  /* 119b78ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b78d1:;
  /* 119b78d1 mov esp, ebp */
  ESP = (EBP);
  /* 119b78d3 pop ebp */
  EBP = (pop32());
  /* 119b78d4 ret  */
  ESPCHK(0x119b77f0u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x119b78e0 (95 bytes, 40 insns) */
void f_119b78e0(void) {
  FTRACE(0x119b78e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b78e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b78e1 mov ebp, esp */
  EBP = (ESP);
  /* 119b78e3 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b78e7 je 0x119b78ef */
  if (C.zf) goto L_119b78ef;
  /* 119b78e9 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b78ed jne 0x119b7909 */
  if (!C.zf) goto L_119b7909;
L_119b78ef:;
  /* 119b78ef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b78f2 push eax */
  push32((uint32_t)(EAX));
  /* 119b78f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b78f6 push ecx */
  push32((uint32_t)(ECX));
  /* 119b78f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b78fa push edx */
  push32((uint32_t)(EDX));
  /* 119b78fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b78fe push eax */
  push32((uint32_t)(EAX));
  /* 119b78ff call 0x119b7450 */
  push32(0x119b7904u); f_119b7450();
  /* 119b7904 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7907 jmp 0x119b793d */
  goto L_119b793d;
L_119b7909:;
  /* 119b7909 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b790d jne 0x119b7925 */
  if (!C.zf) goto L_119b7925;
  /* 119b790f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b7912 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7913 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7916 push edx */
  push32((uint32_t)(EDX));
  /* 119b7917 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b791a push eax */
  push32((uint32_t)(EAX));
  /* 119b791b call 0x119b7640 */
  push32(0x119b7920u); f_119b7640();
  /* 119b7920 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7923 jmp 0x119b793d */
  goto L_119b793d;
L_119b7925:;
  /* 119b7925 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b7928 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7929 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b792c push edx */
  push32((uint32_t)(EDX));
  /* 119b792d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b7930 push eax */
  push32((uint32_t)(EAX));
  /* 119b7931 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7934 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7935 call 0x119b77f0 */
  push32(0x119b793au); f_119b77f0();
  /* 119b793a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b793d:;
  /* 119b793d pop ebp */
  EBP = (pop32());
  /* 119b793e ret  */
  ESPCHK(0x119b78e0u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x119b7940 (46 bytes, 19 insns) */
void f_119b7940(void) {
  FTRACE(0x119b7940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7940 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7941 mov ebp, esp */
  EBP = (ESP);
  /* 119b7943 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7947 je 0x119b796c */
  if (C.zf) goto L_119b796c;
  /* 119b7949 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b794c push eax */
  push32((uint32_t)(EAX));
  /* 119b794d call 0x119bb040 */
  push32(0x119b7952u); f_119bb040();
  /* 119b7952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7955 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7958 push eax */
  push32((uint32_t)(EAX));
  /* 119b7959 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b795c push ecx */
  push32((uint32_t)(ECX));
  /* 119b795d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7960 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7963 push edx */
  push32((uint32_t)(EDX));
  /* 119b7964 call 0x119bd750 */
  push32(0x119b7969u); f_119bd750();
  /* 119b7969 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b796c:;
  /* 119b796c pop ebp */
  EBP = (pop32());
  /* 119b796d ret  */
  ESPCHK(0x119b7940u, _esp0);
  ESP += 4; return;
}

/* FUN_10007970 @ 0x119b7970 (56 bytes, 15 insns) */
void f_119b7970(void) {
  FTRACE(0x119b7970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7970 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7971 mov ebp, esp */
  EBP = (ESP);
  /* 119b7973 cmp dword ptr [0x119e4a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e4a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b797a je 0x119b7982 */
  if (C.zf) goto L_119b7982;
  /* 119b797c call dword ptr [0x119e4a38] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e4a38))), 0x119b7982u);
L_119b7982:;
  /* 119b7982 push 0x119e4418 */
  push32((uint32_t)(0x119e4418u));
  /* 119b7987 push 0x119e4208 */
  push32((uint32_t)(0x119e4208u));
  /* 119b798c call 0x119b7b40 */
  push32(0x119b7991u); f_119b7b40();
  /* 119b7991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7994 push 0x119e4104 */
  push32((uint32_t)(0x119e4104u));
  /* 119b7999 push 0x119e4000 */
  push32((uint32_t)(0x119e4000u));
  /* 119b799e call 0x119b7b40 */
  push32(0x119b79a3u); f_119b7b40();
  /* 119b79a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b79a6 pop ebp */
  EBP = (pop32());
  /* 119b79a7 ret  */
  ESPCHK(0x119b7970u, _esp0);
  ESP += 4; return;
}

/* FUN_100079b0 @ 0x119b79b0 (21 bytes, 10 insns) */
void f_119b79b0(void) {
  FTRACE(0x119b79b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b79b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b79b1 mov ebp, esp */
  EBP = (ESP);
  /* 119b79b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b79b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b79b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b79ba push eax */
  push32((uint32_t)(EAX));
  /* 119b79bb call 0x119b7a30 */
  push32(0x119b79c0u); f_119b7a30();
  /* 119b79c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b79c3 pop ebp */
  EBP = (pop32());
  /* 119b79c4 ret  */
  ESPCHK(0x119b79b0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x119b79d0 (21 bytes, 10 insns) */
void f_119b79d0(void) {
  FTRACE(0x119b79d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b79d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b79d1 mov ebp, esp */
  EBP = (ESP);
  /* 119b79d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b79d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b79d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b79da push eax */
  push32((uint32_t)(EAX));
  /* 119b79db call 0x119b7a30 */
  push32(0x119b79e0u); f_119b7a30();
  /* 119b79e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b79e3 pop ebp */
  EBP = (pop32());
  /* 119b79e4 ret  */
  ESPCHK(0x119b79d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f0 @ 0x119b79f0 (19 bytes, 9 insns) */
void f_119b79f0(void) {
  FTRACE(0x119b79f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b79f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b79f1 mov ebp, esp */
  EBP = (ESP);
  /* 119b79f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b79f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b79f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b79f9 call 0x119b7a30 */
  push32(0x119b79feu); f_119b7a30();
  /* 119b79fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7a01 pop ebp */
  EBP = (pop32());
  /* 119b7a02 ret  */
  ESPCHK(0x119b79f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a10 @ 0x119b7a10 (19 bytes, 9 insns) */
void f_119b7a10(void) {
  FTRACE(0x119b7a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7a10 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7a11 mov ebp, esp */
  EBP = (ESP);
  /* 119b7a13 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b7a15 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b7a17 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b7a19 call 0x119b7a30 */
  push32(0x119b7a1eu); f_119b7a30();
  /* 119b7a1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7a21 pop ebp */
  EBP = (pop32());
  /* 119b7a22 ret  */
  ESPCHK(0x119b7a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a30 @ 0x119b7a30 (227 bytes, 61 insns) */
void f_119b7a30(void) {
  FTRACE(0x119b7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7a31 mov ebp, esp */
  EBP = (ESP);
  /* 119b7a33 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7a34 call 0x119b7b20 */
  push32(0x119b7a39u); f_119b7b20();
  /* 119b7a39 cmp dword ptr [0x119e7148], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7148))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7a40 jne 0x119b7a53 */
  if (!C.zf) goto L_119b7a53;
  /* 119b7a42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7a45 push eax */
  push32((uint32_t)(EAX));
  /* 119b7a46 call dword ptr [0x119e93e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93e8))), 0x119b7a4cu);
  /* 119b7a4c push eax */
  push32((uint32_t)(EAX));
  /* 119b7a4d call dword ptr [0x119e93e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93e4))), 0x119b7a53u);
L_119b7a53:;
  /* 119b7a53 mov dword ptr [0x119e7144], 1 */
  w32((uint32_t)(0x119e7144), (0x1u));
  /* 119b7a5d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 119b7a60 mov byte ptr [0x119e7140], cl */
  w8((uint32_t)(0x119e7140), (CL));
  /* 119b7a66 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7a6a jne 0x119b7ab3 */
  if (!C.zf) goto L_119b7ab3;
  /* 119b7a6c cmp dword ptr [0x119e8c38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8c38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7a73 je 0x119b7aa1 */
  if (C.zf) goto L_119b7aa1;
  /* 119b7a75 mov edx, dword ptr [0x119e8c34] */
  EDX = (r32((uint32_t)(0x119e8c34)));
  /* 119b7a7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119b7a7e:;
  /* 119b7a7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7a81 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7a84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b7a87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7a8a cmp ecx, dword ptr [0x119e8c38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e8c38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7a90 jb 0x119b7aa1 */
  if (C.cf) goto L_119b7aa1;
  /* 119b7a92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7a95 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7a98 je 0x119b7a9f */
  if (C.zf) goto L_119b7a9f;
  /* 119b7a9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7a9d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x119b7a9fu);
L_119b7a9f:;
  /* 119b7a9f jmp 0x119b7a7e */
  goto L_119b7a7e;
L_119b7aa1:;
  /* 119b7aa1 push 0x119e4724 */
  push32((uint32_t)(0x119e4724u));
  /* 119b7aa6 push 0x119e451c */
  push32((uint32_t)(0x119e451cu));
  /* 119b7aab call 0x119b7b40 */
  push32(0x119b7ab0u); f_119b7b40();
  /* 119b7ab0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7ab3:;
  /* 119b7ab3 push 0x119e492c */
  push32((uint32_t)(0x119e492cu));
  /* 119b7ab8 push 0x119e4828 */
  push32((uint32_t)(0x119e4828u));
  /* 119b7abd call 0x119b7b40 */
  push32(0x119b7ac2u); f_119b7b40();
  /* 119b7ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7ac5 cmp dword ptr [0x119e714c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e714c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7acc jne 0x119b7aee */
  if (!C.zf) goto L_119b7aee;
  /* 119b7ace push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119b7ad0 call 0x119b9720 */
  push32(0x119b7ad5u); f_119b9720();
  /* 119b7ad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7ad8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 119b7adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b7add je 0x119b7aee */
  if (C.zf) goto L_119b7aee;
  /* 119b7adf mov dword ptr [0x119e714c], 1 */
  w32((uint32_t)(0x119e714c), (0x1u));
  /* 119b7ae9 call 0x119ba030 */
  push32(0x119b7aeeu); f_119ba030();
L_119b7aee:;
  /* 119b7aee cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7af2 je 0x119b7afb */
  if (C.zf) goto L_119b7afb;
  /* 119b7af4 call 0x119b7b30 */
  push32(0x119b7af9u); f_119b7b30();
  /* 119b7af9 jmp 0x119b7b0f */
  goto L_119b7b0f;
L_119b7afb:;
  /* 119b7afb mov dword ptr [0x119e7148], 1 */
  w32((uint32_t)(0x119e7148), (0x1u));
  /* 119b7b05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7b08 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7b09 call dword ptr [0x119e93e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93e0))), 0x119b7b0fu);
L_119b7b0f:;
  /* 119b7b0f mov esp, ebp */
  ESP = (EBP);
  /* 119b7b11 pop ebp */
  EBP = (pop32());
  /* 119b7b12 ret  */
  ESPCHK(0x119b7a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b20 @ 0x119b7b20 (15 bytes, 7 insns) */
void f_119b7b20(void) {
  FTRACE(0x119b7b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7b20 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7b21 mov ebp, esp */
  EBP = (ESP);
  /* 119b7b23 push 0xd */
  push32((uint32_t)(0xdu));
  /* 119b7b25 call 0x119bdb80 */
  push32(0x119b7b2au); f_119bdb80();
  /* 119b7b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7b2d pop ebp */
  EBP = (pop32());
  /* 119b7b2e ret  */
  ESPCHK(0x119b7b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b30 @ 0x119b7b30 (15 bytes, 7 insns) */
void f_119b7b30(void) {
  FTRACE(0x119b7b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7b30 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7b31 mov ebp, esp */
  EBP = (ESP);
  /* 119b7b33 push 0xd */
  push32((uint32_t)(0xdu));
  /* 119b7b35 call 0x119bdc20 */
  push32(0x119b7b3au); f_119bdc20();
  /* 119b7b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7b3d pop ebp */
  EBP = (pop32());
  /* 119b7b3e ret  */
  ESPCHK(0x119b7b30u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x119b7b40 (37 bytes, 16 insns) */
void f_119b7b40(void) {
  FTRACE(0x119b7b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7b40 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7b41 mov ebp, esp */
  EBP = (ESP);
L_119b7b43:;
  /* 119b7b43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7b46 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7b49 jae 0x119b7b63 */
  if (!C.cf) goto L_119b7b63;
  /* 119b7b4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7b4e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7b51 je 0x119b7b58 */
  if (C.zf) goto L_119b7b58;
  /* 119b7b53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7b56 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x119b7b58u);
L_119b7b58:;
  /* 119b7b58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7b5b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7b5e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119b7b61 jmp 0x119b7b43 */
  goto L_119b7b43;
L_119b7b63:;
  /* 119b7b63 pop ebp */
  EBP = (pop32());
  /* 119b7b64 ret  */
  ESPCHK(0x119b7b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b70 @ 0x119b7b70 (130 bytes, 42 insns) */
void f_119b7b70(void) {
  FTRACE(0x119b7b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7b70 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7b71 mov ebp, esp */
  EBP = (ESP);
  /* 119b7b73 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7b74 call 0x119bdaa0 */
  push32(0x119b7b79u); f_119bdaa0();
  /* 119b7b79 call dword ptr [0x119e93f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93f4))), 0x119b7b7fu);
  /* 119b7b7f mov dword ptr [0x119e4a90], eax */
  w32((uint32_t)(0x119e4a90), (EAX));
  /* 119b7b84 cmp dword ptr [0x119e4a90], -1 */
  { uint32_t _a=(r32((uint32_t)(0x119e4a90))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7b8b jne 0x119b7b91 */
  if (!C.zf) goto L_119b7b91;
  /* 119b7b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b7b8f jmp 0x119b7bee */
  goto L_119b7bee;
L_119b7b91:;
  /* 119b7b91 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 119b7b93 push 0x119e1760 */
  push32((uint32_t)(0x119e1760u));
  /* 119b7b98 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7b9a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 119b7b9c push 1 */
  push32((uint32_t)(0x1u));
  /* 119b7b9e call 0x119b8620 */
  push32(0x119b7ba3u); f_119b8620();
  /* 119b7ba3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7ba6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b7ba9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7bad je 0x119b7bc4 */
  if (C.zf) goto L_119b7bc4;
  /* 119b7baf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7bb2 push eax */
  push32((uint32_t)(EAX));
  /* 119b7bb3 mov ecx, dword ptr [0x119e4a90] */
  ECX = (r32((uint32_t)(0x119e4a90)));
  /* 119b7bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7bba call dword ptr [0x119e93f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93f0))), 0x119b7bc0u);
  /* 119b7bc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b7bc2 jne 0x119b7bc8 */
  if (!C.zf) goto L_119b7bc8;
L_119b7bc4:;
  /* 119b7bc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b7bc6 jmp 0x119b7bee */
  goto L_119b7bee;
L_119b7bc8:;
  /* 119b7bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7bcb push edx */
  push32((uint32_t)(EDX));
  /* 119b7bcc call 0x119b7c30 */
  push32(0x119b7bd1u); f_119b7c30();
  /* 119b7bd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7bd4 call dword ptr [0x119e93ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93ec))), 0x119b7bdau);
  /* 119b7bda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7bdd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119b7bdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7be2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 119b7be9 mov eax, 1 */
  EAX = (0x1u);
L_119b7bee:;
  /* 119b7bee mov esp, ebp */
  ESP = (EBP);
  /* 119b7bf0 pop ebp */
  EBP = (pop32());
  /* 119b7bf1 ret  */
  ESPCHK(0x119b7b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c00 @ 0x119b7c00 (41 bytes, 11 insns) */
void f_119b7c00(void) {
  FTRACE(0x119b7c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7c00 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7c01 mov ebp, esp */
  EBP = (ESP);
  /* 119b7c03 call 0x119bdae0 */
  push32(0x119b7c08u); f_119bdae0();
  /* 119b7c08 cmp dword ptr [0x119e4a90], -1 */
  { uint32_t _a=(r32((uint32_t)(0x119e4a90))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7c0f je 0x119b7c27 */
  if (C.zf) goto L_119b7c27;
  /* 119b7c11 mov eax, dword ptr [0x119e4a90] */
  EAX = (r32((uint32_t)(0x119e4a90)));
  /* 119b7c16 push eax */
  push32((uint32_t)(EAX));
  /* 119b7c17 call dword ptr [0x119e93f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93f8))), 0x119b7c1du);
  /* 119b7c1d mov dword ptr [0x119e4a90], 0xffffffff */
  w32((uint32_t)(0x119e4a90), (0xffffffffu));
L_119b7c27:;
  /* 119b7c27 pop ebp */
  EBP = (pop32());
  /* 119b7c28 ret  */
  ESPCHK(0x119b7c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c30 @ 0x119b7c30 (25 bytes, 8 insns) */
void f_119b7c30(void) {
  FTRACE(0x119b7c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7c30 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7c31 mov ebp, esp */
  EBP = (ESP);
  /* 119b7c33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7c36 mov dword ptr [eax + 0x50], 0x119e5110 */
  w32((uint32_t)(EAX + 0x50), (0x119e5110u));
  /* 119b7c3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7c40 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 119b7c47 pop ebp */
  EBP = (pop32());
  /* 119b7c48 ret  */
  ESPCHK(0x119b7c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c50 @ 0x119b7c50 (152 bytes, 48 insns) */
void f_119b7c50(void) {
  FTRACE(0x119b7c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7c50 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7c51 mov ebp, esp */
  EBP = (ESP);
  /* 119b7c53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7c56 call dword ptr [0x119e9404] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9404))), 0x119b7c5cu);
  /* 119b7c5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119b7c5f mov eax, dword ptr [0x119e4a90] */
  EAX = (r32((uint32_t)(0x119e4a90)));
  /* 119b7c64 push eax */
  push32((uint32_t)(EAX));
  /* 119b7c65 call dword ptr [0x119e9400] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9400))), 0x119b7c6bu);
  /* 119b7c6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b7c6e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7c72 jne 0x119b7cd7 */
  if (!C.zf) goto L_119b7cd7;
  /* 119b7c74 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 119b7c79 push 0x119e1760 */
  push32((uint32_t)(0x119e1760u));
  /* 119b7c7e push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7c80 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 119b7c82 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b7c84 call 0x119b8620 */
  push32(0x119b7c89u); f_119b8620();
  /* 119b7c89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7c8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b7c8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7c93 je 0x119b7ccd */
  if (C.zf) goto L_119b7ccd;
  /* 119b7c95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7c98 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7c99 mov edx, dword ptr [0x119e4a90] */
  EDX = (r32((uint32_t)(0x119e4a90)));
  /* 119b7c9f push edx */
  push32((uint32_t)(EDX));
  /* 119b7ca0 call dword ptr [0x119e93f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93f0))), 0x119b7ca6u);
  /* 119b7ca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b7ca8 je 0x119b7ccd */
  if (C.zf) goto L_119b7ccd;
  /* 119b7caa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7cad push eax */
  push32((uint32_t)(EAX));
  /* 119b7cae call 0x119b7c30 */
  push32(0x119b7cb3u); f_119b7c30();
  /* 119b7cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7cb6 call dword ptr [0x119e93ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93ec))), 0x119b7cbcu);
  /* 119b7cbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7cbf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119b7cc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7cc4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 119b7ccb jmp 0x119b7cd7 */
  goto L_119b7cd7;
L_119b7ccd:;
  /* 119b7ccd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 119b7ccf call 0x119b5860 */
  push32(0x119b7cd4u); f_119b5860();
  /* 119b7cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7cd7:;
  /* 119b7cd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b7cda push eax */
  push32((uint32_t)(EAX));
  /* 119b7cdb call dword ptr [0x119e93fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93fc))), 0x119b7ce1u);
  /* 119b7ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7ce4 mov esp, ebp */
  ESP = (EBP);
  /* 119b7ce6 pop ebp */
  EBP = (pop32());
  /* 119b7ce7 ret  */
  ESPCHK(0x119b7c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x119b7cf0 (263 bytes, 86 insns) */
void f_119b7cf0(void) {
  FTRACE(0x119b7cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7cf1 mov ebp, esp */
  EBP = (ESP);
  /* 119b7cf3 cmp dword ptr [0x119e4a90], -1 */
  { uint32_t _a=(r32((uint32_t)(0x119e4a90))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7cfa je 0x119b7df5 */
  if (C.zf) goto L_119b7df5;
  /* 119b7d00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7d04 jne 0x119b7d15 */
  if (!C.zf) goto L_119b7d15;
  /* 119b7d06 mov eax, dword ptr [0x119e4a90] */
  EAX = (r32((uint32_t)(0x119e4a90)));
  /* 119b7d0b push eax */
  push32((uint32_t)(EAX));
  /* 119b7d0c call dword ptr [0x119e9400] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9400))), 0x119b7d12u);
  /* 119b7d12 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_119b7d15:;
  /* 119b7d15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7d19 je 0x119b7de6 */
  if (C.zf) goto L_119b7de6;
  /* 119b7d1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7d22 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7d26 je 0x119b7d39 */
  if (C.zf) goto L_119b7d39;
  /* 119b7d28 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7d2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7d2d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 119b7d30 push eax */
  push32((uint32_t)(EAX));
  /* 119b7d31 call 0x119b8ca0 */
  push32(0x119b7d36u); f_119b8ca0();
  /* 119b7d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7d39:;
  /* 119b7d39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7d3c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7d40 je 0x119b7d53 */
  if (C.zf) goto L_119b7d53;
  /* 119b7d42 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7d44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7d47 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 119b7d4a push eax */
  push32((uint32_t)(EAX));
  /* 119b7d4b call 0x119b8ca0 */
  push32(0x119b7d50u); f_119b8ca0();
  /* 119b7d50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7d53:;
  /* 119b7d53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7d56 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7d5a je 0x119b7d6d */
  if (C.zf) goto L_119b7d6d;
  /* 119b7d5c push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7d5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7d61 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 119b7d64 push eax */
  push32((uint32_t)(EAX));
  /* 119b7d65 call 0x119b8ca0 */
  push32(0x119b7d6au); f_119b8ca0();
  /* 119b7d6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7d6d:;
  /* 119b7d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7d70 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7d74 je 0x119b7d87 */
  if (C.zf) goto L_119b7d87;
  /* 119b7d76 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7d78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7d7b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 119b7d7e push eax */
  push32((uint32_t)(EAX));
  /* 119b7d7f call 0x119b8ca0 */
  push32(0x119b7d84u); f_119b8ca0();
  /* 119b7d84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7d87:;
  /* 119b7d87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7d8a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7d8e je 0x119b7da1 */
  if (C.zf) goto L_119b7da1;
  /* 119b7d90 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7d92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7d95 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 119b7d98 push eax */
  push32((uint32_t)(EAX));
  /* 119b7d99 call 0x119b8ca0 */
  push32(0x119b7d9eu); f_119b8ca0();
  /* 119b7d9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7da1:;
  /* 119b7da1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7da4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7da8 je 0x119b7dbb */
  if (C.zf) goto L_119b7dbb;
  /* 119b7daa push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7dac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7daf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 119b7db2 push eax */
  push32((uint32_t)(EAX));
  /* 119b7db3 call 0x119b8ca0 */
  push32(0x119b7db8u); f_119b8ca0();
  /* 119b7db8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7dbb:;
  /* 119b7dbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7dbe cmp dword ptr [ecx + 0x50], 0x119e5110 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x119e5110u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7dc5 je 0x119b7dd8 */
  if (C.zf) goto L_119b7dd8;
  /* 119b7dc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7dc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7dcc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 119b7dcf push eax */
  push32((uint32_t)(EAX));
  /* 119b7dd0 call 0x119b8ca0 */
  push32(0x119b7dd5u); f_119b8ca0();
  /* 119b7dd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7dd8:;
  /* 119b7dd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7dda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b7ddd push ecx */
  push32((uint32_t)(ECX));
  /* 119b7dde call 0x119b8ca0 */
  push32(0x119b7de3u); f_119b8ca0();
  /* 119b7de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7de6:;
  /* 119b7de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b7de8 mov edx, dword ptr [0x119e4a90] */
  EDX = (r32((uint32_t)(0x119e4a90)));
  /* 119b7dee push edx */
  push32((uint32_t)(EDX));
  /* 119b7def call dword ptr [0x119e93f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93f0))), 0x119b7df5u);
L_119b7df5:;
  /* 119b7df5 pop ebp */
  EBP = (pop32());
  /* 119b7df6 ret  */
  ESPCHK(0x119b7cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x119b7e00 (11 bytes, 5 insns) */
void f_119b7e00(void) {
  FTRACE(0x119b7e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7e00 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7e01 mov ebp, esp */
  EBP = (ESP);
  /* 119b7e03 call dword ptr [0x119e93ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93ec))), 0x119b7e09u);
  /* 119b7e09 pop ebp */
  EBP = (pop32());
  /* 119b7e0a ret  */
  ESPCHK(0x119b7e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e10 @ 0x119b7e10 (11 bytes, 5 insns) */
void f_119b7e10(void) {
  FTRACE(0x119b7e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7e10 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7e11 mov ebp, esp */
  EBP = (ESP);
  /* 119b7e13 call dword ptr [0x119e93d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93d8))), 0x119b7e19u);
  /* 119b7e19 pop ebp */
  EBP = (pop32());
  /* 119b7e1a ret  */
  ESPCHK(0x119b7e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e20 @ 0x119b7e20 (804 bytes, 236 insns) */
void f_119b7e20(void) {
  FTRACE(0x119b7e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b7e20 push ebp */
  push32((uint32_t)(EBP));
  /* 119b7e21 mov ebp, esp */
  EBP = (ESP);
  /* 119b7e23 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b7e26 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 119b7e2b push 0x119e176c */
  push32((uint32_t)(0x119e176cu));
  /* 119b7e30 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7e32 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 119b7e37 call 0x119b8210 */
  push32(0x119b7e3cu); f_119b8210();
  /* 119b7e3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7e3f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 119b7e42 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7e46 jne 0x119b7e52 */
  if (!C.zf) goto L_119b7e52;
  /* 119b7e48 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 119b7e4a call 0x119b5860 */
  push32(0x119b7e4fu); f_119b5860();
  /* 119b7e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b7e52:;
  /* 119b7e52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7e55 mov dword ptr [0x119e8ae0], eax */
  w32((uint32_t)(0x119e8ae0), (EAX));
  /* 119b7e5a mov dword ptr [0x119e8c1c], 0x20 */
  w32((uint32_t)(0x119e8c1c), (0x20u));
  /* 119b7e64 jmp 0x119b7e6f */
  goto L_119b7e6f;
L_119b7e66:;
  /* 119b7e66 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7e69 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7e6c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_119b7e6f:;
  /* 119b7e6f mov edx, dword ptr [0x119e8ae0] */
  EDX = (r32((uint32_t)(0x119e8ae0)));
  /* 119b7e75 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7e7b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7e7e jae 0x119b7ea3 */
  if (!C.cf) goto L_119b7ea3;
  /* 119b7e80 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7e83 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 119b7e87 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7e8a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 119b7e90 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7e93 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 119b7e97 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7e9a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 119b7ea1 jmp 0x119b7e66 */
  goto L_119b7e66;
L_119b7ea3:;
  /* 119b7ea3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 119b7ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 119b7ea7 call dword ptr [0x119e93a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a8))), 0x119b7eadu);
  /* 119b7ead mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 119b7eb0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b7eb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b7eb8 je 0x119b8045 */
  if (C.zf) goto L_119b8045;
  /* 119b7ebe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7ec2 je 0x119b8045 */
  if (C.zf) goto L_119b8045;
  /* 119b7ec8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119b7ecb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119b7ecd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 119b7ed0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119b7ed3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7ed6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b7ed9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7edc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7edf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 119b7ee2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7ee9 jge 0x119b7ef3 */
  if ((C.sf==C.of)) goto L_119b7ef3;
  /* 119b7eeb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 119b7eee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 119b7ef1 jmp 0x119b7efa */
  goto L_119b7efa;
L_119b7ef3:;
  /* 119b7ef3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_119b7efa:;
  /* 119b7efa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 119b7efd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 119b7f00 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 119b7f07 jmp 0x119b7f12 */
  goto L_119b7f12;
L_119b7f09:;
  /* 119b7f09 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 119b7f0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7f0f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_119b7f12:;
  /* 119b7f12 mov ecx, dword ptr [0x119e8c1c] */
  ECX = (r32((uint32_t)(0x119e8c1c)));
  /* 119b7f18 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7f1b jge 0x119b7fb2 */
  if ((C.sf==C.of)) goto L_119b7fb2;
  /* 119b7f21 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 119b7f26 push 0x119e176c */
  push32((uint32_t)(0x119e176cu));
  /* 119b7f2b push 2 */
  push32((uint32_t)(0x2u));
  /* 119b7f2d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 119b7f32 call 0x119b8210 */
  push32(0x119b7f37u); f_119b8210();
  /* 119b7f37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7f3a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 119b7f3d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7f41 jne 0x119b7f4e */
  if (!C.zf) goto L_119b7f4e;
  /* 119b7f43 mov edx, dword ptr [0x119e8c1c] */
  EDX = (r32((uint32_t)(0x119e8c1c)));
  /* 119b7f49 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 119b7f4c jmp 0x119b7fb2 */
  goto L_119b7fb2;
L_119b7f4e:;
  /* 119b7f4e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 119b7f51 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7f54 mov dword ptr [eax*4 + 0x119e8ae0], ecx */
  w32((uint32_t)(EAX*4 + 0x119e8ae0), (ECX));
  /* 119b7f5b mov edx, dword ptr [0x119e8c1c] */
  EDX = (r32((uint32_t)(0x119e8c1c)));
  /* 119b7f61 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7f64 mov dword ptr [0x119e8c1c], edx */
  w32((uint32_t)(0x119e8c1c), (EDX));
  /* 119b7f6a jmp 0x119b7f75 */
  goto L_119b7f75;
L_119b7f6c:;
  /* 119b7f6c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7f6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7f72 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_119b7f75:;
  /* 119b7f75 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 119b7f78 mov edx, dword ptr [ecx*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119b7f7f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7f85 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7f88 jae 0x119b7fad */
  if (!C.cf) goto L_119b7fad;
  /* 119b7f8a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7f8d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 119b7f91 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7f94 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 119b7f9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7f9d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 119b7fa1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b7fa4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 119b7fab jmp 0x119b7f6c */
  goto L_119b7f6c;
L_119b7fad:;
  /* 119b7fad jmp 0x119b7f09 */
  goto L_119b7f09;
L_119b7fb2:;
  /* 119b7fb2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 119b7fb9 jmp 0x119b7fd6 */
  goto L_119b7fd6;
L_119b7fbb:;
  /* 119b7fbb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 119b7fbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7fc1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 119b7fc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7fc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7fca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119b7fcd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 119b7fd0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b7fd3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_119b7fd6:;
  /* 119b7fd6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 119b7fd9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7fdc jge 0x119b8045 */
  if ((C.sf==C.of)) goto L_119b8045;
  /* 119b7fde mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 119b7fe1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b7fe4 je 0x119b8040 */
  if (C.zf) goto L_119b8040;
  /* 119b7fe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7fe9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119b7fec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119b7fef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b7ff1 je 0x119b8040 */
  if (C.zf) goto L_119b8040;
  /* 119b7ff3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b7ff6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119b7ff9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 119b7ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b7ffe jne 0x119b8010 */
  if (!C.zf) goto L_119b8010;
  /* 119b8000 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 119b8003 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119b8005 push edx */
  push32((uint32_t)(EDX));
  /* 119b8006 call dword ptr [0x119e93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93ac))), 0x119b800cu);
  /* 119b800c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b800e je 0x119b8040 */
  if (C.zf) goto L_119b8040;
L_119b8010:;
  /* 119b8010 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 119b8013 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119b8016 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 119b8019 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119b801c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119b801f mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119b8026 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8028 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 119b802b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b802e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 119b8031 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119b8033 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119b8035 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b8038 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b803b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119b803d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_119b8040:;
  /* 119b8040 jmp 0x119b7fbb */
  goto L_119b7fbb;
L_119b8045:;
  /* 119b8045 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 119b804c jmp 0x119b8057 */
  goto L_119b8057;
L_119b804e:;
  /* 119b804e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 119b8051 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8054 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_119b8057:;
  /* 119b8057 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b805b jge 0x119b8134 */
  if ((C.sf==C.of)) goto L_119b8134;
  /* 119b8061 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 119b8064 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119b8067 mov edx, dword ptr [0x119e8ae0] */
  EDX = (r32((uint32_t)(0x119e8ae0)));
  /* 119b806d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b806f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 119b8072 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b8075 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8078 jne 0x119b8120 */
  if (!C.zf) goto L_119b8120;
  /* 119b807e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b8081 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 119b8085 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8089 jne 0x119b8094 */
  if (!C.zf) goto L_119b8094;
  /* 119b808b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 119b8092 jmp 0x119b80a4 */
  goto L_119b80a4;
L_119b8094:;
  /* 119b8094 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 119b8097 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b809a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119b809c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b809e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b80a1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_119b80a4:;
  /* 119b80a4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 119b80a7 push eax */
  push32((uint32_t)(EAX));
  /* 119b80a8 call dword ptr [0x119e93bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93bc))), 0x119b80aeu);
  /* 119b80ae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 119b80b1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b80b5 je 0x119b810f */
  if (C.zf) goto L_119b810f;
  /* 119b80b7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 119b80ba push ecx */
  push32((uint32_t)(ECX));
  /* 119b80bb call dword ptr [0x119e93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93ac))), 0x119b80c1u);
  /* 119b80c1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 119b80c4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b80c8 je 0x119b810f */
  if (C.zf) goto L_119b810f;
  /* 119b80ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b80cd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 119b80d0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119b80d2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 119b80d5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b80db cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b80de jne 0x119b80f0 */
  if (!C.zf) goto L_119b80f0;
  /* 119b80e0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b80e3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 119b80e6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 119b80e8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b80eb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 119b80ee jmp 0x119b810d */
  goto L_119b810d;
L_119b80f0:;
  /* 119b80f0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 119b80f3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b80f9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b80fc jne 0x119b810d */
  if (!C.zf) goto L_119b810d;
  /* 119b80fe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b8101 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119b8104 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 119b8107 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b810a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_119b810d:;
  /* 119b810d jmp 0x119b811e */
  goto L_119b811e;
L_119b810f:;
  /* 119b810f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b8112 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119b8115 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 119b8118 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b811b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_119b811e:;
  /* 119b811e jmp 0x119b812f */
  goto L_119b812f;
L_119b8120:;
  /* 119b8120 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b8123 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119b8126 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 119b8129 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b812c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_119b812f:;
  /* 119b812f jmp 0x119b804e */
  goto L_119b804e;
L_119b8134:;
  /* 119b8134 mov eax, dword ptr [0x119e8c1c] */
  EAX = (r32((uint32_t)(0x119e8c1c)));
  /* 119b8139 push eax */
  push32((uint32_t)(EAX));
  /* 119b813a call dword ptr [0x119e93dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93dc))), 0x119b8140u);
  /* 119b8140 mov esp, ebp */
  ESP = (EBP);
  /* 119b8142 pop ebp */
  EBP = (pop32());
  /* 119b8143 ret  */
  ESPCHK(0x119b7e20u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x119b8150 (155 bytes, 45 insns) */
void f_119b8150(void) {
  FTRACE(0x119b8150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8150 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8151 mov ebp, esp */
  EBP = (ESP);
  /* 119b8153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b8156 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119b815d jmp 0x119b8168 */
  goto L_119b8168;
L_119b815f:;
  /* 119b815f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b8162 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8165 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119b8168:;
  /* 119b8168 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b816c jge 0x119b81e7 */
  if ((C.sf==C.of)) goto L_119b81e7;
  /* 119b816e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b8171 cmp dword ptr [ecx*4 + 0x119e8ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x119e8ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8179 je 0x119b81e2 */
  if (C.zf) goto L_119b81e2;
  /* 119b817b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b817e mov eax, dword ptr [edx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119e8ae0)));
  /* 119b8185 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b8188 jmp 0x119b8193 */
  goto L_119b8193;
L_119b818a:;
  /* 119b818a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b818d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8190 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119b8193:;
  /* 119b8193 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b8196 mov eax, dword ptr [edx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119e8ae0)));
  /* 119b819d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b81a2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b81a5 jae 0x119b81bf */
  if (!C.cf) goto L_119b81bf;
  /* 119b81a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b81aa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b81ae je 0x119b81bd */
  if (C.zf) goto L_119b81bd;
  /* 119b81b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b81b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b81b6 push edx */
  push32((uint32_t)(EDX));
  /* 119b81b7 call dword ptr [0x119e93a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a4))), 0x119b81bdu);
L_119b81bd:;
  /* 119b81bd jmp 0x119b818a */
  goto L_119b818a;
L_119b81bf:;
  /* 119b81bf push 2 */
  push32((uint32_t)(0x2u));
  /* 119b81c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b81c4 mov ecx, dword ptr [eax*4 + 0x119e8ae0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119b81cb push ecx */
  push32((uint32_t)(ECX));
  /* 119b81cc call 0x119b8ca0 */
  push32(0x119b81d1u); f_119b8ca0();
  /* 119b81d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b81d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b81d7 mov dword ptr [edx*4 + 0x119e8ae0], 0 */
  w32((uint32_t)(EDX*4 + 0x119e8ae0), (0x0u));
L_119b81e2:;
  /* 119b81e2 jmp 0x119b815f */
  goto L_119b815f;
L_119b81e7:;
  /* 119b81e7 mov esp, ebp */
  ESP = (EBP);
  /* 119b81e9 pop ebp */
  EBP = (pop32());
  /* 119b81ea ret  */
  ESPCHK(0x119b8150u, _esp0);
  ESP += 4; return;
}

/* FUN_100081f0 @ 0x119b81f0 (29 bytes, 13 insns) */
void f_119b81f0(void) {
  FTRACE(0x119b81f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b81f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b81f1 mov ebp, esp */
  EBP = (ESP);
  /* 119b81f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b81f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b81f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b81f9 mov eax, dword ptr [0x119e72f8] */
  EAX = (r32((uint32_t)(0x119e72f8)));
  /* 119b81fe push eax */
  push32((uint32_t)(EAX));
  /* 119b81ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8202 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8203 call 0x119b8260 */
  push32(0x119b8208u); f_119b8260();
  /* 119b8208 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b820b pop ebp */
  EBP = (pop32());
  /* 119b820c ret  */
  ESPCHK(0x119b81f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x119b8210 (35 bytes, 16 insns) */
void f_119b8210(void) {
  FTRACE(0x119b8210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8210 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8211 mov ebp, esp */
  EBP = (ESP);
  /* 119b8213 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b8216 push eax */
  push32((uint32_t)(EAX));
  /* 119b8217 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b821a push ecx */
  push32((uint32_t)(ECX));
  /* 119b821b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b821e push edx */
  push32((uint32_t)(EDX));
  /* 119b821f mov eax, dword ptr [0x119e72f8] */
  EAX = (r32((uint32_t)(0x119e72f8)));
  /* 119b8224 push eax */
  push32((uint32_t)(EAX));
  /* 119b8225 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8228 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8229 call 0x119b8260 */
  push32(0x119b822eu); f_119b8260();
  /* 119b822e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8231 pop ebp */
  EBP = (pop32());
  /* 119b8232 ret  */
  ESPCHK(0x119b8210u, _esp0);
  ESP += 4; return;
}

/* FUN_10008240 @ 0x119b8240 (27 bytes, 13 insns) */
void f_119b8240(void) {
  FTRACE(0x119b8240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8240 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8241 mov ebp, esp */
  EBP = (ESP);
  /* 119b8243 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8245 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8247 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8249 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b824c push eax */
  push32((uint32_t)(EAX));
  /* 119b824d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8250 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8251 call 0x119b8260 */
  push32(0x119b8256u); f_119b8260();
  /* 119b8256 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8259 pop ebp */
  EBP = (pop32());
  /* 119b825a ret  */
  ESPCHK(0x119b8240u, _esp0);
  ESP += 4; return;
}

/* FUN_10008260 @ 0x119b8260 (94 bytes, 38 insns) */
void f_119b8260(void) {
  FTRACE(0x119b8260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8260 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8261 mov ebp, esp */
  EBP = (ESP);
  /* 119b8263 push ecx */
  push32((uint32_t)(ECX));
L_119b8264:;
  /* 119b8264 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b8266 call 0x119bdb80 */
  push32(0x119b826bu); f_119bdb80();
  /* 119b826b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b826e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b8271 push eax */
  push32((uint32_t)(EAX));
  /* 119b8272 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b8275 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8276 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b8279 push edx */
  push32((uint32_t)(EDX));
  /* 119b827a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b827d push eax */
  push32((uint32_t)(EAX));
  /* 119b827e call 0x119b82e0 */
  push32(0x119b8283u); f_119b82e0();
  /* 119b8283 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8286 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b8289 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b828b call 0x119bdc20 */
  push32(0x119b8290u); f_119bdc20();
  /* 119b8290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8293 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8297 jne 0x119b829f */
  if (!C.zf) goto L_119b829f;
  /* 119b8299 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b829d jne 0x119b82a4 */
  if (!C.zf) goto L_119b82a4;
L_119b829f:;
  /* 119b829f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b82a2 jmp 0x119b82ba */
  goto L_119b82ba;
L_119b82a4:;
  /* 119b82a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b82a7 push ecx */
  push32((uint32_t)(ECX));
  /* 119b82a8 call 0x119bdec0 */
  push32(0x119b82adu); f_119bdec0();
  /* 119b82ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b82b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b82b2 jne 0x119b82b8 */
  if (!C.zf) goto L_119b82b8;
  /* 119b82b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b82b6 jmp 0x119b82ba */
  goto L_119b82ba;
L_119b82b8:;
  /* 119b82b8 jmp 0x119b8264 */
  goto L_119b8264;
L_119b82ba:;
  /* 119b82ba mov esp, ebp */
  ESP = (EBP);
  /* 119b82bc pop ebp */
  EBP = (pop32());
  /* 119b82bd ret  */
  ESPCHK(0x119b8260u, _esp0);
  ESP += 4; return;
}

/* FUN_100082c0 @ 0x119b82c0 (23 bytes, 11 insns) */
void f_119b82c0(void) {
  FTRACE(0x119b82c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b82c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b82c1 mov ebp, esp */
  EBP = (ESP);
  /* 119b82c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b82c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b82c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b82c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b82cc push eax */
  push32((uint32_t)(EAX));
  /* 119b82cd call 0x119b82e0 */
  push32(0x119b82d2u); f_119b82e0();
  /* 119b82d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b82d5 pop ebp */
  EBP = (pop32());
  /* 119b82d6 ret  */
  ESPCHK(0x119b82c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082e0 @ 0x119b82e0 (787 bytes, 254 insns) */
void f_119b82e0(void) {
  FTRACE(0x119b82e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b82e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b82e1 mov ebp, esp */
  EBP = (ESP);
  /* 119b82e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b82e6 push ebx */
  push32((uint32_t)(EBX));
  /* 119b82e7 push esi */
  push32((uint32_t)(ESI));
  /* 119b82e8 push edi */
  push32((uint32_t)(EDI));
  /* 119b82e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119b82f0 mov eax, dword ptr [0x119e4abc] */
  EAX = (r32((uint32_t)(0x119e4abc)));
  /* 119b82f5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119b82f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b82fa je 0x119b832c */
  if (C.zf) goto L_119b832c;
L_119b82fc:;
  /* 119b82fc call 0x119b93b0 */
  push32(0x119b8301u); f_119b93b0();
  /* 119b8301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8303 jne 0x119b8326 */
  if (!C.zf) goto L_119b8326;
  /* 119b8305 push 0x119e1860 */
  push32((uint32_t)(0x119e1860u));
  /* 119b830a push 0 */
  push32((uint32_t)(0x0u));
  /* 119b830c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 119b8311 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8316 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8318 call 0x119b59b0 */
  push32(0x119b831du); f_119b59b0();
  /* 119b831d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8320 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8323 jne 0x119b8326 */
  if (!C.zf) goto L_119b8326;
  /* 119b8325 int3  */
  x86_unimpl("int3 @ 0x119b8325");
L_119b8326:;
  /* 119b8326 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b8328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b832a jne 0x119b82fc */
  if (!C.zf) goto L_119b82fc;
L_119b832c:;
  /* 119b832c mov edx, dword ptr [0x119e4ac0] */
  EDX = (r32((uint32_t)(0x119e4ac0)));
  /* 119b8332 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119b8335 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b8338 cmp eax, dword ptr [0x119e4ac4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e4ac4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b833e jne 0x119b8341 */
  if (!C.zf) goto L_119b8341;
  /* 119b8340 int3  */
  x86_unimpl("int3 @ 0x119b8340");
L_119b8341:;
  /* 119b8341 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b8344 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8345 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b8348 push edx */
  push32((uint32_t)(EDX));
  /* 119b8349 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b834c push eax */
  push32((uint32_t)(EAX));
  /* 119b834d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8350 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8354 push edx */
  push32((uint32_t)(EDX));
  /* 119b8355 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8357 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8359 call dword ptr [0x119e5198] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e5198))), 0x119b835fu);
  /* 119b835f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8364 jne 0x119b83c4 */
  if (!C.zf) goto L_119b83c4;
  /* 119b8366 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b836a je 0x119b8397 */
  if (C.zf) goto L_119b8397;
L_119b836c:;
  /* 119b836c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b836f push eax */
  push32((uint32_t)(EAX));
  /* 119b8370 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b8373 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8374 push 0x119e181c */
  push32((uint32_t)(0x119e181cu));
  /* 119b8379 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b837b push 0 */
  push32((uint32_t)(0x0u));
  /* 119b837d push 0 */
  push32((uint32_t)(0x0u));
  /* 119b837f push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8381 call 0x119b59b0 */
  push32(0x119b8386u); f_119b59b0();
  /* 119b8386 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8389 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b838c jne 0x119b838f */
  if (!C.zf) goto L_119b838f;
  /* 119b838e int3  */
  x86_unimpl("int3 @ 0x119b838e");
L_119b838f:;
  /* 119b838f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b8391 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b8393 jne 0x119b836c */
  if (!C.zf) goto L_119b836c;
  /* 119b8395 jmp 0x119b83bd */
  goto L_119b83bd;
L_119b8397:;
  /* 119b8397 push 0x119e17f8 */
  push32((uint32_t)(0x119e17f8u));
  /* 119b839c push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b83a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b83a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b83a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b83a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b83a9 call 0x119b59b0 */
  push32(0x119b83aeu); f_119b59b0();
  /* 119b83ae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b83b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b83b4 jne 0x119b83b7 */
  if (!C.zf) goto L_119b83b7;
  /* 119b83b6 int3  */
  x86_unimpl("int3 @ 0x119b83b6");
L_119b83b7:;
  /* 119b83b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b83b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b83bb jne 0x119b8397 */
  if (!C.zf) goto L_119b8397;
L_119b83bd:;
  /* 119b83bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b83bf jmp 0x119b85ec */
  goto L_119b85ec;
L_119b83c4:;
  /* 119b83c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b83c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b83cd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b83d0 je 0x119b83e6 */
  if (C.zf) goto L_119b83e6;
  /* 119b83d2 mov edx, dword ptr [0x119e4abc] */
  EDX = (r32((uint32_t)(0x119e4abc)));
  /* 119b83d8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119b83db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b83dd jne 0x119b83e6 */
  if (!C.zf) goto L_119b83e6;
  /* 119b83df mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_119b83e6:;
  /* 119b83e6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b83ea ja 0x119b83f7 */
  if ((!C.cf&&!C.zf)) goto L_119b83f7;
  /* 119b83ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b83ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b83f2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b83f5 jbe 0x119b8423 */
  if ((C.cf||C.zf)) goto L_119b8423;
L_119b83f7:;
  /* 119b83f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b83fa push ecx */
  push32((uint32_t)(ECX));
  /* 119b83fb push 0x119e17d0 */
  push32((uint32_t)(0x119e17d0u));
  /* 119b8400 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8402 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8404 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8406 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8408 call 0x119b59b0 */
  push32(0x119b840du); f_119b59b0();
  /* 119b840d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8410 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8413 jne 0x119b8416 */
  if (!C.zf) goto L_119b8416;
  /* 119b8415 int3  */
  x86_unimpl("int3 @ 0x119b8415");
L_119b8416:;
  /* 119b8416 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b8418 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b841a jne 0x119b83f7 */
  if (!C.zf) goto L_119b83f7;
  /* 119b841c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b841e jmp 0x119b85ec */
  goto L_119b85ec;
L_119b8423:;
  /* 119b8423 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8426 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b842b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b842e je 0x119b8470 */
  if (C.zf) goto L_119b8470;
  /* 119b8430 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8434 je 0x119b8470 */
  if (C.zf) goto L_119b8470;
  /* 119b8436 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8439 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b843f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8442 je 0x119b8470 */
  if (C.zf) goto L_119b8470;
  /* 119b8444 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8448 je 0x119b8470 */
  if (C.zf) goto L_119b8470;
L_119b844a:;
  /* 119b844a push 0x119e179c */
  push32((uint32_t)(0x119e179cu));
  /* 119b844f push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b8454 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8456 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8458 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b845a push 1 */
  push32((uint32_t)(0x1u));
  /* 119b845c call 0x119b59b0 */
  push32(0x119b8461u); f_119b59b0();
  /* 119b8461 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8464 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8467 jne 0x119b846a */
  if (!C.zf) goto L_119b846a;
  /* 119b8469 int3  */
  x86_unimpl("int3 @ 0x119b8469");
L_119b846a:;
  /* 119b846a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b846c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b846e jne 0x119b844a */
  if (!C.zf) goto L_119b844a;
L_119b8470:;
  /* 119b8470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8473 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8476 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119b8479 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b847c push ecx */
  push32((uint32_t)(ECX));
  /* 119b847d call 0x119bdf70 */
  push32(0x119b8482u); f_119bdf70();
  /* 119b8482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8485 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b8488 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b848c jne 0x119b8495 */
  if (!C.zf) goto L_119b8495;
  /* 119b848e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8490 jmp 0x119b85ec */
  goto L_119b85ec;
L_119b8495:;
  /* 119b8495 mov edx, dword ptr [0x119e4ac0] */
  EDX = (r32((uint32_t)(0x119e4ac0)));
  /* 119b849b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b849e mov dword ptr [0x119e4ac0], edx */
  w32((uint32_t)(0x119e4ac0), (EDX));
  /* 119b84a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b84a8 je 0x119b84f3 */
  if (C.zf) goto L_119b84f3;
  /* 119b84aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b84ad mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119b84b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b84b6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 119b84bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b84c0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 119b84c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b84ca mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 119b84d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b84d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b84d7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 119b84da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b84dd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 119b84e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b84e7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 119b84ee jmp 0x119b8593 */
  goto L_119b8593;
L_119b84f3:;
  /* 119b84f3 mov edx, dword ptr [0x119e7154] */
  EDX = (r32((uint32_t)(0x119e7154)));
  /* 119b84f9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b84fc mov dword ptr [0x119e7154], edx */
  w32((uint32_t)(0x119e7154), (EDX));
  /* 119b8502 mov eax, dword ptr [0x119e715c] */
  EAX = (r32((uint32_t)(0x119e715c)));
  /* 119b8507 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b850a mov dword ptr [0x119e715c], eax */
  w32((uint32_t)(0x119e715c), (EAX));
  /* 119b850f mov ecx, dword ptr [0x119e715c] */
  ECX = (r32((uint32_t)(0x119e715c)));
  /* 119b8515 cmp ecx, dword ptr [0x119e7160] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e7160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b851b jbe 0x119b8529 */
  if ((C.cf||C.zf)) goto L_119b8529;
  /* 119b851d mov edx, dword ptr [0x119e715c] */
  EDX = (r32((uint32_t)(0x119e715c)));
  /* 119b8523 mov dword ptr [0x119e7160], edx */
  w32((uint32_t)(0x119e7160), (EDX));
L_119b8529:;
  /* 119b8529 cmp dword ptr [0x119e7158], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7158))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8530 je 0x119b853f */
  if (C.zf) goto L_119b853f;
  /* 119b8532 mov eax, dword ptr [0x119e7158] */
  EAX = (r32((uint32_t)(0x119e7158)));
  /* 119b8537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b853a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119b853d jmp 0x119b8548 */
  goto L_119b8548;
L_119b853f:;
  /* 119b853f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8542 mov dword ptr [0x119e7150], edx */
  w32((uint32_t)(0x119e7150), (EDX));
L_119b8548:;
  /* 119b8548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b854b mov ecx, dword ptr [0x119e7158] */
  ECX = (r32((uint32_t)(0x119e7158)));
  /* 119b8551 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119b8553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8556 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 119b855d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8560 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b8563 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 119b8566 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8569 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b856c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 119b856f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8575 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 119b8578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b857b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b857e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 119b8581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8584 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b8587 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 119b858a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b858d mov dword ptr [0x119e7158], ecx */
  w32((uint32_t)(0x119e7158), (ECX));
L_119b8593:;
  /* 119b8593 push 4 */
  push32((uint32_t)(0x4u));
  /* 119b8595 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b8597 mov dl, byte ptr [0x119e4ac8] */
  DL = (r8((uint32_t)(0x119e4ac8)));
  /* 119b859d push edx */
  push32((uint32_t)(EDX));
  /* 119b859e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b85a1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b85a4 push eax */
  push32((uint32_t)(EAX));
  /* 119b85a5 call 0x119bd6f0 */
  push32(0x119b85aau); f_119bd6f0();
  /* 119b85aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b85ad push 4 */
  push32((uint32_t)(0x4u));
  /* 119b85af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b85b1 mov cl, byte ptr [0x119e4ac8] */
  CL = (r8((uint32_t)(0x119e4ac8)));
  /* 119b85b7 push ecx */
  push32((uint32_t)(ECX));
  /* 119b85b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b85bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b85be lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 119b85c2 push ecx */
  push32((uint32_t)(ECX));
  /* 119b85c3 call 0x119bd6f0 */
  push32(0x119b85c8u); f_119bd6f0();
  /* 119b85c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b85cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b85ce push edx */
  push32((uint32_t)(EDX));
  /* 119b85cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b85d1 mov al, byte ptr [0x119e4aca] */
  AL = (r8((uint32_t)(0x119e4aca)));
  /* 119b85d6 push eax */
  push32((uint32_t)(EAX));
  /* 119b85d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b85da add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b85dd push ecx */
  push32((uint32_t)(ECX));
  /* 119b85de call 0x119bd6f0 */
  push32(0x119b85e3u); f_119bd6f0();
  /* 119b85e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b85e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b85e9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_119b85ec:;
  /* 119b85ec pop edi */
  EDI = (pop32());
  /* 119b85ed pop esi */
  ESI = (pop32());
  /* 119b85ee pop ebx */
  EBX = (pop32());
  /* 119b85ef mov esp, ebp */
  ESP = (EBP);
  /* 119b85f1 pop ebp */
  EBP = (pop32());
  /* 119b85f2 ret  */
  ESPCHK(0x119b82e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008600 @ 0x119b8600 (27 bytes, 13 insns) */
void f_119b8600(void) {
  FTRACE(0x119b8600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8600 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8601 mov ebp, esp */
  EBP = (ESP);
  /* 119b8603 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8605 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8607 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8609 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b860c push eax */
  push32((uint32_t)(EAX));
  /* 119b860d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8610 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8611 call 0x119b8620 */
  push32(0x119b8616u); f_119b8620();
  /* 119b8616 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8619 pop ebp */
  EBP = (pop32());
  /* 119b861a ret  */
  ESPCHK(0x119b8600u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x119b8620 (96 bytes, 37 insns) */
void f_119b8620(void) {
  FTRACE(0x119b8620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8620 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8621 mov ebp, esp */
  EBP = (ESP);
  /* 119b8623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b8626 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8629 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119b862d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 119b8630 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b8633 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8634 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b8637 push edx */
  push32((uint32_t)(EDX));
  /* 119b8638 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b863b push eax */
  push32((uint32_t)(EAX));
  /* 119b863c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b863f push ecx */
  push32((uint32_t)(ECX));
  /* 119b8640 call 0x119b8210 */
  push32(0x119b8645u); f_119b8210();
  /* 119b8645 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8648 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119b864b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b864f je 0x119b8679 */
  if (C.zf) goto L_119b8679;
  /* 119b8651 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b8654 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119b8657 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b865a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b865d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119b8660:;
  /* 119b8660 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8663 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8666 jae 0x119b8679 */
  if (!C.cf) goto L_119b8679;
  /* 119b8668 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b866b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 119b866e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8671 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8674 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119b8677 jmp 0x119b8660 */
  goto L_119b8660;
L_119b8679:;
  /* 119b8679 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b867c mov esp, ebp */
  ESP = (EBP);
  /* 119b867e pop ebp */
  EBP = (pop32());
  /* 119b867f ret  */
  ESPCHK(0x119b8620u, _esp0);
  ESP += 4; return;
}

/* FUN_10008680 @ 0x119b8680 (27 bytes, 13 insns) */
void f_119b8680(void) {
  FTRACE(0x119b8680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8680 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8681 mov ebp, esp */
  EBP = (ESP);
  /* 119b8683 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8685 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8687 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8689 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b868c push eax */
  push32((uint32_t)(EAX));
  /* 119b868d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8690 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8691 call 0x119b86a0 */
  push32(0x119b8696u); f_119b86a0();
  /* 119b8696 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8699 pop ebp */
  EBP = (pop32());
  /* 119b869a ret  */
  ESPCHK(0x119b8680u, _esp0);
  ESP += 4; return;
}

/* FUN_100086a0 @ 0x119b86a0 (64 bytes, 27 insns) */
void f_119b86a0(void) {
  FTRACE(0x119b86a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b86a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b86a1 mov ebp, esp */
  EBP = (ESP);
  /* 119b86a3 push ecx */
  push32((uint32_t)(ECX));
  /* 119b86a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b86a6 call 0x119bdb80 */
  push32(0x119b86abu); f_119bdb80();
  /* 119b86ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b86ae push 1 */
  push32((uint32_t)(0x1u));
  /* 119b86b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b86b3 push eax */
  push32((uint32_t)(EAX));
  /* 119b86b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b86b7 push ecx */
  push32((uint32_t)(ECX));
  /* 119b86b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b86bb push edx */
  push32((uint32_t)(EDX));
  /* 119b86bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b86bf push eax */
  push32((uint32_t)(EAX));
  /* 119b86c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b86c3 push ecx */
  push32((uint32_t)(ECX));
  /* 119b86c4 call 0x119b86e0 */
  push32(0x119b86c9u); f_119b86e0();
  /* 119b86c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b86cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b86cf push 9 */
  push32((uint32_t)(0x9u));
  /* 119b86d1 call 0x119bdc20 */
  push32(0x119b86d6u); f_119bdc20();
  /* 119b86d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b86d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b86dc mov esp, ebp */
  ESP = (EBP);
  /* 119b86de pop ebp */
  EBP = (pop32());
  /* 119b86df ret  */
  ESPCHK(0x119b86a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086e0 @ 0x119b86e0 (1297 bytes, 431 insns) */
void f_119b86e0(void) {
  FTRACE(0x119b86e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b86e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b86e1 mov ebp, esp */
  EBP = (ESP);
  /* 119b86e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b86e6 push ebx */
  push32((uint32_t)(EBX));
  /* 119b86e7 push esi */
  push32((uint32_t)(ESI));
  /* 119b86e8 push edi */
  push32((uint32_t)(EDI));
  /* 119b86e9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 119b86f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b86f4 jne 0x119b8713 */
  if (!C.zf) goto L_119b8713;
  /* 119b86f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b86f9 push eax */
  push32((uint32_t)(EAX));
  /* 119b86fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b86fd push ecx */
  push32((uint32_t)(ECX));
  /* 119b86fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b8701 push edx */
  push32((uint32_t)(EDX));
  /* 119b8702 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8705 push eax */
  push32((uint32_t)(EAX));
  /* 119b8706 call 0x119b8210 */
  push32(0x119b870bu); f_119b8210();
  /* 119b870b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b870e jmp 0x119b8bea */
  goto L_119b8bea;
L_119b8713:;
  /* 119b8713 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8717 je 0x119b8736 */
  if (C.zf) goto L_119b8736;
  /* 119b8719 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b871d jne 0x119b8736 */
  if (!C.zf) goto L_119b8736;
  /* 119b871f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b8722 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8723 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8726 push edx */
  push32((uint32_t)(EDX));
  /* 119b8727 call 0x119b8ca0 */
  push32(0x119b872cu); f_119b8ca0();
  /* 119b872c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b872f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8731 jmp 0x119b8bea */
  goto L_119b8bea;
L_119b8736:;
  /* 119b8736 mov eax, dword ptr [0x119e4abc] */
  EAX = (r32((uint32_t)(0x119e4abc)));
  /* 119b873b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119b873e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8740 je 0x119b8772 */
  if (C.zf) goto L_119b8772;
L_119b8742:;
  /* 119b8742 call 0x119b93b0 */
  push32(0x119b8747u); f_119b93b0();
  /* 119b8747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8749 jne 0x119b876c */
  if (!C.zf) goto L_119b876c;
  /* 119b874b push 0x119e1860 */
  push32((uint32_t)(0x119e1860u));
  /* 119b8750 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8752 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 119b8757 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b875c push 2 */
  push32((uint32_t)(0x2u));
  /* 119b875e call 0x119b59b0 */
  push32(0x119b8763u); f_119b59b0();
  /* 119b8763 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8766 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8769 jne 0x119b876c */
  if (!C.zf) goto L_119b876c;
  /* 119b876b int3  */
  x86_unimpl("int3 @ 0x119b876b");
L_119b876c:;
  /* 119b876c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b876e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b8770 jne 0x119b8742 */
  if (!C.zf) goto L_119b8742;
L_119b8772:;
  /* 119b8772 mov edx, dword ptr [0x119e4ac0] */
  EDX = (r32((uint32_t)(0x119e4ac0)));
  /* 119b8778 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119b877b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b877e cmp eax, dword ptr [0x119e4ac4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e4ac4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8784 jne 0x119b8787 */
  if (!C.zf) goto L_119b8787;
  /* 119b8786 int3  */
  x86_unimpl("int3 @ 0x119b8786");
L_119b8787:;
  /* 119b8787 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b878a push ecx */
  push32((uint32_t)(ECX));
  /* 119b878b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b878e push edx */
  push32((uint32_t)(EDX));
  /* 119b878f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b8792 push eax */
  push32((uint32_t)(EAX));
  /* 119b8793 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b8796 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8797 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b879a push edx */
  push32((uint32_t)(EDX));
  /* 119b879b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b879e push eax */
  push32((uint32_t)(EAX));
  /* 119b879f push 2 */
  push32((uint32_t)(0x2u));
  /* 119b87a1 call dword ptr [0x119e5198] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e5198))), 0x119b87a7u);
  /* 119b87a7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b87aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b87ac jne 0x119b880c */
  if (!C.zf) goto L_119b880c;
  /* 119b87ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b87b2 je 0x119b87df */
  if (C.zf) goto L_119b87df;
L_119b87b4:;
  /* 119b87b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b87b7 push ecx */
  push32((uint32_t)(ECX));
  /* 119b87b8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b87bb push edx */
  push32((uint32_t)(EDX));
  /* 119b87bc push 0x119e19dc */
  push32((uint32_t)(0x119e19dcu));
  /* 119b87c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b87c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b87c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b87c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b87c9 call 0x119b59b0 */
  push32(0x119b87ceu); f_119b59b0();
  /* 119b87ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b87d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b87d4 jne 0x119b87d7 */
  if (!C.zf) goto L_119b87d7;
  /* 119b87d6 int3  */
  x86_unimpl("int3 @ 0x119b87d6");
L_119b87d7:;
  /* 119b87d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b87d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b87db jne 0x119b87b4 */
  if (!C.zf) goto L_119b87b4;
  /* 119b87dd jmp 0x119b8805 */
  goto L_119b8805;
L_119b87df:;
  /* 119b87df push 0x119e19b8 */
  push32((uint32_t)(0x119e19b8u));
  /* 119b87e4 push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b87e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b87eb push 0 */
  push32((uint32_t)(0x0u));
  /* 119b87ed push 0 */
  push32((uint32_t)(0x0u));
  /* 119b87ef push 0 */
  push32((uint32_t)(0x0u));
  /* 119b87f1 call 0x119b59b0 */
  push32(0x119b87f6u); f_119b59b0();
  /* 119b87f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b87f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b87fc jne 0x119b87ff */
  if (!C.zf) goto L_119b87ff;
  /* 119b87fe int3  */
  x86_unimpl("int3 @ 0x119b87fe");
L_119b87ff:;
  /* 119b87ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b8801 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b8803 jne 0x119b87df */
  if (!C.zf) goto L_119b87df;
L_119b8805:;
  /* 119b8805 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8807 jmp 0x119b8bea */
  goto L_119b8bea;
L_119b880c:;
  /* 119b880c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8810 jbe 0x119b883e */
  if ((C.cf||C.zf)) goto L_119b883e;
L_119b8812:;
  /* 119b8812 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8815 push edx */
  push32((uint32_t)(EDX));
  /* 119b8816 push 0x119e1988 */
  push32((uint32_t)(0x119e1988u));
  /* 119b881b push 0 */
  push32((uint32_t)(0x0u));
  /* 119b881d push 0 */
  push32((uint32_t)(0x0u));
  /* 119b881f push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8821 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8823 call 0x119b59b0 */
  push32(0x119b8828u); f_119b59b0();
  /* 119b8828 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b882b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b882e jne 0x119b8831 */
  if (!C.zf) goto L_119b8831;
  /* 119b8830 int3  */
  x86_unimpl("int3 @ 0x119b8830");
L_119b8831:;
  /* 119b8831 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8835 jne 0x119b8812 */
  if (!C.zf) goto L_119b8812;
  /* 119b8837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8839 jmp 0x119b8bea */
  goto L_119b8bea;
L_119b883e:;
  /* 119b883e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8842 je 0x119b8886 */
  if (C.zf) goto L_119b8886;
  /* 119b8844 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b8847 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b884d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8850 je 0x119b8886 */
  if (C.zf) goto L_119b8886;
  /* 119b8852 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b8855 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b885b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b885e je 0x119b8886 */
  if (C.zf) goto L_119b8886;
L_119b8860:;
  /* 119b8860 push 0x119e179c */
  push32((uint32_t)(0x119e179cu));
  /* 119b8865 push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b886a push 0 */
  push32((uint32_t)(0x0u));
  /* 119b886c push 0 */
  push32((uint32_t)(0x0u));
  /* 119b886e push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8870 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8872 call 0x119b59b0 */
  push32(0x119b8877u); f_119b59b0();
  /* 119b8877 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b887a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b887d jne 0x119b8880 */
  if (!C.zf) goto L_119b8880;
  /* 119b887f int3  */
  x86_unimpl("int3 @ 0x119b887f");
L_119b8880:;
  /* 119b8880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8884 jne 0x119b8860 */
  if (!C.zf) goto L_119b8860;
L_119b8886:;
  /* 119b8886 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8889 push ecx */
  push32((uint32_t)(ECX));
  /* 119b888a call 0x119b9810 */
  push32(0x119b888fu); f_119b9810();
  /* 119b888f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8894 jne 0x119b88b7 */
  if (!C.zf) goto L_119b88b7;
  /* 119b8896 push 0x119e1964 */
  push32((uint32_t)(0x119e1964u));
  /* 119b889b push 0 */
  push32((uint32_t)(0x0u));
  /* 119b889d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 119b88a2 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b88a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b88a9 call 0x119b59b0 */
  push32(0x119b88aeu); f_119b59b0();
  /* 119b88ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b88b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b88b4 jne 0x119b88b7 */
  if (!C.zf) goto L_119b88b7;
  /* 119b88b6 int3  */
  x86_unimpl("int3 @ 0x119b88b6");
L_119b88b7:;
  /* 119b88b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b88b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b88bb jne 0x119b8886 */
  if (!C.zf) goto L_119b8886;
  /* 119b88bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b88c0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b88c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119b88c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b88c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b88cd jne 0x119b88d6 */
  if (!C.zf) goto L_119b88d6;
  /* 119b88cf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_119b88d6:;
  /* 119b88d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b88da je 0x119b891a */
  if (C.zf) goto L_119b891a;
L_119b88dc:;
  /* 119b88dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b88df cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b88e6 jne 0x119b88f1 */
  if (!C.zf) goto L_119b88f1;
  /* 119b88e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b88eb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b88ef je 0x119b8912 */
  if (C.zf) goto L_119b8912;
L_119b88f1:;
  /* 119b88f1 push 0x119e191c */
  push32((uint32_t)(0x119e191cu));
  /* 119b88f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b88f8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 119b88fd push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8902 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8904 call 0x119b59b0 */
  push32(0x119b8909u); f_119b59b0();
  /* 119b8909 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b890c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b890f jne 0x119b8912 */
  if (!C.zf) goto L_119b8912;
  /* 119b8911 int3  */
  x86_unimpl("int3 @ 0x119b8911");
L_119b8912:;
  /* 119b8912 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b8914 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b8916 jne 0x119b88dc */
  if (!C.zf) goto L_119b88dc;
  /* 119b8918 jmp 0x119b897e */
  goto L_119b897e;
L_119b891a:;
  /* 119b891a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b891d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b8920 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b8925 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8928 jne 0x119b893f */
  if (!C.zf) goto L_119b893f;
  /* 119b892a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b892d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b8933 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8936 jne 0x119b893f */
  if (!C.zf) goto L_119b893f;
  /* 119b8938 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_119b893f:;
  /* 119b893f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b8942 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b8945 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b894a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b894d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b8953 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8955 je 0x119b8978 */
  if (C.zf) goto L_119b8978;
  /* 119b8957 push 0x119e18e0 */
  push32((uint32_t)(0x119e18e0u));
  /* 119b895c push 0 */
  push32((uint32_t)(0x0u));
  /* 119b895e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 119b8963 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8968 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b896a call 0x119b59b0 */
  push32(0x119b896fu); f_119b59b0();
  /* 119b896f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8972 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8975 jne 0x119b8978 */
  if (!C.zf) goto L_119b8978;
  /* 119b8977 int3  */
  x86_unimpl("int3 @ 0x119b8977");
L_119b8978:;
  /* 119b8978 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b897a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b897c jne 0x119b893f */
  if (!C.zf) goto L_119b893f;
L_119b897e:;
  /* 119b897e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8982 je 0x119b89a9 */
  if (C.zf) goto L_119b89a9;
  /* 119b8984 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8987 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b898a push eax */
  push32((uint32_t)(EAX));
  /* 119b898b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b898e push ecx */
  push32((uint32_t)(ECX));
  /* 119b898f call 0x119be0a0 */
  push32(0x119b8994u); f_119be0a0();
  /* 119b8994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8997 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119b899a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b899e jne 0x119b89a7 */
  if (!C.zf) goto L_119b89a7;
  /* 119b89a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b89a2 jmp 0x119b8bea */
  goto L_119b8bea;
L_119b89a7:;
  /* 119b89a7 jmp 0x119b89cc */
  goto L_119b89cc;
L_119b89a9:;
  /* 119b89a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b89ac add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b89af push edx */
  push32((uint32_t)(EDX));
  /* 119b89b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b89b3 push eax */
  push32((uint32_t)(EAX));
  /* 119b89b4 call 0x119bdff0 */
  push32(0x119b89b9u); f_119bdff0();
  /* 119b89b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b89bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119b89bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b89c3 jne 0x119b89cc */
  if (!C.zf) goto L_119b89cc;
  /* 119b89c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b89c7 jmp 0x119b8bea */
  goto L_119b8bea;
L_119b89cc:;
  /* 119b89cc mov ecx, dword ptr [0x119e4ac0] */
  ECX = (r32((uint32_t)(0x119e4ac0)));
  /* 119b89d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b89d5 mov dword ptr [0x119e4ac0], ecx */
  w32((uint32_t)(0x119e4ac0), (ECX));
  /* 119b89db cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b89df jne 0x119b8a37 */
  if (!C.zf) goto L_119b8a37;
  /* 119b89e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b89e4 mov eax, dword ptr [0x119e7154] */
  EAX = (r32((uint32_t)(0x119e7154)));
  /* 119b89e9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b89ec mov dword ptr [0x119e7154], eax */
  w32((uint32_t)(0x119e7154), (EAX));
  /* 119b89f1 mov ecx, dword ptr [0x119e7154] */
  ECX = (r32((uint32_t)(0x119e7154)));
  /* 119b89f7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b89fa mov dword ptr [0x119e7154], ecx */
  w32((uint32_t)(0x119e7154), (ECX));
  /* 119b8a00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8a03 mov eax, dword ptr [0x119e715c] */
  EAX = (r32((uint32_t)(0x119e715c)));
  /* 119b8a08 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b8a0b mov dword ptr [0x119e715c], eax */
  w32((uint32_t)(0x119e715c), (EAX));
  /* 119b8a10 mov ecx, dword ptr [0x119e715c] */
  ECX = (r32((uint32_t)(0x119e715c)));
  /* 119b8a16 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8a19 mov dword ptr [0x119e715c], ecx */
  w32((uint32_t)(0x119e715c), (ECX));
  /* 119b8a1f mov edx, dword ptr [0x119e715c] */
  EDX = (r32((uint32_t)(0x119e715c)));
  /* 119b8a25 cmp edx, dword ptr [0x119e7160] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119e7160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8a2b jbe 0x119b8a37 */
  if ((C.cf||C.zf)) goto L_119b8a37;
  /* 119b8a2d mov eax, dword ptr [0x119e715c] */
  EAX = (r32((uint32_t)(0x119e715c)));
  /* 119b8a32 mov dword ptr [0x119e7160], eax */
  w32((uint32_t)(0x119e7160), (EAX));
L_119b8a37:;
  /* 119b8a37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8a3a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8a3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b8a40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8a43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8a46 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8a49 jbe 0x119b8a6f */
  if ((C.cf||C.zf)) goto L_119b8a6f;
  /* 119b8a4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8a4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8a51 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b8a54 push edx */
  push32((uint32_t)(EDX));
  /* 119b8a55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8a57 mov al, byte ptr [0x119e4aca] */
  AL = (r8((uint32_t)(0x119e4aca)));
  /* 119b8a5c push eax */
  push32((uint32_t)(EAX));
  /* 119b8a5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8a60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8a63 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8a66 push edx */
  push32((uint32_t)(EDX));
  /* 119b8a67 call 0x119bd6f0 */
  push32(0x119b8a6cu); f_119bd6f0();
  /* 119b8a6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b8a6f:;
  /* 119b8a6f push 4 */
  push32((uint32_t)(0x4u));
  /* 119b8a71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8a73 mov al, byte ptr [0x119e4ac8] */
  AL = (r8((uint32_t)(0x119e4ac8)));
  /* 119b8a78 push eax */
  push32((uint32_t)(EAX));
  /* 119b8a79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8a7c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8a7f push ecx */
  push32((uint32_t)(ECX));
  /* 119b8a80 call 0x119bd6f0 */
  push32(0x119b8a85u); f_119bd6f0();
  /* 119b8a85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8a88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8a8c jne 0x119b8aa9 */
  if (!C.zf) goto L_119b8aa9;
  /* 119b8a8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8a91 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b8a94 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 119b8a97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8a9a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b8a9d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 119b8aa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8aa3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119b8aa6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_119b8aa9:;
  /* 119b8aa9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8aac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8aaf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_119b8ab2:;
  /* 119b8ab2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8ab6 jne 0x119b8ae7 */
  if (!C.zf) goto L_119b8ae7;
  /* 119b8ab8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8abc jne 0x119b8ac6 */
  if (!C.zf) goto L_119b8ac6;
  /* 119b8abe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8ac1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8ac4 je 0x119b8ae7 */
  if (C.zf) goto L_119b8ae7;
L_119b8ac6:;
  /* 119b8ac6 push 0x119e18ac */
  push32((uint32_t)(0x119e18acu));
  /* 119b8acb push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8acd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 119b8ad2 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8ad7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8ad9 call 0x119b59b0 */
  push32(0x119b8adeu); f_119b59b0();
  /* 119b8ade add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8ae1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8ae4 jne 0x119b8ae7 */
  if (!C.zf) goto L_119b8ae7;
  /* 119b8ae6 int3  */
  x86_unimpl("int3 @ 0x119b8ae6");
L_119b8ae7:;
  /* 119b8ae7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b8ae9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b8aeb jne 0x119b8ab2 */
  if (!C.zf) goto L_119b8ab2;
  /* 119b8aed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8af0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8af3 je 0x119b8afb */
  if (C.zf) goto L_119b8afb;
  /* 119b8af5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8af9 je 0x119b8b03 */
  if (C.zf) goto L_119b8b03;
L_119b8afb:;
  /* 119b8afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8afe jmp 0x119b8bea */
  goto L_119b8bea;
L_119b8b03:;
  /* 119b8b03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8b06 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8b09 je 0x119b8b1b */
  if (C.zf) goto L_119b8b1b;
  /* 119b8b0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8b0e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119b8b10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8b13 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119b8b16 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119b8b19 jmp 0x119b8b57 */
  goto L_119b8b57;
L_119b8b1b:;
  /* 119b8b1b mov eax, dword ptr [0x119e7150] */
  EAX = (r32((uint32_t)(0x119e7150)));
  /* 119b8b20 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8b23 je 0x119b8b46 */
  if (C.zf) goto L_119b8b46;
  /* 119b8b25 push 0x119e1890 */
  push32((uint32_t)(0x119e1890u));
  /* 119b8b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8b2c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 119b8b31 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8b36 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8b38 call 0x119b59b0 */
  push32(0x119b8b3du); f_119b59b0();
  /* 119b8b3d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8b40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8b43 jne 0x119b8b46 */
  if (!C.zf) goto L_119b8b46;
  /* 119b8b45 int3  */
  x86_unimpl("int3 @ 0x119b8b45");
L_119b8b46:;
  /* 119b8b46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b8b48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b8b4a jne 0x119b8b1b */
  if (!C.zf) goto L_119b8b1b;
  /* 119b8b4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8b4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119b8b52 mov dword ptr [0x119e7150], eax */
  w32((uint32_t)(0x119e7150), (EAX));
L_119b8b57:;
  /* 119b8b57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8b5a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8b5e je 0x119b8b6f */
  if (C.zf) goto L_119b8b6f;
  /* 119b8b60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8b63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119b8b66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8b69 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119b8b6b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119b8b6d jmp 0x119b8baa */
  goto L_119b8baa;
L_119b8b6f:;
  /* 119b8b6f mov eax, dword ptr [0x119e7158] */
  EAX = (r32((uint32_t)(0x119e7158)));
  /* 119b8b74 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8b77 je 0x119b8b9a */
  if (C.zf) goto L_119b8b9a;
  /* 119b8b79 push 0x119e1874 */
  push32((uint32_t)(0x119e1874u));
  /* 119b8b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8b80 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 119b8b85 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8b8a push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8b8c call 0x119b59b0 */
  push32(0x119b8b91u); f_119b59b0();
  /* 119b8b91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8b94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8b97 jne 0x119b8b9a */
  if (!C.zf) goto L_119b8b9a;
  /* 119b8b99 int3  */
  x86_unimpl("int3 @ 0x119b8b99");
L_119b8b9a:;
  /* 119b8b9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b8b9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b8b9e jne 0x119b8b6f */
  if (!C.zf) goto L_119b8b6f;
  /* 119b8ba0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8ba3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119b8ba5 mov dword ptr [0x119e7158], eax */
  w32((uint32_t)(0x119e7158), (EAX));
L_119b8baa:;
  /* 119b8baa cmp dword ptr [0x119e7158], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7158))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8bb1 je 0x119b8bc1 */
  if (C.zf) goto L_119b8bc1;
  /* 119b8bb3 mov ecx, dword ptr [0x119e7158] */
  ECX = (r32((uint32_t)(0x119e7158)));
  /* 119b8bb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8bbc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 119b8bbf jmp 0x119b8bc9 */
  goto L_119b8bc9;
L_119b8bc1:;
  /* 119b8bc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8bc4 mov dword ptr [0x119e7150], eax */
  w32((uint32_t)(0x119e7150), (EAX));
L_119b8bc9:;
  /* 119b8bc9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8bcc mov edx, dword ptr [0x119e7158] */
  EDX = (r32((uint32_t)(0x119e7158)));
  /* 119b8bd2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 119b8bd4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8bd7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 119b8bde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b8be1 mov dword ptr [0x119e7158], ecx */
  w32((uint32_t)(0x119e7158), (ECX));
  /* 119b8be7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119b8bea:;
  /* 119b8bea pop edi */
  EDI = (pop32());
  /* 119b8beb pop esi */
  ESI = (pop32());
  /* 119b8bec pop ebx */
  EBX = (pop32());
  /* 119b8bed mov esp, ebp */
  ESP = (EBP);
  /* 119b8bef pop ebp */
  EBP = (pop32());
  /* 119b8bf0 ret  */
  ESPCHK(0x119b86e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c00 @ 0x119b8c00 (27 bytes, 13 insns) */
void f_119b8c00(void) {
  FTRACE(0x119b8c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8c00 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8c01 mov ebp, esp */
  EBP = (ESP);
  /* 119b8c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8c09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8c0c push eax */
  push32((uint32_t)(EAX));
  /* 119b8c0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8c10 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8c11 call 0x119b8c20 */
  push32(0x119b8c16u); f_119b8c20();
  /* 119b8c16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8c19 pop ebp */
  EBP = (pop32());
  /* 119b8c1a ret  */
  ESPCHK(0x119b8c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c20 @ 0x119b8c20 (64 bytes, 27 insns) */
void f_119b8c20(void) {
  FTRACE(0x119b8c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8c20 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8c21 mov ebp, esp */
  EBP = (ESP);
  /* 119b8c23 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8c24 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b8c26 call 0x119bdb80 */
  push32(0x119b8c2bu); f_119bdb80();
  /* 119b8c2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8c2e push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8c30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b8c33 push eax */
  push32((uint32_t)(EAX));
  /* 119b8c34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b8c37 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8c38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b8c3b push edx */
  push32((uint32_t)(EDX));
  /* 119b8c3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8c3f push eax */
  push32((uint32_t)(EAX));
  /* 119b8c40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8c43 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8c44 call 0x119b86e0 */
  push32(0x119b8c49u); f_119b86e0();
  /* 119b8c49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8c4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b8c4f push 9 */
  push32((uint32_t)(0x9u));
  /* 119b8c51 call 0x119bdc20 */
  push32(0x119b8c56u); f_119bdc20();
  /* 119b8c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8c59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8c5c mov esp, ebp */
  ESP = (EBP);
  /* 119b8c5e pop ebp */
  EBP = (pop32());
  /* 119b8c5f ret  */
  ESPCHK(0x119b8c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c60 @ 0x119b8c60 (19 bytes, 9 insns) */
void f_119b8c60(void) {
  FTRACE(0x119b8c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8c60 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8c61 mov ebp, esp */
  EBP = (ESP);
  /* 119b8c63 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8c65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8c68 push eax */
  push32((uint32_t)(EAX));
  /* 119b8c69 call 0x119b8ca0 */
  push32(0x119b8c6eu); f_119b8ca0();
  /* 119b8c6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8c71 pop ebp */
  EBP = (pop32());
  /* 119b8c72 ret  */
  ESPCHK(0x119b8c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c80 @ 0x119b8c80 (19 bytes, 9 insns) */
void f_119b8c80(void) {
  FTRACE(0x119b8c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8c80 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8c81 mov ebp, esp */
  EBP = (ESP);
  /* 119b8c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8c85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8c88 push eax */
  push32((uint32_t)(EAX));
  /* 119b8c89 call 0x119b8cd0 */
  push32(0x119b8c8eu); f_119b8cd0();
  /* 119b8c8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8c91 pop ebp */
  EBP = (pop32());
  /* 119b8c92 ret  */
  ESPCHK(0x119b8c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ca0 @ 0x119b8ca0 (41 bytes, 16 insns) */
void f_119b8ca0(void) {
  FTRACE(0x119b8ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8ca1 mov ebp, esp */
  EBP = (ESP);
  /* 119b8ca3 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b8ca5 call 0x119bdb80 */
  push32(0x119b8caau); f_119bdb80();
  /* 119b8caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8cad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8cb0 push eax */
  push32((uint32_t)(EAX));
  /* 119b8cb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8cb4 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8cb5 call 0x119b8cd0 */
  push32(0x119b8cbau); f_119b8cd0();
  /* 119b8cba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8cbd push 9 */
  push32((uint32_t)(0x9u));
  /* 119b8cbf call 0x119bdc20 */
  push32(0x119b8cc4u); f_119bdc20();
  /* 119b8cc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8cc7 pop ebp */
  EBP = (pop32());
  /* 119b8cc8 ret  */
  ESPCHK(0x119b8ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cd0 @ 0x119b8cd0 (1004 bytes, 342 insns) */
void f_119b8cd0(void) {
  FTRACE(0x119b8cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b8cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b8cd1 mov ebp, esp */
  EBP = (ESP);
  /* 119b8cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8cd4 push ebx */
  push32((uint32_t)(EBX));
  /* 119b8cd5 push esi */
  push32((uint32_t)(ESI));
  /* 119b8cd6 push edi */
  push32((uint32_t)(EDI));
  /* 119b8cd7 mov eax, dword ptr [0x119e4abc] */
  EAX = (r32((uint32_t)(0x119e4abc)));
  /* 119b8cdc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119b8cdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8ce1 je 0x119b8d13 */
  if (C.zf) goto L_119b8d13;
L_119b8ce3:;
  /* 119b8ce3 call 0x119b93b0 */
  push32(0x119b8ce8u); f_119b93b0();
  /* 119b8ce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8cea jne 0x119b8d0d */
  if (!C.zf) goto L_119b8d0d;
  /* 119b8cec push 0x119e1860 */
  push32((uint32_t)(0x119e1860u));
  /* 119b8cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8cf3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 119b8cf8 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8cfd push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8cff call 0x119b59b0 */
  push32(0x119b8d04u); f_119b59b0();
  /* 119b8d04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8d07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8d0a jne 0x119b8d0d */
  if (!C.zf) goto L_119b8d0d;
  /* 119b8d0c int3  */
  x86_unimpl("int3 @ 0x119b8d0c");
L_119b8d0d:;
  /* 119b8d0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b8d0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b8d11 jne 0x119b8ce3 */
  if (!C.zf) goto L_119b8ce3;
L_119b8d13:;
  /* 119b8d13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8d17 jne 0x119b8d1e */
  if (!C.zf) goto L_119b8d1e;
  /* 119b8d19 jmp 0x119b90b5 */
  goto L_119b90b5;
L_119b8d1e:;
  /* 119b8d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8d24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b8d27 push edx */
  push32((uint32_t)(EDX));
  /* 119b8d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8d2d push eax */
  push32((uint32_t)(EAX));
  /* 119b8d2e push 3 */
  push32((uint32_t)(0x3u));
  /* 119b8d30 call dword ptr [0x119e5198] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e5198))), 0x119b8d36u);
  /* 119b8d36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8d3b jne 0x119b8d68 */
  if (!C.zf) goto L_119b8d68;
L_119b8d3d:;
  /* 119b8d3d push 0x119e1b24 */
  push32((uint32_t)(0x119e1b24u));
  /* 119b8d42 push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b8d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8d4b push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8d4f call 0x119b59b0 */
  push32(0x119b8d54u); f_119b59b0();
  /* 119b8d54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8d57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8d5a jne 0x119b8d5d */
  if (!C.zf) goto L_119b8d5d;
  /* 119b8d5c int3  */
  x86_unimpl("int3 @ 0x119b8d5c");
L_119b8d5d:;
  /* 119b8d5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b8d5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b8d61 jne 0x119b8d3d */
  if (!C.zf) goto L_119b8d3d;
  /* 119b8d63 jmp 0x119b90b5 */
  goto L_119b90b5;
L_119b8d68:;
  /* 119b8d68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8d6b push edx */
  push32((uint32_t)(EDX));
  /* 119b8d6c call 0x119b9810 */
  push32(0x119b8d71u); f_119b9810();
  /* 119b8d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8d76 jne 0x119b8d99 */
  if (!C.zf) goto L_119b8d99;
  /* 119b8d78 push 0x119e1964 */
  push32((uint32_t)(0x119e1964u));
  /* 119b8d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8d7f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 119b8d84 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8d89 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8d8b call 0x119b59b0 */
  push32(0x119b8d90u); f_119b59b0();
  /* 119b8d90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8d93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8d96 jne 0x119b8d99 */
  if (!C.zf) goto L_119b8d99;
  /* 119b8d98 int3  */
  x86_unimpl("int3 @ 0x119b8d98");
L_119b8d99:;
  /* 119b8d99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8d9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8d9d jne 0x119b8d68 */
  if (!C.zf) goto L_119b8d68;
  /* 119b8d9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b8da2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b8da5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119b8da8:;
  /* 119b8da8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8dab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b8dae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b8db3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8db6 je 0x119b8dfb */
  if (C.zf) goto L_119b8dfb;
  /* 119b8db8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8dbb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8dbf je 0x119b8dfb */
  if (C.zf) goto L_119b8dfb;
  /* 119b8dc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8dc4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b8dc7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b8dcc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8dcf je 0x119b8dfb */
  if (C.zf) goto L_119b8dfb;
  /* 119b8dd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8dd4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8dd8 je 0x119b8dfb */
  if (C.zf) goto L_119b8dfb;
  /* 119b8dda push 0x119e1afc */
  push32((uint32_t)(0x119e1afcu));
  /* 119b8ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8de1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 119b8de6 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8deb push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8ded call 0x119b59b0 */
  push32(0x119b8df2u); f_119b59b0();
  /* 119b8df2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8df5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8df8 jne 0x119b8dfb */
  if (!C.zf) goto L_119b8dfb;
  /* 119b8dfa int3  */
  x86_unimpl("int3 @ 0x119b8dfa");
L_119b8dfb:;
  /* 119b8dfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b8dfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b8dff jne 0x119b8da8 */
  if (!C.zf) goto L_119b8da8;
  /* 119b8e01 mov eax, dword ptr [0x119e4abc] */
  EAX = (r32((uint32_t)(0x119e4abc)));
  /* 119b8e06 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119b8e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8e0b jne 0x119b8ed6 */
  if (!C.zf) goto L_119b8ed6;
  /* 119b8e11 push 4 */
  push32((uint32_t)(0x4u));
  /* 119b8e13 mov cl, byte ptr [0x119e4ac8] */
  CL = (r8((uint32_t)(0x119e4ac8)));
  /* 119b8e19 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8e1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8e1d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8e20 push edx */
  push32((uint32_t)(EDX));
  /* 119b8e21 call 0x119b9320 */
  push32(0x119b8e26u); f_119b9320();
  /* 119b8e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8e2b jne 0x119b8e70 */
  if (!C.zf) goto L_119b8e70;
L_119b8e2d:;
  /* 119b8e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8e30 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8e33 push eax */
  push32((uint32_t)(EAX));
  /* 119b8e34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8e37 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 119b8e3a push edx */
  push32((uint32_t)(EDX));
  /* 119b8e3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8e3e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119b8e41 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b8e47 mov edx, dword ptr [ecx*4 + 0x119e4acc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e4acc)));
  /* 119b8e4e push edx */
  push32((uint32_t)(EDX));
  /* 119b8e4f push 0x119e1ad0 */
  push32((uint32_t)(0x119e1ad0u));
  /* 119b8e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8e5a push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8e5c call 0x119b59b0 */
  push32(0x119b8e61u); f_119b59b0();
  /* 119b8e61 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8e64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8e67 jne 0x119b8e6a */
  if (!C.zf) goto L_119b8e6a;
  /* 119b8e69 int3  */
  x86_unimpl("int3 @ 0x119b8e69");
L_119b8e6a:;
  /* 119b8e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8e6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8e6e jne 0x119b8e2d */
  if (!C.zf) goto L_119b8e2d;
L_119b8e70:;
  /* 119b8e70 push 4 */
  push32((uint32_t)(0x4u));
  /* 119b8e72 mov cl, byte ptr [0x119e4ac8] */
  CL = (r8((uint32_t)(0x119e4ac8)));
  /* 119b8e78 push ecx */
  push32((uint32_t)(ECX));
  /* 119b8e79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8e7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119b8e7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8e82 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 119b8e86 push edx */
  push32((uint32_t)(EDX));
  /* 119b8e87 call 0x119b9320 */
  push32(0x119b8e8cu); f_119b9320();
  /* 119b8e8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8e8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8e91 jne 0x119b8ed6 */
  if (!C.zf) goto L_119b8ed6;
L_119b8e93:;
  /* 119b8e93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8e96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8e99 push eax */
  push32((uint32_t)(EAX));
  /* 119b8e9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8e9d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 119b8ea0 push edx */
  push32((uint32_t)(EDX));
  /* 119b8ea1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8ea4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119b8ea7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b8ead mov edx, dword ptr [ecx*4 + 0x119e4acc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e4acc)));
  /* 119b8eb4 push edx */
  push32((uint32_t)(EDX));
  /* 119b8eb5 push 0x119e1aa4 */
  push32((uint32_t)(0x119e1aa4u));
  /* 119b8eba push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8ec0 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b8ec2 call 0x119b59b0 */
  push32(0x119b8ec7u); f_119b59b0();
  /* 119b8ec7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8eca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8ecd jne 0x119b8ed0 */
  if (!C.zf) goto L_119b8ed0;
  /* 119b8ecf int3  */
  x86_unimpl("int3 @ 0x119b8ecf");
L_119b8ed0:;
  /* 119b8ed0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b8ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b8ed4 jne 0x119b8e93 */
  if (!C.zf) goto L_119b8e93;
L_119b8ed6:;
  /* 119b8ed6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8ed9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8edd jne 0x119b8f4b */
  if (!C.zf) goto L_119b8f4b;
L_119b8edf:;
  /* 119b8edf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8ee2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8ee9 jne 0x119b8ef4 */
  if (!C.zf) goto L_119b8ef4;
  /* 119b8eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8eee cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8ef2 je 0x119b8f15 */
  if (C.zf) goto L_119b8f15;
L_119b8ef4:;
  /* 119b8ef4 push 0x119e1a64 */
  push32((uint32_t)(0x119e1a64u));
  /* 119b8ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8efb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 119b8f00 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8f05 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8f07 call 0x119b59b0 */
  push32(0x119b8f0cu); f_119b59b0();
  /* 119b8f0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8f0f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8f12 jne 0x119b8f15 */
  if (!C.zf) goto L_119b8f15;
  /* 119b8f14 int3  */
  x86_unimpl("int3 @ 0x119b8f14");
L_119b8f15:;
  /* 119b8f15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b8f17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b8f19 jne 0x119b8edf */
  if (!C.zf) goto L_119b8edf;
  /* 119b8f1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8f1e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119b8f21 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8f24 push eax */
  push32((uint32_t)(EAX));
  /* 119b8f25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b8f27 mov cl, byte ptr [0x119e4ac9] */
  CL = (r8((uint32_t)(0x119e4ac9)));
  /* 119b8f2d push ecx */
  push32((uint32_t)(ECX));
  /* 119b8f2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8f31 push edx */
  push32((uint32_t)(EDX));
  /* 119b8f32 call 0x119bd6f0 */
  push32(0x119b8f37u); f_119bd6f0();
  /* 119b8f37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8f3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8f3d push eax */
  push32((uint32_t)(EAX));
  /* 119b8f3e call 0x119be290 */
  push32(0x119b8f43u); f_119be290();
  /* 119b8f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8f46 jmp 0x119b90b5 */
  goto L_119b90b5;
L_119b8f4b:;
  /* 119b8f4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8f4e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8f52 jne 0x119b8f61 */
  if (!C.zf) goto L_119b8f61;
  /* 119b8f54 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8f58 jne 0x119b8f61 */
  if (!C.zf) goto L_119b8f61;
  /* 119b8f5a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_119b8f61:;
  /* 119b8f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8f64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b8f67 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8f6a je 0x119b8f8d */
  if (C.zf) goto L_119b8f8d;
  /* 119b8f6c push 0x119e1a44 */
  push32((uint32_t)(0x119e1a44u));
  /* 119b8f71 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8f73 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 119b8f78 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8f7d push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8f7f call 0x119b59b0 */
  push32(0x119b8f84u); f_119b59b0();
  /* 119b8f84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8f87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8f8a jne 0x119b8f8d */
  if (!C.zf) goto L_119b8f8d;
  /* 119b8f8c int3  */
  x86_unimpl("int3 @ 0x119b8f8c");
L_119b8f8d:;
  /* 119b8f8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b8f8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b8f91 jne 0x119b8f61 */
  if (!C.zf) goto L_119b8f61;
  /* 119b8f93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8f96 mov eax, dword ptr [0x119e715c] */
  EAX = (r32((uint32_t)(0x119e715c)));
  /* 119b8f9b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b8f9e mov dword ptr [0x119e715c], eax */
  w32((uint32_t)(0x119e715c), (EAX));
  /* 119b8fa3 mov ecx, dword ptr [0x119e4abc] */
  ECX = (r32((uint32_t)(0x119e4abc)));
  /* 119b8fa9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 119b8fac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b8fae jne 0x119b908c */
  if (!C.zf) goto L_119b908c;
  /* 119b8fb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8fb7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8fba je 0x119b8fcc */
  if (C.zf) goto L_119b8fcc;
  /* 119b8fbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8fbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119b8fc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b8fc4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119b8fc7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 119b8fca jmp 0x119b900a */
  goto L_119b900a;
L_119b8fcc:;
  /* 119b8fcc mov ecx, dword ptr [0x119e7150] */
  ECX = (r32((uint32_t)(0x119e7150)));
  /* 119b8fd2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8fd5 je 0x119b8ff8 */
  if (C.zf) goto L_119b8ff8;
  /* 119b8fd7 push 0x119e1a2c */
  push32((uint32_t)(0x119e1a2cu));
  /* 119b8fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 119b8fde push 0x42a */
  push32((uint32_t)(0x42au));
  /* 119b8fe3 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b8fe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b8fea call 0x119b59b0 */
  push32(0x119b8fefu); f_119b59b0();
  /* 119b8fef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b8ff2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b8ff5 jne 0x119b8ff8 */
  if (!C.zf) goto L_119b8ff8;
  /* 119b8ff7 int3  */
  x86_unimpl("int3 @ 0x119b8ff7");
L_119b8ff8:;
  /* 119b8ff8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b8ffa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b8ffc jne 0x119b8fcc */
  if (!C.zf) goto L_119b8fcc;
  /* 119b8ffe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9001 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119b9004 mov dword ptr [0x119e7150], ecx */
  w32((uint32_t)(0x119e7150), (ECX));
L_119b900a:;
  /* 119b900a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b900d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9011 je 0x119b9022 */
  if (C.zf) goto L_119b9022;
  /* 119b9013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9016 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119b9019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b901c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119b901e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119b9020 jmp 0x119b905f */
  goto L_119b905f;
L_119b9022:;
  /* 119b9022 mov ecx, dword ptr [0x119e7158] */
  ECX = (r32((uint32_t)(0x119e7158)));
  /* 119b9028 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b902b je 0x119b904e */
  if (C.zf) goto L_119b904e;
  /* 119b902d push 0x119e1a14 */
  push32((uint32_t)(0x119e1a14u));
  /* 119b9032 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9034 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 119b9039 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b903e push 2 */
  push32((uint32_t)(0x2u));
  /* 119b9040 call 0x119b59b0 */
  push32(0x119b9045u); f_119b59b0();
  /* 119b9045 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9048 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b904b jne 0x119b904e */
  if (!C.zf) goto L_119b904e;
  /* 119b904d int3  */
  x86_unimpl("int3 @ 0x119b904d");
L_119b904e:;
  /* 119b904e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b9050 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b9052 jne 0x119b9022 */
  if (!C.zf) goto L_119b9022;
  /* 119b9054 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9057 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119b9059 mov dword ptr [0x119e7158], ecx */
  w32((uint32_t)(0x119e7158), (ECX));
L_119b905f:;
  /* 119b905f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9062 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119b9065 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9068 push eax */
  push32((uint32_t)(EAX));
  /* 119b9069 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b906b mov cl, byte ptr [0x119e4ac9] */
  CL = (r8((uint32_t)(0x119e4ac9)));
  /* 119b9071 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9075 push edx */
  push32((uint32_t)(EDX));
  /* 119b9076 call 0x119bd6f0 */
  push32(0x119b907bu); f_119bd6f0();
  /* 119b907b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b907e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9081 push eax */
  push32((uint32_t)(EAX));
  /* 119b9082 call 0x119be290 */
  push32(0x119b9087u); f_119be290();
  /* 119b9087 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b908a jmp 0x119b90b5 */
  goto L_119b90b5;
L_119b908c:;
  /* 119b908c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b908f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 119b9096 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9099 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119b909c push eax */
  push32((uint32_t)(EAX));
  /* 119b909d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b909f mov cl, byte ptr [0x119e4ac9] */
  CL = (r8((uint32_t)(0x119e4ac9)));
  /* 119b90a5 push ecx */
  push32((uint32_t)(ECX));
  /* 119b90a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b90a9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b90ac push edx */
  push32((uint32_t)(EDX));
  /* 119b90ad call 0x119bd6f0 */
  push32(0x119b90b2u); f_119bd6f0();
  /* 119b90b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b90b5:;
  /* 119b90b5 pop edi */
  EDI = (pop32());
  /* 119b90b6 pop esi */
  ESI = (pop32());
  /* 119b90b7 pop ebx */
  EBX = (pop32());
  /* 119b90b8 mov esp, ebp */
  ESP = (EBP);
  /* 119b90ba pop ebp */
  EBP = (pop32());
  /* 119b90bb ret  */
  ESPCHK(0x119b8cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090c0 @ 0x119b90c0 (19 bytes, 9 insns) */
void f_119b90c0(void) {
  FTRACE(0x119b90c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b90c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b90c1 mov ebp, esp */
  EBP = (ESP);
  /* 119b90c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b90c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b90c8 push eax */
  push32((uint32_t)(EAX));
  /* 119b90c9 call 0x119b90e0 */
  push32(0x119b90ceu); f_119b90e0();
  /* 119b90ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b90d1 pop ebp */
  EBP = (pop32());
  /* 119b90d2 ret  */
  ESPCHK(0x119b90c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090e0 @ 0x119b90e0 (342 bytes, 119 insns) */
void f_119b90e0(void) {
  FTRACE(0x119b90e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b90e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b90e1 mov ebp, esp */
  EBP = (ESP);
  /* 119b90e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b90e6 push ebx */
  push32((uint32_t)(EBX));
  /* 119b90e7 push esi */
  push32((uint32_t)(ESI));
  /* 119b90e8 push edi */
  push32((uint32_t)(EDI));
  /* 119b90e9 mov eax, dword ptr [0x119e4abc] */
  EAX = (r32((uint32_t)(0x119e4abc)));
  /* 119b90ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119b90f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b90f3 je 0x119b9125 */
  if (C.zf) goto L_119b9125;
L_119b90f5:;
  /* 119b90f5 call 0x119b93b0 */
  push32(0x119b90fau); f_119b93b0();
  /* 119b90fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b90fc jne 0x119b911f */
  if (!C.zf) goto L_119b911f;
  /* 119b90fe push 0x119e1860 */
  push32((uint32_t)(0x119e1860u));
  /* 119b9103 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9105 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 119b910a push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b910f push 2 */
  push32((uint32_t)(0x2u));
  /* 119b9111 call 0x119b59b0 */
  push32(0x119b9116u); f_119b59b0();
  /* 119b9116 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9119 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b911c jne 0x119b911f */
  if (!C.zf) goto L_119b911f;
  /* 119b911e int3  */
  x86_unimpl("int3 @ 0x119b911e");
L_119b911f:;
  /* 119b911f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b9121 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b9123 jne 0x119b90f5 */
  if (!C.zf) goto L_119b90f5;
L_119b9125:;
  /* 119b9125 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b9127 call 0x119bdb80 */
  push32(0x119b912cu); f_119bdb80();
  /* 119b912c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b912f:;
  /* 119b912f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9132 push edx */
  push32((uint32_t)(EDX));
  /* 119b9133 call 0x119b9810 */
  push32(0x119b9138u); f_119b9810();
  /* 119b9138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b913b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b913d jne 0x119b9160 */
  if (!C.zf) goto L_119b9160;
  /* 119b913f push 0x119e1964 */
  push32((uint32_t)(0x119e1964u));
  /* 119b9144 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9146 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 119b914b push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b9150 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b9152 call 0x119b59b0 */
  push32(0x119b9157u); f_119b59b0();
  /* 119b9157 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b915a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b915d jne 0x119b9160 */
  if (!C.zf) goto L_119b9160;
  /* 119b915f int3  */
  x86_unimpl("int3 @ 0x119b915f");
L_119b9160:;
  /* 119b9160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b9162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9164 jne 0x119b912f */
  if (!C.zf) goto L_119b912f;
  /* 119b9166 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9169 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b916c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119b916f:;
  /* 119b916f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9172 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b9175 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b917a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b917d je 0x119b91c2 */
  if (C.zf) goto L_119b91c2;
  /* 119b917f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9182 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9186 je 0x119b91c2 */
  if (C.zf) goto L_119b91c2;
  /* 119b9188 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b918b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b918e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b9193 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9196 je 0x119b91c2 */
  if (C.zf) goto L_119b91c2;
  /* 119b9198 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b919b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b919f je 0x119b91c2 */
  if (C.zf) goto L_119b91c2;
  /* 119b91a1 push 0x119e1afc */
  push32((uint32_t)(0x119e1afcu));
  /* 119b91a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b91a8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 119b91ad push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b91b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b91b4 call 0x119b59b0 */
  push32(0x119b91b9u); f_119b59b0();
  /* 119b91b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b91bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b91bf jne 0x119b91c2 */
  if (!C.zf) goto L_119b91c2;
  /* 119b91c1 int3  */
  x86_unimpl("int3 @ 0x119b91c1");
L_119b91c2:;
  /* 119b91c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b91c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b91c6 jne 0x119b916f */
  if (!C.zf) goto L_119b916f;
  /* 119b91c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b91cb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b91cf jne 0x119b91de */
  if (!C.zf) goto L_119b91de;
  /* 119b91d1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b91d5 jne 0x119b91de */
  if (!C.zf) goto L_119b91de;
  /* 119b91d7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_119b91de:;
  /* 119b91de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b91e1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b91e5 je 0x119b9219 */
  if (C.zf) goto L_119b9219;
L_119b91e7:;
  /* 119b91e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b91ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b91ed cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b91f0 je 0x119b9213 */
  if (C.zf) goto L_119b9213;
  /* 119b91f2 push 0x119e1a44 */
  push32((uint32_t)(0x119e1a44u));
  /* 119b91f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b91f9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 119b91fe push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b9203 push 2 */
  push32((uint32_t)(0x2u));
  /* 119b9205 call 0x119b59b0 */
  push32(0x119b920au); f_119b59b0();
  /* 119b920a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b920d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9210 jne 0x119b9213 */
  if (!C.zf) goto L_119b9213;
  /* 119b9212 int3  */
  x86_unimpl("int3 @ 0x119b9212");
L_119b9213:;
  /* 119b9213 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b9215 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b9217 jne 0x119b91e7 */
  if (!C.zf) goto L_119b91e7;
L_119b9219:;
  /* 119b9219 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b921c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119b921f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b9222 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b9224 call 0x119bdc20 */
  push32(0x119b9229u); f_119bdc20();
  /* 119b9229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b922c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b922f pop edi */
  EDI = (pop32());
  /* 119b9230 pop esi */
  ESI = (pop32());
  /* 119b9231 pop ebx */
  EBX = (pop32());
  /* 119b9232 mov esp, ebp */
  ESP = (EBP);
  /* 119b9234 pop ebp */
  EBP = (pop32());
  /* 119b9235 ret  */
  ESPCHK(0x119b90e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009240 @ 0x119b9240 (28 bytes, 11 insns) */
void f_119b9240(void) {
  FTRACE(0x119b9240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9240 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9241 mov ebp, esp */
  EBP = (ESP);
  /* 119b9243 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9244 mov eax, dword ptr [0x119e4ac4] */
  EAX = (r32((uint32_t)(0x119e4ac4)));
  /* 119b9249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b924c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b924f mov dword ptr [0x119e4ac4], ecx */
  w32((uint32_t)(0x119e4ac4), (ECX));
  /* 119b9255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9258 mov esp, ebp */
  ESP = (EBP);
  /* 119b925a pop ebp */
  EBP = (pop32());
  /* 119b925b ret  */
  ESPCHK(0x119b9240u, _esp0);
  ESP += 4; return;
}

/* FUN_10009260 @ 0x119b9260 (157 bytes, 59 insns) */
void f_119b9260(void) {
  FTRACE(0x119b9260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9260 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9261 mov ebp, esp */
  EBP = (ESP);
  /* 119b9263 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9264 push ebx */
  push32((uint32_t)(EBX));
  /* 119b9265 push esi */
  push32((uint32_t)(ESI));
  /* 119b9266 push edi */
  push32((uint32_t)(EDI));
  /* 119b9267 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b9269 call 0x119bdb80 */
  push32(0x119b926eu); f_119bdb80();
  /* 119b926e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9274 push eax */
  push32((uint32_t)(EAX));
  /* 119b9275 call 0x119b9810 */
  push32(0x119b927au); f_119b9810();
  /* 119b927a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b927d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b927f je 0x119b92ec */
  if (C.zf) goto L_119b92ec;
  /* 119b9281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9284 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9287 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119b928a:;
  /* 119b928a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b928d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b9290 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b9295 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9298 je 0x119b92dd */
  if (C.zf) goto L_119b92dd;
  /* 119b929a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b929d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b92a1 je 0x119b92dd */
  if (C.zf) goto L_119b92dd;
  /* 119b92a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b92a6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b92a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b92ae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b92b1 je 0x119b92dd */
  if (C.zf) goto L_119b92dd;
  /* 119b92b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b92b6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b92ba je 0x119b92dd */
  if (C.zf) goto L_119b92dd;
  /* 119b92bc push 0x119e1afc */
  push32((uint32_t)(0x119e1afcu));
  /* 119b92c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b92c3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 119b92c8 push 0x119e1854 */
  push32((uint32_t)(0x119e1854u));
  /* 119b92cd push 2 */
  push32((uint32_t)(0x2u));
  /* 119b92cf call 0x119b59b0 */
  push32(0x119b92d4u); f_119b59b0();
  /* 119b92d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b92d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b92da jne 0x119b92dd */
  if (!C.zf) goto L_119b92dd;
  /* 119b92dc int3  */
  x86_unimpl("int3 @ 0x119b92dc");
L_119b92dd:;
  /* 119b92dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b92df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b92e1 jne 0x119b928a */
  if (!C.zf) goto L_119b928a;
  /* 119b92e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b92e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b92e9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_119b92ec:;
  /* 119b92ec push 9 */
  push32((uint32_t)(0x9u));
  /* 119b92ee call 0x119bdc20 */
  push32(0x119b92f3u); f_119bdc20();
  /* 119b92f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b92f6 pop edi */
  EDI = (pop32());
  /* 119b92f7 pop esi */
  ESI = (pop32());
  /* 119b92f8 pop ebx */
  EBX = (pop32());
  /* 119b92f9 mov esp, ebp */
  ESP = (EBP);
  /* 119b92fb pop ebp */
  EBP = (pop32());
  /* 119b92fc ret  */
  ESPCHK(0x119b9260u, _esp0);
  ESP += 4; return;
}

/* FUN_10009300 @ 0x119b9300 (28 bytes, 11 insns) */
void f_119b9300(void) {
  FTRACE(0x119b9300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9300 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9301 mov ebp, esp */
  EBP = (ESP);
  /* 119b9303 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9304 mov eax, dword ptr [0x119e5198] */
  EAX = (r32((uint32_t)(0x119e5198)));
  /* 119b9309 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b930c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b930f mov dword ptr [0x119e5198], ecx */
  w32((uint32_t)(0x119e5198), (ECX));
  /* 119b9315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9318 mov esp, ebp */
  ESP = (EBP);
  /* 119b931a pop ebp */
  EBP = (pop32());
  /* 119b931b ret  */
  ESPCHK(0x119b9300u, _esp0);
  ESP += 4; return;
}

/* FUN_10009320 @ 0x119b9320 (136 bytes, 55 insns) */
void f_119b9320(void) {
  FTRACE(0x119b9320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9320 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9321 mov ebp, esp */
  EBP = (ESP);
  /* 119b9323 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9324 push ebx */
  push32((uint32_t)(EBX));
  /* 119b9325 push esi */
  push32((uint32_t)(ESI));
  /* 119b9326 push edi */
  push32((uint32_t)(EDI));
  /* 119b9327 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_119b932e:;
  /* 119b932e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b9331 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b9334 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9337 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 119b933a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b933c je 0x119b939e */
  if (C.zf) goto L_119b939e;
  /* 119b933e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9341 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b9343 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119b9345 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b9348 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b934e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9351 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9354 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119b9357 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9359 je 0x119b939c */
  if (C.zf) goto L_119b939c;
L_119b935b:;
  /* 119b935b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b935e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b9363 push eax */
  push32((uint32_t)(EAX));
  /* 119b9364 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9367 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b9369 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 119b936c push edx */
  push32((uint32_t)(EDX));
  /* 119b936d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9370 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9373 push eax */
  push32((uint32_t)(EAX));
  /* 119b9374 push 0x119e1b40 */
  push32((uint32_t)(0x119e1b40u));
  /* 119b9379 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b937b push 0 */
  push32((uint32_t)(0x0u));
  /* 119b937d push 0 */
  push32((uint32_t)(0x0u));
  /* 119b937f push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9381 call 0x119b59b0 */
  push32(0x119b9386u); f_119b59b0();
  /* 119b9386 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9389 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b938c jne 0x119b938f */
  if (!C.zf) goto L_119b938f;
  /* 119b938e int3  */
  x86_unimpl("int3 @ 0x119b938e");
L_119b938f:;
  /* 119b938f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b9391 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b9393 jne 0x119b935b */
  if (!C.zf) goto L_119b935b;
  /* 119b9395 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119b939c:;
  /* 119b939c jmp 0x119b932e */
  goto L_119b932e;
L_119b939e:;
  /* 119b939e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b93a1 pop edi */
  EDI = (pop32());
  /* 119b93a2 pop esi */
  ESI = (pop32());
  /* 119b93a3 pop ebx */
  EBX = (pop32());
  /* 119b93a4 mov esp, ebp */
  ESP = (EBP);
  /* 119b93a6 pop ebp */
  EBP = (pop32());
  /* 119b93a7 ret  */
  ESPCHK(0x119b9320u, _esp0);
  ESP += 4; return;
}

/* FUN_100093b0 @ 0x119b93b0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_119b93b0(void) {
  FTRACE(0x119b93b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b93b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b93b1 mov ebp, esp */
  EBP = (ESP);
  /* 119b93b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b93b6 push ebx */
  push32((uint32_t)(EBX));
  /* 119b93b7 push esi */
  push32((uint32_t)(ESI));
  /* 119b93b8 push edi */
  push32((uint32_t)(EDI));
  /* 119b93b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119b93c0 mov eax, dword ptr [0x119e4abc] */
  EAX = (r32((uint32_t)(0x119e4abc)));
  /* 119b93c5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 119b93c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b93ca jne 0x119b93d6 */
  if (!C.zf) goto L_119b93d6;
  /* 119b93cc mov eax, 1 */
  EAX = (0x1u);
  /* 119b93d1 jmp 0x119b9708 */
  goto L_119b9708;
L_119b93d6:;
  /* 119b93d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b93d8 call 0x119bdb80 */
  push32(0x119b93ddu); f_119bdb80();
  /* 119b93dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b93e0 call 0x119be300 */
  push32(0x119b93e5u); f_119be300();
  /* 119b93e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119b93e8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b93ec je 0x119b94f9 */
  if (C.zf) goto L_119b94f9;
  /* 119b93f2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b93f6 je 0x119b94f9 */
  if (C.zf) goto L_119b94f9;
  /* 119b93fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119b93ff mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 119b9402 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119b9405 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9408 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119b940b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b940f ja 0x119b94c2 */
  if ((!C.cf&&!C.zf)) goto L_119b94c2;
  /* 119b9415 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119b9418 jmp dword ptr [eax*4 + 0x119b970f] */
  switch (EAX) {
    case 0: goto L_119b949a;
    case 1: goto L_119b9472;
    case 2: goto L_119b944a;
    case 3: goto L_119b941f;
    default: x86_unimpl("switch@0x119b9418 out of table"); return;
  }
L_119b941f:;
  /* 119b941f push 0x119e1c94 */
  push32((uint32_t)(0x119e1c94u));
  /* 119b9424 push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b9429 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b942b push 0 */
  push32((uint32_t)(0x0u));
  /* 119b942d push 0 */
  push32((uint32_t)(0x0u));
  /* 119b942f push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9431 call 0x119b59b0 */
  push32(0x119b9436u); f_119b59b0();
  /* 119b9436 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9439 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b943c jne 0x119b943f */
  if (!C.zf) goto L_119b943f;
  /* 119b943e int3  */
  x86_unimpl("int3 @ 0x119b943e");
L_119b943f:;
  /* 119b943f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b9441 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b9443 jne 0x119b941f */
  if (!C.zf) goto L_119b941f;
  /* 119b9445 jmp 0x119b94e8 */
  goto L_119b94e8;
L_119b944a:;
  /* 119b944a push 0x119e1c70 */
  push32((uint32_t)(0x119e1c70u));
  /* 119b944f push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b9454 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9456 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9458 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b945a push 0 */
  push32((uint32_t)(0x0u));
  /* 119b945c call 0x119b59b0 */
  push32(0x119b9461u); f_119b59b0();
  /* 119b9461 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9464 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9467 jne 0x119b946a */
  if (!C.zf) goto L_119b946a;
  /* 119b9469 int3  */
  x86_unimpl("int3 @ 0x119b9469");
L_119b946a:;
  /* 119b946a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b946c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b946e jne 0x119b944a */
  if (!C.zf) goto L_119b944a;
  /* 119b9470 jmp 0x119b94e8 */
  goto L_119b94e8;
L_119b9472:;
  /* 119b9472 push 0x119e1c4c */
  push32((uint32_t)(0x119e1c4cu));
  /* 119b9477 push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b947c push 0 */
  push32((uint32_t)(0x0u));
  /* 119b947e push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9480 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9482 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9484 call 0x119b59b0 */
  push32(0x119b9489u); f_119b59b0();
  /* 119b9489 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b948c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b948f jne 0x119b9492 */
  if (!C.zf) goto L_119b9492;
  /* 119b9491 int3  */
  x86_unimpl("int3 @ 0x119b9491");
L_119b9492:;
  /* 119b9492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b9494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9496 jne 0x119b9472 */
  if (!C.zf) goto L_119b9472;
  /* 119b9498 jmp 0x119b94e8 */
  goto L_119b94e8;
L_119b949a:;
  /* 119b949a push 0x119e1c28 */
  push32((uint32_t)(0x119e1c28u));
  /* 119b949f push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b94a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b94a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b94a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b94aa push 0 */
  push32((uint32_t)(0x0u));
  /* 119b94ac call 0x119b59b0 */
  push32(0x119b94b1u); f_119b59b0();
  /* 119b94b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b94b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b94b7 jne 0x119b94ba */
  if (!C.zf) goto L_119b94ba;
  /* 119b94b9 int3  */
  x86_unimpl("int3 @ 0x119b94b9");
L_119b94ba:;
  /* 119b94ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b94bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b94be jne 0x119b949a */
  if (!C.zf) goto L_119b949a;
  /* 119b94c0 jmp 0x119b94e8 */
  goto L_119b94e8;
L_119b94c2:;
  /* 119b94c2 push 0x119e1bfc */
  push32((uint32_t)(0x119e1bfcu));
  /* 119b94c7 push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b94cc push 0 */
  push32((uint32_t)(0x0u));
  /* 119b94ce push 0 */
  push32((uint32_t)(0x0u));
  /* 119b94d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b94d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b94d4 call 0x119b59b0 */
  push32(0x119b94d9u); f_119b59b0();
  /* 119b94d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b94dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b94df jne 0x119b94e2 */
  if (!C.zf) goto L_119b94e2;
  /* 119b94e1 int3  */
  x86_unimpl("int3 @ 0x119b94e1");
L_119b94e2:;
  /* 119b94e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b94e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b94e6 jne 0x119b94c2 */
  if (!C.zf) goto L_119b94c2;
L_119b94e8:;
  /* 119b94e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b94ea call 0x119bdc20 */
  push32(0x119b94efu); f_119bdc20();
  /* 119b94ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b94f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b94f4 jmp 0x119b9708 */
  goto L_119b9708;
L_119b94f9:;
  /* 119b94f9 mov eax, dword ptr [0x119e7158] */
  EAX = (r32((uint32_t)(0x119e7158)));
  /* 119b94fe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119b9501 jmp 0x119b950b */
  goto L_119b950b;
L_119b9503:;
  /* 119b9503 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9506 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119b9508 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119b950b:;
  /* 119b950b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b950f je 0x119b96fb */
  if (C.zf) goto L_119b96fb;
  /* 119b9515 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 119b951c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b951f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119b9522 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b9528 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b952b je 0x119b9550 */
  if (C.zf) goto L_119b9550;
  /* 119b952d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9530 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9534 je 0x119b9550 */
  if (C.zf) goto L_119b9550;
  /* 119b9536 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9539 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119b953c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b9542 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9545 je 0x119b9550 */
  if (C.zf) goto L_119b9550;
  /* 119b9547 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b954a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b954e jne 0x119b9568 */
  if (!C.zf) goto L_119b9568;
L_119b9550:;
  /* 119b9550 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9553 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119b9556 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b955c mov edx, dword ptr [ecx*4 + 0x119e4acc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e4acc)));
  /* 119b9563 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119b9566 jmp 0x119b956f */
  goto L_119b956f;
L_119b9568:;
  /* 119b9568 mov dword ptr [ebp - 0x14], 0x119e1bf4 */
  w32((uint32_t)(EBP + -0x14), (0x119e1bf4u));
L_119b956f:;
  /* 119b956f push 4 */
  push32((uint32_t)(0x4u));
  /* 119b9571 mov al, byte ptr [0x119e4ac8] */
  AL = (r8((uint32_t)(0x119e4ac8)));
  /* 119b9576 push eax */
  push32((uint32_t)(EAX));
  /* 119b9577 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b957a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b957d push ecx */
  push32((uint32_t)(ECX));
  /* 119b957e call 0x119b9320 */
  push32(0x119b9583u); f_119b9320();
  /* 119b9583 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9588 jne 0x119b95c4 */
  if (!C.zf) goto L_119b95c4;
L_119b958a:;
  /* 119b958a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b958d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9590 push edx */
  push32((uint32_t)(EDX));
  /* 119b9591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9594 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 119b9597 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9598 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119b959b push edx */
  push32((uint32_t)(EDX));
  /* 119b959c push 0x119e1ad0 */
  push32((uint32_t)(0x119e1ad0u));
  /* 119b95a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b95a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b95a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b95a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b95a9 call 0x119b59b0 */
  push32(0x119b95aeu); f_119b59b0();
  /* 119b95ae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b95b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b95b4 jne 0x119b95b7 */
  if (!C.zf) goto L_119b95b7;
  /* 119b95b6 int3  */
  x86_unimpl("int3 @ 0x119b95b6");
L_119b95b7:;
  /* 119b95b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b95b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b95bb jne 0x119b958a */
  if (!C.zf) goto L_119b958a;
  /* 119b95bd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_119b95c4:;
  /* 119b95c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 119b95c6 mov cl, byte ptr [0x119e4ac8] */
  CL = (r8((uint32_t)(0x119e4ac8)));
  /* 119b95cc push ecx */
  push32((uint32_t)(ECX));
  /* 119b95cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b95d0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119b95d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b95d6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 119b95da push edx */
  push32((uint32_t)(EDX));
  /* 119b95db call 0x119b9320 */
  push32(0x119b95e0u); f_119b9320();
  /* 119b95e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b95e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b95e5 jne 0x119b9621 */
  if (!C.zf) goto L_119b9621;
L_119b95e7:;
  /* 119b95e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b95ea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b95ed push eax */
  push32((uint32_t)(EAX));
  /* 119b95ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b95f1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 119b95f4 push edx */
  push32((uint32_t)(EDX));
  /* 119b95f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119b95f8 push eax */
  push32((uint32_t)(EAX));
  /* 119b95f9 push 0x119e1aa4 */
  push32((uint32_t)(0x119e1aa4u));
  /* 119b95fe push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9600 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9602 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9604 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9606 call 0x119b59b0 */
  push32(0x119b960bu); f_119b59b0();
  /* 119b960b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b960e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9611 jne 0x119b9614 */
  if (!C.zf) goto L_119b9614;
  /* 119b9613 int3  */
  x86_unimpl("int3 @ 0x119b9613");
L_119b9614:;
  /* 119b9614 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b9616 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b9618 jne 0x119b95e7 */
  if (!C.zf) goto L_119b95e7;
  /* 119b961a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_119b9621:;
  /* 119b9621 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9624 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9628 jne 0x119b967a */
  if (!C.zf) goto L_119b967a;
  /* 119b962a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b962d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119b9630 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9631 mov dl, byte ptr [0x119e4ac9] */
  DL = (r8((uint32_t)(0x119e4ac9)));
  /* 119b9637 push edx */
  push32((uint32_t)(EDX));
  /* 119b9638 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b963b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b963e push eax */
  push32((uint32_t)(EAX));
  /* 119b963f call 0x119b9320 */
  push32(0x119b9644u); f_119b9320();
  /* 119b9644 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9649 jne 0x119b967a */
  if (!C.zf) goto L_119b967a;
L_119b964b:;
  /* 119b964b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b964e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9651 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9652 push 0x119e1bc8 */
  push32((uint32_t)(0x119e1bc8u));
  /* 119b9657 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9659 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b965b push 0 */
  push32((uint32_t)(0x0u));
  /* 119b965d push 0 */
  push32((uint32_t)(0x0u));
  /* 119b965f call 0x119b59b0 */
  push32(0x119b9664u); f_119b59b0();
  /* 119b9664 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9667 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b966a jne 0x119b966d */
  if (!C.zf) goto L_119b966d;
  /* 119b966c int3  */
  x86_unimpl("int3 @ 0x119b966c");
L_119b966d:;
  /* 119b966d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b966f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b9671 jne 0x119b964b */
  if (!C.zf) goto L_119b964b;
  /* 119b9673 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_119b967a:;
  /* 119b967a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b967e jne 0x119b96f6 */
  if (!C.zf) goto L_119b96f6;
  /* 119b9680 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9683 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9687 je 0x119b96bc */
  if (C.zf) goto L_119b96bc;
L_119b9689:;
  /* 119b9689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b968c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119b968f push edx */
  push32((uint32_t)(EDX));
  /* 119b9690 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9693 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119b9696 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9697 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119b969a push edx */
  push32((uint32_t)(EDX));
  /* 119b969b push 0x119e1ba8 */
  push32((uint32_t)(0x119e1ba8u));
  /* 119b96a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b96a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b96a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b96a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b96a8 call 0x119b59b0 */
  push32(0x119b96adu); f_119b59b0();
  /* 119b96ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b96b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b96b3 jne 0x119b96b6 */
  if (!C.zf) goto L_119b96b6;
  /* 119b96b5 int3  */
  x86_unimpl("int3 @ 0x119b96b5");
L_119b96b6:;
  /* 119b96b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b96b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b96ba jne 0x119b9689 */
  if (!C.zf) goto L_119b9689;
L_119b96bc:;
  /* 119b96bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b96bf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 119b96c2 push edx */
  push32((uint32_t)(EDX));
  /* 119b96c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b96c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b96c9 push eax */
  push32((uint32_t)(EAX));
  /* 119b96ca mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119b96cd push ecx */
  push32((uint32_t)(ECX));
  /* 119b96ce push 0x119e1b7c */
  push32((uint32_t)(0x119e1b7cu));
  /* 119b96d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b96d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b96d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b96d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b96db call 0x119b59b0 */
  push32(0x119b96e0u); f_119b59b0();
  /* 119b96e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b96e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b96e6 jne 0x119b96e9 */
  if (!C.zf) goto L_119b96e9;
  /* 119b96e8 int3  */
  x86_unimpl("int3 @ 0x119b96e8");
L_119b96e9:;
  /* 119b96e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b96eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b96ed jne 0x119b96bc */
  if (!C.zf) goto L_119b96bc;
  /* 119b96ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119b96f6:;
  /* 119b96f6 jmp 0x119b9503 */
  goto L_119b9503;
L_119b96fb:;
  /* 119b96fb push 9 */
  push32((uint32_t)(0x9u));
  /* 119b96fd call 0x119bdc20 */
  push32(0x119b9702u); f_119bdc20();
  /* 119b9702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119b9708:;
  /* 119b9708 pop edi */
  EDI = (pop32());
  /* 119b9709 pop esi */
  ESI = (pop32());
  /* 119b970a pop ebx */
  EBX = (pop32());
  /* 119b970b mov esp, ebp */
  ESP = (EBP);
  /* 119b970d pop ebp */
  EBP = (pop32());
  /* 119b970e ret  */
  ESPCHK(0x119b93b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009720 @ 0x119b9720 (34 bytes, 13 insns) */
void f_119b9720(void) {
  FTRACE(0x119b9720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9720 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9721 mov ebp, esp */
  EBP = (ESP);
  /* 119b9723 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9724 mov eax, dword ptr [0x119e4abc] */
  EAX = (r32((uint32_t)(0x119e4abc)));
  /* 119b9729 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b972c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9730 je 0x119b973b */
  if (C.zf) goto L_119b973b;
  /* 119b9732 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9735 mov dword ptr [0x119e4abc], ecx */
  w32((uint32_t)(0x119e4abc), (ECX));
L_119b973b:;
  /* 119b973b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b973e mov esp, ebp */
  ESP = (EBP);
  /* 119b9740 pop ebp */
  EBP = (pop32());
  /* 119b9741 ret  */
  ESPCHK(0x119b9720u, _esp0);
  ESP += 4; return;
}

/* FUN_10009750 @ 0x119b9750 (103 bytes, 38 insns) */
void f_119b9750(void) {
  FTRACE(0x119b9750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9750 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9751 mov ebp, esp */
  EBP = (ESP);
  /* 119b9753 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9754 mov eax, dword ptr [0x119e4abc] */
  EAX = (r32((uint32_t)(0x119e4abc)));
  /* 119b9759 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 119b975c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b975e jne 0x119b9762 */
  if (!C.zf) goto L_119b9762;
  /* 119b9760 jmp 0x119b97b3 */
  goto L_119b97b3;
L_119b9762:;
  /* 119b9762 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b9764 call 0x119bdb80 */
  push32(0x119b9769u); f_119bdb80();
  /* 119b9769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b976c mov ecx, dword ptr [0x119e7158] */
  ECX = (r32((uint32_t)(0x119e7158)));
  /* 119b9772 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b9775 jmp 0x119b977f */
  goto L_119b977f;
L_119b9777:;
  /* 119b9777 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b977a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119b977c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119b977f:;
  /* 119b977f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9783 je 0x119b97a9 */
  if (C.zf) goto L_119b97a9;
  /* 119b9785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9788 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 119b978b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b9791 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9794 jne 0x119b97a7 */
  if (!C.zf) goto L_119b97a7;
  /* 119b9796 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b9799 push eax */
  push32((uint32_t)(EAX));
  /* 119b979a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b979d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b97a0 push ecx */
  push32((uint32_t)(ECX));
  /* 119b97a1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x119b97a4u);
  /* 119b97a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b97a7:;
  /* 119b97a7 jmp 0x119b9777 */
  goto L_119b9777;
L_119b97a9:;
  /* 119b97a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b97ab call 0x119bdc20 */
  push32(0x119b97b0u); f_119bdc20();
  /* 119b97b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b97b3:;
  /* 119b97b3 mov esp, ebp */
  ESP = (EBP);
  /* 119b97b5 pop ebp */
  EBP = (pop32());
  /* 119b97b6 ret  */
  ESPCHK(0x119b9750u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x119b97c0 (75 bytes, 28 insns) */
void f_119b97c0(void) {
  FTRACE(0x119b97c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b97c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b97c1 mov ebp, esp */
  EBP = (ESP);
  /* 119b97c3 push ecx */
  push32((uint32_t)(ECX));
  /* 119b97c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b97c8 je 0x119b97fd */
  if (C.zf) goto L_119b97fd;
  /* 119b97ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b97cd push eax */
  push32((uint32_t)(EAX));
  /* 119b97ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b97d1 push ecx */
  push32((uint32_t)(ECX));
  /* 119b97d2 call dword ptr [0x119e939c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e939c))), 0x119b97d8u);
  /* 119b97d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b97da jne 0x119b97fd */
  if (!C.zf) goto L_119b97fd;
  /* 119b97dc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b97e0 je 0x119b97f4 */
  if (C.zf) goto L_119b97f4;
  /* 119b97e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b97e5 push edx */
  push32((uint32_t)(EDX));
  /* 119b97e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b97e9 push eax */
  push32((uint32_t)(EAX));
  /* 119b97ea call dword ptr [0x119e93a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a0))), 0x119b97f0u);
  /* 119b97f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b97f2 jne 0x119b97fd */
  if (!C.zf) goto L_119b97fd;
L_119b97f4:;
  /* 119b97f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119b97fb jmp 0x119b9804 */
  goto L_119b9804;
L_119b97fd:;
  /* 119b97fd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119b9804:;
  /* 119b9804 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9807 mov esp, ebp */
  ESP = (EBP);
  /* 119b9809 pop ebp */
  EBP = (pop32());
  /* 119b980a ret  */
  ESPCHK(0x119b97c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x119b9810 (134 bytes, 50 insns) */
void f_119b9810(void) {
  FTRACE(0x119b9810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9810 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9811 mov ebp, esp */
  EBP = (ESP);
  /* 119b9813 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9814 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9818 jne 0x119b981e */
  if (!C.zf) goto L_119b981e;
  /* 119b981a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b981c jmp 0x119b9892 */
  goto L_119b9892;
L_119b981e:;
  /* 119b981e push 1 */
  push32((uint32_t)(0x1u));
  /* 119b9820 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 119b9822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9825 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9828 push eax */
  push32((uint32_t)(EAX));
  /* 119b9829 call 0x119b97c0 */
  push32(0x119b982eu); f_119b97c0();
  /* 119b982e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9833 jne 0x119b9839 */
  if (!C.zf) goto L_119b9839;
  /* 119b9835 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b9837 jmp 0x119b9892 */
  goto L_119b9892;
L_119b9839:;
  /* 119b9839 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b983c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b983f push ecx */
  push32((uint32_t)(ECX));
  /* 119b9840 call 0x119be420 */
  push32(0x119b9845u); f_119be420();
  /* 119b9845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9848 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b984b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b984f je 0x119b9866 */
  if (C.zf) goto L_119b9866;
  /* 119b9851 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9854 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9857 push edx */
  push32((uint32_t)(EDX));
  /* 119b9858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b985b push eax */
  push32((uint32_t)(EAX));
  /* 119b985c call 0x119be480 */
  push32(0x119b9861u); f_119be480();
  /* 119b9861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9864 jmp 0x119b9892 */
  goto L_119b9892;
L_119b9866:;
  /* 119b9866 mov ecx, dword ptr [0x119e710c] */
  ECX = (r32((uint32_t)(0x119e710c)));
  /* 119b986c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 119b9872 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b9874 je 0x119b987d */
  if (C.zf) goto L_119b987d;
  /* 119b9876 mov eax, 1 */
  EAX = (0x1u);
  /* 119b987b jmp 0x119b9892 */
  goto L_119b9892;
L_119b987d:;
  /* 119b987d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9880 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9883 push edx */
  push32((uint32_t)(EDX));
  /* 119b9884 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9886 mov eax, dword ptr [0x119e8ac4] */
  EAX = (r32((uint32_t)(0x119e8ac4)));
  /* 119b988b push eax */
  push32((uint32_t)(EAX));
  /* 119b988c call dword ptr [0x119e9398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9398))), 0x119b9892u);
L_119b9892:;
  /* 119b9892 mov esp, ebp */
  ESP = (EBP);
  /* 119b9894 pop ebp */
  EBP = (pop32());
  /* 119b9895 ret  */
  ESPCHK(0x119b9810u, _esp0);
  ESP += 4; return;
}

/* FUN_100098a0 @ 0x119b98a0 (227 bytes, 80 insns) */
void f_119b98a0(void) {
  FTRACE(0x119b98a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b98a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b98a1 mov ebp, esp */
  EBP = (ESP);
  /* 119b98a3 push ecx */
  push32((uint32_t)(ECX));
  /* 119b98a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b98a7 push eax */
  push32((uint32_t)(EAX));
  /* 119b98a8 call 0x119b9810 */
  push32(0x119b98adu); f_119b9810();
  /* 119b98ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b98b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b98b2 jne 0x119b98bb */
  if (!C.zf) goto L_119b98bb;
  /* 119b98b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b98b6 jmp 0x119b997f */
  goto L_119b997f;
L_119b98bb:;
  /* 119b98bb push 9 */
  push32((uint32_t)(0x9u));
  /* 119b98bd call 0x119bdb80 */
  push32(0x119b98c2u); f_119bdb80();
  /* 119b98c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b98c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b98c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b98cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119b98ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b98d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b98d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b98d9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b98dc je 0x119b9900 */
  if (C.zf) goto L_119b9900;
  /* 119b98de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b98e1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b98e5 je 0x119b9900 */
  if (C.zf) goto L_119b9900;
  /* 119b98e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b98ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b98ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b98f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b98f5 je 0x119b9900 */
  if (C.zf) goto L_119b9900;
  /* 119b98f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b98fa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b98fe jne 0x119b9973 */
  if (!C.zf) goto L_119b9973;
L_119b9900:;
  /* 119b9900 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b9902 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b9905 push edx */
  push32((uint32_t)(EDX));
  /* 119b9906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9909 push eax */
  push32((uint32_t)(EAX));
  /* 119b990a call 0x119b97c0 */
  push32(0x119b990fu); f_119b97c0();
  /* 119b990f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9914 je 0x119b9973 */
  if (C.zf) goto L_119b9973;
  /* 119b9916 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9919 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 119b991c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b991f jne 0x119b9973 */
  if (!C.zf) goto L_119b9973;
  /* 119b9921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9924 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 119b9927 cmp ecx, dword ptr [0x119e4ac0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e4ac0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b992d jg 0x119b9973 */
  if ((!C.zf&&C.sf==C.of)) goto L_119b9973;
  /* 119b992f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9933 je 0x119b9940 */
  if (C.zf) goto L_119b9940;
  /* 119b9935 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b9938 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b993b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 119b993e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119b9940:;
  /* 119b9940 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9944 je 0x119b9951 */
  if (C.zf) goto L_119b9951;
  /* 119b9946 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119b9949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b994c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119b994f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119b9951:;
  /* 119b9951 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9955 je 0x119b9962 */
  if (C.zf) goto L_119b9962;
  /* 119b9957 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119b995a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b995d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119b9960 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119b9962:;
  /* 119b9962 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b9964 call 0x119bdc20 */
  push32(0x119b9969u); f_119bdc20();
  /* 119b9969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b996c mov eax, 1 */
  EAX = (0x1u);
  /* 119b9971 jmp 0x119b997f */
  goto L_119b997f;
L_119b9973:;
  /* 119b9973 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b9975 call 0x119bdc20 */
  push32(0x119b997au); f_119bdc20();
  /* 119b997a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b997d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119b997f:;
  /* 119b997f mov esp, ebp */
  ESP = (EBP);
  /* 119b9981 pop ebp */
  EBP = (pop32());
  /* 119b9982 ret  */
  ESPCHK(0x119b98a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009990 @ 0x119b9990 (28 bytes, 11 insns) */
void f_119b9990(void) {
  FTRACE(0x119b9990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9990 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9991 mov ebp, esp */
  EBP = (ESP);
  /* 119b9993 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9994 mov eax, dword ptr [0x119e8ad0] */
  EAX = (r32((uint32_t)(0x119e8ad0)));
  /* 119b9999 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b999c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b999f mov dword ptr [0x119e8ad0], ecx */
  w32((uint32_t)(0x119e8ad0), (ECX));
  /* 119b99a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b99a8 mov esp, ebp */
  ESP = (EBP);
  /* 119b99aa pop ebp */
  EBP = (pop32());
  /* 119b99ab ret  */
  ESPCHK(0x119b9990u, _esp0);
  ESP += 4; return;
}

/* FUN_100099b0 @ 0x119b99b0 (362 bytes, 116 insns) */
void f_119b99b0(void) {
  FTRACE(0x119b99b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b99b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119b99b1 mov ebp, esp */
  EBP = (ESP);
  /* 119b99b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b99b6 push ebx */
  push32((uint32_t)(EBX));
  /* 119b99b7 push esi */
  push32((uint32_t)(ESI));
  /* 119b99b8 push edi */
  push32((uint32_t)(EDI));
  /* 119b99b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b99bd jne 0x119b99ea */
  if (!C.zf) goto L_119b99ea;
L_119b99bf:;
  /* 119b99bf push 0x119e1cdc */
  push32((uint32_t)(0x119e1cdcu));
  /* 119b99c4 push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b99c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b99cb push 0 */
  push32((uint32_t)(0x0u));
  /* 119b99cd push 0 */
  push32((uint32_t)(0x0u));
  /* 119b99cf push 0 */
  push32((uint32_t)(0x0u));
  /* 119b99d1 call 0x119b59b0 */
  push32(0x119b99d6u); f_119b59b0();
  /* 119b99d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b99d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b99dc jne 0x119b99df */
  if (!C.zf) goto L_119b99df;
  /* 119b99de int3  */
  x86_unimpl("int3 @ 0x119b99de");
L_119b99df:;
  /* 119b99df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b99e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b99e3 jne 0x119b99bf */
  if (!C.zf) goto L_119b99bf;
  /* 119b99e5 jmp 0x119b9b13 */
  goto L_119b9b13;
L_119b99ea:;
  /* 119b99ea push 9 */
  push32((uint32_t)(0x9u));
  /* 119b99ec call 0x119bdb80 */
  push32(0x119b99f1u); f_119bdb80();
  /* 119b99f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b99f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b99f7 mov edx, dword ptr [0x119e7158] */
  EDX = (r32((uint32_t)(0x119e7158)));
  /* 119b99fd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 119b99ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119b9a06 jmp 0x119b9a11 */
  goto L_119b9a11;
L_119b9a08:;
  /* 119b9a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9a0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9a0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119b9a11:;
  /* 119b9a11 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9a15 jge 0x119b9a35 */
  if ((C.sf==C.of)) goto L_119b9a35;
  /* 119b9a17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9a1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9a1d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 119b9a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9a28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9a2b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 119b9a33 jmp 0x119b9a08 */
  goto L_119b9a08;
L_119b9a35:;
  /* 119b9a35 mov edx, dword ptr [0x119e7158] */
  EDX = (r32((uint32_t)(0x119e7158)));
  /* 119b9a3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119b9a3e jmp 0x119b9a48 */
  goto L_119b9a48;
L_119b9a40:;
  /* 119b9a40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9a43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119b9a45 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119b9a48:;
  /* 119b9a48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9a4c je 0x119b9af1 */
  if (C.zf) goto L_119b9af1;
  /* 119b9a52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9a55 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b9a58 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b9a5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9a5f jl 0x119b9ac7 */
  if ((C.sf!=C.of)) goto L_119b9ac7;
  /* 119b9a61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9a64 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 119b9a67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b9a6d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9a70 jge 0x119b9ac7 */
  if ((C.sf==C.of)) goto L_119b9ac7;
  /* 119b9a72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9a75 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119b9a78 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b9a7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9a81 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 119b9a85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9a88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9a8b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 119b9a8e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b9a94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9a97 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 119b9a9b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9a9e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b9aa1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b9aa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9aa9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 119b9aad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9ab0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9ab3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9ab6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 119b9ab9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b9abe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9ac1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 119b9ac5 jmp 0x119b9aec */
  goto L_119b9aec;
L_119b9ac7:;
  /* 119b9ac7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9aca push edx */
  push32((uint32_t)(EDX));
  /* 119b9acb push 0x119e1cb8 */
  push32((uint32_t)(0x119e1cb8u));
  /* 119b9ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9ad8 call 0x119b59b0 */
  push32(0x119b9addu); f_119b59b0();
  /* 119b9add add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9ae0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9ae3 jne 0x119b9ae6 */
  if (!C.zf) goto L_119b9ae6;
  /* 119b9ae5 int3  */
  x86_unimpl("int3 @ 0x119b9ae5");
L_119b9ae6:;
  /* 119b9ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b9ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9aea jne 0x119b9ac7 */
  if (!C.zf) goto L_119b9ac7;
L_119b9aec:;
  /* 119b9aec jmp 0x119b9a40 */
  goto L_119b9a40;
L_119b9af1:;
  /* 119b9af1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9af4 mov edx, dword ptr [0x119e7160] */
  EDX = (r32((uint32_t)(0x119e7160)));
  /* 119b9afa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 119b9afd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9b00 mov ecx, dword ptr [0x119e7154] */
  ECX = (r32((uint32_t)(0x119e7154)));
  /* 119b9b06 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 119b9b09 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b9b0b call 0x119bdc20 */
  push32(0x119b9b10u); f_119bdc20();
  /* 119b9b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b9b13:;
  /* 119b9b13 pop edi */
  EDI = (pop32());
  /* 119b9b14 pop esi */
  ESI = (pop32());
  /* 119b9b15 pop ebx */
  EBX = (pop32());
  /* 119b9b16 mov esp, ebp */
  ESP = (EBP);
  /* 119b9b18 pop ebp */
  EBP = (pop32());
  /* 119b9b19 ret  */
  ESPCHK(0x119b99b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b20 @ 0x119b9b20 (291 bytes, 95 insns) */
void f_119b9b20(void) {
  FTRACE(0x119b9b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9b20 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9b21 mov ebp, esp */
  EBP = (ESP);
  /* 119b9b23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9b26 push ebx */
  push32((uint32_t)(EBX));
  /* 119b9b27 push esi */
  push32((uint32_t)(ESI));
  /* 119b9b28 push edi */
  push32((uint32_t)(EDI));
  /* 119b9b29 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119b9b30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9b34 je 0x119b9b42 */
  if (C.zf) goto L_119b9b42;
  /* 119b9b36 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9b3a je 0x119b9b42 */
  if (C.zf) goto L_119b9b42;
  /* 119b9b3c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9b40 jne 0x119b9b70 */
  if (!C.zf) goto L_119b9b70;
L_119b9b42:;
  /* 119b9b42 push 0x119e1d04 */
  push32((uint32_t)(0x119e1d04u));
  /* 119b9b47 push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b9b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9b54 call 0x119b59b0 */
  push32(0x119b9b59u); f_119b59b0();
  /* 119b9b59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9b5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9b5f jne 0x119b9b62 */
  if (!C.zf) goto L_119b9b62;
  /* 119b9b61 int3  */
  x86_unimpl("int3 @ 0x119b9b61");
L_119b9b62:;
  /* 119b9b62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b9b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9b66 jne 0x119b9b42 */
  if (!C.zf) goto L_119b9b42;
  /* 119b9b68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119b9b6b jmp 0x119b9c3c */
  goto L_119b9c3c;
L_119b9b70:;
  /* 119b9b70 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119b9b77 jmp 0x119b9b82 */
  goto L_119b9b82;
L_119b9b79:;
  /* 119b9b79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9b7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9b7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119b9b82:;
  /* 119b9b82 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9b86 jge 0x119b9c0c */
  if ((C.sf==C.of)) goto L_119b9c0c;
  /* 119b9b8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9b8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b9b92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9b95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119b9b98 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 119b9b9c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9ba0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9ba3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9ba6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 119b9baa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9bad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b9bb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9bb3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119b9bb6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 119b9bba sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9bbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9bc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9bc4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 119b9bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9bcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9bce cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9bd3 jne 0x119b9be2 */
  if (!C.zf) goto L_119b9be2;
  /* 119b9bd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9bd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9bdb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9be0 je 0x119b9c07 */
  if (C.zf) goto L_119b9c07;
L_119b9be2:;
  /* 119b9be2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9be6 je 0x119b9c07 */
  if (C.zf) goto L_119b9c07;
  /* 119b9be8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9bec jne 0x119b9c00 */
  if (!C.zf) goto L_119b9c00;
  /* 119b9bee cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9bf2 jne 0x119b9c07 */
  if (!C.zf) goto L_119b9c07;
  /* 119b9bf4 mov eax, dword ptr [0x119e4abc] */
  EAX = (r32((uint32_t)(0x119e4abc)));
  /* 119b9bf9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 119b9bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9bfe je 0x119b9c07 */
  if (C.zf) goto L_119b9c07;
L_119b9c00:;
  /* 119b9c00 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_119b9c07:;
  /* 119b9c07 jmp 0x119b9b79 */
  goto L_119b9b79;
L_119b9c0c:;
  /* 119b9c0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b9c0f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b9c12 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 119b9c15 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9c18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9c1b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 119b9c1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119b9c21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119b9c24 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 119b9c27 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9c2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9c2d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 119b9c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9c33 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119b9c39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_119b9c3c:;
  /* 119b9c3c pop edi */
  EDI = (pop32());
  /* 119b9c3d pop esi */
  ESI = (pop32());
  /* 119b9c3e pop ebx */
  EBX = (pop32());
  /* 119b9c3f mov esp, ebp */
  ESP = (EBP);
  /* 119b9c41 pop ebp */
  EBP = (pop32());
  /* 119b9c42 ret  */
  ESPCHK(0x119b9b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c50 @ 0x119b9c50 (697 bytes, 253 insns) */
void f_119b9c50(void) {
  FTRACE(0x119b9c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9c50 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9c51 mov ebp, esp */
  EBP = (ESP);
  /* 119b9c53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9c56 push ebx */
  push32((uint32_t)(EBX));
  /* 119b9c57 push esi */
  push32((uint32_t)(ESI));
  /* 119b9c58 push edi */
  push32((uint32_t)(EDI));
  /* 119b9c59 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119b9c60 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b9c62 call 0x119bdb80 */
  push32(0x119b9c67u); f_119bdb80();
  /* 119b9c67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b9c6a:;
  /* 119b9c6a push 0x119e1dfc */
  push32((uint32_t)(0x119e1dfcu));
  /* 119b9c6f push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b9c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9c7c call 0x119b59b0 */
  push32(0x119b9c81u); f_119b59b0();
  /* 119b9c81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9c84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9c87 jne 0x119b9c8a */
  if (!C.zf) goto L_119b9c8a;
  /* 119b9c89 int3  */
  x86_unimpl("int3 @ 0x119b9c89");
L_119b9c8a:;
  /* 119b9c8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b9c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9c8e jne 0x119b9c6a */
  if (!C.zf) goto L_119b9c6a;
  /* 119b9c90 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9c94 je 0x119b9c9e */
  if (C.zf) goto L_119b9c9e;
  /* 119b9c96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9c99 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119b9c9b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119b9c9e:;
  /* 119b9c9e mov eax, dword ptr [0x119e7158] */
  EAX = (r32((uint32_t)(0x119e7158)));
  /* 119b9ca3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119b9ca6 jmp 0x119b9cb0 */
  goto L_119b9cb0;
L_119b9ca8:;
  /* 119b9ca8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9cab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119b9cad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119b9cb0:;
  /* 119b9cb0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9cb4 je 0x119b9ed2 */
  if (C.zf) goto L_119b9ed2;
  /* 119b9cba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9cbd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9cc0 je 0x119b9ed2 */
  if (C.zf) goto L_119b9ed2;
  /* 119b9cc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9cc9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 119b9ccc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b9cd2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9cd5 je 0x119b9d04 */
  if (C.zf) goto L_119b9d04;
  /* 119b9cd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9cda mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119b9cdd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b9ce3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b9ce5 je 0x119b9d04 */
  if (C.zf) goto L_119b9d04;
  /* 119b9ce7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9cea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b9ced and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b9cf2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9cf5 jne 0x119b9d09 */
  if (!C.zf) goto L_119b9d09;
  /* 119b9cf7 mov ecx, dword ptr [0x119e4abc] */
  ECX = (r32((uint32_t)(0x119e4abc)));
  /* 119b9cfd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 119b9d00 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b9d02 jne 0x119b9d09 */
  if (!C.zf) goto L_119b9d09;
L_119b9d04:;
  /* 119b9d04 jmp 0x119b9ecd */
  goto L_119b9ecd;
L_119b9d09:;
  /* 119b9d09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9d0c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9d10 je 0x119b9d82 */
  if (C.zf) goto L_119b9d82;
  /* 119b9d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d14 push 1 */
  push32((uint32_t)(0x1u));
  /* 119b9d16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9d19 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119b9d1c push ecx */
  push32((uint32_t)(ECX));
  /* 119b9d1d call 0x119b97c0 */
  push32(0x119b9d22u); f_119b97c0();
  /* 119b9d22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9d27 jne 0x119b9d53 */
  if (!C.zf) goto L_119b9d53;
L_119b9d29:;
  /* 119b9d29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9d2c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119b9d2f push eax */
  push32((uint32_t)(EAX));
  /* 119b9d30 push 0x119e1de8 */
  push32((uint32_t)(0x119e1de8u));
  /* 119b9d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d3d call 0x119b59b0 */
  push32(0x119b9d42u); f_119b59b0();
  /* 119b9d42 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9d45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9d48 jne 0x119b9d4b */
  if (!C.zf) goto L_119b9d4b;
  /* 119b9d4a int3  */
  x86_unimpl("int3 @ 0x119b9d4a");
L_119b9d4b:;
  /* 119b9d4b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b9d4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b9d4f jne 0x119b9d29 */
  if (!C.zf) goto L_119b9d29;
  /* 119b9d51 jmp 0x119b9d82 */
  goto L_119b9d82;
L_119b9d53:;
  /* 119b9d53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9d56 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119b9d59 push eax */
  push32((uint32_t)(EAX));
  /* 119b9d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9d5d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119b9d60 push edx */
  push32((uint32_t)(EDX));
  /* 119b9d61 push 0x119e1ddc */
  push32((uint32_t)(0x119e1ddcu));
  /* 119b9d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d6e call 0x119b59b0 */
  push32(0x119b9d73u); f_119b59b0();
  /* 119b9d73 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9d76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9d79 jne 0x119b9d7c */
  if (!C.zf) goto L_119b9d7c;
  /* 119b9d7b int3  */
  x86_unimpl("int3 @ 0x119b9d7b");
L_119b9d7c:;
  /* 119b9d7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b9d7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9d80 jne 0x119b9d53 */
  if (!C.zf) goto L_119b9d53;
L_119b9d82:;
  /* 119b9d82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9d85 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 119b9d88 push edx */
  push32((uint32_t)(EDX));
  /* 119b9d89 push 0x119e1dd4 */
  push32((uint32_t)(0x119e1dd4u));
  /* 119b9d8e push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d90 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9d96 call 0x119b59b0 */
  push32(0x119b9d9bu); f_119b59b0();
  /* 119b9d9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9d9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9da1 jne 0x119b9da4 */
  if (!C.zf) goto L_119b9da4;
  /* 119b9da3 int3  */
  x86_unimpl("int3 @ 0x119b9da3");
L_119b9da4:;
  /* 119b9da4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119b9da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119b9da8 jne 0x119b9d82 */
  if (!C.zf) goto L_119b9d82;
  /* 119b9daa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9dad mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 119b9db0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b9db6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9db9 jne 0x119b9e2c */
  if (!C.zf) goto L_119b9e2c;
L_119b9dbb:;
  /* 119b9dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9dbe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119b9dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9dc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9dc5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b9dc8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119b9dcb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b9dd0 push eax */
  push32((uint32_t)(EAX));
  /* 119b9dd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9dd4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9dd8 push 0x119e1da0 */
  push32((uint32_t)(0x119e1da0u));
  /* 119b9ddd push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9de5 call 0x119b59b0 */
  push32(0x119b9deau); f_119b59b0();
  /* 119b9dea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9ded cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9df0 jne 0x119b9df3 */
  if (!C.zf) goto L_119b9df3;
  /* 119b9df2 int3  */
  x86_unimpl("int3 @ 0x119b9df2");
L_119b9df3:;
  /* 119b9df3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b9df5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b9df7 jne 0x119b9dbb */
  if (!C.zf) goto L_119b9dbb;
  /* 119b9df9 cmp dword ptr [0x119e8ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9e00 je 0x119b9e1b */
  if (C.zf) goto L_119b9e1b;
  /* 119b9e02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e05 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119b9e08 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9e09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e0c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9e0f push edx */
  push32((uint32_t)(EDX));
  /* 119b9e10 call dword ptr [0x119e8ad0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e8ad0))), 0x119b9e16u);
  /* 119b9e16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9e19 jmp 0x119b9e27 */
  goto L_119b9e27;
L_119b9e1b:;
  /* 119b9e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e1e push eax */
  push32((uint32_t)(EAX));
  /* 119b9e1f call 0x119b9f10 */
  push32(0x119b9e24u); f_119b9f10();
  /* 119b9e24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b9e27:;
  /* 119b9e27 jmp 0x119b9ecd */
  goto L_119b9ecd;
L_119b9e2c:;
  /* 119b9e2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e2f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9e33 jne 0x119b9e72 */
  if (!C.zf) goto L_119b9e72;
L_119b9e35:;
  /* 119b9e35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e38 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119b9e3b push eax */
  push32((uint32_t)(EAX));
  /* 119b9e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e3f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9e42 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9e43 push 0x119e1d78 */
  push32((uint32_t)(0x119e1d78u));
  /* 119b9e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9e4a push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9e4c push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9e50 call 0x119b59b0 */
  push32(0x119b9e55u); f_119b59b0();
  /* 119b9e55 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9e58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9e5b jne 0x119b9e5e */
  if (!C.zf) goto L_119b9e5e;
  /* 119b9e5d int3  */
  x86_unimpl("int3 @ 0x119b9e5d");
L_119b9e5e:;
  /* 119b9e5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b9e60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b9e62 jne 0x119b9e35 */
  if (!C.zf) goto L_119b9e35;
  /* 119b9e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e67 push eax */
  push32((uint32_t)(EAX));
  /* 119b9e68 call 0x119b9f10 */
  push32(0x119b9e6du); f_119b9f10();
  /* 119b9e6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9e70 jmp 0x119b9ecd */
  goto L_119b9ecd;
L_119b9e72:;
  /* 119b9e72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e75 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 119b9e78 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b9e7e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9e81 jne 0x119b9ecd */
  if (!C.zf) goto L_119b9ecd;
L_119b9e83:;
  /* 119b9e83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e86 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119b9e89 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9e8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119b9e90 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119b9e93 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119b9e98 push eax */
  push32((uint32_t)(EAX));
  /* 119b9e99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9e9c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9e9f push ecx */
  push32((uint32_t)(ECX));
  /* 119b9ea0 push 0x119e1d44 */
  push32((uint32_t)(0x119e1d44u));
  /* 119b9ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9eab push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9ead call 0x119b59b0 */
  push32(0x119b9eb2u); f_119b59b0();
  /* 119b9eb2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9eb5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9eb8 jne 0x119b9ebb */
  if (!C.zf) goto L_119b9ebb;
  /* 119b9eba int3  */
  x86_unimpl("int3 @ 0x119b9eba");
L_119b9ebb:;
  /* 119b9ebb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119b9ebd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119b9ebf jne 0x119b9e83 */
  if (!C.zf) goto L_119b9e83;
  /* 119b9ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119b9ec4 push eax */
  push32((uint32_t)(EAX));
  /* 119b9ec5 call 0x119b9f10 */
  push32(0x119b9ecau); f_119b9f10();
  /* 119b9eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b9ecd:;
  /* 119b9ecd jmp 0x119b9ca8 */
  goto L_119b9ca8;
L_119b9ed2:;
  /* 119b9ed2 push 9 */
  push32((uint32_t)(0x9u));
  /* 119b9ed4 call 0x119bdc20 */
  push32(0x119b9ed9u); f_119bdc20();
  /* 119b9ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119b9edc:;
  /* 119b9edc push 0x119e1d2c */
  push32((uint32_t)(0x119e1d2cu));
  /* 119b9ee1 push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119b9ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9eea push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9eec push 0 */
  push32((uint32_t)(0x0u));
  /* 119b9eee call 0x119b59b0 */
  push32(0x119b9ef3u); f_119b59b0();
  /* 119b9ef3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9ef6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9ef9 jne 0x119b9efc */
  if (!C.zf) goto L_119b9efc;
  /* 119b9efb int3  */
  x86_unimpl("int3 @ 0x119b9efb");
L_119b9efc:;
  /* 119b9efc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b9efe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119b9f00 jne 0x119b9edc */
  if (!C.zf) goto L_119b9edc;
  /* 119b9f02 pop edi */
  EDI = (pop32());
  /* 119b9f03 pop esi */
  ESI = (pop32());
  /* 119b9f04 pop ebx */
  EBX = (pop32());
  /* 119b9f05 mov esp, ebp */
  ESP = (EBP);
  /* 119b9f07 pop ebp */
  EBP = (pop32());
  /* 119b9f08 ret  */
  ESPCHK(0x119b9c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f10 @ 0x119b9f10 (276 bytes, 89 insns) */
void f_119b9f10(void) {
  FTRACE(0x119b9f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119b9f10 push ebp */
  push32((uint32_t)(EBP));
  /* 119b9f11 mov ebp, esp */
  EBP = (ESP);
  /* 119b9f13 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119b9f16 push ebx */
  push32((uint32_t)(EBX));
  /* 119b9f17 push esi */
  push32((uint32_t)(ESI));
  /* 119b9f18 push edi */
  push32((uint32_t)(EDI));
  /* 119b9f19 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 119b9f20 jmp 0x119b9f2b */
  goto L_119b9f2b;
L_119b9f22:;
  /* 119b9f22 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 119b9f25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9f28 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_119b9f2b:;
  /* 119b9f2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9f2e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9f32 jge 0x119b9f3f */
  if ((C.sf==C.of)) goto L_119b9f3f;
  /* 119b9f34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9f37 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119b9f3a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 119b9f3d jmp 0x119b9f46 */
  goto L_119b9f46;
L_119b9f3f:;
  /* 119b9f3f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_119b9f46:;
  /* 119b9f46 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 119b9f49 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9f4c jge 0x119b9fec */
  if ((C.sf==C.of)) goto L_119b9fec;
  /* 119b9f52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119b9f55 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9f58 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 119b9f5b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 119b9f5e cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9f65 jle 0x119b9f83 */
  if ((C.zf||C.sf!=C.of)) goto L_119b9f83;
  /* 119b9f67 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 119b9f6c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b9f6f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119b9f75 push ecx */
  push32((uint32_t)(ECX));
  /* 119b9f76 call 0x119bc980 */
  push32(0x119b9f7bu); f_119bc980();
  /* 119b9f7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9f7e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 119b9f81 jmp 0x119b9fa0 */
  goto L_119b9fa0;
L_119b9f83:;
  /* 119b9f83 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b9f86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b9f8c mov eax, dword ptr [0x119e4e00] */
  EAX = (r32((uint32_t)(0x119e4e00)));
  /* 119b9f91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119b9f93 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 119b9f97 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 119b9f9d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_119b9fa0:;
  /* 119b9fa0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119b9fa4 je 0x119b9fb4 */
  if (C.zf) goto L_119b9fb4;
  /* 119b9fa6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b9fa9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b9faf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 119b9fb2 jmp 0x119b9fbb */
  goto L_119b9fbb;
L_119b9fb4:;
  /* 119b9fb4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_119b9fbb:;
  /* 119b9fbb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 119b9fbe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 119b9fc1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 119b9fc5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119b9fc8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119b9fce push edx */
  push32((uint32_t)(EDX));
  /* 119b9fcf push 0x119e1e20 */
  push32((uint32_t)(0x119e1e20u));
  /* 119b9fd4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 119b9fd7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119b9fda lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 119b9fde push ecx */
  push32((uint32_t)(ECX));
  /* 119b9fdf call 0x119b5440 */
  push32(0x119b9fe4u); f_119b5440();
  /* 119b9fe4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119b9fe7 jmp 0x119b9f22 */
  goto L_119b9f22;
L_119b9fec:;
  /* 119b9fec mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 119b9fef mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_119b9ff4:;
  /* 119b9ff4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 119b9ff7 push eax */
  push32((uint32_t)(EAX));
  /* 119b9ff8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 119b9ffb push ecx */
  push32((uint32_t)(ECX));
  /* 119b9ffc push 0x119e1e10 */
  push32((uint32_t)(0x119e1e10u));
  /* 119ba001 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba003 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba005 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba007 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba009 call 0x119b59b0 */
  push32(0x119ba00eu); f_119b59b0();
  /* 119ba00e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba011 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba014 jne 0x119ba017 */
  if (!C.zf) goto L_119ba017;
  /* 119ba016 int3  */
  x86_unimpl("int3 @ 0x119ba016");
L_119ba017:;
  /* 119ba017 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119ba019 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119ba01b jne 0x119b9ff4 */
  if (!C.zf) goto L_119b9ff4;
  /* 119ba01d pop edi */
  EDI = (pop32());
  /* 119ba01e pop esi */
  ESI = (pop32());
  /* 119ba01f pop ebx */
  EBX = (pop32());
  /* 119ba020 mov esp, ebp */
  ESP = (EBP);
  /* 119ba022 pop ebp */
  EBP = (pop32());
  /* 119ba023 ret  */
  ESPCHK(0x119b9f10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a030 @ 0x119ba030 (116 bytes, 46 insns) */
void f_119ba030(void) {
  FTRACE(0x119ba030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119ba030 push ebp */
  push32((uint32_t)(EBP));
  /* 119ba031 mov ebp, esp */
  EBP = (ESP);
  /* 119ba033 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119ba036 push ebx */
  push32((uint32_t)(EBX));
  /* 119ba037 push esi */
  push32((uint32_t)(ESI));
  /* 119ba038 push edi */
  push32((uint32_t)(EDI));
  /* 119ba039 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 119ba03c push eax */
  push32((uint32_t)(EAX));
  /* 119ba03d call 0x119b99b0 */
  push32(0x119ba042u); f_119b99b0();
  /* 119ba042 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba045 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba049 jne 0x119ba064 */
  if (!C.zf) goto L_119ba064;
  /* 119ba04b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba04f jne 0x119ba064 */
  if (!C.zf) goto L_119ba064;
  /* 119ba051 mov ecx, dword ptr [0x119e4abc] */
  ECX = (r32((uint32_t)(0x119e4abc)));
  /* 119ba057 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 119ba05a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119ba05c je 0x119ba09b */
  if (C.zf) goto L_119ba09b;
  /* 119ba05e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba062 je 0x119ba09b */
  if (C.zf) goto L_119ba09b;
L_119ba064:;
  /* 119ba064 push 0x119e1e28 */
  push32((uint32_t)(0x119e1e28u));
  /* 119ba069 push 0x119e17f4 */
  push32((uint32_t)(0x119e17f4u));
  /* 119ba06e push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba070 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba072 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba074 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba076 call 0x119b59b0 */
  push32(0x119ba07bu); f_119b59b0();
  /* 119ba07b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba07e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba081 jne 0x119ba084 */
  if (!C.zf) goto L_119ba084;
  /* 119ba083 int3  */
  x86_unimpl("int3 @ 0x119ba083");
L_119ba084:;
  /* 119ba084 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119ba086 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119ba088 jne 0x119ba064 */
  if (!C.zf) goto L_119ba064;
  /* 119ba08a push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba08c call 0x119b9c50 */
  push32(0x119ba091u); f_119b9c50();
  /* 119ba091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba094 mov eax, 1 */
  EAX = (0x1u);
  /* 119ba099 jmp 0x119ba09d */
  goto L_119ba09d;
L_119ba09b:;
  /* 119ba09b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119ba09d:;
  /* 119ba09d pop edi */
  EDI = (pop32());
  /* 119ba09e pop esi */
  ESI = (pop32());
  /* 119ba09f pop ebx */
  EBX = (pop32());
  /* 119ba0a0 mov esp, ebp */
  ESP = (EBP);
  /* 119ba0a2 pop ebp */
  EBP = (pop32());
  /* 119ba0a3 ret  */
  ESPCHK(0x119ba030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b0 @ 0x119ba0b0 (197 bytes, 79 insns) */
void f_119ba0b0(void) {
  FTRACE(0x119ba0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119ba0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119ba0b1 mov ebp, esp */
  EBP = (ESP);
  /* 119ba0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 119ba0b4 push ebx */
  push32((uint32_t)(EBX));
  /* 119ba0b5 push esi */
  push32((uint32_t)(ESI));
  /* 119ba0b6 push edi */
  push32((uint32_t)(EDI));
  /* 119ba0b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba0bb jne 0x119ba0c2 */
  if (!C.zf) goto L_119ba0c2;
  /* 119ba0bd jmp 0x119ba16e */
  goto L_119ba16e;
L_119ba0c2:;
  /* 119ba0c2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119ba0c9 jmp 0x119ba0d4 */
  goto L_119ba0d4;
L_119ba0cb:;
  /* 119ba0cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba0ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba0d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119ba0d4:;
  /* 119ba0d4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba0d8 jge 0x119ba11e */
  if ((C.sf==C.of)) goto L_119ba11e;
L_119ba0da:;
  /* 119ba0da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba0dd mov edx, dword ptr [ecx*4 + 0x119e4acc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e4acc)));
  /* 119ba0e4 push edx */
  push32((uint32_t)(EDX));
  /* 119ba0e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba0e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119ba0eb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 119ba0ef push edx */
  push32((uint32_t)(EDX));
  /* 119ba0f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba0f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119ba0f6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 119ba0fa push edx */
  push32((uint32_t)(EDX));
  /* 119ba0fb push 0x119e1e84 */
  push32((uint32_t)(0x119e1e84u));
  /* 119ba100 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba102 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba104 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba106 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba108 call 0x119b59b0 */
  push32(0x119ba10du); f_119b59b0();
  /* 119ba10d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba110 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba113 jne 0x119ba116 */
  if (!C.zf) goto L_119ba116;
  /* 119ba115 int3  */
  x86_unimpl("int3 @ 0x119ba115");
L_119ba116:;
  /* 119ba116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119ba11a jne 0x119ba0da */
  if (!C.zf) goto L_119ba0da;
  /* 119ba11c jmp 0x119ba0cb */
  goto L_119ba0cb;
L_119ba11e:;
  /* 119ba11e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119ba121 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 119ba124 push edx */
  push32((uint32_t)(EDX));
  /* 119ba125 push 0x119e1e60 */
  push32((uint32_t)(0x119e1e60u));
  /* 119ba12a push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba12c push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba12e push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba130 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba132 call 0x119b59b0 */
  push32(0x119ba137u); f_119b59b0();
  /* 119ba137 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba13a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba13d jne 0x119ba140 */
  if (!C.zf) goto L_119ba140;
  /* 119ba13f int3  */
  x86_unimpl("int3 @ 0x119ba13f");
L_119ba140:;
  /* 119ba140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119ba144 jne 0x119ba11e */
  if (!C.zf) goto L_119ba11e;
L_119ba146:;
  /* 119ba146 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119ba149 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 119ba14c push edx */
  push32((uint32_t)(EDX));
  /* 119ba14d push 0x119e1e40 */
  push32((uint32_t)(0x119e1e40u));
  /* 119ba152 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba154 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba156 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba158 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba15a call 0x119b59b0 */
  push32(0x119ba15fu); f_119b59b0();
  /* 119ba15f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba162 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba165 jne 0x119ba168 */
  if (!C.zf) goto L_119ba168;
  /* 119ba167 int3  */
  x86_unimpl("int3 @ 0x119ba167");
L_119ba168:;
  /* 119ba168 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba16a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119ba16c jne 0x119ba146 */
  if (!C.zf) goto L_119ba146;
L_119ba16e:;
  /* 119ba16e pop edi */
  EDI = (pop32());
  /* 119ba16f pop esi */
  ESI = (pop32());
  /* 119ba170 pop ebx */
  EBX = (pop32());
  /* 119ba171 mov esp, ebp */
  ESP = (EBP);
  /* 119ba173 pop ebp */
  EBP = (pop32());
  /* 119ba174 ret  */
  ESPCHK(0x119ba0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a180 @ 0x119ba180 (329 bytes, 102 insns) */
void f_119ba180(void) {
  FTRACE(0x119ba180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119ba180 push ebp */
  push32((uint32_t)(EBP));
  /* 119ba181 mov ebp, esp */
  EBP = (ESP);
  /* 119ba183 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119ba186 cmp dword ptr [0x119e8c30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba18d jne 0x119ba194 */
  if (!C.zf) goto L_119ba194;
  /* 119ba18f call 0x119c0810 */
  push32(0x119ba194u); f_119c0810();
L_119ba194:;
  /* 119ba194 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119ba19b mov eax, dword ptr [0x119e70f4] */
  EAX = (r32((uint32_t)(0x119e70f4)));
  /* 119ba1a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119ba1a3:;
  /* 119ba1a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba1a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119ba1a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119ba1ab je 0x119ba1d9 */
  if (C.zf) goto L_119ba1d9;
  /* 119ba1ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba1b0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119ba1b3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba1b6 je 0x119ba1c1 */
  if (C.zf) goto L_119ba1c1;
  /* 119ba1b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119ba1bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba1be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119ba1c1:;
  /* 119ba1c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba1c4 push eax */
  push32((uint32_t)(EAX));
  /* 119ba1c5 call 0x119bb040 */
  push32(0x119ba1cau); f_119bb040();
  /* 119ba1ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba1cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba1d0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 119ba1d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119ba1d7 jmp 0x119ba1a3 */
  goto L_119ba1a3;
L_119ba1d9:;
  /* 119ba1d9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 119ba1db push 0x119e1ea4 */
  push32((uint32_t)(0x119e1ea4u));
  /* 119ba1e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119ba1e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119ba1e5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 119ba1ec push ecx */
  push32((uint32_t)(ECX));
  /* 119ba1ed call 0x119b8210 */
  push32(0x119ba1f2u); f_119b8210();
  /* 119ba1f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba1f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119ba1f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba1fb mov dword ptr [0x119e7128], edx */
  w32((uint32_t)(0x119e7128), (EDX));
  /* 119ba201 cmp dword ptr [0x119e7128], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7128))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba208 jne 0x119ba214 */
  if (!C.zf) goto L_119ba214;
  /* 119ba20a push 9 */
  push32((uint32_t)(0x9u));
  /* 119ba20c call 0x119b5860 */
  push32(0x119ba211u); f_119b5860();
  /* 119ba211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119ba214:;
  /* 119ba214 mov eax, dword ptr [0x119e70f4] */
  EAX = (r32((uint32_t)(0x119e70f4)));
  /* 119ba219 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119ba21c jmp 0x119ba227 */
  goto L_119ba227;
L_119ba21e:;
  /* 119ba21e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba221 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba224 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119ba227:;
  /* 119ba227 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba22a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119ba22d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119ba22f je 0x119ba297 */
  if (C.zf) goto L_119ba297;
  /* 119ba231 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba234 push ecx */
  push32((uint32_t)(ECX));
  /* 119ba235 call 0x119bb040 */
  push32(0x119ba23au); f_119bb040();
  /* 119ba23a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba23d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba240 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119ba243 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba246 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119ba249 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba24c je 0x119ba295 */
  if (C.zf) goto L_119ba295;
  /* 119ba24e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 119ba250 push 0x119e1ea4 */
  push32((uint32_t)(0x119e1ea4u));
  /* 119ba255 push 2 */
  push32((uint32_t)(0x2u));
  /* 119ba257 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba25a push ecx */
  push32((uint32_t)(ECX));
  /* 119ba25b call 0x119b8210 */
  push32(0x119ba260u); f_119b8210();
  /* 119ba260 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba263 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba266 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119ba268 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba26b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba26e jne 0x119ba27a */
  if (!C.zf) goto L_119ba27a;
  /* 119ba270 push 9 */
  push32((uint32_t)(0x9u));
  /* 119ba272 call 0x119b5860 */
  push32(0x119ba277u); f_119b5860();
  /* 119ba277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119ba27a:;
  /* 119ba27a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba27d push ecx */
  push32((uint32_t)(ECX));
  /* 119ba27e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba281 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119ba283 push eax */
  push32((uint32_t)(EAX));
  /* 119ba284 call 0x119bb1c0 */
  push32(0x119ba289u); f_119bb1c0();
  /* 119ba289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba28c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba28f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba292 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_119ba295:;
  /* 119ba295 jmp 0x119ba21e */
  goto L_119ba21e;
L_119ba297:;
  /* 119ba297 push 2 */
  push32((uint32_t)(0x2u));
  /* 119ba299 mov edx, dword ptr [0x119e70f4] */
  EDX = (r32((uint32_t)(0x119e70f4)));
  /* 119ba29f push edx */
  push32((uint32_t)(EDX));
  /* 119ba2a0 call 0x119b8ca0 */
  push32(0x119ba2a5u); f_119b8ca0();
  /* 119ba2a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba2a8 mov dword ptr [0x119e70f4], 0 */
  w32((uint32_t)(0x119e70f4), (0x0u));
  /* 119ba2b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba2b5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119ba2bb mov dword ptr [0x119e8c20], 1 */
  w32((uint32_t)(0x119e8c20), (0x1u));
  /* 119ba2c5 mov esp, ebp */
  ESP = (EBP);
  /* 119ba2c7 pop ebp */
  EBP = (pop32());
  /* 119ba2c8 ret  */
  ESPCHK(0x119ba180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2d0 @ 0x119ba2d0 (216 bytes, 69 insns) */
void f_119ba2d0(void) {
  FTRACE(0x119ba2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119ba2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119ba2d1 mov ebp, esp */
  EBP = (ESP);
  /* 119ba2d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119ba2d6 cmp dword ptr [0x119e8c30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba2dd jne 0x119ba2e4 */
  if (!C.zf) goto L_119ba2e4;
  /* 119ba2df call 0x119c0810 */
  push32(0x119ba2e4u); f_119c0810();
L_119ba2e4:;
  /* 119ba2e4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 119ba2e9 push 0x119e7164 */
  push32((uint32_t)(0x119e7164u));
  /* 119ba2ee push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba2f0 call dword ptr [0x119e92e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92e8))), 0x119ba2f6u);
  /* 119ba2f6 mov dword ptr [0x119e7138], 0x119e7164 */
  w32((uint32_t)(0x119e7138), (0x119e7164u));
  /* 119ba300 mov eax, dword ptr [0x119e8c48] */
  EAX = (r32((uint32_t)(0x119e8c48)));
  /* 119ba305 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119ba308 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119ba30a jne 0x119ba317 */
  if (!C.zf) goto L_119ba317;
  /* 119ba30c mov edx, dword ptr [0x119e7138] */
  EDX = (r32((uint32_t)(0x119e7138)));
  /* 119ba312 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119ba315 jmp 0x119ba31f */
  goto L_119ba31f;
L_119ba317:;
  /* 119ba317 mov eax, dword ptr [0x119e8c48] */
  EAX = (r32((uint32_t)(0x119e8c48)));
  /* 119ba31c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_119ba31f:;
  /* 119ba31f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119ba322 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119ba325 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 119ba328 push edx */
  push32((uint32_t)(EDX));
  /* 119ba329 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 119ba32c push eax */
  push32((uint32_t)(EAX));
  /* 119ba32d push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba32f push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba331 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba334 push ecx */
  push32((uint32_t)(ECX));
  /* 119ba335 call 0x119ba3b0 */
  push32(0x119ba33au); f_119ba3b0();
  /* 119ba33a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba33d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 119ba342 push 0x119e1eb0 */
  push32((uint32_t)(0x119e1eb0u));
  /* 119ba347 push 2 */
  push32((uint32_t)(0x2u));
  /* 119ba349 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba34c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba34f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 119ba352 push ecx */
  push32((uint32_t)(ECX));
  /* 119ba353 call 0x119b8210 */
  push32(0x119ba358u); f_119b8210();
  /* 119ba358 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba35b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119ba35e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba362 jne 0x119ba36e */
  if (!C.zf) goto L_119ba36e;
  /* 119ba364 push 8 */
  push32((uint32_t)(0x8u));
  /* 119ba366 call 0x119b5860 */
  push32(0x119ba36bu); f_119b5860();
  /* 119ba36b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119ba36e:;
  /* 119ba36e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 119ba371 push edx */
  push32((uint32_t)(EDX));
  /* 119ba372 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 119ba375 push eax */
  push32((uint32_t)(EAX));
  /* 119ba376 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba379 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119ba37c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 119ba37f push eax */
  push32((uint32_t)(EAX));
  /* 119ba380 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119ba383 push ecx */
  push32((uint32_t)(ECX));
  /* 119ba384 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba387 push edx */
  push32((uint32_t)(EDX));
  /* 119ba388 call 0x119ba3b0 */
  push32(0x119ba38du); f_119ba3b0();
  /* 119ba38d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba390 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba393 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119ba396 mov dword ptr [0x119e711c], eax */
  w32((uint32_t)(0x119e711c), (EAX));
  /* 119ba39b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119ba39e mov dword ptr [0x119e7120], ecx */
  w32((uint32_t)(0x119e7120), (ECX));
  /* 119ba3a4 mov esp, ebp */
  ESP = (EBP);
  /* 119ba3a6 pop ebp */
  EBP = (pop32());
  /* 119ba3a7 ret  */
  ESPCHK(0x119ba2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b0 @ 0x119ba3b0 (1060 bytes, 360 insns) */
void f_119ba3b0(void) {
  FTRACE(0x119ba3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119ba3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119ba3b1 mov ebp, esp */
  EBP = (ESP);
  /* 119ba3b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119ba3b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba3b9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119ba3bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119ba3c2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 119ba3c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119ba3cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119ba3ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba3d2 je 0x119ba3e5 */
  if (C.zf) goto L_119ba3e5;
  /* 119ba3d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119ba3d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba3da mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119ba3dc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119ba3df add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba3e2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_119ba3e5:;
  /* 119ba3e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba3e8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119ba3eb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba3ee jne 0x119ba4bd */
  if (!C.zf) goto L_119ba4bd;
L_119ba3f4:;
  /* 119ba3f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba3f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba3fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119ba3fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba400 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119ba403 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba406 je 0x119ba482 */
  if (C.zf) goto L_119ba482;
  /* 119ba408 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba40b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119ba40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119ba410 je 0x119ba482 */
  if (C.zf) goto L_119ba482;
  /* 119ba412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba415 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119ba417 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119ba419 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba41b mov al, byte ptr [edx + 0x119e7641] */
  AL = (r8((uint32_t)(EDX + 0x119e7641)));
  /* 119ba421 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119ba424 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119ba426 je 0x119ba457 */
  if (C.zf) goto L_119ba457;
  /* 119ba428 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba42b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119ba42d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba430 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba433 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119ba435 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba439 je 0x119ba457 */
  if (C.zf) goto L_119ba457;
  /* 119ba43b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba43e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba441 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119ba443 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119ba445 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba448 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba44b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 119ba44e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba451 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba454 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119ba457:;
  /* 119ba457 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba45a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119ba45c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba45f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba462 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119ba464 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba468 je 0x119ba47d */
  if (C.zf) goto L_119ba47d;
  /* 119ba46a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba46d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba470 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119ba472 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119ba474 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba477 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba47a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_119ba47d:;
  /* 119ba47d jmp 0x119ba3f4 */
  goto L_119ba3f4;
L_119ba482:;
  /* 119ba482 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba485 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119ba487 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba48a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba48d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119ba48f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba493 je 0x119ba4a4 */
  if (C.zf) goto L_119ba4a4;
  /* 119ba495 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba498 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 119ba49b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba49e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba4a1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_119ba4a4:;
  /* 119ba4a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba4a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119ba4aa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba4ad jne 0x119ba4b8 */
  if (!C.zf) goto L_119ba4b8;
  /* 119ba4af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba4b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba4b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119ba4b8:;
  /* 119ba4b8 jmp 0x119ba58c */
  goto L_119ba58c;
L_119ba4bd:;
  /* 119ba4bd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba4c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119ba4c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba4c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba4c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119ba4ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba4ce je 0x119ba4e3 */
  if (C.zf) goto L_119ba4e3;
  /* 119ba4d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba4d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba4d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119ba4d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119ba4da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba4dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba4e0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_119ba4e3:;
  /* 119ba4e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba4e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119ba4e8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 119ba4eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba4ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba4f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119ba4f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba4f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119ba4fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119ba4ff mov dl, byte ptr [ecx + 0x119e7641] */
  DL = (r8((uint32_t)(ECX + 0x119e7641)));
  /* 119ba505 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119ba508 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119ba50a je 0x119ba53b */
  if (C.zf) goto L_119ba53b;
  /* 119ba50c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba50f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119ba511 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba514 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba517 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119ba519 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba51d je 0x119ba532 */
  if (C.zf) goto L_119ba532;
  /* 119ba51f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba522 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba525 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119ba527 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119ba529 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba52c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba52f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_119ba532:;
  /* 119ba532 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba535 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba538 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119ba53b:;
  /* 119ba53b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba53e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119ba544 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba547 je 0x119ba567 */
  if (C.zf) goto L_119ba567;
  /* 119ba549 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba54c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119ba551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119ba553 je 0x119ba567 */
  if (C.zf) goto L_119ba567;
  /* 119ba555 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba558 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119ba55e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba561 jne 0x119ba4bd */
  if (!C.zf) goto L_119ba4bd;
L_119ba567:;
  /* 119ba567 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba56a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119ba570 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119ba572 jne 0x119ba57f */
  if (!C.zf) goto L_119ba57f;
  /* 119ba574 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba577 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119ba57a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119ba57d jmp 0x119ba58c */
  goto L_119ba58c;
L_119ba57f:;
  /* 119ba57f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba583 je 0x119ba58c */
  if (C.zf) goto L_119ba58c;
  /* 119ba585 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba588 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_119ba58c:;
  /* 119ba58c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_119ba593:;
  /* 119ba593 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba596 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119ba599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119ba59b je 0x119ba5be */
  if (C.zf) goto L_119ba5be;
L_119ba59d:;
  /* 119ba59d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba5a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119ba5a3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba5a6 je 0x119ba5b3 */
  if (C.zf) goto L_119ba5b3;
  /* 119ba5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba5ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119ba5ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba5b1 jne 0x119ba5be */
  if (!C.zf) goto L_119ba5be;
L_119ba5b3:;
  /* 119ba5b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba5b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba5b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119ba5bc jmp 0x119ba59d */
  goto L_119ba59d;
L_119ba5be:;
  /* 119ba5be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba5c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119ba5c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119ba5c6 jne 0x119ba5cd */
  if (!C.zf) goto L_119ba5cd;
  /* 119ba5c8 jmp 0x119ba7ab */
  goto L_119ba7ab;
L_119ba5cd:;
  /* 119ba5cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba5d1 je 0x119ba5e4 */
  if (C.zf) goto L_119ba5e4;
  /* 119ba5d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119ba5d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba5d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119ba5db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119ba5de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba5e1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_119ba5e4:;
  /* 119ba5e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119ba5e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119ba5e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba5ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119ba5ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_119ba5f1:;
  /* 119ba5f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 119ba5f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_119ba5ff:;
  /* 119ba5ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba602 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119ba605 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba608 jne 0x119ba61e */
  if (!C.zf) goto L_119ba61e;
  /* 119ba60a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba60d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba610 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119ba613 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba616 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba619 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119ba61c jmp 0x119ba5ff */
  goto L_119ba5ff;
L_119ba61e:;
  /* 119ba61e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba621 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119ba624 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba627 jne 0x119ba67a */
  if (!C.zf) goto L_119ba67a;
  /* 119ba629 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba62c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119ba62e mov ecx, 2 */
  ECX = (0x2u);
  /* 119ba633 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119ba635 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119ba637 jne 0x119ba672 */
  if (!C.zf) goto L_119ba672;
  /* 119ba639 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba63d je 0x119ba65f */
  if (C.zf) goto L_119ba65f;
  /* 119ba63f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba642 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 119ba646 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba649 jne 0x119ba656 */
  if (!C.zf) goto L_119ba656;
  /* 119ba64b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba64e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba651 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119ba654 jmp 0x119ba65d */
  goto L_119ba65d;
L_119ba656:;
  /* 119ba656 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_119ba65d:;
  /* 119ba65d jmp 0x119ba666 */
  goto L_119ba666;
L_119ba65f:;
  /* 119ba65f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_119ba666:;
  /* 119ba666 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119ba668 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba66c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 119ba66f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_119ba672:;
  /* 119ba672 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba675 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119ba677 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_119ba67a:;
  /* 119ba67a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba67d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba680 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119ba683 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119ba686 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119ba688 je 0x119ba6ae */
  if (C.zf) goto L_119ba6ae;
  /* 119ba68a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba68e je 0x119ba69f */
  if (C.zf) goto L_119ba69f;
  /* 119ba690 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba693 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 119ba696 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba699 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba69c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_119ba69f:;
  /* 119ba69f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba6a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119ba6a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba6a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba6aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119ba6ac jmp 0x119ba67a */
  goto L_119ba67a;
L_119ba6ae:;
  /* 119ba6ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba6b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119ba6b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119ba6b6 je 0x119ba6d4 */
  if (C.zf) goto L_119ba6d4;
  /* 119ba6b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba6bc jne 0x119ba6d9 */
  if (!C.zf) goto L_119ba6d9;
  /* 119ba6be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba6c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119ba6c4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba6c7 je 0x119ba6d4 */
  if (C.zf) goto L_119ba6d4;
  /* 119ba6c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba6cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119ba6cf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba6d2 jne 0x119ba6d9 */
  if (!C.zf) goto L_119ba6d9;
L_119ba6d4:;
  /* 119ba6d4 jmp 0x119ba784 */
  goto L_119ba784;
L_119ba6d9:;
  /* 119ba6d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba6dd je 0x119ba776 */
  if (C.zf) goto L_119ba776;
  /* 119ba6e3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba6e7 je 0x119ba73d */
  if (C.zf) goto L_119ba73d;
  /* 119ba6e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba6ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba6ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119ba6f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119ba6f2 mov cl, byte ptr [eax + 0x119e7641] */
  CL = (r8((uint32_t)(EAX + 0x119e7641)));
  /* 119ba6f8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119ba6fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119ba6fd je 0x119ba728 */
  if (C.zf) goto L_119ba728;
  /* 119ba6ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba702 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba705 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119ba707 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 119ba709 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba70c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba70f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 119ba712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba715 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba718 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119ba71b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba71e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119ba720 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba723 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba726 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_119ba728:;
  /* 119ba728 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba72b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba72e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119ba730 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119ba732 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba735 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba738 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 119ba73b jmp 0x119ba769 */
  goto L_119ba769;
L_119ba73d:;
  /* 119ba73d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba740 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba742 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119ba744 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119ba746 mov cl, byte ptr [eax + 0x119e7641] */
  CL = (r8((uint32_t)(EAX + 0x119e7641)));
  /* 119ba74c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119ba74f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119ba751 je 0x119ba769 */
  if (C.zf) goto L_119ba769;
  /* 119ba753 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba756 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba759 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119ba75c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba75f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119ba761 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba764 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba767 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119ba769:;
  /* 119ba769 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba76c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119ba76e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba771 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba774 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119ba776:;
  /* 119ba776 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba779 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba77c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119ba77f jmp 0x119ba5f1 */
  goto L_119ba5f1;
L_119ba784:;
  /* 119ba784 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba788 je 0x119ba799 */
  if (C.zf) goto L_119ba799;
  /* 119ba78a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba78d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 119ba790 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119ba793 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba796 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_119ba799:;
  /* 119ba799 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba79c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119ba79e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba7a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119ba7a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119ba7a6 jmp 0x119ba593 */
  goto L_119ba593;
L_119ba7ab:;
  /* 119ba7ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba7af je 0x119ba7c3 */
  if (C.zf) goto L_119ba7c3;
  /* 119ba7b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119ba7b4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119ba7ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119ba7bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba7c0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_119ba7c3:;
  /* 119ba7c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119ba7c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119ba7c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba7cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119ba7ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119ba7d0 mov esp, ebp */
  ESP = (EBP);
  /* 119ba7d2 pop ebp */
  EBP = (pop32());
  /* 119ba7d3 ret  */
  ESPCHK(0x119ba3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x119ba7e0 (537 bytes, 173 insns) */
void f_119ba7e0(void) {
  FTRACE(0x119ba7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119ba7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119ba7e1 mov ebp, esp */
  EBP = (ESP);
  /* 119ba7e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119ba7e6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 119ba7ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 119ba7f4 cmp dword ptr [0x119e7268], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7268))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba7fb jne 0x119ba83a */
  if (!C.zf) goto L_119ba83a;
  /* 119ba7fd call dword ptr [0x119e9384] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9384))), 0x119ba803u);
  /* 119ba803 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119ba806 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba80a je 0x119ba818 */
  if (C.zf) goto L_119ba818;
  /* 119ba80c mov dword ptr [0x119e7268], 1 */
  w32((uint32_t)(0x119e7268), (0x1u));
  /* 119ba816 jmp 0x119ba83a */
  goto L_119ba83a;
L_119ba818:;
  /* 119ba818 call dword ptr [0x119e9388] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9388))), 0x119ba81eu);
  /* 119ba81e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119ba821 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba825 je 0x119ba833 */
  if (C.zf) goto L_119ba833;
  /* 119ba827 mov dword ptr [0x119e7268], 2 */
  w32((uint32_t)(0x119e7268), (0x2u));
  /* 119ba831 jmp 0x119ba83a */
  goto L_119ba83a;
L_119ba833:;
  /* 119ba833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba835 jmp 0x119ba9f5 */
  goto L_119ba9f5;
L_119ba83a:;
  /* 119ba83a cmp dword ptr [0x119e7268], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7268))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba841 jne 0x119ba93e */
  if (!C.zf) goto L_119ba93e;
  /* 119ba847 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba84b jne 0x119ba863 */
  if (!C.zf) goto L_119ba863;
  /* 119ba84d call dword ptr [0x119e9384] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9384))), 0x119ba853u);
  /* 119ba853 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119ba856 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba85a jne 0x119ba863 */
  if (!C.zf) goto L_119ba863;
  /* 119ba85c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba85e jmp 0x119ba9f5 */
  goto L_119ba9f5;
L_119ba863:;
  /* 119ba863 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119ba866 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119ba869:;
  /* 119ba869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119ba86c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119ba86e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 119ba871 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119ba873 je 0x119ba895 */
  if (C.zf) goto L_119ba895;
  /* 119ba875 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119ba878 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba87b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119ba87e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119ba881 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119ba883 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 119ba886 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119ba888 jne 0x119ba893 */
  if (!C.zf) goto L_119ba893;
  /* 119ba88a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119ba88d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba890 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119ba893:;
  /* 119ba893 jmp 0x119ba869 */
  goto L_119ba869;
L_119ba895:;
  /* 119ba895 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119ba898 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119ba89b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 119ba89d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba8a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119ba8a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba8a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba8a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba8a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba8ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba8ae push edx */
  push32((uint32_t)(EDX));
  /* 119ba8af mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119ba8b2 push eax */
  push32((uint32_t)(EAX));
  /* 119ba8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba8b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba8b7 call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119ba8bdu);
  /* 119ba8bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119ba8c0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba8c4 je 0x119ba8e4 */
  if (C.zf) goto L_119ba8e4;
  /* 119ba8c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 119ba8c8 push 0x119e1ebc */
  push32((uint32_t)(0x119e1ebcu));
  /* 119ba8cd push 2 */
  push32((uint32_t)(0x2u));
  /* 119ba8cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba8d2 push ecx */
  push32((uint32_t)(ECX));
  /* 119ba8d3 call 0x119b8210 */
  push32(0x119ba8d8u); f_119b8210();
  /* 119ba8d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba8db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119ba8de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba8e2 jne 0x119ba8f5 */
  if (!C.zf) goto L_119ba8f5;
L_119ba8e4:;
  /* 119ba8e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119ba8e7 push edx */
  push32((uint32_t)(EDX));
  /* 119ba8e8 call dword ptr [0x119e9390] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9390))), 0x119ba8eeu);
  /* 119ba8ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba8f0 jmp 0x119ba9f5 */
  goto L_119ba9f5;
L_119ba8f5:;
  /* 119ba8f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba8f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba8f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba8fc push eax */
  push32((uint32_t)(EAX));
  /* 119ba8fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119ba900 push ecx */
  push32((uint32_t)(ECX));
  /* 119ba901 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119ba904 push edx */
  push32((uint32_t)(EDX));
  /* 119ba905 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119ba908 push eax */
  push32((uint32_t)(EAX));
  /* 119ba909 push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba90b push 0 */
  push32((uint32_t)(0x0u));
  /* 119ba90d call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119ba913u);
  /* 119ba913 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119ba915 jne 0x119ba92c */
  if (!C.zf) goto L_119ba92c;
  /* 119ba917 push 2 */
  push32((uint32_t)(0x2u));
  /* 119ba919 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119ba91c push ecx */
  push32((uint32_t)(ECX));
  /* 119ba91d call 0x119b8ca0 */
  push32(0x119ba922u); f_119b8ca0();
  /* 119ba922 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba925 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_119ba92c:;
  /* 119ba92c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119ba92f push edx */
  push32((uint32_t)(EDX));
  /* 119ba930 call dword ptr [0x119e9390] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9390))), 0x119ba936u);
  /* 119ba936 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119ba939 jmp 0x119ba9f5 */
  goto L_119ba9f5;
L_119ba93e:;
  /* 119ba93e cmp dword ptr [0x119e7268], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119e7268))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba945 jne 0x119ba9f3 */
  if (!C.zf) goto L_119ba9f3;
  /* 119ba94b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba94f jne 0x119ba967 */
  if (!C.zf) goto L_119ba967;
  /* 119ba951 call dword ptr [0x119e9388] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9388))), 0x119ba957u);
  /* 119ba957 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119ba95a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba95e jne 0x119ba967 */
  if (!C.zf) goto L_119ba967;
  /* 119ba960 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba962 jmp 0x119ba9f5 */
  goto L_119ba9f5;
L_119ba967:;
  /* 119ba967 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119ba96a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119ba96d:;
  /* 119ba96d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba970 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119ba973 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119ba975 je 0x119ba995 */
  if (C.zf) goto L_119ba995;
  /* 119ba977 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba97a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba97d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119ba980 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba983 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119ba986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119ba988 jne 0x119ba993 */
  if (!C.zf) goto L_119ba993;
  /* 119ba98a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba98d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba990 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119ba993:;
  /* 119ba993 jmp 0x119ba96d */
  goto L_119ba96d;
L_119ba995:;
  /* 119ba995 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba998 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119ba99b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba99e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119ba9a1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 119ba9a6 push 0x119e1ebc */
  push32((uint32_t)(0x119e1ebcu));
  /* 119ba9ab push 2 */
  push32((uint32_t)(0x2u));
  /* 119ba9ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba9b0 push edx */
  push32((uint32_t)(EDX));
  /* 119ba9b1 call 0x119b8210 */
  push32(0x119ba9b6u); f_119b8210();
  /* 119ba9b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba9b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119ba9bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119ba9c0 jne 0x119ba9d0 */
  if (!C.zf) goto L_119ba9d0;
  /* 119ba9c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119ba9c5 push eax */
  push32((uint32_t)(EAX));
  /* 119ba9c6 call dword ptr [0x119e9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9394))), 0x119ba9ccu);
  /* 119ba9cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119ba9ce jmp 0x119ba9f5 */
  goto L_119ba9f5;
L_119ba9d0:;
  /* 119ba9d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119ba9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 119ba9d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119ba9d7 push edx */
  push32((uint32_t)(EDX));
  /* 119ba9d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba9db push eax */
  push32((uint32_t)(EAX));
  /* 119ba9dc call 0x119c0840 */
  push32(0x119ba9e1u); f_119c0840();
  /* 119ba9e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119ba9e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119ba9e7 push ecx */
  push32((uint32_t)(ECX));
  /* 119ba9e8 call dword ptr [0x119e9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9394))), 0x119ba9eeu);
  /* 119ba9ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119ba9f1 jmp 0x119ba9f5 */
  goto L_119ba9f5;
L_119ba9f3:;
  /* 119ba9f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119ba9f5:;
  /* 119ba9f5 mov esp, ebp */
  ESP = (EBP);
  /* 119ba9f7 pop ebp */
  EBP = (pop32());
  /* 119ba9f8 ret  */
  ESPCHK(0x119ba7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa00 @ 0x119baa00 (77 bytes, 25 insns) */
void f_119baa00(void) {
  FTRACE(0x119baa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119baa00 push ebp */
  push32((uint32_t)(EBP));
  /* 119baa01 mov ebp, esp */
  EBP = (ESP);
  /* 119baa03 push 0 */
  push32((uint32_t)(0x0u));
  /* 119baa05 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119baa0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119baa0c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119baa10 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 119baa13 push eax */
  push32((uint32_t)(EAX));
  /* 119baa14 call dword ptr [0x119e937c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e937c))), 0x119baa1au);
  /* 119baa1a mov dword ptr [0x119e8ac4], eax */
  w32((uint32_t)(0x119e8ac4), (EAX));
  /* 119baa1f cmp dword ptr [0x119e8ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119baa26 jne 0x119baa2c */
  if (!C.zf) goto L_119baa2c;
  /* 119baa28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119baa2a jmp 0x119baa4b */
  goto L_119baa4b;
L_119baa2c:;
  /* 119baa2c call 0x119be3c0 */
  push32(0x119baa31u); f_119be3c0();
  /* 119baa31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119baa33 jne 0x119baa46 */
  if (!C.zf) goto L_119baa46;
  /* 119baa35 mov ecx, dword ptr [0x119e8ac4] */
  ECX = (r32((uint32_t)(0x119e8ac4)));
  /* 119baa3b push ecx */
  push32((uint32_t)(ECX));
  /* 119baa3c call dword ptr [0x119e9380] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9380))), 0x119baa42u);
  /* 119baa42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119baa44 jmp 0x119baa4b */
  goto L_119baa4b;
L_119baa46:;
  /* 119baa46 mov eax, 1 */
  EAX = (0x1u);
L_119baa4b:;
  /* 119baa4b pop ebp */
  EBP = (pop32());
  /* 119baa4c ret  */
  ESPCHK(0x119baa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa50 @ 0x119baa50 (156 bytes, 48 insns) */
void f_119baa50(void) {
  FTRACE(0x119baa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119baa50 push ebp */
  push32((uint32_t)(EBP));
  /* 119baa51 mov ebp, esp */
  EBP = (ESP);
  /* 119baa53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119baa56 mov eax, dword ptr [0x119e7768] */
  EAX = (r32((uint32_t)(0x119e7768)));
  /* 119baa5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119baa5e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119baa65 jmp 0x119baa70 */
  goto L_119baa70;
L_119baa67:;
  /* 119baa67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119baa6a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119baa6d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119baa70:;
  /* 119baa70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119baa73 cmp edx, dword ptr [0x119e7764] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119e7764))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119baa79 jge 0x119baac6 */
  if ((C.sf==C.of)) goto L_119baac6;
  /* 119baa7b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 119baa80 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 119baa85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119baa88 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119baa8b push ecx */
  push32((uint32_t)(ECX));
  /* 119baa8c call dword ptr [0x119e9374] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9374))), 0x119baa92u);
  /* 119baa92 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 119baa97 push 0 */
  push32((uint32_t)(0x0u));
  /* 119baa99 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119baa9c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119baa9f push eax */
  push32((uint32_t)(EAX));
  /* 119baaa0 call dword ptr [0x119e9374] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9374))), 0x119baaa6u);
  /* 119baaa6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119baaa9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 119baaac push edx */
  push32((uint32_t)(EDX));
  /* 119baaad push 0 */
  push32((uint32_t)(0x0u));
  /* 119baaaf mov eax, dword ptr [0x119e8ac4] */
  EAX = (r32((uint32_t)(0x119e8ac4)));
  /* 119baab4 push eax */
  push32((uint32_t)(EAX));
  /* 119baab5 call dword ptr [0x119e9378] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9378))), 0x119baabbu);
  /* 119baabb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119baabe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119baac1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119baac4 jmp 0x119baa67 */
  goto L_119baa67;
L_119baac6:;
  /* 119baac6 mov edx, dword ptr [0x119e7768] */
  EDX = (r32((uint32_t)(0x119e7768)));
  /* 119baacc push edx */
  push32((uint32_t)(EDX));
  /* 119baacd push 0 */
  push32((uint32_t)(0x0u));
  /* 119baacf mov eax, dword ptr [0x119e8ac4] */
  EAX = (r32((uint32_t)(0x119e8ac4)));
  /* 119baad4 push eax */
  push32((uint32_t)(EAX));
  /* 119baad5 call dword ptr [0x119e9378] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9378))), 0x119baadbu);
  /* 119baadb mov ecx, dword ptr [0x119e8ac4] */
  ECX = (r32((uint32_t)(0x119e8ac4)));
  /* 119baae1 push ecx */
  push32((uint32_t)(ECX));
  /* 119baae2 call dword ptr [0x119e9380] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9380))), 0x119baae8u);
  /* 119baae8 mov esp, ebp */
  ESP = (EBP);
  /* 119baaea pop ebp */
  EBP = (pop32());
  /* 119baaeb ret  */
  ESPCHK(0x119baa50u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x119baaf0 (73 bytes, 19 insns) */
void f_119baaf0(void) {
  FTRACE(0x119baaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119baaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 119baaf1 mov ebp, esp */
  EBP = (ESP);
  /* 119baaf3 cmp dword ptr [0x119e70fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e70fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119baafa je 0x119bab0e */
  if (C.zf) goto L_119bab0e;
  /* 119baafc cmp dword ptr [0x119e70fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e70fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bab03 jne 0x119bab37 */
  if (!C.zf) goto L_119bab37;
  /* 119bab05 cmp dword ptr [0x119e7100], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7100))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bab0c jne 0x119bab37 */
  if (!C.zf) goto L_119bab37;
L_119bab0e:;
  /* 119bab0e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 119bab13 call 0x119bab40 */
  push32(0x119bab18u); f_119bab40();
  /* 119bab18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bab1b cmp dword ptr [0x119e726c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e726c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bab22 je 0x119bab2a */
  if (C.zf) goto L_119bab2a;
  /* 119bab24 call dword ptr [0x119e726c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e726c))), 0x119bab2au);
L_119bab2a:;
  /* 119bab2a push 0xff */
  push32((uint32_t)(0xffu));
  /* 119bab2f call 0x119bab40 */
  push32(0x119bab34u); f_119bab40();
  /* 119bab34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bab37:;
  /* 119bab37 pop ebp */
  EBP = (pop32());
  /* 119bab38 ret  */
  ESPCHK(0x119baaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab40 @ 0x119bab40 (447 bytes, 131 insns) */
void f_119bab40(void) {
  FTRACE(0x119bab40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bab40 push ebp */
  push32((uint32_t)(EBP));
  /* 119bab41 mov ebp, esp */
  EBP = (ESP);
  /* 119bab43 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bab49 push ebx */
  push32((uint32_t)(EBX));
  /* 119bab4a push esi */
  push32((uint32_t)(ESI));
  /* 119bab4b push edi */
  push32((uint32_t)(EDI));
  /* 119bab4c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119bab53 jmp 0x119bab5e */
  goto L_119bab5e;
L_119bab55:;
  /* 119bab55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bab58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bab5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119bab5e:;
  /* 119bab5e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bab62 jae 0x119bab77 */
  if (!C.cf) goto L_119bab77;
  /* 119bab64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bab67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bab6a cmp edx, dword ptr [ecx*8 + 0x119e4ae8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x119e4ae8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bab71 jne 0x119bab75 */
  if (!C.zf) goto L_119bab75;
  /* 119bab73 jmp 0x119bab77 */
  goto L_119bab77;
L_119bab75:;
  /* 119bab75 jmp 0x119bab55 */
  goto L_119bab55;
L_119bab77:;
  /* 119bab77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bab7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bab7d cmp ecx, dword ptr [eax*8 + 0x119e4ae8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x119e4ae8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bab84 jne 0x119bacf8 */
  if (!C.zf) goto L_119bacf8;
  /* 119bab8a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bab91 je 0x119babb4 */
  if (C.zf) goto L_119babb4;
  /* 119bab93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bab96 mov eax, dword ptr [edx*8 + 0x119e4aec] */
  EAX = (r32((uint32_t)(EDX*8 + 0x119e4aec)));
  /* 119bab9d push eax */
  push32((uint32_t)(EAX));
  /* 119bab9e push 0 */
  push32((uint32_t)(0x0u));
  /* 119baba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119baba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119baba4 push 1 */
  push32((uint32_t)(0x1u));
  /* 119baba6 call 0x119b59b0 */
  push32(0x119bababu); f_119b59b0();
  /* 119babab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119babae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119babb1 jne 0x119babb4 */
  if (!C.zf) goto L_119babb4;
  /* 119babb3 int3  */
  x86_unimpl("int3 @ 0x119babb3");
L_119babb4:;
  /* 119babb4 cmp dword ptr [0x119e70fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e70fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119babbb je 0x119babcf */
  if (C.zf) goto L_119babcf;
  /* 119babbd cmp dword ptr [0x119e70fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e70fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119babc4 jne 0x119bac08 */
  if (!C.zf) goto L_119bac08;
  /* 119babc6 cmp dword ptr [0x119e7100], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7100))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119babcd jne 0x119bac08 */
  if (!C.zf) goto L_119bac08;
L_119babcf:;
  /* 119babcf push 0 */
  push32((uint32_t)(0x0u));
  /* 119babd1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 119babd4 push ecx */
  push32((uint32_t)(ECX));
  /* 119babd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119babd8 mov eax, dword ptr [edx*8 + 0x119e4aec] */
  EAX = (r32((uint32_t)(EDX*8 + 0x119e4aec)));
  /* 119babdf push eax */
  push32((uint32_t)(EAX));
  /* 119babe0 call 0x119bb040 */
  push32(0x119babe5u); f_119bb040();
  /* 119babe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119babe8 push eax */
  push32((uint32_t)(EAX));
  /* 119babe9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119babec mov edx, dword ptr [ecx*8 + 0x119e4aec] */
  EDX = (r32((uint32_t)(ECX*8 + 0x119e4aec)));
  /* 119babf3 push edx */
  push32((uint32_t)(EDX));
  /* 119babf4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 119babf6 call dword ptr [0x119e93bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93bc))), 0x119babfcu);
  /* 119babfc push eax */
  push32((uint32_t)(EAX));
  /* 119babfd call dword ptr [0x119e93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c0))), 0x119bac03u);
  /* 119bac03 jmp 0x119bacf8 */
  goto L_119bacf8;
L_119bac08:;
  /* 119bac08 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bac0f je 0x119bacf8 */
  if (C.zf) goto L_119bacf8;
  /* 119bac15 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 119bac1a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 119bac20 push eax */
  push32((uint32_t)(EAX));
  /* 119bac21 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bac23 call dword ptr [0x119e92e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92e8))), 0x119bac29u);
  /* 119bac29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bac2b jne 0x119bac41 */
  if (!C.zf) goto L_119bac41;
  /* 119bac2d push 0x119e15f8 */
  push32((uint32_t)(0x119e15f8u));
  /* 119bac32 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 119bac38 push ecx */
  push32((uint32_t)(ECX));
  /* 119bac39 call 0x119bb1c0 */
  push32(0x119bac3eu); f_119bb1c0();
  /* 119bac3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bac41:;
  /* 119bac41 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 119bac47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119bac4a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bac4d push eax */
  push32((uint32_t)(EAX));
  /* 119bac4e call 0x119bb040 */
  push32(0x119bac53u); f_119bb040();
  /* 119bac53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bac56 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bac59 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bac5c jbe 0x119bac8a */
  if ((C.cf||C.zf)) goto L_119bac8a;
  /* 119bac5e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 119bac64 push ecx */
  push32((uint32_t)(ECX));
  /* 119bac65 call 0x119bb040 */
  push32(0x119bac6au); f_119bb040();
  /* 119bac6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bac6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bac70 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 119bac74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bac77 push 3 */
  push32((uint32_t)(0x3u));
  /* 119bac79 push 0x119e15f4 */
  push32((uint32_t)(0x119e15f4u));
  /* 119bac7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bac81 push ecx */
  push32((uint32_t)(ECX));
  /* 119bac82 call 0x119bba30 */
  push32(0x119bac87u); f_119bba30();
  /* 119bac87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bac8a:;
  /* 119bac8a push 0x119e2178 */
  push32((uint32_t)(0x119e2178u));
  /* 119bac8f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 119bac95 push edx */
  push32((uint32_t)(EDX));
  /* 119bac96 call 0x119bb1c0 */
  push32(0x119bac9bu); f_119bb1c0();
  /* 119bac9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bac9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119baca1 push eax */
  push32((uint32_t)(EAX));
  /* 119baca2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 119baca8 push ecx */
  push32((uint32_t)(ECX));
  /* 119baca9 call 0x119bb1d0 */
  push32(0x119bacaeu); f_119bb1d0();
  /* 119bacae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bacb1 push 0x119e156c */
  push32((uint32_t)(0x119e156cu));
  /* 119bacb6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 119bacbc push edx */
  push32((uint32_t)(EDX));
  /* 119bacbd call 0x119bb1d0 */
  push32(0x119bacc2u); f_119bb1d0();
  /* 119bacc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bacc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bacc8 mov ecx, dword ptr [eax*8 + 0x119e4aec] */
  ECX = (r32((uint32_t)(EAX*8 + 0x119e4aec)));
  /* 119baccf push ecx */
  push32((uint32_t)(ECX));
  /* 119bacd0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 119bacd6 push edx */
  push32((uint32_t)(EDX));
  /* 119bacd7 call 0x119bb1d0 */
  push32(0x119bacdcu); f_119bb1d0();
  /* 119bacdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bacdf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 119bace4 push 0x119e2150 */
  push32((uint32_t)(0x119e2150u));
  /* 119bace9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 119bacef push eax */
  push32((uint32_t)(EAX));
  /* 119bacf0 call 0x119bb970 */
  push32(0x119bacf5u); f_119bb970();
  /* 119bacf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bacf8:;
  /* 119bacf8 pop edi */
  EDI = (pop32());
  /* 119bacf9 pop esi */
  ESI = (pop32());
  /* 119bacfa pop ebx */
  EBX = (pop32());
  /* 119bacfb mov esp, ebp */
  ESP = (EBP);
  /* 119bacfd pop ebp */
  EBP = (pop32());
  /* 119bacfe ret  */
  ESPCHK(0x119bab40u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x119bad00 (80 bytes, 27 insns) */
void f_119bad00(void) {
  FTRACE(0x119bad00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bad00 push ebp */
  push32((uint32_t)(EBP));
  /* 119bad01 mov ebp, esp */
  EBP = (ESP);
  /* 119bad03 push ecx */
  push32((uint32_t)(ECX));
  /* 119bad04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bad0b jmp 0x119bad16 */
  goto L_119bad16;
L_119bad0d:;
  /* 119bad0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bad10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bad13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bad16:;
  /* 119bad16 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bad1a jae 0x119bad2f */
  if (!C.cf) goto L_119bad2f;
  /* 119bad1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bad1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bad22 cmp edx, dword ptr [ecx*8 + 0x119e4ae8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x119e4ae8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bad29 jne 0x119bad2d */
  if (!C.zf) goto L_119bad2d;
  /* 119bad2b jmp 0x119bad2f */
  goto L_119bad2f;
L_119bad2d:;
  /* 119bad2d jmp 0x119bad0d */
  goto L_119bad0d;
L_119bad2f:;
  /* 119bad2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bad32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bad35 cmp ecx, dword ptr [eax*8 + 0x119e4ae8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x119e4ae8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bad3c jne 0x119bad4a */
  if (!C.zf) goto L_119bad4a;
  /* 119bad3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bad41 mov eax, dword ptr [edx*8 + 0x119e4aec] */
  EAX = (r32((uint32_t)(EDX*8 + 0x119e4aec)));
  /* 119bad48 jmp 0x119bad4c */
  goto L_119bad4c;
L_119bad4a:;
  /* 119bad4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119bad4c:;
  /* 119bad4c mov esp, ebp */
  ESP = (EBP);
  /* 119bad4e pop ebp */
  EBP = (pop32());
  /* 119bad4f ret  */
  ESPCHK(0x119bad00u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x119bad50 (66 bytes, 28 insns) */
void f_119bad50(void) {
  FTRACE(0x119bad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bad50 push ebp */
  push32((uint32_t)(EBP));
  /* 119bad51 mov ebp, esp */
  EBP = (ESP);
  /* 119bad53 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bad57 jne 0x119bad77 */
  if (!C.zf) goto L_119bad77;
  /* 119bad59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bad5d jge 0x119bad77 */
  if ((C.sf==C.of)) goto L_119bad77;
  /* 119bad5f push 1 */
  push32((uint32_t)(0x1u));
  /* 119bad61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bad64 push eax */
  push32((uint32_t)(EAX));
  /* 119bad65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bad68 push ecx */
  push32((uint32_t)(ECX));
  /* 119bad69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bad6c push edx */
  push32((uint32_t)(EDX));
  /* 119bad6d call 0x119bada0 */
  push32(0x119bad72u); f_119bada0();
  /* 119bad72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bad75 jmp 0x119bad8d */
  goto L_119bad8d;
L_119bad77:;
  /* 119bad77 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bad79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bad7c push eax */
  push32((uint32_t)(EAX));
  /* 119bad7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bad80 push ecx */
  push32((uint32_t)(ECX));
  /* 119bad81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bad84 push edx */
  push32((uint32_t)(EDX));
  /* 119bad85 call 0x119bada0 */
  push32(0x119bad8au); f_119bada0();
  /* 119bad8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bad8d:;
  /* 119bad8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bad90 pop ebp */
  EBP = (pop32());
  /* 119bad91 ret  */
  ESPCHK(0x119bad50u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x119bada0 (194 bytes, 71 insns) */
void f_119bada0(void) {
  FTRACE(0x119bada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bada0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bada1 mov ebp, esp */
  EBP = (ESP);
  /* 119bada3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bada6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bada9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119badac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119badb0 je 0x119badc9 */
  if (C.zf) goto L_119badc9;
  /* 119badb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119badb5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 119badb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119badbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119badbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119badc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119badc4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119badc6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_119badc9:;
  /* 119badc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119badcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119badcf:;
  /* 119badcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119badd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119badd4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119badd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119badda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119baddd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119baddf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119bade2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119bade5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bade9 jbe 0x119bae01 */
  if ((C.cf||C.zf)) goto L_119bae01;
  /* 119badeb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119badee add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119badf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119badf4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119badf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119badf9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119badfc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119badff jmp 0x119bae15 */
  goto L_119bae15;
L_119bae01:;
  /* 119bae01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bae04 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bae07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bae0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119bae0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bae0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bae12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119bae15:;
  /* 119bae15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bae19 ja 0x119badcf */
  if ((!C.cf&&!C.zf)) goto L_119badcf;
  /* 119bae1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bae1e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 119bae21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bae24 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bae27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bae2a:;
  /* 119bae2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bae2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119bae2f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 119bae32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bae35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bae38 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119bae3a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119bae3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bae3f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 119bae42 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 119bae44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bae47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bae4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119bae4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bae50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bae53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bae56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bae59 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bae5c jb 0x119bae2a */
  if (C.cf) goto L_119bae2a;
  /* 119bae5e mov esp, ebp */
  ESP = (EBP);
  /* 119bae60 pop ebp */
  EBP = (pop32());
  /* 119bae61 ret  */
  ESPCHK(0x119bada0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x119bae70 (63 bytes, 24 insns) */
void f_119bae70(void) {
  FTRACE(0x119bae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bae70 push ebp */
  push32((uint32_t)(EBP));
  /* 119bae71 mov ebp, esp */
  EBP = (ESP);
  /* 119bae73 push ecx */
  push32((uint32_t)(ECX));
  /* 119bae74 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bae78 jne 0x119bae89 */
  if (!C.zf) goto L_119bae89;
  /* 119bae7a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bae7e jge 0x119bae89 */
  if ((C.sf==C.of)) goto L_119bae89;
  /* 119bae80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119bae87 jmp 0x119bae90 */
  goto L_119bae90;
L_119bae89:;
  /* 119bae89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119bae90:;
  /* 119bae90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bae93 push eax */
  push32((uint32_t)(EAX));
  /* 119bae94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bae97 push ecx */
  push32((uint32_t)(ECX));
  /* 119bae98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bae9b push edx */
  push32((uint32_t)(EDX));
  /* 119bae9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bae9f push eax */
  push32((uint32_t)(EAX));
  /* 119baea0 call 0x119bada0 */
  push32(0x119baea5u); f_119bada0();
  /* 119baea5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119baea8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119baeab mov esp, ebp */
  ESP = (EBP);
  /* 119baead pop ebp */
  EBP = (pop32());
  /* 119baeae ret  */
  ESPCHK(0x119bae70u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x119baeb0 (30 bytes, 14 insns) */
void f_119baeb0(void) {
  FTRACE(0x119baeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119baeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 119baeb1 mov ebp, esp */
  EBP = (ESP);
  /* 119baeb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119baeb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119baeb8 push eax */
  push32((uint32_t)(EAX));
  /* 119baeb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119baebc push ecx */
  push32((uint32_t)(ECX));
  /* 119baebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119baec0 push edx */
  push32((uint32_t)(EDX));
  /* 119baec1 call 0x119bada0 */
  push32(0x119baec6u); f_119bada0();
  /* 119baec6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119baec9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119baecc pop ebp */
  EBP = (pop32());
  /* 119baecd ret  */
  ESPCHK(0x119baeb0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x119baed0 (72 bytes, 28 insns) */
void f_119baed0(void) {
  FTRACE(0x119baed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119baed0 push ebp */
  push32((uint32_t)(EBP));
  /* 119baed1 mov ebp, esp */
  EBP = (ESP);
  /* 119baed3 push ecx */
  push32((uint32_t)(ECX));
  /* 119baed4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119baed8 jne 0x119baef1 */
  if (!C.zf) goto L_119baef1;
  /* 119baeda cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119baede jg 0x119baef1 */
  if ((!C.zf&&C.sf==C.of)) goto L_119baef1;
  /* 119baee0 jl 0x119baee8 */
  if ((C.sf!=C.of)) goto L_119baee8;
  /* 119baee2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119baee6 jae 0x119baef1 */
  if (!C.cf) goto L_119baef1;
L_119baee8:;
  /* 119baee8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119baeef jmp 0x119baef8 */
  goto L_119baef8;
L_119baef1:;
  /* 119baef1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119baef8:;
  /* 119baef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119baefb push eax */
  push32((uint32_t)(EAX));
  /* 119baefc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119baeff push ecx */
  push32((uint32_t)(ECX));
  /* 119baf00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119baf03 push edx */
  push32((uint32_t)(EDX));
  /* 119baf04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119baf07 push eax */
  push32((uint32_t)(EAX));
  /* 119baf08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119baf0b push ecx */
  push32((uint32_t)(ECX));
  /* 119baf0c call 0x119baf20 */
  push32(0x119baf11u); f_119baf20();
  /* 119baf11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119baf14 mov esp, ebp */
  ESP = (EBP);
  /* 119baf16 pop ebp */
  EBP = (pop32());
  /* 119baf17 ret  */
  ESPCHK(0x119baed0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x119baf20 (242 bytes, 91 insns) */
void f_119baf20(void) {
  FTRACE(0x119baf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119baf20 push ebp */
  push32((uint32_t)(EBP));
  /* 119baf21 mov ebp, esp */
  EBP = (ESP);
  /* 119baf23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119baf26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119baf29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119baf2c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119baf30 je 0x119baf54 */
  if (C.zf) goto L_119baf54;
  /* 119baf32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119baf35 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 119baf38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119baf3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119baf3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119baf41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119baf44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119baf46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119baf49 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119baf4c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119baf4e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119baf51 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_119baf54:;
  /* 119baf54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119baf57 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119baf5a:;
  /* 119baf5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119baf5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119baf5f push ecx */
  push32((uint32_t)(ECX));
  /* 119baf60 push eax */
  push32((uint32_t)(EAX));
  /* 119baf61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119baf64 push edx */
  push32((uint32_t)(EDX));
  /* 119baf65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119baf68 push eax */
  push32((uint32_t)(EAX));
  /* 119baf69 call 0x119bc460 */
  push32(0x119baf6eu); f_119bc460();
  /* 119baf6e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119baf71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119baf74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119baf76 push edx */
  push32((uint32_t)(EDX));
  /* 119baf77 push ecx */
  push32((uint32_t)(ECX));
  /* 119baf78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119baf7b push eax */
  push32((uint32_t)(EAX));
  /* 119baf7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119baf7f push ecx */
  push32((uint32_t)(ECX));
  /* 119baf80 call 0x119bc3f0 */
  push32(0x119baf85u); f_119bc3f0();
  /* 119baf85 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119baf88 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 119baf8b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119baf8f jbe 0x119bafa7 */
  if ((C.cf||C.zf)) goto L_119bafa7;
  /* 119baf91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119baf94 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119baf97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119baf9a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119baf9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119baf9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bafa2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bafa5 jmp 0x119bafbb */
  goto L_119bafbb;
L_119bafa7:;
  /* 119bafa7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bafaa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bafad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bafb0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119bafb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bafb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bafb8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119bafbb:;
  /* 119bafbb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bafbf ja 0x119baf5a */
  if ((!C.cf&&!C.zf)) goto L_119baf5a;
  /* 119bafc1 jb 0x119bafc9 */
  if (C.cf) goto L_119bafc9;
  /* 119bafc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bafc7 ja 0x119baf5a */
  if ((!C.cf&&!C.zf)) goto L_119baf5a;
L_119bafc9:;
  /* 119bafc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bafcc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 119bafcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bafd2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bafd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bafd8:;
  /* 119bafd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bafdb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119bafdd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 119bafe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bafe3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bafe6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119bafe8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119bafea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bafed mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 119baff0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 119baff2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119baff5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119baff8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119baffb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119baffe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb001 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bb004 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb007 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb00a jb 0x119bafd8 */
  if (C.cf) goto L_119bafd8;
  /* 119bb00c mov esp, ebp */
  ESP = (EBP);
  /* 119bb00e pop ebp */
  EBP = (pop32());
  /* 119bb00f ret 0x14 */
  ESPCHK(0x119baf20u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x119bb020 (31 bytes, 15 insns) */
void f_119bb020(void) {
  FTRACE(0x119bb020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb020 push ebp */
  push32((uint32_t)(EBP));
  /* 119bb021 mov ebp, esp */
  EBP = (ESP);
  /* 119bb023 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bb025 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119bb028 push eax */
  push32((uint32_t)(EAX));
  /* 119bb029 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bb02c push ecx */
  push32((uint32_t)(ECX));
  /* 119bb02d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb030 push edx */
  push32((uint32_t)(EDX));
  /* 119bb031 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bb034 push eax */
  push32((uint32_t)(EAX));
  /* 119bb035 call 0x119baf20 */
  push32(0x119bb03au); f_119baf20();
  /* 119bb03a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bb03d pop ebp */
  EBP = (pop32());
  /* 119bb03e ret  */
  ESPCHK(0x119bb020u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x119bb040 (123 bytes, 44 insns) */
void f_119bb040(void) {
  FTRACE(0x119bb040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119bb044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119bb04a je 0x119bb060 */
  if (C.zf) goto L_119bb060;
L_119bb04c:;
  /* 119bb04c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 119bb04e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119bb04f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119bb051 je 0x119bb093 */
  if (C.zf) goto L_119bb093;
  /* 119bb053 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119bb059 jne 0x119bb04c */
  if (!C.zf) goto L_119bb04c;
  /* 119bb05b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_119bb060:;
  /* 119bb060 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119bb062 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 119bb067 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb069 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bb06c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bb06e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb071 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119bb076 je 0x119bb060 */
  if (C.zf) goto L_119bb060;
  /* 119bb078 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 119bb07b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119bb07d je 0x119bb0b1 */
  if (C.zf) goto L_119bb0b1;
  /* 119bb07f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 119bb081 je 0x119bb0a7 */
  if (C.zf) goto L_119bb0a7;
  /* 119bb083 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 119bb088 je 0x119bb09d */
  if (C.zf) goto L_119bb09d;
  /* 119bb08a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 119bb08f je 0x119bb093 */
  if (C.zf) goto L_119bb093;
  /* 119bb091 jmp 0x119bb060 */
  goto L_119bb060;
L_119bb093:;
  /* 119bb093 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 119bb096 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119bb09a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb09c ret  */
  ESPCHK(0x119bb040u, _esp0);
  ESP += 4; return;
L_119bb09d:;
  /* 119bb09d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 119bb0a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119bb0a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb0a6 ret  */
  ESPCHK(0x119bb040u, _esp0);
  ESP += 4; return;
L_119bb0a7:;
  /* 119bb0a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 119bb0aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119bb0ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb0b0 ret  */
  ESPCHK(0x119bb040u, _esp0);
  ESP += 4; return;
L_119bb0b1:;
  /* 119bb0b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 119bb0b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119bb0b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb0ba ret  */
  ESPCHK(0x119bb040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0c0 @ 0x119bb0c0 (249 bytes, 93 insns) */
void f_119bb0c0(void) {
  FTRACE(0x119bb0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bb0c1 mov ebp, esp */
  EBP = (ESP);
  /* 119bb0c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb0c6 push ebx */
  push32((uint32_t)(EBX));
  /* 119bb0c7 push esi */
  push32((uint32_t)(ESI));
  /* 119bb0c8 push edi */
  push32((uint32_t)(EDI));
  /* 119bb0c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 119bb0cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119bb0cf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 119bb0d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_119bb0d5:;
  /* 119bb0d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb0d9 jne 0x119bb0f9 */
  if (!C.zf) goto L_119bb0f9;
  /* 119bb0db push 0x119e13f0 */
  push32((uint32_t)(0x119e13f0u));
  /* 119bb0e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bb0e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 119bb0e4 push 0x119e13e4 */
  push32((uint32_t)(0x119e13e4u));
  /* 119bb0e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 119bb0eb call 0x119b59b0 */
  push32(0x119bb0f0u); f_119b59b0();
  /* 119bb0f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb0f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb0f6 jne 0x119bb0f9 */
  if (!C.zf) goto L_119bb0f9;
  /* 119bb0f8 int3  */
  x86_unimpl("int3 @ 0x119bb0f8");
L_119bb0f9:;
  /* 119bb0f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119bb0fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bb0fd jne 0x119bb0d5 */
  if (!C.zf) goto L_119bb0d5;
L_119bb0ff:;
  /* 119bb0ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb103 jne 0x119bb123 */
  if (!C.zf) goto L_119bb123;
  /* 119bb105 push 0x119e13d4 */
  push32((uint32_t)(0x119e13d4u));
  /* 119bb10a push 0 */
  push32((uint32_t)(0x0u));
  /* 119bb10c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 119bb10e push 0x119e13e4 */
  push32((uint32_t)(0x119e13e4u));
  /* 119bb113 push 2 */
  push32((uint32_t)(0x2u));
  /* 119bb115 call 0x119b59b0 */
  push32(0x119bb11au); f_119b59b0();
  /* 119bb11a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb11d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb120 jne 0x119bb123 */
  if (!C.zf) goto L_119bb123;
  /* 119bb122 int3  */
  x86_unimpl("int3 @ 0x119bb122");
L_119bb123:;
  /* 119bb123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bb125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bb127 jne 0x119bb0ff */
  if (!C.zf) goto L_119bb0ff;
  /* 119bb129 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb12c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 119bb133 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bb139 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 119bb13c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb13f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bb142 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 119bb144 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb147 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb14a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119bb14d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bb150 push edx */
  push32((uint32_t)(EDX));
  /* 119bb151 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bb154 push eax */
  push32((uint32_t)(EAX));
  /* 119bb155 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb158 push ecx */
  push32((uint32_t)(ECX));
  /* 119bb159 call 0x119b62d0 */
  push32(0x119bb15eu); f_119b62d0();
  /* 119bb15e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb161 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119bb164 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb167 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119bb16a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb16d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb170 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 119bb173 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb176 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb17a jl 0x119bb19e */
  if ((C.sf!=C.of)) goto L_119bb19e;
  /* 119bb17c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb17f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119bb181 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 119bb184 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119bb186 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bb18c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 119bb18f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb192 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119bb194 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb197 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb19a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119bb19c jmp 0x119bb1af */
  goto L_119bb1af;
L_119bb19e:;
  /* 119bb19e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb1a1 push eax */
  push32((uint32_t)(EAX));
  /* 119bb1a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bb1a4 call 0x119b6050 */
  push32(0x119bb1a9u); f_119b6050();
  /* 119bb1a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb1ac mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_119bb1af:;
  /* 119bb1af mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bb1b2 pop edi */
  EDI = (pop32());
  /* 119bb1b3 pop esi */
  ESI = (pop32());
  /* 119bb1b4 pop ebx */
  EBX = (pop32());
  /* 119bb1b5 mov esp, ebp */
  ESP = (EBP);
  /* 119bb1b7 pop ebp */
  EBP = (pop32());
  /* 119bb1b8 ret  */
  ESPCHK(0x119bb0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1c0 @ 0x119bb1c0 (7 bytes, 3 insns) */
void f_119bb1c0(void) {
  FTRACE(0x119bb1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb1c0 push edi */
  push32((uint32_t)(EDI));
  /* 119bb1c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 119bb1c5 jmp 0x119bb231 */
  jmp_ind(0x119bb231u); return;
}

/* FUN_1000b1d0 @ 0x119bb1d0 (224 bytes, 84 insns) */
void f_119bb1d0(void) {
  FTRACE(0x119bb1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb1d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119bb1d4 push edi */
  push32((uint32_t)(EDI));
  /* 119bb1d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119bb1db je 0x119bb1ec */
  if (C.zf) goto L_119bb1ec;
L_119bb1dd:;
  /* 119bb1dd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 119bb1df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119bb1e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119bb1e2 je 0x119bb21f */
  if (C.zf) goto L_119bb21f;
  /* 119bb1e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119bb1ea jne 0x119bb1dd */
  if (!C.zf) goto L_119bb1dd;
L_119bb1ec:;
  /* 119bb1ec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119bb1ee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 119bb1f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb1f5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bb1f8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bb1fa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb1fd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119bb202 je 0x119bb1ec */
  if (C.zf) goto L_119bb1ec;
  /* 119bb204 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 119bb207 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119bb209 je 0x119bb22e */
  if (C.zf) goto L_119bb22e;
  /* 119bb20b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 119bb20d je 0x119bb229 */
  if (C.zf) goto L_119bb229;
  /* 119bb20f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 119bb214 je 0x119bb224 */
  if (C.zf) goto L_119bb224;
  /* 119bb216 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 119bb21b je 0x119bb21f */
  if (C.zf) goto L_119bb21f;
  /* 119bb21d jmp 0x119bb1ec */
  goto L_119bb1ec;
L_119bb21f:;
  /* 119bb21f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 119bb222 jmp 0x119bb231 */
  goto L_119bb231;
L_119bb224:;
  /* 119bb224 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 119bb227 jmp 0x119bb231 */
  goto L_119bb231;
L_119bb229:;
  /* 119bb229 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 119bb22c jmp 0x119bb231 */
  goto L_119bb231;
L_119bb22e:;
  /* 119bb22e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_119bb231:;
  /* 119bb231 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 119bb235 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119bb23b je 0x119bb256 */
  if (C.zf) goto L_119bb256;
L_119bb23d:;
  /* 119bb23d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119bb23f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119bb240 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119bb242 je 0x119bb2a8 */
  if (C.zf) goto L_119bb2a8;
  /* 119bb244 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 119bb246 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119bb247 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119bb24d jne 0x119bb23d */
  if (!C.zf) goto L_119bb23d;
  /* 119bb24f jmp 0x119bb256 */
  goto L_119bb256;
L_119bb251:;
  /* 119bb251 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119bb253 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119bb256:;
  /* 119bb256 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 119bb25b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119bb25d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb25f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bb262 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bb264 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bb266 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb269 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119bb26e je 0x119bb251 */
  if (C.zf) goto L_119bb251;
  /* 119bb270 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119bb272 je 0x119bb2a8 */
  if (C.zf) goto L_119bb2a8;
  /* 119bb274 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 119bb276 je 0x119bb29f */
  if (C.zf) goto L_119bb29f;
  /* 119bb278 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 119bb27e je 0x119bb292 */
  if (C.zf) goto L_119bb292;
  /* 119bb280 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 119bb286 je 0x119bb28a */
  if (C.zf) goto L_119bb28a;
  /* 119bb288 jmp 0x119bb251 */
  goto L_119bb251;
L_119bb28a:;
  /* 119bb28a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119bb28c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119bb290 pop edi */
  EDI = (pop32());
  /* 119bb291 ret  */
  ESPCHK(0x119bb1d0u, _esp0);
  ESP += 4; return;
L_119bb292:;
  /* 119bb292 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 119bb295 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119bb299 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 119bb29d pop edi */
  EDI = (pop32());
  /* 119bb29e ret  */
  ESPCHK(0x119bb1d0u, _esp0);
  ESP += 4; return;
L_119bb29f:;
  /* 119bb29f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 119bb2a2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119bb2a6 pop edi */
  EDI = (pop32());
  /* 119bb2a7 ret  */
  ESPCHK(0x119bb1d0u, _esp0);
  ESP += 4; return;
L_119bb2a8:;
  /* 119bb2a8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 119bb2aa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119bb2ae pop edi */
  EDI = (pop32());
  /* 119bb2af ret  */
  ESPCHK(0x119bb1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2b0 @ 0x119bb2b0 (243 bytes, 91 insns) */
void f_119bb2b0(void) {
  FTRACE(0x119bb2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bb2b1 mov ebp, esp */
  EBP = (ESP);
  /* 119bb2b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb2b6 push ebx */
  push32((uint32_t)(EBX));
  /* 119bb2b7 push esi */
  push32((uint32_t)(ESI));
  /* 119bb2b8 push edi */
  push32((uint32_t)(EDI));
  /* 119bb2b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 119bb2bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_119bb2bf:;
  /* 119bb2bf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb2c3 jne 0x119bb2e3 */
  if (!C.zf) goto L_119bb2e3;
  /* 119bb2c5 push 0x119e13f0 */
  push32((uint32_t)(0x119e13f0u));
  /* 119bb2ca push 0 */
  push32((uint32_t)(0x0u));
  /* 119bb2cc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 119bb2ce push 0x119e2194 */
  push32((uint32_t)(0x119e2194u));
  /* 119bb2d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 119bb2d5 call 0x119b59b0 */
  push32(0x119bb2dau); f_119b59b0();
  /* 119bb2da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb2dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb2e0 jne 0x119bb2e3 */
  if (!C.zf) goto L_119bb2e3;
  /* 119bb2e2 int3  */
  x86_unimpl("int3 @ 0x119bb2e2");
L_119bb2e3:;
  /* 119bb2e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119bb2e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bb2e7 jne 0x119bb2bf */
  if (!C.zf) goto L_119bb2bf;
L_119bb2e9:;
  /* 119bb2e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb2ed jne 0x119bb30d */
  if (!C.zf) goto L_119bb30d;
  /* 119bb2ef push 0x119e13d4 */
  push32((uint32_t)(0x119e13d4u));
  /* 119bb2f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bb2f6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 119bb2f8 push 0x119e2194 */
  push32((uint32_t)(0x119e2194u));
  /* 119bb2fd push 2 */
  push32((uint32_t)(0x2u));
  /* 119bb2ff call 0x119b59b0 */
  push32(0x119bb304u); f_119b59b0();
  /* 119bb304 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb307 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb30a jne 0x119bb30d */
  if (!C.zf) goto L_119bb30d;
  /* 119bb30c int3  */
  x86_unimpl("int3 @ 0x119bb30c");
L_119bb30d:;
  /* 119bb30d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119bb30f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bb311 jne 0x119bb2e9 */
  if (!C.zf) goto L_119bb2e9;
  /* 119bb313 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb316 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 119bb31d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb320 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bb323 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 119bb326 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb329 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bb32c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119bb32e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb331 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb334 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 119bb337 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119bb33a push ecx */
  push32((uint32_t)(ECX));
  /* 119bb33b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bb33e push edx */
  push32((uint32_t)(EDX));
  /* 119bb33f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb342 push eax */
  push32((uint32_t)(EAX));
  /* 119bb343 call 0x119b62d0 */
  push32(0x119bb348u); f_119b62d0();
  /* 119bb348 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb34b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119bb34e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb351 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bb354 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb357 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb35a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119bb35d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb360 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb364 jl 0x119bb388 */
  if ((C.sf!=C.of)) goto L_119bb388;
  /* 119bb366 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb369 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119bb36b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 119bb36e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119bb370 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bb376 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 119bb379 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb37c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119bb37e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb381 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb384 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119bb386 jmp 0x119bb399 */
  goto L_119bb399;
L_119bb388:;
  /* 119bb388 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bb38b push edx */
  push32((uint32_t)(EDX));
  /* 119bb38c push 0 */
  push32((uint32_t)(0x0u));
  /* 119bb38e call 0x119b6050 */
  push32(0x119bb393u); f_119b6050();
  /* 119bb393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb396 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_119bb399:;
  /* 119bb399 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bb39c pop edi */
  EDI = (pop32());
  /* 119bb39d pop esi */
  ESI = (pop32());
  /* 119bb39e pop ebx */
  EBX = (pop32());
  /* 119bb39f mov esp, ebp */
  ESP = (EBP);
  /* 119bb3a1 pop ebp */
  EBP = (pop32());
  /* 119bb3a2 ret  */
  ESPCHK(0x119bb2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3b0 @ 0x119bb3b0 (47 bytes, 17 insns) */
void f_119bb3b0(void) {
  FTRACE(0x119bb3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb3b0 push ecx */
  push32((uint32_t)(ECX));
  /* 119bb3b1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb3b6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 119bb3ba jb 0x119bb3d0 */
  if (C.cf) goto L_119bb3d0;
L_119bb3bc:;
  /* 119bb3bc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb3c2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb3c7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 119bb3c9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb3ce jae 0x119bb3bc */
  if (!C.cf) goto L_119bb3bc;
L_119bb3d0:;
  /* 119bb3d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb3d2 mov eax, esp */
  EAX = (ESP);
  /* 119bb3d4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 119bb3d6 mov esp, ecx */
  ESP = (ECX);
  /* 119bb3d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119bb3da mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bb3dd push eax */
  push32((uint32_t)(EAX));
  /* 119bb3de ret  */
  ESPCHK(0x119bb3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3e0 @ 0x119bb3e0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_119bb3e0(void) {
  FTRACE(0x119bb3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bb3e1 mov ebp, esp */
  EBP = (ESP);
  /* 119bb3e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb3e6 push esi */
  push32((uint32_t)(ESI));
  /* 119bb3e7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb3eb je 0x119bb3f3 */
  if (C.zf) goto L_119bb3f3;
  /* 119bb3ed cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb3f1 jne 0x119bb3f8 */
  if (!C.zf) goto L_119bb3f8;
L_119bb3f3:;
  /* 119bb3f3 jmp 0x119bb5c8 */
  goto L_119bb5c8;
L_119bb3f8:;
  /* 119bb3f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb3fc je 0x119bb414 */
  if (C.zf) goto L_119bb414;
  /* 119bb3fe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb402 je 0x119bb414 */
  if (C.zf) goto L_119bb414;
  /* 119bb404 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb408 je 0x119bb414 */
  if (C.zf) goto L_119bb414;
  /* 119bb40a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb40e jne 0x119bb4f1 */
  if (!C.zf) goto L_119bb4f1;
L_119bb414:;
  /* 119bb414 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb416 call 0x119bdb80 */
  push32(0x119bb41bu); f_119bdb80();
  /* 119bb41b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb41e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb422 je 0x119bb42a */
  if (C.zf) goto L_119bb42a;
  /* 119bb424 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb428 jne 0x119bb46f */
  if (!C.zf) goto L_119bb46f;
L_119bb42a:;
  /* 119bb42a cmp dword ptr [0x119e7280], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7280))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb431 jne 0x119bb46f */
  if (!C.zf) goto L_119bb46f;
  /* 119bb433 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb435 push 0x119bb610 */
  push32((uint32_t)(0x119bb610u));
  /* 119bb43a call dword ptr [0x119e9370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9370))), 0x119bb440u);
  /* 119bb440 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb443 jne 0x119bb451 */
  if (!C.zf) goto L_119bb451;
  /* 119bb445 mov dword ptr [0x119e7280], 1 */
  w32((uint32_t)(0x119e7280), (0x1u));
  /* 119bb44f jmp 0x119bb46f */
  goto L_119bb46f;
L_119bb451:;
  /* 119bb451 call dword ptr [0x119e9404] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9404))), 0x119bb457u);
  /* 119bb457 mov esi, eax */
  ESI = (EAX);
  /* 119bb459 call 0x119c0c30 */
  push32(0x119bb45eu); f_119c0c30();
  /* 119bb45e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 119bb460 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb462 call 0x119bdc20 */
  push32(0x119bb467u); f_119bdc20();
  /* 119bb467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb46a jmp 0x119bb5c8 */
  goto L_119bb5c8;
L_119bb46f:;
  /* 119bb46f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bb472 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119bb475 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bb478 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb47b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119bb47e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb482 ja 0x119bb4e2 */
  if ((!C.cf&&!C.zf)) goto L_119bb4e2;
  /* 119bb484 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bb487 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119bb489 mov dl, byte ptr [eax + 0x119bb5ef] */
  DL = (r8((uint32_t)(EAX + 0x119bb5ef)));
  /* 119bb48f jmp dword ptr [edx*4 + 0x119bb5db] */
  switch (EDX) {
    case 0: goto L_119bb496;
    case 1: goto L_119bb4d0;
    case 2: goto L_119bb4aa;
    case 3: goto L_119bb4bd;
    case 4: goto L_119bb4e2;
    default: x86_unimpl("switch@0x119bb48f out of table"); return;
  }
L_119bb496:;
  /* 119bb496 mov ecx, dword ptr [0x119e7270] */
  ECX = (r32((uint32_t)(0x119e7270)));
  /* 119bb49c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119bb49f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb4a2 mov dword ptr [0x119e7270], edx */
  w32((uint32_t)(0x119e7270), (EDX));
  /* 119bb4a8 jmp 0x119bb4e2 */
  goto L_119bb4e2;
L_119bb4aa:;
  /* 119bb4aa mov eax, dword ptr [0x119e7274] */
  EAX = (r32((uint32_t)(0x119e7274)));
  /* 119bb4af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bb4b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb4b5 mov dword ptr [0x119e7274], ecx */
  w32((uint32_t)(0x119e7274), (ECX));
  /* 119bb4bb jmp 0x119bb4e2 */
  goto L_119bb4e2;
L_119bb4bd:;
  /* 119bb4bd mov edx, dword ptr [0x119e7278] */
  EDX = (r32((uint32_t)(0x119e7278)));
  /* 119bb4c3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119bb4c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb4c9 mov dword ptr [0x119e7278], eax */
  w32((uint32_t)(0x119e7278), (EAX));
  /* 119bb4ce jmp 0x119bb4e2 */
  goto L_119bb4e2;
L_119bb4d0:;
  /* 119bb4d0 mov ecx, dword ptr [0x119e727c] */
  ECX = (r32((uint32_t)(0x119e727c)));
  /* 119bb4d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119bb4d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb4dc mov dword ptr [0x119e727c], edx */
  w32((uint32_t)(0x119e727c), (EDX));
L_119bb4e2:;
  /* 119bb4e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb4e4 call 0x119bdc20 */
  push32(0x119bb4e9u); f_119bdc20();
  /* 119bb4e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb4ec jmp 0x119bb5c3 */
  goto L_119bb5c3;
L_119bb4f1:;
  /* 119bb4f1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb4f5 je 0x119bb508 */
  if (C.zf) goto L_119bb508;
  /* 119bb4f7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb4fb je 0x119bb508 */
  if (C.zf) goto L_119bb508;
  /* 119bb4fd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb501 je 0x119bb508 */
  if (C.zf) goto L_119bb508;
  /* 119bb503 jmp 0x119bb5c8 */
  goto L_119bb5c8;
L_119bb508:;
  /* 119bb508 call 0x119b7c50 */
  push32(0x119bb50du); f_119b7c50();
  /* 119bb50d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bb510 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb513 cmp dword ptr [eax + 0x50], 0x119e5110 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x119e5110u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb51a jne 0x119bb565 */
  if (!C.zf) goto L_119bb565;
  /* 119bb51c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 119bb521 push 0x119e21a0 */
  push32((uint32_t)(0x119e21a0u));
  /* 119bb526 push 2 */
  push32((uint32_t)(0x2u));
  /* 119bb528 mov ecx, dword ptr [0x119e5190] */
  ECX = (r32((uint32_t)(0x119e5190)));
  /* 119bb52e push ecx */
  push32((uint32_t)(ECX));
  /* 119bb52f call 0x119b8210 */
  push32(0x119bb534u); f_119b8210();
  /* 119bb534 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb537 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb53a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 119bb53d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb540 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb544 je 0x119bb563 */
  if (C.zf) goto L_119bb563;
  /* 119bb546 mov ecx, dword ptr [0x119e5190] */
  ECX = (r32((uint32_t)(0x119e5190)));
  /* 119bb54c push ecx */
  push32((uint32_t)(ECX));
  /* 119bb54d push 0x119e5110 */
  push32((uint32_t)(0x119e5110u));
  /* 119bb552 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb555 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 119bb558 push eax */
  push32((uint32_t)(EAX));
  /* 119bb559 call 0x119c0840 */
  push32(0x119bb55eu); f_119c0840();
  /* 119bb55e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb561 jmp 0x119bb565 */
  goto L_119bb565;
L_119bb563:;
  /* 119bb563 jmp 0x119bb5c8 */
  goto L_119bb5c8;
L_119bb565:;
  /* 119bb565 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb568 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 119bb56b push edx */
  push32((uint32_t)(EDX));
  /* 119bb56c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bb56f push eax */
  push32((uint32_t)(EAX));
  /* 119bb570 call 0x119bb8f0 */
  push32(0x119bb575u); f_119bb8f0();
  /* 119bb575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb578 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bb57b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb57f jne 0x119bb583 */
  if (!C.zf) goto L_119bb583;
  /* 119bb581 jmp 0x119bb5c8 */
  goto L_119bb5c8;
L_119bb583:;
  /* 119bb583 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb586 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119bb589 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119bb58c:;
  /* 119bb58c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb58f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bb592 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb595 jne 0x119bb5c3 */
  if (!C.zf) goto L_119bb5c3;
  /* 119bb597 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb59a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb59d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 119bb5a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb5a3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb5a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119bb5a9 mov edx, dword ptr [0x119e5194] */
  EDX = (r32((uint32_t)(0x119e5194)));
  /* 119bb5af imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bb5b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb5b5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 119bb5b8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb5ba cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb5bd jb 0x119bb5c1 */
  if (C.cf) goto L_119bb5c1;
  /* 119bb5bf jmp 0x119bb5c3 */
  goto L_119bb5c3;
L_119bb5c1:;
  /* 119bb5c1 jmp 0x119bb58c */
  goto L_119bb58c;
L_119bb5c3:;
  /* 119bb5c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bb5c6 jmp 0x119bb5d6 */
  goto L_119bb5d6;
L_119bb5c8:;
  /* 119bb5c8 call 0x119c0c20 */
  push32(0x119bb5cdu); f_119c0c20();
  /* 119bb5cd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 119bb5d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_119bb5d6:;
  /* 119bb5d6 pop esi */
  ESI = (pop32());
  /* 119bb5d7 mov esp, ebp */
  ESP = (EBP);
  /* 119bb5d9 pop ebp */
  EBP = (pop32());
  /* 119bb5da ret  */
  ESPCHK(0x119bb3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b610 @ 0x119bb610 (146 bytes, 45 insns) */
void f_119bb610(void) {
  FTRACE(0x119bb610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb610 push ebp */
  push32((uint32_t)(EBP));
  /* 119bb611 mov ebp, esp */
  EBP = (ESP);
  /* 119bb613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb616 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb618 call 0x119bdb80 */
  push32(0x119bb61du); f_119bdb80();
  /* 119bb61d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb620 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb624 jne 0x119bb63e */
  if (!C.zf) goto L_119bb63e;
  /* 119bb626 mov dword ptr [ebp - 8], 0x119e7270 */
  w32((uint32_t)(EBP + -0x8), (0x119e7270u));
  /* 119bb62d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb630 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119bb632 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119bb635 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 119bb63c jmp 0x119bb654 */
  goto L_119bb654;
L_119bb63e:;
  /* 119bb63e mov dword ptr [ebp - 8], 0x119e7274 */
  w32((uint32_t)(EBP + -0x8), (0x119e7274u));
  /* 119bb645 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb648 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119bb64a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bb64d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_119bb654:;
  /* 119bb654 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb658 jne 0x119bb668 */
  if (!C.zf) goto L_119bb668;
  /* 119bb65a push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb65c call 0x119bdc20 */
  push32(0x119bb661u); f_119bdc20();
  /* 119bb661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bb666 jmp 0x119bb69c */
  goto L_119bb69c;
L_119bb668:;
  /* 119bb668 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb66c je 0x119bb68d */
  if (C.zf) goto L_119bb68d;
  /* 119bb66e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb671 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 119bb677 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb679 call 0x119bdc20 */
  push32(0x119bb67eu); f_119bdc20();
  /* 119bb67e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb681 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb684 push edx */
  push32((uint32_t)(EDX));
  /* 119bb685 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x119bb688u);
  /* 119bb688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb68b jmp 0x119bb697 */
  goto L_119bb697;
L_119bb68d:;
  /* 119bb68d push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb68f call 0x119bdc20 */
  push32(0x119bb694u); f_119bdc20();
  /* 119bb694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bb697:;
  /* 119bb697 mov eax, 1 */
  EAX = (0x1u);
L_119bb69c:;
  /* 119bb69c mov esp, ebp */
  ESP = (EBP);
  /* 119bb69e pop ebp */
  EBP = (pop32());
  /* 119bb69f ret 4 */
  ESPCHK(0x119bb610u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b6b0 @ 0x119bb6b0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_119bb6b0(void) {
  FTRACE(0x119bb6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bb6b1 mov ebp, esp */
  EBP = (ESP);
  /* 119bb6b3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb6b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119bb6bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bb6c0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119bb6c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bb6c6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb6c9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 119bb6cc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb6d0 ja 0x119bb77e */
  if ((!C.cf&&!C.zf)) goto L_119bb77e;
  /* 119bb6d6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bb6d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119bb6db mov dl, byte ptr [eax + 0x119bb8d2] */
  DL = (r8((uint32_t)(EAX + 0x119bb8d2)));
  /* 119bb6e1 jmp dword ptr [edx*4 + 0x119bb8ba] */
  switch (EDX) {
    case 0: goto L_119bb6e8;
    case 1: goto L_119bb753;
    case 2: goto L_119bb739;
    case 3: goto L_119bb705;
    case 4: goto L_119bb71f;
    case 5: goto L_119bb77e;
    default: x86_unimpl("switch@0x119bb6e1 out of table"); return;
  }
L_119bb6e8:;
  /* 119bb6e8 mov dword ptr [ebp - 0x18], 0x119e7270 */
  w32((uint32_t)(EBP + -0x18), (0x119e7270u));
  /* 119bb6ef mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bb6f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bb6f4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119bb6f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bb6fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb6fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bb700 jmp 0x119bb786 */
  goto L_119bb786;
L_119bb705:;
  /* 119bb705 mov dword ptr [ebp - 0x18], 0x119e7274 */
  w32((uint32_t)(EBP + -0x18), (0x119e7274u));
  /* 119bb70c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bb70f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bb711 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119bb714 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bb717 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb71a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bb71d jmp 0x119bb786 */
  goto L_119bb786;
L_119bb71f:;
  /* 119bb71f mov dword ptr [ebp - 0x18], 0x119e7278 */
  w32((uint32_t)(EBP + -0x18), (0x119e7278u));
  /* 119bb726 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bb729 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bb72b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119bb72e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bb731 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb734 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bb737 jmp 0x119bb786 */
  goto L_119bb786;
L_119bb739:;
  /* 119bb739 mov dword ptr [ebp - 0x18], 0x119e727c */
  w32((uint32_t)(EBP + -0x18), (0x119e727cu));
  /* 119bb740 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bb743 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bb745 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119bb748 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bb74b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb74e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bb751 jmp 0x119bb786 */
  goto L_119bb786;
L_119bb753:;
  /* 119bb753 call 0x119b7c50 */
  push32(0x119bb758u); f_119b7c50();
  /* 119bb758 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bb75b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb75e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 119bb761 push edx */
  push32((uint32_t)(EDX));
  /* 119bb762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bb765 push eax */
  push32((uint32_t)(EAX));
  /* 119bb766 call 0x119bb8f0 */
  push32(0x119bb76bu); f_119bb8f0();
  /* 119bb76b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb76e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb771 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bb774 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bb777 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bb779 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119bb77c jmp 0x119bb786 */
  goto L_119bb786;
L_119bb77e:;
  /* 119bb77e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bb781 jmp 0x119bb8b6 */
  goto L_119bb8b6;
L_119bb786:;
  /* 119bb786 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb78a je 0x119bb796 */
  if (C.zf) goto L_119bb796;
  /* 119bb78c push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb78e call 0x119bdb80 */
  push32(0x119bb793u); f_119bdb80();
  /* 119bb793 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bb796:;
  /* 119bb796 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb79a jne 0x119bb7b3 */
  if (!C.zf) goto L_119bb7b3;
  /* 119bb79c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb7a0 je 0x119bb7ac */
  if (C.zf) goto L_119bb7ac;
  /* 119bb7a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb7a4 call 0x119bdc20 */
  push32(0x119bb7a9u); f_119bdc20();
  /* 119bb7a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bb7ac:;
  /* 119bb7ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bb7ae jmp 0x119bb8b6 */
  goto L_119bb8b6;
L_119bb7b3:;
  /* 119bb7b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb7b7 jne 0x119bb7d0 */
  if (!C.zf) goto L_119bb7d0;
  /* 119bb7b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb7bd je 0x119bb7c9 */
  if (C.zf) goto L_119bb7c9;
  /* 119bb7bf push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb7c1 call 0x119bdc20 */
  push32(0x119bb7c6u); f_119bdc20();
  /* 119bb7c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bb7c9:;
  /* 119bb7c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 119bb7cb call 0x119b79d0 */
  push32(0x119bb7d0u); f_119b79d0();
L_119bb7d0:;
  /* 119bb7d0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb7d4 je 0x119bb7e2 */
  if (C.zf) goto L_119bb7e2;
  /* 119bb7d6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb7da je 0x119bb7e2 */
  if (C.zf) goto L_119bb7e2;
  /* 119bb7dc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb7e0 jne 0x119bb80e */
  if (!C.zf) goto L_119bb80e;
L_119bb7e2:;
  /* 119bb7e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb7e5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 119bb7e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119bb7eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb7ee mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 119bb7f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb7f9 jne 0x119bb80e */
  if (!C.zf) goto L_119bb80e;
  /* 119bb7fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb7fe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 119bb801 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119bb804 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb807 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_119bb80e:;
  /* 119bb80e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb812 jne 0x119bb850 */
  if (!C.zf) goto L_119bb850;
  /* 119bb814 mov eax, dword ptr [0x119e5188] */
  EAX = (r32((uint32_t)(0x119e5188)));
  /* 119bb819 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119bb81c jmp 0x119bb827 */
  goto L_119bb827;
L_119bb81e:;
  /* 119bb81e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bb821 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb824 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_119bb827:;
  /* 119bb827 mov edx, dword ptr [0x119e5188] */
  EDX = (r32((uint32_t)(0x119e5188)));
  /* 119bb82d add edx, dword ptr [0x119e518c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119e518c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb833 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb836 jge 0x119bb84e */
  if ((C.sf==C.of)) goto L_119bb84e;
  /* 119bb838 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bb83b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bb83e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb841 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 119bb844 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 119bb84c jmp 0x119bb81e */
  goto L_119bb81e;
L_119bb84e:;
  /* 119bb84e jmp 0x119bb859 */
  goto L_119bb859;
L_119bb850:;
  /* 119bb850 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bb853 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_119bb859:;
  /* 119bb859 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb85d je 0x119bb869 */
  if (C.zf) goto L_119bb869;
  /* 119bb85f push 1 */
  push32((uint32_t)(0x1u));
  /* 119bb861 call 0x119bdc20 */
  push32(0x119bb866u); f_119bdc20();
  /* 119bb866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bb869:;
  /* 119bb869 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb86d jne 0x119bb880 */
  if (!C.zf) goto L_119bb880;
  /* 119bb86f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb872 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 119bb875 push edx */
  push32((uint32_t)(EDX));
  /* 119bb876 push 8 */
  push32((uint32_t)(0x8u));
  /* 119bb878 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x119bb87bu);
  /* 119bb87b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb87e jmp 0x119bb88a */
  goto L_119bb88a;
L_119bb880:;
  /* 119bb880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bb883 push eax */
  push32((uint32_t)(EAX));
  /* 119bb884 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x119bb887u);
  /* 119bb887 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bb88a:;
  /* 119bb88a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb88e je 0x119bb89c */
  if (C.zf) goto L_119bb89c;
  /* 119bb890 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb894 je 0x119bb89c */
  if (C.zf) goto L_119bb89c;
  /* 119bb896 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb89a jne 0x119bb8b4 */
  if (!C.zf) goto L_119bb8b4;
L_119bb89c:;
  /* 119bb89c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb89f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bb8a2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 119bb8a5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb8a9 jne 0x119bb8b4 */
  if (!C.zf) goto L_119bb8b4;
  /* 119bb8ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb8ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb8b1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_119bb8b4:;
  /* 119bb8b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119bb8b6:;
  /* 119bb8b6 mov esp, ebp */
  ESP = (EBP);
  /* 119bb8b8 pop ebp */
  EBP = (pop32());
  /* 119bb8b9 ret  */
  ESPCHK(0x119bb6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8f0 @ 0x119bb8f0 (91 bytes, 35 insns) */
void f_119bb8f0(void) {
  FTRACE(0x119bb8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bb8f1 mov ebp, esp */
  EBP = (ESP);
  /* 119bb8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bb8f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb8f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bb8fa:;
  /* 119bb8fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb8fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bb900 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb903 je 0x119bb923 */
  if (C.zf) goto L_119bb923;
  /* 119bb905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb908 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb90b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bb90e mov ecx, dword ptr [0x119e5194] */
  ECX = (r32((uint32_t)(0x119e5194)));
  /* 119bb914 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bb917 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb91a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb91c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb91f jae 0x119bb923 */
  if (!C.cf) goto L_119bb923;
  /* 119bb921 jmp 0x119bb8fa */
  goto L_119bb8fa;
L_119bb923:;
  /* 119bb923 mov eax, dword ptr [0x119e5194] */
  EAX = (r32((uint32_t)(0x119e5194)));
  /* 119bb928 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bb92b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bb92e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb930 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb933 jae 0x119bb945 */
  if (!C.cf) goto L_119bb945;
  /* 119bb935 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb938 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119bb93b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb93e jne 0x119bb945 */
  if (!C.zf) goto L_119bb945;
  /* 119bb940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bb943 jmp 0x119bb947 */
  goto L_119bb947;
L_119bb945:;
  /* 119bb945 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119bb947:;
  /* 119bb947 mov esp, ebp */
  ESP = (EBP);
  /* 119bb949 pop ebp */
  EBP = (pop32());
  /* 119bb94a ret  */
  ESPCHK(0x119bb8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b950 @ 0x119bb950 (13 bytes, 6 insns) */
void f_119bb950(void) {
  FTRACE(0x119bb950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb950 push ebp */
  push32((uint32_t)(EBP));
  /* 119bb951 mov ebp, esp */
  EBP = (ESP);
  /* 119bb953 call 0x119b7c50 */
  push32(0x119bb958u); f_119b7c50();
  /* 119bb958 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb95b pop ebp */
  EBP = (pop32());
  /* 119bb95c ret  */
  ESPCHK(0x119bb950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b960 @ 0x119bb960 (13 bytes, 6 insns) */
void f_119bb960(void) {
  FTRACE(0x119bb960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb960 push ebp */
  push32((uint32_t)(EBP));
  /* 119bb961 mov ebp, esp */
  EBP = (ESP);
  /* 119bb963 call 0x119b7c50 */
  push32(0x119bb968u); f_119b7c50();
  /* 119bb968 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bb96b pop ebp */
  EBP = (pop32());
  /* 119bb96c ret  */
  ESPCHK(0x119bb960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b970 @ 0x119bb970 (187 bytes, 54 insns) */
void f_119bb970(void) {
  FTRACE(0x119bb970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bb970 push ebp */
  push32((uint32_t)(EBP));
  /* 119bb971 mov ebp, esp */
  EBP = (ESP);
  /* 119bb973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bb976 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bb97d cmp dword ptr [0x119e7284], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7284))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb984 jne 0x119bb9e3 */
  if (!C.zf) goto L_119bb9e3;
  /* 119bb986 push 0x119e14cc */
  push32((uint32_t)(0x119e14ccu));
  /* 119bb98b call dword ptr [0x119e93d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93d0))), 0x119bb991u);
  /* 119bb991 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bb994 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb998 je 0x119bb9b7 */
  if (C.zf) goto L_119bb9b7;
  /* 119bb99a push 0x119e21d0 */
  push32((uint32_t)(0x119e21d0u));
  /* 119bb99f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb9a2 push eax */
  push32((uint32_t)(EAX));
  /* 119bb9a3 call dword ptr [0x119e93cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93cc))), 0x119bb9a9u);
  /* 119bb9a9 mov dword ptr [0x119e7284], eax */
  w32((uint32_t)(0x119e7284), (EAX));
  /* 119bb9ae cmp dword ptr [0x119e7284], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7284))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb9b5 jne 0x119bb9bb */
  if (!C.zf) goto L_119bb9bb;
L_119bb9b7:;
  /* 119bb9b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bb9b9 jmp 0x119bba27 */
  goto L_119bba27;
L_119bb9bb:;
  /* 119bb9bb push 0x119e21c0 */
  push32((uint32_t)(0x119e21c0u));
  /* 119bb9c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bb9c4 call dword ptr [0x119e93cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93cc))), 0x119bb9cau);
  /* 119bb9ca mov dword ptr [0x119e7288], eax */
  w32((uint32_t)(0x119e7288), (EAX));
  /* 119bb9cf push 0x119e21ac */
  push32((uint32_t)(0x119e21acu));
  /* 119bb9d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bb9d7 push edx */
  push32((uint32_t)(EDX));
  /* 119bb9d8 call dword ptr [0x119e93cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93cc))), 0x119bb9deu);
  /* 119bb9de mov dword ptr [0x119e728c], eax */
  w32((uint32_t)(0x119e728c), (EAX));
L_119bb9e3:;
  /* 119bb9e3 cmp dword ptr [0x119e7288], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7288))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb9ea je 0x119bb9f5 */
  if (C.zf) goto L_119bb9f5;
  /* 119bb9ec call dword ptr [0x119e7288] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7288))), 0x119bb9f2u);
  /* 119bb9f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bb9f5:;
  /* 119bb9f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bb9f9 je 0x119bba11 */
  if (C.zf) goto L_119bba11;
  /* 119bb9fb cmp dword ptr [0x119e728c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e728c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bba02 je 0x119bba11 */
  if (C.zf) goto L_119bba11;
  /* 119bba04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bba07 push eax */
  push32((uint32_t)(EAX));
  /* 119bba08 call dword ptr [0x119e728c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e728c))), 0x119bba0eu);
  /* 119bba0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bba11:;
  /* 119bba11 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bba14 push ecx */
  push32((uint32_t)(ECX));
  /* 119bba15 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bba18 push edx */
  push32((uint32_t)(EDX));
  /* 119bba19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bba1c push eax */
  push32((uint32_t)(EAX));
  /* 119bba1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bba20 push ecx */
  push32((uint32_t)(ECX));
  /* 119bba21 call dword ptr [0x119e7284] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7284))), 0x119bba27u);
L_119bba27:;
  /* 119bba27 mov esp, ebp */
  ESP = (EBP);
  /* 119bba29 pop ebp */
  EBP = (pop32());
  /* 119bba2a ret  */
  ESPCHK(0x119bb970u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x119bba30 (254 bytes, 109 insns) */
void f_119bba30(void) {
  FTRACE(0x119bba30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bba30 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 119bba34 push edi */
  push32((uint32_t)(EDI));
  /* 119bba35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bba37 je 0x119bbab3 */
  if (C.zf) goto L_119bbab3;
  /* 119bba39 push esi */
  push32((uint32_t)(ESI));
  /* 119bba3a push ebx */
  push32((uint32_t)(EBX));
  /* 119bba3b mov ebx, ecx */
  EBX = (ECX);
  /* 119bba3d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 119bba41 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 119bba47 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 119bba4b jne 0x119bba54 */
  if (!C.zf) goto L_119bba54;
  /* 119bba4d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bba50 jne 0x119bbac1 */
  if (!C.zf) goto L_119bbac1;
  /* 119bba52 jmp 0x119bba75 */
  goto L_119bba75;
L_119bba54:;
  /* 119bba54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119bba56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119bba57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bba59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119bba5a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119bba5b je 0x119bba82 */
  if (C.zf) goto L_119bba82;
  /* 119bba5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119bba5f je 0x119bba8a */
  if (C.zf) goto L_119bba8a;
  /* 119bba61 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 119bba67 jne 0x119bba54 */
  if (!C.zf) goto L_119bba54;
  /* 119bba69 mov ebx, ecx */
  EBX = (ECX);
  /* 119bba6b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bba6e jne 0x119bbac1 */
  if (!C.zf) goto L_119bbac1;
L_119bba70:;
  /* 119bba70 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 119bba73 je 0x119bba82 */
  if (C.zf) goto L_119bba82;
L_119bba75:;
  /* 119bba75 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119bba77 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119bba78 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bba7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119bba7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119bba7d je 0x119bbaae */
  if (C.zf) goto L_119bbaae;
  /* 119bba7f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 119bba80 jne 0x119bba75 */
  if (!C.zf) goto L_119bba75;
L_119bba82:;
  /* 119bba82 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 119bba86 pop ebx */
  EBX = (pop32());
  /* 119bba87 pop esi */
  ESI = (pop32());
  /* 119bba88 pop edi */
  EDI = (pop32());
  /* 119bba89 ret  */
  ESPCHK(0x119bba30u, _esp0);
  ESP += 4; return;
L_119bba8a:;
  /* 119bba8a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119bba90 je 0x119bbaa4 */
  if (C.zf) goto L_119bbaa4;
L_119bba92:;
  /* 119bba92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bba94 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119bba95 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119bba96 je 0x119bbb26 */
  if (C.zf) goto L_119bbb26;
  /* 119bba9c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119bbaa2 jne 0x119bba92 */
  if (!C.zf) goto L_119bba92;
L_119bbaa4:;
  /* 119bbaa4 mov ebx, ecx */
  EBX = (ECX);
  /* 119bbaa6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bbaa9 jne 0x119bbb17 */
  if (!C.zf) goto L_119bbb17;
L_119bbaab:;
  /* 119bbaab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bbaad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_119bbaae:;
  /* 119bbaae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 119bbaaf jne 0x119bbaab */
  if (!C.zf) goto L_119bbaab;
  /* 119bbab1 pop ebx */
  EBX = (pop32());
  /* 119bbab2 pop esi */
  ESI = (pop32());
L_119bbab3:;
  /* 119bbab3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119bbab7 pop edi */
  EDI = (pop32());
  /* 119bbab8 ret  */
  ESPCHK(0x119bba30u, _esp0);
  ESP += 4; return;
L_119bbab9:;
  /* 119bbab9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119bbabb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbabe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119bbabf je 0x119bba70 */
  if (C.zf) goto L_119bba70;
L_119bbac1:;
  /* 119bbac1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 119bbac6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 119bbac8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbaca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bbacd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bbacf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 119bbad1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbad4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119bbad9 je 0x119bbab9 */
  if (C.zf) goto L_119bbab9;
  /* 119bbadb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119bbadd je 0x119bbb0b */
  if (C.zf) goto L_119bbb0b;
  /* 119bbadf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 119bbae1 je 0x119bbb01 */
  if (C.zf) goto L_119bbb01;
  /* 119bbae3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 119bbae9 je 0x119bbaf7 */
  if (C.zf) goto L_119bbaf7;
  /* 119bbaeb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 119bbaf1 jne 0x119bbab9 */
  if (!C.zf) goto L_119bbab9;
  /* 119bbaf3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119bbaf5 jmp 0x119bbb0f */
  goto L_119bbb0f;
L_119bbaf7:;
  /* 119bbaf7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bbafd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119bbaff jmp 0x119bbb0f */
  goto L_119bbb0f;
L_119bbb01:;
  /* 119bbb01 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bbb07 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119bbb09 jmp 0x119bbb0f */
  goto L_119bbb0f;
L_119bbb0b:;
  /* 119bbb0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119bbb0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_119bbb0f:;
  /* 119bbb0f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbb12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bbb14 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119bbb15 je 0x119bbb21 */
  if (C.zf) goto L_119bbb21;
L_119bbb17:;
  /* 119bbb17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119bbb19:;
  /* 119bbb19 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 119bbb1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbb1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119bbb1f jne 0x119bbb19 */
  if (!C.zf) goto L_119bbb19;
L_119bbb21:;
  /* 119bbb21 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 119bbb24 jne 0x119bbaab */
  if (!C.zf) goto L_119bbaab;
L_119bbb26:;
  /* 119bbb26 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 119bbb2a pop ebx */
  EBX = (pop32());
  /* 119bbb2b pop esi */
  ESI = (pop32());
  /* 119bbb2c pop edi */
  EDI = (pop32());
  /* 119bbb2d ret  */
  ESPCHK(0x119bba30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb30 @ 0x119bbb30 (130 bytes, 43 insns) */
void f_119bbb30(void) {
  FTRACE(0x119bbb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bbb30 push ebp */
  push32((uint32_t)(EBP));
  /* 119bbb31 mov ebp, esp */
  EBP = (ESP);
  /* 119bbb33 push ecx */
  push32((uint32_t)(ECX));
  /* 119bbb34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbb37 cmp eax, dword ptr [0x119e8c1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e8c1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbb3d jae 0x119bbb61 */
  if (!C.cf) goto L_119bbb61;
  /* 119bbb3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbb42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119bbb45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbb48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bbb4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bbb4e mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119bbb55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119bbb5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119bbb5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bbb5f jne 0x119bbb7c */
  if (!C.zf) goto L_119bbb7c;
L_119bbb61:;
  /* 119bbb61 call 0x119c0c20 */
  push32(0x119bbb66u); f_119c0c20();
  /* 119bbb66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119bbb6c call 0x119c0c30 */
  push32(0x119bbb71u); f_119c0c30();
  /* 119bbb71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119bbb77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bbb7a jmp 0x119bbbae */
  goto L_119bbbae;
L_119bbb7c:;
  /* 119bbb7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbb7f push edx */
  push32((uint32_t)(EDX));
  /* 119bbb80 call 0x119c1150 */
  push32(0x119bbb85u); f_119c1150();
  /* 119bbb85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbb88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bbb8b push eax */
  push32((uint32_t)(EAX));
  /* 119bbb8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bbb8f push ecx */
  push32((uint32_t)(ECX));
  /* 119bbb90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbb93 push edx */
  push32((uint32_t)(EDX));
  /* 119bbb94 call 0x119bbbc0 */
  push32(0x119bbb99u); f_119bbbc0();
  /* 119bbb99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbb9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bbb9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbba2 push eax */
  push32((uint32_t)(EAX));
  /* 119bbba3 call 0x119c11e0 */
  push32(0x119bbba8u); f_119c11e0();
  /* 119bbba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbbab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119bbbae:;
  /* 119bbbae mov esp, ebp */
  ESP = (EBP);
  /* 119bbbb0 pop ebp */
  EBP = (pop32());
  /* 119bbbb1 ret  */
  ESPCHK(0x119bbb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbc0 @ 0x119bbbc0 (178 bytes, 56 insns) */
void f_119bbbc0(void) {
  FTRACE(0x119bbbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bbbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bbbc1 mov ebp, esp */
  EBP = (ESP);
  /* 119bbbc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bbbc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbbc9 push eax */
  push32((uint32_t)(EAX));
  /* 119bbbca call 0x119c0fd0 */
  push32(0x119bbbcfu); f_119c0fd0();
  /* 119bbbcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbbd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bbbd5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbbd9 jne 0x119bbbee */
  if (!C.zf) goto L_119bbbee;
  /* 119bbbdb call 0x119c0c20 */
  push32(0x119bbbe0u); f_119c0c20();
  /* 119bbbe0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119bbbe6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bbbe9 jmp 0x119bbc6e */
  goto L_119bbc6e;
L_119bbbee:;
  /* 119bbbee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bbbf1 push ecx */
  push32((uint32_t)(ECX));
  /* 119bbbf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bbbf4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bbbf7 push edx */
  push32((uint32_t)(EDX));
  /* 119bbbf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bbbfb push eax */
  push32((uint32_t)(EAX));
  /* 119bbbfc call dword ptr [0x119e936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e936c))), 0x119bbc02u);
  /* 119bbc02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bbc05 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbc09 jne 0x119bbc16 */
  if (!C.zf) goto L_119bbc16;
  /* 119bbc0b call dword ptr [0x119e9404] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9404))), 0x119bbc11u);
  /* 119bbc11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bbc14 jmp 0x119bbc1d */
  goto L_119bbc1d;
L_119bbc16:;
  /* 119bbc16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119bbc1d:;
  /* 119bbc1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbc21 je 0x119bbc34 */
  if (C.zf) goto L_119bbc34;
  /* 119bbc23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bbc26 push ecx */
  push32((uint32_t)(ECX));
  /* 119bbc27 call 0x119c0b80 */
  push32(0x119bbc2cu); f_119c0b80();
  /* 119bbc2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbc2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bbc32 jmp 0x119bbc6e */
  goto L_119bbc6e;
L_119bbc34:;
  /* 119bbc34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbc37 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 119bbc3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbc3d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 119bbc40 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bbc43 mov ecx, dword ptr [edx*4 + 0x119e8ae0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x119e8ae0)));
  /* 119bbc4a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 119bbc4e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 119bbc51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbc54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bbc57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbc5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119bbc5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bbc60 mov eax, dword ptr [eax*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119bbc67 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 119bbc6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_119bbc6e:;
  /* 119bbc6e mov esp, ebp */
  ESP = (EBP);
  /* 119bbc70 pop ebp */
  EBP = (pop32());
  /* 119bbc71 ret  */
  ESPCHK(0x119bbbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc80 @ 0x119bbc80 (130 bytes, 43 insns) */
void f_119bbc80(void) {
  FTRACE(0x119bbc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bbc80 push ebp */
  push32((uint32_t)(EBP));
  /* 119bbc81 mov ebp, esp */
  EBP = (ESP);
  /* 119bbc83 push ecx */
  push32((uint32_t)(ECX));
  /* 119bbc84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbc87 cmp eax, dword ptr [0x119e8c1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e8c1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbc8d jae 0x119bbcb1 */
  if (!C.cf) goto L_119bbcb1;
  /* 119bbc8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbc92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119bbc95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbc98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bbc9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bbc9e mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119bbca5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119bbcaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119bbcad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bbcaf jne 0x119bbccc */
  if (!C.zf) goto L_119bbccc;
L_119bbcb1:;
  /* 119bbcb1 call 0x119c0c20 */
  push32(0x119bbcb6u); f_119c0c20();
  /* 119bbcb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119bbcbc call 0x119c0c30 */
  push32(0x119bbcc1u); f_119c0c30();
  /* 119bbcc1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119bbcc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bbcca jmp 0x119bbcfe */
  goto L_119bbcfe;
L_119bbccc:;
  /* 119bbccc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbccf push edx */
  push32((uint32_t)(EDX));
  /* 119bbcd0 call 0x119c1150 */
  push32(0x119bbcd5u); f_119c1150();
  /* 119bbcd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbcd8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bbcdb push eax */
  push32((uint32_t)(EAX));
  /* 119bbcdc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bbcdf push ecx */
  push32((uint32_t)(ECX));
  /* 119bbce0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbce3 push edx */
  push32((uint32_t)(EDX));
  /* 119bbce4 call 0x119bbd10 */
  push32(0x119bbce9u); f_119bbd10();
  /* 119bbce9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbcec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bbcef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbcf2 push eax */
  push32((uint32_t)(EAX));
  /* 119bbcf3 call 0x119c11e0 */
  push32(0x119bbcf8u); f_119c11e0();
  /* 119bbcf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbcfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119bbcfe:;
  /* 119bbcfe mov esp, ebp */
  ESP = (EBP);
  /* 119bbd00 pop ebp */
  EBP = (pop32());
  /* 119bbd01 ret  */
  ESPCHK(0x119bbc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd10 @ 0x119bbd10 (627 bytes, 182 insns) */
void f_119bbd10(void) {
  FTRACE(0x119bbd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bbd10 push ebp */
  push32((uint32_t)(EBP));
  /* 119bbd11 mov ebp, esp */
  EBP = (ESP);
  /* 119bbd13 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bbd19 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119bbd20 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bbd23 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 119bbd29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbd2d jne 0x119bbd36 */
  if (!C.zf) goto L_119bbd36;
  /* 119bbd2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bbd31 jmp 0x119bbf7f */
  goto L_119bbf7f;
L_119bbd36:;
  /* 119bbd36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbd39 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119bbd3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbd3f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bbd42 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bbd45 mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119bbd4c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119bbd51 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 119bbd54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bbd56 je 0x119bbd68 */
  if (C.zf) goto L_119bbd68;
  /* 119bbd58 push 2 */
  push32((uint32_t)(0x2u));
  /* 119bbd5a push 0 */
  push32((uint32_t)(0x0u));
  /* 119bbd5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbd5f push edx */
  push32((uint32_t)(EDX));
  /* 119bbd60 call 0x119bbbc0 */
  push32(0x119bbd65u); f_119bbbc0();
  /* 119bbd65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bbd68:;
  /* 119bbd68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbd6b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bbd6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbd71 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119bbd74 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bbd77 mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119bbd7e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 119bbd83 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 119bbd88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bbd8a je 0x119bbe9c */
  if (C.zf) goto L_119bbe9c;
  /* 119bbd90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bbd93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bbd96 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_119bbd9d:;
  /* 119bbd9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bbda0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bbda3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbda6 jae 0x119bbe9a */
  if (!C.cf) goto L_119bbe9a;
  /* 119bbdac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 119bbdb2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119bbdb5:;
  /* 119bbdb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bbdb8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 119bbdbe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bbdc0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbdc6 jge 0x119bbe27 */
  if ((C.sf==C.of)) goto L_119bbe27;
  /* 119bbdc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bbdcb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bbdce cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbdd1 jae 0x119bbe27 */
  if (!C.cf) goto L_119bbe27;
  /* 119bbdd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bbdd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119bbdd8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 119bbdde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bbde1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbde4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bbde7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 119bbdee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbdf1 jne 0x119bbe11 */
  if (!C.zf) goto L_119bbe11;
  /* 119bbdf3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 119bbdf9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbdfc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 119bbe02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bbe05 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 119bbe08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bbe0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbe0e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119bbe11:;
  /* 119bbe11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bbe14 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 119bbe1a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 119bbe1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bbe1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbe22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119bbe25 jmp 0x119bbdb5 */
  goto L_119bbdb5;
L_119bbe27:;
  /* 119bbe27 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bbe29 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 119bbe2f push edx */
  push32((uint32_t)(EDX));
  /* 119bbe30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bbe33 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 119bbe39 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bbe3b push eax */
  push32((uint32_t)(EAX));
  /* 119bbe3c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 119bbe42 push edx */
  push32((uint32_t)(EDX));
  /* 119bbe43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbe46 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bbe49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbe4c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119bbe4f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bbe52 mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119bbe59 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 119bbe5c push eax */
  push32((uint32_t)(EAX));
  /* 119bbe5d call dword ptr [0x119e93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c0))), 0x119bbe63u);
  /* 119bbe63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bbe65 je 0x119bbe8a */
  if (C.zf) goto L_119bbe8a;
  /* 119bbe67 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bbe6a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbe70 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119bbe73 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bbe76 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 119bbe7c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bbe7e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbe84 jge 0x119bbe88 */
  if ((C.sf==C.of)) goto L_119bbe88;
  /* 119bbe86 jmp 0x119bbe9a */
  goto L_119bbe9a;
L_119bbe88:;
  /* 119bbe88 jmp 0x119bbe95 */
  goto L_119bbe95;
L_119bbe8a:;
  /* 119bbe8a call dword ptr [0x119e9404] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9404))), 0x119bbe90u);
  /* 119bbe90 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bbe93 jmp 0x119bbe9a */
  goto L_119bbe9a;
L_119bbe95:;
  /* 119bbe95 jmp 0x119bbd9d */
  goto L_119bbd9d;
L_119bbe9a:;
  /* 119bbe9a jmp 0x119bbeec */
  goto L_119bbeec;
L_119bbe9c:;
  /* 119bbe9c push 0 */
  push32((uint32_t)(0x0u));
  /* 119bbe9e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 119bbea4 push ecx */
  push32((uint32_t)(ECX));
  /* 119bbea5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bbea8 push edx */
  push32((uint32_t)(EDX));
  /* 119bbea9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bbeac push eax */
  push32((uint32_t)(EAX));
  /* 119bbead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbeb0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119bbeb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbeb6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bbeb9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bbebc mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119bbec3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 119bbec6 push ecx */
  push32((uint32_t)(ECX));
  /* 119bbec7 call dword ptr [0x119e93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c0))), 0x119bbecdu);
  /* 119bbecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bbecf je 0x119bbee3 */
  if (C.zf) goto L_119bbee3;
  /* 119bbed1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119bbed8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 119bbede mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119bbee1 jmp 0x119bbeec */
  goto L_119bbeec;
L_119bbee3:;
  /* 119bbee3 call dword ptr [0x119e9404] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9404))), 0x119bbee9u);
  /* 119bbee9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119bbeec:;
  /* 119bbeec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbef0 jne 0x119bbf76 */
  if (!C.zf) goto L_119bbf76;
  /* 119bbef6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbefa je 0x119bbf2a */
  if (C.zf) goto L_119bbf2a;
  /* 119bbefc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbf00 jne 0x119bbf19 */
  if (!C.zf) goto L_119bbf19;
  /* 119bbf02 call 0x119c0c20 */
  push32(0x119bbf07u); f_119c0c20();
  /* 119bbf07 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119bbf0d call 0x119c0c30 */
  push32(0x119bbf12u); f_119c0c30();
  /* 119bbf12 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bbf15 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119bbf17 jmp 0x119bbf25 */
  goto L_119bbf25;
L_119bbf19:;
  /* 119bbf19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bbf1c push edx */
  push32((uint32_t)(EDX));
  /* 119bbf1d call 0x119c0b80 */
  push32(0x119bbf22u); f_119c0b80();
  /* 119bbf22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bbf25:;
  /* 119bbf25 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bbf28 jmp 0x119bbf7f */
  goto L_119bbf7f;
L_119bbf2a:;
  /* 119bbf2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbf2d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bbf30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbf33 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119bbf36 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bbf39 mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119bbf40 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 119bbf45 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 119bbf48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bbf4a je 0x119bbf5b */
  if (C.zf) goto L_119bbf5b;
  /* 119bbf4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bbf4f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119bbf52 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbf55 jne 0x119bbf5b */
  if (!C.zf) goto L_119bbf5b;
  /* 119bbf57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bbf59 jmp 0x119bbf7f */
  goto L_119bbf7f;
L_119bbf5b:;
  /* 119bbf5b call 0x119c0c20 */
  push32(0x119bbf60u); f_119c0c20();
  /* 119bbf60 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 119bbf66 call 0x119c0c30 */
  push32(0x119bbf6bu); f_119c0c30();
  /* 119bbf6b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119bbf71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bbf74 jmp 0x119bbf7f */
  goto L_119bbf7f;
L_119bbf76:;
  /* 119bbf76 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bbf79 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_119bbf7f:;
  /* 119bbf7f mov esp, ebp */
  ESP = (EBP);
  /* 119bbf81 pop ebp */
  EBP = (pop32());
  /* 119bbf82 ret  */
  ESPCHK(0x119bbd10u, _esp0);
  ESP += 4; return;
}

