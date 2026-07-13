#include "recomp.h"

/* FUN_100095f0 @ 0x11d495f0 (10 bytes, 5 insns) */
void f_11d495f0(void) {
  FTRACE(0x11d495f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d495f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d495f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d495f3 mov eax, dword ptr [0x11d6fc94] */
  EAX = (r32((uint32_t)(0x11d6fc94)));
  /* 11d495f8 pop ebp */
  EBP = (pop32());
  /* 11d495f9 ret  */
  ESPCHK(0x11d495f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009600 @ 0x11d49600 (31 bytes, 11 insns) */
void f_11d49600(void) {
  FTRACE(0x11d49600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49600 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49601 mov ebp, esp */
  EBP = (ESP);
  /* 11d49603 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4960a jbe 0x11d49610 */
  if ((C.cf||C.zf)) goto L_11d49610;
  /* 11d4960c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4960e jmp 0x11d4961d */
  goto L_11d4961d;
L_11d49610:;
  /* 11d49610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49613 mov dword ptr [0x11d6fc94], eax */
  w32((uint32_t)(0x11d6fc94), (EAX));
  /* 11d49618 mov eax, 1 */
  EAX = (0x1u);
L_11d4961d:;
  /* 11d4961d pop ebp */
  EBP = (pop32());
  /* 11d4961e ret  */
  ESPCHK(0x11d49600u, _esp0);
  ESP += 4; return;
}

/* FUN_10009620 @ 0x11d49620 (89 bytes, 20 insns) */
void f_11d49620(void) {
  FTRACE(0x11d49620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49620 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49621 mov ebp, esp */
  EBP = (ESP);
  /* 11d49623 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11d49628 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4962a mov eax, dword ptr [0x11d72fec] */
  EAX = (r32((uint32_t)(0x11d72fec)));
  /* 11d4962f push eax */
  push32((uint32_t)(EAX));
  /* 11d49630 call dword ptr [0x11d74350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74350))), 0x11d49636u);
  /* 11d49636 mov dword ptr [0x11d72fe8], eax */
  w32((uint32_t)(0x11d72fe8), (EAX));
  /* 11d4963b cmp dword ptr [0x11d72fe8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d72fe8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49642 jne 0x11d49648 */
  if (!C.zf) goto L_11d49648;
  /* 11d49644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d49646 jmp 0x11d49677 */
  goto L_11d49677;
L_11d49648:;
  /* 11d49648 mov ecx, dword ptr [0x11d72fe8] */
  ECX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d4964e mov dword ptr [0x11d72fdc], ecx */
  w32((uint32_t)(0x11d72fdc), (ECX));
  /* 11d49654 mov dword ptr [0x11d72fe0], 0 */
  w32((uint32_t)(0x11d72fe0), (0x0u));
  /* 11d4965e mov dword ptr [0x11d72fe4], 0 */
  w32((uint32_t)(0x11d72fe4), (0x0u));
  /* 11d49668 mov dword ptr [0x11d72fc8], 0x10 */
  w32((uint32_t)(0x11d72fc8), (0x10u));
  /* 11d49672 mov eax, 1 */
  EAX = (0x1u);
L_11d49677:;
  /* 11d49677 pop ebp */
  EBP = (pop32());
  /* 11d49678 ret  */
  ESPCHK(0x11d49620u, _esp0);
  ESP += 4; return;
}

/* FUN_10009680 @ 0x11d49680 (85 bytes, 29 insns) */
void f_11d49680(void) {
  FTRACE(0x11d49680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49680 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49681 mov ebp, esp */
  EBP = (ESP);
  /* 11d49683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49686 mov eax, dword ptr [0x11d72fe4] */
  EAX = (r32((uint32_t)(0x11d72fe4)));
  /* 11d4968b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4968e mov ecx, dword ptr [0x11d72fe8] */
  ECX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d49694 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49696 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d49699 mov edx, dword ptr [0x11d72fe8] */
  EDX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d4969f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d496a2:;
  /* 11d496a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d496a5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d496a8 jae 0x11d496cf */
  if (!C.cf) goto L_11d496cf;
  /* 11d496aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d496ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d496b0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d496b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d496b6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d496bd jae 0x11d496c4 */
  if (!C.cf) goto L_11d496c4;
  /* 11d496bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d496c2 jmp 0x11d496d1 */
  goto L_11d496d1;
L_11d496c4:;
  /* 11d496c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d496c7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d496ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d496cd jmp 0x11d496a2 */
  goto L_11d496a2;
L_11d496cf:;
  /* 11d496cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d496d1:;
  /* 11d496d1 mov esp, ebp */
  ESP = (EBP);
  /* 11d496d3 pop ebp */
  EBP = (pop32());
  /* 11d496d4 ret  */
  ESPCHK(0x11d49680u, _esp0);
  ESP += 4; return;
}

/* FUN_100096e0 @ 0x11d496e0 (95 bytes, 33 insns) */
void f_11d496e0(void) {
  FTRACE(0x11d496e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d496e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d496e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d496e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d496e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d496e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d496ec sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d496ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d496f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d496f5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11d496f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d496fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d49700 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49703 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d49705 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49708 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d4970b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4970d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4970f jne 0x11d49731 */
  if (!C.zf) goto L_11d49731;
  /* 11d49711 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d49714 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11d49717 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d49719 jne 0x11d49731 */
  if (!C.zf) goto L_11d49731;
  /* 11d4971b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4971e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d49724 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d49726 je 0x11d49731 */
  if (C.zf) goto L_11d49731;
  /* 11d49728 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11d4972f jmp 0x11d49738 */
  goto L_11d49738;
L_11d49731:;
  /* 11d49731 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11d49738:;
  /* 11d49738 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4973b mov esp, ebp */
  ESP = (EBP);
  /* 11d4973d pop ebp */
  EBP = (pop32());
  /* 11d4973e ret  */
  ESPCHK(0x11d496e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009740 @ 0x11d49740 (1485 bytes, 453 insns) */
void f_11d49740(void) {
  FTRACE(0x11d49740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49740 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49741 mov ebp, esp */
  EBP = (ESP);
  /* 11d49743 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49749 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d4974c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11d4974f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49752 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d49755 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49758 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d4975b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4975e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11d49761 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d49764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49767 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4976d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49770 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11d49777 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d4977a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4977d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49780 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d49783 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49786 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d49788 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4978b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11d4978e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49791 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49794 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11d49797 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4979a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4979c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d4979f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d497a2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11d497a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d497a8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d497ab and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d497ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d497b0 jne 0x11d498d8 */
  if (!C.zf) goto L_11d498d8;
  /* 11d497b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d497b9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d497bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d497bf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d497c2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d497c6 jbe 0x11d497cf */
  if ((C.cf||C.zf)) goto L_11d497cf;
  /* 11d497c8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11d497cf:;
  /* 11d497cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d497d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d497d5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d497d8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d497db jne 0x11d498b1 */
  if (!C.zf) goto L_11d498b1;
  /* 11d497e1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d497e5 jae 0x11d49846 */
  if (!C.cf) goto L_11d49846;
  /* 11d497e7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d497ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d497ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d497f1 not eax */
  EAX = (~(EAX));
  /* 11d497f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d497f6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d497f9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11d497fd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d497ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49802 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49805 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11d49809 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d4980c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4980f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11d49812 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d49815 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49818 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4981b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11d4981e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49821 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49824 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d49828 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4982a jne 0x11d49844 */
  if (!C.zf) goto L_11d49844;
  /* 11d4982c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d49831 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d49834 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d49836 not eax */
  EAX = (~(EAX));
  /* 11d49838 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4983b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4983d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4983f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49842 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d49844:;
  /* 11d49844 jmp 0x11d498b1 */
  goto L_11d498b1;
L_11d49846:;
  /* 11d49846 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d49849 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4984c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d49851 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d49853 not edx */
  EDX = (~(EDX));
  /* 11d49855 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49858 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d4985b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11d49862 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d49864 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49867 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d4986a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11d49871 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49874 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49877 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d4987a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d4987d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49880 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49883 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11d49886 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49889 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4988c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d49890 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d49892 jne 0x11d498b1 */
  if (!C.zf) goto L_11d498b1;
  /* 11d49894 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d49897 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4989a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4989f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d498a1 not edx */
  EDX = (~(EDX));
  /* 11d498a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d498a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d498a9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d498ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d498ae mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11d498b1:;
  /* 11d498b1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d498b4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d498b7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d498ba mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d498bd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d498c0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d498c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d498c6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d498c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d498cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d498cf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d498d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d498d5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11d498d8:;
  /* 11d498d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d498db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d498de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d498e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d498e4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d498e8 jbe 0x11d498f1 */
  if ((C.cf||C.zf)) goto L_11d498f1;
  /* 11d498ea mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11d498f1:;
  /* 11d498f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d498f4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d498f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d498f9 jne 0x11d49a55 */
  if (!C.zf) goto L_11d49a55;
  /* 11d498ff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49902 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49905 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11d49908 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4990b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d4990e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49911 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11d49914 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49918 jbe 0x11d49921 */
  if ((C.cf||C.zf)) goto L_11d49921;
  /* 11d4991a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11d49921:;
  /* 11d49921 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49924 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49927 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11d4992a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4992d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d49930 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49933 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11d49936 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4993a jbe 0x11d49943 */
  if ((C.cf||C.zf)) goto L_11d49943;
  /* 11d4993c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11d49943:;
  /* 11d49943 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d49946 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49949 je 0x11d49a4f */
  if (C.zf) goto L_11d49a4f;
  /* 11d4994f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49952 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49955 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d49958 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4995b jne 0x11d49a31 */
  if (!C.zf) goto L_11d49a31;
  /* 11d49961 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49965 jae 0x11d499c6 */
  if (!C.cf) goto L_11d499c6;
  /* 11d49967 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4996c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4996f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d49971 not edx */
  EDX = (~(EDX));
  /* 11d49973 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49976 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49979 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11d4997d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4997f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49982 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49985 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11d49989 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d4998c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4998f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d49992 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d49995 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49998 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4999b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11d4999e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d499a1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d499a4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d499a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d499aa jne 0x11d499c4 */
  if (!C.zf) goto L_11d499c4;
  /* 11d499ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d499b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d499b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d499b6 not edx */
  EDX = (~(EDX));
  /* 11d499b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d499bb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d499bd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d499bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d499c2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d499c4:;
  /* 11d499c4 jmp 0x11d49a31 */
  goto L_11d49a31;
L_11d499c6:;
  /* 11d499c6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d499c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d499cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d499d1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d499d3 not eax */
  EAX = (~(EAX));
  /* 11d499d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d499d8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d499db mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11d499e2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d499e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d499e7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d499ea mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11d499f1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d499f4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d499f7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11d499fa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d499fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49a00 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49a03 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11d49a06 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49a09 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49a0c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d49a10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d49a12 jne 0x11d49a31 */
  if (!C.zf) goto L_11d49a31;
  /* 11d49a14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d49a17 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49a1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d49a1f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d49a21 not eax */
  EAX = (~(EAX));
  /* 11d49a23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49a26 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d49a29 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d49a2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49a2e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d49a31:;
  /* 11d49a31 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49a34 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d49a37 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49a3a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d49a3d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d49a40 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49a43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d49a46 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49a49 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d49a4c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11d49a4f:;
  /* 11d49a4f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49a52 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11d49a55:;
  /* 11d49a55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d49a58 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d49a5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d49a5d jne 0x11d49a6b */
  if (!C.zf) goto L_11d49a6b;
  /* 11d49a5f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d49a62 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49a65 je 0x11d49b7b */
  if (C.zf) goto L_11d49b7b;
L_11d49a6b:;
  /* 11d49a6b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d49a6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d49a71 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11d49a74 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d49a77 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49a7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d49a7d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d49a80 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d49a83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49a86 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d49a89 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11d49a8c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d49a8f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49a92 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11d49a95 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49a98 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d49a9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49a9e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d49aa1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49aa4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49aa7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d49aaa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49aad jne 0x11d49b7b */
  if (!C.zf) goto L_11d49b7b;
  /* 11d49ab3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49ab7 jae 0x11d49b14 */
  if (!C.cf) goto L_11d49b14;
  /* 11d49ab9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49abc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49abf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d49ac3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49ac6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49ac9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d49acc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d49acf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49ad2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49ad5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11d49ad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d49ada jne 0x11d49af2 */
  if (!C.zf) goto L_11d49af2;
  /* 11d49adc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d49ae1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d49ae4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d49ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49ae9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d49aeb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d49aed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49af0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d49af2:;
  /* 11d49af2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d49af7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d49afa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d49afc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49aff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49b02 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11d49b06 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d49b08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49b0b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49b0e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11d49b12 jmp 0x11d49b7b */
  goto L_11d49b7b;
L_11d49b14:;
  /* 11d49b14 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49b17 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49b1a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d49b1e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49b21 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49b24 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d49b27 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d49b2a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49b2d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49b30 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11d49b33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d49b35 jne 0x11d49b52 */
  if (!C.zf) goto L_11d49b52;
  /* 11d49b37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d49b3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49b3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d49b42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d49b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49b47 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d49b4a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d49b4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49b4f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11d49b52:;
  /* 11d49b52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d49b55 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49b58 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d49b5d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d49b5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49b62 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49b65 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11d49b6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d49b6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49b71 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d49b74 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11d49b7b:;
  /* 11d49b7b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49b7e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49b81 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d49b83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49b86 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49b89 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49b8c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11d49b8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d49b92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d49b94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d49b9a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d49b9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d49b9f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49ba2 jne 0x11d49d09 */
  if (!C.zf) goto L_11d49d09;
  /* 11d49ba8 cmp dword ptr [0x11d72fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d72fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49baf je 0x11d49cf8 */
  if (C.zf) goto L_11d49cf8;
  /* 11d49bb5 mov eax, dword ptr [0x11d72fd8] */
  EAX = (r32((uint32_t)(0x11d72fd8)));
  /* 11d49bba shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11d49bbd mov ecx, dword ptr [0x11d72fe0] */
  ECX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49bc3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d49bc6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49bc8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d49bcb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11d49bd0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d49bd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49bd8 push eax */
  push32((uint32_t)(EAX));
  /* 11d49bd9 call dword ptr [0x11d7436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7436c))), 0x11d49bdfu);
  /* 11d49bdf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d49be4 mov ecx, dword ptr [0x11d72fd8] */
  ECX = (r32((uint32_t)(0x11d72fd8)));
  /* 11d49bea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d49bec mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49bf1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d49bf4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d49bf6 mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49bfc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d49bff mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49c04 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d49c07 mov edx, dword ptr [0x11d72fd8] */
  EDX = (r32((uint32_t)(0x11d72fd8)));
  /* 11d49c0d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11d49c18 mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49c1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d49c20 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11d49c23 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d49c26 mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49c2b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d49c2e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11d49c31 mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49c37 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d49c3a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11d49c3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d49c40 jne 0x11d49c56 */
  if (!C.zf) goto L_11d49c56;
  /* 11d49c42 mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49c48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d49c4b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11d49c4d mov ecx, dword ptr [0x11d72fe0] */
  ECX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49c53 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11d49c56:;
  /* 11d49c56 mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49c5c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49c60 jne 0x11d49cf8 */
  if (!C.zf) goto L_11d49cf8;
  /* 11d49c66 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d49c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d49c6d mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49c72 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d49c75 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49c76 call dword ptr [0x11d7436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7436c))), 0x11d49c7cu);
  /* 11d49c7c mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49c82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d49c85 push eax */
  push32((uint32_t)(EAX));
  /* 11d49c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d49c88 mov ecx, dword ptr [0x11d72fec] */
  ECX = (r32((uint32_t)(0x11d72fec)));
  /* 11d49c8e push ecx */
  push32((uint32_t)(ECX));
  /* 11d49c8f call dword ptr [0x11d74370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74370))), 0x11d49c95u);
  /* 11d49c95 mov edx, dword ptr [0x11d72fe4] */
  EDX = (r32((uint32_t)(0x11d72fe4)));
  /* 11d49c9b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d49c9e mov eax, dword ptr [0x11d72fe8] */
  EAX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d49ca3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49ca5 mov ecx, dword ptr [0x11d72fe0] */
  ECX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49cab add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49cae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49cb0 push eax */
  push32((uint32_t)(EAX));
  /* 11d49cb1 mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49cb7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49cba push edx */
  push32((uint32_t)(EDX));
  /* 11d49cbb mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d49cc0 push eax */
  push32((uint32_t)(EAX));
  /* 11d49cc1 call 0x11d4d270 */
  push32(0x11d49cc6u); f_11d4d270();
  /* 11d49cc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49cc9 mov ecx, dword ptr [0x11d72fe4] */
  ECX = (r32((uint32_t)(0x11d72fe4)));
  /* 11d49ccf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49cd2 mov dword ptr [0x11d72fe4], ecx */
  w32((uint32_t)(0x11d72fe4), (ECX));
  /* 11d49cd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49cdb cmp edx, dword ptr [0x11d72fe0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d72fe0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49ce1 jbe 0x11d49cec */
  if ((C.cf||C.zf)) goto L_11d49cec;
  /* 11d49ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49ce6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49ce9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d49cec:;
  /* 11d49cec mov ecx, dword ptr [0x11d72fe8] */
  ECX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d49cf2 mov dword ptr [0x11d72fdc], ecx */
  w32((uint32_t)(0x11d72fdc), (ECX));
L_11d49cf8:;
  /* 11d49cf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49cfb mov dword ptr [0x11d72fe0], edx */
  w32((uint32_t)(0x11d72fe0), (EDX));
  /* 11d49d01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49d04 mov dword ptr [0x11d72fd8], eax */
  w32((uint32_t)(0x11d72fd8), (EAX));
L_11d49d09:;
  /* 11d49d09 mov esp, ebp */
  ESP = (EBP);
  /* 11d49d0b pop ebp */
  EBP = (pop32());
  /* 11d49d0c ret  */
  ESPCHK(0x11d49740u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d10 @ 0x11d49d10 (1334 bytes, 427 insns) */
void f_11d49d10(void) {
  FTRACE(0x11d49d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49d11 mov ebp, esp */
  EBP = (ESP);
  /* 11d49d13 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49d16 push esi */
  push32((uint32_t)(ESI));
  /* 11d49d17 mov eax, dword ptr [0x11d72fe4] */
  EAX = (r32((uint32_t)(0x11d72fe4)));
  /* 11d49d1c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d49d1f mov ecx, dword ptr [0x11d72fe8] */
  ECX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d49d25 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49d27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d49d2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49d2d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49d30 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11d49d33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11d49d36 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d49d39 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d49d3c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49d3f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d49d42 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49d46 jge 0x11d49d5c */
  if ((C.sf==C.of)) goto L_11d49d5c;
  /* 11d49d48 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d49d4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d49d4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d49d50 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d49d53 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11d49d5a jmp 0x11d49d71 */
  goto L_11d49d71;
L_11d49d5c:;
  /* 11d49d5c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d49d63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d49d66 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49d69 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d49d6c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d49d6e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11d49d71:;
  /* 11d49d71 mov ecx, dword ptr [0x11d72fdc] */
  ECX = (r32((uint32_t)(0x11d72fdc)));
  /* 11d49d77 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11d49d7a:;
  /* 11d49d7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49d7d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49d80 jae 0x11d49da6 */
  if (!C.cf) goto L_11d49da6;
  /* 11d49d82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49d85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d49d88 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11d49d8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49d8d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49d90 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11d49d93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d49d95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d49d97 je 0x11d49d9b */
  if (C.zf) goto L_11d49d9b;
  /* 11d49d99 jmp 0x11d49da6 */
  goto L_11d49da6;
L_11d49d9b:;
  /* 11d49d9b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49d9e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49da1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d49da4 jmp 0x11d49d7a */
  goto L_11d49d7a;
L_11d49da6:;
  /* 11d49da6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49da9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49dac jne 0x11d49e8d */
  if (!C.zf) goto L_11d49e8d;
  /* 11d49db2 mov eax, dword ptr [0x11d72fe8] */
  EAX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d49db7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11d49dba:;
  /* 11d49dba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49dbd cmp ecx, dword ptr [0x11d72fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d72fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49dc3 jae 0x11d49de9 */
  if (!C.cf) goto L_11d49de9;
  /* 11d49dc5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49dc8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d49dcb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11d49dcd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49dd0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49dd3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11d49dd6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d49dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d49dda je 0x11d49dde */
  if (C.zf) goto L_11d49dde;
  /* 11d49ddc jmp 0x11d49de9 */
  goto L_11d49de9;
L_11d49dde:;
  /* 11d49dde mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49de1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49de4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d49de7 jmp 0x11d49dba */
  goto L_11d49dba;
L_11d49de9:;
  /* 11d49de9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49dec cmp ecx, dword ptr [0x11d72fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d72fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49df2 jne 0x11d49e8d */
  if (!C.zf) goto L_11d49e8d;
L_11d49df8:;
  /* 11d49df8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49dfb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49dfe jae 0x11d49e16 */
  if (!C.cf) goto L_11d49e16;
  /* 11d49e00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e03 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49e07 je 0x11d49e0b */
  if (C.zf) goto L_11d49e0b;
  /* 11d49e09 jmp 0x11d49e16 */
  goto L_11d49e16;
L_11d49e0b:;
  /* 11d49e0b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e0e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49e11 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d49e14 jmp 0x11d49df8 */
  goto L_11d49df8;
L_11d49e16:;
  /* 11d49e16 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e19 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49e1c jne 0x11d49e67 */
  if (!C.zf) goto L_11d49e67;
  /* 11d49e1e mov eax, dword ptr [0x11d72fe8] */
  EAX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d49e23 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11d49e26:;
  /* 11d49e26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e29 cmp ecx, dword ptr [0x11d72fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d72fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49e2f jae 0x11d49e47 */
  if (!C.cf) goto L_11d49e47;
  /* 11d49e31 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e34 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49e38 je 0x11d49e3c */
  if (C.zf) goto L_11d49e3c;
  /* 11d49e3a jmp 0x11d49e47 */
  goto L_11d49e47;
L_11d49e3c:;
  /* 11d49e3c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e3f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49e42 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d49e45 jmp 0x11d49e26 */
  goto L_11d49e26;
L_11d49e47:;
  /* 11d49e47 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e4a cmp ecx, dword ptr [0x11d72fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d72fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49e50 jne 0x11d49e67 */
  if (!C.zf) goto L_11d49e67;
  /* 11d49e52 call 0x11d4a250 */
  push32(0x11d49e57u); f_11d4a250();
  /* 11d49e57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d49e5a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49e5e jne 0x11d49e67 */
  if (!C.zf) goto L_11d49e67;
  /* 11d49e60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d49e62 jmp 0x11d4a241 */
  goto L_11d4a241;
L_11d49e67:;
  /* 11d49e67 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e6a push edx */
  push32((uint32_t)(EDX));
  /* 11d49e6b call 0x11d4a360 */
  push32(0x11d49e70u); f_11d4a360();
  /* 11d49e70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49e73 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e76 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d49e79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d49e7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e7e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d49e81 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49e84 jne 0x11d49e8d */
  if (!C.zf) goto L_11d49e8d;
  /* 11d49e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d49e88 jmp 0x11d4a241 */
  goto L_11d4a241;
L_11d49e8d:;
  /* 11d49e8d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e90 mov dword ptr [0x11d72fdc], edx */
  w32((uint32_t)(0x11d72fdc), (EDX));
  /* 11d49e96 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49e99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d49e9c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11d49e9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49ea2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d49ea4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11d49ea7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49eab je 0x11d49ed0 */
  if (C.zf) goto L_11d49ed0;
  /* 11d49ead mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49eb0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49eb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d49eb6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11d49eba mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49ebd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49ec0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49ec3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11d49eca or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11d49ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d49ece jne 0x11d49f05 */
  if (!C.zf) goto L_11d49f05;
L_11d49ed0:;
  /* 11d49ed0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11d49ed7:;
  /* 11d49ed7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49eda mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49edd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d49ee0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11d49ee4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49ee7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49eea mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49eed and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11d49ef4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11d49ef6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d49ef8 jne 0x11d49f05 */
  if (!C.zf) goto L_11d49f05;
  /* 11d49efa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49efd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49f00 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11d49f03 jmp 0x11d49ed7 */
  goto L_11d49ed7;
L_11d49f05:;
  /* 11d49f05 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49f08 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d49f0e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49f11 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11d49f18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d49f1b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d49f22 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49f25 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49f28 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d49f2b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11d49f2f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d49f32 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49f36 jne 0x11d49f52 */
  if (!C.zf) goto L_11d49f52;
  /* 11d49f38 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11d49f3f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49f42 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49f45 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d49f48 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11d49f4f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11d49f52:;
  /* 11d49f52 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49f56 jl 0x11d49f6b */
  if ((C.sf!=C.of)) goto L_11d49f6b;
  /* 11d49f58 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d49f5b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d49f5d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d49f60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d49f63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49f66 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d49f69 jmp 0x11d49f52 */
  goto L_11d49f52;
L_11d49f6b:;
  /* 11d49f6b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d49f6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49f71 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11d49f75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d49f78 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d49f7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d49f7d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49f80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d49f83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d49f86 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d49f89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49f8c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d49f8f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49f93 jle 0x11d49f9c */
  if ((C.zf||C.sf!=C.of)) goto L_11d49f9c;
  /* 11d49f95 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11d49f9c:;
  /* 11d49f9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d49f9f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49fa2 je 0x11d4a1c0 */
  if (C.zf) goto L_11d4a1c0;
  /* 11d49fa8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d49fab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d49fae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d49fb1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49fb4 jne 0x11d4a08a */
  if (!C.zf) goto L_11d4a08a;
  /* 11d49fba cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49fbe jge 0x11d4a01f */
  if ((C.sf==C.of)) goto L_11d4a01f;
  /* 11d49fc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d49fc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d49fc8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d49fca not eax */
  EAX = (~(EAX));
  /* 11d49fcc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49fcf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49fd2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11d49fd6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d49fd8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d49fdb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49fde mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11d49fe2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49fe5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49fe8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11d49feb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d49fee mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49ff1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49ff4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11d49ff7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d49ffa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49ffd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d4a001 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4a003 jne 0x11d4a01d */
  if (!C.zf) goto L_11d4a01d;
  /* 11d4a005 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4a00a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a00d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4a00f not eax */
  EAX = (~(EAX));
  /* 11d4a011 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a014 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4a016 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4a018 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a01b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d4a01d:;
  /* 11d4a01d jmp 0x11d4a08a */
  goto L_11d4a08a;
L_11d4a01f:;
  /* 11d4a01f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a022 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a025 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a02a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a02c not edx */
  EDX = (~(EDX));
  /* 11d4a02e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a031 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a034 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11d4a03b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4a03d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a040 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a043 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11d4a04a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a04d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a050 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d4a053 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d4a056 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a059 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a05c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11d4a05f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a062 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a065 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d4a069 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4a06b jne 0x11d4a08a */
  if (!C.zf) goto L_11d4a08a;
  /* 11d4a06d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a070 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a073 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a078 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a07a not edx */
  EDX = (~(EDX));
  /* 11d4a07c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a07f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4a082 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a084 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a087 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11d4a08a:;
  /* 11d4a08a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a08d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d4a090 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a093 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d4a096 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d4a099 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a09c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4a09f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a0a2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d4a0a5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d4a0a8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a0ac je 0x11d4a1c0 */
  if (C.zf) goto L_11d4a1c0;
  /* 11d4a0b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a0b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a0b8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11d4a0bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4a0be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a0c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4a0c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4a0c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d4a0ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a0cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4a0d0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d4a0d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4a0d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a0d9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11d4a0dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a0df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4a0e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a0e5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d4a0e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a0eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a0ee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4a0f1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a0f4 jne 0x11d4a1c0 */
  if (!C.zf) goto L_11d4a1c0;
  /* 11d4a0fa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a0fe jge 0x11d4a15a */
  if ((C.sf==C.of)) goto L_11d4a15a;
  /* 11d4a100 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a103 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a106 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d4a10a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a10d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a110 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11d4a113 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4a115 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a118 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a11b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11d4a11e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4a120 jne 0x11d4a138 */
  if (!C.zf) goto L_11d4a138;
  /* 11d4a122 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4a127 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a12a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4a12c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a12f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4a131 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4a133 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a136 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d4a138:;
  /* 11d4a138 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a13d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a140 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a142 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a145 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a148 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11d4a14c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4a14e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a151 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a154 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11d4a158 jmp 0x11d4a1c0 */
  goto L_11d4a1c0;
L_11d4a15a:;
  /* 11d4a15a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a15d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a160 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d4a164 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a167 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a16a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11d4a16d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4a16f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a172 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a175 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11d4a178 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4a17a jne 0x11d4a197 */
  if (!C.zf) goto L_11d4a197;
  /* 11d4a17c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a17f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a182 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4a187 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4a189 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a18c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4a18f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4a191 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a194 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d4a197:;
  /* 11d4a197 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a19a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a19d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a1a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a1a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a1a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a1aa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11d4a1b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4a1b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a1b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a1b9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11d4a1c0:;
  /* 11d4a1c0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a1c4 je 0x11d4a1da */
  if (C.zf) goto L_11d4a1da;
  /* 11d4a1c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a1c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4a1cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d4a1ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a1d1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a1d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4a1d7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11d4a1da:;
  /* 11d4a1da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a1dd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a1e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d4a1e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a1e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a1e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a1ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d4a1ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a1f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a1f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a1f7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a1fa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11d4a1fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a200 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4a202 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a205 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d4a207 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a20a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a20d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d4a20f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4a211 jne 0x11d4a233 */
  if (!C.zf) goto L_11d4a233;
  /* 11d4a213 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a216 cmp eax, dword ptr [0x11d72fe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d72fe0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a21c jne 0x11d4a233 */
  if (!C.zf) goto L_11d4a233;
  /* 11d4a21e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a221 cmp ecx, dword ptr [0x11d72fd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d72fd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a227 jne 0x11d4a233 */
  if (!C.zf) goto L_11d4a233;
  /* 11d4a229 mov dword ptr [0x11d72fe0], 0 */
  w32((uint32_t)(0x11d72fe0), (0x0u));
L_11d4a233:;
  /* 11d4a233 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d4a236 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a239 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d4a23b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a23e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d4a241:;
  /* 11d4a241 pop esi */
  ESI = (pop32());
  /* 11d4a242 mov esp, ebp */
  ESP = (EBP);
  /* 11d4a244 pop ebp */
  EBP = (pop32());
  /* 11d4a245 ret  */
  ESPCHK(0x11d49d10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a250 @ 0x11d4a250 (271 bytes, 78 insns) */
void f_11d4a250(void) {
  FTRACE(0x11d4a250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4a250 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4a251 mov ebp, esp */
  EBP = (ESP);
  /* 11d4a253 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4a254 mov eax, dword ptr [0x11d72fe4] */
  EAX = (r32((uint32_t)(0x11d72fe4)));
  /* 11d4a259 cmp eax, dword ptr [0x11d72fc8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d72fc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a25f jne 0x11d4a2ab */
  if (!C.zf) goto L_11d4a2ab;
  /* 11d4a261 mov ecx, dword ptr [0x11d72fc8] */
  ECX = (r32((uint32_t)(0x11d72fc8)));
  /* 11d4a267 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a26a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4a26d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4a26e mov edx, dword ptr [0x11d72fe8] */
  EDX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d4a274 push edx */
  push32((uint32_t)(EDX));
  /* 11d4a275 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4a277 mov eax, dword ptr [0x11d72fec] */
  EAX = (r32((uint32_t)(0x11d72fec)));
  /* 11d4a27c push eax */
  push32((uint32_t)(EAX));
  /* 11d4a27d call dword ptr [0x11d7434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7434c))), 0x11d4a283u);
  /* 11d4a283 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4a286 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a28a jne 0x11d4a293 */
  if (!C.zf) goto L_11d4a293;
  /* 11d4a28c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4a28e jmp 0x11d4a35b */
  goto L_11d4a35b;
L_11d4a293:;
  /* 11d4a293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a296 mov dword ptr [0x11d72fe8], ecx */
  w32((uint32_t)(0x11d72fe8), (ECX));
  /* 11d4a29c mov edx, dword ptr [0x11d72fc8] */
  EDX = (r32((uint32_t)(0x11d72fc8)));
  /* 11d4a2a2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a2a5 mov dword ptr [0x11d72fc8], edx */
  w32((uint32_t)(0x11d72fc8), (EDX));
L_11d4a2ab:;
  /* 11d4a2ab mov eax, dword ptr [0x11d72fe4] */
  EAX = (r32((uint32_t)(0x11d72fe4)));
  /* 11d4a2b0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4a2b3 mov ecx, dword ptr [0x11d72fe8] */
  ECX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d4a2b9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a2bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d4a2be push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11d4a2c3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d4a2c5 mov edx, dword ptr [0x11d72fec] */
  EDX = (r32((uint32_t)(0x11d72fec)));
  /* 11d4a2cb push edx */
  push32((uint32_t)(EDX));
  /* 11d4a2cc call dword ptr [0x11d74350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74350))), 0x11d4a2d2u);
  /* 11d4a2d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a2d5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11d4a2d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a2db cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a2df jne 0x11d4a2e5 */
  if (!C.zf) goto L_11d4a2e5;
  /* 11d4a2e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4a2e3 jmp 0x11d4a35b */
  goto L_11d4a35b;
L_11d4a2e5:;
  /* 11d4a2e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d4a2e7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11d4a2ec push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11d4a2f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4a2f3 call dword ptr [0x11d74348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74348))), 0x11d4a2f9u);
  /* 11d4a2f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a2fc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11d4a2ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a302 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a306 jne 0x11d4a322 */
  if (!C.zf) goto L_11d4a322;
  /* 11d4a308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a30b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d4a30e push ecx */
  push32((uint32_t)(ECX));
  /* 11d4a30f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4a311 mov edx, dword ptr [0x11d72fec] */
  EDX = (r32((uint32_t)(0x11d72fec)));
  /* 11d4a317 push edx */
  push32((uint32_t)(EDX));
  /* 11d4a318 call dword ptr [0x11d74370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74370))), 0x11d4a31eu);
  /* 11d4a31e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4a320 jmp 0x11d4a35b */
  goto L_11d4a35b;
L_11d4a322:;
  /* 11d4a322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a325 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4a32b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a32e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11d4a335 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a338 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11d4a33f mov eax, dword ptr [0x11d72fe4] */
  EAX = (r32((uint32_t)(0x11d72fe4)));
  /* 11d4a344 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a347 mov dword ptr [0x11d72fe4], eax */
  w32((uint32_t)(0x11d72fe4), (EAX));
  /* 11d4a34c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a34f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d4a352 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11d4a358 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d4a35b:;
  /* 11d4a35b mov esp, ebp */
  ESP = (EBP);
  /* 11d4a35d pop ebp */
  EBP = (pop32());
  /* 11d4a35e ret  */
  ESPCHK(0x11d4a250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a360 @ 0x11d4a360 (494 bytes, 149 insns) */
void f_11d4a360(void) {
  FTRACE(0x11d4a360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4a360 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4a361 mov ebp, esp */
  EBP = (ESP);
  /* 11d4a363 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a369 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d4a36c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d4a36f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a372 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d4a375 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4a378 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11d4a37f:;
  /* 11d4a37f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a383 jl 0x11d4a398 */
  if ((C.sf!=C.of)) goto L_11d4a398;
  /* 11d4a385 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4a388 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d4a38a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d4a38d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a390 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a393 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11d4a396 jmp 0x11d4a37f */
  goto L_11d4a37f;
L_11d4a398:;
  /* 11d4a398 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a39b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4a3a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a3a4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11d4a3ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d4a3ae mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d4a3b5 jmp 0x11d4a3c0 */
  goto L_11d4a3c0;
L_11d4a3b7:;
  /* 11d4a3b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a3ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a3bd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11d4a3c0:;
  /* 11d4a3c0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a3c4 jge 0x11d4a3e6 */
  if ((C.sf==C.of)) goto L_11d4a3e6;
  /* 11d4a3c6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a3c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4a3cc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11d4a3cf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d4a3d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a3d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a3d8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d4a3db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a3de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a3e1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d4a3e4 jmp 0x11d4a3b7 */
  goto L_11d4a3b7;
L_11d4a3e6:;
  /* 11d4a3e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a3e9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11d4a3ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a3ef mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4a3f2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a3f4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d4a3f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d4a3f9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d4a3fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d4a403 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a406 push edx */
  push32((uint32_t)(EDX));
  /* 11d4a407 call dword ptr [0x11d74348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74348))), 0x11d4a40du);
  /* 11d4a40d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4a40f jne 0x11d4a419 */
  if (!C.zf) goto L_11d4a419;
  /* 11d4a411 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4a414 jmp 0x11d4a54a */
  goto L_11d4a54a;
L_11d4a419:;
  /* 11d4a419 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a41c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a421 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d4a424 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a427 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d4a42a jmp 0x11d4a438 */
  goto L_11d4a438;
L_11d4a42c:;
  /* 11d4a42c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a42f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a435 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d4a438:;
  /* 11d4a438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a43b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a43e ja 0x11d4a49d */
  if ((!C.cf&&!C.zf)) goto L_11d4a49d;
  /* 11d4a440 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a443 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11d4a44a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a44d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11d4a457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a45a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a45d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d4a460 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a463 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11d4a469 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a46c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a472 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a475 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d4a478 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a47b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a481 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a484 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d4a487 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a48a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a48f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d4a492 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4a495 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11d4a49b jmp 0x11d4a42c */
  goto L_11d4a42c;
L_11d4a49d:;
  /* 11d4a49d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4a4a0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a4a6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d4a4a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a4ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a4af mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a4b2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d4a4b5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a4b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d4a4bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d4a4be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a4c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a4c4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d4a4c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4a4ca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a4cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a4d0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11d4a4d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a4d6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d4a4d9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d4a4dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a4df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a4e2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11d4a4e5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a4e8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a4eb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11d4a4f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a4f6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a4f9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11d4a504 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a507 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11d4a50b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a50e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11d4a511 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4a514 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a517 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11d4a51a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4a51c jne 0x11d4a52d */
  if (!C.zf) goto L_11d4a52d;
  /* 11d4a51e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a521 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4a524 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4a527 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a52a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d4a52d:;
  /* 11d4a52d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a532 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a535 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a537 not edx */
  EDX = (~(EDX));
  /* 11d4a539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a53c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d4a53f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a544 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d4a547 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11d4a54a:;
  /* 11d4a54a mov esp, ebp */
  ESP = (EBP);
  /* 11d4a54c pop ebp */
  EBP = (pop32());
  /* 11d4a54d ret  */
  ESPCHK(0x11d4a360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a550 @ 0x11d4a550 (1515 bytes, 489 insns) */
void f_11d4a550(void) {
  FTRACE(0x11d4a550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4a550 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4a551 mov ebp, esp */
  EBP = (ESP);
  /* 11d4a553 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a556 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4a559 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a55c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11d4a55e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d4a561 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a564 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d4a567 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11d4a56a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a56d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4a570 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a573 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4a576 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4a579 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11d4a57c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4a57f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a582 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4a588 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a58b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11d4a592 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d4a595 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4a598 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a59b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d4a59e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a5a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4a5a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a5a6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11d4a5a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a5ac add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a5af mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11d4a5b2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a5b5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4a5b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d4a5ba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4a5bd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a5c0 jle 0x11d4a876 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4a876;
  /* 11d4a5c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a5c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a5cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4a5ce jne 0x11d4a5db */
  if (!C.zf) goto L_11d4a5db;
  /* 11d4a5d0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a5d3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a5d6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a5d9 jle 0x11d4a5e2 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4a5e2;
L_11d4a5db:;
  /* 11d4a5db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4a5dd jmp 0x11d4ab37 */
  goto L_11d4ab37;
L_11d4a5e2:;
  /* 11d4a5e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a5e5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d4a5e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a5eb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d4a5ee cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a5f2 jbe 0x11d4a5fb */
  if ((C.cf||C.zf)) goto L_11d4a5fb;
  /* 11d4a5f4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11d4a5fb:;
  /* 11d4a5fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a5fe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a601 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4a604 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a607 jne 0x11d4a6dd */
  if (!C.zf) goto L_11d4a6dd;
  /* 11d4a60d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a611 jae 0x11d4a672 */
  if (!C.cf) goto L_11d4a672;
  /* 11d4a613 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a618 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a61b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a61d not edx */
  EDX = (~(EDX));
  /* 11d4a61f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a622 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a625 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11d4a629 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4a62b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a62e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a631 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11d4a635 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a638 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a63b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d4a63e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d4a641 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a644 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a647 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11d4a64a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a64d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a650 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d4a654 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4a656 jne 0x11d4a670 */
  if (!C.zf) goto L_11d4a670;
  /* 11d4a658 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a65d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a660 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a662 not edx */
  EDX = (~(EDX));
  /* 11d4a664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a667 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4a669 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a66b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a66e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d4a670:;
  /* 11d4a670 jmp 0x11d4a6dd */
  goto L_11d4a6dd;
L_11d4a672:;
  /* 11d4a672 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a675 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a678 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4a67d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4a67f not eax */
  EAX = (~(EAX));
  /* 11d4a681 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a684 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a687 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11d4a68e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a690 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a693 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a696 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11d4a69d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a6a0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a6a3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11d4a6a6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d4a6a9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a6ac add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a6af mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11d4a6b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a6b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a6b8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d4a6bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4a6be jne 0x11d4a6dd */
  if (!C.zf) goto L_11d4a6dd;
  /* 11d4a6c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a6c3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a6c6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4a6cb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4a6cd not eax */
  EAX = (~(EAX));
  /* 11d4a6cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a6d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4a6d5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4a6d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a6da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d4a6dd:;
  /* 11d4a6dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a6e0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d4a6e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a6e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4a6e9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d4a6ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a6ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d4a6f2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a6f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d4a6f8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11d4a6fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a6fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a701 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a704 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d4a707 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a70b jle 0x11d4a857 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4a857;
  /* 11d4a711 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a714 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a717 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d4a71a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a71d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d4a720 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a723 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d4a726 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a72a jbe 0x11d4a733 */
  if ((C.cf||C.zf)) goto L_11d4a733;
  /* 11d4a72c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11d4a733:;
  /* 11d4a733 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a736 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4a739 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11d4a73c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d4a73f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a742 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a745 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4a748 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d4a74b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a74e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a751 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11d4a754 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4a757 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a75a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11d4a75d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a760 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4a763 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a766 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d4a769 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a76c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a76f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4a772 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a775 jne 0x11d4a843 */
  if (!C.zf) goto L_11d4a843;
  /* 11d4a77b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a77f jae 0x11d4a7dc */
  if (!C.cf) goto L_11d4a7dc;
  /* 11d4a781 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a784 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a787 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d4a78b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a78e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a791 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d4a794 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4a797 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a79a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a79d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11d4a7a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4a7a2 jne 0x11d4a7ba */
  if (!C.zf) goto L_11d4a7ba;
  /* 11d4a7a4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a7a9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a7ac shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a7ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a7b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4a7b3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a7b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a7b8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d4a7ba:;
  /* 11d4a7ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4a7bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a7c2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4a7c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a7c7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a7ca mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11d4a7ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a7d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a7d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a7d6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11d4a7da jmp 0x11d4a843 */
  goto L_11d4a843;
L_11d4a7dc:;
  /* 11d4a7dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a7df add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a7e2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d4a7e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a7e9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a7ec mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d4a7ef add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4a7f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a7f5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a7f8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11d4a7fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4a7fd jne 0x11d4a81a */
  if (!C.zf) goto L_11d4a81a;
  /* 11d4a7ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a802 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a805 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a80a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a80c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a80f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4a812 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a814 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a817 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11d4a81a:;
  /* 11d4a81a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a81d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a820 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4a825 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4a827 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a82a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a82d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11d4a834 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a836 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a839 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a83c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11d4a843:;
  /* 11d4a843 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a846 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a849 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d4a84b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a84e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a851 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a854 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11d4a857:;
  /* 11d4a857 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4a85a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a85d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a860 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d4a862 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4a865 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a868 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a86b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a86e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11d4a871 jmp 0x11d4ab32 */
  goto L_11d4ab32;
L_11d4a876:;
  /* 11d4a876 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4a879 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a87c jge 0x11d4ab32 */
  if ((C.sf==C.of)) goto L_11d4ab32;
  /* 11d4a882 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4a885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a888 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a88b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d4a88d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4a890 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a893 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a896 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a899 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11d4a89c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4a89f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a8a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d4a8a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a8a8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a8ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d4a8ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a8b1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d4a8b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a8b7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d4a8ba cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a8be jbe 0x11d4a8c7 */
  if ((C.cf||C.zf)) goto L_11d4a8c7;
  /* 11d4a8c0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11d4a8c7:;
  /* 11d4a8c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a8ca and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4a8cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4a8cf jne 0x11d4aa10 */
  if (!C.zf) goto L_11d4aa10;
  /* 11d4a8d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4a8d8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d4a8db sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a8de mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d4a8e1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a8e5 jbe 0x11d4a8ee */
  if ((C.cf||C.zf)) goto L_11d4a8ee;
  /* 11d4a8e7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11d4a8ee:;
  /* 11d4a8ee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a8f1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a8f4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4a8f7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a8fa jne 0x11d4a9d0 */
  if (!C.zf) goto L_11d4a9d0;
  /* 11d4a900 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4a904 jae 0x11d4a965 */
  if (!C.cf) goto L_11d4a965;
  /* 11d4a906 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a90b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a90e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a910 not edx */
  EDX = (~(EDX));
  /* 11d4a912 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a915 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a918 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11d4a91c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4a91e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a921 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a924 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11d4a928 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a92b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a92e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d4a931 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d4a934 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a937 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a93a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11d4a93d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a940 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a943 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d4a947 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4a949 jne 0x11d4a963 */
  if (!C.zf) goto L_11d4a963;
  /* 11d4a94b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4a950 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a953 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4a955 not edx */
  EDX = (~(EDX));
  /* 11d4a957 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a95a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4a95c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a95e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a961 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d4a963:;
  /* 11d4a963 jmp 0x11d4a9d0 */
  goto L_11d4a9d0;
L_11d4a965:;
  /* 11d4a965 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a968 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a96b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4a970 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4a972 not eax */
  EAX = (~(EAX));
  /* 11d4a974 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a977 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a97a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11d4a981 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4a983 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4a986 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a989 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11d4a990 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a993 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a996 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11d4a999 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d4a99c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a99f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a9a2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11d4a9a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4a9a8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a9ab movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d4a9af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4a9b1 jne 0x11d4a9d0 */
  if (!C.zf) goto L_11d4a9d0;
  /* 11d4a9b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4a9b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4a9b9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4a9be shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4a9c0 not eax */
  EAX = (~(EAX));
  /* 11d4a9c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a9c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4a9c8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4a9ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4a9cd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d4a9d0:;
  /* 11d4a9d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a9d3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d4a9d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a9d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4a9dc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d4a9df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a9e2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d4a9e5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4a9e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d4a9eb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11d4a9ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a9f1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4a9f4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d4a9f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4a9fa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d4a9fd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4aa00 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d4aa03 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4aa07 jbe 0x11d4aa10 */
  if ((C.cf||C.zf)) goto L_11d4aa10;
  /* 11d4aa09 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11d4aa10:;
  /* 11d4aa10 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4aa13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4aa16 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11d4aa19 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d4aa1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4aa1f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4aa22 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4aa25 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d4aa28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4aa2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4aa2e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d4aa31 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4aa34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4aa37 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11d4aa3a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4aa3d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4aa40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4aa43 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d4aa46 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4aa49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4aa4c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4aa4f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4aa52 jne 0x11d4ab1e */
  if (!C.zf) goto L_11d4ab1e;
  /* 11d4aa58 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4aa5c jae 0x11d4aab8 */
  if (!C.cf) goto L_11d4aab8;
  /* 11d4aa5e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4aa61 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4aa64 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d4aa68 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4aa6b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4aa6e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11d4aa71 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4aa73 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4aa76 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4aa79 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11d4aa7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4aa7e jne 0x11d4aa96 */
  if (!C.zf) goto L_11d4aa96;
  /* 11d4aa80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4aa85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4aa88 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4aa8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4aa8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4aa8f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4aa91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4aa94 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d4aa96:;
  /* 11d4aa96 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4aa9b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4aa9e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4aaa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4aaa3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4aaa6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11d4aaaa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4aaac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4aaaf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4aab2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11d4aab6 jmp 0x11d4ab1e */
  goto L_11d4ab1e;
L_11d4aab8:;
  /* 11d4aab8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4aabb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4aabe movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d4aac2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4aac5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4aac8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11d4aacb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4aacd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4aad0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4aad3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11d4aad6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4aad8 jne 0x11d4aaf5 */
  if (!C.zf) goto L_11d4aaf5;
  /* 11d4aada mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4aadd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4aae0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d4aae5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d4aae7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4aaea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4aaed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4aaef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4aaf2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d4aaf5:;
  /* 11d4aaf5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4aaf8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4aafb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4ab00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4ab02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ab05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4ab08 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11d4ab0f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4ab11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ab14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4ab17 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11d4ab1e:;
  /* 11d4ab1e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4ab21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4ab24 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d4ab26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4ab29 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ab2c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4ab2f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11d4ab32:;
  /* 11d4ab32 mov eax, 1 */
  EAX = (0x1u);
L_11d4ab37:;
  /* 11d4ab37 mov esp, ebp */
  ESP = (EBP);
  /* 11d4ab39 pop ebp */
  EBP = (pop32());
  /* 11d4ab3a ret  */
  ESPCHK(0x11d4a550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab40 @ 0x11d4ab40 (304 bytes, 79 insns) */
void f_11d4ab40(void) {
  FTRACE(0x11d4ab40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4ab40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4ab41 mov ebp, esp */
  EBP = (ESP);
  /* 11d4ab43 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ab44 cmp dword ptr [0x11d72fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d72fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ab4b je 0x11d4ac6c */
  if (C.zf) goto L_11d4ac6c;
  /* 11d4ab51 mov eax, dword ptr [0x11d72fd8] */
  EAX = (r32((uint32_t)(0x11d72fd8)));
  /* 11d4ab56 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11d4ab59 mov ecx, dword ptr [0x11d72fe0] */
  ECX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4ab5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4ab62 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ab64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4ab67 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11d4ab6c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d4ab71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ab74 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ab75 call dword ptr [0x11d7436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7436c))), 0x11d4ab7bu);
  /* 11d4ab7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4ab80 mov ecx, dword ptr [0x11d72fd8] */
  ECX = (r32((uint32_t)(0x11d72fd8)));
  /* 11d4ab86 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4ab88 mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4ab8d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d4ab90 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ab92 mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4ab98 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d4ab9b mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4aba0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d4aba3 mov edx, dword ptr [0x11d72fd8] */
  EDX = (r32((uint32_t)(0x11d72fd8)));
  /* 11d4aba9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11d4abb4 mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4abb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d4abbc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11d4abbf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d4abc2 mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4abc7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d4abca mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11d4abcd mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4abd3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d4abd6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11d4abda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4abdc jne 0x11d4abf2 */
  if (!C.zf) goto L_11d4abf2;
  /* 11d4abde mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4abe4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d4abe7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11d4abe9 mov ecx, dword ptr [0x11d72fe0] */
  ECX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4abef mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11d4abf2:;
  /* 11d4abf2 mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4abf8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4abfc jne 0x11d4ac62 */
  if (!C.zf) goto L_11d4ac62;
  /* 11d4abfe cmp dword ptr [0x11d72fe4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d72fe4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ac05 jle 0x11d4ac62 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4ac62;
  /* 11d4ac07 mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4ac0c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d4ac0f push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ac10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4ac12 mov edx, dword ptr [0x11d72fec] */
  EDX = (r32((uint32_t)(0x11d72fec)));
  /* 11d4ac18 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ac19 call dword ptr [0x11d74370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74370))), 0x11d4ac1fu);
  /* 11d4ac1f mov eax, dword ptr [0x11d72fe4] */
  EAX = (r32((uint32_t)(0x11d72fe4)));
  /* 11d4ac24 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4ac27 mov ecx, dword ptr [0x11d72fe8] */
  ECX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d4ac2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ac2f mov edx, dword ptr [0x11d72fe0] */
  EDX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4ac35 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ac38 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4ac3a push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ac3b mov eax, dword ptr [0x11d72fe0] */
  EAX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4ac40 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ac43 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ac44 mov ecx, dword ptr [0x11d72fe0] */
  ECX = (r32((uint32_t)(0x11d72fe0)));
  /* 11d4ac4a push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ac4b call 0x11d4d270 */
  push32(0x11d4ac50u); f_11d4d270();
  /* 11d4ac50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ac53 mov edx, dword ptr [0x11d72fe4] */
  EDX = (r32((uint32_t)(0x11d72fe4)));
  /* 11d4ac59 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4ac5c mov dword ptr [0x11d72fe4], edx */
  w32((uint32_t)(0x11d72fe4), (EDX));
L_11d4ac62:;
  /* 11d4ac62 mov dword ptr [0x11d72fe0], 0 */
  w32((uint32_t)(0x11d72fe0), (0x0u));
L_11d4ac6c:;
  /* 11d4ac6c mov esp, ebp */
  ESP = (EBP);
  /* 11d4ac6e pop ebp */
  EBP = (pop32());
  /* 11d4ac6f ret  */
  ESPCHK(0x11d4ab40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac70 @ 0x11d4ac70 (1565 bytes, 343 insns) */
void f_11d4ac70(void) {
  FTRACE(0x11d4ac70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4ac70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4ac71 mov ebp, esp */
  EBP = (ESP);
  /* 11d4ac73 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4ac79 mov eax, dword ptr [0x11d72fe4] */
  EAX = (r32((uint32_t)(0x11d72fe4)));
  /* 11d4ac7e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4ac81 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ac82 mov ecx, dword ptr [0x11d72fe8] */
  ECX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d4ac88 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ac89 call dword ptr [0x11d74398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74398))), 0x11d4ac8fu);
  /* 11d4ac8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4ac91 je 0x11d4ac9b */
  if (C.zf) goto L_11d4ac9b;
  /* 11d4ac93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4ac96 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4ac9b:;
  /* 11d4ac9b mov edx, dword ptr [0x11d72fe8] */
  EDX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d4aca1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11d4aca7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11d4acb1 jmp 0x11d4acc2 */
  goto L_11d4acc2;
L_11d4acb3:;
  /* 11d4acb3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11d4acb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4acbc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11d4acc2:;
  /* 11d4acc2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11d4acc8 cmp ecx, dword ptr [0x11d72fe4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d72fe4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4acce jge 0x11d4b287 */
  if ((C.sf==C.of)) goto L_11d4b287;
  /* 11d4acd4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d4acda mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d4acdd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11d4ace3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11d4ace8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11d4acee push ecx */
  push32((uint32_t)(ECX));
  /* 11d4acef call dword ptr [0x11d74398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74398))), 0x11d4acf5u);
  /* 11d4acf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4acf7 je 0x11d4ad03 */
  if (C.zf) goto L_11d4ad03;
  /* 11d4acf9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11d4acfe jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4ad03:;
  /* 11d4ad03 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d4ad09 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d4ad0c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11d4ad12 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11d4ad18 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ad1e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d4ad21 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d4ad27 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d4ad2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4ad2d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11d4ad37 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11d4ad41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4ad48 jmp 0x11d4ad53 */
  goto L_11d4ad53;
L_11d4ad4a:;
  /* 11d4ad4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ad4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ad50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11d4ad53:;
  /* 11d4ad53 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ad57 jge 0x11d4b24b */
  if ((C.sf==C.of)) goto L_11d4b24b;
  /* 11d4ad5d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11d4ad67 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11d4ad71 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11d4ad7b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11d4ad85 jmp 0x11d4ad96 */
  goto L_11d4ad96;
L_11d4ad87:;
  /* 11d4ad87 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11d4ad8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ad90 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11d4ad96:;
  /* 11d4ad96 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ad9d jge 0x11d4adb2 */
  if ((C.sf==C.of)) goto L_11d4adb2;
  /* 11d4ad9f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11d4ada5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11d4adb0 jmp 0x11d4ad87 */
  goto L_11d4ad87;
L_11d4adb2:;
  /* 11d4adb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4adb6 jl 0x11d4b1ed */
  if ((C.sf!=C.of)) goto L_11d4b1ed;
  /* 11d4adbc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d4adc1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11d4adc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4adc8 call dword ptr [0x11d74398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74398))), 0x11d4adceu);
  /* 11d4adce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4add0 je 0x11d4addc */
  if (C.zf) goto L_11d4addc;
  /* 11d4add2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11d4add7 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4addc:;
  /* 11d4addc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11d4ade2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d4ade5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11d4adef jmp 0x11d4ae00 */
  goto L_11d4ae00;
L_11d4adf1:;
  /* 11d4adf1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11d4adf7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4adfa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11d4ae00:;
  /* 11d4ae00 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ae07 jge 0x11d4af84 */
  if ((C.sf==C.of)) goto L_11d4af84;
  /* 11d4ae0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ae10 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ae13 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11d4ae19 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d4ae1f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ae25 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11d4ae2b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d4ae31 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ae35 jne 0x11d4ae42 */
  if (!C.zf) goto L_11d4ae42;
  /* 11d4ae37 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11d4ae3d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ae40 je 0x11d4ae4c */
  if (C.zf) goto L_11d4ae4c;
L_11d4ae42:;
  /* 11d4ae42 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11d4ae47 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4ae4c:;
  /* 11d4ae4c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d4ae52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d4ae54 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11d4ae5a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11d4ae60 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11d4ae66 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11d4ae6c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4ae6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4ae71 je 0x11d4aea9 */
  if (C.zf) goto L_11d4aea9;
  /* 11d4ae73 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11d4ae79 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4ae7c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11d4ae82 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ae8c jle 0x11d4ae98 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4ae98;
  /* 11d4ae8e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11d4ae93 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4ae98:;
  /* 11d4ae98 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11d4ae9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4aea1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11d4aea7 jmp 0x11d4aeeb */
  goto L_11d4aeeb;
L_11d4aea9:;
  /* 11d4aea9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11d4aeaf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d4aeb2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4aeb5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11d4aebb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4aec2 jle 0x11d4aece */
  if ((C.zf||C.sf!=C.of)) goto L_11d4aece;
  /* 11d4aec4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11d4aece:;
  /* 11d4aece mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11d4aed4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11d4aedb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4aede mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11d4aee4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11d4aeeb:;
  /* 11d4aeeb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4aef2 jl 0x11d4af0d */
  if ((C.sf!=C.of)) goto L_11d4af0d;
  /* 11d4aef4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11d4aefa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4aefd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4aeff jne 0x11d4af0d */
  if (!C.zf) goto L_11d4af0d;
  /* 11d4af01 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4af0b jle 0x11d4af17 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4af17;
L_11d4af0d:;
  /* 11d4af0d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11d4af12 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4af17:;
  /* 11d4af17 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d4af1d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4af23 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d4af26 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4af2c je 0x11d4af38 */
  if (C.zf) goto L_11d4af38;
  /* 11d4af2e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11d4af33 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4af38:;
  /* 11d4af38 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d4af3e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4af44 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11d4af4a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d4af50 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4af56 jb 0x11d4ae4c */
  if (C.cf) goto L_11d4ae4c;
  /* 11d4af5c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d4af62 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4af68 je 0x11d4af74 */
  if (C.zf) goto L_11d4af74;
  /* 11d4af6a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11d4af6f jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4af74:;
  /* 11d4af74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4af77 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4af7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4af7f jmp 0x11d4adf1 */
  goto L_11d4adf1;
L_11d4af84:;
  /* 11d4af84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4af87 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4af89 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4af8f je 0x11d4af9b */
  if (C.zf) goto L_11d4af9b;
  /* 11d4af91 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11d4af96 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4af9b:;
  /* 11d4af9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4af9e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11d4afa4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11d4afab jmp 0x11d4afb6 */
  goto L_11d4afb6;
L_11d4afad:;
  /* 11d4afad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4afb0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4afb3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11d4afb6:;
  /* 11d4afb6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4afba jge 0x11d4b1ed */
  if ((C.sf==C.of)) goto L_11d4b1ed;
  /* 11d4afc0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11d4afca mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11d4afd0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11d4afd6:;
  /* 11d4afd6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d4afdc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4afdf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11d4afe5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d4afeb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4aff1 je 0x11d4b11a */
  if (C.zf) goto L_11d4b11a;
  /* 11d4aff7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4affa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11d4b000 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b007 je 0x11d4b11a */
  if (C.zf) goto L_11d4b11a;
  /* 11d4b00d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d4b013 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b019 jb 0x11d4b02e */
  if (C.cf) goto L_11d4b02e;
  /* 11d4b01b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11d4b021 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b026 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b02c jb 0x11d4b038 */
  if (C.cf) goto L_11d4b038;
L_11d4b02e:;
  /* 11d4b02e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11d4b033 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4b038:;
  /* 11d4b038 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d4b03e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b044 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11d4b04a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11d4b050 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b053 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d4b056 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4b059 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b05e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11d4b064:;
  /* 11d4b064 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4b067 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b06d je 0x11d4b08e */
  if (C.zf) goto L_11d4b08e;
  /* 11d4b06f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4b072 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b078 jne 0x11d4b07c */
  if (!C.zf) goto L_11d4b07c;
  /* 11d4b07a jmp 0x11d4b08e */
  goto L_11d4b08e;
L_11d4b07c:;
  /* 11d4b07c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4b07f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4b081 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b084 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4b087 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b089 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d4b08c jmp 0x11d4b064 */
  goto L_11d4b064;
L_11d4b08e:;
  /* 11d4b08e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4b091 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b097 jne 0x11d4b0a3 */
  if (!C.zf) goto L_11d4b0a3;
  /* 11d4b099 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11d4b09e jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4b0a3:;
  /* 11d4b0a3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d4b0a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4b0ab sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d4b0ae sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4b0b1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11d4b0b7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b0be jle 0x11d4b0ca */
  if ((C.zf||C.sf!=C.of)) goto L_11d4b0ca;
  /* 11d4b0c0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11d4b0ca:;
  /* 11d4b0ca mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11d4b0d0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b0d3 je 0x11d4b0df */
  if (C.zf) goto L_11d4b0df;
  /* 11d4b0d5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11d4b0da jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4b0df:;
  /* 11d4b0df mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d4b0e5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d4b0e8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b0ee je 0x11d4b0fa */
  if (C.zf) goto L_11d4b0fa;
  /* 11d4b0f0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11d4b0f5 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4b0fa:;
  /* 11d4b0fa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d4b100 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11d4b106 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11d4b10c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b10f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11d4b115 jmp 0x11d4afd6 */
  goto L_11d4afd6;
L_11d4b11a:;
  /* 11d4b11a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b121 je 0x11d4b191 */
  if (C.zf) goto L_11d4b191;
  /* 11d4b123 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b127 jge 0x11d4b15b */
  if ((C.sf==C.of)) goto L_11d4b15b;
  /* 11d4b129 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4b12e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4b131 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4b133 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11d4b139 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b13b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11d4b141 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4b146 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4b149 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4b14b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11d4b151 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b153 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11d4b159 jmp 0x11d4b191 */
  goto L_11d4b191;
L_11d4b15b:;
  /* 11d4b15b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4b15e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4b161 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4b166 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4b168 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11d4b16e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b170 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11d4b176 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4b179 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4b17c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d4b181 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d4b183 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11d4b189 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b18b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11d4b191:;
  /* 11d4b191 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d4b197 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4b19a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b1a0 jne 0x11d4b1b4 */
  if (!C.zf) goto L_11d4b1b4;
  /* 11d4b1a2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4b1a5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11d4b1ab cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b1b2 je 0x11d4b1be */
  if (C.zf) goto L_11d4b1be;
L_11d4b1b4:;
  /* 11d4b1b4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11d4b1b9 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4b1be:;
  /* 11d4b1be mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11d4b1c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d4b1c7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b1cd je 0x11d4b1d9 */
  if (C.zf) goto L_11d4b1d9;
  /* 11d4b1cf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11d4b1d4 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4b1d9:;
  /* 11d4b1d9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11d4b1df add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b1e2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11d4b1e8 jmp 0x11d4afad */
  goto L_11d4afad;
L_11d4b1ed:;
  /* 11d4b1ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4b1f0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11d4b1f6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11d4b1fc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b200 jne 0x11d4b21a */
  if (!C.zf) goto L_11d4b21a;
  /* 11d4b202 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4b205 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11d4b20b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11d4b211 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b218 je 0x11d4b221 */
  if (C.zf) goto L_11d4b221;
L_11d4b21a:;
  /* 11d4b21a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11d4b21f jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4b221:;
  /* 11d4b221 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11d4b227 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b22d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11d4b233 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4b236 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b23b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d4b23e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b241 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d4b243 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d4b246 jmp 0x11d4ad4a */
  goto L_11d4ad4a;
L_11d4b24b:;
  /* 11d4b24b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d4b251 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11d4b257 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b259 jne 0x11d4b26c */
  if (!C.zf) goto L_11d4b26c;
  /* 11d4b25b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d4b261 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11d4b267 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b26a je 0x11d4b273 */
  if (C.zf) goto L_11d4b273;
L_11d4b26c:;
  /* 11d4b26c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11d4b271 jmp 0x11d4b289 */
  goto L_11d4b289;
L_11d4b273:;
  /* 11d4b273 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d4b279 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b27c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11d4b282 jmp 0x11d4acb3 */
  goto L_11d4acb3;
L_11d4b287:;
  /* 11d4b287 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d4b289:;
  /* 11d4b289 mov esp, ebp */
  ESP = (EBP);
  /* 11d4b28b pop ebp */
  EBP = (pop32());
  /* 11d4b28c ret  */
  ESPCHK(0x11d4ac70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b290 @ 0x11d4b290 (250 bytes, 92 insns) */
void f_11d4b290(void) {
  FTRACE(0x11d4b290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4b290 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4b291 mov ebp, esp */
  EBP = (ESP);
  /* 11d4b293 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4b296 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4b297 push esi */
  push32((uint32_t)(ESI));
  /* 11d4b298 push edi */
  push32((uint32_t)(EDI));
  /* 11d4b299 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11d4b29c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d4b29f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11d4b2a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11d4b2a5:;
  /* 11d4b2a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b2a9 jne 0x11d4b2c9 */
  if (!C.zf) goto L_11d4b2c9;
  /* 11d4b2ab push 0x11d6d120 */
  push32((uint32_t)(0x11d6d120u));
  /* 11d4b2b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4b2b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11d4b2b4 push 0x11d6d114 */
  push32((uint32_t)(0x11d6d114u));
  /* 11d4b2b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4b2bb call 0x11d44440 */
  push32(0x11d4b2c0u); f_11d44440();
  /* 11d4b2c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b2c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b2c6 jne 0x11d4b2c9 */
  if (!C.zf) goto L_11d4b2c9;
  /* 11d4b2c8 int3  */
  x86_unimpl("int3 @ 0x11d4b2c8");
L_11d4b2c9:;
  /* 11d4b2c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4b2cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4b2cd jne 0x11d4b2a5 */
  if (!C.zf) goto L_11d4b2a5;
L_11d4b2cf:;
  /* 11d4b2cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b2d3 jne 0x11d4b2f3 */
  if (!C.zf) goto L_11d4b2f3;
  /* 11d4b2d5 push 0x11d6d104 */
  push32((uint32_t)(0x11d6d104u));
  /* 11d4b2da push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4b2dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11d4b2de push 0x11d6d114 */
  push32((uint32_t)(0x11d6d114u));
  /* 11d4b2e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4b2e5 call 0x11d44440 */
  push32(0x11d4b2eau); f_11d44440();
  /* 11d4b2ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b2ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b2f0 jne 0x11d4b2f3 */
  if (!C.zf) goto L_11d4b2f3;
  /* 11d4b2f2 int3  */
  x86_unimpl("int3 @ 0x11d4b2f2");
L_11d4b2f3:;
  /* 11d4b2f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b2f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4b2f7 jne 0x11d4b2cf */
  if (!C.zf) goto L_11d4b2cf;
  /* 11d4b2f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b2fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11d4b303 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b309 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d4b30c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b30f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b312 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d4b314 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b317 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11d4b31e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4b321 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4b322 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4b325 push edx */
  push32((uint32_t)(EDX));
  /* 11d4b326 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b329 push eax */
  push32((uint32_t)(EAX));
  /* 11d4b32a call 0x11d4c310 */
  push32(0x11d4b32fu); f_11d4c310();
  /* 11d4b32f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b332 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d4b335 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b338 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4b33b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4b33e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b341 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d4b344 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b347 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b34b jl 0x11d4b36f */
  if ((C.sf!=C.of)) goto L_11d4b36f;
  /* 11d4b34d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b350 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d4b352 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d4b355 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b357 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b35d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11d4b360 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b363 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d4b365 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b368 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b36b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d4b36d jmp 0x11d4b380 */
  goto L_11d4b380;
L_11d4b36f:;
  /* 11d4b36f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b372 push edx */
  push32((uint32_t)(EDX));
  /* 11d4b373 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4b375 call 0x11d4c090 */
  push32(0x11d4b37au); f_11d4c090();
  /* 11d4b37a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b37d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11d4b380:;
  /* 11d4b380 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4b383 pop edi */
  EDI = (pop32());
  /* 11d4b384 pop esi */
  ESI = (pop32());
  /* 11d4b385 pop ebx */
  EBX = (pop32());
  /* 11d4b386 mov esp, ebp */
  ESP = (EBP);
  /* 11d4b388 pop ebp */
  EBP = (pop32());
  /* 11d4b389 ret  */
  ESPCHK(0x11d4b290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b390 @ 0x11d4b390 (183 bytes, 58 insns) */
void f_11d4b390(void) {
  FTRACE(0x11d4b390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4b390 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4b391 mov ebp, esp */
  EBP = (ESP);
  /* 11d4b393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4b396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b399 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b39c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b3a1 ja 0x11d4b3ba */
  if ((!C.cf&&!C.zf)) goto L_11d4b3ba;
  /* 11d4b3a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b3a6 mov edx, dword ptr [0x11d6fc98] */
  EDX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d4b3ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b3ae mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11d4b3b2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b3b5 jmp 0x11d4b443 */
  goto L_11d4b443;
L_11d4b3ba:;
  /* 11d4b3ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b3bd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11d4b3c0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b3c6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b3cc mov edx, dword ptr [0x11d6fc98] */
  EDX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d4b3d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b3d4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11d4b3d8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b3dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4b3df je 0x11d4b403 */
  if (C.zf) goto L_11d4b403;
  /* 11d4b3e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b3e4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11d4b3e7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b3ed mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11d4b3f0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d4b3f3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11d4b3f6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11d4b3fa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11d4b401 jmp 0x11d4b414 */
  goto L_11d4b414;
L_11d4b403:;
  /* 11d4b403 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d4b406 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11d4b409 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11d4b40d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11d4b414:;
  /* 11d4b414 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4b416 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4b418 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4b41a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11d4b41d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4b41e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4b421 push edx */
  push32((uint32_t)(EDX));
  /* 11d4b422 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d4b425 push eax */
  push32((uint32_t)(EAX));
  /* 11d4b426 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4b428 call 0x11d4d5b0 */
  push32(0x11d4b42du); f_11d4d5b0();
  /* 11d4b42d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4b432 jne 0x11d4b438 */
  if (!C.zf) goto L_11d4b438;
  /* 11d4b434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b436 jmp 0x11d4b443 */
  goto L_11d4b443;
L_11d4b438:;
  /* 11d4b438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b43b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b440 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11d4b443:;
  /* 11d4b443 mov esp, ebp */
  ESP = (EBP);
  /* 11d4b445 pop ebp */
  EBP = (pop32());
  /* 11d4b446 ret  */
  ESPCHK(0x11d4b390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b450 @ 0x11d4b450 (836 bytes, 238 insns) */
void f_11d4b450(void) {
  FTRACE(0x11d4b450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4b450 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4b451 mov ebp, esp */
  EBP = (ESP);
  /* 11d4b453 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4b456 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d4b458 call 0x11d48d80 */
  push32(0x11d4b45du); f_11d48d80();
  /* 11d4b45d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b463 push eax */
  push32((uint32_t)(EAX));
  /* 11d4b464 call 0x11d4b7a0 */
  push32(0x11d4b469u); f_11d4b7a0();
  /* 11d4b469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b46c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d4b46f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b472 cmp ecx, dword ptr [0x11d72d24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d72d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b478 jne 0x11d4b48b */
  if (!C.zf) goto L_11d4b48b;
  /* 11d4b47a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d4b47c call 0x11d48e20 */
  push32(0x11d4b481u); f_11d48e20();
  /* 11d4b481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b486 jmp 0x11d4b790 */
  goto L_11d4b790;
L_11d4b48b:;
  /* 11d4b48b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b48f jne 0x11d4b4ac */
  if (!C.zf) goto L_11d4b4ac;
  /* 11d4b491 call 0x11d4b880 */
  push32(0x11d4b496u); f_11d4b880();
  /* 11d4b496 call 0x11d4b900 */
  push32(0x11d4b49bu); f_11d4b900();
  /* 11d4b49b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d4b49d call 0x11d48e20 */
  push32(0x11d4b4a2u); f_11d48e20();
  /* 11d4b4a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b4a7 jmp 0x11d4b790 */
  goto L_11d4b790;
L_11d4b4ac:;
  /* 11d4b4ac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4b4b3 jmp 0x11d4b4be */
  goto L_11d4b4be;
L_11d4b4b5:;
  /* 11d4b4b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b4b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b4bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d4b4be:;
  /* 11d4b4be cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b4c2 jae 0x11d4b60f */
  if (!C.cf) goto L_11d4b60f;
  /* 11d4b4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b4cb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4b4ce mov ecx, dword ptr [eax + 0x11d6feb8] */
  ECX = (r32((uint32_t)(EAX + 0x11d6feb8)));
  /* 11d4b4d4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b4d7 jne 0x11d4b60a */
  if (!C.zf) goto L_11d4b60a;
  /* 11d4b4dd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d4b4e4 jmp 0x11d4b4ef */
  goto L_11d4b4ef;
L_11d4b4e6:;
  /* 11d4b4e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b4e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b4ec mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11d4b4ef:;
  /* 11d4b4ef cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b4f6 jae 0x11d4b504 */
  if (!C.cf) goto L_11d4b504;
  /* 11d4b4f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b4fb mov byte ptr [eax + 0x11d72ec0], 0 */
  w8((uint32_t)(EAX + 0x11d72ec0), (0x0u));
  /* 11d4b502 jmp 0x11d4b4e6 */
  goto L_11d4b4e6;
L_11d4b504:;
  /* 11d4b504 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4b50b jmp 0x11d4b516 */
  goto L_11d4b516;
L_11d4b50d:;
  /* 11d4b50d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4b510 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b513 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11d4b516:;
  /* 11d4b516 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b51a jae 0x11d4b597 */
  if (!C.cf) goto L_11d4b597;
  /* 11d4b51c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b51f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4b522 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4b525 lea ecx, [edx + eax*8 + 0x11d6fec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11d6fec8));
  /* 11d4b52c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d4b52f jmp 0x11d4b53a */
  goto L_11d4b53a;
L_11d4b531:;
  /* 11d4b531 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4b534 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b537 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d4b53a:;
  /* 11d4b53a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4b53d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b53f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d4b541 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4b543 je 0x11d4b592 */
  if (C.zf) goto L_11d4b592;
  /* 11d4b545 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4b548 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b54a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d4b54d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4b54f je 0x11d4b592 */
  if (C.zf) goto L_11d4b592;
  /* 11d4b551 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4b554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4b556 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d4b558 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d4b55b jmp 0x11d4b566 */
  goto L_11d4b566;
L_11d4b55d:;
  /* 11d4b55d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b560 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b563 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d4b566:;
  /* 11d4b566 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4b569 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4b56b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11d4b56e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b571 ja 0x11d4b590 */
  if ((!C.cf&&!C.zf)) goto L_11d4b590;
  /* 11d4b573 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b576 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4b579 mov dl, byte ptr [eax + 0x11d72ec1] */
  DL = (r8((uint32_t)(EAX + 0x11d72ec1)));
  /* 11d4b57f or dl, byte ptr [ecx + 0x11d6feb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11d6feb0))); DL = (_r); fl_logic(_r,8); }
  /* 11d4b585 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b588 mov byte ptr [eax + 0x11d72ec1], dl */
  w8((uint32_t)(EAX + 0x11d72ec1), (DL));
  /* 11d4b58e jmp 0x11d4b55d */
  goto L_11d4b55d;
L_11d4b590:;
  /* 11d4b590 jmp 0x11d4b531 */
  goto L_11d4b531;
L_11d4b592:;
  /* 11d4b592 jmp 0x11d4b50d */
  goto L_11d4b50d;
L_11d4b597:;
  /* 11d4b597 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b59a mov dword ptr [0x11d72d24], ecx */
  w32((uint32_t)(0x11d72d24), (ECX));
  /* 11d4b5a0 mov dword ptr [0x11d72dac], 1 */
  w32((uint32_t)(0x11d72dac), (0x1u));
  /* 11d4b5aa mov edx, dword ptr [0x11d72d24] */
  EDX = (r32((uint32_t)(0x11d72d24)));
  /* 11d4b5b0 push edx */
  push32((uint32_t)(EDX));
  /* 11d4b5b1 call 0x11d4b800 */
  push32(0x11d4b5b6u); f_11d4b800();
  /* 11d4b5b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b5b9 mov dword ptr [0x11d72fc4], eax */
  w32((uint32_t)(0x11d72fc4), (EAX));
  /* 11d4b5be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4b5c5 jmp 0x11d4b5d0 */
  goto L_11d4b5d0;
L_11d4b5c7:;
  /* 11d4b5c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4b5ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b5cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d4b5d0:;
  /* 11d4b5d0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b5d4 jae 0x11d4b5f4 */
  if (!C.cf) goto L_11d4b5f4;
  /* 11d4b5d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b5d9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4b5dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4b5df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4b5e2 mov cx, word ptr [ecx + eax*2 + 0x11d6febc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11d6febc)));
  /* 11d4b5ea mov word ptr [edx*2 + 0x11d72da0], cx */
  w16((uint32_t)(EDX*2 + 0x11d72da0), (CX));
  /* 11d4b5f2 jmp 0x11d4b5c7 */
  goto L_11d4b5c7;
L_11d4b5f4:;
  /* 11d4b5f4 call 0x11d4b900 */
  push32(0x11d4b5f9u); f_11d4b900();
  /* 11d4b5f9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d4b5fb call 0x11d48e20 */
  push32(0x11d4b600u); f_11d48e20();
  /* 11d4b600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b605 jmp 0x11d4b790 */
  goto L_11d4b790;
L_11d4b60a:;
  /* 11d4b60a jmp 0x11d4b4b5 */
  goto L_11d4b4b5;
L_11d4b60f:;
  /* 11d4b60f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11d4b612 push edx */
  push32((uint32_t)(EDX));
  /* 11d4b613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b616 push eax */
  push32((uint32_t)(EAX));
  /* 11d4b617 call dword ptr [0x11d74344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74344))), 0x11d4b61du);
  /* 11d4b61d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b620 jne 0x11d4b762 */
  if (!C.zf) goto L_11d4b762;
  /* 11d4b626 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d4b62d jmp 0x11d4b638 */
  goto L_11d4b638;
L_11d4b62f:;
  /* 11d4b62f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b632 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b635 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11d4b638:;
  /* 11d4b638 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b63f jae 0x11d4b64d */
  if (!C.cf) goto L_11d4b64d;
  /* 11d4b641 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b644 mov byte ptr [edx + 0x11d72ec0], 0 */
  w8((uint32_t)(EDX + 0x11d72ec0), (0x0u));
  /* 11d4b64b jmp 0x11d4b62f */
  goto L_11d4b62f;
L_11d4b64d:;
  /* 11d4b64d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b650 mov dword ptr [0x11d72d24], eax */
  w32((uint32_t)(0x11d72d24), (EAX));
  /* 11d4b655 mov dword ptr [0x11d72fc4], 0 */
  w32((uint32_t)(0x11d72fc4), (0x0u));
  /* 11d4b65f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b663 jbe 0x11d4b71e */
  if ((C.cf||C.zf)) goto L_11d4b71e;
  /* 11d4b669 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11d4b66c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11d4b66f jmp 0x11d4b67a */
  goto L_11d4b67a;
L_11d4b671:;
  /* 11d4b671 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4b674 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b677 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11d4b67a:;
  /* 11d4b67a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4b67d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b67f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d4b681 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4b683 je 0x11d4b6cc */
  if (C.zf) goto L_11d4b6cc;
  /* 11d4b685 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4b688 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b68a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d4b68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4b68f je 0x11d4b6cc */
  if (C.zf) goto L_11d4b6cc;
  /* 11d4b691 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4b694 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4b696 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d4b698 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d4b69b jmp 0x11d4b6a6 */
  goto L_11d4b6a6;
L_11d4b69d:;
  /* 11d4b69d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b6a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b6a3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d4b6a6:;
  /* 11d4b6a6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4b6a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4b6ab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11d4b6ae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b6b1 ja 0x11d4b6ca */
  if ((!C.cf&&!C.zf)) goto L_11d4b6ca;
  /* 11d4b6b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b6b6 mov cl, byte ptr [eax + 0x11d72ec1] */
  CL = (r8((uint32_t)(EAX + 0x11d72ec1)));
  /* 11d4b6bc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11d4b6bf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b6c2 mov byte ptr [edx + 0x11d72ec1], cl */
  w8((uint32_t)(EDX + 0x11d72ec1), (CL));
  /* 11d4b6c8 jmp 0x11d4b69d */
  goto L_11d4b69d;
L_11d4b6ca:;
  /* 11d4b6ca jmp 0x11d4b671 */
  goto L_11d4b671;
L_11d4b6cc:;
  /* 11d4b6cc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11d4b6d3 jmp 0x11d4b6de */
  goto L_11d4b6de;
L_11d4b6d5:;
  /* 11d4b6d5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b6d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b6db mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d4b6de:;
  /* 11d4b6de cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b6e5 jae 0x11d4b6fe */
  if (!C.cf) goto L_11d4b6fe;
  /* 11d4b6e7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b6ea mov dl, byte ptr [ecx + 0x11d72ec1] */
  DL = (r8((uint32_t)(ECX + 0x11d72ec1)));
  /* 11d4b6f0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11d4b6f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4b6f6 mov byte ptr [eax + 0x11d72ec1], dl */
  w8((uint32_t)(EAX + 0x11d72ec1), (DL));
  /* 11d4b6fc jmp 0x11d4b6d5 */
  goto L_11d4b6d5;
L_11d4b6fe:;
  /* 11d4b6fe mov ecx, dword ptr [0x11d72d24] */
  ECX = (r32((uint32_t)(0x11d72d24)));
  /* 11d4b704 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4b705 call 0x11d4b800 */
  push32(0x11d4b70au); f_11d4b800();
  /* 11d4b70a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b70d mov dword ptr [0x11d72fc4], eax */
  w32((uint32_t)(0x11d72fc4), (EAX));
  /* 11d4b712 mov dword ptr [0x11d72dac], 1 */
  w32((uint32_t)(0x11d72dac), (0x1u));
  /* 11d4b71c jmp 0x11d4b728 */
  goto L_11d4b728;
L_11d4b71e:;
  /* 11d4b71e mov dword ptr [0x11d72dac], 0 */
  w32((uint32_t)(0x11d72dac), (0x0u));
L_11d4b728:;
  /* 11d4b728 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4b72f jmp 0x11d4b73a */
  goto L_11d4b73a;
L_11d4b731:;
  /* 11d4b731 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4b734 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b737 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d4b73a:;
  /* 11d4b73a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b73e jae 0x11d4b74f */
  if (!C.cf) goto L_11d4b74f;
  /* 11d4b740 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4b743 mov word ptr [eax*2 + 0x11d72da0], 0 */
  w16((uint32_t)(EAX*2 + 0x11d72da0), (0x0u));
  /* 11d4b74d jmp 0x11d4b731 */
  goto L_11d4b731;
L_11d4b74f:;
  /* 11d4b74f call 0x11d4b900 */
  push32(0x11d4b754u); f_11d4b900();
  /* 11d4b754 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d4b756 call 0x11d48e20 */
  push32(0x11d4b75bu); f_11d48e20();
  /* 11d4b75b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b75e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b760 jmp 0x11d4b790 */
  goto L_11d4b790;
L_11d4b762:;
  /* 11d4b762 cmp dword ptr [0x11d71840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b769 je 0x11d4b783 */
  if (C.zf) goto L_11d4b783;
  /* 11d4b76b call 0x11d4b880 */
  push32(0x11d4b770u); f_11d4b880();
  /* 11d4b770 call 0x11d4b900 */
  push32(0x11d4b775u); f_11d4b900();
  /* 11d4b775 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d4b777 call 0x11d48e20 */
  push32(0x11d4b77cu); f_11d48e20();
  /* 11d4b77c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b77f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4b781 jmp 0x11d4b790 */
  goto L_11d4b790;
L_11d4b783:;
  /* 11d4b783 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d4b785 call 0x11d48e20 */
  push32(0x11d4b78au); f_11d48e20();
  /* 11d4b78a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b78d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d4b790:;
  /* 11d4b790 mov esp, ebp */
  ESP = (EBP);
  /* 11d4b792 pop ebp */
  EBP = (pop32());
  /* 11d4b793 ret  */
  ESPCHK(0x11d4b450u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11d4b7a0 (89 bytes, 21 insns) */
void f_11d4b7a0(void) {
  FTRACE(0x11d4b7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4b7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4b7a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4b7a3 mov dword ptr [0x11d71840], 0 */
  w32((uint32_t)(0x11d71840), (0x0u));
  /* 11d4b7ad cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b7b1 jne 0x11d4b7c5 */
  if (!C.zf) goto L_11d4b7c5;
  /* 11d4b7b3 mov dword ptr [0x11d71840], 1 */
  w32((uint32_t)(0x11d71840), (0x1u));
  /* 11d4b7bd call dword ptr [0x11d7433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7433c))), 0x11d4b7c3u);
  /* 11d4b7c3 jmp 0x11d4b7f7 */
  goto L_11d4b7f7;
L_11d4b7c5:;
  /* 11d4b7c5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b7c9 jne 0x11d4b7dd */
  if (!C.zf) goto L_11d4b7dd;
  /* 11d4b7cb mov dword ptr [0x11d71840], 1 */
  w32((uint32_t)(0x11d71840), (0x1u));
  /* 11d4b7d5 call dword ptr [0x11d74340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74340))), 0x11d4b7dbu);
  /* 11d4b7db jmp 0x11d4b7f7 */
  goto L_11d4b7f7;
L_11d4b7dd:;
  /* 11d4b7dd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b7e1 jne 0x11d4b7f4 */
  if (!C.zf) goto L_11d4b7f4;
  /* 11d4b7e3 mov dword ptr [0x11d71840], 1 */
  w32((uint32_t)(0x11d71840), (0x1u));
  /* 11d4b7ed mov eax, dword ptr [0x11d71860] */
  EAX = (r32((uint32_t)(0x11d71860)));
  /* 11d4b7f2 jmp 0x11d4b7f7 */
  goto L_11d4b7f7;
L_11d4b7f4:;
  /* 11d4b7f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11d4b7f7:;
  /* 11d4b7f7 pop ebp */
  EBP = (pop32());
  /* 11d4b7f8 ret  */
  ESPCHK(0x11d4b7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b800 @ 0x11d4b800 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11d4b800(void) {
  FTRACE(0x11d4b800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4b800 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4b801 mov ebp, esp */
  EBP = (ESP);
  /* 11d4b803 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4b804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4b807 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4b80a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b80d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4b813 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d4b816 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b81a ja 0x11d4b84a */
  if ((!C.cf&&!C.zf)) goto L_11d4b84a;
  /* 11d4b81c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b81f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4b821 mov dl, byte ptr [eax + 0x11d4b864] */
  DL = (r8((uint32_t)(EAX + 0x11d4b864)));
  /* 11d4b827 jmp dword ptr [edx*4 + 0x11d4b850] */
  switch (EDX) {
    case 0: goto L_11d4b82e;
    case 1: goto L_11d4b835;
    case 2: goto L_11d4b83c;
    case 3: goto L_11d4b843;
    case 4: goto L_11d4b84a;
    default: x86_unimpl("switch@0x11d4b827 out of table"); return;
  }
L_11d4b82e:;
  /* 11d4b82e mov eax, 0x411 */
  EAX = (0x411u);
  /* 11d4b833 jmp 0x11d4b84c */
  goto L_11d4b84c;
L_11d4b835:;
  /* 11d4b835 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11d4b83a jmp 0x11d4b84c */
  goto L_11d4b84c;
L_11d4b83c:;
  /* 11d4b83c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11d4b841 jmp 0x11d4b84c */
  goto L_11d4b84c;
L_11d4b843:;
  /* 11d4b843 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11d4b848 jmp 0x11d4b84c */
  goto L_11d4b84c;
L_11d4b84a:;
  /* 11d4b84a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d4b84c:;
  /* 11d4b84c mov esp, ebp */
  ESP = (EBP);
  /* 11d4b84e pop ebp */
  EBP = (pop32());
  /* 11d4b84f ret  */
  ESPCHK(0x11d4b800u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11d4b880 (116 bytes, 29 insns) */
void f_11d4b880(void) {
  FTRACE(0x11d4b880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4b880 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4b881 mov ebp, esp */
  EBP = (ESP);
  /* 11d4b883 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4b884 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4b88b jmp 0x11d4b896 */
  goto L_11d4b896;
L_11d4b88d:;
  /* 11d4b88d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b890 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b893 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d4b896:;
  /* 11d4b896 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b89d jge 0x11d4b8ab */
  if ((C.sf==C.of)) goto L_11d4b8ab;
  /* 11d4b89f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b8a2 mov byte ptr [ecx + 0x11d72ec0], 0 */
  w8((uint32_t)(ECX + 0x11d72ec0), (0x0u));
  /* 11d4b8a9 jmp 0x11d4b88d */
  goto L_11d4b88d;
L_11d4b8ab:;
  /* 11d4b8ab mov dword ptr [0x11d72d24], 0 */
  w32((uint32_t)(0x11d72d24), (0x0u));
  /* 11d4b8b5 mov dword ptr [0x11d72dac], 0 */
  w32((uint32_t)(0x11d72dac), (0x0u));
  /* 11d4b8bf mov dword ptr [0x11d72fc4], 0 */
  w32((uint32_t)(0x11d72fc4), (0x0u));
  /* 11d4b8c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4b8d0 jmp 0x11d4b8db */
  goto L_11d4b8db;
L_11d4b8d2:;
  /* 11d4b8d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b8d5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b8d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d4b8db:;
  /* 11d4b8db cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b8df jge 0x11d4b8f0 */
  if ((C.sf==C.of)) goto L_11d4b8f0;
  /* 11d4b8e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b8e4 mov word ptr [eax*2 + 0x11d72da0], 0 */
  w16((uint32_t)(EAX*2 + 0x11d72da0), (0x0u));
  /* 11d4b8ee jmp 0x11d4b8d2 */
  goto L_11d4b8d2;
L_11d4b8f0:;
  /* 11d4b8f0 mov esp, ebp */
  ESP = (EBP);
  /* 11d4b8f2 pop ebp */
  EBP = (pop32());
  /* 11d4b8f3 ret  */
  ESPCHK(0x11d4b880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b900 @ 0x11d4b900 (770 bytes, 175 insns) */
void f_11d4b900(void) {
  FTRACE(0x11d4b900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4b900 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4b901 mov ebp, esp */
  EBP = (ESP);
  /* 11d4b903 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4b909 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11d4b90f push eax */
  push32((uint32_t)(EAX));
  /* 11d4b910 mov ecx, dword ptr [0x11d72d24] */
  ECX = (r32((uint32_t)(0x11d72d24)));
  /* 11d4b916 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4b917 call dword ptr [0x11d74344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74344))), 0x11d4b91du);
  /* 11d4b91d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b920 jne 0x11d4bb39 */
  if (!C.zf) goto L_11d4bb39;
  /* 11d4b926 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11d4b930 jmp 0x11d4b941 */
  goto L_11d4b941;
L_11d4b932:;
  /* 11d4b932 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4b938 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b93b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11d4b941:;
  /* 11d4b941 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b94b jae 0x11d4b962 */
  if (!C.cf) goto L_11d4b962;
  /* 11d4b94d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4b953 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11d4b959 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11d4b960 jmp 0x11d4b932 */
  goto L_11d4b932;
L_11d4b962:;
  /* 11d4b962 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11d4b969 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11d4b96f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4b972 jmp 0x11d4b97d */
  goto L_11d4b97d;
L_11d4b974:;
  /* 11d4b974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b977 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b97a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d4b97d:;
  /* 11d4b97d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b980 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4b982 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d4b984 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4b986 je 0x11d4b9c8 */
  if (C.zf) goto L_11d4b9c8;
  /* 11d4b988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b98b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b98d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d4b98f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11d4b995 jmp 0x11d4b9a6 */
  goto L_11d4b9a6;
L_11d4b997:;
  /* 11d4b997 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4b99d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b9a0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11d4b9a6:;
  /* 11d4b9a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4b9a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4b9ab mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d4b9ae cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4b9b4 ja 0x11d4b9c6 */
  if ((!C.cf&&!C.zf)) goto L_11d4b9c6;
  /* 11d4b9b6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4b9bc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11d4b9c4 jmp 0x11d4b997 */
  goto L_11d4b997;
L_11d4b9c6:;
  /* 11d4b9c6 jmp 0x11d4b974 */
  goto L_11d4b974;
L_11d4b9c8:;
  /* 11d4b9c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4b9ca mov eax, dword ptr [0x11d72fc4] */
  EAX = (r32((uint32_t)(0x11d72fc4)));
  /* 11d4b9cf push eax */
  push32((uint32_t)(EAX));
  /* 11d4b9d0 mov ecx, dword ptr [0x11d72d24] */
  ECX = (r32((uint32_t)(0x11d72d24)));
  /* 11d4b9d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4b9d7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11d4b9dd push edx */
  push32((uint32_t)(EDX));
  /* 11d4b9de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d4b9e3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11d4b9e9 push eax */
  push32((uint32_t)(EAX));
  /* 11d4b9ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4b9ec call 0x11d4d5b0 */
  push32(0x11d4b9f1u); f_11d4d5b0();
  /* 11d4b9f1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4b9f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4b9f6 mov ecx, dword ptr [0x11d72d24] */
  ECX = (r32((uint32_t)(0x11d72d24)));
  /* 11d4b9fc push ecx */
  push32((uint32_t)(ECX));
  /* 11d4b9fd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d4ba02 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11d4ba08 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ba09 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d4ba0e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11d4ba14 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ba15 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d4ba1a mov ecx, dword ptr [0x11d72fc4] */
  ECX = (r32((uint32_t)(0x11d72fc4)));
  /* 11d4ba20 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ba21 call 0x11d4d770 */
  push32(0x11d4ba26u); f_11d4d770();
  /* 11d4ba26 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ba29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4ba2b mov edx, dword ptr [0x11d72d24] */
  EDX = (r32((uint32_t)(0x11d72d24)));
  /* 11d4ba31 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ba32 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d4ba37 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11d4ba3d push eax */
  push32((uint32_t)(EAX));
  /* 11d4ba3e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d4ba43 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11d4ba49 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ba4a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11d4ba4f mov edx, dword ptr [0x11d72fc4] */
  EDX = (r32((uint32_t)(0x11d72fc4)));
  /* 11d4ba55 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ba56 call 0x11d4d770 */
  push32(0x11d4ba5bu); f_11d4d770();
  /* 11d4ba5b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ba5e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11d4ba68 jmp 0x11d4ba79 */
  goto L_11d4ba79;
L_11d4ba6a:;
  /* 11d4ba6a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4ba70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ba73 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11d4ba79:;
  /* 11d4ba79 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ba83 jae 0x11d4bb34 */
  if (!C.cf) goto L_11d4bb34;
  /* 11d4ba89 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4ba8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4ba91 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11d4ba99 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4ba9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4ba9e je 0x11d4bad6 */
  if (C.zf) goto L_11d4bad6;
  /* 11d4baa0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4baa6 mov cl, byte ptr [eax + 0x11d72ec1] */
  CL = (r8((uint32_t)(EAX + 0x11d72ec1)));
  /* 11d4baac or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11d4baaf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bab5 mov byte ptr [edx + 0x11d72ec1], cl */
  w8((uint32_t)(EDX + 0x11d72ec1), (CL));
  /* 11d4babb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bac1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bac7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11d4bace mov byte ptr [eax + 0x11d72dc0], dl */
  w8((uint32_t)(EAX + 0x11d72dc0), (DL));
  /* 11d4bad4 jmp 0x11d4bb2f */
  goto L_11d4bb2f;
L_11d4bad6:;
  /* 11d4bad6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4badc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4bade mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11d4bae6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4bae9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4baeb je 0x11d4bb22 */
  if (C.zf) goto L_11d4bb22;
  /* 11d4baed mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4baf3 mov al, byte ptr [edx + 0x11d72ec1] */
  AL = (r8((uint32_t)(EDX + 0x11d72ec1)));
  /* 11d4baf9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11d4bafb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bb01 mov byte ptr [ecx + 0x11d72ec1], al */
  w8((uint32_t)(ECX + 0x11d72ec1), (AL));
  /* 11d4bb07 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bb0d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bb13 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11d4bb1a mov byte ptr [edx + 0x11d72dc0], cl */
  w8((uint32_t)(EDX + 0x11d72dc0), (CL));
  /* 11d4bb20 jmp 0x11d4bb2f */
  goto L_11d4bb2f;
L_11d4bb22:;
  /* 11d4bb22 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bb28 mov byte ptr [edx + 0x11d72dc0], 0 */
  w8((uint32_t)(EDX + 0x11d72dc0), (0x0u));
L_11d4bb2f:;
  /* 11d4bb2f jmp 0x11d4ba6a */
  goto L_11d4ba6a;
L_11d4bb34:;
  /* 11d4bb34 jmp 0x11d4bbfe */
  goto L_11d4bbfe;
L_11d4bb39:;
  /* 11d4bb39 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11d4bb43 jmp 0x11d4bb54 */
  goto L_11d4bb54;
L_11d4bb45:;
  /* 11d4bb45 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bb4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bb4e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11d4bb54:;
  /* 11d4bb54 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bb5e jae 0x11d4bbfe */
  if (!C.cf) goto L_11d4bbfe;
  /* 11d4bb64 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bb6b jb 0x11d4bba8 */
  if (C.cf) goto L_11d4bba8;
  /* 11d4bb6d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bb74 ja 0x11d4bba8 */
  if ((!C.cf&&!C.zf)) goto L_11d4bba8;
  /* 11d4bb76 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bb7c mov dl, byte ptr [ecx + 0x11d72ec1] */
  DL = (r8((uint32_t)(ECX + 0x11d72ec1)));
  /* 11d4bb82 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11d4bb85 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bb8b mov byte ptr [eax + 0x11d72ec1], dl */
  w8((uint32_t)(EAX + 0x11d72ec1), (DL));
  /* 11d4bb91 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bb97 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bb9a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bba0 mov byte ptr [edx + 0x11d72dc0], cl */
  w8((uint32_t)(EDX + 0x11d72dc0), (CL));
  /* 11d4bba6 jmp 0x11d4bbf9 */
  goto L_11d4bbf9;
L_11d4bba8:;
  /* 11d4bba8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bbaf jb 0x11d4bbec */
  if (C.cf) goto L_11d4bbec;
  /* 11d4bbb1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bbb8 ja 0x11d4bbec */
  if ((!C.cf&&!C.zf)) goto L_11d4bbec;
  /* 11d4bbba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bbc0 mov cl, byte ptr [eax + 0x11d72ec1] */
  CL = (r8((uint32_t)(EAX + 0x11d72ec1)));
  /* 11d4bbc6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11d4bbc9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bbcf mov byte ptr [edx + 0x11d72ec1], cl */
  w8((uint32_t)(EDX + 0x11d72ec1), (CL));
  /* 11d4bbd5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bbdb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4bbde mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bbe4 mov byte ptr [ecx + 0x11d72dc0], al */
  w8((uint32_t)(ECX + 0x11d72dc0), (AL));
  /* 11d4bbea jmp 0x11d4bbf9 */
  goto L_11d4bbf9;
L_11d4bbec:;
  /* 11d4bbec mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d4bbf2 mov byte ptr [edx + 0x11d72dc0], 0 */
  w8((uint32_t)(EDX + 0x11d72dc0), (0x0u));
L_11d4bbf9:;
  /* 11d4bbf9 jmp 0x11d4bb45 */
  goto L_11d4bb45;
L_11d4bbfe:;
  /* 11d4bbfe mov esp, ebp */
  ESP = (EBP);
  /* 11d4bc00 pop ebp */
  EBP = (pop32());
  /* 11d4bc01 ret  */
  ESPCHK(0x11d4b900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc10 @ 0x11d4bc10 (23 bytes, 9 insns) */
void f_11d4bc10(void) {
  FTRACE(0x11d4bc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4bc10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4bc11 mov ebp, esp */
  EBP = (ESP);
  /* 11d4bc13 cmp dword ptr [0x11d72dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d72dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bc1a je 0x11d4bc23 */
  if (C.zf) goto L_11d4bc23;
  /* 11d4bc1c mov eax, dword ptr [0x11d72d24] */
  EAX = (r32((uint32_t)(0x11d72d24)));
  /* 11d4bc21 jmp 0x11d4bc25 */
  goto L_11d4bc25;
L_11d4bc23:;
  /* 11d4bc23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d4bc25:;
  /* 11d4bc25 pop ebp */
  EBP = (pop32());
  /* 11d4bc26 ret  */
  ESPCHK(0x11d4bc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x11d4bc30 (34 bytes, 10 insns) */
void f_11d4bc30(void) {
  FTRACE(0x11d4bc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4bc30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4bc31 mov ebp, esp */
  EBP = (ESP);
  /* 11d4bc33 cmp dword ptr [0x11d73170], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d73170))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bc3a jne 0x11d4bc50 */
  if (!C.zf) goto L_11d4bc50;
  /* 11d4bc3c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11d4bc3e call 0x11d4b450 */
  push32(0x11d4bc43u); f_11d4b450();
  /* 11d4bc43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bc46 mov dword ptr [0x11d73170], 1 */
  w32((uint32_t)(0x11d73170), (0x1u));
L_11d4bc50:;
  /* 11d4bc50 pop ebp */
  EBP = (pop32());
  /* 11d4bc51 ret  */
  ESPCHK(0x11d4bc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc60 @ 0x11d4bc60 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11d4bc60(void) {
  FTRACE(0x11d4bc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4bc60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4bc61 mov ebp, esp */
  EBP = (ESP);
  /* 11d4bc63 push edi */
  push32((uint32_t)(EDI));
  /* 11d4bc64 push esi */
  push32((uint32_t)(ESI));
  /* 11d4bc65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4bc68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4bc6b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4bc6e mov eax, ecx */
  EAX = (ECX);
  /* 11d4bc70 mov edx, ecx */
  EDX = (ECX);
  /* 11d4bc72 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bc74 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bc76 jbe 0x11d4bc80 */
  if ((C.cf||C.zf)) goto L_11d4bc80;
  /* 11d4bc78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bc7a jb 0x11d4bdf8 */
  if (C.cf) goto L_11d4bdf8;
L_11d4bc80:;
  /* 11d4bc80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d4bc86 jne 0x11d4bc9c */
  if (!C.zf) goto L_11d4bc9c;
  /* 11d4bc88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4bc8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4bc8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bc91 jb 0x11d4bcbc */
  if (C.cf) goto L_11d4bcbc;
  /* 11d4bc93 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4bc95 jmp dword ptr [edx*4 + 0x11d4bda8] */
  switch (EDX) {
    case 0: goto L_11d4bdb8;
    case 1: goto L_11d4bdc0;
    case 2: goto L_11d4bdcc;
    case 3: goto L_11d4bde0;
    default: x86_unimpl("switch@0x11d4bc95 out of table"); return;
  }
L_11d4bc9c:;
  /* 11d4bc9c mov eax, edi */
  EAX = (EDI);
  /* 11d4bc9e mov edx, 3 */
  EDX = (0x3u);
  /* 11d4bca3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4bca6 jb 0x11d4bcb4 */
  if (C.cf) goto L_11d4bcb4;
  /* 11d4bca8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4bcab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bcad jmp dword ptr [eax*4 + 0x11d4bcc0] */
  switch (EAX) {
    case 1: goto L_11d4bcd0;
    case 2: goto L_11d4bcfc;
    case 3: goto L_11d4bd20;
    default: x86_unimpl("switch@0x11d4bcad out of table"); return;
  }
L_11d4bcb4:;
  /* 11d4bcb4 jmp dword ptr [ecx*4 + 0x11d4bdb8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11d4bdb8)))); return;
  /* 11d4bcbb nop  */
  /* nop */
L_11d4bcbc:;
  /* 11d4bcbc jmp dword ptr [ecx*4 + 0x11d4bd3c] */
  switch (ECX) {
    case 0: goto L_11d4bd9f;
    case 1: goto L_11d4bd8c;
    case 2: goto L_11d4bd84;
    case 3: goto L_11d4bd7c;
    case 4: goto L_11d4bd74;
    case 5: goto L_11d4bd6c;
    case 6: goto L_11d4bd64;
    case 7: goto L_11d4bd5c;
    default: x86_unimpl("switch@0x11d4bcbc out of table"); return;
  }
  /* 11d4bcc3 nop  */
  /* nop */
L_11d4bcd0:;
  /* 11d4bcd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4bcd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4bcd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4bcd6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4bcd9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4bcdc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4bcdf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4bce2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4bce5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bce8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bceb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bcee jb 0x11d4bcbc */
  if (C.cf) goto L_11d4bcbc;
  /* 11d4bcf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4bcf2 jmp dword ptr [edx*4 + 0x11d4bda8] */
  switch (EDX) {
    case 0: goto L_11d4bdb8;
    case 1: goto L_11d4bdc0;
    case 2: goto L_11d4bdcc;
    case 3: goto L_11d4bde0;
    default: x86_unimpl("switch@0x11d4bcf2 out of table"); return;
  }
  /* 11d4bcf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4bcfc:;
  /* 11d4bcfc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4bcfe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4bd00 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4bd02 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4bd05 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4bd08 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4bd0b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bd0e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bd11 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bd14 jb 0x11d4bcbc */
  if (C.cf) goto L_11d4bcbc;
  /* 11d4bd16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4bd18 jmp dword ptr [edx*4 + 0x11d4bda8] */
  switch (EDX) {
    case 0: goto L_11d4bdb8;
    case 1: goto L_11d4bdc0;
    case 2: goto L_11d4bdcc;
    case 3: goto L_11d4bde0;
    default: x86_unimpl("switch@0x11d4bd18 out of table"); return;
  }
  /* 11d4bd1f nop  */
  /* nop */
L_11d4bd20:;
  /* 11d4bd20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4bd22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4bd24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4bd26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d4bd27 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4bd2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d4bd2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bd2e jb 0x11d4bcbc */
  if (C.cf) goto L_11d4bcbc;
  /* 11d4bd30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4bd32 jmp dword ptr [edx*4 + 0x11d4bda8] */
  switch (EDX) {
    case 0: goto L_11d4bdb8;
    case 1: goto L_11d4bdc0;
    case 2: goto L_11d4bdcc;
    case 3: goto L_11d4bde0;
    default: x86_unimpl("switch@0x11d4bd32 out of table"); return;
  }
  /* 11d4bd39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4bd5c:;
  /* 11d4bd5c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11d4bd60 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11d4bd64:;
  /* 11d4bd64 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11d4bd68 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11d4bd6c:;
  /* 11d4bd6c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11d4bd70 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11d4bd74:;
  /* 11d4bd74 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11d4bd78 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11d4bd7c:;
  /* 11d4bd7c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11d4bd80 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11d4bd84:;
  /* 11d4bd84 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11d4bd88 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11d4bd8c:;
  /* 11d4bd8c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11d4bd90 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11d4bd94 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d4bd9b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bd9d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d4bd9f:;
  /* 11d4bd9f jmp dword ptr [edx*4 + 0x11d4bda8] */
  switch (EDX) {
    case 0: goto L_11d4bdb8;
    case 1: goto L_11d4bdc0;
    case 2: goto L_11d4bdcc;
    case 3: goto L_11d4bde0;
    default: x86_unimpl("switch@0x11d4bd9f out of table"); return;
  }
  /* 11d4bda6 mov edi, edi */
  EDI = (EDI);
L_11d4bdb8:;
  /* 11d4bdb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4bdbb pop esi */
  ESI = (pop32());
  /* 11d4bdbc pop edi */
  EDI = (pop32());
  /* 11d4bdbd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4bdbe ret  */
  ESPCHK(0x11d4bc60u, _esp0);
  ESP += 4; return;
  /* 11d4bdbf nop  */
  /* nop */
L_11d4bdc0:;
  /* 11d4bdc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4bdc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4bdc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4bdc7 pop esi */
  ESI = (pop32());
  /* 11d4bdc8 pop edi */
  EDI = (pop32());
  /* 11d4bdc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4bdca ret  */
  ESPCHK(0x11d4bc60u, _esp0);
  ESP += 4; return;
  /* 11d4bdcb nop  */
  /* nop */
L_11d4bdcc:;
  /* 11d4bdcc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4bdce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4bdd0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4bdd3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4bdd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4bdd9 pop esi */
  ESI = (pop32());
  /* 11d4bdda pop edi */
  EDI = (pop32());
  /* 11d4bddb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4bddc ret  */
  ESPCHK(0x11d4bc60u, _esp0);
  ESP += 4; return;
  /* 11d4bddd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4bde0:;
  /* 11d4bde0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4bde2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4bde4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4bde7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4bdea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4bded mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4bdf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4bdf3 pop esi */
  ESI = (pop32());
  /* 11d4bdf4 pop edi */
  EDI = (pop32());
  /* 11d4bdf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4bdf6 ret  */
  ESPCHK(0x11d4bc60u, _esp0);
  ESP += 4; return;
  /* 11d4bdf7 nop  */
  /* nop */
L_11d4bdf8:;
  /* 11d4bdf8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11d4bdfc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11d4be00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d4be06 jne 0x11d4be2c */
  if (!C.zf) goto L_11d4be2c;
  /* 11d4be08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4be0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4be0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4be11 jb 0x11d4be20 */
  if (C.cf) goto L_11d4be20;
  /* 11d4be13 std  */
  C.df=1;
  /* 11d4be14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4be16 cld  */
  C.df=0;
  /* 11d4be17 jmp dword ptr [edx*4 + 0x11d4bf40] */
  switch (EDX) {
    case 0: goto L_11d4bf50;
    case 1: goto L_11d4bf58;
    case 2: goto L_11d4bf68;
    case 3: goto L_11d4bf7c;
    default: x86_unimpl("switch@0x11d4be17 out of table"); return;
  }
  /* 11d4be1e mov edi, edi */
  EDI = (EDI);
L_11d4be20:;
  /* 11d4be20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4be22 jmp dword ptr [ecx*4 + 0x11d4bef0] */
  switch (ECX) {
    case 0: goto L_11d4bf37;
    default: x86_unimpl("switch@0x11d4be22 out of table"); return;
  }
  /* 11d4be29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4be2c:;
  /* 11d4be2c mov eax, edi */
  EAX = (EDI);
  /* 11d4be2e mov edx, 3 */
  EDX = (0x3u);
  /* 11d4be33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4be36 jb 0x11d4be44 */
  if (C.cf) goto L_11d4be44;
  /* 11d4be38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4be3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4be3d jmp dword ptr [eax*4 + 0x11d4be48] */
  switch (EAX) {
    case 1: goto L_11d4be58;
    case 2: goto L_11d4be78;
    case 3: goto L_11d4bea0;
    default: x86_unimpl("switch@0x11d4be3d out of table"); return;
  }
L_11d4be44:;
  /* 11d4be44 jmp dword ptr [ecx*4 + 0x11d4bf40] */
  switch (ECX) {
    case 0: goto L_11d4bf50;
    case 1: goto L_11d4bf58;
    case 2: goto L_11d4bf68;
    case 3: goto L_11d4bf7c;
    default: x86_unimpl("switch@0x11d4be44 out of table"); return;
  }
  /* 11d4be4b nop  */
  /* nop */
L_11d4be58:;
  /* 11d4be58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4be5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4be5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4be60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d4be61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4be64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d4be65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4be68 jb 0x11d4be20 */
  if (C.cf) goto L_11d4be20;
  /* 11d4be6a std  */
  C.df=1;
  /* 11d4be6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4be6d cld  */
  C.df=0;
  /* 11d4be6e jmp dword ptr [edx*4 + 0x11d4bf40] */
  switch (EDX) {
    case 0: goto L_11d4bf50;
    case 1: goto L_11d4bf58;
    case 2: goto L_11d4bf68;
    case 3: goto L_11d4bf7c;
    default: x86_unimpl("switch@0x11d4be6e out of table"); return;
  }
  /* 11d4be75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4be78:;
  /* 11d4be78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4be7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4be7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4be80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4be83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4be86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4be89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4be8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4be8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4be92 jb 0x11d4be20 */
  if (C.cf) goto L_11d4be20;
  /* 11d4be94 std  */
  C.df=1;
  /* 11d4be95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4be97 cld  */
  C.df=0;
  /* 11d4be98 jmp dword ptr [edx*4 + 0x11d4bf40] */
  switch (EDX) {
    case 0: goto L_11d4bf50;
    case 1: goto L_11d4bf58;
    case 2: goto L_11d4bf68;
    case 3: goto L_11d4bf7c;
    default: x86_unimpl("switch@0x11d4be98 out of table"); return;
  }
  /* 11d4be9f nop  */
  /* nop */
L_11d4bea0:;
  /* 11d4bea0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4bea3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4bea5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4bea8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4beab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4beae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4beb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4beb4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4beb7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4beba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4bebd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bec0 jb 0x11d4be20 */
  if (C.cf) goto L_11d4be20;
  /* 11d4bec6 std  */
  C.df=1;
  /* 11d4bec7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4bec9 cld  */
  C.df=0;
  /* 11d4beca jmp dword ptr [edx*4 + 0x11d4bf40] */
  switch (EDX) {
    case 0: goto L_11d4bf50;
    case 1: goto L_11d4bf58;
    case 2: goto L_11d4bf68;
    case 3: goto L_11d4bf7c;
    default: x86_unimpl("switch@0x11d4beca out of table"); return;
  }
  /* 11d4bed1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11d4bed4 hlt  */
  x86_unimpl("hlt @ 0x11d4bed4");
  /* 11d4bed5 mov esi, 0xbefc11d4 */
  ESI = (0xbefc11d4u);
  /* 11d4beda aam 0x11 */
  x86_unimpl("aam @ 0x11d4beda");
  /* 11d4bedc add al, 0xbf */
  { uint32_t _a=(AL),_b=(0xbfu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4bede aam 0x11 */
  x86_unimpl("aam @ 0x11d4bede");
  /* 11d4bee0 or al, 0xbf */
  { uint32_t _r=(AL)|(0xbfu); AL = (_r); fl_logic(_r,8); }
  /* 11d4bee2 aam 0x11 */
  x86_unimpl("aam @ 0x11d4bee2");
  /* 11d4bee4 adc al, 0xbf */
  { uint32_t _a=(AL),_b=(0xbfu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4bee6 aam 0x11 */
  x86_unimpl("aam @ 0x11d4bee6");
  /* 11d4bee8 sbb al, 0xbf */
  { uint32_t _a=(AL),_b=(0xbfu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d4beea aam 0x11 */
  x86_unimpl("aam @ 0x11d4beea");
  /* 11d4beec and al, 0xbf */
  { uint32_t _r=(AL)&(0xbfu); AL = (_r); fl_logic(_r,8); }
  /* 11d4beee aam 0x11 */
  x86_unimpl("aam @ 0x11d4beee");
  /* 11d4bef4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11d4bef8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11d4befc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11d4bf00 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11d4bf04 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11d4bf08 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11d4bf0c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11d4bf10 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11d4bf14 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11d4bf18 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11d4bf1c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11d4bf20 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11d4bf24 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11d4bf28 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11d4bf2c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d4bf33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bf35 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d4bf37:;
  /* 11d4bf37 jmp dword ptr [edx*4 + 0x11d4bf40] */
  switch (EDX) {
    case 0: goto L_11d4bf50;
    case 1: goto L_11d4bf58;
    case 2: goto L_11d4bf68;
    case 3: goto L_11d4bf7c;
    default: x86_unimpl("switch@0x11d4bf37 out of table"); return;
  }
  /* 11d4bf3e mov edi, edi */
  EDI = (EDI);
L_11d4bf50:;
  /* 11d4bf50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4bf53 pop esi */
  ESI = (pop32());
  /* 11d4bf54 pop edi */
  EDI = (pop32());
  /* 11d4bf55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4bf56 ret  */
  ESPCHK(0x11d4bc60u, _esp0);
  ESP += 4; return;
  /* 11d4bf57 nop  */
  /* nop */
L_11d4bf58:;
  /* 11d4bf58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4bf5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4bf5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4bf61 pop esi */
  ESI = (pop32());
  /* 11d4bf62 pop edi */
  EDI = (pop32());
  /* 11d4bf63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4bf64 ret  */
  ESPCHK(0x11d4bc60u, _esp0);
  ESP += 4; return;
  /* 11d4bf65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4bf68:;
  /* 11d4bf68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4bf6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4bf6e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4bf71 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4bf74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4bf77 pop esi */
  ESI = (pop32());
  /* 11d4bf78 pop edi */
  EDI = (pop32());
  /* 11d4bf79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4bf7a ret  */
  ESPCHK(0x11d4bc60u, _esp0);
  ESP += 4; return;
  /* 11d4bf7b nop  */
  /* nop */
L_11d4bf7c:;
  /* 11d4bf7c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4bf7f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4bf82 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4bf85 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4bf88 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4bf8b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4bf8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4bf91 pop esi */
  ESI = (pop32());
  /* 11d4bf92 pop edi */
  EDI = (pop32());
  /* 11d4bf93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4bf94 ret  */
  ESPCHK(0x11d4bc60u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11d4bfa0 (104 bytes, 43 insns) */
void f_11d4bfa0(void) {
  FTRACE(0x11d4bfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4bfa0 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4bfa1 push esi */
  push32((uint32_t)(ESI));
  /* 11d4bfa2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11d4bfa6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4bfa8 jne 0x11d4bfc2 */
  if (!C.zf) goto L_11d4bfc2;
  /* 11d4bfaa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d4bfae mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d4bfb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4bfb4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d4bfb6 mov ebx, eax */
  EBX = (EAX);
  /* 11d4bfb8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d4bfbc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d4bfbe mov edx, ebx */
  EDX = (EBX);
  /* 11d4bfc0 jmp 0x11d4c003 */
  goto L_11d4c003;
L_11d4bfc2:;
  /* 11d4bfc2 mov ecx, eax */
  ECX = (EAX);
  /* 11d4bfc4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d4bfc8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d4bfcc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11d4bfd0:;
  /* 11d4bfd0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d4bfd2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11d4bfd4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d4bfd6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11d4bfd8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4bfda jne 0x11d4bfd0 */
  if (!C.zf) goto L_11d4bfd0;
  /* 11d4bfdc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d4bfde mov esi, eax */
  ESI = (EAX);
  /* 11d4bfe0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d4bfe4 mov ecx, eax */
  ECX = (EAX);
  /* 11d4bfe6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d4bfea mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d4bfec add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4bfee jb 0x11d4bffe */
  if (C.cf) goto L_11d4bffe;
  /* 11d4bff0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bff4 ja 0x11d4bffe */
  if ((!C.cf&&!C.zf)) goto L_11d4bffe;
  /* 11d4bff6 jb 0x11d4bfff */
  if (C.cf) goto L_11d4bfff;
  /* 11d4bff8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4bffc jbe 0x11d4bfff */
  if ((C.cf||C.zf)) goto L_11d4bfff;
L_11d4bffe:;
  /* 11d4bffe dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11d4bfff:;
  /* 11d4bfff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c001 mov eax, esi */
  EAX = (ESI);
L_11d4c003:;
  /* 11d4c003 pop esi */
  ESI = (pop32());
  /* 11d4c004 pop ebx */
  EBX = (pop32());
  /* 11d4c005 ret 0x10 */
  ESPCHK(0x11d4bfa0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11d4c010 (117 bytes, 44 insns) */
void f_11d4c010(void) {
  FTRACE(0x11d4c010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4c010 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4c011 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d4c015 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c017 jne 0x11d4c031 */
  if (!C.zf) goto L_11d4c031;
  /* 11d4c019 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d4c01d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d4c021 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c023 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d4c025 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d4c029 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d4c02b mov eax, edx */
  EAX = (EDX);
  /* 11d4c02d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c02f jmp 0x11d4c081 */
  goto L_11d4c081;
L_11d4c031:;
  /* 11d4c031 mov ecx, eax */
  ECX = (EAX);
  /* 11d4c033 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d4c037 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d4c03b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11d4c03f:;
  /* 11d4c03f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d4c041 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11d4c043 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d4c045 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11d4c047 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c049 jne 0x11d4c03f */
  if (!C.zf) goto L_11d4c03f;
  /* 11d4c04b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d4c04d mov ecx, eax */
  ECX = (EAX);
  /* 11d4c04f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d4c053 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11d4c054 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d4c058 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c05a jb 0x11d4c06a */
  if (C.cf) goto L_11d4c06a;
  /* 11d4c05c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c060 ja 0x11d4c06a */
  if ((!C.cf&&!C.zf)) goto L_11d4c06a;
  /* 11d4c062 jb 0x11d4c072 */
  if (C.cf) goto L_11d4c072;
  /* 11d4c064 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c068 jbe 0x11d4c072 */
  if ((C.cf||C.zf)) goto L_11d4c072;
L_11d4c06a:;
  /* 11d4c06a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c06e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11d4c072:;
  /* 11d4c072 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c076 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c07a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4c07c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4c07e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11d4c081:;
  /* 11d4c081 pop ebx */
  EBX = (pop32());
  /* 11d4c082 ret 0x10 */
  ESPCHK(0x11d4c010u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c090 @ 0x11d4c090 (628 bytes, 214 insns) */
void f_11d4c090(void) {
  FTRACE(0x11d4c090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4c090 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4c091 mov ebp, esp */
  EBP = (ESP);
  /* 11d4c093 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c096 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4c097 push esi */
  push32((uint32_t)(ESI));
  /* 11d4c098 push edi */
  push32((uint32_t)(EDI));
L_11d4c099:;
  /* 11d4c099 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c09d jne 0x11d4c0bd */
  if (!C.zf) goto L_11d4c0bd;
  /* 11d4c09f push 0x11d6d1cc */
  push32((uint32_t)(0x11d6d1ccu));
  /* 11d4c0a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4c0a6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11d4c0a8 push 0x11d6d1c0 */
  push32((uint32_t)(0x11d6d1c0u));
  /* 11d4c0ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4c0af call 0x11d44440 */
  push32(0x11d4c0b4u); f_11d44440();
  /* 11d4c0b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c0b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c0ba jne 0x11d4c0bd */
  if (!C.zf) goto L_11d4c0bd;
  /* 11d4c0bc int3  */
  x86_unimpl("int3 @ 0x11d4c0bc");
L_11d4c0bd:;
  /* 11d4c0bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c0bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c0c1 jne 0x11d4c099 */
  if (!C.zf) goto L_11d4c099;
  /* 11d4c0c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4c0c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d4c0c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c0cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d4c0cf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d4c0d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c0d5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4c0d8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c0de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4c0e0 je 0x11d4c0ef */
  if (C.zf) goto L_11d4c0ef;
  /* 11d4c0e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c0e5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4c0e8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c0eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4c0ed je 0x11d4c105 */
  if (C.zf) goto L_11d4c105;
L_11d4c0ef:;
  /* 11d4c0ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c0f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d4c0f5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11d4c0f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c0fa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11d4c0fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c100 jmp 0x11d4c2fd */
  goto L_11d4c2fd;
L_11d4c105:;
  /* 11d4c105 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c108 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d4c10b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c10e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c110 je 0x11d4c15c */
  if (C.zf) goto L_11d4c15c;
  /* 11d4c112 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c115 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11d4c11c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c11f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d4c122 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c127 je 0x11d4c145 */
  if (C.zf) goto L_11d4c145;
  /* 11d4c129 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c12c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c12f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d4c132 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d4c134 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c137 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4c13a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c13d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c140 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d4c143 jmp 0x11d4c15c */
  goto L_11d4c15c;
L_11d4c145:;
  /* 11d4c145 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c148 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4c14b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c14e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c151 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d4c154 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c157 jmp 0x11d4c2fd */
  goto L_11d4c2fd;
L_11d4c15c:;
  /* 11d4c15c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c15f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4c162 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c165 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c168 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d4c16b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c16e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4c171 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c174 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c177 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d4c17a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c17d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11d4c184 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4c18b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c18e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d4c191 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c194 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4c197 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c19d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4c19f jne 0x11d4c1cf */
  if (!C.zf) goto L_11d4c1cf;
  /* 11d4c1a1 cmp dword ptr [ebp - 8], 0x11d70140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11d70140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c1a8 je 0x11d4c1b3 */
  if (C.zf) goto L_11d4c1b3;
  /* 11d4c1aa cmp dword ptr [ebp - 8], 0x11d70160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11d70160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c1b1 jne 0x11d4c1c3 */
  if (!C.zf) goto L_11d4c1c3;
L_11d4c1b3:;
  /* 11d4c1b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4c1b6 push edx */
  push32((uint32_t)(EDX));
  /* 11d4c1b7 call 0x11d4e000 */
  push32(0x11d4c1bcu); f_11d4e000();
  /* 11d4c1bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c1bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c1c1 jne 0x11d4c1cf */
  if (!C.zf) goto L_11d4c1cf;
L_11d4c1c3:;
  /* 11d4c1c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c1c6 push eax */
  push32((uint32_t)(EAX));
  /* 11d4c1c7 call 0x11d4df30 */
  push32(0x11d4c1ccu); f_11d4df30();
  /* 11d4c1cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4c1cf:;
  /* 11d4c1cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c1d2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4c1d5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c1db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4c1dd je 0x11d4c2bb */
  if (C.zf) goto L_11d4c2bb;
L_11d4c1e3:;
  /* 11d4c1e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c1e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c1e9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11d4c1eb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c1ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4c1f0 jge 0x11d4c213 */
  if ((C.sf==C.of)) goto L_11d4c213;
  /* 11d4c1f2 push 0x11d6d180 */
  push32((uint32_t)(0x11d6d180u));
  /* 11d4c1f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4c1f9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11d4c1fe push 0x11d6d1c0 */
  push32((uint32_t)(0x11d6d1c0u));
  /* 11d4c203 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4c205 call 0x11d44440 */
  push32(0x11d4c20au); f_11d44440();
  /* 11d4c20a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c20d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c210 jne 0x11d4c213 */
  if (!C.zf) goto L_11d4c213;
  /* 11d4c212 int3  */
  x86_unimpl("int3 @ 0x11d4c212");
L_11d4c213:;
  /* 11d4c213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c215 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c217 jne 0x11d4c1e3 */
  if (!C.zf) goto L_11d4c1e3;
  /* 11d4c219 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c21c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c21f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d4c221 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c224 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4c227 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c22a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d4c22d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c230 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c233 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d4c235 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c238 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d4c23b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c23e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c241 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d4c244 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c248 jle 0x11d4c266 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4c266;
  /* 11d4c24a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c24d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4c24e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c251 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d4c254 push eax */
  push32((uint32_t)(EAX));
  /* 11d4c255 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4c258 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4c259 call 0x11d4dc20 */
  push32(0x11d4c25eu); f_11d4dc20();
  /* 11d4c25e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c261 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d4c264 jmp 0x11d4c2ae */
  goto L_11d4c2ae;
L_11d4c266:;
  /* 11d4c266 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c26a je 0x11d4c289 */
  if (C.zf) goto L_11d4c289;
  /* 11d4c26c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4c26f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d4c272 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4c275 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c278 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4c27b mov ecx, dword ptr [edx*4 + 0x11d73020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11d73020)));
  /* 11d4c282 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c284 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d4c287 jmp 0x11d4c290 */
  goto L_11d4c290;
L_11d4c289:;
  /* 11d4c289 mov dword ptr [ebp - 0x14], 0x11d6fa60 */
  w32((uint32_t)(EBP + -0x14), (0x11d6fa60u));
L_11d4c290:;
  /* 11d4c290 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4c293 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11d4c297 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c29a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c29c je 0x11d4c2ae */
  if (C.zf) goto L_11d4c2ae;
  /* 11d4c29e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4c2a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4c2a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4c2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4c2a6 call 0x11d4dad0 */
  push32(0x11d4c2abu); f_11d4dad0();
  /* 11d4c2ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4c2ae:;
  /* 11d4c2ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c2b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d4c2b4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d4c2b7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d4c2b9 jmp 0x11d4c2d9 */
  goto L_11d4c2d9;
L_11d4c2bb:;
  /* 11d4c2bb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d4c2c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c2c5 push edx */
  push32((uint32_t)(EDX));
  /* 11d4c2c6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11d4c2c9 push eax */
  push32((uint32_t)(EAX));
  /* 11d4c2ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4c2cd push ecx */
  push32((uint32_t)(ECX));
  /* 11d4c2ce call 0x11d4dc20 */
  push32(0x11d4c2d3u); f_11d4dc20();
  /* 11d4c2d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c2d6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d4c2d9:;
  /* 11d4c2d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4c2dc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c2df je 0x11d4c2f5 */
  if (C.zf) goto L_11d4c2f5;
  /* 11d4c2e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c2e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4c2e7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c2ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c2ed mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11d4c2f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c2f3 jmp 0x11d4c2fd */
  goto L_11d4c2fd;
L_11d4c2f5:;
  /* 11d4c2f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4c2f8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11d4c2fd:;
  /* 11d4c2fd pop edi */
  EDI = (pop32());
  /* 11d4c2fe pop esi */
  ESI = (pop32());
  /* 11d4c2ff pop ebx */
  EBX = (pop32());
  /* 11d4c300 mov esp, ebp */
  ESP = (EBP);
  /* 11d4c302 pop ebp */
  EBP = (pop32());
  /* 11d4c303 ret  */
  ESPCHK(0x11d4c090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c310 @ 0x11d4c310 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11d4c310(void) {
  FTRACE(0x11d4c310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4c310 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4c311 mov ebp, esp */
  EBP = (ESP);
  /* 11d4c313 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c319 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4c31a push esi */
  push32((uint32_t)(ESI));
  /* 11d4c31b push edi */
  push32((uint32_t)(EDI));
  /* 11d4c31c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d4c323 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11d4c32d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11d4c334:;
  /* 11d4c334 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4c337 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d4c339 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11d4c33c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c340 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4c343 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c346 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d4c349 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4c34b je 0x11d4cf27 */
  if (C.zf) goto L_11d4cf27;
  /* 11d4c351 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c358 jl 0x11d4cf27 */
  if ((C.sf!=C.of)) goto L_11d4cf27;
  /* 11d4c35e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c362 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c365 jl 0x11d4c386 */
  if ((C.sf!=C.of)) goto L_11d4c386;
  /* 11d4c367 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c36b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c36e jg 0x11d4c386 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d4c386;
  /* 11d4c370 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c374 movsx ecx, byte ptr [eax + 0x11d6d1b8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11d6d1b8))));
  /* 11d4c37b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c37e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11d4c384 jmp 0x11d4c390 */
  goto L_11d4c390;
L_11d4c386:;
  /* 11d4c386 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11d4c390:;
  /* 11d4c390 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11d4c396 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d4c399 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4c39c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4c39f movsx edx, byte ptr [ecx + eax*8 + 0x11d6d1d8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11d6d1d8))));
  /* 11d4c3a7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d4c3aa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d4c3ad mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4c3b0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11d4c3b6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c3bd ja 0x11d4cf22 */
  if ((!C.cf&&!C.zf)) goto L_11d4cf22;
  /* 11d4c3c3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11d4c3c9 jmp dword ptr [ecx*4 + 0x11d4cf34] */
  switch (ECX) {
    case 0: goto L_11d4c3d0;
    case 1: goto L_11d4c46a;
    case 2: goto L_11d4c4ac;
    case 3: goto L_11d4c51b;
    case 4: goto L_11d4c573;
    case 5: goto L_11d4c582;
    case 6: goto L_11d4c5ce;
    case 7: goto L_11d4c661;
    case 8: goto L_11d4c4f8;
    case 9: goto L_11d4c503;
    case 10: goto L_11d4c4ee;
    case 11: goto L_11d4c4e3;
    case 12: goto L_11d4c50e;
    case 13: goto L_11d4c516;
    default: x86_unimpl("switch@0x11d4c3c9 out of table"); return;
  }
L_11d4c3d0:;
  /* 11d4c3d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11d4c3d7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4c3da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c3e0 mov eax, dword ptr [0x11d6fc98] */
  EAX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d4c3e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c3e7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11d4c3eb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c3f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4c3f3 je 0x11d4c44d */
  if (C.zf) goto L_11d4c44d;
  /* 11d4c3f5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11d4c3fb push edx */
  push32((uint32_t)(EDX));
  /* 11d4c3fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4c3ff push eax */
  push32((uint32_t)(EAX));
  /* 11d4c400 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c404 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4c405 call 0x11d4d040 */
  push32(0x11d4c40au); f_11d4d040();
  /* 11d4c40a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c40d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4c410 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d4c412 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11d4c415 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4c418 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c41b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11d4c41e:;
  /* 11d4c41e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c422 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4c424 jne 0x11d4c447 */
  if (!C.zf) goto L_11d4c447;
  /* 11d4c426 push 0x11d6d258 */
  push32((uint32_t)(0x11d6d258u));
  /* 11d4c42b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4c42d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11d4c432 push 0x11d6d24c */
  push32((uint32_t)(0x11d6d24cu));
  /* 11d4c437 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4c439 call 0x11d44440 */
  push32(0x11d4c43eu); f_11d44440();
  /* 11d4c43e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c441 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c444 jne 0x11d4c447 */
  if (!C.zf) goto L_11d4c447;
  /* 11d4c446 int3  */
  x86_unimpl("int3 @ 0x11d4c446");
L_11d4c447:;
  /* 11d4c447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c44b jne 0x11d4c41e */
  if (!C.zf) goto L_11d4c41e;
L_11d4c44d:;
  /* 11d4c44d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11d4c453 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4c454 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4c457 push edx */
  push32((uint32_t)(EDX));
  /* 11d4c458 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c45c push eax */
  push32((uint32_t)(EAX));
  /* 11d4c45d call 0x11d4d040 */
  push32(0x11d4c462u); f_11d4d040();
  /* 11d4c462 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c465 jmp 0x11d4cf22 */
  goto L_11d4cf22;
L_11d4c46a:;
  /* 11d4c46a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d4c471 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c474 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11d4c47a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11d4c480 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11d4c486 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11d4c48c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d4c48f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4c496 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11d4c4a0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11d4c4a7 jmp 0x11d4cf22 */
  goto L_11d4cf22;
L_11d4c4ac:;
  /* 11d4c4ac movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c4b0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11d4c4b6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11d4c4bc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c4bf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11d4c4c5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c4cc ja 0x11d4c516 */
  if ((!C.cf&&!C.zf)) goto L_11d4c516;
  /* 11d4c4ce mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11d4c4d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c4d6 mov al, byte ptr [ecx + 0x11d4cf6c] */
  AL = (r8((uint32_t)(ECX + 0x11d4cf6c)));
  /* 11d4c4dc jmp dword ptr [eax*4 + 0x11d4cf54] */
  switch (EAX) {
    case 0: goto L_11d4c4f8;
    case 1: goto L_11d4c503;
    case 2: goto L_11d4c4ee;
    case 3: goto L_11d4c4e3;
    case 4: goto L_11d4c50e;
    case 5: goto L_11d4c516;
    default: x86_unimpl("switch@0x11d4c4dc out of table"); return;
  }
L_11d4c4e3:;
  /* 11d4c4e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c4e6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c4e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4c4ec jmp 0x11d4c516 */
  goto L_11d4c516;
L_11d4c4ee:;
  /* 11d4c4ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c4f1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11d4c4f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4c4f6 jmp 0x11d4c516 */
  goto L_11d4c516;
L_11d4c4f8:;
  /* 11d4c4f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c4fb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c4fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d4c501 jmp 0x11d4c516 */
  goto L_11d4c516;
L_11d4c503:;
  /* 11d4c503 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c506 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11d4c509 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4c50c jmp 0x11d4c516 */
  goto L_11d4c516;
L_11d4c50e:;
  /* 11d4c50e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c511 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11d4c513 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d4c516:;
  /* 11d4c516 jmp 0x11d4cf22 */
  goto L_11d4cf22;
L_11d4c51b:;
  /* 11d4c51b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c51f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c522 jne 0x11d4c557 */
  if (!C.zf) goto L_11d4c557;
  /* 11d4c524 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11d4c527 push edx */
  push32((uint32_t)(EDX));
  /* 11d4c528 call 0x11d4d150 */
  push32(0x11d4c52du); f_11d4d150();
  /* 11d4c52d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c530 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11d4c536 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c53d jge 0x11d4c555 */
  if ((C.sf==C.of)) goto L_11d4c555;
  /* 11d4c53f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c542 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11d4c544 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4c547 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11d4c54d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4c54f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11d4c555:;
  /* 11d4c555 jmp 0x11d4c56e */
  goto L_11d4c56e;
L_11d4c557:;
  /* 11d4c557 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11d4c55d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4c560 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c564 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11d4c568 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11d4c56e:;
  /* 11d4c56e jmp 0x11d4cf22 */
  goto L_11d4cf22;
L_11d4c573:;
  /* 11d4c573 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11d4c57d jmp 0x11d4cf22 */
  goto L_11d4cf22;
L_11d4c582:;
  /* 11d4c582 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c586 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c589 jne 0x11d4c5b2 */
  if (!C.zf) goto L_11d4c5b2;
  /* 11d4c58b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d4c58e push eax */
  push32((uint32_t)(EAX));
  /* 11d4c58f call 0x11d4d150 */
  push32(0x11d4c594u); f_11d4d150();
  /* 11d4c594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c597 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11d4c59d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c5a4 jge 0x11d4c5b0 */
  if ((C.sf==C.of)) goto L_11d4c5b0;
  /* 11d4c5a6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11d4c5b0:;
  /* 11d4c5b0 jmp 0x11d4c5c9 */
  goto L_11d4c5c9;
L_11d4c5b2:;
  /* 11d4c5b2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11d4c5b8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4c5bb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c5bf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11d4c5c3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11d4c5c9:;
  /* 11d4c5c9 jmp 0x11d4cf22 */
  goto L_11d4cf22;
L_11d4c5ce:;
  /* 11d4c5ce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c5d2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11d4c5d8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11d4c5de sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c5e1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11d4c5e7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c5ee ja 0x11d4c65c */
  if ((!C.cf&&!C.zf)) goto L_11d4c65c;
  /* 11d4c5f0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11d4c5f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c5f8 mov al, byte ptr [ecx + 0x11d4cf91] */
  AL = (r8((uint32_t)(ECX + 0x11d4cf91)));
  /* 11d4c5fe jmp dword ptr [eax*4 + 0x11d4cf7d] */
  switch (EAX) {
    case 0: goto L_11d4c610;
    case 1: goto L_11d4c649;
    case 2: goto L_11d4c605;
    case 3: goto L_11d4c653;
    case 4: goto L_11d4c65c;
    default: x86_unimpl("switch@0x11d4c5fe out of table"); return;
  }
L_11d4c605:;
  /* 11d4c605 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c608 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c60b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4c60e jmp 0x11d4c65c */
  goto L_11d4c65c;
L_11d4c610:;
  /* 11d4c610 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4c613 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4c616 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c619 jne 0x11d4c63b */
  if (!C.zf) goto L_11d4c63b;
  /* 11d4c61b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4c61e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d4c622 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c625 jne 0x11d4c63b */
  if (!C.zf) goto L_11d4c63b;
  /* 11d4c627 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4c62a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c62d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11d4c630 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c633 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11d4c636 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4c639 jmp 0x11d4c647 */
  goto L_11d4c647;
L_11d4c63b:;
  /* 11d4c63b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11d4c642 jmp 0x11d4c3d0 */
  goto L_11d4c3d0;
L_11d4c647:;
  /* 11d4c647 jmp 0x11d4c65c */
  goto L_11d4c65c;
L_11d4c649:;
  /* 11d4c649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c64c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11d4c64e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4c651 jmp 0x11d4c65c */
  goto L_11d4c65c;
L_11d4c653:;
  /* 11d4c653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c656 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11d4c659 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d4c65c:;
  /* 11d4c65c jmp 0x11d4cf22 */
  goto L_11d4cf22;
L_11d4c661:;
  /* 11d4c661 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c665 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11d4c66b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11d4c671 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c674 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11d4c67a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c681 ja 0x11d4cd47 */
  if ((!C.cf&&!C.zf)) goto L_11d4cd47;
  /* 11d4c687 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11d4c68d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c68f mov cl, byte ptr [edx + 0x11d4cffc] */
  CL = (r8((uint32_t)(EDX + 0x11d4cffc)));
  /* 11d4c695 jmp dword ptr [ecx*4 + 0x11d4cfc0] */
  switch (ECX) {
    case 0: goto L_11d4c69c;
    case 1: goto L_11d4c930;
    case 2: goto L_11d4c7c0;
    case 3: goto L_11d4ca69;
    case 4: goto L_11d4c72b;
    case 5: goto L_11d4c6b1;
    case 6: goto L_11d4ca3b;
    case 7: goto L_11d4c940;
    case 8: goto L_11d4c8e5;
    case 9: goto L_11d4cab5;
    case 10: goto L_11d4ca5f;
    case 11: goto L_11d4c7d6;
    case 12: goto L_11d4ca53;
    case 13: goto L_11d4ca75;
    case 14: goto L_11d4cd47;
    default: x86_unimpl("switch@0x11d4c695 out of table"); return;
  }
L_11d4c69c:;
  /* 11d4c69c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c69f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c6a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c6a6 jne 0x11d4c6b1 */
  if (!C.zf) goto L_11d4c6b1;
  /* 11d4c6a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c6ab or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11d4c6ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d4c6b1:;
  /* 11d4c6b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c6b4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4c6ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4c6bc je 0x11d4c6f7 */
  if (C.zf) goto L_11d4c6f7;
  /* 11d4c6be lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d4c6c1 push eax */
  push32((uint32_t)(EAX));
  /* 11d4c6c2 call 0x11d4d190 */
  push32(0x11d4c6c7u); f_11d4d190();
  /* 11d4c6c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c6ca mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11d4c6ce mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11d4c6d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4c6d3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11d4c6d9 push edx */
  push32((uint32_t)(EDX));
  /* 11d4c6da call 0x11d4e270 */
  push32(0x11d4c6dfu); f_11d4e270();
  /* 11d4c6df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c6e2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d4c6e5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c6e9 jge 0x11d4c6f5 */
  if ((C.sf==C.of)) goto L_11d4c6f5;
  /* 11d4c6eb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11d4c6f5:;
  /* 11d4c6f5 jmp 0x11d4c71d */
  goto L_11d4c71d;
L_11d4c6f7:;
  /* 11d4c6f7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d4c6fa push eax */
  push32((uint32_t)(EAX));
  /* 11d4c6fb call 0x11d4d150 */
  push32(0x11d4c700u); f_11d4d150();
  /* 11d4c700 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c703 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11d4c70a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11d4c710 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11d4c716 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11d4c71d:;
  /* 11d4c71d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11d4c723 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d4c726 jmp 0x11d4cd47 */
  goto L_11d4cd47;
L_11d4c72b:;
  /* 11d4c72b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d4c72e push eax */
  push32((uint32_t)(EAX));
  /* 11d4c72f call 0x11d4d150 */
  push32(0x11d4c734u); f_11d4d150();
  /* 11d4c734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c737 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11d4c73d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c744 je 0x11d4c752 */
  if (C.zf) goto L_11d4c752;
  /* 11d4c746 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11d4c74c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c750 jne 0x11d4c76c */
  if (!C.zf) goto L_11d4c76c;
L_11d4c752:;
  /* 11d4c752 mov edx, dword ptr [0x11d6ffb0] */
  EDX = (r32((uint32_t)(0x11d6ffb0)));
  /* 11d4c758 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d4c75b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4c75e push eax */
  push32((uint32_t)(EAX));
  /* 11d4c75f call 0x11d481b0 */
  push32(0x11d4c764u); f_11d481b0();
  /* 11d4c764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c767 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d4c76a jmp 0x11d4c7bb */
  goto L_11d4c7bb;
L_11d4c76c:;
  /* 11d4c76c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c76f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c775 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4c777 je 0x11d4c79c */
  if (C.zf) goto L_11d4c79c;
  /* 11d4c779 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11d4c77f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d4c782 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d4c785 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11d4c78b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11d4c78e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d4c790 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d4c793 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11d4c79a jmp 0x11d4c7bb */
  goto L_11d4c7bb;
L_11d4c79c:;
  /* 11d4c79c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11d4c7a3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11d4c7a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4c7ac mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d4c7af mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11d4c7b5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11d4c7b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d4c7bb:;
  /* 11d4c7bb jmp 0x11d4cd47 */
  goto L_11d4cd47;
L_11d4c7c0:;
  /* 11d4c7c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c7c3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4c7c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4c7cb jne 0x11d4c7d6 */
  if (!C.zf) goto L_11d4c7d6;
  /* 11d4c7cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c7d0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11d4c7d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d4c7d6:;
  /* 11d4c7d6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c7dd jne 0x11d4c7eb */
  if (!C.zf) goto L_11d4c7eb;
  /* 11d4c7df mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11d4c7e9 jmp 0x11d4c7f7 */
  goto L_11d4c7f7;
L_11d4c7eb:;
  /* 11d4c7eb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11d4c7f1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11d4c7f7:;
  /* 11d4c7f7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11d4c7fd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11d4c803 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11d4c806 push edx */
  push32((uint32_t)(EDX));
  /* 11d4c807 call 0x11d4d150 */
  push32(0x11d4c80cu); f_11d4d150();
  /* 11d4c80c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c80f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d4c812 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c815 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c81a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c81c je 0x11d4c886 */
  if (C.zf) goto L_11d4c886;
  /* 11d4c81e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c822 jne 0x11d4c82d */
  if (!C.zf) goto L_11d4c82d;
  /* 11d4c824 mov ecx, dword ptr [0x11d6ffb4] */
  ECX = (r32((uint32_t)(0x11d6ffb4)));
  /* 11d4c82a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11d4c82d:;
  /* 11d4c82d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11d4c834 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4c837 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11d4c83d:;
  /* 11d4c83d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11d4c843 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11d4c849 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c84c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11d4c852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c854 je 0x11d4c876 */
  if (C.zf) goto L_11d4c876;
  /* 11d4c856 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11d4c85c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c85e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11d4c861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c863 je 0x11d4c876 */
  if (C.zf) goto L_11d4c876;
  /* 11d4c865 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11d4c86b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c86e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11d4c874 jmp 0x11d4c83d */
  goto L_11d4c83d;
L_11d4c876:;
  /* 11d4c876 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11d4c87c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c87f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d4c881 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d4c884 jmp 0x11d4c8e0 */
  goto L_11d4c8e0;
L_11d4c886:;
  /* 11d4c886 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c88a jne 0x11d4c894 */
  if (!C.zf) goto L_11d4c894;
  /* 11d4c88c mov eax, dword ptr [0x11d6ffb0] */
  EAX = (r32((uint32_t)(0x11d6ffb0)));
  /* 11d4c891 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11d4c894:;
  /* 11d4c894 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4c897 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11d4c89d:;
  /* 11d4c89d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11d4c8a3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11d4c8a9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c8ac mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11d4c8b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4c8b4 je 0x11d4c8d4 */
  if (C.zf) goto L_11d4c8d4;
  /* 11d4c8b6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11d4c8bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d4c8bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4c8c1 je 0x11d4c8d4 */
  if (C.zf) goto L_11d4c8d4;
  /* 11d4c8c3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11d4c8c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c8cc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11d4c8d2 jmp 0x11d4c89d */
  goto L_11d4c89d;
L_11d4c8d4:;
  /* 11d4c8d4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11d4c8da sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c8dd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11d4c8e0:;
  /* 11d4c8e0 jmp 0x11d4cd47 */
  goto L_11d4cd47;
L_11d4c8e5:;
  /* 11d4c8e5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11d4c8e8 push edx */
  push32((uint32_t)(EDX));
  /* 11d4c8e9 call 0x11d4d150 */
  push32(0x11d4c8eeu); f_11d4d150();
  /* 11d4c8ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c8f1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11d4c8f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c8fa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c8fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c8ff je 0x11d4c913 */
  if (C.zf) goto L_11d4c913;
  /* 11d4c901 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11d4c907 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11d4c90e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11d4c911 jmp 0x11d4c921 */
  goto L_11d4c921;
L_11d4c913:;
  /* 11d4c913 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11d4c919 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11d4c91f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11d4c921:;
  /* 11d4c921 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11d4c92b jmp 0x11d4cd47 */
  goto L_11d4cd47;
L_11d4c930:;
  /* 11d4c930 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d4c937 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11d4c93a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4c93d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11d4c940:;
  /* 11d4c940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c943 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11d4c945 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4c948 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11d4c94e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d4c951 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c958 jge 0x11d4c966 */
  if ((C.sf==C.of)) goto L_11d4c966;
  /* 11d4c95a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11d4c964 jmp 0x11d4c982 */
  goto L_11d4c982;
L_11d4c966:;
  /* 11d4c966 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c96d jne 0x11d4c982 */
  if (!C.zf) goto L_11d4c982;
  /* 11d4c96f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c973 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c976 jne 0x11d4c982 */
  if (!C.zf) goto L_11d4c982;
  /* 11d4c978 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11d4c982:;
  /* 11d4c982 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4c985 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c988 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11d4c98b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4c98e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4c991 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4c993 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4c996 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11d4c99c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11d4c9a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4c9a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4c9a6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11d4c9ac push edx */
  push32((uint32_t)(EDX));
  /* 11d4c9ad movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c9b1 push eax */
  push32((uint32_t)(EAX));
  /* 11d4c9b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4c9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4c9b6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11d4c9bc push edx */
  push32((uint32_t)(EDX));
  /* 11d4c9bd call dword ptr [0x11d703a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d703a0))), 0x11d4c9c3u);
  /* 11d4c9c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4c9c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c9c9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c9ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c9d0 je 0x11d4c9e8 */
  if (C.zf) goto L_11d4c9e8;
  /* 11d4c9d2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c9d9 jne 0x11d4c9e8 */
  if (!C.zf) goto L_11d4c9e8;
  /* 11d4c9db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4c9de push ecx */
  push32((uint32_t)(ECX));
  /* 11d4c9df call dword ptr [0x11d703ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d703ac))), 0x11d4c9e5u);
  /* 11d4c9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4c9e8:;
  /* 11d4c9e8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d4c9ec cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4c9ef jne 0x11d4ca0a */
  if (!C.zf) goto L_11d4ca0a;
  /* 11d4c9f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4c9f4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4c9f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4c9fb jne 0x11d4ca0a */
  if (!C.zf) goto L_11d4ca0a;
  /* 11d4c9fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4ca00 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ca01 call dword ptr [0x11d703a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d703a4))), 0x11d4ca07u);
  /* 11d4ca07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4ca0a:;
  /* 11d4ca0a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4ca0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d4ca10 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ca13 jne 0x11d4ca27 */
  if (!C.zf) goto L_11d4ca27;
  /* 11d4ca15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ca18 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11d4ca1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d4ca1e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4ca21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ca24 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11d4ca27:;
  /* 11d4ca27 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4ca2a push eax */
  push32((uint32_t)(EAX));
  /* 11d4ca2b call 0x11d481b0 */
  push32(0x11d4ca30u); f_11d481b0();
  /* 11d4ca30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ca33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d4ca36 jmp 0x11d4cd47 */
  goto L_11d4cd47;
L_11d4ca3b:;
  /* 11d4ca3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ca3e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ca41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d4ca44 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11d4ca4e jmp 0x11d4cad5 */
  goto L_11d4cad5;
L_11d4ca53:;
  /* 11d4ca53 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11d4ca5d jmp 0x11d4cad5 */
  goto L_11d4cad5;
L_11d4ca5f:;
  /* 11d4ca5f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11d4ca69:;
  /* 11d4ca69 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11d4ca73 jmp 0x11d4ca7f */
  goto L_11d4ca7f;
L_11d4ca75:;
  /* 11d4ca75 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11d4ca7f:;
  /* 11d4ca7f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11d4ca89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ca8c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4ca92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4ca94 je 0x11d4cab3 */
  if (C.zf) goto L_11d4cab3;
  /* 11d4ca96 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11d4ca9d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11d4caa3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4caa6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11d4caac mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11d4cab3:;
  /* 11d4cab3 jmp 0x11d4cad5 */
  goto L_11d4cad5;
L_11d4cab5:;
  /* 11d4cab5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11d4cabf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cac2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4cac8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4caca je 0x11d4cad5 */
  if (C.zf) goto L_11d4cad5;
  /* 11d4cacc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cacf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11d4cad2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d4cad5:;
  /* 11d4cad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cad8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4cadd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4cadf je 0x11d4cafe */
  if (C.zf) goto L_11d4cafe;
  /* 11d4cae1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11d4cae4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4cae5 call 0x11d4d170 */
  push32(0x11d4caeau); f_11d4d170();
  /* 11d4caea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4caed mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11d4caf3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11d4caf9 jmp 0x11d4cb8f */
  goto L_11d4cb8f;
L_11d4cafe:;
  /* 11d4cafe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cb01 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4cb04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4cb06 je 0x11d4cb50 */
  if (C.zf) goto L_11d4cb50;
  /* 11d4cb08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cb0b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4cb0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4cb10 je 0x11d4cb30 */
  if (C.zf) goto L_11d4cb30;
  /* 11d4cb12 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11d4cb15 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4cb16 call 0x11d4d150 */
  push32(0x11d4cb1bu); f_11d4d150();
  /* 11d4cb1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4cb1e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11d4cb21 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d4cb22 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11d4cb28 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11d4cb2e jmp 0x11d4cb4e */
  goto L_11d4cb4e;
L_11d4cb30:;
  /* 11d4cb30 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11d4cb33 push edx */
  push32((uint32_t)(EDX));
  /* 11d4cb34 call 0x11d4d150 */
  push32(0x11d4cb39u); f_11d4d150();
  /* 11d4cb39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4cb3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4cb41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d4cb42 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11d4cb48 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11d4cb4e:;
  /* 11d4cb4e jmp 0x11d4cb8f */
  goto L_11d4cb8f;
L_11d4cb50:;
  /* 11d4cb50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cb53 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4cb56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4cb58 je 0x11d4cb75 */
  if (C.zf) goto L_11d4cb75;
  /* 11d4cb5a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11d4cb5d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4cb5e call 0x11d4d150 */
  push32(0x11d4cb63u); f_11d4d150();
  /* 11d4cb63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4cb66 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d4cb67 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11d4cb6d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11d4cb73 jmp 0x11d4cb8f */
  goto L_11d4cb8f;
L_11d4cb75:;
  /* 11d4cb75 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11d4cb78 push edx */
  push32((uint32_t)(EDX));
  /* 11d4cb79 call 0x11d4d150 */
  push32(0x11d4cb7eu); f_11d4d150();
  /* 11d4cb7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4cb81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4cb83 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11d4cb89 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11d4cb8f:;
  /* 11d4cb8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cb92 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4cb95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4cb97 je 0x11d4cbd7 */
  if (C.zf) goto L_11d4cbd7;
  /* 11d4cb99 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4cba0 jg 0x11d4cbd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d4cbd7;
  /* 11d4cba2 jl 0x11d4cbad */
  if ((C.sf!=C.of)) goto L_11d4cbad;
  /* 11d4cba4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4cbab jae 0x11d4cbd7 */
  if (!C.cf) goto L_11d4cbd7;
L_11d4cbad:;
  /* 11d4cbad mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11d4cbb3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4cbb5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11d4cbbb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4cbbe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4cbc0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11d4cbc6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11d4cbcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cbcf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11d4cbd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4cbd5 jmp 0x11d4cbef */
  goto L_11d4cbef;
L_11d4cbd7:;
  /* 11d4cbd7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11d4cbdd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11d4cbe3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11d4cbe9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11d4cbef:;
  /* 11d4cbef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cbf2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4cbf8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4cbfa jne 0x11d4cc17 */
  if (!C.zf) goto L_11d4cc17;
  /* 11d4cbfc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11d4cc02 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11d4cc08 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4cc0b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11d4cc11 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11d4cc17:;
  /* 11d4cc17 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4cc1e jge 0x11d4cc2c */
  if ((C.sf==C.of)) goto L_11d4cc2c;
  /* 11d4cc20 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11d4cc2a jmp 0x11d4cc35 */
  goto L_11d4cc35;
L_11d4cc2c:;
  /* 11d4cc2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cc2f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4cc32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d4cc35:;
  /* 11d4cc35 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11d4cc3b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11d4cc41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4cc43 jne 0x11d4cc4c */
  if (!C.zf) goto L_11d4cc4c;
  /* 11d4cc45 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11d4cc4c:;
  /* 11d4cc4c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11d4cc4f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11d4cc52:;
  /* 11d4cc52 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11d4cc58 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11d4cc5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4cc61 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11d4cc67 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4cc69 jg 0x11d4cc7f */
  if ((!C.zf&&C.sf==C.of)) goto L_11d4cc7f;
  /* 11d4cc6b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11d4cc71 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11d4cc77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4cc79 je 0x11d4cd00 */
  if (C.zf) goto L_11d4cd00;
L_11d4cc7f:;
  /* 11d4cc7f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11d4cc85 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d4cc86 push edx */
  push32((uint32_t)(EDX));
  /* 11d4cc87 push eax */
  push32((uint32_t)(EAX));
  /* 11d4cc88 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11d4cc8e push edx */
  push32((uint32_t)(EDX));
  /* 11d4cc8f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11d4cc95 push eax */
  push32((uint32_t)(EAX));
  /* 11d4cc96 call 0x11d4c010 */
  push32(0x11d4cc9bu); f_11d4c010();
  /* 11d4cc9b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4cc9e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11d4cca4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11d4ccaa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d4ccab push edx */
  push32((uint32_t)(EDX));
  /* 11d4ccac push eax */
  push32((uint32_t)(EAX));
  /* 11d4ccad mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11d4ccb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ccb4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11d4ccba push edx */
  push32((uint32_t)(EDX));
  /* 11d4ccbb call 0x11d4bfa0 */
  push32(0x11d4ccc0u); f_11d4bfa0();
  /* 11d4ccc0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11d4ccc6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11d4cccc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ccd3 jle 0x11d4cce7 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4cce7;
  /* 11d4ccd5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11d4ccdb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4cce1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11d4cce7:;
  /* 11d4cce7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4ccea mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11d4ccf0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11d4ccf2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4ccf5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4ccf8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d4ccfb jmp 0x11d4cc52 */
  goto L_11d4cc52;
L_11d4cd00:;
  /* 11d4cd00 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11d4cd03 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4cd06 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d4cd09 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4cd0c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4cd0f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d4cd12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cd15 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4cd1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4cd1c je 0x11d4cd47 */
  if (C.zf) goto L_11d4cd47;
  /* 11d4cd1e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4cd21 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d4cd24 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4cd27 jne 0x11d4cd2f */
  if (!C.zf) goto L_11d4cd2f;
  /* 11d4cd29 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4cd2d jne 0x11d4cd47 */
  if (!C.zf) goto L_11d4cd47;
L_11d4cd2f:;
  /* 11d4cd2f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4cd32 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4cd35 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d4cd38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4cd3b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11d4cd3e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4cd41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4cd44 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11d4cd47:;
  /* 11d4cd47 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4cd4e jne 0x11d4cf22 */
  if (!C.zf) goto L_11d4cf22;
  /* 11d4cd54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cd57 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4cd5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4cd5c je 0x11d4cdad */
  if (C.zf) goto L_11d4cdad;
  /* 11d4cd5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cd61 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4cd67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4cd69 je 0x11d4cd7b */
  if (C.zf) goto L_11d4cd7b;
  /* 11d4cd6b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11d4cd72 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11d4cd79 jmp 0x11d4cdad */
  goto L_11d4cdad;
L_11d4cd7b:;
  /* 11d4cd7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cd7e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4cd81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4cd83 je 0x11d4cd95 */
  if (C.zf) goto L_11d4cd95;
  /* 11d4cd85 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11d4cd8c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11d4cd93 jmp 0x11d4cdad */
  goto L_11d4cdad;
L_11d4cd95:;
  /* 11d4cd95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cd98 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4cd9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4cd9d je 0x11d4cdad */
  if (C.zf) goto L_11d4cdad;
  /* 11d4cd9f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11d4cda6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11d4cdad:;
  /* 11d4cdad mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11d4cdb3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4cdb6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4cdb9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11d4cdbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4cdc2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4cdc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4cdc7 jne 0x11d4cde5 */
  if (!C.zf) goto L_11d4cde5;
  /* 11d4cdc9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11d4cdcf push eax */
  push32((uint32_t)(EAX));
  /* 11d4cdd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4cdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4cdd4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11d4cdda push edx */
  push32((uint32_t)(EDX));
  /* 11d4cddb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d4cddd call 0x11d4d0c0 */
  push32(0x11d4cde2u); f_11d4d0c0();
  /* 11d4cde2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4cde5:;
  /* 11d4cde5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11d4cdeb push eax */
  push32((uint32_t)(EAX));
  /* 11d4cdec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4cdef push ecx */
  push32((uint32_t)(ECX));
  /* 11d4cdf0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4cdf3 push edx */
  push32((uint32_t)(EDX));
  /* 11d4cdf4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11d4cdfa push eax */
  push32((uint32_t)(EAX));
  /* 11d4cdfb call 0x11d4d100 */
  push32(0x11d4ce00u); f_11d4d100();
  /* 11d4ce00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ce03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ce06 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ce09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4ce0b je 0x11d4ce33 */
  if (C.zf) goto L_11d4ce33;
  /* 11d4ce0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ce10 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4ce13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4ce15 jne 0x11d4ce33 */
  if (!C.zf) goto L_11d4ce33;
  /* 11d4ce17 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11d4ce1d push eax */
  push32((uint32_t)(EAX));
  /* 11d4ce1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ce21 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ce22 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11d4ce28 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ce29 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d4ce2b call 0x11d4d0c0 */
  push32(0x11d4ce30u); f_11d4d0c0();
  /* 11d4ce30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4ce33:;
  /* 11d4ce33 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ce37 je 0x11d4cee1 */
  if (C.zf) goto L_11d4cee1;
  /* 11d4ce3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ce41 jle 0x11d4cee1 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4cee1;
  /* 11d4ce47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4ce4a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11d4ce50 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4ce53 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11d4ce59:;
  /* 11d4ce59 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11d4ce5f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11d4ce65 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4ce68 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11d4ce6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4ce70 je 0x11d4cedf */
  if (C.zf) goto L_11d4cedf;
  /* 11d4ce72 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11d4ce78 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11d4ce7b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11d4ce82 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11d4ce89 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ce8a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11d4ce90 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ce91 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11d4ce97 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ce9a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11d4cea0 call 0x11d4e270 */
  push32(0x11d4cea5u); f_11d4e270();
  /* 11d4cea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4cea8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11d4ceae cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ceb5 jg 0x11d4ceb9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d4ceb9;
  /* 11d4ceb7 jmp 0x11d4cedf */
  goto L_11d4cedf;
L_11d4ceb9:;
  /* 11d4ceb9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11d4cebf push eax */
  push32((uint32_t)(EAX));
  /* 11d4cec0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4cec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4cec4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11d4ceca push edx */
  push32((uint32_t)(EDX));
  /* 11d4cecb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11d4ced1 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ced2 call 0x11d4d100 */
  push32(0x11d4ced7u); f_11d4d100();
  /* 11d4ced7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ceda jmp 0x11d4ce59 */
  goto L_11d4ce59;
L_11d4cedf:;
  /* 11d4cedf jmp 0x11d4cefc */
  goto L_11d4cefc;
L_11d4cee1:;
  /* 11d4cee1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11d4cee7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4cee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ceeb push edx */
  push32((uint32_t)(EDX));
  /* 11d4ceec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4ceef push eax */
  push32((uint32_t)(EAX));
  /* 11d4cef0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4cef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4cef4 call 0x11d4d100 */
  push32(0x11d4cef9u); f_11d4d100();
  /* 11d4cef9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4cefc:;
  /* 11d4cefc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ceff and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4cf02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4cf04 je 0x11d4cf22 */
  if (C.zf) goto L_11d4cf22;
  /* 11d4cf06 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11d4cf0c push eax */
  push32((uint32_t)(EAX));
  /* 11d4cf0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4cf10 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4cf11 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11d4cf17 push edx */
  push32((uint32_t)(EDX));
  /* 11d4cf18 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d4cf1a call 0x11d4d0c0 */
  push32(0x11d4cf1fu); f_11d4d0c0();
  /* 11d4cf1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4cf22:;
  /* 11d4cf22 jmp 0x11d4c334 */
  goto L_11d4c334;
L_11d4cf27:;
  /* 11d4cf27 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11d4cf2d pop edi */
  EDI = (pop32());
  /* 11d4cf2e pop esi */
  ESI = (pop32());
  /* 11d4cf2f pop ebx */
  EBX = (pop32());
  /* 11d4cf30 mov esp, ebp */
  ESP = (EBP);
  /* 11d4cf32 pop ebp */
  EBP = (pop32());
  /* 11d4cf33 ret  */
  ESPCHK(0x11d4c310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d040 @ 0x11d4d040 (119 bytes, 44 insns) */
void f_11d4d040(void) {
  FTRACE(0x11d4d040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d040 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d041 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d043 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d044 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d047 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4d04a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d04d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d050 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d4d053 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d056 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d05a jl 0x11d4d082 */
  if ((C.sf!=C.of)) goto L_11d4d082;
  /* 11d4d05c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d05f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4d061 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d4d064 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11d4d066 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11d4d06a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4d070 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d4d073 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d076 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d4d078 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d07b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d07e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d4d080 jmp 0x11d4d095 */
  goto L_11d4d095;
L_11d4d082:;
  /* 11d4d082 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d085 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d089 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d08a call 0x11d4c090 */
  push32(0x11d4d08fu); f_11d4c090();
  /* 11d4d08f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d092 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d4d095:;
  /* 11d4d095 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d099 jne 0x11d4d0a6 */
  if (!C.zf) goto L_11d4d0a6;
  /* 11d4d09b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d09e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11d4d0a4 jmp 0x11d4d0b3 */
  goto L_11d4d0b3;
L_11d4d0a6:;
  /* 11d4d0a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d0a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d4d0ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d0ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d0b1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11d4d0b3:;
  /* 11d4d0b3 mov esp, ebp */
  ESP = (EBP);
  /* 11d4d0b5 pop ebp */
  EBP = (pop32());
  /* 11d4d0b6 ret  */
  ESPCHK(0x11d4d040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0c0 @ 0x11d4d0c0 (53 bytes, 23 insns) */
void f_11d4d0c0(void) {
  FTRACE(0x11d4d0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d0c1 mov ebp, esp */
  EBP = (ESP);
L_11d4d0c3:;
  /* 11d4d0c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d0c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d0c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d0cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11d4d0cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4d0d1 jle 0x11d4d0f3 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4d0f3;
  /* 11d4d0d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4d0d6 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d0d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d0da push eax */
  push32((uint32_t)(EAX));
  /* 11d4d0db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d0de push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d0df call 0x11d4d040 */
  push32(0x11d4d0e4u); f_11d4d040();
  /* 11d4d0e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d0e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4d0ea cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d0ed jne 0x11d4d0f1 */
  if (!C.zf) goto L_11d4d0f1;
  /* 11d4d0ef jmp 0x11d4d0f3 */
  goto L_11d4d0f3;
L_11d4d0f1:;
  /* 11d4d0f1 jmp 0x11d4d0c3 */
  goto L_11d4d0c3;
L_11d4d0f3:;
  /* 11d4d0f3 pop ebp */
  EBP = (pop32());
  /* 11d4d0f4 ret  */
  ESPCHK(0x11d4d0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d100 @ 0x11d4d100 (74 bytes, 31 insns) */
void f_11d4d100(void) {
  FTRACE(0x11d4d100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d100 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d101 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d103 push ecx */
  push32((uint32_t)(ECX));
L_11d4d104:;
  /* 11d4d104 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d107 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d10a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d10d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11d4d110 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4d112 jle 0x11d4d146 */
  if ((C.zf||C.sf!=C.of)) goto L_11d4d146;
  /* 11d4d114 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4d117 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d118 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d11b push eax */
  push32((uint32_t)(EAX));
  /* 11d4d11c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d11f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d4d122 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4d125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4d128 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d129 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d12c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d12f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d4d132 call 0x11d4d040 */
  push32(0x11d4d137u); f_11d4d040();
  /* 11d4d137 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d13a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4d13d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d140 jne 0x11d4d144 */
  if (!C.zf) goto L_11d4d144;
  /* 11d4d142 jmp 0x11d4d146 */
  goto L_11d4d146;
L_11d4d144:;
  /* 11d4d144 jmp 0x11d4d104 */
  goto L_11d4d104;
L_11d4d146:;
  /* 11d4d146 mov esp, ebp */
  ESP = (EBP);
  /* 11d4d148 pop ebp */
  EBP = (pop32());
  /* 11d4d149 ret  */
  ESPCHK(0x11d4d100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d150 @ 0x11d4d150 (26 bytes, 12 insns) */
void f_11d4d150(void) {
  FTRACE(0x11d4d150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d150 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d151 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d156 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4d158 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d15b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d15e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d4d160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d163 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4d165 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d4d168 pop ebp */
  EBP = (pop32());
  /* 11d4d169 ret  */
  ESPCHK(0x11d4d150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d170 @ 0x11d4d170 (31 bytes, 14 insns) */
void f_11d4d170(void) {
  FTRACE(0x11d4d170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d170 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d171 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d176 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4d178 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d17b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d17e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d4d180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d183 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4d185 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d188 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d4d18a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d4d18d pop ebp */
  EBP = (pop32());
  /* 11d4d18e ret  */
  ESPCHK(0x11d4d170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x11d4d190 (27 bytes, 12 insns) */
void f_11d4d190(void) {
  FTRACE(0x11d4d190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d190 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d191 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d196 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4d198 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d19b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d19e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d4d1a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d1a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4d1a5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11d4d1a9 pop ebp */
  EBP = (pop32());
  /* 11d4d1aa ret  */
  ESPCHK(0x11d4d190u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11d4d1b0 (145 bytes, 42 insns) */
void f_11d4d1b0(void) {
  FTRACE(0x11d4d1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d1b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d1b4 call 0x11d4d260 */
  push32(0x11d4d1b9u); f_11d4d260();
  /* 11d4d1b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d1bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d4d1be mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4d1c5 jmp 0x11d4d1d0 */
  goto L_11d4d1d0;
L_11d4d1c7:;
  /* 11d4d1c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4d1ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d1cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d4d1d0:;
  /* 11d4d1d0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d1d4 jae 0x11d4d1fa */
  if (!C.cf) goto L_11d4d1fa;
  /* 11d4d1d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4d1d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d1dc cmp ecx, dword ptr [eax*8 + 0x11d6ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11d6ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d1e3 jne 0x11d4d1f8 */
  if (!C.zf) goto L_11d4d1f8;
  /* 11d4d1e5 call 0x11d4d250 */
  push32(0x11d4d1eau); f_11d4d250();
  /* 11d4d1ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4d1ed mov ecx, dword ptr [edx*8 + 0x11d6ffbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11d6ffbc)));
  /* 11d4d1f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d4d1f6 jmp 0x11d4d23d */
  goto L_11d4d23d;
L_11d4d1f8:;
  /* 11d4d1f8 jmp 0x11d4d1c7 */
  goto L_11d4d1c7;
L_11d4d1fa:;
  /* 11d4d1fa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d1fe jb 0x11d4d213 */
  if (C.cf) goto L_11d4d213;
  /* 11d4d200 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d204 ja 0x11d4d213 */
  if ((!C.cf&&!C.zf)) goto L_11d4d213;
  /* 11d4d206 call 0x11d4d250 */
  push32(0x11d4d20bu); f_11d4d250();
  /* 11d4d20b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11d4d211 jmp 0x11d4d23d */
  goto L_11d4d23d;
L_11d4d213:;
  /* 11d4d213 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d21a jb 0x11d4d232 */
  if (C.cf) goto L_11d4d232;
  /* 11d4d21c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d223 ja 0x11d4d232 */
  if ((!C.cf&&!C.zf)) goto L_11d4d232;
  /* 11d4d225 call 0x11d4d250 */
  push32(0x11d4d22au); f_11d4d250();
  /* 11d4d22a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11d4d230 jmp 0x11d4d23d */
  goto L_11d4d23d;
L_11d4d232:;
  /* 11d4d232 call 0x11d4d250 */
  push32(0x11d4d237u); f_11d4d250();
  /* 11d4d237 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11d4d23d:;
  /* 11d4d23d mov esp, ebp */
  ESP = (EBP);
  /* 11d4d23f pop ebp */
  EBP = (pop32());
  /* 11d4d240 ret  */
  ESPCHK(0x11d4d1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d250 @ 0x11d4d250 (13 bytes, 6 insns) */
void f_11d4d250(void) {
  FTRACE(0x11d4d250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d250 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d251 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d253 call 0x11d44dc0 */
  push32(0x11d4d258u); f_11d44dc0();
  /* 11d4d258 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d25b pop ebp */
  EBP = (pop32());
  /* 11d4d25c ret  */
  ESPCHK(0x11d4d250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d260 @ 0x11d4d260 (13 bytes, 6 insns) */
void f_11d4d260(void) {
  FTRACE(0x11d4d260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d260 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d261 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d263 call 0x11d44dc0 */
  push32(0x11d4d268u); f_11d44dc0();
  /* 11d4d268 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d26b pop ebp */
  EBP = (pop32());
  /* 11d4d26c ret  */
  ESPCHK(0x11d4d260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x11d4d270 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11d4d270(void) {
  FTRACE(0x11d4d270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d270 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d271 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d273 push edi */
  push32((uint32_t)(EDI));
  /* 11d4d274 push esi */
  push32((uint32_t)(ESI));
  /* 11d4d275 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d278 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d27b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d27e mov eax, ecx */
  EAX = (ECX);
  /* 11d4d280 mov edx, ecx */
  EDX = (ECX);
  /* 11d4d282 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d284 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d286 jbe 0x11d4d290 */
  if ((C.cf||C.zf)) goto L_11d4d290;
  /* 11d4d288 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d28a jb 0x11d4d408 */
  if (C.cf) goto L_11d4d408;
L_11d4d290:;
  /* 11d4d290 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d4d296 jne 0x11d4d2ac */
  if (!C.zf) goto L_11d4d2ac;
  /* 11d4d298 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4d29b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d29e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d2a1 jb 0x11d4d2cc */
  if (C.cf) goto L_11d4d2cc;
  /* 11d4d2a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4d2a5 jmp dword ptr [edx*4 + 0x11d4d3b8] */
  switch (EDX) {
    case 0: goto L_11d4d3c8;
    case 1: goto L_11d4d3d0;
    case 2: goto L_11d4d3dc;
    case 3: goto L_11d4d3f0;
    default: x86_unimpl("switch@0x11d4d2a5 out of table"); return;
  }
L_11d4d2ac:;
  /* 11d4d2ac mov eax, edi */
  EAX = (EDI);
  /* 11d4d2ae mov edx, 3 */
  EDX = (0x3u);
  /* 11d4d2b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d2b6 jb 0x11d4d2c4 */
  if (C.cf) goto L_11d4d2c4;
  /* 11d4d2b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d2bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d2bd jmp dword ptr [eax*4 + 0x11d4d2d0] */
  switch (EAX) {
    case 1: goto L_11d4d2e0;
    case 2: goto L_11d4d30c;
    case 3: goto L_11d4d330;
    default: x86_unimpl("switch@0x11d4d2bd out of table"); return;
  }
L_11d4d2c4:;
  /* 11d4d2c4 jmp dword ptr [ecx*4 + 0x11d4d3c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11d4d3c8)))); return;
  /* 11d4d2cb nop  */
  /* nop */
L_11d4d2cc:;
  /* 11d4d2cc jmp dword ptr [ecx*4 + 0x11d4d34c] */
  switch (ECX) {
    case 0: goto L_11d4d3af;
    case 1: goto L_11d4d39c;
    case 2: goto L_11d4d394;
    case 3: goto L_11d4d38c;
    case 4: goto L_11d4d384;
    case 5: goto L_11d4d37c;
    case 6: goto L_11d4d374;
    case 7: goto L_11d4d36c;
    default: x86_unimpl("switch@0x11d4d2cc out of table"); return;
  }
  /* 11d4d2d3 nop  */
  /* nop */
L_11d4d2e0:;
  /* 11d4d2e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d2e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4d2e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4d2e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4d2e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4d2ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4d2ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4d2f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4d2f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d2f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d2fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d2fe jb 0x11d4d2cc */
  if (C.cf) goto L_11d4d2cc;
  /* 11d4d300 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4d302 jmp dword ptr [edx*4 + 0x11d4d3b8] */
  switch (EDX) {
    case 0: goto L_11d4d3c8;
    case 1: goto L_11d4d3d0;
    case 2: goto L_11d4d3dc;
    case 3: goto L_11d4d3f0;
    default: x86_unimpl("switch@0x11d4d302 out of table"); return;
  }
  /* 11d4d309 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4d30c:;
  /* 11d4d30c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d30e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4d310 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4d312 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4d315 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4d318 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4d31b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d31e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d321 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d324 jb 0x11d4d2cc */
  if (C.cf) goto L_11d4d2cc;
  /* 11d4d326 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4d328 jmp dword ptr [edx*4 + 0x11d4d3b8] */
  switch (EDX) {
    case 0: goto L_11d4d3c8;
    case 1: goto L_11d4d3d0;
    case 2: goto L_11d4d3dc;
    case 3: goto L_11d4d3f0;
    default: x86_unimpl("switch@0x11d4d328 out of table"); return;
  }
  /* 11d4d32f nop  */
  /* nop */
L_11d4d330:;
  /* 11d4d330 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d332 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4d334 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4d336 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d4d337 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4d33a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d4d33b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d33e jb 0x11d4d2cc */
  if (C.cf) goto L_11d4d2cc;
  /* 11d4d340 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4d342 jmp dword ptr [edx*4 + 0x11d4d3b8] */
  switch (EDX) {
    case 0: goto L_11d4d3c8;
    case 1: goto L_11d4d3d0;
    case 2: goto L_11d4d3dc;
    case 3: goto L_11d4d3f0;
    default: x86_unimpl("switch@0x11d4d342 out of table"); return;
  }
  /* 11d4d349 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4d36c:;
  /* 11d4d36c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11d4d370 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11d4d374:;
  /* 11d4d374 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11d4d378 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11d4d37c:;
  /* 11d4d37c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11d4d380 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11d4d384:;
  /* 11d4d384 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11d4d388 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11d4d38c:;
  /* 11d4d38c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11d4d390 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11d4d394:;
  /* 11d4d394 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11d4d398 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11d4d39c:;
  /* 11d4d39c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11d4d3a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11d4d3a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d4d3ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d3ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d4d3af:;
  /* 11d4d3af jmp dword ptr [edx*4 + 0x11d4d3b8] */
  switch (EDX) {
    case 0: goto L_11d4d3c8;
    case 1: goto L_11d4d3d0;
    case 2: goto L_11d4d3dc;
    case 3: goto L_11d4d3f0;
    default: x86_unimpl("switch@0x11d4d3af out of table"); return;
  }
  /* 11d4d3b6 mov edi, edi */
  EDI = (EDI);
L_11d4d3c8:;
  /* 11d4d3c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d3cb pop esi */
  ESI = (pop32());
  /* 11d4d3cc pop edi */
  EDI = (pop32());
  /* 11d4d3cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4d3ce ret  */
  ESPCHK(0x11d4d270u, _esp0);
  ESP += 4; return;
  /* 11d4d3cf nop  */
  /* nop */
L_11d4d3d0:;
  /* 11d4d3d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4d3d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4d3d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d3d7 pop esi */
  ESI = (pop32());
  /* 11d4d3d8 pop edi */
  EDI = (pop32());
  /* 11d4d3d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4d3da ret  */
  ESPCHK(0x11d4d270u, _esp0);
  ESP += 4; return;
  /* 11d4d3db nop  */
  /* nop */
L_11d4d3dc:;
  /* 11d4d3dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4d3de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4d3e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4d3e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4d3e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d3e9 pop esi */
  ESI = (pop32());
  /* 11d4d3ea pop edi */
  EDI = (pop32());
  /* 11d4d3eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4d3ec ret  */
  ESPCHK(0x11d4d270u, _esp0);
  ESP += 4; return;
  /* 11d4d3ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4d3f0:;
  /* 11d4d3f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d4d3f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d4d3f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4d3f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4d3fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4d3fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4d400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d403 pop esi */
  ESI = (pop32());
  /* 11d4d404 pop edi */
  EDI = (pop32());
  /* 11d4d405 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4d406 ret  */
  ESPCHK(0x11d4d270u, _esp0);
  ESP += 4; return;
  /* 11d4d407 nop  */
  /* nop */
L_11d4d408:;
  /* 11d4d408 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11d4d40c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11d4d410 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d4d416 jne 0x11d4d43c */
  if (!C.zf) goto L_11d4d43c;
  /* 11d4d418 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4d41b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d41e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d421 jb 0x11d4d430 */
  if (C.cf) goto L_11d4d430;
  /* 11d4d423 std  */
  C.df=1;
  /* 11d4d424 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4d426 cld  */
  C.df=0;
  /* 11d4d427 jmp dword ptr [edx*4 + 0x11d4d550] */
  switch (EDX) {
    case 0: goto L_11d4d560;
    case 1: goto L_11d4d568;
    case 2: goto L_11d4d578;
    case 3: goto L_11d4d58c;
    default: x86_unimpl("switch@0x11d4d427 out of table"); return;
  }
  /* 11d4d42e mov edi, edi */
  EDI = (EDI);
L_11d4d430:;
  /* 11d4d430 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4d432 jmp dword ptr [ecx*4 + 0x11d4d500] */
  switch (ECX) {
    case 0: goto L_11d4d547;
    default: x86_unimpl("switch@0x11d4d432 out of table"); return;
  }
  /* 11d4d439 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4d43c:;
  /* 11d4d43c mov eax, edi */
  EAX = (EDI);
  /* 11d4d43e mov edx, 3 */
  EDX = (0x3u);
  /* 11d4d443 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d446 jb 0x11d4d454 */
  if (C.cf) goto L_11d4d454;
  /* 11d4d448 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d44b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d44d jmp dword ptr [eax*4 + 0x11d4d458] */
  switch (EAX) {
    case 1: goto L_11d4d468;
    case 2: goto L_11d4d488;
    case 3: goto L_11d4d4b0;
    default: x86_unimpl("switch@0x11d4d44d out of table"); return;
  }
L_11d4d454:;
  /* 11d4d454 jmp dword ptr [ecx*4 + 0x11d4d550] */
  switch (ECX) {
    case 0: goto L_11d4d560;
    case 1: goto L_11d4d568;
    case 2: goto L_11d4d578;
    case 3: goto L_11d4d58c;
    default: x86_unimpl("switch@0x11d4d454 out of table"); return;
  }
  /* 11d4d45b nop  */
  /* nop */
L_11d4d468:;
  /* 11d4d468 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4d46b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d46d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4d470 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d4d471 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4d474 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d4d475 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d478 jb 0x11d4d430 */
  if (C.cf) goto L_11d4d430;
  /* 11d4d47a std  */
  C.df=1;
  /* 11d4d47b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4d47d cld  */
  C.df=0;
  /* 11d4d47e jmp dword ptr [edx*4 + 0x11d4d550] */
  switch (EDX) {
    case 0: goto L_11d4d560;
    case 1: goto L_11d4d568;
    case 2: goto L_11d4d578;
    case 3: goto L_11d4d58c;
    default: x86_unimpl("switch@0x11d4d47e out of table"); return;
  }
  /* 11d4d485 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4d488:;
  /* 11d4d488 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4d48b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d48d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4d490 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4d493 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4d496 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4d499 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d49c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d49f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d4a2 jb 0x11d4d430 */
  if (C.cf) goto L_11d4d430;
  /* 11d4d4a4 std  */
  C.df=1;
  /* 11d4d4a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4d4a7 cld  */
  C.df=0;
  /* 11d4d4a8 jmp dword ptr [edx*4 + 0x11d4d550] */
  switch (EDX) {
    case 0: goto L_11d4d560;
    case 1: goto L_11d4d568;
    case 2: goto L_11d4d578;
    case 3: goto L_11d4d58c;
    default: x86_unimpl("switch@0x11d4d4a8 out of table"); return;
  }
  /* 11d4d4af nop  */
  /* nop */
L_11d4d4b0:;
  /* 11d4d4b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4d4b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d4b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4d4b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4d4bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4d4be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4d4c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4d4c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4d4c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d4ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d4cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d4d0 jb 0x11d4d430 */
  if (C.cf) goto L_11d4d430;
  /* 11d4d4d6 std  */
  C.df=1;
  /* 11d4d4d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d4d4d9 cld  */
  C.df=0;
  /* 11d4d4da jmp dword ptr [edx*4 + 0x11d4d550] */
  switch (EDX) {
    case 0: goto L_11d4d560;
    case 1: goto L_11d4d568;
    case 2: goto L_11d4d578;
    case 3: goto L_11d4d58c;
    default: x86_unimpl("switch@0x11d4d4da out of table"); return;
  }
  /* 11d4d4e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11d4d4e4 add al, 0xd5 */
  { uint32_t _a=(AL),_b=(0xd5u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4d4e6 aam 0x11 */
  x86_unimpl("aam @ 0x11d4d4e6");
  /* 11d4d4e8 or al, 0xd5 */
  { uint32_t _r=(AL)|(0xd5u); AL = (_r); fl_logic(_r,8); }
  /* 11d4d4ea aam 0x11 */
  x86_unimpl("aam @ 0x11d4d4ea");
  /* 11d4d4ec adc al, 0xd5 */
  { uint32_t _a=(AL),_b=(0xd5u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d4d4ee aam 0x11 */
  x86_unimpl("aam @ 0x11d4d4ee");
  /* 11d4d4f0 sbb al, 0xd5 */
  { uint32_t _a=(AL),_b=(0xd5u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d4d4f2 aam 0x11 */
  x86_unimpl("aam @ 0x11d4d4f2");
  /* 11d4d4f4 and al, 0xd5 */
  { uint32_t _r=(AL)&(0xd5u); AL = (_r); fl_logic(_r,8); }
  /* 11d4d4f6 aam 0x11 */
  x86_unimpl("aam @ 0x11d4d4f6");
  /* 11d4d4f8 sub al, 0xd5 */
  { uint32_t _a=(AL),_b=(0xd5u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d4d4fa aam 0x11 */
  x86_unimpl("aam @ 0x11d4d4fa");
  /* 11d4d4fc xor al, 0xd5 */
  { uint32_t _r=(AL)^(0xd5u); AL = (_r); fl_logic(_r,8); }
  /* 11d4d4fe aam 0x11 */
  x86_unimpl("aam @ 0x11d4d4fe");
  /* 11d4d504 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11d4d508 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11d4d50c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11d4d510 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11d4d514 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11d4d518 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11d4d51c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11d4d520 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11d4d524 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11d4d528 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11d4d52c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11d4d530 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11d4d534 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11d4d538 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11d4d53c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d4d543 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d545 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d4d547:;
  /* 11d4d547 jmp dword ptr [edx*4 + 0x11d4d550] */
  switch (EDX) {
    case 0: goto L_11d4d560;
    case 1: goto L_11d4d568;
    case 2: goto L_11d4d578;
    case 3: goto L_11d4d58c;
    default: x86_unimpl("switch@0x11d4d547 out of table"); return;
  }
  /* 11d4d54e mov edi, edi */
  EDI = (EDI);
L_11d4d560:;
  /* 11d4d560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d563 pop esi */
  ESI = (pop32());
  /* 11d4d564 pop edi */
  EDI = (pop32());
  /* 11d4d565 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4d566 ret  */
  ESPCHK(0x11d4d270u, _esp0);
  ESP += 4; return;
  /* 11d4d567 nop  */
  /* nop */
L_11d4d568:;
  /* 11d4d568 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4d56b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4d56e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d571 pop esi */
  ESI = (pop32());
  /* 11d4d572 pop edi */
  EDI = (pop32());
  /* 11d4d573 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4d574 ret  */
  ESPCHK(0x11d4d270u, _esp0);
  ESP += 4; return;
  /* 11d4d575 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d4d578:;
  /* 11d4d578 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4d57b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4d57e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4d581 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4d584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d587 pop esi */
  ESI = (pop32());
  /* 11d4d588 pop edi */
  EDI = (pop32());
  /* 11d4d589 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4d58a ret  */
  ESPCHK(0x11d4d270u, _esp0);
  ESP += 4; return;
  /* 11d4d58b nop  */
  /* nop */
L_11d4d58c:;
  /* 11d4d58c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d4d58f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d4d592 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d4d595 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d4d598 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d4d59b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d4d59e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d5a1 pop esi */
  ESI = (pop32());
  /* 11d4d5a2 pop edi */
  EDI = (pop32());
  /* 11d4d5a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d4d5a4 ret  */
  ESPCHK(0x11d4d270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5b0 @ 0x11d4d5b0 (421 bytes, 148 insns) */
void f_11d4d5b0(void) {
  FTRACE(0x11d4d5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d5b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d4d5b5 push 0x11d6d270 */
  push32((uint32_t)(0x11d6d270u));
  /* 11d4d5ba push 0x11d4e488 */
  push32((uint32_t)(0x11d4e488u));
  /* 11d4d5bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d4d5c5 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d5c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d4d5cd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d5d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4d5d1 push esi */
  push32((uint32_t)(ESI));
  /* 11d4d5d2 push edi */
  push32((uint32_t)(EDI));
  /* 11d4d5d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d4d5d6 cmp dword ptr [0x11d71844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d5dd jne 0x11d4d62e */
  if (!C.zf) goto L_11d4d62e;
  /* 11d4d5df lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11d4d5e2 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d5e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4d5e5 push 0x11d6d26c */
  push32((uint32_t)(0x11d6d26cu));
  /* 11d4d5ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4d5ec call dword ptr [0x11d74330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74330))), 0x11d4d5f2u);
  /* 11d4d5f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4d5f4 je 0x11d4d602 */
  if (C.zf) goto L_11d4d602;
  /* 11d4d5f6 mov dword ptr [0x11d71844], 1 */
  w32((uint32_t)(0x11d71844), (0x1u));
  /* 11d4d600 jmp 0x11d4d62e */
  goto L_11d4d62e;
L_11d4d602:;
  /* 11d4d602 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11d4d605 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d606 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4d608 push 0x11d6d268 */
  push32((uint32_t)(0x11d6d268u));
  /* 11d4d60d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4d60f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d611 call dword ptr [0x11d74334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74334))), 0x11d4d617u);
  /* 11d4d617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4d619 je 0x11d4d627 */
  if (C.zf) goto L_11d4d627;
  /* 11d4d61b mov dword ptr [0x11d71844], 2 */
  w32((uint32_t)(0x11d71844), (0x2u));
  /* 11d4d625 jmp 0x11d4d62e */
  goto L_11d4d62e;
L_11d4d627:;
  /* 11d4d627 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d629 jmp 0x11d4d758 */
  goto L_11d4d758;
L_11d4d62e:;
  /* 11d4d62e cmp dword ptr [0x11d71844], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11d71844))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d635 jne 0x11d4d665 */
  if (!C.zf) goto L_11d4d665;
  /* 11d4d637 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d63b jne 0x11d4d646 */
  if (!C.zf) goto L_11d4d646;
  /* 11d4d63d mov edx, dword ptr [0x11d71850] */
  EDX = (r32((uint32_t)(0x11d71850)));
  /* 11d4d643 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11d4d646:;
  /* 11d4d646 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4d649 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d64a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d64d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d64e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d651 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d655 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d656 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d4d659 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d65a call dword ptr [0x11d74334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74334))), 0x11d4d660u);
  /* 11d4d660 jmp 0x11d4d758 */
  goto L_11d4d758;
L_11d4d665:;
  /* 11d4d665 cmp dword ptr [0x11d71844], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71844))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d66c jne 0x11d4d756 */
  if (!C.zf) goto L_11d4d756;
  /* 11d4d672 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d676 jne 0x11d4d681 */
  if (!C.zf) goto L_11d4d681;
  /* 11d4d678 mov edx, dword ptr [0x11d71860] */
  EDX = (r32((uint32_t)(0x11d71860)));
  /* 11d4d67e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11d4d681:;
  /* 11d4d681 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d683 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d685 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d688 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d689 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d68c push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d68d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d4d690 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4d692 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d694 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d697 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d69a push edx */
  push32((uint32_t)(EDX));
  /* 11d4d69b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4d69e push eax */
  push32((uint32_t)(EAX));
  /* 11d4d69f call dword ptr [0x11d74338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74338))), 0x11d4d6a5u);
  /* 11d4d6a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d4d6a8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d6ac jne 0x11d4d6b5 */
  if (!C.zf) goto L_11d4d6b5;
  /* 11d4d6ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d6b0 jmp 0x11d4d758 */
  goto L_11d4d758;
L_11d4d6b5:;
  /* 11d4d6b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4d6bc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4d6bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d4d6c1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d6c4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d4d6c6 call 0x11d48520 */
  push32(0x11d4d6cbu); f_11d48520();
  /* 11d4d6cb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11d4d6ce mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d4d6d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4d6d4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d4d6d7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4d6da shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d4d6dc push edx */
  push32((uint32_t)(EDX));
  /* 11d4d6dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d6df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4d6e2 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d6e3 call 0x11d490f0 */
  push32(0x11d4d6e8u); f_11d490f0();
  /* 11d4d6e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d6eb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d4d6f2 jmp 0x11d4d70b */
  goto L_11d4d70b;
  /* 11d4d6f4 mov eax, 1 */
  EAX = (0x1u);
  /* 11d4d6f9 ret  */
  ESPCHK(0x11d4d5b0u, _esp0);
  ESP += 4; return;
  /* 11d4d6fa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4d6fd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d4d704 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d4d70b:;
  /* 11d4d70b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d70f jne 0x11d4d715 */
  if (!C.zf) goto L_11d4d715;
  /* 11d4d711 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d713 jmp 0x11d4d758 */
  goto L_11d4d758;
L_11d4d715:;
  /* 11d4d715 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4d718 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d719 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4d71c push edx */
  push32((uint32_t)(EDX));
  /* 11d4d71d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d720 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d721 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d724 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d725 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4d727 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4d72a push edx */
  push32((uint32_t)(EDX));
  /* 11d4d72b call dword ptr [0x11d74338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74338))), 0x11d4d731u);
  /* 11d4d731 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d4d734 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d738 jne 0x11d4d73e */
  if (!C.zf) goto L_11d4d73e;
  /* 11d4d73a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d73c jmp 0x11d4d758 */
  goto L_11d4d758;
L_11d4d73e:;
  /* 11d4d73e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4d741 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d742 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4d745 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d746 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4d749 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d74a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d74d push eax */
  push32((uint32_t)(EAX));
  /* 11d4d74e call dword ptr [0x11d74330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74330))), 0x11d4d754u);
  /* 11d4d754 jmp 0x11d4d758 */
  goto L_11d4d758;
L_11d4d756:;
  /* 11d4d756 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d4d758:;
  /* 11d4d758 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11d4d75b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4d75e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d4d765 pop edi */
  EDI = (pop32());
  /* 11d4d766 pop esi */
  ESI = (pop32());
  /* 11d4d767 pop ebx */
  EBX = (pop32());
  /* 11d4d768 mov esp, ebp */
  ESP = (EBP);
  /* 11d4d76a pop ebp */
  EBP = (pop32());
  /* 11d4d76b ret  */
  ESPCHK(0x11d4d5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d770 @ 0x11d4d770 (727 bytes, 263 insns) */
void f_11d4d770(void) {
  FTRACE(0x11d4d770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4d770 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4d771 mov ebp, esp */
  EBP = (ESP);
  /* 11d4d773 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d4d775 push 0x11d6d280 */
  push32((uint32_t)(0x11d6d280u));
  /* 11d4d77a push 0x11d4e488 */
  push32((uint32_t)(0x11d4e488u));
  /* 11d4d77f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d4d785 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d786 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d4d78d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d790 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4d791 push esi */
  push32((uint32_t)(ESI));
  /* 11d4d792 push edi */
  push32((uint32_t)(EDI));
  /* 11d4d793 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d4d796 cmp dword ptr [0x11d71868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d79d jne 0x11d4d7f6 */
  if (!C.zf) goto L_11d4d7f6;
  /* 11d4d79f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d7a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d7a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4d7a5 push 0x11d6d26c */
  push32((uint32_t)(0x11d6d26cu));
  /* 11d4d7aa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d4d7af push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d7b1 call dword ptr [0x11d74328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74328))), 0x11d4d7b7u);
  /* 11d4d7b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4d7b9 je 0x11d4d7c7 */
  if (C.zf) goto L_11d4d7c7;
  /* 11d4d7bb mov dword ptr [0x11d71868], 1 */
  w32((uint32_t)(0x11d71868), (0x1u));
  /* 11d4d7c5 jmp 0x11d4d7f6 */
  goto L_11d4d7f6;
L_11d4d7c7:;
  /* 11d4d7c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d7c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d7cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4d7cd push 0x11d6d268 */
  push32((uint32_t)(0x11d6d268u));
  /* 11d4d7d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d4d7d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d7d9 call dword ptr [0x11d7432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7432c))), 0x11d4d7dfu);
  /* 11d4d7df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4d7e1 je 0x11d4d7ef */
  if (C.zf) goto L_11d4d7ef;
  /* 11d4d7e3 mov dword ptr [0x11d71868], 2 */
  w32((uint32_t)(0x11d71868), (0x2u));
  /* 11d4d7ed jmp 0x11d4d7f6 */
  goto L_11d4d7f6;
L_11d4d7ef:;
  /* 11d4d7ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d7f1 jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4d7f6:;
  /* 11d4d7f6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d7fa jle 0x11d4d80f */
  if ((C.zf||C.sf!=C.of)) goto L_11d4d80f;
  /* 11d4d7fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4d7ff push eax */
  push32((uint32_t)(EAX));
  /* 11d4d800 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d803 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d804 call 0x11d4da80 */
  push32(0x11d4d809u); f_11d4da80();
  /* 11d4d809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d80c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11d4d80f:;
  /* 11d4d80f cmp dword ptr [0x11d71868], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11d71868))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d816 jne 0x11d4d83b */
  if (!C.zf) goto L_11d4d83b;
  /* 11d4d818 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d4d81b push edx */
  push32((uint32_t)(EDX));
  /* 11d4d81c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4d81f push eax */
  push32((uint32_t)(EAX));
  /* 11d4d820 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4d823 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d824 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d827 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d828 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d82b push eax */
  push32((uint32_t)(EAX));
  /* 11d4d82c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d82f push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d830 call dword ptr [0x11d7432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7432c))), 0x11d4d836u);
  /* 11d4d836 jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4d83b:;
  /* 11d4d83b cmp dword ptr [0x11d71868], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71868))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d842 jne 0x11d4da5f */
  if (!C.zf) goto L_11d4da5f;
  /* 11d4d848 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d84c jne 0x11d4d857 */
  if (!C.zf) goto L_11d4d857;
  /* 11d4d84e mov edx, dword ptr [0x11d71860] */
  EDX = (r32((uint32_t)(0x11d71860)));
  /* 11d4d854 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11d4d857:;
  /* 11d4d857 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d859 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d85b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4d85e push eax */
  push32((uint32_t)(EAX));
  /* 11d4d85f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d862 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d863 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11d4d866 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4d868 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4d86a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d86d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d870 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d871 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d4d874 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d875 call dword ptr [0x11d74338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74338))), 0x11d4d87bu);
  /* 11d4d87b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d4d87e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d882 jne 0x11d4d88b */
  if (!C.zf) goto L_11d4d88b;
  /* 11d4d884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d886 jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4d88b:;
  /* 11d4d88b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4d892 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4d895 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d4d897 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d89a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d4d89c call 0x11d48520 */
  push32(0x11d4d8a1u); f_11d48520();
  /* 11d4d8a1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11d4d8a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d4d8a7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d4d8aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d4d8ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d4d8b4 jmp 0x11d4d8cd */
  goto L_11d4d8cd;
  /* 11d4d8b6 mov eax, 1 */
  EAX = (0x1u);
  /* 11d4d8bb ret  */
  ESPCHK(0x11d4d770u, _esp0);
  ESP += 4; return;
  /* 11d4d8bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4d8bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d4d8c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d4d8cd:;
  /* 11d4d8cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d8d1 jne 0x11d4d8da */
  if (!C.zf) goto L_11d4d8da;
  /* 11d4d8d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d8d5 jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4d8da:;
  /* 11d4d8da mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4d8dd push edx */
  push32((uint32_t)(EDX));
  /* 11d4d8de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4d8e1 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d8e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4d8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d8e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4d8e9 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d8ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4d8ec mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d4d8ef push eax */
  push32((uint32_t)(EAX));
  /* 11d4d8f0 call dword ptr [0x11d74338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74338))), 0x11d4d8f6u);
  /* 11d4d8f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4d8f8 jne 0x11d4d901 */
  if (!C.zf) goto L_11d4d901;
  /* 11d4d8fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d8fc jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4d901:;
  /* 11d4d901 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d903 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d905 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4d908 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d909 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4d90c push edx */
  push32((uint32_t)(EDX));
  /* 11d4d90d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d910 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d914 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d915 call dword ptr [0x11d74328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74328))), 0x11d4d91bu);
  /* 11d4d91b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d4d91e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d922 jne 0x11d4d92b */
  if (!C.zf) goto L_11d4d92b;
  /* 11d4d924 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d926 jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4d92b:;
  /* 11d4d92b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d92e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4d934 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4d936 je 0x11d4d97b */
  if (C.zf) goto L_11d4d97b;
  /* 11d4d938 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d93c je 0x11d4d976 */
  if (C.zf) goto L_11d4d976;
  /* 11d4d93e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4d941 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d944 jle 0x11d4d94d */
  if ((C.zf||C.sf!=C.of)) goto L_11d4d94d;
  /* 11d4d946 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d948 jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4d94d:;
  /* 11d4d94d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d4d950 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d951 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4d954 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d955 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4d958 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d959 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4d95c push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d95d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d960 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d961 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d964 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d965 call dword ptr [0x11d74328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74328))), 0x11d4d96bu);
  /* 11d4d96b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4d96d jne 0x11d4d976 */
  if (!C.zf) goto L_11d4d976;
  /* 11d4d96f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d971 jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4d976:;
  /* 11d4d976 jmp 0x11d4da5a */
  goto L_11d4da5a;
L_11d4d97b:;
  /* 11d4d97b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4d97e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d4d981 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d4d988 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4d98b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d4d98d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4d990 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d4d992 call 0x11d48520 */
  push32(0x11d4d997u); f_11d48520();
  /* 11d4d997 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11d4d99a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d4d99d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d4d9a0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d4d9a3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d4d9aa jmp 0x11d4d9c3 */
  goto L_11d4d9c3;
  /* 11d4d9ac mov eax, 1 */
  EAX = (0x1u);
  /* 11d4d9b1 ret  */
  ESPCHK(0x11d4d770u, _esp0);
  ESP += 4; return;
  /* 11d4d9b2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4d9b5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d4d9bc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d4d9c3:;
  /* 11d4d9c3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d9c7 jne 0x11d4d9d0 */
  if (!C.zf) goto L_11d4d9d0;
  /* 11d4d9c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d9cb jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4d9d0:;
  /* 11d4d9d0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4d9d3 push eax */
  push32((uint32_t)(EAX));
  /* 11d4d9d4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4d9d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d9d8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d4d9db push edx */
  push32((uint32_t)(EDX));
  /* 11d4d9dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4d9df push eax */
  push32((uint32_t)(EAX));
  /* 11d4d9e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4d9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4d9e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4d9e7 push edx */
  push32((uint32_t)(EDX));
  /* 11d4d9e8 call dword ptr [0x11d74328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74328))), 0x11d4d9eeu);
  /* 11d4d9ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4d9f0 jne 0x11d4d9f6 */
  if (!C.zf) goto L_11d4d9f6;
  /* 11d4d9f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4d9f4 jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4d9f6:;
  /* 11d4d9f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4d9fa jne 0x11d4da2a */
  if (!C.zf) goto L_11d4da2a;
  /* 11d4d9fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4d9fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4da00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4da02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4da04 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4da07 push eax */
  push32((uint32_t)(EAX));
  /* 11d4da08 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4da0b push ecx */
  push32((uint32_t)(ECX));
  /* 11d4da0c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d4da11 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d4da14 push edx */
  push32((uint32_t)(EDX));
  /* 11d4da15 call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d4da1bu);
  /* 11d4da1b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d4da1e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4da22 jne 0x11d4da28 */
  if (!C.zf) goto L_11d4da28;
  /* 11d4da24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4da26 jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4da28:;
  /* 11d4da28 jmp 0x11d4da5a */
  goto L_11d4da5a;
L_11d4da2a:;
  /* 11d4da2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4da2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4da2e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d4da31 push eax */
  push32((uint32_t)(EAX));
  /* 11d4da32 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4da35 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4da36 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d4da39 push edx */
  push32((uint32_t)(EDX));
  /* 11d4da3a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d4da3d push eax */
  push32((uint32_t)(EAX));
  /* 11d4da3e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d4da43 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d4da46 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4da47 call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d4da4du);
  /* 11d4da4d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d4da50 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4da54 jne 0x11d4da5a */
  if (!C.zf) goto L_11d4da5a;
  /* 11d4da56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4da58 jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4da5a:;
  /* 11d4da5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4da5d jmp 0x11d4da61 */
  goto L_11d4da61;
L_11d4da5f:;
  /* 11d4da5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d4da61:;
  /* 11d4da61 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11d4da64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4da67 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d4da6e pop edi */
  EDI = (pop32());
  /* 11d4da6f pop esi */
  ESI = (pop32());
  /* 11d4da70 pop ebx */
  EBX = (pop32());
  /* 11d4da71 mov esp, ebp */
  ESP = (EBP);
  /* 11d4da73 pop ebp */
  EBP = (pop32());
  /* 11d4da74 ret  */
  ESPCHK(0x11d4d770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da80 @ 0x11d4da80 (80 bytes, 32 insns) */
void f_11d4da80(void) {
  FTRACE(0x11d4da80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4da80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4da81 mov ebp, esp */
  EBP = (ESP);
  /* 11d4da83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4da86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4da89 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4da8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4da8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d4da92:;
  /* 11d4da92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4da95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4da98 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4da9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4da9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4daa0 je 0x11d4dab7 */
  if (C.zf) goto L_11d4dab7;
  /* 11d4daa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4daa5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d4daa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4daaa je 0x11d4dab7 */
  if (C.zf) goto L_11d4dab7;
  /* 11d4daac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4daaf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4dab2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4dab5 jmp 0x11d4da92 */
  goto L_11d4da92;
L_11d4dab7:;
  /* 11d4dab7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4daba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d4dabd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4dabf jne 0x11d4dac9 */
  if (!C.zf) goto L_11d4dac9;
  /* 11d4dac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dac4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4dac7 jmp 0x11d4dacc */
  goto L_11d4dacc;
L_11d4dac9:;
  /* 11d4dac9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11d4dacc:;
  /* 11d4dacc mov esp, ebp */
  ESP = (EBP);
  /* 11d4dace pop ebp */
  EBP = (pop32());
  /* 11d4dacf ret  */
  ESPCHK(0x11d4da80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dad0 @ 0x11d4dad0 (130 bytes, 43 insns) */
void f_11d4dad0(void) {
  FTRACE(0x11d4dad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4dad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4dad1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4dad3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4dad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dad7 cmp eax, dword ptr [0x11d7315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d7315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4dadd jae 0x11d4db01 */
  if (!C.cf) goto L_11d4db01;
  /* 11d4dadf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dae2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4dae5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dae8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4daeb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4daee mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4daf5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d4dafa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4dafd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4daff jne 0x11d4db1c */
  if (!C.zf) goto L_11d4db1c;
L_11d4db01:;
  /* 11d4db01 call 0x11d4d250 */
  push32(0x11d4db06u); f_11d4d250();
  /* 11d4db06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d4db0c call 0x11d4d260 */
  push32(0x11d4db11u); f_11d4d260();
  /* 11d4db11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4db17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4db1a jmp 0x11d4db4e */
  goto L_11d4db4e;
L_11d4db1c:;
  /* 11d4db1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4db1f push edx */
  push32((uint32_t)(EDX));
  /* 11d4db20 call 0x11d4ea70 */
  push32(0x11d4db25u); f_11d4ea70();
  /* 11d4db25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4db28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4db2b push eax */
  push32((uint32_t)(EAX));
  /* 11d4db2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4db2f push ecx */
  push32((uint32_t)(ECX));
  /* 11d4db30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4db33 push edx */
  push32((uint32_t)(EDX));
  /* 11d4db34 call 0x11d4db60 */
  push32(0x11d4db39u); f_11d4db60();
  /* 11d4db39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4db3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4db3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4db42 push eax */
  push32((uint32_t)(EAX));
  /* 11d4db43 call 0x11d4eb00 */
  push32(0x11d4db48u); f_11d4eb00();
  /* 11d4db48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4db4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d4db4e:;
  /* 11d4db4e mov esp, ebp */
  ESP = (EBP);
  /* 11d4db50 pop ebp */
  EBP = (pop32());
  /* 11d4db51 ret  */
  ESPCHK(0x11d4dad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db60 @ 0x11d4db60 (178 bytes, 56 insns) */
void f_11d4db60(void) {
  FTRACE(0x11d4db60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4db60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4db61 mov ebp, esp */
  EBP = (ESP);
  /* 11d4db63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4db66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4db69 push eax */
  push32((uint32_t)(EAX));
  /* 11d4db6a call 0x11d4e8f0 */
  push32(0x11d4db6fu); f_11d4e8f0();
  /* 11d4db6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4db72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d4db75 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4db79 jne 0x11d4db8e */
  if (!C.zf) goto L_11d4db8e;
  /* 11d4db7b call 0x11d4d250 */
  push32(0x11d4db80u); f_11d4d250();
  /* 11d4db80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d4db86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4db89 jmp 0x11d4dc0e */
  goto L_11d4dc0e;
L_11d4db8e:;
  /* 11d4db8e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4db91 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4db92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4db94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4db97 push edx */
  push32((uint32_t)(EDX));
  /* 11d4db98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4db9b push eax */
  push32((uint32_t)(EAX));
  /* 11d4db9c call dword ptr [0x11d74324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74324))), 0x11d4dba2u);
  /* 11d4dba2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4dba5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4dba9 jne 0x11d4dbb6 */
  if (!C.zf) goto L_11d4dbb6;
  /* 11d4dbab call dword ptr [0x11d743f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f0))), 0x11d4dbb1u);
  /* 11d4dbb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4dbb4 jmp 0x11d4dbbd */
  goto L_11d4dbbd;
L_11d4dbb6:;
  /* 11d4dbb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d4dbbd:;
  /* 11d4dbbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4dbc1 je 0x11d4dbd4 */
  if (C.zf) goto L_11d4dbd4;
  /* 11d4dbc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dbc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4dbc7 call 0x11d4d1b0 */
  push32(0x11d4dbccu); f_11d4d1b0();
  /* 11d4dbcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4dbcf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4dbd2 jmp 0x11d4dc0e */
  goto L_11d4dc0e;
L_11d4dbd4:;
  /* 11d4dbd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dbd7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d4dbda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dbdd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4dbe0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4dbe3 mov ecx, dword ptr [edx*4 + 0x11d73020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11d73020)));
  /* 11d4dbea mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11d4dbee and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11d4dbf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dbf4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4dbf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dbfa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4dbfd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4dc00 mov eax, dword ptr [eax*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4dc07 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11d4dc0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d4dc0e:;
  /* 11d4dc0e mov esp, ebp */
  ESP = (EBP);
  /* 11d4dc10 pop ebp */
  EBP = (pop32());
  /* 11d4dc11 ret  */
  ESPCHK(0x11d4db60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc20 @ 0x11d4dc20 (130 bytes, 43 insns) */
void f_11d4dc20(void) {
  FTRACE(0x11d4dc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4dc20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4dc21 mov ebp, esp */
  EBP = (ESP);
  /* 11d4dc23 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4dc24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dc27 cmp eax, dword ptr [0x11d7315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d7315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4dc2d jae 0x11d4dc51 */
  if (!C.cf) goto L_11d4dc51;
  /* 11d4dc2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dc32 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4dc35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dc38 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4dc3b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4dc3e mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4dc45 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d4dc4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4dc4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4dc4f jne 0x11d4dc6c */
  if (!C.zf) goto L_11d4dc6c;
L_11d4dc51:;
  /* 11d4dc51 call 0x11d4d250 */
  push32(0x11d4dc56u); f_11d4d250();
  /* 11d4dc56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d4dc5c call 0x11d4d260 */
  push32(0x11d4dc61u); f_11d4d260();
  /* 11d4dc61 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4dc67 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4dc6a jmp 0x11d4dc9e */
  goto L_11d4dc9e;
L_11d4dc6c:;
  /* 11d4dc6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dc6f push edx */
  push32((uint32_t)(EDX));
  /* 11d4dc70 call 0x11d4ea70 */
  push32(0x11d4dc75u); f_11d4ea70();
  /* 11d4dc75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4dc78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4dc7b push eax */
  push32((uint32_t)(EAX));
  /* 11d4dc7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4dc7f push ecx */
  push32((uint32_t)(ECX));
  /* 11d4dc80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dc83 push edx */
  push32((uint32_t)(EDX));
  /* 11d4dc84 call 0x11d4dcb0 */
  push32(0x11d4dc89u); f_11d4dcb0();
  /* 11d4dc89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4dc8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4dc8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dc92 push eax */
  push32((uint32_t)(EAX));
  /* 11d4dc93 call 0x11d4eb00 */
  push32(0x11d4dc98u); f_11d4eb00();
  /* 11d4dc98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4dc9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d4dc9e:;
  /* 11d4dc9e mov esp, ebp */
  ESP = (EBP);
  /* 11d4dca0 pop ebp */
  EBP = (pop32());
  /* 11d4dca1 ret  */
  ESPCHK(0x11d4dc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcb0 @ 0x11d4dcb0 (627 bytes, 182 insns) */
void f_11d4dcb0(void) {
  FTRACE(0x11d4dcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4dcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4dcb1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4dcb3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4dcb9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d4dcc0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4dcc3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11d4dcc9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4dccd jne 0x11d4dcd6 */
  if (!C.zf) goto L_11d4dcd6;
  /* 11d4dccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4dcd1 jmp 0x11d4df1f */
  goto L_11d4df1f;
L_11d4dcd6:;
  /* 11d4dcd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dcd9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4dcdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dcdf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4dce2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4dce5 mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4dcec movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d4dcf1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4dcf4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4dcf6 je 0x11d4dd08 */
  if (C.zf) goto L_11d4dd08;
  /* 11d4dcf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4dcfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4dcfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dcff push edx */
  push32((uint32_t)(EDX));
  /* 11d4dd00 call 0x11d4db60 */
  push32(0x11d4dd05u); f_11d4db60();
  /* 11d4dd05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4dd08:;
  /* 11d4dd08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dd0b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4dd0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dd11 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4dd14 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4dd17 mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4dd1e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11d4dd23 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4dd28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4dd2a je 0x11d4de3c */
  if (C.zf) goto L_11d4de3c;
  /* 11d4dd30 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4dd33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d4dd36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11d4dd3d:;
  /* 11d4dd3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dd40 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4dd43 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4dd46 jae 0x11d4de3a */
  if (!C.cf) goto L_11d4de3a;
  /* 11d4dd4c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11d4dd52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d4dd55:;
  /* 11d4dd55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4dd58 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11d4dd5e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4dd60 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4dd66 jge 0x11d4ddc7 */
  if ((C.sf==C.of)) goto L_11d4ddc7;
  /* 11d4dd68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dd6b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4dd6e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4dd71 jae 0x11d4ddc7 */
  if (!C.cf) goto L_11d4ddc7;
  /* 11d4dd73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dd76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d4dd78 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11d4dd7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dd81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4dd84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4dd87 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11d4dd8e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4dd91 jne 0x11d4ddb1 */
  if (!C.zf) goto L_11d4ddb1;
  /* 11d4dd93 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11d4dd99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4dd9c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11d4dda2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4dda5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11d4dda8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ddab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ddae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d4ddb1:;
  /* 11d4ddb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ddb4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11d4ddba mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11d4ddbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ddbf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ddc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d4ddc5 jmp 0x11d4dd55 */
  goto L_11d4dd55;
L_11d4ddc7:;
  /* 11d4ddc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4ddc9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11d4ddcf push edx */
  push32((uint32_t)(EDX));
  /* 11d4ddd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ddd3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11d4ddd9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4dddb push eax */
  push32((uint32_t)(EAX));
  /* 11d4dddc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11d4dde2 push edx */
  push32((uint32_t)(EDX));
  /* 11d4dde3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4dde6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4dde9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ddec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ddef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4ddf2 mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4ddf9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11d4ddfc push eax */
  push32((uint32_t)(EAX));
  /* 11d4ddfd call dword ptr [0x11d743b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b4))), 0x11d4de03u);
  /* 11d4de03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4de05 je 0x11d4de2a */
  if (C.zf) goto L_11d4de2a;
  /* 11d4de07 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4de0a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4de10 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d4de13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4de16 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11d4de1c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4de1e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4de24 jge 0x11d4de28 */
  if ((C.sf==C.of)) goto L_11d4de28;
  /* 11d4de26 jmp 0x11d4de3a */
  goto L_11d4de3a;
L_11d4de28:;
  /* 11d4de28 jmp 0x11d4de35 */
  goto L_11d4de35;
L_11d4de2a:;
  /* 11d4de2a call dword ptr [0x11d743f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f0))), 0x11d4de30u);
  /* 11d4de30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d4de33 jmp 0x11d4de3a */
  goto L_11d4de3a;
L_11d4de35:;
  /* 11d4de35 jmp 0x11d4dd3d */
  goto L_11d4dd3d;
L_11d4de3a:;
  /* 11d4de3a jmp 0x11d4de8c */
  goto L_11d4de8c;
L_11d4de3c:;
  /* 11d4de3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4de3e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11d4de44 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4de45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4de48 push edx */
  push32((uint32_t)(EDX));
  /* 11d4de49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4de4c push eax */
  push32((uint32_t)(EAX));
  /* 11d4de4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4de50 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4de53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4de56 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4de59 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4de5c mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4de63 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11d4de66 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4de67 call dword ptr [0x11d743b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b4))), 0x11d4de6du);
  /* 11d4de6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4de6f je 0x11d4de83 */
  if (C.zf) goto L_11d4de83;
  /* 11d4de71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4de78 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11d4de7e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d4de81 jmp 0x11d4de8c */
  goto L_11d4de8c;
L_11d4de83:;
  /* 11d4de83 call dword ptr [0x11d743f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f0))), 0x11d4de89u);
  /* 11d4de89 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d4de8c:;
  /* 11d4de8c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4de90 jne 0x11d4df16 */
  if (!C.zf) goto L_11d4df16;
  /* 11d4de96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4de9a je 0x11d4deca */
  if (C.zf) goto L_11d4deca;
  /* 11d4de9c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4dea0 jne 0x11d4deb9 */
  if (!C.zf) goto L_11d4deb9;
  /* 11d4dea2 call 0x11d4d250 */
  push32(0x11d4dea7u); f_11d4d250();
  /* 11d4dea7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d4dead call 0x11d4d260 */
  push32(0x11d4deb2u); f_11d4d260();
  /* 11d4deb2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4deb5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d4deb7 jmp 0x11d4dec5 */
  goto L_11d4dec5;
L_11d4deb9:;
  /* 11d4deb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4debc push edx */
  push32((uint32_t)(EDX));
  /* 11d4debd call 0x11d4d1b0 */
  push32(0x11d4dec2u); f_11d4d1b0();
  /* 11d4dec2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4dec5:;
  /* 11d4dec5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4dec8 jmp 0x11d4df1f */
  goto L_11d4df1f;
L_11d4deca:;
  /* 11d4deca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4decd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4ded0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ded3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ded6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4ded9 mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4dee0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11d4dee5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4dee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4deea je 0x11d4defb */
  if (C.zf) goto L_11d4defb;
  /* 11d4deec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4deef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d4def2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4def5 jne 0x11d4defb */
  if (!C.zf) goto L_11d4defb;
  /* 11d4def7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4def9 jmp 0x11d4df1f */
  goto L_11d4df1f;
L_11d4defb:;
  /* 11d4defb call 0x11d4d250 */
  push32(0x11d4df00u); f_11d4d250();
  /* 11d4df00 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11d4df06 call 0x11d4d260 */
  push32(0x11d4df0bu); f_11d4d260();
  /* 11d4df0b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4df11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4df14 jmp 0x11d4df1f */
  goto L_11d4df1f;
L_11d4df16:;
  /* 11d4df16 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4df19 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11d4df1f:;
  /* 11d4df1f mov esp, ebp */
  ESP = (EBP);
  /* 11d4df21 pop ebp */
  EBP = (pop32());
  /* 11d4df22 ret  */
  ESPCHK(0x11d4dcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df30 @ 0x11d4df30 (199 bytes, 68 insns) */
void f_11d4df30(void) {
  FTRACE(0x11d4df30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4df30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4df31 mov ebp, esp */
  EBP = (ESP);
  /* 11d4df33 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4df34 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4df35 push esi */
  push32((uint32_t)(ESI));
  /* 11d4df36 push edi */
  push32((uint32_t)(EDI));
L_11d4df37:;
  /* 11d4df37 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4df3b jne 0x11d4df5b */
  if (!C.zf) goto L_11d4df5b;
  /* 11d4df3d push 0x11d6d1cc */
  push32((uint32_t)(0x11d6d1ccu));
  /* 11d4df42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4df44 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11d4df46 push 0x11d6d298 */
  push32((uint32_t)(0x11d6d298u));
  /* 11d4df4b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4df4d call 0x11d44440 */
  push32(0x11d4df52u); f_11d44440();
  /* 11d4df52 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4df55 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4df58 jne 0x11d4df5b */
  if (!C.zf) goto L_11d4df5b;
  /* 11d4df5a int3  */
  x86_unimpl("int3 @ 0x11d4df5a");
L_11d4df5b:;
  /* 11d4df5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4df5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4df5f jne 0x11d4df37 */
  if (!C.zf) goto L_11d4df37;
  /* 11d4df61 mov ecx, dword ptr [0x11d7186c] */
  ECX = (r32((uint32_t)(0x11d7186c)));
  /* 11d4df67 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4df6a mov dword ptr [0x11d7186c], ecx */
  w32((uint32_t)(0x11d7186c), (ECX));
  /* 11d4df70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4df73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4df76 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11d4df78 push 0x11d6d298 */
  push32((uint32_t)(0x11d6d298u));
  /* 11d4df7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4df7f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d4df84 call 0x11d45380 */
  push32(0x11d4df89u); f_11d45380();
  /* 11d4df89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4df8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4df8f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11d4df92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4df95 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4df99 je 0x11d4dfb6 */
  if (C.zf) goto L_11d4dfb6;
  /* 11d4df9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4df9e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4dfa1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4dfa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dfa7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11d4dfaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dfad mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11d4dfb4 jmp 0x11d4dfdb */
  goto L_11d4dfdb;
L_11d4dfb6:;
  /* 11d4dfb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dfb9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4dfbc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4dfbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dfc2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d4dfc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dfc8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4dfcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dfce mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d4dfd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dfd4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11d4dfdb:;
  /* 11d4dfdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dfde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dfe1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d4dfe4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d4dfe6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4dfe9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11d4dff0 pop edi */
  EDI = (pop32());
  /* 11d4dff1 pop esi */
  ESI = (pop32());
  /* 11d4dff2 pop ebx */
  EBX = (pop32());
  /* 11d4dff3 mov esp, ebp */
  ESP = (EBP);
  /* 11d4dff5 pop ebp */
  EBP = (pop32());
  /* 11d4dff6 ret  */
  ESPCHK(0x11d4df30u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11d4e000 (50 bytes, 17 insns) */
void f_11d4e000(void) {
  FTRACE(0x11d4e000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e000 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e001 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e006 cmp eax, dword ptr [0x11d7315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d7315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e00c jb 0x11d4e012 */
  if (C.cf) goto L_11d4e012;
  /* 11d4e00e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e010 jmp 0x11d4e030 */
  goto L_11d4e030;
L_11d4e012:;
  /* 11d4e012 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e015 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4e018 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e01b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4e01e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4e021 mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4e028 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d4e02d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11d4e030:;
  /* 11d4e030 pop ebp */
  EBP = (pop32());
  /* 11d4e031 ret  */
  ESPCHK(0x11d4e000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e040 @ 0x11d4e040 (300 bytes, 80 insns) */
void f_11d4e040(void) {
  FTRACE(0x11d4e040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e040 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e041 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e043 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e044 cmp dword ptr [0x11d72d20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d72d20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e04b jne 0x11d4e059 */
  if (!C.zf) goto L_11d4e059;
  /* 11d4e04d mov dword ptr [0x11d72d20], 0x200 */
  w32((uint32_t)(0x11d72d20), (0x200u));
  /* 11d4e057 jmp 0x11d4e06c */
  goto L_11d4e06c;
L_11d4e059:;
  /* 11d4e059 cmp dword ptr [0x11d72d20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11d72d20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e060 jge 0x11d4e06c */
  if ((C.sf==C.of)) goto L_11d4e06c;
  /* 11d4e062 mov dword ptr [0x11d72d20], 0x14 */
  w32((uint32_t)(0x11d72d20), (0x14u));
L_11d4e06c:;
  /* 11d4e06c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11d4e071 push 0x11d6d2a4 */
  push32((uint32_t)(0x11d6d2a4u));
  /* 11d4e076 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4e078 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d4e07a mov eax, dword ptr [0x11d72d20] */
  EAX = (r32((uint32_t)(0x11d72d20)));
  /* 11d4e07f push eax */
  push32((uint32_t)(EAX));
  /* 11d4e080 call 0x11d45790 */
  push32(0x11d4e085u); f_11d45790();
  /* 11d4e085 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e088 mov dword ptr [0x11d719e0], eax */
  w32((uint32_t)(0x11d719e0), (EAX));
  /* 11d4e08d cmp dword ptr [0x11d719e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e094 jne 0x11d4e0d5 */
  if (!C.zf) goto L_11d4e0d5;
  /* 11d4e096 mov dword ptr [0x11d72d20], 0x14 */
  w32((uint32_t)(0x11d72d20), (0x14u));
  /* 11d4e0a0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11d4e0a5 push 0x11d6d2a4 */
  push32((uint32_t)(0x11d6d2a4u));
  /* 11d4e0aa push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4e0ac push 4 */
  push32((uint32_t)(0x4u));
  /* 11d4e0ae mov ecx, dword ptr [0x11d72d20] */
  ECX = (r32((uint32_t)(0x11d72d20)));
  /* 11d4e0b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e0b5 call 0x11d45790 */
  push32(0x11d4e0bau); f_11d45790();
  /* 11d4e0ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e0bd mov dword ptr [0x11d719e0], eax */
  w32((uint32_t)(0x11d719e0), (EAX));
  /* 11d4e0c2 cmp dword ptr [0x11d719e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e0c9 jne 0x11d4e0d5 */
  if (!C.zf) goto L_11d4e0d5;
  /* 11d4e0cb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11d4e0cd call 0x11d442f0 */
  push32(0x11d4e0d2u); f_11d442f0();
  /* 11d4e0d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4e0d5:;
  /* 11d4e0d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4e0dc jmp 0x11d4e0e7 */
  goto L_11d4e0e7;
L_11d4e0de:;
  /* 11d4e0de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e0e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e0e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d4e0e7:;
  /* 11d4e0e7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e0eb jge 0x11d4e106 */
  if ((C.sf==C.of)) goto L_11d4e106;
  /* 11d4e0ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e0f0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4e0f3 add eax, 0x11d70120 */
  { uint32_t _a=(EAX),_b=(0x11d70120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e0f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e0fb mov edx, dword ptr [0x11d719e0] */
  EDX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4e101 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11d4e104 jmp 0x11d4e0de */
  goto L_11d4e0de;
L_11d4e106:;
  /* 11d4e106 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4e10d jmp 0x11d4e118 */
  goto L_11d4e118;
L_11d4e10f:;
  /* 11d4e10f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e112 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d4e118:;
  /* 11d4e118 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e11c jge 0x11d4e168 */
  if ((C.sf==C.of)) goto L_11d4e168;
  /* 11d4e11e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e121 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4e124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e127 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4e12a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4e12d mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4e134 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e138 je 0x11d4e156 */
  if (C.zf) goto L_11d4e156;
  /* 11d4e13a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e13d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4e140 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e143 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4e146 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4e149 mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4e150 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e154 jne 0x11d4e166 */
  if (!C.zf) goto L_11d4e166;
L_11d4e156:;
  /* 11d4e156 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e159 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4e15c mov dword ptr [ecx + 0x11d70130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11d70130), (0xffffffffu));
L_11d4e166:;
  /* 11d4e166 jmp 0x11d4e10f */
  goto L_11d4e10f;
L_11d4e168:;
  /* 11d4e168 mov esp, ebp */
  ESP = (EBP);
  /* 11d4e16a pop ebp */
  EBP = (pop32());
  /* 11d4e16b ret  */
  ESPCHK(0x11d4e040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x11d4e170 (26 bytes, 9 insns) */
void f_11d4e170(void) {
  FTRACE(0x11d4e170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e170 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e171 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e173 call 0x11d4ed70 */
  push32(0x11d4e178u); f_11d4ed70();
  /* 11d4e178 movsx eax, byte ptr [0x11d71688] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11d71688))));
  /* 11d4e17f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4e181 je 0x11d4e188 */
  if (C.zf) goto L_11d4e188;
  /* 11d4e183 call 0x11d4eb30 */
  push32(0x11d4e188u); f_11d4eb30();
L_11d4e188:;
  /* 11d4e188 pop ebp */
  EBP = (pop32());
  /* 11d4e189 ret  */
  ESPCHK(0x11d4e170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x11d4e190 (61 bytes, 20 insns) */
void f_11d4e190(void) {
  FTRACE(0x11d4e190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e190 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e191 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e193 cmp dword ptr [ebp + 8], 0x11d70120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11d70120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e19a jb 0x11d4e1be */
  if (C.cf) goto L_11d4e1be;
  /* 11d4e19c cmp dword ptr [ebp + 8], 0x11d70380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11d70380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e1a3 ja 0x11d4e1be */
  if ((!C.cf&&!C.zf)) goto L_11d4e1be;
  /* 11d4e1a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e1a8 sub eax, 0x11d70120 */
  { uint32_t _a=(EAX),_b=(0x11d70120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4e1ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4e1b0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e1b3 push eax */
  push32((uint32_t)(EAX));
  /* 11d4e1b4 call 0x11d48d80 */
  push32(0x11d4e1b9u); f_11d48d80();
  /* 11d4e1b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e1bc jmp 0x11d4e1cb */
  goto L_11d4e1cb;
L_11d4e1be:;
  /* 11d4e1be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e1c1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e1c5 call dword ptr [0x11d74360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74360))), 0x11d4e1cbu);
L_11d4e1cb:;
  /* 11d4e1cb pop ebp */
  EBP = (pop32());
  /* 11d4e1cc ret  */
  ESPCHK(0x11d4e190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1d0 @ 0x11d4e1d0 (41 bytes, 16 insns) */
void f_11d4e1d0(void) {
  FTRACE(0x11d4e1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e1d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e1d3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e1d7 jge 0x11d4e1ea */
  if ((C.sf==C.of)) goto L_11d4e1ea;
  /* 11d4e1d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e1dc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e1df push eax */
  push32((uint32_t)(EAX));
  /* 11d4e1e0 call 0x11d48d80 */
  push32(0x11d4e1e5u); f_11d48d80();
  /* 11d4e1e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e1e8 jmp 0x11d4e1f7 */
  goto L_11d4e1f7;
L_11d4e1ea:;
  /* 11d4e1ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4e1ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e1f1 call dword ptr [0x11d74360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74360))), 0x11d4e1f7u);
L_11d4e1f7:;
  /* 11d4e1f7 pop ebp */
  EBP = (pop32());
  /* 11d4e1f8 ret  */
  ESPCHK(0x11d4e1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e200 @ 0x11d4e200 (61 bytes, 20 insns) */
void f_11d4e200(void) {
  FTRACE(0x11d4e200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e200 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e201 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e203 cmp dword ptr [ebp + 8], 0x11d70120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11d70120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e20a jb 0x11d4e22e */
  if (C.cf) goto L_11d4e22e;
  /* 11d4e20c cmp dword ptr [ebp + 8], 0x11d70380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11d70380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e213 ja 0x11d4e22e */
  if ((!C.cf&&!C.zf)) goto L_11d4e22e;
  /* 11d4e215 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e218 sub eax, 0x11d70120 */
  { uint32_t _a=(EAX),_b=(0x11d70120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4e21d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4e220 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e223 push eax */
  push32((uint32_t)(EAX));
  /* 11d4e224 call 0x11d48e20 */
  push32(0x11d4e229u); f_11d48e20();
  /* 11d4e229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e22c jmp 0x11d4e23b */
  goto L_11d4e23b;
L_11d4e22e:;
  /* 11d4e22e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e231 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e234 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e235 call dword ptr [0x11d7435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7435c))), 0x11d4e23bu);
L_11d4e23b:;
  /* 11d4e23b pop ebp */
  EBP = (pop32());
  /* 11d4e23c ret  */
  ESPCHK(0x11d4e200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e240 @ 0x11d4e240 (41 bytes, 16 insns) */
void f_11d4e240(void) {
  FTRACE(0x11d4e240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e240 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e241 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e243 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e247 jge 0x11d4e25a */
  if ((C.sf==C.of)) goto L_11d4e25a;
  /* 11d4e249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e24c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e24f push eax */
  push32((uint32_t)(EAX));
  /* 11d4e250 call 0x11d48e20 */
  push32(0x11d4e255u); f_11d48e20();
  /* 11d4e255 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e258 jmp 0x11d4e267 */
  goto L_11d4e267;
L_11d4e25a:;
  /* 11d4e25a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4e25d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e260 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e261 call dword ptr [0x11d7435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7435c))), 0x11d4e267u);
L_11d4e267:;
  /* 11d4e267 pop ebp */
  EBP = (pop32());
  /* 11d4e268 ret  */
  ESPCHK(0x11d4e240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e270 @ 0x11d4e270 (119 bytes, 34 insns) */
void f_11d4e270(void) {
  FTRACE(0x11d4e270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e270 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e271 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4e276 push 0x11d719dc */
  push32((uint32_t)(0x11d719dcu));
  /* 11d4e27b call dword ptr [0x11d743c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743c8))), 0x11d4e281u);
  /* 11d4e281 cmp dword ptr [0x11d719cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e288 je 0x11d4e2a8 */
  if (C.zf) goto L_11d4e2a8;
  /* 11d4e28a push 0x11d719dc */
  push32((uint32_t)(0x11d719dcu));
  /* 11d4e28f call dword ptr [0x11d743b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b8))), 0x11d4e295u);
  /* 11d4e295 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d4e297 call 0x11d48d80 */
  push32(0x11d4e29cu); f_11d48d80();
  /* 11d4e29c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e29f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d4e2a6 jmp 0x11d4e2af */
  goto L_11d4e2af;
L_11d4e2a8:;
  /* 11d4e2a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d4e2af:;
  /* 11d4e2af mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11d4e2b3 push eax */
  push32((uint32_t)(EAX));
  /* 11d4e2b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e2b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e2b8 call 0x11d4e2f0 */
  push32(0x11d4e2bdu); f_11d4e2f0();
  /* 11d4e2bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e2c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4e2c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e2c7 je 0x11d4e2d5 */
  if (C.zf) goto L_11d4e2d5;
  /* 11d4e2c9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d4e2cb call 0x11d48e20 */
  push32(0x11d4e2d0u); f_11d48e20();
  /* 11d4e2d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e2d3 jmp 0x11d4e2e0 */
  goto L_11d4e2e0;
L_11d4e2d5:;
  /* 11d4e2d5 push 0x11d719dc */
  push32((uint32_t)(0x11d719dcu));
  /* 11d4e2da call dword ptr [0x11d743b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b8))), 0x11d4e2e0u);
L_11d4e2e0:;
  /* 11d4e2e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4e2e3 mov esp, ebp */
  ESP = (EBP);
  /* 11d4e2e5 pop ebp */
  EBP = (pop32());
  /* 11d4e2e6 ret  */
  ESPCHK(0x11d4e270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2f0 @ 0x11d4e2f0 (160 bytes, 50 insns) */
void f_11d4e2f0(void) {
  FTRACE(0x11d4e2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e2f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e2f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4e2f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e2fa jne 0x11d4e303 */
  if (!C.zf) goto L_11d4e303;
  /* 11d4e2fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e2fe jmp 0x11d4e38c */
  goto L_11d4e38c;
L_11d4e303:;
  /* 11d4e303 cmp dword ptr [0x11d71850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e30a jne 0x11d4e33a */
  if (!C.zf) goto L_11d4e33a;
  /* 11d4e30c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4e30f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e314 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e319 jle 0x11d4e32b */
  if ((C.zf||C.sf!=C.of)) goto L_11d4e32b;
  /* 11d4e31b call 0x11d4d250 */
  push32(0x11d4e320u); f_11d4d250();
  /* 11d4e320 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11d4e326 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e329 jmp 0x11d4e38c */
  goto L_11d4e38c;
L_11d4e32b:;
  /* 11d4e32b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e32e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11d4e331 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11d4e333 mov eax, 1 */
  EAX = (0x1u);
  /* 11d4e338 jmp 0x11d4e38c */
  goto L_11d4e38c;
L_11d4e33a:;
  /* 11d4e33a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d4e341 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d4e344 push eax */
  push32((uint32_t)(EAX));
  /* 11d4e345 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4e347 mov ecx, dword ptr [0x11d6fea4] */
  ECX = (r32((uint32_t)(0x11d6fea4)));
  /* 11d4e34d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e34e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e351 push edx */
  push32((uint32_t)(EDX));
  /* 11d4e352 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4e354 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11d4e357 push eax */
  push32((uint32_t)(EAX));
  /* 11d4e358 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d4e35d mov ecx, dword ptr [0x11d71860] */
  ECX = (r32((uint32_t)(0x11d71860)));
  /* 11d4e363 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e364 call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d4e36au);
  /* 11d4e36a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4e36d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e371 je 0x11d4e379 */
  if (C.zf) goto L_11d4e379;
  /* 11d4e373 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e377 je 0x11d4e389 */
  if (C.zf) goto L_11d4e389;
L_11d4e379:;
  /* 11d4e379 call 0x11d4d250 */
  push32(0x11d4e37eu); f_11d4d250();
  /* 11d4e37e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11d4e384 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e387 jmp 0x11d4e38c */
  goto L_11d4e38c;
L_11d4e389:;
  /* 11d4e389 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d4e38c:;
  /* 11d4e38c mov esp, ebp */
  ESP = (EBP);
  /* 11d4e38e pop ebp */
  EBP = (pop32());
  /* 11d4e38f ret  */
  ESPCHK(0x11d4e2f0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11d4e390 (32 bytes, 18 insns) */
void f_11d4e390(void) {
  FTRACE(0x11d4e390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e390 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e391 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e393 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4e394 push esi */
  push32((uint32_t)(ESI));
  /* 11d4e395 push edi */
  push32((uint32_t)(EDI));
  /* 11d4e396 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e397 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4e399 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4e39b push 0x11d4e3a8 */
  push32((uint32_t)(0x11d4e3a8u));
  /* 11d4e3a0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d4e3a3 call 0x11d55adc */
  push32(0x11d4e3a8u); f_11d55adc();
  /* 11d4e3a8 pop ebp */
  EBP = (pop32());
  /* 11d4e3a9 pop edi */
  EDI = (pop32());
  /* 11d4e3aa pop esi */
  ESI = (pop32());
  /* 11d4e3ab pop ebx */
  EBX = (pop32());
  /* 11d4e3ac mov esp, ebp */
  ESP = (EBP);
  /* 11d4e3ae pop ebp */
  EBP = (pop32());
  /* 11d4e3af ret  */
  ESPCHK(0x11d4e390u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11d4e3d2 (104 bytes, 33 insns) */
void f_11d4e3d2(void) {
  FTRACE(0x11d4e3d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e3d2 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4e3d3 push esi */
  push32((uint32_t)(ESI));
  /* 11d4e3d4 push edi */
  push32((uint32_t)(EDI));
  /* 11d4e3d5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d4e3d9 push eax */
  push32((uint32_t)(EAX));
  /* 11d4e3da push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11d4e3dc push 0x11d4e3b0 */
  push32((uint32_t)(0x11d4e3b0u));
  /* 11d4e3e1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11d4e3e8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11d4e3ef:;
  /* 11d4e3ef mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11d4e3f3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d4e3f6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4e3f9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e3fc je 0x11d4e42c */
  if (C.zf) goto L_11d4e42c;
  /* 11d4e3fe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e402 je 0x11d4e42c */
  if (C.zf) goto L_11d4e42c;
  /* 11d4e404 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11d4e407 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11d4e40a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11d4e40e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11d4e411 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e416 jne 0x11d4e42a */
  if (!C.zf) goto L_11d4e42a;
  /* 11d4e418 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11d4e41d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11d4e421 call 0x11d4e466 */
  push32(0x11d4e426u); f_11d4e466();
  /* 11d4e426 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11d4e42au);
L_11d4e42a:;
  /* 11d4e42a jmp 0x11d4e3ef */
  goto L_11d4e3ef;
L_11d4e42c:;
  /* 11d4e42c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11d4e433 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e436 pop edi */
  EDI = (pop32());
  /* 11d4e437 pop esi */
  ESI = (pop32());
  /* 11d4e438 pop ebx */
  EBX = (pop32());
  /* 11d4e439 ret  */
  ESPCHK(0x11d4e3d2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e466 @ 0x11d4e466 (24 bytes, 10 insns) */
void f_11d4e466(void) {
  FTRACE(0x11d4e466u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e466 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4e467 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e468 mov ebx, 0x11d703b8 */
  EBX = (0x11d703b8u);
  /* 11d4e46d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e470 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11d4e473 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11d4e476 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11d4e479 pop ecx */
  ECX = (pop32());
  /* 11d4e47a pop ebx */
  EBX = (pop32());
  /* 11d4e47b ret 4 */
  ESPCHK(0x11d4e466u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e545 @ 0x11d4e545 (27 bytes, 11 insns) */
void f_11d4e545(void) {
  FTRACE(0x11d4e545u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e545 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e546 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d4e54a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11d4e54c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d4e54f push eax */
  push32((uint32_t)(EAX));
  /* 11d4e550 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d4e553 push eax */
  push32((uint32_t)(EAX));
  /* 11d4e554 call 0x11d4e3d2 */
  push32(0x11d4e559u); f_11d4e3d2();
  /* 11d4e559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e55c pop ebp */
  EBP = (pop32());
  /* 11d4e55d ret 4 */
  ESPCHK(0x11d4e545u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e560 @ 0x11d4e560 (482 bytes, 138 insns) */
void f_11d4e560(void) {
  FTRACE(0x11d4e560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e560 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e561 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e563 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4e566 push esi */
  push32((uint32_t)(ESI));
  /* 11d4e567 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11d4e56e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11d4e570 call 0x11d48d80 */
  push32(0x11d4e575u); f_11d48d80();
  /* 11d4e575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e578 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4e57f jmp 0x11d4e58a */
  goto L_11d4e58a;
L_11d4e581:;
  /* 11d4e581 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4e584 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e587 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d4e58a:;
  /* 11d4e58a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e58e jge 0x11d4e730 */
  if ((C.sf==C.of)) goto L_11d4e730;
  /* 11d4e594 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4e597 cmp dword ptr [ecx*4 + 0x11d73020], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11d73020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e59f je 0x11d4e696 */
  if (C.zf) goto L_11d4e696;
  /* 11d4e5a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4e5a8 mov eax, dword ptr [edx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d73020)));
  /* 11d4e5af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4e5b2 jmp 0x11d4e5bd */
  goto L_11d4e5bd;
L_11d4e5b4:;
  /* 11d4e5b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e5b7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e5ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d4e5bd:;
  /* 11d4e5bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4e5c0 mov eax, dword ptr [edx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d73020)));
  /* 11d4e5c7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e5cc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e5cf jae 0x11d4e686 */
  if (!C.cf) goto L_11d4e686;
  /* 11d4e5d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e5d8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d4e5dc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4e5df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4e5e1 jne 0x11d4e681 */
  if (!C.zf) goto L_11d4e681;
  /* 11d4e5e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e5ea cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e5ee jne 0x11d4e629 */
  if (!C.zf) goto L_11d4e629;
  /* 11d4e5f0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d4e5f2 call 0x11d48d80 */
  push32(0x11d4e5f7u); f_11d48d80();
  /* 11d4e5f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e5fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e5fd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e601 jne 0x11d4e61f */
  if (!C.zf) goto L_11d4e61f;
  /* 11d4e603 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e606 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e609 push edx */
  push32((uint32_t)(EDX));
  /* 11d4e60a call dword ptr [0x11d74364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74364))), 0x11d4e610u);
  /* 11d4e610 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e613 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d4e616 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e61c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11d4e61f:;
  /* 11d4e61f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d4e621 call 0x11d48e20 */
  push32(0x11d4e626u); f_11d48e20();
  /* 11d4e626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4e629:;
  /* 11d4e629 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e62c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e62f push eax */
  push32((uint32_t)(EAX));
  /* 11d4e630 call dword ptr [0x11d74360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74360))), 0x11d4e636u);
  /* 11d4e636 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e639 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d4e63d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4e640 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4e642 je 0x11d4e656 */
  if (C.zf) goto L_11d4e656;
  /* 11d4e644 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e647 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e64a push eax */
  push32((uint32_t)(EAX));
  /* 11d4e64b call dword ptr [0x11d7435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7435c))), 0x11d4e651u);
  /* 11d4e651 jmp 0x11d4e5b4 */
  goto L_11d4e5b4;
L_11d4e656:;
  /* 11d4e656 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e659 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11d4e65f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4e662 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4e665 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4e668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e66b sub eax, dword ptr [edx*4 + 0x11d73020] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11d73020))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4e672 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d4e673 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11d4e678 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d4e67a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e67c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d4e67f jmp 0x11d4e686 */
  goto L_11d4e686;
L_11d4e681:;
  /* 11d4e681 jmp 0x11d4e5b4 */
  goto L_11d4e5b4;
L_11d4e686:;
  /* 11d4e686 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e68a je 0x11d4e691 */
  if (C.zf) goto L_11d4e691;
  /* 11d4e68c jmp 0x11d4e730 */
  goto L_11d4e730;
L_11d4e691:;
  /* 11d4e691 jmp 0x11d4e72b */
  goto L_11d4e72b;
L_11d4e696:;
  /* 11d4e696 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11d4e698 push 0x11d6d2ac */
  push32((uint32_t)(0x11d6d2acu));
  /* 11d4e69d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4e69f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11d4e6a4 call 0x11d45380 */
  push32(0x11d4e6a9u); f_11d45380();
  /* 11d4e6a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e6ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4e6af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e6b3 je 0x11d4e729 */
  if (C.zf) goto L_11d4e729;
  /* 11d4e6b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4e6b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e6bb mov dword ptr [eax*4 + 0x11d73020], ecx */
  w32((uint32_t)(EAX*4 + 0x11d73020), (ECX));
  /* 11d4e6c2 mov edx, dword ptr [0x11d7315c] */
  EDX = (r32((uint32_t)(0x11d7315c)));
  /* 11d4e6c8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e6cb mov dword ptr [0x11d7315c], edx */
  w32((uint32_t)(0x11d7315c), (EDX));
  /* 11d4e6d1 jmp 0x11d4e6dc */
  goto L_11d4e6dc;
L_11d4e6d3:;
  /* 11d4e6d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e6d6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e6d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d4e6dc:;
  /* 11d4e6dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4e6df mov edx, dword ptr [ecx*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4e6e6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e6ec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e6ef jae 0x11d4e714 */
  if (!C.cf) goto L_11d4e714;
  /* 11d4e6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e6f4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11d4e6f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e6fb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11d4e701 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e704 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11d4e708 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4e70b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11d4e712 jmp 0x11d4e6d3 */
  goto L_11d4e6d3;
L_11d4e714:;
  /* 11d4e714 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4e717 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4e71a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d4e71d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4e720 push edx */
  push32((uint32_t)(EDX));
  /* 11d4e721 call 0x11d4ea70 */
  push32(0x11d4e726u); f_11d4ea70();
  /* 11d4e726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4e729:;
  /* 11d4e729 jmp 0x11d4e730 */
  goto L_11d4e730;
L_11d4e72b:;
  /* 11d4e72b jmp 0x11d4e581 */
  goto L_11d4e581;
L_11d4e730:;
  /* 11d4e730 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11d4e732 call 0x11d48e20 */
  push32(0x11d4e737u); f_11d48e20();
  /* 11d4e737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e73a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4e73d pop esi */
  ESI = (pop32());
  /* 11d4e73e mov esp, ebp */
  ESP = (EBP);
  /* 11d4e740 pop ebp */
  EBP = (pop32());
  /* 11d4e741 ret  */
  ESPCHK(0x11d4e560u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11d4e750 (183 bytes, 57 insns) */
void f_11d4e750(void) {
  FTRACE(0x11d4e750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e750 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e751 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e753 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e757 cmp eax, dword ptr [0x11d7315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d7315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e75d jae 0x11d4e7ea */
  if (!C.cf) goto L_11d4e7ea;
  /* 11d4e763 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e766 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4e769 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e76c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4e76f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4e772 mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4e779 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e77d jne 0x11d4e7ea */
  if (!C.zf) goto L_11d4e7ea;
  /* 11d4e77f cmp dword ptr [0x11d71648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e786 jne 0x11d4e7ca */
  if (!C.zf) goto L_11d4e7ca;
  /* 11d4e788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e78b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d4e78e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e792 je 0x11d4e7a2 */
  if (C.zf) goto L_11d4e7a2;
  /* 11d4e794 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e798 je 0x11d4e7b0 */
  if (C.zf) goto L_11d4e7b0;
  /* 11d4e79a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e79e je 0x11d4e7be */
  if (C.zf) goto L_11d4e7be;
  /* 11d4e7a0 jmp 0x11d4e7ca */
  goto L_11d4e7ca;
L_11d4e7a2:;
  /* 11d4e7a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4e7a5 push edx */
  push32((uint32_t)(EDX));
  /* 11d4e7a6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11d4e7a8 call dword ptr [0x11d7431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7431c))), 0x11d4e7aeu);
  /* 11d4e7ae jmp 0x11d4e7ca */
  goto L_11d4e7ca;
L_11d4e7b0:;
  /* 11d4e7b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4e7b3 push eax */
  push32((uint32_t)(EAX));
  /* 11d4e7b4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11d4e7b6 call dword ptr [0x11d7431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7431c))), 0x11d4e7bcu);
  /* 11d4e7bc jmp 0x11d4e7ca */
  goto L_11d4e7ca;
L_11d4e7be:;
  /* 11d4e7be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4e7c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e7c2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11d4e7c4 call dword ptr [0x11d7431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7431c))), 0x11d4e7cau);
L_11d4e7ca:;
  /* 11d4e7ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e7cd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d4e7d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e7d3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e7d6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4e7d9 mov ecx, dword ptr [edx*4 + 0x11d73020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11d73020)));
  /* 11d4e7e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4e7e3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11d4e7e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e7e8 jmp 0x11d4e803 */
  goto L_11d4e803;
L_11d4e7ea:;
  /* 11d4e7ea call 0x11d4d250 */
  push32(0x11d4e7efu); f_11d4d250();
  /* 11d4e7ef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d4e7f5 call 0x11d4d260 */
  push32(0x11d4e7fau); f_11d4d260();
  /* 11d4e7fa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4e800 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d4e803:;
  /* 11d4e803 mov esp, ebp */
  ESP = (EBP);
  /* 11d4e805 pop ebp */
  EBP = (pop32());
  /* 11d4e806 ret  */
  ESPCHK(0x11d4e750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e810 @ 0x11d4e810 (216 bytes, 63 insns) */
void f_11d4e810(void) {
  FTRACE(0x11d4e810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e810 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e811 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e813 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4e814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e817 cmp eax, dword ptr [0x11d7315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d7315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e81d jae 0x11d4e8cb */
  if (!C.cf) goto L_11d4e8cb;
  /* 11d4e823 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e826 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4e829 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e82c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4e82f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4e832 mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4e839 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d4e83e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4e841 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4e843 je 0x11d4e8cb */
  if (C.zf) goto L_11d4e8cb;
  /* 11d4e849 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e84c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d4e84f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e852 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e855 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4e858 mov ecx, dword ptr [edx*4 + 0x11d73020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11d73020)));
  /* 11d4e85f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e863 je 0x11d4e8cb */
  if (C.zf) goto L_11d4e8cb;
  /* 11d4e865 cmp dword ptr [0x11d71648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e86c jne 0x11d4e8aa */
  if (!C.zf) goto L_11d4e8aa;
  /* 11d4e86e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e871 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4e874 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e878 je 0x11d4e888 */
  if (C.zf) goto L_11d4e888;
  /* 11d4e87a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e87e je 0x11d4e894 */
  if (C.zf) goto L_11d4e894;
  /* 11d4e880 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e884 je 0x11d4e8a0 */
  if (C.zf) goto L_11d4e8a0;
  /* 11d4e886 jmp 0x11d4e8aa */
  goto L_11d4e8aa;
L_11d4e888:;
  /* 11d4e888 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4e88a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11d4e88c call dword ptr [0x11d7431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7431c))), 0x11d4e892u);
  /* 11d4e892 jmp 0x11d4e8aa */
  goto L_11d4e8aa;
L_11d4e894:;
  /* 11d4e894 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4e896 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11d4e898 call dword ptr [0x11d7431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7431c))), 0x11d4e89eu);
  /* 11d4e89e jmp 0x11d4e8aa */
  goto L_11d4e8aa;
L_11d4e8a0:;
  /* 11d4e8a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4e8a2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11d4e8a4 call dword ptr [0x11d7431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7431c))), 0x11d4e8aau);
L_11d4e8aa:;
  /* 11d4e8aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e8ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4e8b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e8b3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4e8b6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4e8b9 mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4e8c0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11d4e8c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e8c9 jmp 0x11d4e8e4 */
  goto L_11d4e8e4;
L_11d4e8cb:;
  /* 11d4e8cb call 0x11d4d250 */
  push32(0x11d4e8d0u); f_11d4d250();
  /* 11d4e8d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d4e8d6 call 0x11d4d260 */
  push32(0x11d4e8dbu); f_11d4d260();
  /* 11d4e8db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4e8e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d4e8e4:;
  /* 11d4e8e4 mov esp, ebp */
  ESP = (EBP);
  /* 11d4e8e6 pop ebp */
  EBP = (pop32());
  /* 11d4e8e7 ret  */
  ESPCHK(0x11d4e810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f0 @ 0x11d4e8f0 (102 bytes, 30 insns) */
void f_11d4e8f0(void) {
  FTRACE(0x11d4e8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e8f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e8f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e8f6 cmp eax, dword ptr [0x11d7315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d7315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e8fc jae 0x11d4e93b */
  if (!C.cf) goto L_11d4e93b;
  /* 11d4e8fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e901 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4e904 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e907 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4e90a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4e90d mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4e914 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d4e919 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4e91c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4e91e je 0x11d4e93b */
  if (C.zf) goto L_11d4e93b;
  /* 11d4e920 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e923 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d4e926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e929 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e92c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4e92f mov ecx, dword ptr [edx*4 + 0x11d73020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11d73020)));
  /* 11d4e936 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11d4e939 jmp 0x11d4e954 */
  goto L_11d4e954;
L_11d4e93b:;
  /* 11d4e93b call 0x11d4d250 */
  push32(0x11d4e940u); f_11d4d250();
  /* 11d4e940 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d4e946 call 0x11d4d260 */
  push32(0x11d4e94bu); f_11d4d260();
  /* 11d4e94b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4e951 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d4e954:;
  /* 11d4e954 pop ebp */
  EBP = (pop32());
  /* 11d4e955 ret  */
  ESPCHK(0x11d4e8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e960 @ 0x11d4e960 (260 bytes, 83 insns) */
void f_11d4e960(void) {
  FTRACE(0x11d4e960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4e960 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4e961 mov ebp, esp */
  EBP = (ESP);
  /* 11d4e963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4e966 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4e96a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4e96d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4e972 je 0x11d4e97d */
  if (C.zf) goto L_11d4e97d;
  /* 11d4e974 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d4e977 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11d4e97a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11d4e97d:;
  /* 11d4e97d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4e980 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4e986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4e988 je 0x11d4e992 */
  if (C.zf) goto L_11d4e992;
  /* 11d4e98a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d4e98d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11d4e98f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11d4e992:;
  /* 11d4e992 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4e995 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4e99b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4e99d je 0x11d4e9a8 */
  if (C.zf) goto L_11d4e9a8;
  /* 11d4e99f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d4e9a2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11d4e9a5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11d4e9a8:;
  /* 11d4e9a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4e9ab push eax */
  push32((uint32_t)(EAX));
  /* 11d4e9ac call dword ptr [0x11d743cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743cc))), 0x11d4e9b2u);
  /* 11d4e9b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4e9b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e9b9 jne 0x11d4e9d2 */
  if (!C.zf) goto L_11d4e9d2;
  /* 11d4e9bb call dword ptr [0x11d743f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f0))), 0x11d4e9c1u);
  /* 11d4e9c1 push eax */
  push32((uint32_t)(EAX));
  /* 11d4e9c2 call 0x11d4d1b0 */
  push32(0x11d4e9c7u); f_11d4d1b0();
  /* 11d4e9c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4e9ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4e9cd jmp 0x11d4ea60 */
  goto L_11d4ea60;
L_11d4e9d2:;
  /* 11d4e9d2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e9d6 jne 0x11d4e9e3 */
  if (!C.zf) goto L_11d4e9e3;
  /* 11d4e9d8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d4e9db or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11d4e9de mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11d4e9e1 jmp 0x11d4e9f2 */
  goto L_11d4e9f2;
L_11d4e9e3:;
  /* 11d4e9e3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e9e7 jne 0x11d4e9f2 */
  if (!C.zf) goto L_11d4e9f2;
  /* 11d4e9e9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d4e9ec or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11d4e9ef mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11d4e9f2:;
  /* 11d4e9f2 call 0x11d4e560 */
  push32(0x11d4e9f7u); f_11d4e560();
  /* 11d4e9f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4e9fa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4e9fe jne 0x11d4ea1b */
  if (!C.zf) goto L_11d4ea1b;
  /* 11d4ea00 call 0x11d4d250 */
  push32(0x11d4ea05u); f_11d4d250();
  /* 11d4ea05 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11d4ea0b call 0x11d4d260 */
  push32(0x11d4ea10u); f_11d4d260();
  /* 11d4ea10 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4ea16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4ea19 jmp 0x11d4ea60 */
  goto L_11d4ea60;
L_11d4ea1b:;
  /* 11d4ea1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ea1e push eax */
  push32((uint32_t)(EAX));
  /* 11d4ea1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ea22 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ea23 call 0x11d4e750 */
  push32(0x11d4ea28u); f_11d4e750();
  /* 11d4ea28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ea2b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d4ea2e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11d4ea31 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11d4ea34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ea37 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4ea3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ea3d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ea40 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4ea43 mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4ea4a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d4ea4d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11d4ea51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ea54 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ea55 call 0x11d4eb00 */
  push32(0x11d4ea5au); f_11d4eb00();
  /* 11d4ea5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ea5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d4ea60:;
  /* 11d4ea60 mov esp, ebp */
  ESP = (EBP);
  /* 11d4ea62 pop ebp */
  EBP = (pop32());
  /* 11d4ea63 ret  */
  ESPCHK(0x11d4e960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea70 @ 0x11d4ea70 (134 bytes, 44 insns) */
void f_11d4ea70(void) {
  FTRACE(0x11d4ea70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4ea70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4ea71 mov ebp, esp */
  EBP = (ESP);
  /* 11d4ea73 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ea74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ea77 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4ea7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ea7d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ea80 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4ea83 mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4ea8a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ea8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4ea8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ea92 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ea96 jne 0x11d4ead1 */
  if (!C.zf) goto L_11d4ead1;
  /* 11d4ea98 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d4ea9a call 0x11d48d80 */
  push32(0x11d4ea9fu); f_11d48d80();
  /* 11d4ea9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4eaa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4eaa5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4eaa9 jne 0x11d4eac7 */
  if (!C.zf) goto L_11d4eac7;
  /* 11d4eaab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4eaae add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4eab1 push edx */
  push32((uint32_t)(EDX));
  /* 11d4eab2 call dword ptr [0x11d74364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74364))), 0x11d4eab8u);
  /* 11d4eab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4eabb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d4eabe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4eac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4eac4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11d4eac7:;
  /* 11d4eac7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d4eac9 call 0x11d48e20 */
  push32(0x11d4eaceu); f_11d48e20();
  /* 11d4eace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4ead1:;
  /* 11d4ead1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ead4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4ead7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4eada and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4eadd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4eae0 mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4eae7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11d4eaeb push eax */
  push32((uint32_t)(EAX));
  /* 11d4eaec call dword ptr [0x11d74360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74360))), 0x11d4eaf2u);
  /* 11d4eaf2 mov esp, ebp */
  ESP = (EBP);
  /* 11d4eaf4 pop ebp */
  EBP = (pop32());
  /* 11d4eaf5 ret  */
  ESPCHK(0x11d4ea70u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11d4eb00 (38 bytes, 13 insns) */
void f_11d4eb00(void) {
  FTRACE(0x11d4eb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4eb00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4eb01 mov ebp, esp */
  EBP = (ESP);
  /* 11d4eb03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4eb06 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4eb09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4eb0c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4eb0f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4eb12 mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4eb19 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11d4eb1d push eax */
  push32((uint32_t)(EAX));
  /* 11d4eb1e call dword ptr [0x11d7435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7435c))), 0x11d4eb24u);
  /* 11d4eb24 pop ebp */
  EBP = (pop32());
  /* 11d4eb25 ret  */
  ESPCHK(0x11d4eb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb30 @ 0x11d4eb30 (218 bytes, 63 insns) */
void f_11d4eb30(void) {
  FTRACE(0x11d4eb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4eb30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4eb31 mov ebp, esp */
  EBP = (ESP);
  /* 11d4eb33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4eb36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4eb3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4eb3f call 0x11d48d80 */
  push32(0x11d4eb44u); f_11d48d80();
  /* 11d4eb44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4eb47 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11d4eb4e jmp 0x11d4eb59 */
  goto L_11d4eb59;
L_11d4eb50:;
  /* 11d4eb50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4eb53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4eb56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d4eb59:;
  /* 11d4eb59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4eb5c cmp ecx, dword ptr [0x11d72d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d72d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4eb62 jge 0x11d4ebf9 */
  if ((C.sf==C.of)) goto L_11d4ebf9;
  /* 11d4eb68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4eb6b mov eax, dword ptr [0x11d719e0] */
  EAX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4eb70 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4eb74 je 0x11d4ebf4 */
  if (C.zf) goto L_11d4ebf4;
  /* 11d4eb76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4eb79 mov edx, dword ptr [0x11d719e0] */
  EDX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4eb7f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11d4eb82 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4eb85 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4eb8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4eb8d je 0x11d4ebb1 */
  if (C.zf) goto L_11d4ebb1;
  /* 11d4eb8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4eb92 mov eax, dword ptr [0x11d719e0] */
  EAX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4eb97 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d4eb9a push ecx */
  push32((uint32_t)(ECX));
  /* 11d4eb9b call 0x11d4f920 */
  push32(0x11d4eba0u); f_11d4f920();
  /* 11d4eba0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4eba3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4eba6 je 0x11d4ebb1 */
  if (C.zf) goto L_11d4ebb1;
  /* 11d4eba8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ebab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ebae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d4ebb1:;
  /* 11d4ebb1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ebb5 jl 0x11d4ebf4 */
  if ((C.sf!=C.of)) goto L_11d4ebf4;
  /* 11d4ebb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ebba mov ecx, dword ptr [0x11d719e0] */
  ECX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4ebc0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d4ebc3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ebc6 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ebc7 call dword ptr [0x11d7439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7439c))), 0x11d4ebcdu);
  /* 11d4ebcd push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4ebcf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ebd2 mov ecx, dword ptr [0x11d719e0] */
  ECX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4ebd8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d4ebdb push edx */
  push32((uint32_t)(EDX));
  /* 11d4ebdc call 0x11d45e10 */
  push32(0x11d4ebe1u); f_11d45e10();
  /* 11d4ebe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ebe4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ebe7 mov ecx, dword ptr [0x11d719e0] */
  ECX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4ebed mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11d4ebf4:;
  /* 11d4ebf4 jmp 0x11d4eb50 */
  goto L_11d4eb50;
L_11d4ebf9:;
  /* 11d4ebf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4ebfb call 0x11d48e20 */
  push32(0x11d4ec00u); f_11d48e20();
  /* 11d4ec00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ec03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ec06 mov esp, ebp */
  ESP = (EBP);
  /* 11d4ec08 pop ebp */
  EBP = (pop32());
  /* 11d4ec09 ret  */
  ESPCHK(0x11d4eb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec10 @ 0x11d4ec10 (68 bytes, 26 insns) */
void f_11d4ec10(void) {
  FTRACE(0x11d4ec10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4ec10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4ec11 mov ebp, esp */
  EBP = (ESP);
  /* 11d4ec13 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ec14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ec18 jne 0x11d4ec26 */
  if (!C.zf) goto L_11d4ec26;
  /* 11d4ec1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4ec1c call 0x11d4ed80 */
  push32(0x11d4ec21u); f_11d4ed80();
  /* 11d4ec21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ec24 jmp 0x11d4ec50 */
  goto L_11d4ec50;
L_11d4ec26:;
  /* 11d4ec26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ec29 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ec2a call 0x11d4e190 */
  push32(0x11d4ec2fu); f_11d4e190();
  /* 11d4ec2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ec32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ec35 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ec36 call 0x11d4ec60 */
  push32(0x11d4ec3bu); f_11d4ec60();
  /* 11d4ec3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ec3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4ec41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ec44 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ec45 call 0x11d4e200 */
  push32(0x11d4ec4au); f_11d4e200();
  /* 11d4ec4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ec4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d4ec50:;
  /* 11d4ec50 mov esp, ebp */
  ESP = (EBP);
  /* 11d4ec52 pop ebp */
  EBP = (pop32());
  /* 11d4ec53 ret  */
  ESPCHK(0x11d4ec10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec60 @ 0x11d4ec60 (65 bytes, 26 insns) */
void f_11d4ec60(void) {
  FTRACE(0x11d4ec60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4ec60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4ec61 mov ebp, esp */
  EBP = (ESP);
  /* 11d4ec63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ec66 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ec67 call 0x11d4ecb0 */
  push32(0x11d4ec6cu); f_11d4ecb0();
  /* 11d4ec6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ec6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4ec71 je 0x11d4ec78 */
  if (C.zf) goto L_11d4ec78;
  /* 11d4ec73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4ec76 jmp 0x11d4ec9f */
  goto L_11d4ec9f;
L_11d4ec78:;
  /* 11d4ec78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ec7b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4ec7e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4ec84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4ec86 je 0x11d4ec9d */
  if (C.zf) goto L_11d4ec9d;
  /* 11d4ec88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ec8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d4ec8e push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ec8f call 0x11d4fa70 */
  push32(0x11d4ec94u); f_11d4fa70();
  /* 11d4ec94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ec97 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4ec99 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4ec9b jmp 0x11d4ec9f */
  goto L_11d4ec9f;
L_11d4ec9d:;
  /* 11d4ec9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d4ec9f:;
  /* 11d4ec9f pop ebp */
  EBP = (pop32());
  /* 11d4eca0 ret  */
  ESPCHK(0x11d4ec60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecb0 @ 0x11d4ecb0 (183 bytes, 62 insns) */
void f_11d4ecb0(void) {
  FTRACE(0x11d4ecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4ecb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4ecb1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4ecb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4ecb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4ecbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ecc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4ecc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ecc6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4ecc9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4eccc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4eccf jne 0x11d4ed4b */
  if (!C.zf) goto L_11d4ed4b;
  /* 11d4ecd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ecd4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4ecd7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ecdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4ecdf je 0x11d4ed4b */
  if (C.zf) goto L_11d4ed4b;
  /* 11d4ece1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ece4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ece7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11d4ece9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4ecec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4ecef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ecf3 jle 0x11d4ed4b */
  if ((C.zf||C.sf!=C.of)) goto L_11d4ed4b;
  /* 11d4ecf5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ecf8 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ecf9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ecfc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d4ecff push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ed00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ed03 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d4ed06 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ed07 call 0x11d4dc20 */
  push32(0x11d4ed0cu); f_11d4dc20();
  /* 11d4ed0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ed0f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ed12 jne 0x11d4ed35 */
  if (!C.zf) goto L_11d4ed35;
  /* 11d4ed14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ed17 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4ed1a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4ed20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4ed22 je 0x11d4ed33 */
  if (C.zf) goto L_11d4ed33;
  /* 11d4ed24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ed27 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4ed2a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ed2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ed30 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11d4ed33:;
  /* 11d4ed33 jmp 0x11d4ed4b */
  goto L_11d4ed4b;
L_11d4ed35:;
  /* 11d4ed35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ed38 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4ed3b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ed3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ed41 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11d4ed44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d4ed4b:;
  /* 11d4ed4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ed4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ed51 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d4ed54 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d4ed56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4ed59 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11d4ed60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ed63 mov esp, ebp */
  ESP = (EBP);
  /* 11d4ed65 pop ebp */
  EBP = (pop32());
  /* 11d4ed66 ret  */
  ESPCHK(0x11d4ecb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed70 @ 0x11d4ed70 (15 bytes, 7 insns) */
void f_11d4ed70(void) {
  FTRACE(0x11d4ed70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4ed70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4ed71 mov ebp, esp */
  EBP = (ESP);
  /* 11d4ed73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4ed75 call 0x11d4ed80 */
  push32(0x11d4ed7au); f_11d4ed80();
  /* 11d4ed7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ed7d pop ebp */
  EBP = (pop32());
  /* 11d4ed7e ret  */
  ESPCHK(0x11d4ed70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed80 @ 0x11d4ed80 (319 bytes, 94 insns) */
void f_11d4ed80(void) {
  FTRACE(0x11d4ed80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4ed80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4ed81 mov ebp, esp */
  EBP = (ESP);
  /* 11d4ed83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4ed86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4ed8d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d4ed94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4ed96 call 0x11d48d80 */
  push32(0x11d4ed9bu); f_11d48d80();
  /* 11d4ed9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ed9e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4eda5 jmp 0x11d4edb0 */
  goto L_11d4edb0;
L_11d4eda7:;
  /* 11d4eda7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4edaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4edad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d4edb0:;
  /* 11d4edb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4edb3 cmp ecx, dword ptr [0x11d72d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d72d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4edb9 jge 0x11d4eea3 */
  if ((C.sf==C.of)) goto L_11d4eea3;
  /* 11d4edbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4edc2 mov eax, dword ptr [0x11d719e0] */
  EAX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4edc7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4edcb je 0x11d4ee9e */
  if (C.zf) goto L_11d4ee9e;
  /* 11d4edd1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4edd4 mov edx, dword ptr [0x11d719e0] */
  EDX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4edda mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11d4eddd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d4ede0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ede6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4ede8 je 0x11d4ee9e */
  if (C.zf) goto L_11d4ee9e;
  /* 11d4edee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4edf1 mov eax, dword ptr [0x11d719e0] */
  EAX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4edf6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d4edf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4edfa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4edfd push edx */
  push32((uint32_t)(EDX));
  /* 11d4edfe call 0x11d4e1d0 */
  push32(0x11d4ee03u); f_11d4e1d0();
  /* 11d4ee03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ee06 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ee09 mov ecx, dword ptr [0x11d719e0] */
  ECX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4ee0f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d4ee12 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d4ee15 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4ee1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4ee1c je 0x11d4ee85 */
  if (C.zf) goto L_11d4ee85;
  /* 11d4ee1e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ee22 jne 0x11d4ee49 */
  if (!C.zf) goto L_11d4ee49;
  /* 11d4ee24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ee27 mov edx, dword ptr [0x11d719e0] */
  EDX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4ee2d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11d4ee30 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ee31 call 0x11d4ec60 */
  push32(0x11d4ee36u); f_11d4ec60();
  /* 11d4ee36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ee39 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ee3c je 0x11d4ee47 */
  if (C.zf) goto L_11d4ee47;
  /* 11d4ee3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ee41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ee44 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d4ee47:;
  /* 11d4ee47 jmp 0x11d4ee85 */
  goto L_11d4ee85;
L_11d4ee49:;
  /* 11d4ee49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ee4d jne 0x11d4ee85 */
  if (!C.zf) goto L_11d4ee85;
  /* 11d4ee4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ee52 mov eax, dword ptr [0x11d719e0] */
  EAX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4ee57 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d4ee5a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4ee5d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4ee60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4ee62 je 0x11d4ee85 */
  if (C.zf) goto L_11d4ee85;
  /* 11d4ee64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ee67 mov ecx, dword ptr [0x11d719e0] */
  ECX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4ee6d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d4ee70 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ee71 call 0x11d4ec60 */
  push32(0x11d4ee76u); f_11d4ec60();
  /* 11d4ee76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ee79 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ee7c jne 0x11d4ee85 */
  if (!C.zf) goto L_11d4ee85;
  /* 11d4ee7e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11d4ee85:;
  /* 11d4ee85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ee88 mov ecx, dword ptr [0x11d719e0] */
  ECX = (r32((uint32_t)(0x11d719e0)));
  /* 11d4ee8e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d4ee91 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ee92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ee95 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ee96 call 0x11d4e240 */
  push32(0x11d4ee9bu); f_11d4e240();
  /* 11d4ee9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4ee9e:;
  /* 11d4ee9e jmp 0x11d4eda7 */
  goto L_11d4eda7;
L_11d4eea3:;
  /* 11d4eea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4eea5 call 0x11d48e20 */
  push32(0x11d4eeaau); f_11d48e20();
  /* 11d4eeaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4eead cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4eeb1 jne 0x11d4eeb8 */
  if (!C.zf) goto L_11d4eeb8;
  /* 11d4eeb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4eeb6 jmp 0x11d4eebb */
  goto L_11d4eebb;
L_11d4eeb8:;
  /* 11d4eeb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d4eebb:;
  /* 11d4eebb mov esp, ebp */
  ESP = (EBP);
  /* 11d4eebd pop ebp */
  EBP = (pop32());
  /* 11d4eebe ret  */
  ESPCHK(0x11d4ed80u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11d4eec0 (15 bytes, 7 insns) */
void f_11d4eec0(void) {
  FTRACE(0x11d4eec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4eec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4eec1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4eec3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4eec5 call 0x11d442f0 */
  push32(0x11d4eecau); f_11d442f0();
  /* 11d4eeca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4eecd pop ebp */
  EBP = (pop32());
  /* 11d4eece ret  */
  ESPCHK(0x11d4eec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eed0 @ 0x11d4eed0 (1007 bytes, 269 insns) */
void f_11d4eed0(void) {
  FTRACE(0x11d4eed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4eed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4eed1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4eed3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4eed9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4eedd jl 0x11d4eee5 */
  if ((C.sf!=C.of)) goto L_11d4eee5;
  /* 11d4eedf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4eee3 jle 0x11d4eeec */
  if ((C.zf||C.sf!=C.of)) goto L_11d4eeec;
L_11d4eee5:;
  /* 11d4eee5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4eee7 jmp 0x11d4f2bb */
  goto L_11d4f2bb;
L_11d4eeec:;
  /* 11d4eeec push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d4eeee call 0x11d48d80 */
  push32(0x11d4eef3u); f_11d48d80();
  /* 11d4eef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4eef6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d4eefd mov eax, dword ptr [0x11d719cc] */
  EAX = (r32((uint32_t)(0x11d719cc)));
  /* 11d4ef02 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ef05 mov dword ptr [0x11d719cc], eax */
  w32((uint32_t)(0x11d719cc), (EAX));
L_11d4ef0a:;
  /* 11d4ef0a cmp dword ptr [0x11d719dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ef11 je 0x11d4ef1d */
  if (C.zf) goto L_11d4ef1d;
  /* 11d4ef13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4ef15 call dword ptr [0x11d74318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74318))), 0x11d4ef1bu);
  /* 11d4ef1b jmp 0x11d4ef0a */
  goto L_11d4ef0a;
L_11d4ef1d:;
  /* 11d4ef1d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ef21 je 0x11d4ef61 */
  if (C.zf) goto L_11d4ef61;
  /* 11d4ef23 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ef27 je 0x11d4ef41 */
  if (C.zf) goto L_11d4ef41;
  /* 11d4ef29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4ef2c push ecx */
  push32((uint32_t)(ECX));
  /* 11d4ef2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ef30 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ef31 call 0x11d4f2c0 */
  push32(0x11d4ef36u); f_11d4f2c0();
  /* 11d4ef36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ef39 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11d4ef3f jmp 0x11d4ef53 */
  goto L_11d4ef53;
L_11d4ef41:;
  /* 11d4ef41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ef44 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4ef47 mov ecx, dword ptr [eax + 0x11d704dc] */
  ECX = (r32((uint32_t)(EAX + 0x11d704dc)));
  /* 11d4ef4d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11d4ef53:;
  /* 11d4ef53 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11d4ef59 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d4ef5c jmp 0x11d4f29b */
  goto L_11d4f29b;
L_11d4ef61:;
  /* 11d4ef61 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11d4ef68 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4ef6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ef73 je 0x11d4f293 */
  if (C.zf) goto L_11d4f293;
  /* 11d4ef79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4ef7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4ef7f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ef82 jne 0x11d4f1a4 */
  if (!C.zf) goto L_11d4f1a4;
  /* 11d4ef88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4ef8b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d4ef8f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4ef92 jne 0x11d4f1a4 */
  if (!C.zf) goto L_11d4f1a4;
  /* 11d4ef98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4ef9b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11d4ef9f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4efa2 jne 0x11d4f1a4 */
  if (!C.zf) goto L_11d4f1a4;
  /* 11d4efa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4efab mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11d4efb1:;
  /* 11d4efb1 push 0x11d6d2fc */
  push32((uint32_t)(0x11d6d2fcu));
  /* 11d4efb6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d4efbc push ecx */
  push32((uint32_t)(ECX));
  /* 11d4efbd call 0x11d51120 */
  push32(0x11d4efc2u); f_11d51120();
  /* 11d4efc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4efc5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11d4efcb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4efd2 je 0x11d4effd */
  if (C.zf) goto L_11d4effd;
  /* 11d4efd4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d4efda sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4efe0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11d4efe6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4efed je 0x11d4effd */
  if (C.zf) goto L_11d4effd;
  /* 11d4efef mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d4eff5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4eff8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4effb jne 0x11d4f023 */
  if (!C.zf) goto L_11d4f023;
L_11d4effd:;
  /* 11d4effd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f001 je 0x11d4f01c */
  if (C.zf) goto L_11d4f01c;
  /* 11d4f003 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d4f005 call 0x11d48e20 */
  push32(0x11d4f00au); f_11d48e20();
  /* 11d4f00a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f00d mov edx, dword ptr [0x11d719cc] */
  EDX = (r32((uint32_t)(0x11d719cc)));
  /* 11d4f013 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4f016 mov dword ptr [0x11d719cc], edx */
  w32((uint32_t)(0x11d719cc), (EDX));
L_11d4f01c:;
  /* 11d4f01c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f01e jmp 0x11d4f2bb */
  goto L_11d4f2bb;
L_11d4f023:;
  /* 11d4f023 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11d4f02a jmp 0x11d4f035 */
  goto L_11d4f035;
L_11d4f02c:;
  /* 11d4f02c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4f02f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f032 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11d4f035:;
  /* 11d4f035 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f039 jg 0x11d4f083 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d4f083;
  /* 11d4f03b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11d4f041 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f042 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d4f048 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f049 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4f04c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f04f mov ecx, dword ptr [eax + 0x11d704d8] */
  ECX = (r32((uint32_t)(EAX + 0x11d704d8)));
  /* 11d4f055 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f056 call 0x11d510e0 */
  push32(0x11d4f05bu); f_11d510e0();
  /* 11d4f05b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f05e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f060 jne 0x11d4f081 */
  if (!C.zf) goto L_11d4f081;
  /* 11d4f062 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4f065 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f068 mov eax, dword ptr [edx + 0x11d704d8] */
  EAX = (r32((uint32_t)(EDX + 0x11d704d8)));
  /* 11d4f06e push eax */
  push32((uint32_t)(EAX));
  /* 11d4f06f call 0x11d481b0 */
  push32(0x11d4f074u); f_11d481b0();
  /* 11d4f074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f077 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f07d jne 0x11d4f081 */
  if (!C.zf) goto L_11d4f081;
  /* 11d4f07f jmp 0x11d4f083 */
  goto L_11d4f083;
L_11d4f081:;
  /* 11d4f081 jmp 0x11d4f02c */
  goto L_11d4f02c;
L_11d4f083:;
  /* 11d4f083 push 0x11d6d2f8 */
  push32((uint32_t)(0x11d6d2f8u));
  /* 11d4f088 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d4f08e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f091 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11d4f097 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d4f09d push edx */
  push32((uint32_t)(EDX));
  /* 11d4f09e call 0x11d510a0 */
  push32(0x11d4f0a3u); f_11d510a0();
  /* 11d4f0a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f0a6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11d4f0ac cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f0b3 jne 0x11d4f0e9 */
  if (!C.zf) goto L_11d4f0e9;
  /* 11d4f0b5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d4f0bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4f0be cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f0c1 je 0x11d4f0e9 */
  if (C.zf) goto L_11d4f0e9;
  /* 11d4f0c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f0c7 je 0x11d4f0e2 */
  if (C.zf) goto L_11d4f0e2;
  /* 11d4f0c9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d4f0cb call 0x11d48e20 */
  push32(0x11d4f0d0u); f_11d48e20();
  /* 11d4f0d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f0d3 mov edx, dword ptr [0x11d719cc] */
  EDX = (r32((uint32_t)(0x11d719cc)));
  /* 11d4f0d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4f0dc mov dword ptr [0x11d719cc], edx */
  w32((uint32_t)(0x11d719cc), (EDX));
L_11d4f0e2:;
  /* 11d4f0e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f0e4 jmp 0x11d4f2bb */
  goto L_11d4f2bb;
L_11d4f0e9:;
  /* 11d4f0e9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f0ed jg 0x11d4f13a */
  if ((!C.zf&&C.sf==C.of)) goto L_11d4f13a;
  /* 11d4f0ef mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11d4f0f5 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f0f6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d4f0fc push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f0fd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11d4f103 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f104 call 0x11d48ba0 */
  push32(0x11d4f109u); f_11d48ba0();
  /* 11d4f109 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f10c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11d4f112 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11d4f11a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11d4f120 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f121 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4f124 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f125 call 0x11d4f2c0 */
  push32(0x11d4f12au); f_11d4f2c0();
  /* 11d4f12a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f12d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f12f je 0x11d4f13a */
  if (C.zf) goto L_11d4f13a;
  /* 11d4f131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4f134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f137 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d4f13a:;
  /* 11d4f13a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d4f140 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f146 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11d4f14c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d4f152 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d4f155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f157 je 0x11d4f168 */
  if (C.zf) goto L_11d4f168;
  /* 11d4f159 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d4f15f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f162 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11d4f168:;
  /* 11d4f168 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d4f16e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d4f171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f173 jne 0x11d4efb1 */
  if (!C.zf) goto L_11d4efb1;
  /* 11d4f179 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f17d je 0x11d4f18c */
  if (C.zf) goto L_11d4f18c;
  /* 11d4f17f call 0x11d4f460 */
  push32(0x11d4f184u); f_11d4f460();
  /* 11d4f184 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11d4f18a jmp 0x11d4f196 */
  goto L_11d4f196;
L_11d4f18c:;
  /* 11d4f18c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11d4f196:;
  /* 11d4f196 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11d4f19c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d4f19f jmp 0x11d4f291 */
  goto L_11d4f291;
L_11d4f1a4:;
  /* 11d4f1a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f1a7 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f1a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4f1aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4f1ac lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11d4f1b2 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f1b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f1b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f1b7 call 0x11d4f560 */
  push32(0x11d4f1bcu); f_11d4f560();
  /* 11d4f1bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f1bf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4f1c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f1c6 je 0x11d4f291 */
  if (C.zf) goto L_11d4f291;
  /* 11d4f1cc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d4f1d3 jmp 0x11d4f1de */
  goto L_11d4f1de;
L_11d4f1d5:;
  /* 11d4f1d5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4f1d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f1db mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d4f1de:;
  /* 11d4f1de cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f1e2 jg 0x11d4f240 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d4f240;
  /* 11d4f1e4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f1e8 je 0x11d4f23e */
  if (C.zf) goto L_11d4f23e;
  /* 11d4f1ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4f1ed imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f1f0 mov ecx, dword ptr [eax + 0x11d704dc] */
  ECX = (r32((uint32_t)(EAX + 0x11d704dc)));
  /* 11d4f1f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f1f7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11d4f1fd push edx */
  push32((uint32_t)(EDX));
  /* 11d4f1fe call 0x11d51010 */
  push32(0x11d4f203u); f_11d51010();
  /* 11d4f203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f208 je 0x11d4f235 */
  if (C.zf) goto L_11d4f235;
  /* 11d4f20a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11d4f210 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f211 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4f214 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f215 call 0x11d4f2c0 */
  push32(0x11d4f21au); f_11d4f2c0();
  /* 11d4f21a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f21d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f21f je 0x11d4f22c */
  if (C.zf) goto L_11d4f22c;
  /* 11d4f221 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4f224 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f227 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d4f22a jmp 0x11d4f233 */
  goto L_11d4f233;
L_11d4f22c:;
  /* 11d4f22c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11d4f233:;
  /* 11d4f233 jmp 0x11d4f23e */
  goto L_11d4f23e;
L_11d4f235:;
  /* 11d4f235 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4f238 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f23b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d4f23e:;
  /* 11d4f23e jmp 0x11d4f1d5 */
  goto L_11d4f1d5;
L_11d4f240:;
  /* 11d4f240 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f244 je 0x11d4f26b */
  if (C.zf) goto L_11d4f26b;
  /* 11d4f246 call 0x11d4f460 */
  push32(0x11d4f24bu); f_11d4f460();
  /* 11d4f24b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4f24e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4f250 mov ecx, dword ptr [0x11d704dc] */
  ECX = (r32((uint32_t)(0x11d704dc)));
  /* 11d4f256 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f257 call 0x11d45e10 */
  push32(0x11d4f25cu); f_11d45e10();
  /* 11d4f25c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f25f mov dword ptr [0x11d704dc], 0 */
  w32((uint32_t)(0x11d704dc), (0x0u));
  /* 11d4f269 jmp 0x11d4f291 */
  goto L_11d4f291;
L_11d4f26b:;
  /* 11d4f26b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f26f je 0x11d4f27e */
  if (C.zf) goto L_11d4f27e;
  /* 11d4f271 call 0x11d4f460 */
  push32(0x11d4f276u); f_11d4f460();
  /* 11d4f276 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11d4f27c jmp 0x11d4f288 */
  goto L_11d4f288;
L_11d4f27e:;
  /* 11d4f27e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11d4f288:;
  /* 11d4f288 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11d4f28e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d4f291:;
  /* 11d4f291 jmp 0x11d4f29b */
  goto L_11d4f29b;
L_11d4f293:;
  /* 11d4f293 call 0x11d4f460 */
  push32(0x11d4f298u); f_11d4f460();
  /* 11d4f298 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d4f29b:;
  /* 11d4f29b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f29f je 0x11d4f2b8 */
  if (C.zf) goto L_11d4f2b8;
  /* 11d4f2a1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d4f2a3 call 0x11d48e20 */
  push32(0x11d4f2a8u); f_11d48e20();
  /* 11d4f2a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f2ab mov eax, dword ptr [0x11d719cc] */
  EAX = (r32((uint32_t)(0x11d719cc)));
  /* 11d4f2b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4f2b3 mov dword ptr [0x11d719cc], eax */
  w32((uint32_t)(0x11d719cc), (EAX));
L_11d4f2b8:;
  /* 11d4f2b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d4f2bb:;
  /* 11d4f2bb mov esp, ebp */
  ESP = (EBP);
  /* 11d4f2bd pop ebp */
  EBP = (pop32());
  /* 11d4f2be ret  */
  ESPCHK(0x11d4eed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2c0 @ 0x11d4f2c0 (403 bytes, 117 insns) */
void f_11d4f2c0(void) {
  FTRACE(0x11d4f2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4f2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4f2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4f2c3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4f2c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f2cc push eax */
  push32((uint32_t)(EAX));
  /* 11d4f2cd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11d4f2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f2d4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11d4f2da push edx */
  push32((uint32_t)(EDX));
  /* 11d4f2db lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11d4f2e1 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f2e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f2e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f2e6 call 0x11d4f560 */
  push32(0x11d4f2ebu); f_11d4f560();
  /* 11d4f2eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f2ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f2f0 jne 0x11d4f2f9 */
  if (!C.zf) goto L_11d4f2f9;
  /* 11d4f2f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f2f4 jmp 0x11d4f44f */
  goto L_11d4f44f;
L_11d4f2f9:;
  /* 11d4f2f9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11d4f2fe push 0x11d6d300 */
  push32((uint32_t)(0x11d6d300u));
  /* 11d4f303 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4f305 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11d4f30b push edx */
  push32((uint32_t)(EDX));
  /* 11d4f30c call 0x11d481b0 */
  push32(0x11d4f311u); f_11d481b0();
  /* 11d4f311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f314 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f317 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f318 call 0x11d45380 */
  push32(0x11d4f31du); f_11d45380();
  /* 11d4f31d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f320 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4f323 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f327 jne 0x11d4f330 */
  if (!C.zf) goto L_11d4f330;
  /* 11d4f329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f32b jmp 0x11d4f44f */
  goto L_11d4f44f;
L_11d4f330:;
  /* 11d4f330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f333 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f336 mov ecx, dword ptr [eax + 0x11d704dc] */
  ECX = (r32((uint32_t)(EAX + 0x11d704dc)));
  /* 11d4f33c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4f33f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f342 mov eax, dword ptr [edx*4 + 0x11d71848] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d71848)));
  /* 11d4f349 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4f34c push 6 */
  push32((uint32_t)(0x6u));
  /* 11d4f34e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f351 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f354 add ecx, 0x11d71898 */
  { uint32_t _a=(ECX),_b=(0x11d71898u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f35a push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f35b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11d4f35e push edx */
  push32((uint32_t)(EDX));
  /* 11d4f35f call 0x11d4bc60 */
  push32(0x11d4f364u); f_11d4bc60();
  /* 11d4f364 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f367 mov eax, dword ptr [0x11d71860] */
  EAX = (r32((uint32_t)(0x11d71860)));
  /* 11d4f36c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d4f36f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11d4f375 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f376 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4f379 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f37a call 0x11d48330 */
  push32(0x11d4f37fu); f_11d48330();
  /* 11d4f37f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f382 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f385 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f388 mov dword ptr [ecx + 0x11d704dc], eax */
  w32((uint32_t)(ECX + 0x11d704dc), (EAX));
  /* 11d4f38e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11d4f394 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4f39a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f39d mov dword ptr [eax*4 + 0x11d71848], edx */
  w32((uint32_t)(EAX*4 + 0x11d71848), (EDX));
  /* 11d4f3a4 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d4f3a6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11d4f3ac push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f3ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f3b0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f3b3 add edx, 0x11d71898 */
  { uint32_t _a=(EDX),_b=(0x11d71898u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f3b9 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f3ba call 0x11d4bc60 */
  push32(0x11d4f3bfu); f_11d4bc60();
  /* 11d4f3bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f3c2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f3c6 jne 0x11d4f3d3 */
  if (!C.zf) goto L_11d4f3d3;
  /* 11d4f3c8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d4f3ce mov dword ptr [0x11d71860], eax */
  w32((uint32_t)(0x11d71860), (EAX));
L_11d4f3d3:;
  /* 11d4f3d3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f3d7 jne 0x11d4f3e5 */
  if (!C.zf) goto L_11d4f3e5;
  /* 11d4f3d9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d4f3df mov dword ptr [0x11d71864], ecx */
  w32((uint32_t)(0x11d71864), (ECX));
L_11d4f3e5:;
  /* 11d4f3e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f3e8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f3eb call dword ptr [edx + 0x11d704e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11d704e0))), 0x11d4f3f1u);
  /* 11d4f3f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f3f3 je 0x11d4f42c */
  if (C.zf) goto L_11d4f42c;
  /* 11d4f3f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f3f8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f3fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4f3fe mov dword ptr [eax + 0x11d704dc], ecx */
  w32((uint32_t)(EAX + 0x11d704dc), (ECX));
  /* 11d4f404 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4f406 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4f409 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f40a call 0x11d45e10 */
  push32(0x11d4f40fu); f_11d45e10();
  /* 11d4f40f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f412 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f415 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4f418 mov dword ptr [eax*4 + 0x11d71848], ecx */
  w32((uint32_t)(EAX*4 + 0x11d71848), (ECX));
  /* 11d4f41f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4f422 mov dword ptr [0x11d71860], edx */
  w32((uint32_t)(0x11d71860), (EDX));
  /* 11d4f428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f42a jmp 0x11d4f44f */
  goto L_11d4f44f;
L_11d4f42c:;
  /* 11d4f42c cmp dword ptr [ebp - 0xc], 0x11d703c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11d703c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f433 je 0x11d4f443 */
  if (C.zf) goto L_11d4f443;
  /* 11d4f435 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4f437 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4f43a push eax */
  push32((uint32_t)(EAX));
  /* 11d4f43b call 0x11d45e10 */
  push32(0x11d4f440u); f_11d45e10();
  /* 11d4f440 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4f443:;
  /* 11d4f443 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f446 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f449 mov eax, dword ptr [ecx + 0x11d704dc] */
  EAX = (r32((uint32_t)(ECX + 0x11d704dc)));
L_11d4f44f:;
  /* 11d4f44f mov esp, ebp */
  ESP = (EBP);
  /* 11d4f451 pop ebp */
  EBP = (pop32());
  /* 11d4f452 ret  */
  ESPCHK(0x11d4f2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f460 @ 0x11d4f460 (256 bytes, 72 insns) */
void f_11d4f460(void) {
  FTRACE(0x11d4f460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4f460 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4f461 mov ebp, esp */
  EBP = (ESP);
  /* 11d4f463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4f466 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d4f46d cmp dword ptr [0x11d704dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d704dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f474 jne 0x11d4f494 */
  if (!C.zf) goto L_11d4f494;
  /* 11d4f476 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11d4f47b push 0x11d6d300 */
  push32((uint32_t)(0x11d6d300u));
  /* 11d4f480 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4f482 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11d4f487 call 0x11d45380 */
  push32(0x11d4f48cu); f_11d45380();
  /* 11d4f48c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f48f mov dword ptr [0x11d704dc], eax */
  w32((uint32_t)(0x11d704dc), (EAX));
L_11d4f494:;
  /* 11d4f494 mov eax, dword ptr [0x11d704dc] */
  EAX = (r32((uint32_t)(0x11d704dc)));
  /* 11d4f499 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d4f49c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d4f4a3 jmp 0x11d4f4ae */
  goto L_11d4f4ae;
L_11d4f4a5:;
  /* 11d4f4a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4f4a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f4ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d4f4ae:;
  /* 11d4f4ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4f4b1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f4b4 mov eax, dword ptr [edx + 0x11d704dc] */
  EAX = (r32((uint32_t)(EDX + 0x11d704dc)));
  /* 11d4f4ba push eax */
  push32((uint32_t)(EAX));
  /* 11d4f4bb push 0x11d6d30c */
  push32((uint32_t)(0x11d6d30cu));
  /* 11d4f4c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4f4c3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f4c6 mov edx, dword ptr [ecx + 0x11d704d8] */
  EDX = (r32((uint32_t)(ECX + 0x11d704d8)));
  /* 11d4f4cc push edx */
  push32((uint32_t)(EDX));
  /* 11d4f4cd push 3 */
  push32((uint32_t)(0x3u));
  /* 11d4f4cf mov eax, dword ptr [0x11d704dc] */
  EAX = (r32((uint32_t)(0x11d704dc)));
  /* 11d4f4d4 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f4d5 call 0x11d4f700 */
  push32(0x11d4f4dau); f_11d4f700();
  /* 11d4f4da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f4dd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f4e1 jge 0x11d4f529 */
  if ((C.sf==C.of)) goto L_11d4f529;
  /* 11d4f4e3 push 0x11d6d2f8 */
  push32((uint32_t)(0x11d6d2f8u));
  /* 11d4f4e8 mov ecx, dword ptr [0x11d704dc] */
  ECX = (r32((uint32_t)(0x11d704dc)));
  /* 11d4f4ee push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f4ef call 0x11d48340 */
  push32(0x11d4f4f4u); f_11d48340();
  /* 11d4f4f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f4f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4f4fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f4fd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f500 mov eax, dword ptr [edx + 0x11d704dc] */
  EAX = (r32((uint32_t)(EDX + 0x11d704dc)));
  /* 11d4f506 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4f50a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4f50d mov edx, dword ptr [ecx + 0x11d704dc] */
  EDX = (r32((uint32_t)(ECX + 0x11d704dc)));
  /* 11d4f513 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f514 call 0x11d51010 */
  push32(0x11d4f519u); f_11d51010();
  /* 11d4f519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f51c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f51e je 0x11d4f527 */
  if (C.zf) goto L_11d4f527;
  /* 11d4f520 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d4f527:;
  /* 11d4f527 jmp 0x11d4f557 */
  goto L_11d4f557;
L_11d4f529:;
  /* 11d4f529 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f52d jne 0x11d4f536 */
  if (!C.zf) goto L_11d4f536;
  /* 11d4f52f mov eax, dword ptr [0x11d704dc] */
  EAX = (r32((uint32_t)(0x11d704dc)));
  /* 11d4f534 jmp 0x11d4f55c */
  goto L_11d4f55c;
L_11d4f536:;
  /* 11d4f536 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4f538 mov eax, dword ptr [0x11d704dc] */
  EAX = (r32((uint32_t)(0x11d704dc)));
  /* 11d4f53d push eax */
  push32((uint32_t)(EAX));
  /* 11d4f53e call 0x11d45e10 */
  push32(0x11d4f543u); f_11d45e10();
  /* 11d4f543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f546 mov dword ptr [0x11d704dc], 0 */
  w32((uint32_t)(0x11d704dc), (0x0u));
  /* 11d4f550 mov eax, dword ptr [0x11d704f4] */
  EAX = (r32((uint32_t)(0x11d704f4)));
  /* 11d4f555 jmp 0x11d4f55c */
  goto L_11d4f55c;
L_11d4f557:;
  /* 11d4f557 jmp 0x11d4f4a5 */
  goto L_11d4f4a5;
L_11d4f55c:;
  /* 11d4f55c mov esp, ebp */
  ESP = (EBP);
  /* 11d4f55e pop ebp */
  EBP = (pop32());
  /* 11d4f55f ret  */
  ESPCHK(0x11d4f460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f560 @ 0x11d4f560 (388 bytes, 115 insns) */
void f_11d4f560(void) {
  FTRACE(0x11d4f560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4f560 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4f561 mov ebp, esp */
  EBP = (ESP);
  /* 11d4f563 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4f569 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f56d jne 0x11d4f576 */
  if (!C.zf) goto L_11d4f576;
  /* 11d4f56f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f571 jmp 0x11d4f6e0 */
  goto L_11d4f6e0;
L_11d4f576:;
  /* 11d4f576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f579 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4f57c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f57f jne 0x11d4f5d0 */
  if (!C.zf) goto L_11d4f5d0;
  /* 11d4f581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f584 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d4f588 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f58a jne 0x11d4f5d0 */
  if (!C.zf) goto L_11d4f5d0;
  /* 11d4f58c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f58f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11d4f592 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f595 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11d4f599 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f59d je 0x11d4f5b9 */
  if (C.zf) goto L_11d4f5b9;
  /* 11d4f59f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4f5a2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11d4f5a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4f5aa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11d4f5b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4f5b3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11d4f5b9:;
  /* 11d4f5b9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f5bd je 0x11d4f5c8 */
  if (C.zf) goto L_11d4f5c8;
  /* 11d4f5bf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4f5c2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11d4f5c8:;
  /* 11d4f5c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f5cb jmp 0x11d4f6e0 */
  goto L_11d4f6e0;
L_11d4f5d0:;
  /* 11d4f5d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f5d4 push 0x11d70450 */
  push32((uint32_t)(0x11d70450u));
  /* 11d4f5d9 call 0x11d51010 */
  push32(0x11d4f5deu); f_11d51010();
  /* 11d4f5de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f5e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f5e3 je 0x11d4f698 */
  if (C.zf) goto L_11d4f698;
  /* 11d4f5e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f5ec push edx */
  push32((uint32_t)(EDX));
  /* 11d4f5ed push 0x11d703cc */
  push32((uint32_t)(0x11d703ccu));
  /* 11d4f5f2 call 0x11d51010 */
  push32(0x11d4f5f7u); f_11d51010();
  /* 11d4f5f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f5fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f5fc je 0x11d4f698 */
  if (C.zf) goto L_11d4f698;
  /* 11d4f602 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f605 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f606 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11d4f60c push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f60d call 0x11d4f750 */
  push32(0x11d4f612u); f_11d4f750();
  /* 11d4f612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f617 je 0x11d4f620 */
  if (C.zf) goto L_11d4f620;
  /* 11d4f619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f61b jmp 0x11d4f6e0 */
  goto L_11d4f6e0;
L_11d4f620:;
  /* 11d4f620 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11d4f626 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f627 push 0x11d71870 */
  push32((uint32_t)(0x11d71870u));
  /* 11d4f62c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11d4f632 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f633 call 0x11d51160 */
  push32(0x11d4f638u); f_11d51160();
  /* 11d4f638 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f63b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f63d jne 0x11d4f646 */
  if (!C.zf) goto L_11d4f646;
  /* 11d4f63f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f641 jmp 0x11d4f6e0 */
  goto L_11d4f6e0;
L_11d4f646:;
  /* 11d4f646 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4f648 mov cx, word ptr [0x11d71874] */
  CX = (r16((uint32_t)(0x11d71874)));
  /* 11d4f64f mov dword ptr [0x11d71878], ecx */
  w32((uint32_t)(0x11d71878), (ECX));
  /* 11d4f655 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11d4f65b push edx */
  push32((uint32_t)(EDX));
  /* 11d4f65c push 0x11d70450 */
  push32((uint32_t)(0x11d70450u));
  /* 11d4f661 call 0x11d4f8b0 */
  push32(0x11d4f666u); f_11d4f8b0();
  /* 11d4f666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f669 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f66c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4f66f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4f671 je 0x11d4f686 */
  if (C.zf) goto L_11d4f686;
  /* 11d4f673 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f676 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f677 push 0x11d703cc */
  push32((uint32_t)(0x11d703ccu));
  /* 11d4f67c call 0x11d48330 */
  push32(0x11d4f681u); f_11d48330();
  /* 11d4f681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f684 jmp 0x11d4f698 */
  goto L_11d4f698;
L_11d4f686:;
  /* 11d4f686 push 0x11d70450 */
  push32((uint32_t)(0x11d70450u));
  /* 11d4f68b push 0x11d703cc */
  push32((uint32_t)(0x11d703ccu));
  /* 11d4f690 call 0x11d48330 */
  push32(0x11d4f695u); f_11d48330();
  /* 11d4f695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4f698:;
  /* 11d4f698 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f69c je 0x11d4f6b1 */
  if (C.zf) goto L_11d4f6b1;
  /* 11d4f69e push 6 */
  push32((uint32_t)(0x6u));
  /* 11d4f6a0 push 0x11d71870 */
  push32((uint32_t)(0x11d71870u));
  /* 11d4f6a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4f6a8 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f6a9 call 0x11d4bc60 */
  push32(0x11d4f6aeu); f_11d4bc60();
  /* 11d4f6ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4f6b1:;
  /* 11d4f6b1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f6b5 je 0x11d4f6ca */
  if (C.zf) goto L_11d4f6ca;
  /* 11d4f6b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d4f6b9 push 0x11d71878 */
  push32((uint32_t)(0x11d71878u));
  /* 11d4f6be mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4f6c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f6c2 call 0x11d4bc60 */
  push32(0x11d4f6c7u); f_11d4bc60();
  /* 11d4f6c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4f6ca:;
  /* 11d4f6ca push 0x11d70450 */
  push32((uint32_t)(0x11d70450u));
  /* 11d4f6cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f6d2 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f6d3 call 0x11d48330 */
  push32(0x11d4f6d8u); f_11d48330();
  /* 11d4f6d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f6db mov eax, 0x11d70450 */
  EAX = (0x11d70450u);
L_11d4f6e0:;
  /* 11d4f6e0 mov esp, ebp */
  ESP = (EBP);
  /* 11d4f6e2 pop ebp */
  EBP = (pop32());
  /* 11d4f6e3 ret  */
  ESPCHK(0x11d4f560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6f0 @ 0x11d4f6f0 (7 bytes, 5 insns) */
void f_11d4f6f0(void) {
  FTRACE(0x11d4f6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4f6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4f6f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4f6f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f6f5 pop ebp */
  EBP = (pop32());
  /* 11d4f6f6 ret  */
  ESPCHK(0x11d4f6f0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11d4f700 (79 bytes, 28 insns) */
void f_11d4f700(void) {
  FTRACE(0x11d4f700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4f700 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4f701 mov ebp, esp */
  EBP = (ESP);
  /* 11d4f703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4f706 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d4f709 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4f70c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d4f713 jmp 0x11d4f71e */
  goto L_11d4f71e;
L_11d4f715:;
  /* 11d4f715 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4f718 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f71b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d4f71e:;
  /* 11d4f71e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4f721 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f724 jge 0x11d4f744 */
  if ((C.sf==C.of)) goto L_11d4f744;
  /* 11d4f726 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4f729 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f72c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4f72f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4f732 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d4f735 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f739 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f73a call 0x11d48340 */
  push32(0x11d4f73fu); f_11d48340();
  /* 11d4f73f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f742 jmp 0x11d4f715 */
  goto L_11d4f715;
L_11d4f744:;
  /* 11d4f744 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4f74b mov esp, ebp */
  ESP = (EBP);
  /* 11d4f74d pop ebp */
  EBP = (pop32());
  /* 11d4f74e ret  */
  ESPCHK(0x11d4f700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f750 @ 0x11d4f750 (349 bytes, 122 insns) */
void f_11d4f750(void) {
  FTRACE(0x11d4f750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4f750 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4f751 mov ebp, esp */
  EBP = (ESP);
  /* 11d4f753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4f756 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11d4f75b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4f75d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f760 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f761 call 0x11d490f0 */
  push32(0x11d4f766u); f_11d490f0();
  /* 11d4f766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f769 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f76c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d4f76f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4f771 jne 0x11d4f77a */
  if (!C.zf) goto L_11d4f77a;
  /* 11d4f773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f775 jmp 0x11d4f8a9 */
  goto L_11d4f8a9;
L_11d4f77a:;
  /* 11d4f77a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f77d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4f780 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f783 jne 0x11d4f7b0 */
  if (!C.zf) goto L_11d4f7b0;
  /* 11d4f785 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f788 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d4f78c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f78e je 0x11d4f7b0 */
  if (C.zf) goto L_11d4f7b0;
  /* 11d4f790 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f793 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f796 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f797 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f79a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f7a0 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f7a1 call 0x11d48330 */
  push32(0x11d4f7a6u); f_11d48330();
  /* 11d4f7a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f7a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f7ab jmp 0x11d4f8a9 */
  goto L_11d4f8a9;
L_11d4f7b0:;
  /* 11d4f7b0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d4f7b7 jmp 0x11d4f7c2 */
  goto L_11d4f7c2;
L_11d4f7b9:;
  /* 11d4f7b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4f7bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f7bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d4f7c2:;
  /* 11d4f7c2 push 0x11d6d310 */
  push32((uint32_t)(0x11d6d310u));
  /* 11d4f7c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f7ca push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f7cb call 0x11d510a0 */
  push32(0x11d4f7d0u); f_11d510a0();
  /* 11d4f7d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f7d3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d4f7d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f7da jne 0x11d4f7e4 */
  if (!C.zf) goto L_11d4f7e4;
  /* 11d4f7dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f7df jmp 0x11d4f8a9 */
  goto L_11d4f8a9;
L_11d4f7e4:;
  /* 11d4f7e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f7e7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f7ea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d4f7ec mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11d4f7ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f7f3 jne 0x11d4f81a */
  if (!C.zf) goto L_11d4f81a;
  /* 11d4f7f5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f7f9 jge 0x11d4f81a */
  if ((C.sf==C.of)) goto L_11d4f81a;
  /* 11d4f7fb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d4f7ff cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f802 je 0x11d4f81a */
  if (C.zf) goto L_11d4f81a;
  /* 11d4f804 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4f807 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f808 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f80b push eax */
  push32((uint32_t)(EAX));
  /* 11d4f80c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f80f push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f810 call 0x11d48ba0 */
  push32(0x11d4f815u); f_11d48ba0();
  /* 11d4f815 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f818 jmp 0x11d4f880 */
  goto L_11d4f880;
L_11d4f81a:;
  /* 11d4f81a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f81e jne 0x11d4f848 */
  if (!C.zf) goto L_11d4f848;
  /* 11d4f820 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f824 jge 0x11d4f848 */
  if ((C.sf==C.of)) goto L_11d4f848;
  /* 11d4f826 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d4f82a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f82d je 0x11d4f848 */
  if (C.zf) goto L_11d4f848;
  /* 11d4f82f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4f832 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f833 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f836 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f837 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f83a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f83d push edx */
  push32((uint32_t)(EDX));
  /* 11d4f83e call 0x11d48ba0 */
  push32(0x11d4f843u); f_11d48ba0();
  /* 11d4f843 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f846 jmp 0x11d4f880 */
  goto L_11d4f880;
L_11d4f848:;
  /* 11d4f848 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f84c jne 0x11d4f87b */
  if (!C.zf) goto L_11d4f87b;
  /* 11d4f84e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d4f852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f854 je 0x11d4f85f */
  if (C.zf) goto L_11d4f85f;
  /* 11d4f856 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d4f85a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f85d jne 0x11d4f87b */
  if (!C.zf) goto L_11d4f87b;
L_11d4f85f:;
  /* 11d4f85f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4f862 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f863 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f866 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f867 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f86a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f870 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f871 call 0x11d48ba0 */
  push32(0x11d4f876u); f_11d48ba0();
  /* 11d4f876 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f879 jmp 0x11d4f880 */
  goto L_11d4f880;
L_11d4f87b:;
  /* 11d4f87b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f87e jmp 0x11d4f8a9 */
  goto L_11d4f8a9;
L_11d4f880:;
  /* 11d4f880 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d4f884 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f887 jne 0x11d4f88b */
  if (!C.zf) goto L_11d4f88b;
  /* 11d4f889 jmp 0x11d4f8a7 */
  goto L_11d4f8a7;
L_11d4f88b:;
  /* 11d4f88b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d4f88f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f891 jne 0x11d4f895 */
  if (!C.zf) goto L_11d4f895;
  /* 11d4f893 jmp 0x11d4f8a7 */
  goto L_11d4f8a7;
L_11d4f895:;
  /* 11d4f895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4f898 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f89b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11d4f89f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d4f8a2 jmp 0x11d4f7b9 */
  goto L_11d4f7b9;
L_11d4f8a7:;
  /* 11d4f8a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d4f8a9:;
  /* 11d4f8a9 mov esp, ebp */
  ESP = (EBP);
  /* 11d4f8ab pop ebp */
  EBP = (pop32());
  /* 11d4f8ac ret  */
  ESPCHK(0x11d4f750u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11d4f8b0 (101 bytes, 36 insns) */
void f_11d4f8b0(void) {
  FTRACE(0x11d4f8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4f8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4f8b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4f8b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f8b6 push eax */
  push32((uint32_t)(EAX));
  /* 11d4f8b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f8ba push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f8bb call 0x11d48330 */
  push32(0x11d4f8c0u); f_11d48330();
  /* 11d4f8c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f8c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f8c6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11d4f8ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f8cc je 0x11d4f8e8 */
  if (C.zf) goto L_11d4f8e8;
  /* 11d4f8ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f8d1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f8d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f8d5 push 0x11d6d318 */
  push32((uint32_t)(0x11d6d318u));
  /* 11d4f8da push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4f8dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f8df push edx */
  push32((uint32_t)(EDX));
  /* 11d4f8e0 call 0x11d4f700 */
  push32(0x11d4f8e5u); f_11d4f700();
  /* 11d4f8e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4f8e8:;
  /* 11d4f8e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f8eb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11d4f8f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4f8f4 je 0x11d4f913 */
  if (C.zf) goto L_11d4f913;
  /* 11d4f8f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4f8f9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f8ff push edx */
  push32((uint32_t)(EDX));
  /* 11d4f900 push 0x11d6d314 */
  push32((uint32_t)(0x11d6d314u));
  /* 11d4f905 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4f907 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f90a push eax */
  push32((uint32_t)(EAX));
  /* 11d4f90b call 0x11d4f700 */
  push32(0x11d4f910u); f_11d4f700();
  /* 11d4f910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4f913:;
  /* 11d4f913 pop ebp */
  EBP = (pop32());
  /* 11d4f914 ret  */
  ESPCHK(0x11d4f8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f920 @ 0x11d4f920 (130 bytes, 50 insns) */
void f_11d4f920(void) {
  FTRACE(0x11d4f920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4f920 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4f921 mov ebp, esp */
  EBP = (ESP);
  /* 11d4f923 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f924 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4f925 push esi */
  push32((uint32_t)(ESI));
  /* 11d4f926 push edi */
  push32((uint32_t)(EDI));
  /* 11d4f927 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d4f92e:;
  /* 11d4f92e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f932 jne 0x11d4f952 */
  if (!C.zf) goto L_11d4f952;
  /* 11d4f934 push 0x11d6d328 */
  push32((uint32_t)(0x11d6d328u));
  /* 11d4f939 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4f93b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11d4f93d push 0x11d6d31c */
  push32((uint32_t)(0x11d6d31cu));
  /* 11d4f942 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4f944 call 0x11d44440 */
  push32(0x11d4f949u); f_11d44440();
  /* 11d4f949 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f94c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f94f jne 0x11d4f952 */
  if (!C.zf) goto L_11d4f952;
  /* 11d4f951 int3  */
  x86_unimpl("int3 @ 0x11d4f951");
L_11d4f952:;
  /* 11d4f952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f956 jne 0x11d4f92e */
  if (!C.zf) goto L_11d4f92e;
  /* 11d4f958 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f95b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d4f95e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4f961 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4f963 je 0x11d4f971 */
  if (C.zf) goto L_11d4f971;
  /* 11d4f965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f968 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11d4f96f jmp 0x11d4f998 */
  goto L_11d4f998;
L_11d4f971:;
  /* 11d4f971 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f974 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4f975 call 0x11d4e190 */
  push32(0x11d4f97au); f_11d4e190();
  /* 11d4f97a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f97d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f980 push edx */
  push32((uint32_t)(EDX));
  /* 11d4f981 call 0x11d4f9b0 */
  push32(0x11d4f986u); f_11d4f9b0();
  /* 11d4f986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4f98c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f98f push eax */
  push32((uint32_t)(EAX));
  /* 11d4f990 call 0x11d4e200 */
  push32(0x11d4f995u); f_11d4e200();
  /* 11d4f995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4f998:;
  /* 11d4f998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4f99b pop edi */
  EDI = (pop32());
  /* 11d4f99c pop esi */
  ESI = (pop32());
  /* 11d4f99d pop ebx */
  EBX = (pop32());
  /* 11d4f99e mov esp, ebp */
  ESP = (EBP);
  /* 11d4f9a0 pop ebp */
  EBP = (pop32());
  /* 11d4f9a1 ret  */
  ESPCHK(0x11d4f920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9b0 @ 0x11d4f9b0 (190 bytes, 67 insns) */
void f_11d4f9b0(void) {
  FTRACE(0x11d4f9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4f9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4f9b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d4f9b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4f9b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d4f9b7 push esi */
  push32((uint32_t)(ESI));
  /* 11d4f9b8 push edi */
  push32((uint32_t)(EDI));
  /* 11d4f9b9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d4f9c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4f9c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d4f9c6:;
  /* 11d4f9c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f9ca jne 0x11d4f9ea */
  if (!C.zf) goto L_11d4f9ea;
  /* 11d4f9cc push 0x11d6d1cc */
  push32((uint32_t)(0x11d6d1ccu));
  /* 11d4f9d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4f9d3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11d4f9d5 push 0x11d6d31c */
  push32((uint32_t)(0x11d6d31cu));
  /* 11d4f9da push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4f9dc call 0x11d44440 */
  push32(0x11d4f9e1u); f_11d44440();
  /* 11d4f9e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4f9e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4f9e7 jne 0x11d4f9ea */
  if (!C.zf) goto L_11d4f9ea;
  /* 11d4f9e9 int3  */
  x86_unimpl("int3 @ 0x11d4f9e9");
L_11d4f9ea:;
  /* 11d4f9ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4f9ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4f9ee jne 0x11d4f9c6 */
  if (!C.zf) goto L_11d4f9c6;
  /* 11d4f9f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4f9f3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d4f9f6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4f9fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4f9fd je 0x11d4fa5a */
  if (C.zf) goto L_11d4fa5a;
  /* 11d4f9ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4fa02 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4fa03 call 0x11d4ecb0 */
  push32(0x11d4fa08u); f_11d4ecb0();
  /* 11d4fa08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fa0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4fa0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4fa11 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fa12 call 0x11d52030 */
  push32(0x11d4fa17u); f_11d52030();
  /* 11d4fa17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fa1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4fa1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d4fa20 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4fa21 call 0x11d51f00 */
  push32(0x11d4fa26u); f_11d51f00();
  /* 11d4fa26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fa29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4fa2b jge 0x11d4fa36 */
  if ((C.sf==C.of)) goto L_11d4fa36;
  /* 11d4fa2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d4fa34 jmp 0x11d4fa5a */
  goto L_11d4fa5a;
L_11d4fa36:;
  /* 11d4fa36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4fa39 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4fa3d je 0x11d4fa5a */
  if (C.zf) goto L_11d4fa5a;
  /* 11d4fa3f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4fa41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4fa44 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d4fa47 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4fa48 call 0x11d45e10 */
  push32(0x11d4fa4du); f_11d45e10();
  /* 11d4fa4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fa50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4fa53 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11d4fa5a:;
  /* 11d4fa5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4fa5d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11d4fa64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fa67 pop edi */
  EDI = (pop32());
  /* 11d4fa68 pop esi */
  ESI = (pop32());
  /* 11d4fa69 pop ebx */
  EBX = (pop32());
  /* 11d4fa6a mov esp, ebp */
  ESP = (EBP);
  /* 11d4fa6c pop ebp */
  EBP = (pop32());
  /* 11d4fa6d ret  */
  ESPCHK(0x11d4f9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa70 @ 0x11d4fa70 (210 bytes, 63 insns) */
void f_11d4fa70(void) {
  FTRACE(0x11d4fa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4fa70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4fa71 mov ebp, esp */
  EBP = (ESP);
  /* 11d4fa73 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4fa74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fa77 cmp eax, dword ptr [0x11d7315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d7315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4fa7d jae 0x11d4faa1 */
  if (!C.cf) goto L_11d4faa1;
  /* 11d4fa7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fa82 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d4fa85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fa88 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4fa8b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4fa8e mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d4fa95 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d4fa9a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fa9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4fa9f jne 0x11d4fab4 */
  if (!C.zf) goto L_11d4fab4;
L_11d4faa1:;
  /* 11d4faa1 call 0x11d4d250 */
  push32(0x11d4faa6u); f_11d4d250();
  /* 11d4faa6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d4faac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4faaf jmp 0x11d4fb3e */
  goto L_11d4fb3e;
L_11d4fab4:;
  /* 11d4fab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fab7 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fab8 call 0x11d4ea70 */
  push32(0x11d4fabdu); f_11d4ea70();
  /* 11d4fabd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fac3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d4fac6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fac9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4facc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4facf mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4fad6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11d4fadb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4fade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4fae0 je 0x11d4fb1d */
  if (C.zf) goto L_11d4fb1d;
  /* 11d4fae2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fae5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4fae6 call 0x11d4e8f0 */
  push32(0x11d4faebu); f_11d4e8f0();
  /* 11d4faeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4faee push eax */
  push32((uint32_t)(EAX));
  /* 11d4faef call dword ptr [0x11d74314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74314))), 0x11d4faf5u);
  /* 11d4faf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4faf7 jne 0x11d4fb04 */
  if (!C.zf) goto L_11d4fb04;
  /* 11d4faf9 call dword ptr [0x11d743f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f0))), 0x11d4faffu);
  /* 11d4faff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4fb02 jmp 0x11d4fb0b */
  goto L_11d4fb0b;
L_11d4fb04:;
  /* 11d4fb04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d4fb0b:;
  /* 11d4fb0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4fb0f jne 0x11d4fb13 */
  if (!C.zf) goto L_11d4fb13;
  /* 11d4fb11 jmp 0x11d4fb2f */
  goto L_11d4fb2f;
L_11d4fb13:;
  /* 11d4fb13 call 0x11d4d260 */
  push32(0x11d4fb18u); f_11d4d260();
  /* 11d4fb18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fb1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d4fb1d:;
  /* 11d4fb1d call 0x11d4d250 */
  push32(0x11d4fb22u); f_11d4d250();
  /* 11d4fb22 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d4fb28 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d4fb2f:;
  /* 11d4fb2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fb32 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fb33 call 0x11d4eb00 */
  push32(0x11d4fb38u); f_11d4eb00();
  /* 11d4fb38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fb3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d4fb3e:;
  /* 11d4fb3e mov esp, ebp */
  ESP = (EBP);
  /* 11d4fb40 pop ebp */
  EBP = (pop32());
  /* 11d4fb41 ret  */
  ESPCHK(0x11d4fa70u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11d4fb50 (219 bytes, 64 insns) */
void f_11d4fb50(void) {
  FTRACE(0x11d4fb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4fb50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4fb51 mov ebp, esp */
  EBP = (ESP);
  /* 11d4fb53 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4fb54 cmp dword ptr [0x11d7185c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d7185c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4fb5b je 0x11d4fbf1 */
  if (C.zf) goto L_11d4fbf1;
  /* 11d4fb61 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11d4fb63 push 0x11d6d338 */
  push32((uint32_t)(0x11d6d338u));
  /* 11d4fb68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4fb6a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11d4fb6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fb71 call 0x11d45790 */
  push32(0x11d4fb76u); f_11d45790();
  /* 11d4fb76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fb79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4fb7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4fb80 jne 0x11d4fb8c */
  if (!C.zf) goto L_11d4fb8c;
  /* 11d4fb82 mov eax, 1 */
  EAX = (0x1u);
  /* 11d4fb87 jmp 0x11d4fc27 */
  goto L_11d4fc27;
L_11d4fb8c:;
  /* 11d4fb8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fb8f push eax */
  push32((uint32_t)(EAX));
  /* 11d4fb90 call 0x11d4fc30 */
  push32(0x11d4fb95u); f_11d4fc30();
  /* 11d4fb95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fb98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4fb9a je 0x11d4fbbd */
  if (C.zf) goto L_11d4fbbd;
  /* 11d4fb9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fb9f push ecx */
  push32((uint32_t)(ECX));
  /* 11d4fba0 call 0x11d501c0 */
  push32(0x11d4fba5u); f_11d501c0();
  /* 11d4fba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fba8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4fbaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fbad push edx */
  push32((uint32_t)(EDX));
  /* 11d4fbae call 0x11d45e10 */
  push32(0x11d4fbb3u); f_11d45e10();
  /* 11d4fbb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fbb6 mov eax, 1 */
  EAX = (0x1u);
  /* 11d4fbbb jmp 0x11d4fc27 */
  goto L_11d4fc27;
L_11d4fbbd:;
  /* 11d4fbbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fbc0 mov dword ptr [0x11d70c98], eax */
  w32((uint32_t)(0x11d70c98), (EAX));
  /* 11d4fbc5 mov ecx, dword ptr [0x11d7187c] */
  ECX = (r32((uint32_t)(0x11d7187c)));
  /* 11d4fbcb push ecx */
  push32((uint32_t)(ECX));
  /* 11d4fbcc call 0x11d501c0 */
  push32(0x11d4fbd1u); f_11d501c0();
  /* 11d4fbd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fbd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4fbd6 mov edx, dword ptr [0x11d7187c] */
  EDX = (r32((uint32_t)(0x11d7187c)));
  /* 11d4fbdc push edx */
  push32((uint32_t)(EDX));
  /* 11d4fbdd call 0x11d45e10 */
  push32(0x11d4fbe2u); f_11d45e10();
  /* 11d4fbe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fbe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fbe8 mov dword ptr [0x11d7187c], eax */
  w32((uint32_t)(0x11d7187c), (EAX));
  /* 11d4fbed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4fbef jmp 0x11d4fc27 */
  goto L_11d4fc27;
L_11d4fbf1:;
  /* 11d4fbf1 mov dword ptr [0x11d70c98], 0x11d70ca0 */
  w32((uint32_t)(0x11d70c98), (0x11d70ca0u));
  /* 11d4fbfb mov ecx, dword ptr [0x11d7187c] */
  ECX = (r32((uint32_t)(0x11d7187c)));
  /* 11d4fc01 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4fc02 call 0x11d501c0 */
  push32(0x11d4fc07u); f_11d501c0();
  /* 11d4fc07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fc0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4fc0c mov edx, dword ptr [0x11d7187c] */
  EDX = (r32((uint32_t)(0x11d7187c)));
  /* 11d4fc12 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fc13 call 0x11d45e10 */
  push32(0x11d4fc18u); f_11d45e10();
  /* 11d4fc18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fc1b mov dword ptr [0x11d7187c], 0 */
  w32((uint32_t)(0x11d7187c), (0x0u));
  /* 11d4fc25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d4fc27:;
  /* 11d4fc27 mov esp, ebp */
  ESP = (EBP);
  /* 11d4fc29 pop ebp */
  EBP = (pop32());
  /* 11d4fc2a ret  */
  ESPCHK(0x11d4fb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc30 @ 0x11d4fc30 (1423 bytes, 533 insns) */
void f_11d4fc30(void) {
  FTRACE(0x11d4fc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4fc30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d4fc31 mov ebp, esp */
  EBP = (ESP);
  /* 11d4fc33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4fc36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4fc3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4fc3f mov ax, word ptr [0x11d718b6] */
  AX = (r16((uint32_t)(0x11d718b6)));
  /* 11d4fc45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4fc48 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fc4a mov cx, word ptr [0x11d718b8] */
  CX = (r16((uint32_t)(0x11d718b8)));
  /* 11d4fc51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d4fc54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4fc58 jne 0x11d4fc62 */
  if (!C.zf) goto L_11d4fc62;
  /* 11d4fc5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4fc5d jmp 0x11d501bb */
  goto L_11d501bb;
L_11d4fc62:;
  /* 11d4fc62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fc65 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fc68 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fc69 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11d4fc6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fc6e push eax */
  push32((uint32_t)(EAX));
  /* 11d4fc6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fc71 call 0x11d53540 */
  push32(0x11d4fc76u); f_11d53540();
  /* 11d4fc76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fc79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fc7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fc7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fc81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fc84 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fc87 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fc88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11d4fc8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fc8d push eax */
  push32((uint32_t)(EAX));
  /* 11d4fc8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fc90 call 0x11d53540 */
  push32(0x11d4fc95u); f_11d53540();
  /* 11d4fc95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fc98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fc9b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fc9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fca0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fca3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fca6 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fca7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11d4fca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fcac push eax */
  push32((uint32_t)(EAX));
  /* 11d4fcad push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fcaf call 0x11d53540 */
  push32(0x11d4fcb4u); f_11d53540();
  /* 11d4fcb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fcb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fcba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fcbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fcbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fcc2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fcc5 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fcc6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11d4fcc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fccb push eax */
  push32((uint32_t)(EAX));
  /* 11d4fccc push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fcce call 0x11d53540 */
  push32(0x11d4fcd3u); f_11d53540();
  /* 11d4fcd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fcd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fcd9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fcdb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fcde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fce1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fce4 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fce5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11d4fce7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fcea push eax */
  push32((uint32_t)(EAX));
  /* 11d4fceb push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fced call 0x11d53540 */
  push32(0x11d4fcf2u); f_11d53540();
  /* 11d4fcf2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fcf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fcf8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fcfa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fcfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fd00 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fd03 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fd04 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11d4fd06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fd09 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fd0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fd0c call 0x11d53540 */
  push32(0x11d4fd11u); f_11d53540();
  /* 11d4fd11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fd14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fd17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fd19 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fd1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fd1f push edx */
  push32((uint32_t)(EDX));
  /* 11d4fd20 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11d4fd22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fd25 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fd26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fd28 call 0x11d53540 */
  push32(0x11d4fd2du); f_11d53540();
  /* 11d4fd2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fd30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fd33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fd35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fd38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fd3b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fd3e push edx */
  push32((uint32_t)(EDX));
  /* 11d4fd3f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11d4fd41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fd44 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fd45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fd47 call 0x11d53540 */
  push32(0x11d4fd4cu); f_11d53540();
  /* 11d4fd4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fd4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fd52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fd54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fd57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fd5a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fd5d push edx */
  push32((uint32_t)(EDX));
  /* 11d4fd5e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11d4fd60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fd63 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fd64 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fd66 call 0x11d53540 */
  push32(0x11d4fd6bu); f_11d53540();
  /* 11d4fd6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fd6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fd71 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fd73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fd76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fd79 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fd7c push edx */
  push32((uint32_t)(EDX));
  /* 11d4fd7d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11d4fd7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fd82 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fd83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fd85 call 0x11d53540 */
  push32(0x11d4fd8au); f_11d53540();
  /* 11d4fd8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fd8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fd90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fd92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fd95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fd98 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fd9b push edx */
  push32((uint32_t)(EDX));
  /* 11d4fd9c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11d4fd9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fda1 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fda2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fda4 call 0x11d53540 */
  push32(0x11d4fda9u); f_11d53540();
  /* 11d4fda9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fdac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fdaf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fdb1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fdb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fdb7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fdba push edx */
  push32((uint32_t)(EDX));
  /* 11d4fdbb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11d4fdbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fdc0 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fdc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fdc3 call 0x11d53540 */
  push32(0x11d4fdc8u); f_11d53540();
  /* 11d4fdc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fdcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fdce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fdd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fdd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fdd6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fdd9 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fdda push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11d4fddc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fddf push eax */
  push32((uint32_t)(EAX));
  /* 11d4fde0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fde2 call 0x11d53540 */
  push32(0x11d4fde7u); f_11d53540();
  /* 11d4fde7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fdea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fded or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fdef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fdf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fdf5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fdf8 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fdf9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d4fdfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fdfe push eax */
  push32((uint32_t)(EAX));
  /* 11d4fdff push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fe01 call 0x11d53540 */
  push32(0x11d4fe06u); f_11d53540();
  /* 11d4fe06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fe09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fe0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fe0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fe11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fe14 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fe17 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fe18 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11d4fe1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fe1d push eax */
  push32((uint32_t)(EAX));
  /* 11d4fe1e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fe20 call 0x11d53540 */
  push32(0x11d4fe25u); f_11d53540();
  /* 11d4fe25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fe28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fe2b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fe2d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fe30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fe33 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fe36 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fe37 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11d4fe39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fe3c push eax */
  push32((uint32_t)(EAX));
  /* 11d4fe3d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fe3f call 0x11d53540 */
  push32(0x11d4fe44u); f_11d53540();
  /* 11d4fe44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fe47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fe4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fe4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fe4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fe52 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fe55 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fe56 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11d4fe58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fe5b push eax */
  push32((uint32_t)(EAX));
  /* 11d4fe5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fe5e call 0x11d53540 */
  push32(0x11d4fe63u); f_11d53540();
  /* 11d4fe63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fe66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fe69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fe6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fe6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fe71 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fe74 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fe75 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11d4fe77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fe7a push eax */
  push32((uint32_t)(EAX));
  /* 11d4fe7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fe7d call 0x11d53540 */
  push32(0x11d4fe82u); f_11d53540();
  /* 11d4fe82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fe85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fe88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fe8a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fe8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fe90 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fe93 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fe94 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11d4fe96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fe99 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fe9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fe9c call 0x11d53540 */
  push32(0x11d4fea1u); f_11d53540();
  /* 11d4fea1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fea4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fea7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fea9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4feac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4feaf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4feb2 push edx */
  push32((uint32_t)(EDX));
  /* 11d4feb3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11d4feb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4feb8 push eax */
  push32((uint32_t)(EAX));
  /* 11d4feb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4febb call 0x11d53540 */
  push32(0x11d4fec0u); f_11d53540();
  /* 11d4fec0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fec3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fec6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fec8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4fecb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4fece add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fed1 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fed2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11d4fed4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fed7 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fed8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4feda call 0x11d53540 */
  push32(0x11d4fedfu); f_11d53540();
  /* 11d4fedf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fee2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fee5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fee7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4feea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4feed add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fef0 push edx */
  push32((uint32_t)(EDX));
  /* 11d4fef1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11d4fef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4fef6 push eax */
  push32((uint32_t)(EAX));
  /* 11d4fef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fef9 call 0x11d53540 */
  push32(0x11d4fefeu); f_11d53540();
  /* 11d4fefe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ff04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ff06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4ff09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ff0c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff0f push edx */
  push32((uint32_t)(EDX));
  /* 11d4ff10 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11d4ff12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ff15 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ff16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4ff18 call 0x11d53540 */
  push32(0x11d4ff1du); f_11d53540();
  /* 11d4ff1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ff23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ff25 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4ff28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ff2b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff2e push edx */
  push32((uint32_t)(EDX));
  /* 11d4ff2f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11d4ff31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ff34 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ff35 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4ff37 call 0x11d53540 */
  push32(0x11d4ff3cu); f_11d53540();
  /* 11d4ff3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ff42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ff44 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4ff47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ff4a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff4d push edx */
  push32((uint32_t)(EDX));
  /* 11d4ff4e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11d4ff50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ff53 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ff54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4ff56 call 0x11d53540 */
  push32(0x11d4ff5bu); f_11d53540();
  /* 11d4ff5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ff61 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ff63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4ff66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ff69 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff6c push edx */
  push32((uint32_t)(EDX));
  /* 11d4ff6d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11d4ff6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ff72 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ff73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4ff75 call 0x11d53540 */
  push32(0x11d4ff7au); f_11d53540();
  /* 11d4ff7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ff80 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ff82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4ff85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ff88 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff8b push edx */
  push32((uint32_t)(EDX));
  /* 11d4ff8c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11d4ff8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ff91 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ff92 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4ff94 call 0x11d53540 */
  push32(0x11d4ff99u); f_11d53540();
  /* 11d4ff99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ff9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ff9f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ffa1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4ffa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ffa7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ffaa push edx */
  push32((uint32_t)(EDX));
  /* 11d4ffab push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11d4ffad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ffb0 push eax */
  push32((uint32_t)(EAX));
  /* 11d4ffb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4ffb3 call 0x11d53540 */
  push32(0x11d4ffb8u); f_11d53540();
  /* 11d4ffb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ffbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ffbe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ffc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4ffc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ffc6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ffc9 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ffca push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11d4ffcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ffcf push eax */
  push32((uint32_t)(EAX));
  /* 11d4ffd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4ffd2 call 0x11d53540 */
  push32(0x11d4ffd7u); f_11d53540();
  /* 11d4ffd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ffda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4ffdd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4ffdf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4ffe2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4ffe5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4ffe8 push edx */
  push32((uint32_t)(EDX));
  /* 11d4ffe9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11d4ffeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4ffee push eax */
  push32((uint32_t)(EAX));
  /* 11d4ffef push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4fff1 call 0x11d53540 */
  push32(0x11d4fff6u); f_11d53540();
  /* 11d4fff6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4fff9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4fffc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4fffe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d50001 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50004 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50007 push edx */
  push32((uint32_t)(EDX));
  /* 11d50008 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11d5000a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5000d push eax */
  push32((uint32_t)(EAX));
  /* 11d5000e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50010 call 0x11d53540 */
  push32(0x11d50015u); f_11d53540();
  /* 11d50015 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50018 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5001b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5001d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d50020 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50023 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50026 push edx */
  push32((uint32_t)(EDX));
  /* 11d50027 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11d50029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5002c push eax */
  push32((uint32_t)(EAX));
  /* 11d5002d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5002f call 0x11d53540 */
  push32(0x11d50034u); f_11d53540();
  /* 11d50034 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50037 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5003a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5003c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d5003f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50042 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50048 push edx */
  push32((uint32_t)(EDX));
  /* 11d50049 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11d5004b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5004e push eax */
  push32((uint32_t)(EAX));
  /* 11d5004f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50051 call 0x11d53540 */
  push32(0x11d50056u); f_11d53540();
  /* 11d50056 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50059 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5005c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5005e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d50061 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50064 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5006a push edx */
  push32((uint32_t)(EDX));
  /* 11d5006b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d5006d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50070 push eax */
  push32((uint32_t)(EAX));
  /* 11d50071 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50073 call 0x11d53540 */
  push32(0x11d50078u); f_11d53540();
  /* 11d50078 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5007b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5007e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50080 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d50083 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50086 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5008c push edx */
  push32((uint32_t)(EDX));
  /* 11d5008d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d5008f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50092 push eax */
  push32((uint32_t)(EAX));
  /* 11d50093 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50095 call 0x11d53540 */
  push32(0x11d5009au); f_11d53540();
  /* 11d5009a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5009d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d500a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d500a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d500a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d500a8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d500ae push edx */
  push32((uint32_t)(EDX));
  /* 11d500af push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11d500b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d500b4 push eax */
  push32((uint32_t)(EAX));
  /* 11d500b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d500b7 call 0x11d53540 */
  push32(0x11d500bcu); f_11d53540();
  /* 11d500bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d500bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d500c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d500c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d500c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d500ca add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d500d0 push edx */
  push32((uint32_t)(EDX));
  /* 11d500d1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11d500d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d500d6 push eax */
  push32((uint32_t)(EAX));
  /* 11d500d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d500d9 call 0x11d53540 */
  push32(0x11d500deu); f_11d53540();
  /* 11d500de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d500e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d500e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d500e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d500e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d500ec add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d500f2 push edx */
  push32((uint32_t)(EDX));
  /* 11d500f3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11d500f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d500f8 push eax */
  push32((uint32_t)(EAX));
  /* 11d500f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d500fb call 0x11d53540 */
  push32(0x11d50100u); f_11d53540();
  /* 11d50100 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50103 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d50106 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50108 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d5010b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5010e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50114 push edx */
  push32((uint32_t)(EDX));
  /* 11d50115 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11d50117 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5011a push eax */
  push32((uint32_t)(EAX));
  /* 11d5011b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5011d call 0x11d53540 */
  push32(0x11d50122u); f_11d53540();
  /* 11d50122 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50125 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d50128 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5012a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d5012d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50130 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50136 push edx */
  push32((uint32_t)(EDX));
  /* 11d50137 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11d50139 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5013c push eax */
  push32((uint32_t)(EAX));
  /* 11d5013d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5013f call 0x11d53540 */
  push32(0x11d50144u); f_11d53540();
  /* 11d50144 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50147 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5014a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5014c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d5014f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50152 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50158 push edx */
  push32((uint32_t)(EDX));
  /* 11d50159 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11d5015b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5015e push eax */
  push32((uint32_t)(EAX));
  /* 11d5015f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50161 call 0x11d53540 */
  push32(0x11d50166u); f_11d53540();
  /* 11d50166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50169 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5016c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5016e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d50171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50174 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5017a push edx */
  push32((uint32_t)(EDX));
  /* 11d5017b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d5017d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50180 push eax */
  push32((uint32_t)(EAX));
  /* 11d50181 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50183 call 0x11d53540 */
  push32(0x11d50188u); f_11d53540();
  /* 11d50188 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5018b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5018e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50190 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d50193 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50196 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5019c push edx */
  push32((uint32_t)(EDX));
  /* 11d5019d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11d501a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d501a5 push eax */
  push32((uint32_t)(EAX));
  /* 11d501a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d501a8 call 0x11d53540 */
  push32(0x11d501adu); f_11d53540();
  /* 11d501ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d501b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d501b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d501b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d501b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11d501bb:;
  /* 11d501bb mov esp, ebp */
  ESP = (EBP);
  /* 11d501bd pop ebp */
  EBP = (pop32());
  /* 11d501be ret  */
  ESPCHK(0x11d4fc30u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11d501c0 (779 bytes, 265 insns) */
void f_11d501c0(void) {
  FTRACE(0x11d501c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d501c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d501c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d501c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d501c7 jne 0x11d501ce */
  if (!C.zf) goto L_11d501ce;
  /* 11d501c9 jmp 0x11d504c9 */
  goto L_11d504c9;
L_11d501ce:;
  /* 11d501ce push 2 */
  push32((uint32_t)(0x2u));
  /* 11d501d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d501d3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d501d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d501d7 call 0x11d45e10 */
  push32(0x11d501dcu); f_11d45e10();
  /* 11d501dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d501df push 2 */
  push32((uint32_t)(0x2u));
  /* 11d501e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d501e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d501e7 push eax */
  push32((uint32_t)(EAX));
  /* 11d501e8 call 0x11d45e10 */
  push32(0x11d501edu); f_11d45e10();
  /* 11d501ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d501f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d501f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d501f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d501f8 push edx */
  push32((uint32_t)(EDX));
  /* 11d501f9 call 0x11d45e10 */
  push32(0x11d501feu); f_11d45e10();
  /* 11d501fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50201 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50203 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50206 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d50209 push ecx */
  push32((uint32_t)(ECX));
  /* 11d5020a call 0x11d45e10 */
  push32(0x11d5020fu); f_11d45e10();
  /* 11d5020f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50212 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50217 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d5021a push eax */
  push32((uint32_t)(EAX));
  /* 11d5021b call 0x11d45e10 */
  push32(0x11d50220u); f_11d45e10();
  /* 11d50220 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50223 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50225 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50228 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d5022b push edx */
  push32((uint32_t)(EDX));
  /* 11d5022c call 0x11d45e10 */
  push32(0x11d50231u); f_11d45e10();
  /* 11d50231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50234 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50239 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d5023b push ecx */
  push32((uint32_t)(ECX));
  /* 11d5023c call 0x11d45e10 */
  push32(0x11d50241u); f_11d45e10();
  /* 11d50241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50244 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50246 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50249 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11d5024c push eax */
  push32((uint32_t)(EAX));
  /* 11d5024d call 0x11d45e10 */
  push32(0x11d50252u); f_11d45e10();
  /* 11d50252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50255 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5025a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11d5025d push edx */
  push32((uint32_t)(EDX));
  /* 11d5025e call 0x11d45e10 */
  push32(0x11d50263u); f_11d45e10();
  /* 11d50263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50266 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5026b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11d5026e push ecx */
  push32((uint32_t)(ECX));
  /* 11d5026f call 0x11d45e10 */
  push32(0x11d50274u); f_11d45e10();
  /* 11d50274 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50277 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50279 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5027c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11d5027f push eax */
  push32((uint32_t)(EAX));
  /* 11d50280 call 0x11d45e10 */
  push32(0x11d50285u); f_11d45e10();
  /* 11d50285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50288 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5028a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5028d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11d50290 push edx */
  push32((uint32_t)(EDX));
  /* 11d50291 call 0x11d45e10 */
  push32(0x11d50296u); f_11d45e10();
  /* 11d50296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50299 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5029b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5029e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11d502a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d502a2 call 0x11d45e10 */
  push32(0x11d502a7u); f_11d45e10();
  /* 11d502a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d502aa push 2 */
  push32((uint32_t)(0x2u));
  /* 11d502ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d502af mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d502b2 push eax */
  push32((uint32_t)(EAX));
  /* 11d502b3 call 0x11d45e10 */
  push32(0x11d502b8u); f_11d45e10();
  /* 11d502b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d502bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11d502bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d502c0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11d502c3 push edx */
  push32((uint32_t)(EDX));
  /* 11d502c4 call 0x11d45e10 */
  push32(0x11d502c9u); f_11d45e10();
  /* 11d502c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d502cc push 2 */
  push32((uint32_t)(0x2u));
  /* 11d502ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d502d1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11d502d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d502d5 call 0x11d45e10 */
  push32(0x11d502dau); f_11d45e10();
  /* 11d502da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d502dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11d502df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d502e2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11d502e5 push eax */
  push32((uint32_t)(EAX));
  /* 11d502e6 call 0x11d45e10 */
  push32(0x11d502ebu); f_11d45e10();
  /* 11d502eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d502ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11d502f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d502f3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11d502f6 push edx */
  push32((uint32_t)(EDX));
  /* 11d502f7 call 0x11d45e10 */
  push32(0x11d502fcu); f_11d45e10();
  /* 11d502fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d502ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50304 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11d50307 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50308 call 0x11d45e10 */
  push32(0x11d5030du); f_11d45e10();
  /* 11d5030d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50310 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50315 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11d50318 push eax */
  push32((uint32_t)(EAX));
  /* 11d50319 call 0x11d45e10 */
  push32(0x11d5031eu); f_11d45e10();
  /* 11d5031e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50321 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50326 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11d50329 push edx */
  push32((uint32_t)(EDX));
  /* 11d5032a call 0x11d45e10 */
  push32(0x11d5032fu); f_11d45e10();
  /* 11d5032f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50332 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50337 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11d5033a push ecx */
  push32((uint32_t)(ECX));
  /* 11d5033b call 0x11d45e10 */
  push32(0x11d50340u); f_11d45e10();
  /* 11d50340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50343 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50348 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11d5034b push eax */
  push32((uint32_t)(EAX));
  /* 11d5034c call 0x11d45e10 */
  push32(0x11d50351u); f_11d45e10();
  /* 11d50351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50354 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50356 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50359 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11d5035c push edx */
  push32((uint32_t)(EDX));
  /* 11d5035d call 0x11d45e10 */
  push32(0x11d50362u); f_11d45e10();
  /* 11d50362 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50365 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5036a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11d5036d push ecx */
  push32((uint32_t)(ECX));
  /* 11d5036e call 0x11d45e10 */
  push32(0x11d50373u); f_11d45e10();
  /* 11d50373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50376 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50378 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5037b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11d5037e push eax */
  push32((uint32_t)(EAX));
  /* 11d5037f call 0x11d45e10 */
  push32(0x11d50384u); f_11d45e10();
  /* 11d50384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50387 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5038c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11d5038f push edx */
  push32((uint32_t)(EDX));
  /* 11d50390 call 0x11d45e10 */
  push32(0x11d50395u); f_11d45e10();
  /* 11d50395 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50398 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5039a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5039d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11d503a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d503a1 call 0x11d45e10 */
  push32(0x11d503a6u); f_11d45e10();
  /* 11d503a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d503a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d503ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d503ae mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11d503b1 push eax */
  push32((uint32_t)(EAX));
  /* 11d503b2 call 0x11d45e10 */
  push32(0x11d503b7u); f_11d45e10();
  /* 11d503b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d503ba push 2 */
  push32((uint32_t)(0x2u));
  /* 11d503bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d503bf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11d503c2 push edx */
  push32((uint32_t)(EDX));
  /* 11d503c3 call 0x11d45e10 */
  push32(0x11d503c8u); f_11d45e10();
  /* 11d503c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d503cb push 2 */
  push32((uint32_t)(0x2u));
  /* 11d503cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d503d0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11d503d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d503d4 call 0x11d45e10 */
  push32(0x11d503d9u); f_11d45e10();
  /* 11d503d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d503dc push 2 */
  push32((uint32_t)(0x2u));
  /* 11d503de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d503e1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11d503e4 push eax */
  push32((uint32_t)(EAX));
  /* 11d503e5 call 0x11d45e10 */
  push32(0x11d503eau); f_11d45e10();
  /* 11d503ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d503ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11d503ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d503f2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11d503f8 push edx */
  push32((uint32_t)(EDX));
  /* 11d503f9 call 0x11d45e10 */
  push32(0x11d503feu); f_11d45e10();
  /* 11d503fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50401 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50403 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50406 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11d5040c push ecx */
  push32((uint32_t)(ECX));
  /* 11d5040d call 0x11d45e10 */
  push32(0x11d50412u); f_11d45e10();
  /* 11d50412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50415 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50417 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5041a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11d50420 push eax */
  push32((uint32_t)(EAX));
  /* 11d50421 call 0x11d45e10 */
  push32(0x11d50426u); f_11d45e10();
  /* 11d50426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50429 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5042b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5042e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11d50434 push edx */
  push32((uint32_t)(EDX));
  /* 11d50435 call 0x11d45e10 */
  push32(0x11d5043au); f_11d45e10();
  /* 11d5043a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5043d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5043f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50442 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11d50448 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50449 call 0x11d45e10 */
  push32(0x11d5044eu); f_11d45e10();
  /* 11d5044e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50451 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50456 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11d5045c push eax */
  push32((uint32_t)(EAX));
  /* 11d5045d call 0x11d45e10 */
  push32(0x11d50462u); f_11d45e10();
  /* 11d50462 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50465 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50467 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5046a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11d50470 push edx */
  push32((uint32_t)(EDX));
  /* 11d50471 call 0x11d45e10 */
  push32(0x11d50476u); f_11d45e10();
  /* 11d50476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50479 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5047b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5047e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11d50484 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50485 call 0x11d45e10 */
  push32(0x11d5048au); f_11d45e10();
  /* 11d5048a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5048d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5048f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50492 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11d50498 push eax */
  push32((uint32_t)(EAX));
  /* 11d50499 call 0x11d45e10 */
  push32(0x11d5049eu); f_11d45e10();
  /* 11d5049e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d504a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d504a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d504a6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11d504ac push edx */
  push32((uint32_t)(EDX));
  /* 11d504ad call 0x11d45e10 */
  push32(0x11d504b2u); f_11d45e10();
  /* 11d504b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d504b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d504b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d504ba mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11d504c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d504c1 call 0x11d45e10 */
  push32(0x11d504c6u); f_11d45e10();
  /* 11d504c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d504c9:;
  /* 11d504c9 pop ebp */
  EBP = (pop32());
  /* 11d504ca ret  */
  ESPCHK(0x11d501c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100104d0 @ 0x11d504d0 (678 bytes, 180 insns) */
void f_11d504d0(void) {
  FTRACE(0x11d504d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d504d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d504d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d504d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d504d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d504dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d504df mov ax, word ptr [0x11d718b2] */
  AX = (r16((uint32_t)(0x11d718b2)));
  /* 11d504e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d504e8 cmp dword ptr [0x11d71858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d504ef je 0x11d5064a */
  if (C.zf) goto L_11d5064a;
  /* 11d504f5 push 0x11d71880 */
  push32((uint32_t)(0x11d71880u));
  /* 11d504fa push 0xe */
  push32((uint32_t)(0xeu));
  /* 11d504fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d504ff push ecx */
  push32((uint32_t)(ECX));
  /* 11d50500 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50502 call 0x11d53540 */
  push32(0x11d50507u); f_11d53540();
  /* 11d50507 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5050a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5050d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d5050f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d50512 push 0x11d71884 */
  push32((uint32_t)(0x11d71884u));
  /* 11d50517 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11d50519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5051c push eax */
  push32((uint32_t)(EAX));
  /* 11d5051d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5051f call 0x11d53540 */
  push32(0x11d50524u); f_11d53540();
  /* 11d50524 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50527 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5052a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5052c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d5052f push 0x11d71888 */
  push32((uint32_t)(0x11d71888u));
  /* 11d50534 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d50536 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50539 push edx */
  push32((uint32_t)(EDX));
  /* 11d5053a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5053c call 0x11d53540 */
  push32(0x11d50541u); f_11d53540();
  /* 11d50541 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50544 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50547 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50549 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d5054c mov edx, dword ptr [0x11d71888] */
  EDX = (r32((uint32_t)(0x11d71888)));
  /* 11d50552 push edx */
  push32((uint32_t)(EDX));
  /* 11d50553 call 0x11d50780 */
  push32(0x11d50558u); f_11d50780();
  /* 11d50558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5055b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5055f je 0x11d505b9 */
  if (C.zf) goto L_11d505b9;
  /* 11d50561 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50563 mov eax, dword ptr [0x11d71880] */
  EAX = (r32((uint32_t)(0x11d71880)));
  /* 11d50568 push eax */
  push32((uint32_t)(EAX));
  /* 11d50569 call 0x11d45e10 */
  push32(0x11d5056eu); f_11d45e10();
  /* 11d5056e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50571 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50573 mov ecx, dword ptr [0x11d71884] */
  ECX = (r32((uint32_t)(0x11d71884)));
  /* 11d50579 push ecx */
  push32((uint32_t)(ECX));
  /* 11d5057a call 0x11d45e10 */
  push32(0x11d5057fu); f_11d45e10();
  /* 11d5057f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50582 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50584 mov edx, dword ptr [0x11d71888] */
  EDX = (r32((uint32_t)(0x11d71888)));
  /* 11d5058a push edx */
  push32((uint32_t)(EDX));
  /* 11d5058b call 0x11d45e10 */
  push32(0x11d50590u); f_11d45e10();
  /* 11d50590 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50593 mov dword ptr [0x11d71880], 0 */
  w32((uint32_t)(0x11d71880), (0x0u));
  /* 11d5059d mov dword ptr [0x11d71884], 0 */
  w32((uint32_t)(0x11d71884), (0x0u));
  /* 11d505a7 mov dword ptr [0x11d71888], 0 */
  w32((uint32_t)(0x11d71888), (0x0u));
  /* 11d505b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d505b4 jmp 0x11d50772 */
  goto L_11d50772;
L_11d505b9:;
  /* 11d505b9 mov eax, dword ptr [0x11d70d88] */
  EAX = (r32((uint32_t)(0x11d70d88)));
  /* 11d505be cmp dword ptr [eax], 0x11d70d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11d70d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d505c4 je 0x11d50600 */
  if (C.zf) goto L_11d50600;
  /* 11d505c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d505c8 mov ecx, dword ptr [0x11d70d88] */
  ECX = (r32((uint32_t)(0x11d70d88)));
  /* 11d505ce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d505d0 push edx */
  push32((uint32_t)(EDX));
  /* 11d505d1 call 0x11d45e10 */
  push32(0x11d505d6u); f_11d45e10();
  /* 11d505d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d505d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d505db mov eax, dword ptr [0x11d70d88] */
  EAX = (r32((uint32_t)(0x11d70d88)));
  /* 11d505e0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d505e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d505e4 call 0x11d45e10 */
  push32(0x11d505e9u); f_11d45e10();
  /* 11d505e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d505ec push 2 */
  push32((uint32_t)(0x2u));
  /* 11d505ee mov edx, dword ptr [0x11d70d88] */
  EDX = (r32((uint32_t)(0x11d70d88)));
  /* 11d505f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d505f7 push eax */
  push32((uint32_t)(EAX));
  /* 11d505f8 call 0x11d45e10 */
  push32(0x11d505fdu); f_11d45e10();
  /* 11d505fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d50600:;
  /* 11d50600 mov ecx, dword ptr [0x11d70d88] */
  ECX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50606 mov edx, dword ptr [0x11d71880] */
  EDX = (r32((uint32_t)(0x11d71880)));
  /* 11d5060c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d5060e mov eax, dword ptr [0x11d70d88] */
  EAX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50613 mov ecx, dword ptr [0x11d71884] */
  ECX = (r32((uint32_t)(0x11d71884)));
  /* 11d50619 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d5061c mov edx, dword ptr [0x11d70d88] */
  EDX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50622 mov eax, dword ptr [0x11d71888] */
  EAX = (r32((uint32_t)(0x11d71888)));
  /* 11d50627 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d5062a mov ecx, dword ptr [0x11d70d88] */
  ECX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50630 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d50632 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d50634 mov byte ptr [0x11d6fea8], al */
  w8((uint32_t)(0x11d6fea8), (AL));
  /* 11d50639 mov dword ptr [0x11d6feac], 1 */
  w32((uint32_t)(0x11d6feac), (0x1u));
  /* 11d50643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d50645 jmp 0x11d50772 */
  goto L_11d50772;
L_11d5064a:;
  /* 11d5064a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5064c mov ecx, dword ptr [0x11d71880] */
  ECX = (r32((uint32_t)(0x11d71880)));
  /* 11d50652 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50653 call 0x11d45e10 */
  push32(0x11d50658u); f_11d45e10();
  /* 11d50658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5065b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5065d mov edx, dword ptr [0x11d71884] */
  EDX = (r32((uint32_t)(0x11d71884)));
  /* 11d50663 push edx */
  push32((uint32_t)(EDX));
  /* 11d50664 call 0x11d45e10 */
  push32(0x11d50669u); f_11d45e10();
  /* 11d50669 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5066c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5066e mov eax, dword ptr [0x11d71888] */
  EAX = (r32((uint32_t)(0x11d71888)));
  /* 11d50673 push eax */
  push32((uint32_t)(EAX));
  /* 11d50674 call 0x11d45e10 */
  push32(0x11d50679u); f_11d45e10();
  /* 11d50679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5067c mov dword ptr [0x11d71880], 0 */
  w32((uint32_t)(0x11d71880), (0x0u));
  /* 11d50686 mov dword ptr [0x11d71884], 0 */
  w32((uint32_t)(0x11d71884), (0x0u));
  /* 11d50690 mov dword ptr [0x11d71888], 0 */
  w32((uint32_t)(0x11d71888), (0x0u));
  /* 11d5069a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11d5069f push 0x11d6d344 */
  push32((uint32_t)(0x11d6d344u));
  /* 11d506a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d506a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d506a8 call 0x11d45380 */
  push32(0x11d506adu); f_11d45380();
  /* 11d506ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d506b0 mov ecx, dword ptr [0x11d70d88] */
  ECX = (r32((uint32_t)(0x11d70d88)));
  /* 11d506b6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d506b8 mov edx, dword ptr [0x11d70d88] */
  EDX = (r32((uint32_t)(0x11d70d88)));
  /* 11d506be cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d506c1 jne 0x11d506cb */
  if (!C.zf) goto L_11d506cb;
  /* 11d506c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d506c6 jmp 0x11d50772 */
  goto L_11d50772;
L_11d506cb:;
  /* 11d506cb push 0x11d6d314 */
  push32((uint32_t)(0x11d6d314u));
  /* 11d506d0 mov eax, dword ptr [0x11d70d88] */
  EAX = (r32((uint32_t)(0x11d70d88)));
  /* 11d506d5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d506d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d506d8 call 0x11d48330 */
  push32(0x11d506ddu); f_11d48330();
  /* 11d506dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d506e0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11d506e5 push 0x11d6d344 */
  push32((uint32_t)(0x11d6d344u));
  /* 11d506ea push 2 */
  push32((uint32_t)(0x2u));
  /* 11d506ec push 2 */
  push32((uint32_t)(0x2u));
  /* 11d506ee call 0x11d45380 */
  push32(0x11d506f3u); f_11d45380();
  /* 11d506f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d506f6 mov edx, dword ptr [0x11d70d88] */
  EDX = (r32((uint32_t)(0x11d70d88)));
  /* 11d506fc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11d506ff mov eax, dword ptr [0x11d70d88] */
  EAX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50704 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50708 jne 0x11d5070f */
  if (!C.zf) goto L_11d5070f;
  /* 11d5070a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d5070d jmp 0x11d50772 */
  goto L_11d50772;
L_11d5070f:;
  /* 11d5070f mov ecx, dword ptr [0x11d70d88] */
  ECX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50715 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d50718 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d5071b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11d50720 push 0x11d6d344 */
  push32((uint32_t)(0x11d6d344u));
  /* 11d50725 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50727 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50729 call 0x11d45380 */
  push32(0x11d5072eu); f_11d45380();
  /* 11d5072e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50731 mov ecx, dword ptr [0x11d70d88] */
  ECX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50737 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11d5073a mov edx, dword ptr [0x11d70d88] */
  EDX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50740 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50744 jne 0x11d5074b */
  if (!C.zf) goto L_11d5074b;
  /* 11d50746 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d50749 jmp 0x11d50772 */
  goto L_11d50772;
L_11d5074b:;
  /* 11d5074b mov eax, dword ptr [0x11d70d88] */
  EAX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50750 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d50753 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11d50756 mov edx, dword ptr [0x11d70d88] */
  EDX = (r32((uint32_t)(0x11d70d88)));
  /* 11d5075c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d5075e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d50760 mov byte ptr [0x11d6fea8], cl */
  w8((uint32_t)(0x11d6fea8), (CL));
  /* 11d50766 mov dword ptr [0x11d6feac], 1 */
  w32((uint32_t)(0x11d6feac), (0x1u));
  /* 11d50770 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d50772:;
  /* 11d50772 mov esp, ebp */
  ESP = (EBP);
  /* 11d50774 pop ebp */
  EBP = (pop32());
  /* 11d50775 ret  */
  ESPCHK(0x11d504d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11d50780 (125 bytes, 49 insns) */
void f_11d50780(void) {
  FTRACE(0x11d50780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d50780 push ebp */
  push32((uint32_t)(EBP));
  /* 11d50781 mov ebp, esp */
  EBP = (ESP);
  /* 11d50783 push ecx */
  push32((uint32_t)(ECX));
L_11d50784:;
  /* 11d50784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50787 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d5078a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d5078c je 0x11d507f9 */
  if (C.zf) goto L_11d507f9;
  /* 11d5078e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50791 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d50794 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50797 jl 0x11d507bd */
  if ((C.sf!=C.of)) goto L_11d507bd;
  /* 11d50799 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5079c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d5079f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d507a2 jg 0x11d507bd */
  if ((!C.zf&&C.sf==C.of)) goto L_11d507bd;
  /* 11d507a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d507a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d507aa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d507ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d507b0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11d507b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d507b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d507b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d507bb jmp 0x11d507f7 */
  goto L_11d507f7;
L_11d507bd:;
  /* 11d507bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d507c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d507c3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d507c6 jne 0x11d507ee */
  if (!C.zf) goto L_11d507ee;
  /* 11d507c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d507cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d507ce:;
  /* 11d507ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d507d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d507d4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d507d7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d507d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d507dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d507df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d507e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d507e5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d507e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d507ea jne 0x11d507ce */
  if (!C.zf) goto L_11d507ce;
  /* 11d507ec jmp 0x11d507f7 */
  goto L_11d507f7;
L_11d507ee:;
  /* 11d507ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d507f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d507f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11d507f7:;
  /* 11d507f7 jmp 0x11d50784 */
  goto L_11d50784;
L_11d507f9:;
  /* 11d507f9 mov esp, ebp */
  ESP = (EBP);
  /* 11d507fb pop ebp */
  EBP = (pop32());
  /* 11d507fc ret  */
  ESPCHK(0x11d50780u, _esp0);
  ESP += 4; return;
}

/* FUN_10010800 @ 0x11d50800 (304 bytes, 85 insns) */
void f_11d50800(void) {
  FTRACE(0x11d50800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d50800 push ebp */
  push32((uint32_t)(EBP));
  /* 11d50801 mov ebp, esp */
  EBP = (ESP);
  /* 11d50803 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50804 cmp dword ptr [0x11d71854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5080b je 0x11d508cc */
  if (C.zf) goto L_11d508cc;
  /* 11d50811 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11d50813 push 0x11d6d350 */
  push32((uint32_t)(0x11d6d350u));
  /* 11d50818 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5081a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d5081c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5081e call 0x11d45790 */
  push32(0x11d50823u); f_11d45790();
  /* 11d50823 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50826 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d50829 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5082d jne 0x11d50839 */
  if (!C.zf) goto L_11d50839;
  /* 11d5082f mov eax, 1 */
  EAX = (0x1u);
  /* 11d50834 jmp 0x11d5092c */
  goto L_11d5092c;
L_11d50839:;
  /* 11d50839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5083c push eax */
  push32((uint32_t)(EAX));
  /* 11d5083d call 0x11d50930 */
  push32(0x11d50842u); f_11d50930();
  /* 11d50842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d50847 je 0x11d5086d */
  if (C.zf) goto L_11d5086d;
  /* 11d50849 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5084c push ecx */
  push32((uint32_t)(ECX));
  /* 11d5084d call 0x11d50bc0 */
  push32(0x11d50852u); f_11d50bc0();
  /* 11d50852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50855 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50857 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5085a push edx */
  push32((uint32_t)(EDX));
  /* 11d5085b call 0x11d45e10 */
  push32(0x11d50860u); f_11d45e10();
  /* 11d50860 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50863 mov eax, 1 */
  EAX = (0x1u);
  /* 11d50868 jmp 0x11d5092c */
  goto L_11d5092c;
L_11d5086d:;
  /* 11d5086d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50870 mov ecx, dword ptr [0x11d70d88] */
  ECX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50876 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d50878 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d5087a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5087d mov ecx, dword ptr [0x11d70d88] */
  ECX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50883 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d50886 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d50889 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5088c mov ecx, dword ptr [0x11d70d88] */
  ECX = (r32((uint32_t)(0x11d70d88)));
  /* 11d50892 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d50895 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11d50898 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5089b mov dword ptr [0x11d70d88], eax */
  w32((uint32_t)(0x11d70d88), (EAX));
  /* 11d508a0 mov ecx, dword ptr [0x11d7188c] */
  ECX = (r32((uint32_t)(0x11d7188c)));
  /* 11d508a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d508a7 call 0x11d50bc0 */
  push32(0x11d508acu); f_11d50bc0();
  /* 11d508ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d508af push 2 */
  push32((uint32_t)(0x2u));
  /* 11d508b1 mov edx, dword ptr [0x11d7188c] */
  EDX = (r32((uint32_t)(0x11d7188c)));
  /* 11d508b7 push edx */
  push32((uint32_t)(EDX));
  /* 11d508b8 call 0x11d45e10 */
  push32(0x11d508bdu); f_11d45e10();
  /* 11d508bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d508c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d508c3 mov dword ptr [0x11d7188c], eax */
  w32((uint32_t)(0x11d7188c), (EAX));
  /* 11d508c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d508ca jmp 0x11d5092c */
  goto L_11d5092c;
L_11d508cc:;
  /* 11d508cc mov ecx, dword ptr [0x11d70d88] */
  ECX = (r32((uint32_t)(0x11d70d88)));
  /* 11d508d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d508d4 mov dword ptr [0x11d70d58], edx */
  w32((uint32_t)(0x11d70d58), (EDX));
  /* 11d508da mov eax, dword ptr [0x11d70d88] */
  EAX = (r32((uint32_t)(0x11d70d88)));
  /* 11d508df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d508e2 mov dword ptr [0x11d70d5c], ecx */
  w32((uint32_t)(0x11d70d5c), (ECX));
  /* 11d508e8 mov edx, dword ptr [0x11d70d88] */
  EDX = (r32((uint32_t)(0x11d70d88)));
  /* 11d508ee mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d508f1 mov dword ptr [0x11d70d60], eax */
  w32((uint32_t)(0x11d70d60), (EAX));
  /* 11d508f6 mov dword ptr [0x11d70d88], 0x11d70d58 */
  w32((uint32_t)(0x11d70d88), (0x11d70d58u));
  /* 11d50900 mov ecx, dword ptr [0x11d7188c] */
  ECX = (r32((uint32_t)(0x11d7188c)));
  /* 11d50906 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50907 call 0x11d50bc0 */
  push32(0x11d5090cu); f_11d50bc0();
  /* 11d5090c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5090f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50911 mov edx, dword ptr [0x11d7188c] */
  EDX = (r32((uint32_t)(0x11d7188c)));
  /* 11d50917 push edx */
  push32((uint32_t)(EDX));
  /* 11d50918 call 0x11d45e10 */
  push32(0x11d5091du); f_11d45e10();
  /* 11d5091d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50920 mov dword ptr [0x11d7188c], 0 */
  w32((uint32_t)(0x11d7188c), (0x0u));
  /* 11d5092a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d5092c:;
  /* 11d5092c mov esp, ebp */
  ESP = (EBP);
  /* 11d5092e pop ebp */
  EBP = (pop32());
  /* 11d5092f ret  */
  ESPCHK(0x11d50800u, _esp0);
  ESP += 4; return;
}

/* FUN_10010930 @ 0x11d50930 (525 bytes, 200 insns) */
void f_11d50930(void) {
  FTRACE(0x11d50930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d50930 push ebp */
  push32((uint32_t)(EBP));
  /* 11d50931 mov ebp, esp */
  EBP = (ESP);
  /* 11d50933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d50936 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d5093d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5093f mov ax, word ptr [0x11d718ac] */
  AX = (r16((uint32_t)(0x11d718ac)));
  /* 11d50945 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d50948 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5094c jne 0x11d50956 */
  if (!C.zf) goto L_11d50956;
  /* 11d5094e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d50951 jmp 0x11d50b39 */
  goto L_11d50b39;
L_11d50956:;
  /* 11d50956 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50959 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5095c push ecx */
  push32((uint32_t)(ECX));
  /* 11d5095d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11d5095f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50962 push edx */
  push32((uint32_t)(EDX));
  /* 11d50963 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50965 call 0x11d53540 */
  push32(0x11d5096au); f_11d53540();
  /* 11d5096a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5096d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50970 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50972 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50975 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50978 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5097b push edx */
  push32((uint32_t)(EDX));
  /* 11d5097c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11d5097e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50981 push eax */
  push32((uint32_t)(EAX));
  /* 11d50982 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50984 call 0x11d53540 */
  push32(0x11d50989u); f_11d53540();
  /* 11d50989 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5098c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5098f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50991 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50997 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5099a push edx */
  push32((uint32_t)(EDX));
  /* 11d5099b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11d5099d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d509a0 push eax */
  push32((uint32_t)(EAX));
  /* 11d509a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d509a3 call 0x11d53540 */
  push32(0x11d509a8u); f_11d53540();
  /* 11d509a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d509ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d509ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d509b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d509b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d509b6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d509b9 push edx */
  push32((uint32_t)(EDX));
  /* 11d509ba push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11d509bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d509bf push eax */
  push32((uint32_t)(EAX));
  /* 11d509c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d509c2 call 0x11d53540 */
  push32(0x11d509c7u); f_11d53540();
  /* 11d509c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d509ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d509cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d509cf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d509d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d509d5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d509d8 push edx */
  push32((uint32_t)(EDX));
  /* 11d509d9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11d509db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d509de push eax */
  push32((uint32_t)(EAX));
  /* 11d509df push 1 */
  push32((uint32_t)(0x1u));
  /* 11d509e1 call 0x11d53540 */
  push32(0x11d509e6u); f_11d53540();
  /* 11d509e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d509e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d509ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d509ee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d509f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d509f4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d509f7 push eax */
  push32((uint32_t)(EAX));
  /* 11d509f8 call 0x11d50b40 */
  push32(0x11d509fdu); f_11d50b40();
  /* 11d509fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50a03 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a06 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50a07 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11d50a09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50a0c push edx */
  push32((uint32_t)(EDX));
  /* 11d50a0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50a0f call 0x11d53540 */
  push32(0x11d50a14u); f_11d53540();
  /* 11d50a14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50a1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50a1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50a1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50a22 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a25 push edx */
  push32((uint32_t)(EDX));
  /* 11d50a26 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11d50a28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50a2b push eax */
  push32((uint32_t)(EAX));
  /* 11d50a2c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50a2e call 0x11d53540 */
  push32(0x11d50a33u); f_11d53540();
  /* 11d50a33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50a39 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50a3b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50a3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50a41 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a44 push edx */
  push32((uint32_t)(EDX));
  /* 11d50a45 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11d50a47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50a4a push eax */
  push32((uint32_t)(EAX));
  /* 11d50a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50a4d call 0x11d53540 */
  push32(0x11d50a52u); f_11d53540();
  /* 11d50a52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50a58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50a5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50a5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50a60 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a63 push edx */
  push32((uint32_t)(EDX));
  /* 11d50a64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d50a66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50a69 push eax */
  push32((uint32_t)(EAX));
  /* 11d50a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50a6c call 0x11d53540 */
  push32(0x11d50a71u); f_11d53540();
  /* 11d50a71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50a77 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50a79 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50a7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50a7f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a82 push edx */
  push32((uint32_t)(EDX));
  /* 11d50a83 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11d50a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50a88 push eax */
  push32((uint32_t)(EAX));
  /* 11d50a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50a8b call 0x11d53540 */
  push32(0x11d50a90u); f_11d53540();
  /* 11d50a90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50a93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50a96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50a98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50a9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50a9e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50aa1 push edx */
  push32((uint32_t)(EDX));
  /* 11d50aa2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11d50aa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50aa7 push eax */
  push32((uint32_t)(EAX));
  /* 11d50aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50aaa call 0x11d53540 */
  push32(0x11d50aafu); f_11d53540();
  /* 11d50aaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50ab2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50ab5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50ab7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50aba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50abd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50ac0 push edx */
  push32((uint32_t)(EDX));
  /* 11d50ac1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11d50ac3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50ac6 push eax */
  push32((uint32_t)(EAX));
  /* 11d50ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50ac9 call 0x11d53540 */
  push32(0x11d50aceu); f_11d53540();
  /* 11d50ace add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50ad1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50ad4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50ad6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50ad9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50adc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50adf push edx */
  push32((uint32_t)(EDX));
  /* 11d50ae0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11d50ae2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50ae5 push eax */
  push32((uint32_t)(EAX));
  /* 11d50ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50ae8 call 0x11d53540 */
  push32(0x11d50aedu); f_11d53540();
  /* 11d50aed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50af0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50af3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50af5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50af8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50afb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50afe push edx */
  push32((uint32_t)(EDX));
  /* 11d50aff push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11d50b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50b04 push eax */
  push32((uint32_t)(EAX));
  /* 11d50b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50b07 call 0x11d53540 */
  push32(0x11d50b0cu); f_11d53540();
  /* 11d50b0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50b0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50b12 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50b14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50b17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50b1a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50b1d push edx */
  push32((uint32_t)(EDX));
  /* 11d50b1e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11d50b20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50b23 push eax */
  push32((uint32_t)(EAX));
  /* 11d50b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50b26 call 0x11d53540 */
  push32(0x11d50b2bu); f_11d53540();
  /* 11d50b2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50b2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d50b31 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50b33 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d50b36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d50b39:;
  /* 11d50b39 mov esp, ebp */
  ESP = (EBP);
  /* 11d50b3b pop ebp */
  EBP = (pop32());
  /* 11d50b3c ret  */
  ESPCHK(0x11d50930u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11d50b40 (125 bytes, 49 insns) */
void f_11d50b40(void) {
  FTRACE(0x11d50b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d50b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d50b41 mov ebp, esp */
  EBP = (ESP);
  /* 11d50b43 push ecx */
  push32((uint32_t)(ECX));
L_11d50b44:;
  /* 11d50b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50b47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d50b4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d50b4c je 0x11d50bb9 */
  if (C.zf) goto L_11d50bb9;
  /* 11d50b4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50b51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d50b54 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50b57 jl 0x11d50b7d */
  if ((C.sf!=C.of)) goto L_11d50b7d;
  /* 11d50b59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50b5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d50b5f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50b62 jg 0x11d50b7d */
  if ((!C.zf&&C.sf==C.of)) goto L_11d50b7d;
  /* 11d50b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50b67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d50b6a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d50b6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50b70 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11d50b72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50b75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50b78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d50b7b jmp 0x11d50bb7 */
  goto L_11d50bb7;
L_11d50b7d:;
  /* 11d50b7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50b80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d50b83 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50b86 jne 0x11d50bae */
  if (!C.zf) goto L_11d50bae;
  /* 11d50b88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50b8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d50b8e:;
  /* 11d50b8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50b91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50b94 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d50b97 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d50b99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50b9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50b9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d50ba2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d50ba5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d50ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d50baa jne 0x11d50b8e */
  if (!C.zf) goto L_11d50b8e;
  /* 11d50bac jmp 0x11d50bb7 */
  goto L_11d50bb7;
L_11d50bae:;
  /* 11d50bae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50bb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50bb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11d50bb7:;
  /* 11d50bb7 jmp 0x11d50b44 */
  goto L_11d50b44;
L_11d50bb9:;
  /* 11d50bb9 mov esp, ebp */
  ESP = (EBP);
  /* 11d50bbb pop ebp */
  EBP = (pop32());
  /* 11d50bbc ret  */
  ESPCHK(0x11d50b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bc0 @ 0x11d50bc0 (147 bytes, 52 insns) */
void f_11d50bc0(void) {
  FTRACE(0x11d50bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d50bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d50bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d50bc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50bc7 jne 0x11d50bce */
  if (!C.zf) goto L_11d50bce;
  /* 11d50bc9 jmp 0x11d50c51 */
  goto L_11d50c51;
L_11d50bce:;
  /* 11d50bce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50bd1 cmp dword ptr [eax + 0xc], 0x11d718e8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11d718e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50bd8 je 0x11d50c51 */
  if (C.zf) goto L_11d50c51;
  /* 11d50bda push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50bdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50bdf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d50be2 push edx */
  push32((uint32_t)(EDX));
  /* 11d50be3 call 0x11d45e10 */
  push32(0x11d50be8u); f_11d45e10();
  /* 11d50be8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50beb push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50bed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50bf0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d50bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50bf4 call 0x11d45e10 */
  push32(0x11d50bf9u); f_11d45e10();
  /* 11d50bf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50bfc push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50bfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50c01 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d50c04 push eax */
  push32((uint32_t)(EAX));
  /* 11d50c05 call 0x11d45e10 */
  push32(0x11d50c0au); f_11d45e10();
  /* 11d50c0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50c0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50c12 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d50c15 push edx */
  push32((uint32_t)(EDX));
  /* 11d50c16 call 0x11d45e10 */
  push32(0x11d50c1bu); f_11d45e10();
  /* 11d50c1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50c1e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50c20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50c23 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d50c26 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50c27 call 0x11d45e10 */
  push32(0x11d50c2cu); f_11d45e10();
  /* 11d50c2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50c2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50c31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50c34 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11d50c37 push eax */
  push32((uint32_t)(EAX));
  /* 11d50c38 call 0x11d45e10 */
  push32(0x11d50c3du); f_11d45e10();
  /* 11d50c3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50c40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50c42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d50c45 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11d50c48 push edx */
  push32((uint32_t)(EDX));
  /* 11d50c49 call 0x11d45e10 */
  push32(0x11d50c4eu); f_11d45e10();
  /* 11d50c4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d50c51:;
  /* 11d50c51 pop ebp */
  EBP = (pop32());
  /* 11d50c52 ret  */
  ESPCHK(0x11d50bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c60 @ 0x11d50c60 (928 bytes, 284 insns) */
void f_11d50c60(void) {
  FTRACE(0x11d50c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d50c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d50c61 mov ebp, esp */
  EBP = (ESP);
  /* 11d50c63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d50c66 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11d50c6d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11d50c74 cmp dword ptr [0x11d71850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50c7b je 0x11d50fb1 */
  if (C.zf) goto L_11d50fb1;
  /* 11d50c81 cmp dword ptr [0x11d71860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50c88 jne 0x11d50cb0 */
  if (!C.zf) goto L_11d50cb0;
  /* 11d50c8a push 0x11d71860 */
  push32((uint32_t)(0x11d71860u));
  /* 11d50c8f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11d50c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d50c96 mov ax, word ptr [0x11d718a4] */
  AX = (r16((uint32_t)(0x11d718a4)));
  /* 11d50c9c push eax */
  push32((uint32_t)(EAX));
  /* 11d50c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50c9f call 0x11d53540 */
  push32(0x11d50ca4u); f_11d53540();
  /* 11d50ca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d50ca9 je 0x11d50cb0 */
  if (C.zf) goto L_11d50cb0;
  /* 11d50cab jmp 0x11d50f72 */
  goto L_11d50f72;
L_11d50cb0:;
  /* 11d50cb0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11d50cb2 push 0x11d6d35c */
  push32((uint32_t)(0x11d6d35cu));
  /* 11d50cb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50cb9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11d50cbe call 0x11d45380 */
  push32(0x11d50cc3u); f_11d45380();
  /* 11d50cc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50cc6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11d50cc9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11d50ccb push 0x11d6d35c */
  push32((uint32_t)(0x11d6d35cu));
  /* 11d50cd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50cd2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11d50cd7 call 0x11d45380 */
  push32(0x11d50cdcu); f_11d45380();
  /* 11d50cdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50cdf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d50ce2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11d50ce4 push 0x11d6d35c */
  push32((uint32_t)(0x11d6d35cu));
  /* 11d50ce9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50ceb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11d50cf0 call 0x11d45380 */
  push32(0x11d50cf5u); f_11d45380();
  /* 11d50cf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50cf8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11d50cfb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11d50cfd push 0x11d6d35c */
  push32((uint32_t)(0x11d6d35cu));
  /* 11d50d02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50d04 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11d50d09 call 0x11d45380 */
  push32(0x11d50d0eu); f_11d45380();
  /* 11d50d0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50d11 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d50d14 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50d18 je 0x11d50d2c */
  if (C.zf) goto L_11d50d2c;
  /* 11d50d1a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50d1e je 0x11d50d2c */
  if (C.zf) goto L_11d50d2c;
  /* 11d50d20 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50d24 je 0x11d50d2c */
  if (C.zf) goto L_11d50d2c;
  /* 11d50d26 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50d2a jne 0x11d50d31 */
  if (!C.zf) goto L_11d50d31;
L_11d50d2c:;
  /* 11d50d2c jmp 0x11d50f72 */
  goto L_11d50f72;
L_11d50d31:;
  /* 11d50d31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d50d34 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d50d37 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d50d3e jmp 0x11d50d49 */
  goto L_11d50d49;
L_11d50d40:;
  /* 11d50d40 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d50d43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50d46 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11d50d49:;
  /* 11d50d49 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50d50 jge 0x11d50d65 */
  if ((C.sf==C.of)) goto L_11d50d65;
  /* 11d50d52 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50d55 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11d50d58 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d50d5a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50d5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50d60 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d50d63 jmp 0x11d50d40 */
  goto L_11d50d40;
L_11d50d65:;
  /* 11d50d65 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11d50d68 push eax */
  push32((uint32_t)(EAX));
  /* 11d50d69 mov ecx, dword ptr [0x11d71860] */
  ECX = (r32((uint32_t)(0x11d71860)));
  /* 11d50d6f push ecx */
  push32((uint32_t)(ECX));
  /* 11d50d70 call dword ptr [0x11d74344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74344))), 0x11d50d76u);
  /* 11d50d76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d50d78 jne 0x11d50d7f */
  if (!C.zf) goto L_11d50d7f;
  /* 11d50d7a jmp 0x11d50f72 */
  goto L_11d50f72;
L_11d50d7f:;
  /* 11d50d7f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50d83 jbe 0x11d50d8a */
  if ((C.cf||C.zf)) goto L_11d50d8a;
  /* 11d50d85 jmp 0x11d50f72 */
  goto L_11d50f72;
L_11d50d8a:;
  /* 11d50d8a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d50d8d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d50d93 mov dword ptr [0x11d6fea4], edx */
  w32((uint32_t)(0x11d6fea4), (EDX));
  /* 11d50d99 cmp dword ptr [0x11d6fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50da0 jle 0x11d50df9 */
  if ((C.zf||C.sf!=C.of)) goto L_11d50df9;
  /* 11d50da2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11d50da5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d50da8 jmp 0x11d50db3 */
  goto L_11d50db3;
L_11d50daa:;
  /* 11d50daa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50dad add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50db0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11d50db3:;
  /* 11d50db3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50db6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d50db8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d50dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d50dbc je 0x11d50df9 */
  if (C.zf) goto L_11d50df9;
  /* 11d50dbe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50dc1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d50dc3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11d50dc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d50dc8 je 0x11d50df9 */
  if (C.zf) goto L_11d50df9;
  /* 11d50dca mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50dcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50dcf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d50dd1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d50dd4 jmp 0x11d50ddf */
  goto L_11d50ddf;
L_11d50dd6:;
  /* 11d50dd6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d50dd9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50ddc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11d50ddf:;
  /* 11d50ddf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50de2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50de4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d50de7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50dea jg 0x11d50df7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d50df7;
  /* 11d50dec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d50def add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50df2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d50df5 jmp 0x11d50dd6 */
  goto L_11d50dd6;
L_11d50df7:;
  /* 11d50df7 jmp 0x11d50daa */
  goto L_11d50daa;
L_11d50df9:;
  /* 11d50df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50dff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d50e02 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50e05 push eax */
  push32((uint32_t)(EAX));
  /* 11d50e06 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d50e0b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d50e0e push ecx */
  push32((uint32_t)(ECX));
  /* 11d50e0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50e11 call 0x11d4d5b0 */
  push32(0x11d50e16u); f_11d4d5b0();
  /* 11d50e16 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d50e1b jne 0x11d50e22 */
  if (!C.zf) goto L_11d50e22;
  /* 11d50e1d jmp 0x11d50f72 */
  goto L_11d50f72;
L_11d50e22:;
  /* 11d50e22 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d50e25 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11d50e2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d50e2d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d50e30 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d50e37 jmp 0x11d50e42 */
  goto L_11d50e42;
L_11d50e39:;
  /* 11d50e39 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d50e3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50e3f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11d50e42:;
  /* 11d50e42 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50e49 jge 0x11d50e60 */
  if ((C.sf==C.of)) goto L_11d50e60;
  /* 11d50e4b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d50e4e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11d50e52 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11d50e55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d50e58 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50e5b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d50e5e jmp 0x11d50e39 */
  goto L_11d50e39;
L_11d50e60:;
  /* 11d50e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d50e64 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d50e67 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50e6a push edx */
  push32((uint32_t)(EDX));
  /* 11d50e6b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d50e70 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d50e73 push eax */
  push32((uint32_t)(EAX));
  /* 11d50e74 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d50e76 call 0x11d537e0 */
  push32(0x11d50e7bu); f_11d537e0();
  /* 11d50e7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50e7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d50e80 jne 0x11d50e87 */
  if (!C.zf) goto L_11d50e87;
  /* 11d50e82 jmp 0x11d50f72 */
  goto L_11d50f72;
L_11d50e87:;
  /* 11d50e87 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d50e8a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11d50e8f cmp dword ptr [0x11d6fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50e96 jle 0x11d50ef3 */
  if ((C.zf||C.sf!=C.of)) goto L_11d50ef3;
  /* 11d50e98 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11d50e9b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d50e9e jmp 0x11d50ea9 */
  goto L_11d50ea9;
L_11d50ea0:;
  /* 11d50ea0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50ea3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50ea6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11d50ea9:;
  /* 11d50ea9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50eac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d50eae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d50eb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d50eb2 je 0x11d50ef3 */
  if (C.zf) goto L_11d50ef3;
  /* 11d50eb4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50eb7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d50eb9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d50ebc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d50ebe je 0x11d50ef3 */
  if (C.zf) goto L_11d50ef3;
  /* 11d50ec0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50ec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d50ec5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d50ec7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d50eca jmp 0x11d50ed5 */
  goto L_11d50ed5;
L_11d50ecc:;
  /* 11d50ecc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d50ecf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50ed2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11d50ed5:;
  /* 11d50ed5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d50ed8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d50eda mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d50edd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50ee0 jg 0x11d50ef1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d50ef1;
  /* 11d50ee2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d50ee5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d50ee8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11d50eef jmp 0x11d50ecc */
  goto L_11d50ecc;
L_11d50ef1:;
  /* 11d50ef1 jmp 0x11d50ea0 */
  goto L_11d50ea0;
L_11d50ef3:;
  /* 11d50ef3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d50ef6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50ef9 mov dword ptr [0x11d6fc98], eax */
  w32((uint32_t)(0x11d6fc98), (EAX));
  /* 11d50efe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d50f01 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50f04 mov dword ptr [0x11d6fc9c], ecx */
  w32((uint32_t)(0x11d6fc9c), (ECX));
  /* 11d50f0a cmp dword ptr [0x11d71890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50f11 je 0x11d50f24 */
  if (C.zf) goto L_11d50f24;
  /* 11d50f13 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50f15 mov edx, dword ptr [0x11d71890] */
  EDX = (r32((uint32_t)(0x11d71890)));
  /* 11d50f1b push edx */
  push32((uint32_t)(EDX));
  /* 11d50f1c call 0x11d45e10 */
  push32(0x11d50f21u); f_11d45e10();
  /* 11d50f21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d50f24:;
  /* 11d50f24 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d50f27 mov dword ptr [0x11d71890], eax */
  w32((uint32_t)(0x11d71890), (EAX));
  /* 11d50f2c cmp dword ptr [0x11d71894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d50f33 je 0x11d50f46 */
  if (C.zf) goto L_11d50f46;
  /* 11d50f35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50f37 mov ecx, dword ptr [0x11d71894] */
  ECX = (r32((uint32_t)(0x11d71894)));
  /* 11d50f3d push ecx */
  push32((uint32_t)(ECX));
  /* 11d50f3e call 0x11d45e10 */
  push32(0x11d50f43u); f_11d45e10();
  /* 11d50f43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d50f46:;
  /* 11d50f46 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d50f49 mov dword ptr [0x11d71894], edx */
  w32((uint32_t)(0x11d71894), (EDX));
  /* 11d50f4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50f51 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d50f54 push eax */
  push32((uint32_t)(EAX));
  /* 11d50f55 call 0x11d45e10 */
  push32(0x11d50f5au); f_11d45e10();
  /* 11d50f5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50f5d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50f5f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d50f62 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50f63 call 0x11d45e10 */
  push32(0x11d50f68u); f_11d45e10();
  /* 11d50f68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50f6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d50f6d jmp 0x11d50ffc */
  goto L_11d50ffc;
L_11d50f72:;
  /* 11d50f72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50f74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d50f77 push edx */
  push32((uint32_t)(EDX));
  /* 11d50f78 call 0x11d45e10 */
  push32(0x11d50f7du); f_11d45e10();
  /* 11d50f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50f80 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50f82 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d50f85 push eax */
  push32((uint32_t)(EAX));
  /* 11d50f86 call 0x11d45e10 */
  push32(0x11d50f8bu); f_11d45e10();
  /* 11d50f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50f8e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50f90 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d50f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11d50f94 call 0x11d45e10 */
  push32(0x11d50f99u); f_11d45e10();
  /* 11d50f99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50f9c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50f9e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d50fa1 push edx */
  push32((uint32_t)(EDX));
  /* 11d50fa2 call 0x11d45e10 */
  push32(0x11d50fa7u); f_11d45e10();
  /* 11d50fa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50faa mov eax, 1 */
  EAX = (0x1u);
  /* 11d50faf jmp 0x11d50ffc */
  goto L_11d50ffc;
L_11d50fb1:;
  /* 11d50fb1 mov dword ptr [0x11d6fc98], 0x11d6fca2 */
  w32((uint32_t)(0x11d6fc98), (0x11d6fca2u));
  /* 11d50fbb mov dword ptr [0x11d6fc9c], 0x11d6fca2 */
  w32((uint32_t)(0x11d6fc9c), (0x11d6fca2u));
  /* 11d50fc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50fc7 mov eax, dword ptr [0x11d71890] */
  EAX = (r32((uint32_t)(0x11d71890)));
  /* 11d50fcc push eax */
  push32((uint32_t)(EAX));
  /* 11d50fcd call 0x11d45e10 */
  push32(0x11d50fd2u); f_11d45e10();
  /* 11d50fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50fd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d50fd7 mov ecx, dword ptr [0x11d71894] */
  ECX = (r32((uint32_t)(0x11d71894)));
  /* 11d50fdd push ecx */
  push32((uint32_t)(ECX));
  /* 11d50fde call 0x11d45e10 */
  push32(0x11d50fe3u); f_11d45e10();
  /* 11d50fe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d50fe6 mov dword ptr [0x11d71890], 0 */
  w32((uint32_t)(0x11d71890), (0x0u));
  /* 11d50ff0 mov dword ptr [0x11d71894], 0 */
  w32((uint32_t)(0x11d71894), (0x0u));
  /* 11d50ffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d50ffc:;
  /* 11d50ffc mov esp, ebp */
  ESP = (EBP);
  /* 11d50ffe pop ebp */
  EBP = (pop32());
  /* 11d50fff ret  */
  ESPCHK(0x11d50c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011000 @ 0x11d51000 (7 bytes, 5 insns) */
void f_11d51000(void) {
  FTRACE(0x11d51000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51000 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51001 mov ebp, esp */
  EBP = (ESP);
  /* 11d51003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d51005 pop ebp */
  EBP = (pop32());
  /* 11d51006 ret  */
  ESPCHK(0x11d51000u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11d51010 (129 bytes, 56 insns) */
void f_11d51010(void) {
  FTRACE(0x11d51010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51010 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d51014 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d51018 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11d5101e jne 0x11d5105c */
  if (!C.zf) goto L_11d5105c;
L_11d51020:;
  /* 11d51020 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d51022 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d51024 jne 0x11d51054 */
  if (!C.zf) goto L_11d51054;
  /* 11d51026 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d51028 je 0x11d51050 */
  if (C.zf) goto L_11d51050;
  /* 11d5102a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d5102d jne 0x11d51054 */
  if (!C.zf) goto L_11d51054;
  /* 11d5102f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d51031 je 0x11d51050 */
  if (C.zf) goto L_11d51050;
  /* 11d51033 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d51036 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d51039 jne 0x11d51054 */
  if (!C.zf) goto L_11d51054;
  /* 11d5103b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d5103d je 0x11d51050 */
  if (C.zf) goto L_11d51050;
  /* 11d5103f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d51042 jne 0x11d51054 */
  if (!C.zf) goto L_11d51054;
  /* 11d51044 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51047 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5104a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d5104c jne 0x11d51020 */
  if (!C.zf) goto L_11d51020;
  /* 11d5104e mov edi, edi */
  EDI = (EDI);
L_11d51050:;
  /* 11d51050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d51052 ret  */
  ESPCHK(0x11d51010u, _esp0);
  ESP += 4; return;
  /* 11d51053 nop  */
  /* nop */
L_11d51054:;
  /* 11d51054 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51056 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d51058 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d51059 ret  */
  ESPCHK(0x11d51010u, _esp0);
  ESP += 4; return;
  /* 11d5105a mov edi, edi */
  EDI = (EDI);
L_11d5105c:;
  /* 11d5105c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11d51062 je 0x11d51078 */
  if (C.zf) goto L_11d51078;
  /* 11d51064 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d51066 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d51067 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d51069 jne 0x11d51054 */
  if (!C.zf) goto L_11d51054;
  /* 11d5106b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d5106c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d5106e je 0x11d51050 */
  if (C.zf) goto L_11d51050;
  /* 11d51070 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11d51076 je 0x11d51020 */
  if (C.zf) goto L_11d51020;
L_11d51078:;
  /* 11d51078 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11d5107b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5107e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d51080 jne 0x11d51054 */
  if (!C.zf) goto L_11d51054;
  /* 11d51082 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d51084 je 0x11d51050 */
  if (C.zf) goto L_11d51050;
  /* 11d51086 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d51089 jne 0x11d51054 */
  if (!C.zf) goto L_11d51054;
  /* 11d5108b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d5108d je 0x11d51050 */
  if (C.zf) goto L_11d51050;
  /* 11d5108f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51092 jmp 0x11d51020 */
  goto L_11d51020;
}

/* FUN_100110a0 @ 0x11d510a0 (62 bytes, 35 insns) */
void f_11d510a0(void) {
  FTRACE(0x11d510a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d510a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d510a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d510a3 push esi */
  push32((uint32_t)(ESI));
  /* 11d510a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d510a6 push eax */
  push32((uint32_t)(EAX));
  /* 11d510a7 push eax */
  push32((uint32_t)(EAX));
  /* 11d510a8 push eax */
  push32((uint32_t)(EAX));
  /* 11d510a9 push eax */
  push32((uint32_t)(EAX));
  /* 11d510aa push eax */
  push32((uint32_t)(EAX));
  /* 11d510ab push eax */
  push32((uint32_t)(EAX));
  /* 11d510ac push eax */
  push32((uint32_t)(EAX));
  /* 11d510ad push eax */
  push32((uint32_t)(EAX));
  /* 11d510ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d510b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d510b4:;
  /* 11d510b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d510b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d510b8 je 0x11d510c1 */
  if (C.zf) goto L_11d510c1;
  /* 11d510ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d510bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11d510bb");
  /* 11d510bf jmp 0x11d510b4 */
  goto L_11d510b4;
L_11d510c1:;
  /* 11d510c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d510c4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d510c7 nop  */
  /* nop */
L_11d510c8:;
  /* 11d510c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d510c9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d510cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d510cd je 0x11d510d6 */
  if (C.zf) goto L_11d510d6;
  /* 11d510cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d510d0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11d510d0");
  /* 11d510d4 jae 0x11d510c8 */
  if (!C.cf) goto L_11d510c8;
L_11d510d6:;
  /* 11d510d6 mov eax, ecx */
  EAX = (ECX);
  /* 11d510d8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d510db pop esi */
  ESI = (pop32());
  /* 11d510dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d510dd ret  */
  ESPCHK(0x11d510a0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11d510e0 (56 bytes, 31 insns) */
void f_11d510e0(void) {
  FTRACE(0x11d510e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d510e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d510e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d510e3 push edi */
  push32((uint32_t)(EDI));
  /* 11d510e4 push esi */
  push32((uint32_t)(ESI));
  /* 11d510e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11d510e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d510e9 jecxz 0x11d51111 */
  x86_unimpl("jecxz @ 0x11d510e9");
  /* 11d510eb mov ebx, ecx */
  EBX = (ECX);
  /* 11d510ed mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d510f0 mov esi, edi */
  ESI = (EDI);
  /* 11d510f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d510f4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11d510f6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d510f8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d510fa mov edi, esi */
  EDI = (ESI);
  /* 11d510fc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d510ff repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11d51101 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11d51104 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d51106 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d51109 ja 0x11d5110f */
  if ((!C.cf&&!C.zf)) goto L_11d5110f;
  /* 11d5110b je 0x11d51111 */
  if (C.zf) goto L_11d51111;
  /* 11d5110d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d5110e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11d5110f:;
  /* 11d5110f not ecx */
  ECX = (~(ECX));
L_11d51111:;
  /* 11d51111 mov eax, ecx */
  EAX = (ECX);
  /* 11d51113 pop ebx */
  EBX = (pop32());
  /* 11d51114 pop esi */
  ESI = (pop32());
  /* 11d51115 pop edi */
  EDI = (pop32());
  /* 11d51116 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d51117 ret  */
  ESPCHK(0x11d510e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011120 @ 0x11d51120 (58 bytes, 32 insns) */
void f_11d51120(void) {
  FTRACE(0x11d51120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51120 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51121 mov ebp, esp */
  EBP = (ESP);
  /* 11d51123 push esi */
  push32((uint32_t)(ESI));
  /* 11d51124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d51126 push eax */
  push32((uint32_t)(EAX));
  /* 11d51127 push eax */
  push32((uint32_t)(EAX));
  /* 11d51128 push eax */
  push32((uint32_t)(EAX));
  /* 11d51129 push eax */
  push32((uint32_t)(EAX));
  /* 11d5112a push eax */
  push32((uint32_t)(EAX));
  /* 11d5112b push eax */
  push32((uint32_t)(EAX));
  /* 11d5112c push eax */
  push32((uint32_t)(EAX));
  /* 11d5112d push eax */
  push32((uint32_t)(EAX));
  /* 11d5112e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d51131 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d51134:;
  /* 11d51134 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d51136 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d51138 je 0x11d51141 */
  if (C.zf) goto L_11d51141;
  /* 11d5113a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d5113b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11d5113b");
  /* 11d5113f jmp 0x11d51134 */
  goto L_11d51134;
L_11d51141:;
  /* 11d51141 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11d51144:;
  /* 11d51144 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d51146 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d51148 je 0x11d51154 */
  if (C.zf) goto L_11d51154;
  /* 11d5114a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d5114b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11d5114b");
  /* 11d5114f jae 0x11d51144 */
  if (!C.cf) goto L_11d51144;
  /* 11d51151 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11d51154:;
  /* 11d51154 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51157 pop esi */
  ESI = (pop32());
  /* 11d51158 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d51159 ret  */
  ESPCHK(0x11d51120u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x11d51160 (512 bytes, 147 insns) */
void f_11d51160(void) {
  FTRACE(0x11d51160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51160 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51161 mov ebp, esp */
  EBP = (ESP);
  /* 11d51163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51166 cmp dword ptr [0x11d718dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5116d jne 0x11d51192 */
  if (!C.zf) goto L_11d51192;
  /* 11d5116f call 0x11d51c30 */
  push32(0x11d51174u); f_11d51c30();
  /* 11d51174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51176 je 0x11d51182 */
  if (C.zf) goto L_11d51182;
  /* 11d51178 mov eax, dword ptr [0x11d74308] */
  EAX = (r32((uint32_t)(0x11d74308)));
  /* 11d5117d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d51180 jmp 0x11d51189 */
  goto L_11d51189;
L_11d51182:;
  /* 11d51182 mov dword ptr [ebp - 8], 0x11d51c80 */
  w32((uint32_t)(EBP + -0x8), (0x11d51c80u));
L_11d51189:;
  /* 11d51189 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5118c mov dword ptr [0x11d718dc], ecx */
  w32((uint32_t)(0x11d718dc), (ECX));
L_11d51192:;
  /* 11d51192 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51196 jne 0x11d511a2 */
  if (!C.zf) goto L_11d511a2;
  /* 11d51198 call 0x11d51a80 */
  push32(0x11d5119du); f_11d51a80();
  /* 11d5119d jmp 0x11d5126e */
  goto L_11d5126e;
L_11d511a2:;
  /* 11d511a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d511a5 mov dword ptr [0x11d718cc], edx */
  w32((uint32_t)(0x11d718cc), (EDX));
  /* 11d511ab cmp dword ptr [0x11d718cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d511b2 je 0x11d511d4 */
  if (C.zf) goto L_11d511d4;
  /* 11d511b4 mov eax, dword ptr [0x11d718cc] */
  EAX = (r32((uint32_t)(0x11d718cc)));
  /* 11d511b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d511bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d511be je 0x11d511d4 */
  if (C.zf) goto L_11d511d4;
  /* 11d511c0 push 0x11d718cc */
  push32((uint32_t)(0x11d718ccu));
  /* 11d511c5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d511c7 push 0x11d70a90 */
  push32((uint32_t)(0x11d70a90u));
  /* 11d511cc call 0x11d51360 */
  push32(0x11d511d1u); f_11d51360();
  /* 11d511d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d511d4:;
  /* 11d511d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d511d7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d511da mov dword ptr [0x11d718d0], edx */
  w32((uint32_t)(0x11d718d0), (EDX));
  /* 11d511e0 cmp dword ptr [0x11d718d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d511e7 je 0x11d51209 */
  if (C.zf) goto L_11d51209;
  /* 11d511e9 mov eax, dword ptr [0x11d718d0] */
  EAX = (r32((uint32_t)(0x11d718d0)));
  /* 11d511ee movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d511f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d511f3 je 0x11d51209 */
  if (C.zf) goto L_11d51209;
  /* 11d511f5 push 0x11d718d0 */
  push32((uint32_t)(0x11d718d0u));
  /* 11d511fa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11d511fc push 0x11d709d8 */
  push32((uint32_t)(0x11d709d8u));
  /* 11d51201 call 0x11d51360 */
  push32(0x11d51206u); f_11d51360();
  /* 11d51206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d51209:;
  /* 11d51209 mov dword ptr [0x11d718d4], 0 */
  w32((uint32_t)(0x11d718d4), (0x0u));
  /* 11d51213 cmp dword ptr [0x11d718cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5121a je 0x11d5124d */
  if (C.zf) goto L_11d5124d;
  /* 11d5121c mov edx, dword ptr [0x11d718cc] */
  EDX = (r32((uint32_t)(0x11d718cc)));
  /* 11d51222 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d51225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51227 je 0x11d5124d */
  if (C.zf) goto L_11d5124d;
  /* 11d51229 cmp dword ptr [0x11d718d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51230 je 0x11d51246 */
  if (C.zf) goto L_11d51246;
  /* 11d51232 mov ecx, dword ptr [0x11d718d0] */
  ECX = (r32((uint32_t)(0x11d718d0)));
  /* 11d51238 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d5123b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d5123d je 0x11d51246 */
  if (C.zf) goto L_11d51246;
  /* 11d5123f call 0x11d513f0 */
  push32(0x11d51244u); f_11d513f0();
  /* 11d51244 jmp 0x11d5124b */
  goto L_11d5124b;
L_11d51246:;
  /* 11d51246 call 0x11d517e0 */
  push32(0x11d5124bu); f_11d517e0();
L_11d5124b:;
  /* 11d5124b jmp 0x11d5126e */
  goto L_11d5126e;
L_11d5124d:;
  /* 11d5124d cmp dword ptr [0x11d718d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51254 je 0x11d51269 */
  if (C.zf) goto L_11d51269;
  /* 11d51256 mov eax, dword ptr [0x11d718d0] */
  EAX = (r32((uint32_t)(0x11d718d0)));
  /* 11d5125b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d5125e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d51260 je 0x11d51269 */
  if (C.zf) goto L_11d51269;
  /* 11d51262 call 0x11d51980 */
  push32(0x11d51267u); f_11d51980();
  /* 11d51267 jmp 0x11d5126e */
  goto L_11d5126e;
L_11d51269:;
  /* 11d51269 call 0x11d51a80 */
  push32(0x11d5126eu); f_11d51a80();
L_11d5126e:;
  /* 11d5126e cmp dword ptr [0x11d718d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51275 jne 0x11d5127e */
  if (!C.zf) goto L_11d5127e;
  /* 11d51277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d51279 jmp 0x11d5135c */
  goto L_11d5135c;
L_11d5127e:;
  /* 11d5127e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51281 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51287 push edx */
  push32((uint32_t)(EDX));
  /* 11d51288 call 0x11d51ab0 */
  push32(0x11d5128du); f_11d51ab0();
  /* 11d5128d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51290 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d51293 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51297 je 0x11d512ac */
  if (C.zf) goto L_11d512ac;
  /* 11d51299 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5129c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d512a1 push eax */
  push32((uint32_t)(EAX));
  /* 11d512a2 call dword ptr [0x11d7430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7430c))), 0x11d512a8u);
  /* 11d512a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d512aa jne 0x11d512b3 */
  if (!C.zf) goto L_11d512b3;
L_11d512ac:;
  /* 11d512ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d512ae jmp 0x11d5135c */
  goto L_11d5135c;
L_11d512b3:;
  /* 11d512b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d512b5 mov ecx, dword ptr [0x11d718bc] */
  ECX = (r32((uint32_t)(0x11d718bc)));
  /* 11d512bb push ecx */
  push32((uint32_t)(ECX));
  /* 11d512bc call dword ptr [0x11d74310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74310))), 0x11d512c2u);
  /* 11d512c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d512c4 jne 0x11d512cd */
  if (!C.zf) goto L_11d512cd;
  /* 11d512c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d512c8 jmp 0x11d5135c */
  goto L_11d5135c;
L_11d512cd:;
  /* 11d512cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d512d1 je 0x11d512f8 */
  if (C.zf) goto L_11d512f8;
  /* 11d512d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d512d6 mov ax, word ptr [0x11d718bc] */
  AX = (r16((uint32_t)(0x11d718bc)));
  /* 11d512dc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11d512df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d512e2 mov dx, word ptr [0x11d718d8] */
  DX = (r16((uint32_t)(0x11d718d8)));
  /* 11d512e9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11d512ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d512f0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11d512f4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11d512f8:;
  /* 11d512f8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d512fc je 0x11d51357 */
  if (C.zf) goto L_11d51357;
  /* 11d512fe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d51300 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d51303 push edx */
  push32((uint32_t)(EDX));
  /* 11d51304 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11d51309 mov eax, dword ptr [0x11d718bc] */
  EAX = (r32((uint32_t)(0x11d718bc)));
  /* 11d5130e push eax */
  push32((uint32_t)(EAX));
  /* 11d5130f call dword ptr [0x11d718dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d718dc))), 0x11d51315u);
  /* 11d51315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51317 jne 0x11d5131d */
  if (!C.zf) goto L_11d5131d;
  /* 11d51319 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5131b jmp 0x11d5135c */
  goto L_11d5135c;
L_11d5131d:;
  /* 11d5131d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d5131f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d51322 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51325 push ecx */
  push32((uint32_t)(ECX));
  /* 11d51326 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11d5132b mov edx, dword ptr [0x11d718d8] */
  EDX = (r32((uint32_t)(0x11d718d8)));
  /* 11d51331 push edx */
  push32((uint32_t)(EDX));
  /* 11d51332 call dword ptr [0x11d718dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d718dc))), 0x11d51338u);
  /* 11d51338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d5133a jne 0x11d51340 */
  if (!C.zf) goto L_11d51340;
  /* 11d5133c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5133e jmp 0x11d5135c */
  goto L_11d5135c;
L_11d51340:;
  /* 11d51340 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d51342 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d51345 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5134a push eax */
  push32((uint32_t)(EAX));
  /* 11d5134b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5134e push ecx */
  push32((uint32_t)(ECX));
  /* 11d5134f call 0x11d47ec0 */
  push32(0x11d51354u); f_11d47ec0();
  /* 11d51354 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d51357:;
  /* 11d51357 mov eax, 1 */
  EAX = (0x1u);
L_11d5135c:;
  /* 11d5135c mov esp, ebp */
  ESP = (EBP);
  /* 11d5135e pop ebp */
  EBP = (pop32());
  /* 11d5135f ret  */
  ESPCHK(0x11d51160u, _esp0);
  ESP += 4; return;
}

/* FUN_10011360 @ 0x11d51360 (130 bytes, 47 insns) */
void f_11d51360(void) {
  FTRACE(0x11d51360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51360 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51361 mov ebp, esp */
  EBP = (ESP);
  /* 11d51363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51366 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d5136d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11d51374:;
  /* 11d51374 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51377 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5137a jg 0x11d513de */
  if ((!C.zf&&C.sf==C.of)) goto L_11d513de;
  /* 11d5137c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51380 je 0x11d513de */
  if (C.zf) goto L_11d513de;
  /* 11d51382 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51385 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51388 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d51389 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d5138b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d5138d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d51390 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d51393 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51396 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11d51399 push eax */
  push32((uint32_t)(EAX));
  /* 11d5139a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5139d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d5139f push edx */
  push32((uint32_t)(EDX));
  /* 11d513a0 call 0x11d53a50 */
  push32(0x11d513a5u); f_11d53a50();
  /* 11d513a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d513a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d513ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d513af jne 0x11d513c2 */
  if (!C.zf) goto L_11d513c2;
  /* 11d513b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d513b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d513b7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11d513bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d513be mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d513c0 jmp 0x11d513dc */
  goto L_11d513dc;
L_11d513c2:;
  /* 11d513c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d513c6 jge 0x11d513d3 */
  if ((C.sf==C.of)) goto L_11d513d3;
  /* 11d513c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d513cb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d513ce mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11d513d1 jmp 0x11d513dc */
  goto L_11d513dc;
L_11d513d3:;
  /* 11d513d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d513d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d513d9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d513dc:;
  /* 11d513dc jmp 0x11d51374 */
  goto L_11d51374;
L_11d513de:;
  /* 11d513de mov esp, ebp */
  ESP = (EBP);
  /* 11d513e0 pop ebp */
  EBP = (pop32());
  /* 11d513e1 ret  */
  ESPCHK(0x11d51360u, _esp0);
  ESP += 4; return;
}

/* FUN_100113f0 @ 0x11d513f0 (186 bytes, 50 insns) */
void f_11d513f0(void) {
  FTRACE(0x11d513f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d513f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d513f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d513f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d513f4 mov eax, dword ptr [0x11d718cc] */
  EAX = (r32((uint32_t)(0x11d718cc)));
  /* 11d513f9 push eax */
  push32((uint32_t)(EAX));
  /* 11d513fa call 0x11d481b0 */
  push32(0x11d513ffu); f_11d481b0();
  /* 11d513ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51402 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d51404 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51407 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11d5140a mov dword ptr [0x11d718c8], ecx */
  w32((uint32_t)(0x11d718c8), (ECX));
  /* 11d51410 mov edx, dword ptr [0x11d718d0] */
  EDX = (r32((uint32_t)(0x11d718d0)));
  /* 11d51416 push edx */
  push32((uint32_t)(EDX));
  /* 11d51417 call 0x11d481b0 */
  push32(0x11d5141cu); f_11d481b0();
  /* 11d5141c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5141f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d51421 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51424 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11d51427 mov dword ptr [0x11d718c0], ecx */
  w32((uint32_t)(0x11d718c0), (ECX));
  /* 11d5142d mov dword ptr [0x11d718bc], 0 */
  w32((uint32_t)(0x11d718bc), (0x0u));
  /* 11d51437 cmp dword ptr [0x11d718c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5143e je 0x11d51449 */
  if (C.zf) goto L_11d51449;
  /* 11d51440 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11d51447 jmp 0x11d5145b */
  goto L_11d5145b;
L_11d51449:;
  /* 11d51449 mov edx, dword ptr [0x11d718cc] */
  EDX = (r32((uint32_t)(0x11d718cc)));
  /* 11d5144f push edx */
  push32((uint32_t)(EDX));
  /* 11d51450 call 0x11d51e90 */
  push32(0x11d51455u); f_11d51e90();
  /* 11d51455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d5145b:;
  /* 11d5145b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5145e mov dword ptr [0x11d718c4], eax */
  w32((uint32_t)(0x11d718c4), (EAX));
  /* 11d51463 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d51465 push 0x11d514b0 */
  push32((uint32_t)(0x11d514b0u));
  /* 11d5146a call dword ptr [0x11d74304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74304))), 0x11d51470u);
  /* 11d51470 mov ecx, dword ptr [0x11d718d4] */
  ECX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51476 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11d5147c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d5147e je 0x11d5149c */
  if (C.zf) goto L_11d5149c;
  /* 11d51480 mov edx, dword ptr [0x11d718d4] */
  EDX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51486 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11d5148c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d5148e je 0x11d5149c */
  if (C.zf) goto L_11d5149c;
  /* 11d51490 mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51495 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11d51498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d5149a jne 0x11d514a6 */
  if (!C.zf) goto L_11d514a6;
L_11d5149c:;
  /* 11d5149c mov dword ptr [0x11d718d4], 0 */
  w32((uint32_t)(0x11d718d4), (0x0u));
L_11d514a6:;
  /* 11d514a6 mov esp, ebp */
  ESP = (EBP);
  /* 11d514a8 pop ebp */
  EBP = (pop32());
  /* 11d514a9 ret  */
  ESPCHK(0x11d513f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114b0 @ 0x11d514b0 (804 bytes, 220 insns) */
void f_11d514b0(void) {
  FTRACE(0x11d514b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d514b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d514b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d514b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d514b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d514b9 push eax */
  push32((uint32_t)(EAX));
  /* 11d514ba call 0x11d51e10 */
  push32(0x11d514bfu); f_11d51e10();
  /* 11d514bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d514c2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11d514c5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d514c7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d514ca push ecx */
  push32((uint32_t)(ECX));
  /* 11d514cb mov edx, dword ptr [0x11d718c0] */
  EDX = (r32((uint32_t)(0x11d718c0)));
  /* 11d514d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d514d3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d514d5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11d514db add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d514e1 push edx */
  push32((uint32_t)(EDX));
  /* 11d514e2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d514e5 push eax */
  push32((uint32_t)(EAX));
  /* 11d514e6 call dword ptr [0x11d718dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d718dc))), 0x11d514ecu);
  /* 11d514ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d514ee jne 0x11d51504 */
  if (!C.zf) goto L_11d51504;
  /* 11d514f0 mov dword ptr [0x11d718d4], 0 */
  w32((uint32_t)(0x11d718d4), (0x0u));
  /* 11d514fa mov eax, 1 */
  EAX = (0x1u);
  /* 11d514ff jmp 0x11d517ce */
  goto L_11d517ce;
L_11d51504:;
  /* 11d51504 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d51507 push ecx */
  push32((uint32_t)(ECX));
  /* 11d51508 mov edx, dword ptr [0x11d718d0] */
  EDX = (r32((uint32_t)(0x11d718d0)));
  /* 11d5150e push edx */
  push32((uint32_t)(EDX));
  /* 11d5150f call 0x11d53a50 */
  push32(0x11d51514u); f_11d53a50();
  /* 11d51514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51517 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51519 jne 0x11d5163f */
  if (!C.zf) goto L_11d5163f;
  /* 11d5151f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d51521 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11d51524 push eax */
  push32((uint32_t)(EAX));
  /* 11d51525 mov ecx, dword ptr [0x11d718c8] */
  ECX = (r32((uint32_t)(0x11d718c8)));
  /* 11d5152b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d5152d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d5152f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11d51535 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5153b push ecx */
  push32((uint32_t)(ECX));
  /* 11d5153c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d5153f push edx */
  push32((uint32_t)(EDX));
  /* 11d51540 call dword ptr [0x11d718dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d718dc))), 0x11d51546u);
  /* 11d51546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51548 jne 0x11d5155e */
  if (!C.zf) goto L_11d5155e;
  /* 11d5154a mov dword ptr [0x11d718d4], 0 */
  w32((uint32_t)(0x11d718d4), (0x0u));
  /* 11d51554 mov eax, 1 */
  EAX = (0x1u);
  /* 11d51559 jmp 0x11d517ce */
  goto L_11d517ce;
L_11d5155e:;
  /* 11d5155e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11d51561 push eax */
  push32((uint32_t)(EAX));
  /* 11d51562 mov ecx, dword ptr [0x11d718cc] */
  ECX = (r32((uint32_t)(0x11d718cc)));
  /* 11d51568 push ecx */
  push32((uint32_t)(ECX));
  /* 11d51569 call 0x11d53a50 */
  push32(0x11d5156eu); f_11d53a50();
  /* 11d5156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51573 jne 0x11d515a0 */
  if (!C.zf) goto L_11d515a0;
  /* 11d51575 mov edx, dword ptr [0x11d718d4] */
  EDX = (r32((uint32_t)(0x11d718d4)));
  /* 11d5157b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11d51581 mov dword ptr [0x11d718d4], edx */
  w32((uint32_t)(0x11d718d4), (EDX));
  /* 11d51587 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d5158a mov dword ptr [0x11d718d8], eax */
  w32((uint32_t)(0x11d718d8), (EAX));
  /* 11d5158f mov ecx, dword ptr [0x11d718d8] */
  ECX = (r32((uint32_t)(0x11d718d8)));
  /* 11d51595 mov dword ptr [0x11d718bc], ecx */
  w32((uint32_t)(0x11d718bc), (ECX));
  /* 11d5159b jmp 0x11d5163f */
  goto L_11d5163f;
L_11d515a0:;
  /* 11d515a0 mov edx, dword ptr [0x11d718d4] */
  EDX = (r32((uint32_t)(0x11d718d4)));
  /* 11d515a6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11d515a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d515ab jne 0x11d5163f */
  if (!C.zf) goto L_11d5163f;
  /* 11d515b1 cmp dword ptr [0x11d718c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d515b8 je 0x11d5160d */
  if (C.zf) goto L_11d5160d;
  /* 11d515ba mov eax, dword ptr [0x11d718c4] */
  EAX = (r32((uint32_t)(0x11d718c4)));
  /* 11d515bf push eax */
  push32((uint32_t)(EAX));
  /* 11d515c0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d515c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d515c4 mov edx, dword ptr [0x11d718cc] */
  EDX = (r32((uint32_t)(0x11d718cc)));
  /* 11d515ca push edx */
  push32((uint32_t)(EDX));
  /* 11d515cb call 0x11d53b20 */
  push32(0x11d515d0u); f_11d53b20();
  /* 11d515d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d515d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d515d5 jne 0x11d5160d */
  if (!C.zf) goto L_11d5160d;
  /* 11d515d7 mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d515dc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11d515de mov dword ptr [0x11d718d4], eax */
  w32((uint32_t)(0x11d718d4), (EAX));
  /* 11d515e3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d515e6 mov dword ptr [0x11d718d8], ecx */
  w32((uint32_t)(0x11d718d8), (ECX));
  /* 11d515ec mov edx, dword ptr [0x11d718cc] */
  EDX = (r32((uint32_t)(0x11d718cc)));
  /* 11d515f2 push edx */
  push32((uint32_t)(EDX));
  /* 11d515f3 call 0x11d481b0 */
  push32(0x11d515f8u); f_11d481b0();
  /* 11d515f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d515fb cmp eax, dword ptr [0x11d718c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d718c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51601 jne 0x11d5160b */
  if (!C.zf) goto L_11d5160b;
  /* 11d51603 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d51606 mov dword ptr [0x11d718bc], eax */
  w32((uint32_t)(0x11d718bc), (EAX));
L_11d5160b:;
  /* 11d5160b jmp 0x11d5163f */
  goto L_11d5163f;
L_11d5160d:;
  /* 11d5160d mov ecx, dword ptr [0x11d718d4] */
  ECX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51613 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d51616 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d51618 jne 0x11d5163f */
  if (!C.zf) goto L_11d5163f;
  /* 11d5161a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d5161d push edx */
  push32((uint32_t)(EDX));
  /* 11d5161e call 0x11d51b50 */
  push32(0x11d51623u); f_11d51b50();
  /* 11d51623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51628 je 0x11d5163f */
  if (C.zf) goto L_11d5163f;
  /* 11d5162a mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d5162f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11d51631 mov dword ptr [0x11d718d4], eax */
  w32((uint32_t)(0x11d718d4), (EAX));
  /* 11d51636 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d51639 mov dword ptr [0x11d718d8], ecx */
  w32((uint32_t)(0x11d718d8), (ECX));
L_11d5163f:;
  /* 11d5163f mov edx, dword ptr [0x11d718d4] */
  EDX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51645 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11d5164b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51651 je 0x11d517c1 */
  if (C.zf) goto L_11d517c1;
  /* 11d51657 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d51659 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11d5165c push eax */
  push32((uint32_t)(EAX));
  /* 11d5165d mov ecx, dword ptr [0x11d718c8] */
  ECX = (r32((uint32_t)(0x11d718c8)));
  /* 11d51663 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d51665 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51667 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11d5166d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51673 push ecx */
  push32((uint32_t)(ECX));
  /* 11d51674 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d51677 push edx */
  push32((uint32_t)(EDX));
  /* 11d51678 call dword ptr [0x11d718dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d718dc))), 0x11d5167eu);
  /* 11d5167e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51680 jne 0x11d51696 */
  if (!C.zf) goto L_11d51696;
  /* 11d51682 mov dword ptr [0x11d718d4], 0 */
  w32((uint32_t)(0x11d718d4), (0x0u));
  /* 11d5168c mov eax, 1 */
  EAX = (0x1u);
  /* 11d51691 jmp 0x11d517ce */
  goto L_11d517ce;
L_11d51696:;
  /* 11d51696 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11d51699 push eax */
  push32((uint32_t)(EAX));
  /* 11d5169a mov ecx, dword ptr [0x11d718cc] */
  ECX = (r32((uint32_t)(0x11d718cc)));
  /* 11d516a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d516a1 call 0x11d53a50 */
  push32(0x11d516a6u); f_11d53a50();
  /* 11d516a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d516a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d516ab jne 0x11d51760 */
  if (!C.zf) goto L_11d51760;
  /* 11d516b1 mov edx, dword ptr [0x11d718d4] */
  EDX = (r32((uint32_t)(0x11d718d4)));
  /* 11d516b7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11d516ba mov dword ptr [0x11d718d4], edx */
  w32((uint32_t)(0x11d718d4), (EDX));
  /* 11d516c0 cmp dword ptr [0x11d718c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d516c7 je 0x11d516ea */
  if (C.zf) goto L_11d516ea;
  /* 11d516c9 mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d516ce or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11d516d1 mov dword ptr [0x11d718d4], eax */
  w32((uint32_t)(0x11d718d4), (EAX));
  /* 11d516d6 cmp dword ptr [0x11d718bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d516dd jne 0x11d516e8 */
  if (!C.zf) goto L_11d516e8;
  /* 11d516df mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d516e2 mov dword ptr [0x11d718bc], ecx */
  w32((uint32_t)(0x11d718bc), (ECX));
L_11d516e8:;
  /* 11d516e8 jmp 0x11d5175e */
  goto L_11d5175e;
L_11d516ea:;
  /* 11d516ea cmp dword ptr [0x11d718c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d516f1 je 0x11d5173f */
  if (C.zf) goto L_11d5173f;
  /* 11d516f3 mov edx, dword ptr [0x11d718cc] */
  EDX = (r32((uint32_t)(0x11d718cc)));
  /* 11d516f9 push edx */
  push32((uint32_t)(EDX));
  /* 11d516fa call 0x11d481b0 */
  push32(0x11d516ffu); f_11d481b0();
  /* 11d516ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51702 cmp eax, dword ptr [0x11d718c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d718c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51708 jne 0x11d5173f */
  if (!C.zf) goto L_11d5173f;
  /* 11d5170a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5170c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d5170f push eax */
  push32((uint32_t)(EAX));
  /* 11d51710 call 0x11d51ba0 */
  push32(0x11d51715u); f_11d51ba0();
  /* 11d51715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d5171a je 0x11d5173d */
  if (C.zf) goto L_11d5173d;
  /* 11d5171c mov ecx, dword ptr [0x11d718d4] */
  ECX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51722 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11d51725 mov dword ptr [0x11d718d4], ecx */
  w32((uint32_t)(0x11d718d4), (ECX));
  /* 11d5172b cmp dword ptr [0x11d718bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51732 jne 0x11d5173d */
  if (!C.zf) goto L_11d5173d;
  /* 11d51734 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d51737 mov dword ptr [0x11d718bc], edx */
  w32((uint32_t)(0x11d718bc), (EDX));
L_11d5173d:;
  /* 11d5173d jmp 0x11d5175e */
  goto L_11d5175e;
L_11d5173f:;
  /* 11d5173f mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51744 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11d51747 mov dword ptr [0x11d718d4], eax */
  w32((uint32_t)(0x11d718d4), (EAX));
  /* 11d5174c cmp dword ptr [0x11d718bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51753 jne 0x11d5175e */
  if (!C.zf) goto L_11d5175e;
  /* 11d51755 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d51758 mov dword ptr [0x11d718bc], ecx */
  w32((uint32_t)(0x11d718bc), (ECX));
L_11d5175e:;
  /* 11d5175e jmp 0x11d517c1 */
  goto L_11d517c1;
L_11d51760:;
  /* 11d51760 cmp dword ptr [0x11d718c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51767 jne 0x11d517c1 */
  if (!C.zf) goto L_11d517c1;
  /* 11d51769 cmp dword ptr [0x11d718c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51770 je 0x11d517c1 */
  if (C.zf) goto L_11d517c1;
  /* 11d51772 mov edx, dword ptr [0x11d718c4] */
  EDX = (r32((uint32_t)(0x11d718c4)));
  /* 11d51778 push edx */
  push32((uint32_t)(EDX));
  /* 11d51779 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11d5177c push eax */
  push32((uint32_t)(EAX));
  /* 11d5177d mov ecx, dword ptr [0x11d718cc] */
  ECX = (r32((uint32_t)(0x11d718cc)));
  /* 11d51783 push ecx */
  push32((uint32_t)(ECX));
  /* 11d51784 call 0x11d53b20 */
  push32(0x11d51789u); f_11d53b20();
  /* 11d51789 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5178c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d5178e jne 0x11d517c1 */
  if (!C.zf) goto L_11d517c1;
  /* 11d51790 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d51792 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d51795 push edx */
  push32((uint32_t)(EDX));
  /* 11d51796 call 0x11d51ba0 */
  push32(0x11d5179bu); f_11d51ba0();
  /* 11d5179b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5179e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d517a0 je 0x11d517c1 */
  if (C.zf) goto L_11d517c1;
  /* 11d517a2 mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d517a7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11d517aa mov dword ptr [0x11d718d4], eax */
  w32((uint32_t)(0x11d718d4), (EAX));
  /* 11d517af cmp dword ptr [0x11d718bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d517b6 jne 0x11d517c1 */
  if (!C.zf) goto L_11d517c1;
  /* 11d517b8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d517bb mov dword ptr [0x11d718bc], ecx */
  w32((uint32_t)(0x11d718bc), (ECX));
L_11d517c1:;
  /* 11d517c1 mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d517c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d517c9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d517cb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d517cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d517ce:;
  /* 11d517ce mov esp, ebp */
  ESP = (EBP);
  /* 11d517d0 pop ebp */
  EBP = (pop32());
  /* 11d517d1 ret 4 */
  ESPCHK(0x11d514b0u, _esp0);
  ESP += 8; return;
}

/* FUN_100117e0 @ 0x11d517e0 (116 bytes, 33 insns) */
void f_11d517e0(void) {
  FTRACE(0x11d517e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d517e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d517e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d517e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d517e4 mov eax, dword ptr [0x11d718cc] */
  EAX = (r32((uint32_t)(0x11d718cc)));
  /* 11d517e9 push eax */
  push32((uint32_t)(EAX));
  /* 11d517ea call 0x11d481b0 */
  push32(0x11d517efu); f_11d481b0();
  /* 11d517ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d517f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d517f4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d517f7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11d517fa mov dword ptr [0x11d718c8], ecx */
  w32((uint32_t)(0x11d718c8), (ECX));
  /* 11d51800 cmp dword ptr [0x11d718c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51807 je 0x11d51812 */
  if (C.zf) goto L_11d51812;
  /* 11d51809 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11d51810 jmp 0x11d51824 */
  goto L_11d51824;
L_11d51812:;
  /* 11d51812 mov edx, dword ptr [0x11d718cc] */
  EDX = (r32((uint32_t)(0x11d718cc)));
  /* 11d51818 push edx */
  push32((uint32_t)(EDX));
  /* 11d51819 call 0x11d51e90 */
  push32(0x11d5181eu); f_11d51e90();
  /* 11d5181e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51821 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d51824:;
  /* 11d51824 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d51827 mov dword ptr [0x11d718c4], eax */
  w32((uint32_t)(0x11d718c4), (EAX));
  /* 11d5182c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5182e push 0x11d51860 */
  push32((uint32_t)(0x11d51860u));
  /* 11d51833 call dword ptr [0x11d74304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74304))), 0x11d51839u);
  /* 11d51839 mov ecx, dword ptr [0x11d718d4] */
  ECX = (r32((uint32_t)(0x11d718d4)));
  /* 11d5183f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d51842 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d51844 jne 0x11d51850 */
  if (!C.zf) goto L_11d51850;
  /* 11d51846 mov dword ptr [0x11d718d4], 0 */
  w32((uint32_t)(0x11d718d4), (0x0u));
L_11d51850:;
  /* 11d51850 mov esp, ebp */
  ESP = (EBP);
  /* 11d51852 pop ebp */
  EBP = (pop32());
  /* 11d51853 ret  */
  ESPCHK(0x11d517e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011860 @ 0x11d51860 (287 bytes, 86 insns) */
void f_11d51860(void) {
  FTRACE(0x11d51860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51860 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51861 mov ebp, esp */
  EBP = (ESP);
  /* 11d51863 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51869 push eax */
  push32((uint32_t)(EAX));
  /* 11d5186a call 0x11d51e10 */
  push32(0x11d5186fu); f_11d51e10();
  /* 11d5186f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51872 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11d51875 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d51877 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d5187a push ecx */
  push32((uint32_t)(ECX));
  /* 11d5187b mov edx, dword ptr [0x11d718c8] */
  EDX = (r32((uint32_t)(0x11d718c8)));
  /* 11d51881 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d51883 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51885 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11d5188b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51891 push edx */
  push32((uint32_t)(EDX));
  /* 11d51892 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d51895 push eax */
  push32((uint32_t)(EAX));
  /* 11d51896 call dword ptr [0x11d718dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d718dc))), 0x11d5189cu);
  /* 11d5189c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d5189e jne 0x11d518b4 */
  if (!C.zf) goto L_11d518b4;
  /* 11d518a0 mov dword ptr [0x11d718d4], 0 */
  w32((uint32_t)(0x11d718d4), (0x0u));
  /* 11d518aa mov eax, 1 */
  EAX = (0x1u);
  /* 11d518af jmp 0x11d51979 */
  goto L_11d51979;
L_11d518b4:;
  /* 11d518b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d518b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d518b8 mov edx, dword ptr [0x11d718cc] */
  EDX = (r32((uint32_t)(0x11d718cc)));
  /* 11d518be push edx */
  push32((uint32_t)(EDX));
  /* 11d518bf call 0x11d53a50 */
  push32(0x11d518c4u); f_11d53a50();
  /* 11d518c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d518c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d518c9 jne 0x11d51909 */
  if (!C.zf) goto L_11d51909;
  /* 11d518cb cmp dword ptr [0x11d718c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d518d2 jne 0x11d518e6 */
  if (!C.zf) goto L_11d518e6;
  /* 11d518d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d518d6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d518d9 push eax */
  push32((uint32_t)(EAX));
  /* 11d518da call 0x11d51ba0 */
  push32(0x11d518dfu); f_11d51ba0();
  /* 11d518df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d518e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d518e4 je 0x11d51907 */
  if (C.zf) goto L_11d51907;
L_11d518e6:;
  /* 11d518e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d518e9 mov dword ptr [0x11d718d8], ecx */
  w32((uint32_t)(0x11d718d8), (ECX));
  /* 11d518ef mov edx, dword ptr [0x11d718d8] */
  EDX = (r32((uint32_t)(0x11d718d8)));
  /* 11d518f5 mov dword ptr [0x11d718bc], edx */
  w32((uint32_t)(0x11d718bc), (EDX));
  /* 11d518fb mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51900 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11d51902 mov dword ptr [0x11d718d4], eax */
  w32((uint32_t)(0x11d718d4), (EAX));
L_11d51907:;
  /* 11d51907 jmp 0x11d5196c */
  goto L_11d5196c;
L_11d51909:;
  /* 11d51909 cmp dword ptr [0x11d718c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51910 jne 0x11d5196c */
  if (!C.zf) goto L_11d5196c;
  /* 11d51912 cmp dword ptr [0x11d718c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51919 je 0x11d5196c */
  if (C.zf) goto L_11d5196c;
  /* 11d5191b mov ecx, dword ptr [0x11d718c4] */
  ECX = (r32((uint32_t)(0x11d718c4)));
  /* 11d51921 push ecx */
  push32((uint32_t)(ECX));
  /* 11d51922 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11d51925 push edx */
  push32((uint32_t)(EDX));
  /* 11d51926 mov eax, dword ptr [0x11d718cc] */
  EAX = (r32((uint32_t)(0x11d718cc)));
  /* 11d5192b push eax */
  push32((uint32_t)(EAX));
  /* 11d5192c call 0x11d53b20 */
  push32(0x11d51931u); f_11d53b20();
  /* 11d51931 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51936 jne 0x11d5196c */
  if (!C.zf) goto L_11d5196c;
  /* 11d51938 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5193a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d5193d push ecx */
  push32((uint32_t)(ECX));
  /* 11d5193e call 0x11d51ba0 */
  push32(0x11d51943u); f_11d51ba0();
  /* 11d51943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51946 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51948 je 0x11d5196c */
  if (C.zf) goto L_11d5196c;
  /* 11d5194a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d5194d mov dword ptr [0x11d718d8], edx */
  w32((uint32_t)(0x11d718d8), (EDX));
  /* 11d51953 mov eax, dword ptr [0x11d718d8] */
  EAX = (r32((uint32_t)(0x11d718d8)));
  /* 11d51958 mov dword ptr [0x11d718bc], eax */
  w32((uint32_t)(0x11d718bc), (EAX));
  /* 11d5195d mov ecx, dword ptr [0x11d718d4] */
  ECX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51963 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d51966 mov dword ptr [0x11d718d4], ecx */
  w32((uint32_t)(0x11d718d4), (ECX));
L_11d5196c:;
  /* 11d5196c mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51971 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d51974 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d51976 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51978 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d51979:;
  /* 11d51979 mov esp, ebp */
  ESP = (EBP);
  /* 11d5197b pop ebp */
  EBP = (pop32());
  /* 11d5197c ret 4 */
  ESPCHK(0x11d51860u, _esp0);
  ESP += 8; return;
}

/* FUN_10011980 @ 0x11d51980 (69 bytes, 20 insns) */
void f_11d51980(void) {
  FTRACE(0x11d51980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51980 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51981 mov ebp, esp */
  EBP = (ESP);
  /* 11d51983 mov eax, dword ptr [0x11d718d0] */
  EAX = (r32((uint32_t)(0x11d718d0)));
  /* 11d51988 push eax */
  push32((uint32_t)(EAX));
  /* 11d51989 call 0x11d481b0 */
  push32(0x11d5198eu); f_11d481b0();
  /* 11d5198e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51991 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d51993 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51996 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11d51999 mov dword ptr [0x11d718c0], ecx */
  w32((uint32_t)(0x11d718c0), (ECX));
  /* 11d5199f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d519a1 push 0x11d519d0 */
  push32((uint32_t)(0x11d519d0u));
  /* 11d519a6 call dword ptr [0x11d74304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74304))), 0x11d519acu);
  /* 11d519ac mov edx, dword ptr [0x11d718d4] */
  EDX = (r32((uint32_t)(0x11d718d4)));
  /* 11d519b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d519b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d519b7 jne 0x11d519c3 */
  if (!C.zf) goto L_11d519c3;
  /* 11d519b9 mov dword ptr [0x11d718d4], 0 */
  w32((uint32_t)(0x11d718d4), (0x0u));
L_11d519c3:;
  /* 11d519c3 pop ebp */
  EBP = (pop32());
  /* 11d519c4 ret  */
  ESPCHK(0x11d51980u, _esp0);
  ESP += 4; return;
}

/* FUN_100119d0 @ 0x11d519d0 (172 bytes, 54 insns) */
void f_11d519d0(void) {
  FTRACE(0x11d519d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d519d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d519d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d519d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d519d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d519d9 push eax */
  push32((uint32_t)(EAX));
  /* 11d519da call 0x11d51e10 */
  push32(0x11d519dfu); f_11d51e10();
  /* 11d519df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d519e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11d519e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d519e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d519ea push ecx */
  push32((uint32_t)(ECX));
  /* 11d519eb mov edx, dword ptr [0x11d718c0] */
  EDX = (r32((uint32_t)(0x11d718c0)));
  /* 11d519f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d519f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d519f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11d519fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51a01 push edx */
  push32((uint32_t)(EDX));
  /* 11d51a02 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d51a05 push eax */
  push32((uint32_t)(EAX));
  /* 11d51a06 call dword ptr [0x11d718dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d718dc))), 0x11d51a0cu);
  /* 11d51a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51a0e jne 0x11d51a21 */
  if (!C.zf) goto L_11d51a21;
  /* 11d51a10 mov dword ptr [0x11d718d4], 0 */
  w32((uint32_t)(0x11d718d4), (0x0u));
  /* 11d51a1a mov eax, 1 */
  EAX = (0x1u);
  /* 11d51a1f jmp 0x11d51a76 */
  goto L_11d51a76;
L_11d51a21:;
  /* 11d51a21 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d51a24 push ecx */
  push32((uint32_t)(ECX));
  /* 11d51a25 mov edx, dword ptr [0x11d718d0] */
  EDX = (r32((uint32_t)(0x11d718d0)));
  /* 11d51a2b push edx */
  push32((uint32_t)(EDX));
  /* 11d51a2c call 0x11d53a50 */
  push32(0x11d51a31u); f_11d53a50();
  /* 11d51a31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51a36 jne 0x11d51a69 */
  if (!C.zf) goto L_11d51a69;
  /* 11d51a38 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d51a3b push eax */
  push32((uint32_t)(EAX));
  /* 11d51a3c call 0x11d51b50 */
  push32(0x11d51a41u); f_11d51b50();
  /* 11d51a41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51a46 je 0x11d51a69 */
  if (C.zf) goto L_11d51a69;
  /* 11d51a48 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d51a4b mov dword ptr [0x11d718d8], ecx */
  w32((uint32_t)(0x11d718d8), (ECX));
  /* 11d51a51 mov edx, dword ptr [0x11d718d8] */
  EDX = (r32((uint32_t)(0x11d718d8)));
  /* 11d51a57 mov dword ptr [0x11d718bc], edx */
  w32((uint32_t)(0x11d718bc), (EDX));
  /* 11d51a5d mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51a62 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11d51a64 mov dword ptr [0x11d718d4], eax */
  w32((uint32_t)(0x11d718d4), (EAX));
L_11d51a69:;
  /* 11d51a69 mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51a6e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d51a71 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d51a73 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51a75 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d51a76:;
  /* 11d51a76 mov esp, ebp */
  ESP = (EBP);
  /* 11d51a78 pop ebp */
  EBP = (pop32());
  /* 11d51a79 ret 4 */
  ESPCHK(0x11d519d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011a80 @ 0x11d51a80 (43 bytes, 11 insns) */
void f_11d51a80(void) {
  FTRACE(0x11d51a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51a81 mov ebp, esp */
  EBP = (ESP);
  /* 11d51a83 mov eax, dword ptr [0x11d718d4] */
  EAX = (r32((uint32_t)(0x11d718d4)));
  /* 11d51a88 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11d51a8d mov dword ptr [0x11d718d4], eax */
  w32((uint32_t)(0x11d718d4), (EAX));
  /* 11d51a92 call dword ptr [0x11d74300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74300))), 0x11d51a98u);
  /* 11d51a98 mov dword ptr [0x11d718d8], eax */
  w32((uint32_t)(0x11d718d8), (EAX));
  /* 11d51a9d mov ecx, dword ptr [0x11d718d8] */
  ECX = (r32((uint32_t)(0x11d718d8)));
  /* 11d51aa3 mov dword ptr [0x11d718bc], ecx */
  w32((uint32_t)(0x11d718bc), (ECX));
  /* 11d51aa9 pop ebp */
  EBP = (pop32());
  /* 11d51aaa ret  */
  ESPCHK(0x11d51a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ab0 @ 0x11d51ab0 (155 bytes, 57 insns) */
void f_11d51ab0(void) {
  FTRACE(0x11d51ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11d51ab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51ab6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51aba je 0x11d51adb */
  if (C.zf) goto L_11d51adb;
  /* 11d51abc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51abf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d51ac2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d51ac4 je 0x11d51adb */
  if (C.zf) goto L_11d51adb;
  /* 11d51ac6 push 0x11d6d9ec */
  push32((uint32_t)(0x11d6d9ecu));
  /* 11d51acb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51ace push edx */
  push32((uint32_t)(EDX));
  /* 11d51acf call 0x11d51010 */
  push32(0x11d51ad4u); f_11d51010();
  /* 11d51ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51ad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51ad9 jne 0x11d51b03 */
  if (!C.zf) goto L_11d51b03;
L_11d51adb:;
  /* 11d51adb push 8 */
  push32((uint32_t)(0x8u));
  /* 11d51add lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d51ae0 push eax */
  push32((uint32_t)(EAX));
  /* 11d51ae1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11d51ae6 mov ecx, dword ptr [0x11d718d8] */
  ECX = (r32((uint32_t)(0x11d718d8)));
  /* 11d51aec push ecx */
  push32((uint32_t)(ECX));
  /* 11d51aed call dword ptr [0x11d718dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d718dc))), 0x11d51af3u);
  /* 11d51af3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51af5 jne 0x11d51afb */
  if (!C.zf) goto L_11d51afb;
  /* 11d51af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d51af9 jmp 0x11d51b47 */
  goto L_11d51b47;
L_11d51afb:;
  /* 11d51afb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11d51afe mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d51b01 jmp 0x11d51b3b */
  goto L_11d51b3b;
L_11d51b03:;
  /* 11d51b03 push 0x11d6d9e8 */
  push32((uint32_t)(0x11d6d9e8u));
  /* 11d51b08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51b0b push eax */
  push32((uint32_t)(EAX));
  /* 11d51b0c call 0x11d51010 */
  push32(0x11d51b11u); f_11d51010();
  /* 11d51b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51b16 jne 0x11d51b3b */
  if (!C.zf) goto L_11d51b3b;
  /* 11d51b18 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d51b1a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11d51b1d push ecx */
  push32((uint32_t)(ECX));
  /* 11d51b1e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d51b20 mov edx, dword ptr [0x11d718d8] */
  EDX = (r32((uint32_t)(0x11d718d8)));
  /* 11d51b26 push edx */
  push32((uint32_t)(EDX));
  /* 11d51b27 call dword ptr [0x11d718dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d718dc))), 0x11d51b2du);
  /* 11d51b2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51b2f jne 0x11d51b35 */
  if (!C.zf) goto L_11d51b35;
  /* 11d51b31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d51b33 jmp 0x11d51b47 */
  goto L_11d51b47;
L_11d51b35:;
  /* 11d51b35 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d51b38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d51b3b:;
  /* 11d51b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51b3e push ecx */
  push32((uint32_t)(ECX));
  /* 11d51b3f call 0x11d53c30 */
  push32(0x11d51b44u); f_11d53c30();
  /* 11d51b44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d51b47:;
  /* 11d51b47 mov esp, ebp */
  ESP = (EBP);
  /* 11d51b49 pop ebp */
  EBP = (pop32());
  /* 11d51b4a ret  */
  ESPCHK(0x11d51ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b50 @ 0x11d51b50 (79 bytes, 26 insns) */
void f_11d51b50(void) {
  FTRACE(0x11d51b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51b51 mov ebp, esp */
  EBP = (ESP);
  /* 11d51b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51b56 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11d51b5a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11d51b5e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d51b65 jmp 0x11d51b70 */
  goto L_11d51b70;
L_11d51b67:;
  /* 11d51b67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d51b6a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51b6d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d51b70:;
  /* 11d51b70 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51b74 jae 0x11d51b96 */
  if (!C.cf) goto L_11d51b96;
  /* 11d51b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d51b79 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d51b7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d51b82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d51b84 mov cx, word ptr [eax*2 + 0x11d709c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11d709c4)));
  /* 11d51b8c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51b8e jne 0x11d51b94 */
  if (!C.zf) goto L_11d51b94;
  /* 11d51b90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d51b92 jmp 0x11d51b9b */
  goto L_11d51b9b;
L_11d51b94:;
  /* 11d51b94 jmp 0x11d51b67 */
  goto L_11d51b67;
L_11d51b96:;
  /* 11d51b96 mov eax, 1 */
  EAX = (0x1u);
L_11d51b9b:;
  /* 11d51b9b mov esp, ebp */
  ESP = (EBP);
  /* 11d51b9d pop ebp */
  EBP = (pop32());
  /* 11d51b9e ret  */
  ESPCHK(0x11d51b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ba0 @ 0x11d51ba0 (135 bytes, 48 insns) */
void f_11d51ba0(void) {
  FTRACE(0x11d51ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11d51ba3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51ba6 push esi */
  push32((uint32_t)(ESI));
  /* 11d51ba7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51baa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d51baf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d51bb4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d51bb9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11d51bbc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d51bc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d51bc4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d51bc6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11d51bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d51bca push 1 */
  push32((uint32_t)(0x1u));
  /* 11d51bcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d51bcf push edx */
  push32((uint32_t)(EDX));
  /* 11d51bd0 call dword ptr [0x11d718dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d718dc))), 0x11d51bd6u);
  /* 11d51bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51bd8 jne 0x11d51bde */
  if (!C.zf) goto L_11d51bde;
  /* 11d51bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d51bdc jmp 0x11d51c22 */
  goto L_11d51c22;
L_11d51bde:;
  /* 11d51bde lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11d51be1 push eax */
  push32((uint32_t)(EAX));
  /* 11d51be2 call 0x11d51e10 */
  push32(0x11d51be7u); f_11d51e10();
  /* 11d51be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51bea cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51bed je 0x11d51c1d */
  if (C.zf) goto L_11d51c1d;
  /* 11d51bef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51bf3 je 0x11d51c1d */
  if (C.zf) goto L_11d51c1d;
  /* 11d51bf5 mov ecx, dword ptr [0x11d718cc] */
  ECX = (r32((uint32_t)(0x11d718cc)));
  /* 11d51bfb push ecx */
  push32((uint32_t)(ECX));
  /* 11d51bfc call 0x11d51e90 */
  push32(0x11d51c01u); f_11d51e90();
  /* 11d51c01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51c04 mov esi, eax */
  ESI = (EAX);
  /* 11d51c06 mov edx, dword ptr [0x11d718cc] */
  EDX = (r32((uint32_t)(0x11d718cc)));
  /* 11d51c0c push edx */
  push32((uint32_t)(EDX));
  /* 11d51c0d call 0x11d481b0 */
  push32(0x11d51c12u); f_11d481b0();
  /* 11d51c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51c15 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51c17 jne 0x11d51c1d */
  if (!C.zf) goto L_11d51c1d;
  /* 11d51c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d51c1b jmp 0x11d51c22 */
  goto L_11d51c22;
L_11d51c1d:;
  /* 11d51c1d mov eax, 1 */
  EAX = (0x1u);
L_11d51c22:;
  /* 11d51c22 pop esi */
  ESI = (pop32());
  /* 11d51c23 mov esp, ebp */
  ESP = (EBP);
  /* 11d51c25 pop ebp */
  EBP = (pop32());
  /* 11d51c26 ret  */
  ESPCHK(0x11d51ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c30 @ 0x11d51c30 (77 bytes, 18 insns) */
void f_11d51c30(void) {
  FTRACE(0x11d51c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51c31 mov ebp, esp */
  EBP = (ESP);
  /* 11d51c33 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51c39 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11d51c43 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11d51c49 push eax */
  push32((uint32_t)(EAX));
  /* 11d51c4a call dword ptr [0x11d742fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742fc))), 0x11d51c50u);
  /* 11d51c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51c52 je 0x11d51c69 */
  if (C.zf) goto L_11d51c69;
  /* 11d51c54 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51c5b jne 0x11d51c69 */
  if (!C.zf) goto L_11d51c69;
  /* 11d51c5d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11d51c67 jmp 0x11d51c73 */
  goto L_11d51c73;
L_11d51c69:;
  /* 11d51c69 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11d51c73:;
  /* 11d51c73 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11d51c79 mov esp, ebp */
  ESP = (EBP);
  /* 11d51c7b pop ebp */
  EBP = (pop32());
  /* 11d51c7c ret  */
  ESPCHK(0x11d51c30u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11d51c80 (388 bytes, 118 insns) */
void f_11d51c80(void) {
  FTRACE(0x11d51c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51c81 mov ebp, esp */
  EBP = (ESP);
  /* 11d51c83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51c86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d51c8d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11d51c94 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d51c9b:;
  /* 11d51c9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d51c9e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51ca1 jg 0x11d51de8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d51de8;
  /* 11d51ca7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d51caa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51cad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d51cae sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51cb0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d51cb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d51cb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51cb8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d51cbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51cbe cmp edx, dword ptr [ecx + 0x11d70520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11d70520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51cc4 jne 0x11d51dbe */
  if (!C.zf) goto L_11d51dbe;
  /* 11d51cca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d51ccd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d51cd0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51cd4 ja 0x11d51cf7 */
  if ((!C.cf&&!C.zf)) goto L_11d51cf7;
  /* 11d51cd6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51cda je 0x11d51d69 */
  if (C.zf) goto L_11d51d69;
  /* 11d51ce0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51ce4 je 0x11d51d14 */
  if (C.zf) goto L_11d51d14;
  /* 11d51ce6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51cea je 0x11d51d36 */
  if (C.zf) goto L_11d51d36;
  /* 11d51cec cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51cf0 je 0x11d51d58 */
  if (C.zf) goto L_11d51d58;
  /* 11d51cf2 jmp 0x11d51d88 */
  goto L_11d51d88;
L_11d51cf7:;
  /* 11d51cf7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51cfe je 0x11d51d25 */
  if (C.zf) goto L_11d51d25;
  /* 11d51d00 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51d07 je 0x11d51d47 */
  if (C.zf) goto L_11d51d47;
  /* 11d51d09 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51d10 je 0x11d51d7a */
  if (C.zf) goto L_11d51d7a;
  /* 11d51d12 jmp 0x11d51d88 */
  goto L_11d51d88;
L_11d51d14:;
  /* 11d51d14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51d17 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d51d1a add ecx, 0x11d70524 */
  { uint32_t _a=(ECX),_b=(0x11d70524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51d20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d51d23 jmp 0x11d51d88 */
  goto L_11d51d88;
L_11d51d25:;
  /* 11d51d25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51d28 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d51d2b mov eax, dword ptr [edx + 0x11d7052c] */
  EAX = (r32((uint32_t)(EDX + 0x11d7052c)));
  /* 11d51d31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d51d34 jmp 0x11d51d88 */
  goto L_11d51d88;
L_11d51d36:;
  /* 11d51d36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51d39 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d51d3c add ecx, 0x11d70530 */
  { uint32_t _a=(ECX),_b=(0x11d70530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51d42 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d51d45 jmp 0x11d51d88 */
  goto L_11d51d88;
L_11d51d47:;
  /* 11d51d47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51d4a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d51d4d mov eax, dword ptr [edx + 0x11d70534] */
  EAX = (r32((uint32_t)(EDX + 0x11d70534)));
  /* 11d51d53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d51d56 jmp 0x11d51d88 */
  goto L_11d51d88;
L_11d51d58:;
  /* 11d51d58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51d5b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d51d5e add ecx, 0x11d70538 */
  { uint32_t _a=(ECX),_b=(0x11d70538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51d64 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d51d67 jmp 0x11d51d88 */
  goto L_11d51d88;
L_11d51d69:;
  /* 11d51d69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51d6c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d51d6f add edx, 0x11d7053c */
  { uint32_t _a=(EDX),_b=(0x11d7053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51d75 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d51d78 jmp 0x11d51d88 */
  goto L_11d51d88;
L_11d51d7a:;
  /* 11d51d7a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51d7d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d51d80 add eax, 0x11d70544 */
  { uint32_t _a=(EAX),_b=(0x11d70544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51d85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d51d88:;
  /* 11d51d88 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51d8c je 0x11d51d94 */
  if (C.zf) goto L_11d51d94;
  /* 11d51d8e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51d92 jge 0x11d51d96 */
  if ((C.sf==C.of)) goto L_11d51d96;
L_11d51d94:;
  /* 11d51d94 jmp 0x11d51de8 */
  goto L_11d51de8;
L_11d51d96:;
  /* 11d51d96 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d51d99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51d9c push ecx */
  push32((uint32_t)(ECX));
  /* 11d51d9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d51da0 push edx */
  push32((uint32_t)(EDX));
  /* 11d51da1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d51da4 push eax */
  push32((uint32_t)(EAX));
  /* 11d51da5 call 0x11d48ba0 */
  push32(0x11d51daau); f_11d48ba0();
  /* 11d51daa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51dad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d51db0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51db3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11d51db7 mov eax, 1 */
  EAX = (0x1u);
  /* 11d51dbc jmp 0x11d51dfe */
  goto L_11d51dfe;
L_11d51dbe:;
  /* 11d51dbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51dc1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d51dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51dc7 cmp eax, dword ptr [edx + 0x11d70520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11d70520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51dcd jae 0x11d51dda */
  if (!C.cf) goto L_11d51dda;
  /* 11d51dcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51dd2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51dd5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d51dd8 jmp 0x11d51de3 */
  goto L_11d51de3;
L_11d51dda:;
  /* 11d51dda mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d51ddd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51de0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d51de3:;
  /* 11d51de3 jmp 0x11d51c9b */
  goto L_11d51c9b;
L_11d51de8:;
  /* 11d51de8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d51deb push eax */
  push32((uint32_t)(EAX));
  /* 11d51dec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d51def push ecx */
  push32((uint32_t)(ECX));
  /* 11d51df0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d51df3 push edx */
  push32((uint32_t)(EDX));
  /* 11d51df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51df7 push eax */
  push32((uint32_t)(EAX));
  /* 11d51df8 call dword ptr [0x11d74308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74308))), 0x11d51dfeu);
L_11d51dfe:;
  /* 11d51dfe mov esp, ebp */
  ESP = (EBP);
  /* 11d51e00 pop ebp */
  EBP = (pop32());
  /* 11d51e01 ret 0x10 */
  ESPCHK(0x11d51c80u, _esp0);
  ESP += 20; return;
}

/* FUN_10011e10 @ 0x11d51e10 (118 bytes, 42 insns) */
void f_11d51e10(void) {
  FTRACE(0x11d51e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51e11 mov ebp, esp */
  EBP = (ESP);
  /* 11d51e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51e16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d51e1d:;
  /* 11d51e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51e20 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d51e22 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11d51e25 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d51e29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51e2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51e2f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d51e32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d51e34 je 0x11d51e7f */
  if (C.zf) goto L_11d51e7f;
  /* 11d51e36 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d51e3a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51e3d jl 0x11d51e52 */
  if ((C.sf!=C.of)) goto L_11d51e52;
  /* 11d51e3f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d51e43 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51e46 jg 0x11d51e52 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d51e52;
  /* 11d51e48 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11d51e4b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d51e4d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11d51e50 jmp 0x11d51e6c */
  goto L_11d51e6c;
L_11d51e52:;
  /* 11d51e52 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d51e56 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51e59 jl 0x11d51e6c */
  if ((C.sf!=C.of)) goto L_11d51e6c;
  /* 11d51e5b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d51e5f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51e62 jg 0x11d51e6c */
  if ((!C.zf&&C.sf==C.of)) goto L_11d51e6c;
  /* 11d51e64 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11d51e67 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d51e69 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11d51e6c:;
  /* 11d51e6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d51e6f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d51e72 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d51e76 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11d51e7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d51e7d jmp 0x11d51e1d */
  goto L_11d51e1d;
L_11d51e7f:;
  /* 11d51e7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d51e82 mov esp, ebp */
  ESP = (EBP);
  /* 11d51e84 pop ebp */
  EBP = (pop32());
  /* 11d51e85 ret  */
  ESPCHK(0x11d51e10u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11d51e90 (101 bytes, 36 insns) */
void f_11d51e90(void) {
  FTRACE(0x11d51e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51e91 mov ebp, esp */
  EBP = (ESP);
  /* 11d51e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d51e96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d51e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51ea0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d51ea2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11d51ea5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51ea8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51eab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11d51eae:;
  /* 11d51eae movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d51eb2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51eb5 jl 0x11d51ec0 */
  if ((C.sf!=C.of)) goto L_11d51ec0;
  /* 11d51eb7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d51ebb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51ebe jle 0x11d51ed2 */
  if ((C.zf||C.sf!=C.of)) goto L_11d51ed2;
L_11d51ec0:;
  /* 11d51ec0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d51ec4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51ec7 jl 0x11d51eee */
  if ((C.sf!=C.of)) goto L_11d51eee;
  /* 11d51ec9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d51ecd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51ed0 jg 0x11d51eee */
  if ((!C.zf&&C.sf==C.of)) goto L_11d51eee;
L_11d51ed2:;
  /* 11d51ed2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d51ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51ed8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d51edb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51ede mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d51ee0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11d51ee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51ee6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51ee9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d51eec jmp 0x11d51eae */
  goto L_11d51eae;
L_11d51eee:;
  /* 11d51eee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d51ef1 mov esp, ebp */
  ESP = (EBP);
  /* 11d51ef3 pop ebp */
  EBP = (pop32());
  /* 11d51ef4 ret  */
  ESPCHK(0x11d51e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f00 @ 0x11d51f00 (122 bytes, 39 insns) */
void f_11d51f00(void) {
  FTRACE(0x11d51f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51f01 mov ebp, esp */
  EBP = (ESP);
  /* 11d51f03 push ecx */
  push32((uint32_t)(ECX));
  /* 11d51f04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51f07 cmp eax, dword ptr [0x11d7315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d7315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51f0d jae 0x11d51f31 */
  if (!C.cf) goto L_11d51f31;
  /* 11d51f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51f12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d51f15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51f18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d51f1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d51f1e mov eax, dword ptr [ecx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d51f25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d51f2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d51f2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d51f2f jne 0x11d51f4c */
  if (!C.zf) goto L_11d51f4c;
L_11d51f31:;
  /* 11d51f31 call 0x11d4d250 */
  push32(0x11d51f36u); f_11d4d250();
  /* 11d51f36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d51f3c call 0x11d4d260 */
  push32(0x11d51f41u); f_11d4d260();
  /* 11d51f41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d51f47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d51f4a jmp 0x11d51f76 */
  goto L_11d51f76;
L_11d51f4c:;
  /* 11d51f4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51f4f push edx */
  push32((uint32_t)(EDX));
  /* 11d51f50 call 0x11d4ea70 */
  push32(0x11d51f55u); f_11d4ea70();
  /* 11d51f55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51f58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51f5b push eax */
  push32((uint32_t)(EAX));
  /* 11d51f5c call 0x11d51f80 */
  push32(0x11d51f61u); f_11d51f80();
  /* 11d51f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51f64 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d51f67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51f6a push ecx */
  push32((uint32_t)(ECX));
  /* 11d51f6b call 0x11d4eb00 */
  push32(0x11d51f70u); f_11d4eb00();
  /* 11d51f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51f73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d51f76:;
  /* 11d51f76 mov esp, ebp */
  ESP = (EBP);
  /* 11d51f78 pop ebp */
  EBP = (pop32());
  /* 11d51f79 ret  */
  ESPCHK(0x11d51f00u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11d51f80 (170 bytes, 59 insns) */
void f_11d51f80(void) {
  FTRACE(0x11d51f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d51f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d51f81 mov ebp, esp */
  EBP = (ESP);
  /* 11d51f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11d51f84 push esi */
  push32((uint32_t)(ESI));
  /* 11d51f85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51f88 push eax */
  push32((uint32_t)(EAX));
  /* 11d51f89 call 0x11d4e8f0 */
  push32(0x11d51f8eu); f_11d4e8f0();
  /* 11d51f8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51f91 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51f94 je 0x11d51fd3 */
  if (C.zf) goto L_11d51fd3;
  /* 11d51f96 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51f9a je 0x11d51fa2 */
  if (C.zf) goto L_11d51fa2;
  /* 11d51f9c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51fa0 jne 0x11d51fbc */
  if (!C.zf) goto L_11d51fbc;
L_11d51fa2:;
  /* 11d51fa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d51fa4 call 0x11d4e8f0 */
  push32(0x11d51fa9u); f_11d4e8f0();
  /* 11d51fa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51fac mov esi, eax */
  ESI = (EAX);
  /* 11d51fae push 2 */
  push32((uint32_t)(0x2u));
  /* 11d51fb0 call 0x11d4e8f0 */
  push32(0x11d51fb5u); f_11d4e8f0();
  /* 11d51fb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51fb8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d51fba je 0x11d51fd3 */
  if (C.zf) goto L_11d51fd3;
L_11d51fbc:;
  /* 11d51fbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51fbf push ecx */
  push32((uint32_t)(ECX));
  /* 11d51fc0 call 0x11d4e8f0 */
  push32(0x11d51fc5u); f_11d4e8f0();
  /* 11d51fc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51fc8 push eax */
  push32((uint32_t)(EAX));
  /* 11d51fc9 call dword ptr [0x11d742f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742f8))), 0x11d51fcfu);
  /* 11d51fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d51fd1 je 0x11d51fdc */
  if (C.zf) goto L_11d51fdc;
L_11d51fd3:;
  /* 11d51fd3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d51fda jmp 0x11d51fe5 */
  goto L_11d51fe5;
L_11d51fdc:;
  /* 11d51fdc call dword ptr [0x11d743f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f0))), 0x11d51fe2u);
  /* 11d51fe2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d51fe5:;
  /* 11d51fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51fe8 push edx */
  push32((uint32_t)(EDX));
  /* 11d51fe9 call 0x11d4e810 */
  push32(0x11d51feeu); f_11d4e810();
  /* 11d51fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d51ff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51ff4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d51ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d51ffa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d51ffd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d52000 mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d52007 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11d5200c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52010 je 0x11d52023 */
  if (C.zf) goto L_11d52023;
  /* 11d52012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52015 push eax */
  push32((uint32_t)(EAX));
  /* 11d52016 call 0x11d4d1b0 */
  push32(0x11d5201bu); f_11d4d1b0();
  /* 11d5201b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5201e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d52021 jmp 0x11d52025 */
  goto L_11d52025;
L_11d52023:;
  /* 11d52023 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d52025:;
  /* 11d52025 pop esi */
  ESI = (pop32());
  /* 11d52026 mov esp, ebp */
  ESP = (EBP);
  /* 11d52028 pop ebp */
  EBP = (pop32());
  /* 11d52029 ret  */
  ESPCHK(0x11d51f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012030 @ 0x11d52030 (146 bytes, 52 insns) */
void f_11d52030(void) {
  FTRACE(0x11d52030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d52030 push ebp */
  push32((uint32_t)(EBP));
  /* 11d52031 mov ebp, esp */
  EBP = (ESP);
  /* 11d52033 push ebx */
  push32((uint32_t)(EBX));
  /* 11d52034 push esi */
  push32((uint32_t)(ESI));
  /* 11d52035 push edi */
  push32((uint32_t)(EDI));
L_11d52036:;
  /* 11d52036 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5203a jne 0x11d5205a */
  if (!C.zf) goto L_11d5205a;
  /* 11d5203c push 0x11d6d328 */
  push32((uint32_t)(0x11d6d328u));
  /* 11d52041 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d52043 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d52045 push 0x11d6d9f0 */
  push32((uint32_t)(0x11d6d9f0u));
  /* 11d5204a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5204c call 0x11d44440 */
  push32(0x11d52051u); f_11d44440();
  /* 11d52051 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52054 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52057 jne 0x11d5205a */
  if (!C.zf) goto L_11d5205a;
  /* 11d52059 int3  */
  x86_unimpl("int3 @ 0x11d52059");
L_11d5205a:;
  /* 11d5205a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5205c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d5205e jne 0x11d52036 */
  if (!C.zf) goto L_11d52036;
  /* 11d52060 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52063 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d52066 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11d5206c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d5206e je 0x11d520bd */
  if (C.zf) goto L_11d520bd;
  /* 11d52070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52073 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d52076 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11d52079 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d5207b je 0x11d520bd */
  if (C.zf) goto L_11d520bd;
  /* 11d5207d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5207f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52082 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d52085 push eax */
  push32((uint32_t)(EAX));
  /* 11d52086 call 0x11d45e10 */
  push32(0x11d5208bu); f_11d45e10();
  /* 11d5208b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5208e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52091 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d52094 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11d5209a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5209d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d520a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d520a3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11d520a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d520ac mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11d520b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d520b6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11d520bd:;
  /* 11d520bd pop edi */
  EDI = (pop32());
  /* 11d520be pop esi */
  ESI = (pop32());
  /* 11d520bf pop ebx */
  EBX = (pop32());
  /* 11d520c0 pop ebp */
  EBP = (pop32());
  /* 11d520c1 ret  */
  ESPCHK(0x11d52030u, _esp0);
  ESP += 4; return;
}

/* FUN_100120d0 @ 0x11d520d0 (289 bytes, 97 insns) */
void f_11d520d0(void) {
  FTRACE(0x11d520d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d520d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d520d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d520d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d520d6 push esi */
  push32((uint32_t)(ESI));
  /* 11d520d7 mov eax, dword ptr [0x11d70c98] */
  EAX = (r32((uint32_t)(0x11d70c98)));
  /* 11d520dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d520df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d520e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d520ed jmp 0x11d520f8 */
  goto L_11d520f8;
L_11d520ef:;
  /* 11d520ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d520f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d520f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d520f8:;
  /* 11d520f8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d520fc jae 0x11d52131 */
  if (!C.cf) goto L_11d52131;
  /* 11d520fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52101 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52104 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d52107 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52108 call 0x11d481b0 */
  push32(0x11d5210du); f_11d481b0();
  /* 11d5210d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52110 mov esi, eax */
  ESI = (EAX);
  /* 11d52112 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52115 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52118 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11d5211c push ecx */
  push32((uint32_t)(ECX));
  /* 11d5211d call 0x11d481b0 */
  push32(0x11d52122u); f_11d481b0();
  /* 11d52122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52125 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52128 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11d5212c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d5212f jmp 0x11d520ef */
  goto L_11d520ef;
L_11d52131:;
  /* 11d52131 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d52134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52137 push eax */
  push32((uint32_t)(EAX));
  /* 11d52138 call 0x11d45360 */
  push32(0x11d5213du); f_11d45360();
  /* 11d5213d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52140 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d52143 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52147 je 0x11d521e9 */
  if (C.zf) goto L_11d521e9;
  /* 11d5214d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52150 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d52153 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d5215a jmp 0x11d52165 */
  goto L_11d52165;
L_11d5215c:;
  /* 11d5215c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d5215f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52162 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d52165:;
  /* 11d52165 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52169 jae 0x11d521da */
  if (!C.cf) goto L_11d521da;
  /* 11d5216b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d5216e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11d52171 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52174 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52177 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d5217a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d5217d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52180 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d52183 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52184 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52187 push edx */
  push32((uint32_t)(EDX));
  /* 11d52188 call 0x11d48330 */
  push32(0x11d5218du); f_11d48330();
  /* 11d5218d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52190 push eax */
  push32((uint32_t)(EAX));
  /* 11d52191 call 0x11d481b0 */
  push32(0x11d52196u); f_11d481b0();
  /* 11d52196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52199 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d5219c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5219e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d521a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d521a4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11d521a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d521aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d521ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d521b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d521b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d521b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11d521ba push eax */
  push32((uint32_t)(EAX));
  /* 11d521bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d521be push ecx */
  push32((uint32_t)(ECX));
  /* 11d521bf call 0x11d48330 */
  push32(0x11d521c4u); f_11d48330();
  /* 11d521c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d521c7 push eax */
  push32((uint32_t)(EAX));
  /* 11d521c8 call 0x11d481b0 */
  push32(0x11d521cdu); f_11d481b0();
  /* 11d521cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d521d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d521d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d521d5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d521d8 jmp 0x11d5215c */
  goto L_11d5215c;
L_11d521da:;
  /* 11d521da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d521dd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d521e0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d521e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d521e6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11d521e9:;
  /* 11d521e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d521ec pop esi */
  ESI = (pop32());
  /* 11d521ed mov esp, ebp */
  ESP = (EBP);
  /* 11d521ef pop ebp */
  EBP = (pop32());
  /* 11d521f0 ret  */
  ESPCHK(0x11d520d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012200 @ 0x11d52200 (291 bytes, 97 insns) */
void f_11d52200(void) {
  FTRACE(0x11d52200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d52200 push ebp */
  push32((uint32_t)(EBP));
  /* 11d52201 mov ebp, esp */
  EBP = (ESP);
  /* 11d52203 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52206 push esi */
  push32((uint32_t)(ESI));
  /* 11d52207 mov eax, dword ptr [0x11d70c98] */
  EAX = (r32((uint32_t)(0x11d70c98)));
  /* 11d5220c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d5220f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d52216 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d5221d jmp 0x11d52228 */
  goto L_11d52228;
L_11d5221f:;
  /* 11d5221f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52222 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52225 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d52228:;
  /* 11d52228 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5222c jae 0x11d52262 */
  if (!C.cf) goto L_11d52262;
  /* 11d5222e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52231 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52234 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11d52238 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52239 call 0x11d481b0 */
  push32(0x11d5223eu); f_11d481b0();
  /* 11d5223e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52241 mov esi, eax */
  ESI = (EAX);
  /* 11d52243 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52246 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52249 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11d5224d push ecx */
  push32((uint32_t)(ECX));
  /* 11d5224e call 0x11d481b0 */
  push32(0x11d52253u); f_11d481b0();
  /* 11d52253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52256 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52259 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11d5225d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d52260 jmp 0x11d5221f */
  goto L_11d5221f;
L_11d52262:;
  /* 11d52262 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d52265 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52268 push eax */
  push32((uint32_t)(EAX));
  /* 11d52269 call 0x11d45360 */
  push32(0x11d5226eu); f_11d45360();
  /* 11d5226e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d52274 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52278 je 0x11d5231b */
  if (C.zf) goto L_11d5231b;
  /* 11d5227e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52281 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d52284 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d5228b jmp 0x11d52296 */
  goto L_11d52296;
L_11d5228d:;
  /* 11d5228d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52290 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52293 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d52296:;
  /* 11d52296 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5229a jae 0x11d5230c */
  if (!C.cf) goto L_11d5230c;
  /* 11d5229c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d5229f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11d522a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d522a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d522a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d522ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d522ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d522b1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11d522b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d522b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d522b9 push edx */
  push32((uint32_t)(EDX));
  /* 11d522ba call 0x11d48330 */
  push32(0x11d522bfu); f_11d48330();
  /* 11d522bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d522c2 push eax */
  push32((uint32_t)(EAX));
  /* 11d522c3 call 0x11d481b0 */
  push32(0x11d522c8u); f_11d481b0();
  /* 11d522c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d522cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d522ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d522d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d522d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d522d6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11d522d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d522dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d522df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d522e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d522e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d522e8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11d522ec push eax */
  push32((uint32_t)(EAX));
  /* 11d522ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d522f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d522f1 call 0x11d48330 */
  push32(0x11d522f6u); f_11d48330();
  /* 11d522f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d522f9 push eax */
  push32((uint32_t)(EAX));
  /* 11d522fa call 0x11d481b0 */
  push32(0x11d522ffu); f_11d481b0();
  /* 11d522ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52302 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52305 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52307 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d5230a jmp 0x11d5228d */
  goto L_11d5228d;
L_11d5230c:;
  /* 11d5230c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d5230f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d52312 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52315 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52318 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11d5231b:;
  /* 11d5231b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5231e pop esi */
  ESI = (pop32());
  /* 11d5231f mov esp, ebp */
  ESP = (EBP);
  /* 11d52321 pop ebp */
  EBP = (pop32());
  /* 11d52322 ret  */
  ESPCHK(0x11d52200u, _esp0);
  ESP += 4; return;
}

/* FUN_10012330 @ 0x11d52330 (878 bytes, 273 insns) */
void f_11d52330(void) {
  FTRACE(0x11d52330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d52330 push ebp */
  push32((uint32_t)(EBP));
  /* 11d52331 mov ebp, esp */
  EBP = (ESP);
  /* 11d52333 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52336 push esi */
  push32((uint32_t)(ESI));
  /* 11d52337 mov eax, dword ptr [0x11d70c98] */
  EAX = (r32((uint32_t)(0x11d70c98)));
  /* 11d5233c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d5233f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d52346 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d5234d jmp 0x11d52358 */
  goto L_11d52358;
L_11d5234f:;
  /* 11d5234f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52352 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52355 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d52358:;
  /* 11d52358 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5235c jae 0x11d52391 */
  if (!C.cf) goto L_11d52391;
  /* 11d5235e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52361 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52364 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d52367 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52368 call 0x11d481b0 */
  push32(0x11d5236du); f_11d481b0();
  /* 11d5236d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52370 mov esi, eax */
  ESI = (EAX);
  /* 11d52372 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52375 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52378 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11d5237c push ecx */
  push32((uint32_t)(ECX));
  /* 11d5237d call 0x11d481b0 */
  push32(0x11d52382u); f_11d481b0();
  /* 11d52382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52385 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52388 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11d5238c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d5238f jmp 0x11d5234f */
  goto L_11d5234f;
L_11d52391:;
  /* 11d52391 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d52398 jmp 0x11d523a3 */
  goto L_11d523a3;
L_11d5239a:;
  /* 11d5239a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d5239d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d523a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11d523a3:;
  /* 11d523a3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d523a7 jae 0x11d523dd */
  if (!C.cf) goto L_11d523dd;
  /* 11d523a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d523ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d523af mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11d523b3 push eax */
  push32((uint32_t)(EAX));
  /* 11d523b4 call 0x11d481b0 */
  push32(0x11d523b9u); f_11d481b0();
  /* 11d523b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d523bc mov esi, eax */
  ESI = (EAX);
  /* 11d523be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d523c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d523c4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11d523c8 push eax */
  push32((uint32_t)(EAX));
  /* 11d523c9 call 0x11d481b0 */
  push32(0x11d523ceu); f_11d481b0();
  /* 11d523ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d523d1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d523d4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11d523d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d523db jmp 0x11d5239a */
  goto L_11d5239a;
L_11d523dd:;
  /* 11d523dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d523e0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11d523e6 push eax */
  push32((uint32_t)(EAX));
  /* 11d523e7 call 0x11d481b0 */
  push32(0x11d523ecu); f_11d481b0();
  /* 11d523ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d523ef mov esi, eax */
  ESI = (EAX);
  /* 11d523f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d523f4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11d523fa push edx */
  push32((uint32_t)(EDX));
  /* 11d523fb call 0x11d481b0 */
  push32(0x11d52400u); f_11d481b0();
  /* 11d52400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52403 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52406 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11d5240a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d5240d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52410 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11d52416 push edx */
  push32((uint32_t)(EDX));
  /* 11d52417 call 0x11d481b0 */
  push32(0x11d5241cu); f_11d481b0();
  /* 11d5241c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5241f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d52422 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d52426 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d52429 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5242c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11d52432 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52433 call 0x11d481b0 */
  push32(0x11d52438u); f_11d481b0();
  /* 11d52438 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5243b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5243e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11d52442 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d52445 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52448 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11d5244e push edx */
  push32((uint32_t)(EDX));
  /* 11d5244f call 0x11d481b0 */
  push32(0x11d52454u); f_11d481b0();
  /* 11d52454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5245a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d5245e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d52461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d52464 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52469 push eax */
  push32((uint32_t)(EAX));
  /* 11d5246a call 0x11d45360 */
  push32(0x11d5246fu); f_11d45360();
  /* 11d5246f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52472 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d52475 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52479 je 0x11d52696 */
  if (C.zf) goto L_11d52696;
  /* 11d5247f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52482 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d52485 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52488 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5248e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d52491 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11d52496 mov eax, dword ptr [0x11d70c98] */
  EAX = (r32((uint32_t)(0x11d70c98)));
  /* 11d5249b push eax */
  push32((uint32_t)(EAX));
  /* 11d5249c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5249f push ecx */
  push32((uint32_t)(ECX));
  /* 11d524a0 call 0x11d4bc60 */
  push32(0x11d524a5u); f_11d4bc60();
  /* 11d524a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d524a8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d524af jmp 0x11d524ba */
  goto L_11d524ba;
L_11d524b1:;
  /* 11d524b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d524b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d524b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d524ba:;
  /* 11d524ba cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d524be jae 0x11d5252e */
  if (!C.cf) goto L_11d5252e;
  /* 11d524c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d524c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d524c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d524c9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11d524cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d524cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d524d2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d524d5 push edx */
  push32((uint32_t)(EDX));
  /* 11d524d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d524d9 push eax */
  push32((uint32_t)(EAX));
  /* 11d524da call 0x11d48330 */
  push32(0x11d524dfu); f_11d48330();
  /* 11d524df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d524e2 push eax */
  push32((uint32_t)(EAX));
  /* 11d524e3 call 0x11d481b0 */
  push32(0x11d524e8u); f_11d481b0();
  /* 11d524e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d524eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d524ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d524f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d524f5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d524f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d524fb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d524fe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11d52502 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52505 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52508 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11d5250c push edx */
  push32((uint32_t)(EDX));
  /* 11d5250d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52510 push eax */
  push32((uint32_t)(EAX));
  /* 11d52511 call 0x11d48330 */
  push32(0x11d52516u); f_11d48330();
  /* 11d52516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52519 push eax */
  push32((uint32_t)(EAX));
  /* 11d5251a call 0x11d481b0 */
  push32(0x11d5251fu); f_11d481b0();
  /* 11d5251f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52522 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52525 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d52529 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d5252c jmp 0x11d524b1 */
  goto L_11d524b1;
L_11d5252e:;
  /* 11d5252e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d52535 jmp 0x11d52540 */
  goto L_11d52540;
L_11d52537:;
  /* 11d52537 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d5253a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5253d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11d52540:;
  /* 11d52540 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52544 jae 0x11d525b6 */
  if (!C.cf) goto L_11d525b6;
  /* 11d52546 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52549 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d5254c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d5254f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11d52553 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52556 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52559 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11d5255d push eax */
  push32((uint32_t)(EAX));
  /* 11d5255e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52561 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52562 call 0x11d48330 */
  push32(0x11d52567u); f_11d48330();
  /* 11d52567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5256a push eax */
  push32((uint32_t)(EAX));
  /* 11d5256b call 0x11d481b0 */
  push32(0x11d52570u); f_11d481b0();
  /* 11d52570 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52573 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52576 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11d5257a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d5257d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d52580 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d52583 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52586 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11d5258a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d5258d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52590 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11d52594 push eax */
  push32((uint32_t)(EAX));
  /* 11d52595 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52598 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52599 call 0x11d48330 */
  push32(0x11d5259eu); f_11d48330();
  /* 11d5259e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d525a1 push eax */
  push32((uint32_t)(EAX));
  /* 11d525a2 call 0x11d481b0 */
  push32(0x11d525a7u); f_11d481b0();
  /* 11d525a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d525aa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d525ad lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11d525b1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d525b4 jmp 0x11d52537 */
  goto L_11d52537;
L_11d525b6:;
  /* 11d525b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d525b9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d525bc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11d525c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d525c5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11d525cb push ecx */
  push32((uint32_t)(ECX));
  /* 11d525cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d525cf push edx */
  push32((uint32_t)(EDX));
  /* 11d525d0 call 0x11d48330 */
  push32(0x11d525d5u); f_11d48330();
  /* 11d525d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d525d8 push eax */
  push32((uint32_t)(EAX));
  /* 11d525d9 call 0x11d481b0 */
  push32(0x11d525deu); f_11d481b0();
  /* 11d525de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d525e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d525e4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d525e8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d525eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d525ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d525f1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11d525f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d525fa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11d52600 push eax */
  push32((uint32_t)(EAX));
  /* 11d52601 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52604 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52605 call 0x11d48330 */
  push32(0x11d5260au); f_11d48330();
  /* 11d5260a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5260d push eax */
  push32((uint32_t)(EAX));
  /* 11d5260e call 0x11d481b0 */
  push32(0x11d52613u); f_11d481b0();
  /* 11d52613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52616 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52619 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11d5261d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d52620 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d52623 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52626 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11d5262c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5262f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11d52635 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52636 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52639 push edx */
  push32((uint32_t)(EDX));
  /* 11d5263a call 0x11d48330 */
  push32(0x11d5263fu); f_11d48330();
  /* 11d5263f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52642 push eax */
  push32((uint32_t)(EAX));
  /* 11d52643 call 0x11d481b0 */
  push32(0x11d52648u); f_11d481b0();
  /* 11d52648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5264b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d5264e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d52652 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d52655 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d52658 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d5265b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11d52661 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52664 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11d5266a push eax */
  push32((uint32_t)(EAX));
  /* 11d5266b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d5266e push ecx */
  push32((uint32_t)(ECX));
  /* 11d5266f call 0x11d48330 */
  push32(0x11d52674u); f_11d48330();
  /* 11d52674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52677 push eax */
  push32((uint32_t)(EAX));
  /* 11d52678 call 0x11d481b0 */
  push32(0x11d5267du); f_11d481b0();
  /* 11d5267d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52680 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52683 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11d52687 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d5268a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d5268d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d52690 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11d52696:;
  /* 11d52696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52699 pop esi */
  ESI = (pop32());
  /* 11d5269a mov esp, ebp */
  ESP = (EBP);
  /* 11d5269c pop ebp */
  EBP = (pop32());
  /* 11d5269d ret  */
  ESPCHK(0x11d52330u, _esp0);
  ESP += 4; return;
}

/* FUN_100126a0 @ 0x11d526a0 (31 bytes, 15 insns) */
void f_11d526a0(void) {
  FTRACE(0x11d526a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d526a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d526a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d526a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d526a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d526a8 push eax */
  push32((uint32_t)(EAX));
  /* 11d526a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d526ac push ecx */
  push32((uint32_t)(ECX));
  /* 11d526ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d526b0 push edx */
  push32((uint32_t)(EDX));
  /* 11d526b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d526b4 push eax */
  push32((uint32_t)(EAX));
  /* 11d526b5 call 0x11d526c0 */
  push32(0x11d526bau); f_11d526c0();
  /* 11d526ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d526bd pop ebp */
  EBP = (pop32());
  /* 11d526be ret  */
  ESPCHK(0x11d526a0u, _esp0);
  ESP += 4; return;
}

