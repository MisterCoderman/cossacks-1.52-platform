#include "recomp.h"

/* FUN_1000cd50 @ 0x1193cd50 (10 bytes, 5 insns) */
void f_1193cd50(void) {
  FTRACE(0x1193cd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193cd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1193cd51 mov ebp, esp */
  EBP = (ESP);
  /* 1193cd53 mov eax, dword ptr [0x11963c94] */
  EAX = (r32((uint32_t)(0x11963c94)));
  /* 1193cd58 pop ebp */
  EBP = (pop32());
  /* 1193cd59 ret  */
  ESPCHK(0x1193cd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x1193cd60 (31 bytes, 11 insns) */
void f_1193cd60(void) {
  FTRACE(0x1193cd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193cd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1193cd61 mov ebp, esp */
  EBP = (ESP);
  /* 1193cd63 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193cd6a jbe 0x1193cd70 */
  if ((C.cf||C.zf)) goto L_1193cd70;
  /* 1193cd6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193cd6e jmp 0x1193cd7d */
  goto L_1193cd7d;
L_1193cd70:;
  /* 1193cd70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193cd73 mov dword ptr [0x11963c94], eax */
  w32((uint32_t)(0x11963c94), (EAX));
  /* 1193cd78 mov eax, 1 */
  EAX = (0x1u);
L_1193cd7d:;
  /* 1193cd7d pop ebp */
  EBP = (pop32());
  /* 1193cd7e ret  */
  ESPCHK(0x1193cd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd80 @ 0x1193cd80 (89 bytes, 20 insns) */
void f_1193cd80(void) {
  FTRACE(0x1193cd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193cd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1193cd81 mov ebp, esp */
  EBP = (ESP);
  /* 1193cd83 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1193cd88 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193cd8a mov eax, dword ptr [0x119671ec] */
  EAX = (r32((uint32_t)(0x119671ec)));
  /* 1193cd8f push eax */
  push32((uint32_t)(EAX));
  /* 1193cd90 call dword ptr [0x11968344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968344))), 0x1193cd96u);
  /* 1193cd96 mov dword ptr [0x119671e8], eax */
  w32((uint32_t)(0x119671e8), (EAX));
  /* 1193cd9b cmp dword ptr [0x119671e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119671e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193cda2 jne 0x1193cda8 */
  if (!C.zf) goto L_1193cda8;
  /* 1193cda4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193cda6 jmp 0x1193cdd7 */
  goto L_1193cdd7;
L_1193cda8:;
  /* 1193cda8 mov ecx, dword ptr [0x119671e8] */
  ECX = (r32((uint32_t)(0x119671e8)));
  /* 1193cdae mov dword ptr [0x119671dc], ecx */
  w32((uint32_t)(0x119671dc), (ECX));
  /* 1193cdb4 mov dword ptr [0x119671e0], 0 */
  w32((uint32_t)(0x119671e0), (0x0u));
  /* 1193cdbe mov dword ptr [0x119671e4], 0 */
  w32((uint32_t)(0x119671e4), (0x0u));
  /* 1193cdc8 mov dword ptr [0x119671c8], 0x10 */
  w32((uint32_t)(0x119671c8), (0x10u));
  /* 1193cdd2 mov eax, 1 */
  EAX = (0x1u);
L_1193cdd7:;
  /* 1193cdd7 pop ebp */
  EBP = (pop32());
  /* 1193cdd8 ret  */
  ESPCHK(0x1193cd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cde0 @ 0x1193cde0 (85 bytes, 29 insns) */
void f_1193cde0(void) {
  FTRACE(0x1193cde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193cde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193cde1 mov ebp, esp */
  EBP = (ESP);
  /* 1193cde3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193cde6 mov eax, dword ptr [0x119671e4] */
  EAX = (r32((uint32_t)(0x119671e4)));
  /* 1193cdeb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193cdee mov ecx, dword ptr [0x119671e8] */
  ECX = (r32((uint32_t)(0x119671e8)));
  /* 1193cdf4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193cdf6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1193cdf9 mov edx, dword ptr [0x119671e8] */
  EDX = (r32((uint32_t)(0x119671e8)));
  /* 1193cdff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1193ce02:;
  /* 1193ce02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ce05 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ce08 jae 0x1193ce2f */
  if (!C.cf) goto L_1193ce2f;
  /* 1193ce0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ce0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ce10 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ce13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1193ce16 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ce1d jae 0x1193ce24 */
  if (!C.cf) goto L_1193ce24;
  /* 1193ce1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ce22 jmp 0x1193ce31 */
  goto L_1193ce31;
L_1193ce24:;
  /* 1193ce24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ce27 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ce2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1193ce2d jmp 0x1193ce02 */
  goto L_1193ce02;
L_1193ce2f:;
  /* 1193ce2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1193ce31:;
  /* 1193ce31 mov esp, ebp */
  ESP = (EBP);
  /* 1193ce33 pop ebp */
  EBP = (pop32());
  /* 1193ce34 ret  */
  ESPCHK(0x1193cde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce40 @ 0x1193ce40 (95 bytes, 33 insns) */
void f_1193ce40(void) {
  FTRACE(0x1193ce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193ce40 push ebp */
  push32((uint32_t)(EBP));
  /* 1193ce41 mov ebp, esp */
  EBP = (ESP);
  /* 1193ce43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ce46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ce49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193ce4c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ce4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1193ce52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ce55 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1193ce58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1193ce5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193ce60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ce63 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193ce65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ce68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1193ce6b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1193ce6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193ce6f jne 0x1193ce91 */
  if (!C.zf) goto L_1193ce91;
  /* 1193ce71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ce74 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1193ce77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193ce79 jne 0x1193ce91 */
  if (!C.zf) goto L_1193ce91;
  /* 1193ce7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ce7e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1193ce84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193ce86 je 0x1193ce91 */
  if (C.zf) goto L_1193ce91;
  /* 1193ce88 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1193ce8f jmp 0x1193ce98 */
  goto L_1193ce98;
L_1193ce91:;
  /* 1193ce91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1193ce98:;
  /* 1193ce98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193ce9b mov esp, ebp */
  ESP = (EBP);
  /* 1193ce9d pop ebp */
  EBP = (pop32());
  /* 1193ce9e ret  */
  ESPCHK(0x1193ce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cea0 @ 0x1193cea0 (1485 bytes, 453 insns) */
void f_1193cea0(void) {
  FTRACE(0x1193cea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193cea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193cea1 mov ebp, esp */
  EBP = (ESP);
  /* 1193cea3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193cea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193cea9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193ceac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1193ceaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ceb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193ceb5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ceb8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1193cebb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193cebe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1193cec1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1193cec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193cec7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193cecd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193ced0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1193ced7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1193ceda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193cedd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193cee0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1193cee3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193cee6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1193cee8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ceeb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1193ceee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193cef1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193cef4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1193cef7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193cefa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1193cefc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1193ceff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193cf02 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1193cf05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1193cf08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193cf0b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1193cf0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193cf10 jne 0x1193d038 */
  if (!C.zf) goto L_1193d038;
  /* 1193cf16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193cf19 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1193cf1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193cf1f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1193cf22 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193cf26 jbe 0x1193cf2f */
  if ((C.cf||C.zf)) goto L_1193cf2f;
  /* 1193cf28 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1193cf2f:;
  /* 1193cf2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193cf32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193cf35 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193cf38 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193cf3b jne 0x1193d011 */
  if (!C.zf) goto L_1193d011;
  /* 1193cf41 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193cf45 jae 0x1193cfa6 */
  if (!C.cf) goto L_1193cfa6;
  /* 1193cf47 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193cf4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193cf4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193cf51 not eax */
  EAX = (~(EAX));
  /* 1193cf53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193cf56 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193cf59 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1193cf5d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1193cf5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193cf62 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193cf65 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1193cf69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193cf6c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193cf6f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1193cf72 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193cf75 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193cf78 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193cf7b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1193cf7e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193cf81 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193cf84 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1193cf88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193cf8a jne 0x1193cfa4 */
  if (!C.zf) goto L_1193cfa4;
  /* 1193cf8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193cf91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193cf94 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193cf96 not eax */
  EAX = (~(EAX));
  /* 1193cf98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193cf9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1193cf9d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1193cf9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193cfa2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1193cfa4:;
  /* 1193cfa4 jmp 0x1193d011 */
  goto L_1193d011;
L_1193cfa6:;
  /* 1193cfa6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193cfa9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193cfac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193cfb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193cfb3 not edx */
  EDX = (~(EDX));
  /* 1193cfb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193cfb8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193cfbb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1193cfc2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193cfc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193cfc7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193cfca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1193cfd1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193cfd4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193cfd7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1193cfda sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193cfdd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193cfe0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193cfe3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1193cfe6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193cfe9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193cfec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1193cff0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193cff2 jne 0x1193d011 */
  if (!C.zf) goto L_1193d011;
  /* 1193cff4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193cff7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193cffa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193cfff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d001 not edx */
  EDX = (~(EDX));
  /* 1193d003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d006 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193d009 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d00b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d00e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1193d011:;
  /* 1193d011 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d014 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1193d017 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d01a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1193d01d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1193d020 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d023 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193d026 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d029 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1193d02c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1193d02f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d032 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d035 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1193d038:;
  /* 1193d038 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d03b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1193d03e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d041 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1193d044 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d048 jbe 0x1193d051 */
  if ((C.cf||C.zf)) goto L_1193d051;
  /* 1193d04a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1193d051:;
  /* 1193d051 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193d054 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1193d057 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193d059 jne 0x1193d1b5 */
  if (!C.zf) goto L_1193d1b5;
  /* 1193d05f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d062 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d065 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1193d068 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193d06b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1193d06e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d071 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1193d074 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d078 jbe 0x1193d081 */
  if ((C.cf||C.zf)) goto L_1193d081;
  /* 1193d07a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1193d081:;
  /* 1193d081 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d084 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d087 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1193d08a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d08d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1193d090 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d093 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1193d096 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d09a jbe 0x1193d0a3 */
  if ((C.cf||C.zf)) goto L_1193d0a3;
  /* 1193d09c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1193d0a3:;
  /* 1193d0a3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193d0a6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d0a9 je 0x1193d1af */
  if (C.zf) goto L_1193d1af;
  /* 1193d0af mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d0b2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d0b5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193d0b8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d0bb jne 0x1193d191 */
  if (!C.zf) goto L_1193d191;
  /* 1193d0c1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d0c5 jae 0x1193d126 */
  if (!C.cf) goto L_1193d126;
  /* 1193d0c7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193d0cc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193d0cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d0d1 not edx */
  EDX = (~(EDX));
  /* 1193d0d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d0d6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d0d9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1193d0dd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193d0df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d0e2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d0e5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1193d0e9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d0ec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d0ef mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1193d0f2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193d0f5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d0f8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d0fb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1193d0fe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d101 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d104 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1193d108 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193d10a jne 0x1193d124 */
  if (!C.zf) goto L_1193d124;
  /* 1193d10c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193d111 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193d114 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d116 not edx */
  EDX = (~(EDX));
  /* 1193d118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d11b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1193d11d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d11f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d122 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1193d124:;
  /* 1193d124 jmp 0x1193d191 */
  goto L_1193d191;
L_1193d126:;
  /* 1193d126 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193d129 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d12c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193d131 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193d133 not eax */
  EAX = (~(EAX));
  /* 1193d135 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d138 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d13b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1193d142 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d144 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d147 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d14a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1193d151 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d154 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d157 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1193d15a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193d15d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d160 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d163 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1193d166 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d169 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d16c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1193d170 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193d172 jne 0x1193d191 */
  if (!C.zf) goto L_1193d191;
  /* 1193d174 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193d177 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d17a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193d17f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193d181 not eax */
  EAX = (~(EAX));
  /* 1193d183 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d186 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193d189 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1193d18b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d18e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1193d191:;
  /* 1193d191 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d194 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1193d197 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d19a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193d19d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1193d1a0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d1a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1193d1a6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d1a9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1193d1ac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1193d1af:;
  /* 1193d1af mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d1b2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1193d1b5:;
  /* 1193d1b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193d1b8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1193d1bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193d1bd jne 0x1193d1cb */
  if (!C.zf) goto L_1193d1cb;
  /* 1193d1bf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193d1c2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d1c5 je 0x1193d2db */
  if (C.zf) goto L_1193d2db;
L_1193d1cb:;
  /* 1193d1cb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193d1ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193d1d1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1193d1d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1193d1d7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d1da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d1dd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193d1e0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1193d1e3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d1e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d1e9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1193d1ec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d1ef mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d1f2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1193d1f5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d1f8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193d1fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d1fe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1193d201 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d204 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d207 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193d20a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d20d jne 0x1193d2db */
  if (!C.zf) goto L_1193d2db;
  /* 1193d213 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d217 jae 0x1193d274 */
  if (!C.cf) goto L_1193d274;
  /* 1193d219 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d21c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d21f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1193d223 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d226 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d229 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1193d22c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1193d22f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d232 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d235 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1193d238 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193d23a jne 0x1193d252 */
  if (!C.zf) goto L_1193d252;
  /* 1193d23c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193d241 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193d244 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d249 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1193d24b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d24d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d250 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1193d252:;
  /* 1193d252 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193d257 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193d25a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193d25c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d25f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d262 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1193d266 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d268 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d26b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d26e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1193d272 jmp 0x1193d2db */
  goto L_1193d2db;
L_1193d274:;
  /* 1193d274 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d277 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d27a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1193d27e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d281 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d284 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1193d287 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1193d28a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d28d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d290 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1193d293 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193d295 jne 0x1193d2b2 */
  if (!C.zf) goto L_1193d2b2;
  /* 1193d297 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193d29a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d29d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193d2a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d2a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193d2aa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d2ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d2af mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1193d2b2:;
  /* 1193d2b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193d2b5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d2b8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193d2bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193d2bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d2c2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d2c5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1193d2cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d2ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d2d1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1193d2d4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1193d2db:;
  /* 1193d2db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d2de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d2e1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1193d2e3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d2e6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d2e9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d2ec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1193d2ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193d2f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1193d2f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d2f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193d2fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1193d2fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193d2ff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d302 jne 0x1193d469 */
  if (!C.zf) goto L_1193d469;
  /* 1193d308 cmp dword ptr [0x119671e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119671e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d30f je 0x1193d458 */
  if (C.zf) goto L_1193d458;
  /* 1193d315 mov eax, dword ptr [0x119671d8] */
  EAX = (r32((uint32_t)(0x119671d8)));
  /* 1193d31a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1193d31d mov ecx, dword ptr [0x119671e0] */
  ECX = (r32((uint32_t)(0x119671e0)));
  /* 1193d323 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1193d326 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d328 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1193d32b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1193d330 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1193d335 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d338 push eax */
  push32((uint32_t)(EAX));
  /* 1193d339 call dword ptr [0x11968360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968360))), 0x1193d33fu);
  /* 1193d33f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193d344 mov ecx, dword ptr [0x119671d8] */
  ECX = (r32((uint32_t)(0x119671d8)));
  /* 1193d34a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d34c mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193d351 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1193d354 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d356 mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193d35c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1193d35f mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193d364 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193d367 mov edx, dword ptr [0x119671d8] */
  EDX = (r32((uint32_t)(0x119671d8)));
  /* 1193d36d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1193d378 mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193d37d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193d380 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1193d383 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193d386 mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193d38b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193d38e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1193d391 mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193d397 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1193d39a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1193d39e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193d3a0 jne 0x1193d3b6 */
  if (!C.zf) goto L_1193d3b6;
  /* 1193d3a2 mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193d3a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1193d3ab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1193d3ad mov ecx, dword ptr [0x119671e0] */
  ECX = (r32((uint32_t)(0x119671e0)));
  /* 1193d3b3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1193d3b6:;
  /* 1193d3b6 mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193d3bc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d3c0 jne 0x1193d458 */
  if (!C.zf) goto L_1193d458;
  /* 1193d3c6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1193d3cb push 0 */
  push32((uint32_t)(0x0u));
  /* 1193d3cd mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193d3d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1193d3d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1193d3d6 call dword ptr [0x11968360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968360))), 0x1193d3dcu);
  /* 1193d3dc mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193d3e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1193d3e5 push eax */
  push32((uint32_t)(EAX));
  /* 1193d3e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193d3e8 mov ecx, dword ptr [0x119671ec] */
  ECX = (r32((uint32_t)(0x119671ec)));
  /* 1193d3ee push ecx */
  push32((uint32_t)(ECX));
  /* 1193d3ef call dword ptr [0x11968364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968364))), 0x1193d3f5u);
  /* 1193d3f5 mov edx, dword ptr [0x119671e4] */
  EDX = (r32((uint32_t)(0x119671e4)));
  /* 1193d3fb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193d3fe mov eax, dword ptr [0x119671e8] */
  EAX = (r32((uint32_t)(0x119671e8)));
  /* 1193d403 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d405 mov ecx, dword ptr [0x119671e0] */
  ECX = (r32((uint32_t)(0x119671e0)));
  /* 1193d40b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d40e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d410 push eax */
  push32((uint32_t)(EAX));
  /* 1193d411 mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193d417 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d41a push edx */
  push32((uint32_t)(EDX));
  /* 1193d41b mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193d420 push eax */
  push32((uint32_t)(EAX));
  /* 1193d421 call 0x119409d0 */
  push32(0x1193d426u); f_119409d0();
  /* 1193d426 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d429 mov ecx, dword ptr [0x119671e4] */
  ECX = (r32((uint32_t)(0x119671e4)));
  /* 1193d42f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d432 mov dword ptr [0x119671e4], ecx */
  w32((uint32_t)(0x119671e4), (ECX));
  /* 1193d438 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d43b cmp edx, dword ptr [0x119671e0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119671e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d441 jbe 0x1193d44c */
  if ((C.cf||C.zf)) goto L_1193d44c;
  /* 1193d443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d446 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d449 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1193d44c:;
  /* 1193d44c mov ecx, dword ptr [0x119671e8] */
  ECX = (r32((uint32_t)(0x119671e8)));
  /* 1193d452 mov dword ptr [0x119671dc], ecx */
  w32((uint32_t)(0x119671dc), (ECX));
L_1193d458:;
  /* 1193d458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d45b mov dword ptr [0x119671e0], edx */
  w32((uint32_t)(0x119671e0), (EDX));
  /* 1193d461 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d464 mov dword ptr [0x119671d8], eax */
  w32((uint32_t)(0x119671d8), (EAX));
L_1193d469:;
  /* 1193d469 mov esp, ebp */
  ESP = (EBP);
  /* 1193d46b pop ebp */
  EBP = (pop32());
  /* 1193d46c ret  */
  ESPCHK(0x1193cea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d470 @ 0x1193d470 (1334 bytes, 427 insns) */
void f_1193d470(void) {
  FTRACE(0x1193d470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193d470 push ebp */
  push32((uint32_t)(EBP));
  /* 1193d471 mov ebp, esp */
  EBP = (ESP);
  /* 1193d473 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d476 push esi */
  push32((uint32_t)(ESI));
  /* 1193d477 mov eax, dword ptr [0x119671e4] */
  EAX = (r32((uint32_t)(0x119671e4)));
  /* 1193d47c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193d47f mov ecx, dword ptr [0x119671e8] */
  ECX = (r32((uint32_t)(0x119671e8)));
  /* 1193d485 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d487 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1193d48a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193d48d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d490 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1193d493 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1193d496 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193d499 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1193d49c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d49f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1193d4a2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d4a6 jge 0x1193d4bc */
  if ((C.sf==C.of)) goto L_1193d4bc;
  /* 1193d4a8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1193d4ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d4ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d4b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1193d4b3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1193d4ba jmp 0x1193d4d1 */
  goto L_1193d4d1;
L_1193d4bc:;
  /* 1193d4bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1193d4c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d4c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d4c9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1193d4cc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193d4ce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1193d4d1:;
  /* 1193d4d1 mov ecx, dword ptr [0x119671dc] */
  ECX = (r32((uint32_t)(0x119671dc)));
  /* 1193d4d7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1193d4da:;
  /* 1193d4da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d4dd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d4e0 jae 0x1193d506 */
  if (!C.cf) goto L_1193d506;
  /* 1193d4e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d4e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193d4e8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1193d4ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d4ed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d4f0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1193d4f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d4f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193d4f7 je 0x1193d4fb */
  if (C.zf) goto L_1193d4fb;
  /* 1193d4f9 jmp 0x1193d506 */
  goto L_1193d506;
L_1193d4fb:;
  /* 1193d4fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d4fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d501 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1193d504 jmp 0x1193d4da */
  goto L_1193d4da;
L_1193d506:;
  /* 1193d506 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d509 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d50c jne 0x1193d5ed */
  if (!C.zf) goto L_1193d5ed;
  /* 1193d512 mov eax, dword ptr [0x119671e8] */
  EAX = (r32((uint32_t)(0x119671e8)));
  /* 1193d517 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1193d51a:;
  /* 1193d51a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d51d cmp ecx, dword ptr [0x119671dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119671dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d523 jae 0x1193d549 */
  if (!C.cf) goto L_1193d549;
  /* 1193d525 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d528 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193d52b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1193d52d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d530 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d533 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1193d536 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193d538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193d53a je 0x1193d53e */
  if (C.zf) goto L_1193d53e;
  /* 1193d53c jmp 0x1193d549 */
  goto L_1193d549;
L_1193d53e:;
  /* 1193d53e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d541 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d544 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1193d547 jmp 0x1193d51a */
  goto L_1193d51a;
L_1193d549:;
  /* 1193d549 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d54c cmp ecx, dword ptr [0x119671dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119671dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d552 jne 0x1193d5ed */
  if (!C.zf) goto L_1193d5ed;
L_1193d558:;
  /* 1193d558 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d55b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d55e jae 0x1193d576 */
  if (!C.cf) goto L_1193d576;
  /* 1193d560 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d563 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d567 je 0x1193d56b */
  if (C.zf) goto L_1193d56b;
  /* 1193d569 jmp 0x1193d576 */
  goto L_1193d576;
L_1193d56b:;
  /* 1193d56b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d56e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d571 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1193d574 jmp 0x1193d558 */
  goto L_1193d558;
L_1193d576:;
  /* 1193d576 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d579 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d57c jne 0x1193d5c7 */
  if (!C.zf) goto L_1193d5c7;
  /* 1193d57e mov eax, dword ptr [0x119671e8] */
  EAX = (r32((uint32_t)(0x119671e8)));
  /* 1193d583 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1193d586:;
  /* 1193d586 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d589 cmp ecx, dword ptr [0x119671dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119671dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d58f jae 0x1193d5a7 */
  if (!C.cf) goto L_1193d5a7;
  /* 1193d591 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d594 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d598 je 0x1193d59c */
  if (C.zf) goto L_1193d59c;
  /* 1193d59a jmp 0x1193d5a7 */
  goto L_1193d5a7;
L_1193d59c:;
  /* 1193d59c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d59f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d5a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1193d5a5 jmp 0x1193d586 */
  goto L_1193d586;
L_1193d5a7:;
  /* 1193d5a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d5aa cmp ecx, dword ptr [0x119671dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119671dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d5b0 jne 0x1193d5c7 */
  if (!C.zf) goto L_1193d5c7;
  /* 1193d5b2 call 0x1193d9b0 */
  push32(0x1193d5b7u); f_1193d9b0();
  /* 1193d5b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1193d5ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d5be jne 0x1193d5c7 */
  if (!C.zf) goto L_1193d5c7;
  /* 1193d5c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193d5c2 jmp 0x1193d9a1 */
  goto L_1193d9a1;
L_1193d5c7:;
  /* 1193d5c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d5ca push edx */
  push32((uint32_t)(EDX));
  /* 1193d5cb call 0x1193dac0 */
  push32(0x1193d5d0u); f_1193dac0();
  /* 1193d5d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d5d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d5d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1193d5d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1193d5db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d5de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193d5e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d5e4 jne 0x1193d5ed */
  if (!C.zf) goto L_1193d5ed;
  /* 1193d5e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193d5e8 jmp 0x1193d9a1 */
  goto L_1193d9a1;
L_1193d5ed:;
  /* 1193d5ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d5f0 mov dword ptr [0x119671dc], edx */
  w32((uint32_t)(0x119671dc), (EDX));
  /* 1193d5f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d5f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193d5fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1193d5ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d602 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1193d604 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1193d607 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d60b je 0x1193d630 */
  if (C.zf) goto L_1193d630;
  /* 1193d60d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d610 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d613 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193d616 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1193d61a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d61d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d620 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d623 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1193d62a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1193d62c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193d62e jne 0x1193d665 */
  if (!C.zf) goto L_1193d665;
L_1193d630:;
  /* 1193d630 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1193d637:;
  /* 1193d637 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d63a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d63d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193d640 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1193d644 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d647 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d64a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d64d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1193d654 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1193d656 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193d658 jne 0x1193d665 */
  if (!C.zf) goto L_1193d665;
  /* 1193d65a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d65d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d660 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1193d663 jmp 0x1193d637 */
  goto L_1193d637;
L_1193d665:;
  /* 1193d665 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d668 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193d66e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d671 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1193d678 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1193d67b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1193d682 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d685 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d688 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193d68b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1193d68f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1193d692 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d696 jne 0x1193d6b2 */
  if (!C.zf) goto L_1193d6b2;
  /* 1193d698 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1193d69f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d6a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d6a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1193d6a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1193d6af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1193d6b2:;
  /* 1193d6b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d6b6 jl 0x1193d6cb */
  if ((C.sf!=C.of)) goto L_1193d6cb;
  /* 1193d6b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193d6bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1193d6bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1193d6c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d6c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d6c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1193d6c9 jmp 0x1193d6b2 */
  goto L_1193d6b2;
L_1193d6cb:;
  /* 1193d6cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d6ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d6d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1193d6d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1193d6d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d6db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1193d6dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d6e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1193d6e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193d6e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1193d6e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d6ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1193d6ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d6f3 jle 0x1193d6fc */
  if ((C.zf||C.sf!=C.of)) goto L_1193d6fc;
  /* 1193d6f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1193d6fc:;
  /* 1193d6fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193d6ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d702 je 0x1193d920 */
  if (C.zf) goto L_1193d920;
  /* 1193d708 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d70b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d70e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193d711 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d714 jne 0x1193d7ea */
  if (!C.zf) goto L_1193d7ea;
  /* 1193d71a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d71e jge 0x1193d77f */
  if ((C.sf==C.of)) goto L_1193d77f;
  /* 1193d720 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193d725 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d728 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193d72a not eax */
  EAX = (~(EAX));
  /* 1193d72c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d72f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d732 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1193d736 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d738 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d73b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d73e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1193d742 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d745 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d748 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1193d74b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193d74e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d751 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d754 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1193d757 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d75a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d75d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1193d761 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193d763 jne 0x1193d77d */
  if (!C.zf) goto L_1193d77d;
  /* 1193d765 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193d76a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d76d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193d76f not eax */
  EAX = (~(EAX));
  /* 1193d771 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d774 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1193d776 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1193d778 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d77b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1193d77d:;
  /* 1193d77d jmp 0x1193d7ea */
  goto L_1193d7ea;
L_1193d77f:;
  /* 1193d77f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d782 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d785 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193d78a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d78c not edx */
  EDX = (~(EDX));
  /* 1193d78e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d791 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d794 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1193d79b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193d79d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d7a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d7a3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1193d7aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d7ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d7b0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1193d7b3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193d7b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d7b9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d7bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1193d7bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d7c2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d7c5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1193d7c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193d7cb jne 0x1193d7ea */
  if (!C.zf) goto L_1193d7ea;
  /* 1193d7cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193d7d0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d7d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193d7d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d7da not edx */
  EDX = (~(EDX));
  /* 1193d7dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d7df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193d7e2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193d7e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d7e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1193d7ea:;
  /* 1193d7ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d7ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1193d7f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d7f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1193d7f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1193d7f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d7fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193d7ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d802 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1193d805 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1193d808 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d80c je 0x1193d920 */
  if (C.zf) goto L_1193d920;
  /* 1193d812 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193d815 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d818 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1193d81b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1193d81e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d821 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193d824 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193d827 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1193d82a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d82d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193d830 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1193d833 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193d836 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d839 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1193d83c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d83f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193d842 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d845 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1193d848 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d84b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d84e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193d851 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d854 jne 0x1193d920 */
  if (!C.zf) goto L_1193d920;
  /* 1193d85a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d85e jge 0x1193d8ba */
  if ((C.sf==C.of)) goto L_1193d8ba;
  /* 1193d860 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d863 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d866 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1193d86a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d86d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d870 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1193d873 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1193d875 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d878 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d87b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1193d87e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193d880 jne 0x1193d898 */
  if (!C.zf) goto L_1193d898;
  /* 1193d882 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193d887 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193d88a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193d88c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d88f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1193d891 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1193d893 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d896 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1193d898:;
  /* 1193d898 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193d89d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193d8a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d8a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d8a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d8a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1193d8ac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193d8ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d8b1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d8b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1193d8b8 jmp 0x1193d920 */
  goto L_1193d920;
L_1193d8ba:;
  /* 1193d8ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d8bd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d8c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1193d8c4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d8c7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d8ca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1193d8cd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1193d8cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d8d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d8d5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1193d8d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193d8da jne 0x1193d8f7 */
  if (!C.zf) goto L_1193d8f7;
  /* 1193d8dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193d8df sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d8e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193d8e7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193d8e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d8ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193d8ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1193d8f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d8f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1193d8f7:;
  /* 1193d8f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193d8fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193d8fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193d902 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193d904 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d907 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d90a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1193d911 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193d913 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d916 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d919 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1193d920:;
  /* 1193d920 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d924 je 0x1193d93a */
  if (C.zf) goto L_1193d93a;
  /* 1193d926 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d929 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193d92c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1193d92e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d931 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d934 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193d937 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1193d93a:;
  /* 1193d93a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d93d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d940 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1193d943 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193d946 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d949 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d94c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1193d94e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193d951 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d954 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d957 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d95a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1193d95d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d960 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1193d962 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d965 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1193d967 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d96a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d96d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1193d96f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193d971 jne 0x1193d993 */
  if (!C.zf) goto L_1193d993;
  /* 1193d973 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193d976 cmp eax, dword ptr [0x119671e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119671e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d97c jne 0x1193d993 */
  if (!C.zf) goto L_1193d993;
  /* 1193d97e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d981 cmp ecx, dword ptr [0x119671d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119671d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d987 jne 0x1193d993 */
  if (!C.zf) goto L_1193d993;
  /* 1193d989 mov dword ptr [0x119671e0], 0 */
  w32((uint32_t)(0x119671e0), (0x0u));
L_1193d993:;
  /* 1193d993 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1193d996 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193d999 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1193d99b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193d99e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1193d9a1:;
  /* 1193d9a1 pop esi */
  ESI = (pop32());
  /* 1193d9a2 mov esp, ebp */
  ESP = (EBP);
  /* 1193d9a4 pop ebp */
  EBP = (pop32());
  /* 1193d9a5 ret  */
  ESPCHK(0x1193d470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9b0 @ 0x1193d9b0 (271 bytes, 78 insns) */
void f_1193d9b0(void) {
  FTRACE(0x1193d9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193d9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193d9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1193d9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1193d9b4 mov eax, dword ptr [0x119671e4] */
  EAX = (r32((uint32_t)(0x119671e4)));
  /* 1193d9b9 cmp eax, dword ptr [0x119671c8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119671c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d9bf jne 0x1193da0b */
  if (!C.zf) goto L_1193da0b;
  /* 1193d9c1 mov ecx, dword ptr [0x119671c8] */
  ECX = (r32((uint32_t)(0x119671c8)));
  /* 1193d9c7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193d9ca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193d9cd push ecx */
  push32((uint32_t)(ECX));
  /* 1193d9ce mov edx, dword ptr [0x119671e8] */
  EDX = (r32((uint32_t)(0x119671e8)));
  /* 1193d9d4 push edx */
  push32((uint32_t)(EDX));
  /* 1193d9d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193d9d7 mov eax, dword ptr [0x119671ec] */
  EAX = (r32((uint32_t)(0x119671ec)));
  /* 1193d9dc push eax */
  push32((uint32_t)(EAX));
  /* 1193d9dd call dword ptr [0x11968340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968340))), 0x1193d9e3u);
  /* 1193d9e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1193d9e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193d9ea jne 0x1193d9f3 */
  if (!C.zf) goto L_1193d9f3;
  /* 1193d9ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193d9ee jmp 0x1193dabb */
  goto L_1193dabb;
L_1193d9f3:;
  /* 1193d9f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193d9f6 mov dword ptr [0x119671e8], ecx */
  w32((uint32_t)(0x119671e8), (ECX));
  /* 1193d9fc mov edx, dword ptr [0x119671c8] */
  EDX = (r32((uint32_t)(0x119671c8)));
  /* 1193da02 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193da05 mov dword ptr [0x119671c8], edx */
  w32((uint32_t)(0x119671c8), (EDX));
L_1193da0b:;
  /* 1193da0b mov eax, dword ptr [0x119671e4] */
  EAX = (r32((uint32_t)(0x119671e4)));
  /* 1193da10 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193da13 mov ecx, dword ptr [0x119671e8] */
  ECX = (r32((uint32_t)(0x119671e8)));
  /* 1193da19 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193da1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1193da1e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1193da23 push 8 */
  push32((uint32_t)(0x8u));
  /* 1193da25 mov edx, dword ptr [0x119671ec] */
  EDX = (r32((uint32_t)(0x119671ec)));
  /* 1193da2b push edx */
  push32((uint32_t)(EDX));
  /* 1193da2c call dword ptr [0x11968344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968344))), 0x1193da32u);
  /* 1193da32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193da35 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1193da38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193da3b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193da3f jne 0x1193da45 */
  if (!C.zf) goto L_1193da45;
  /* 1193da41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193da43 jmp 0x1193dabb */
  goto L_1193dabb;
L_1193da45:;
  /* 1193da45 push 4 */
  push32((uint32_t)(0x4u));
  /* 1193da47 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1193da4c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1193da51 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193da53 call dword ptr [0x1196833c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196833c))), 0x1193da59u);
  /* 1193da59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193da5c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1193da5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193da62 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193da66 jne 0x1193da82 */
  if (!C.zf) goto L_1193da82;
  /* 1193da68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193da6b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193da6e push ecx */
  push32((uint32_t)(ECX));
  /* 1193da6f push 0 */
  push32((uint32_t)(0x0u));
  /* 1193da71 mov edx, dword ptr [0x119671ec] */
  EDX = (r32((uint32_t)(0x119671ec)));
  /* 1193da77 push edx */
  push32((uint32_t)(EDX));
  /* 1193da78 call dword ptr [0x11968364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968364))), 0x1193da7eu);
  /* 1193da7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193da80 jmp 0x1193dabb */
  goto L_1193dabb;
L_1193da82:;
  /* 1193da82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193da85 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1193da8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193da8e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1193da95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193da98 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1193da9f mov eax, dword ptr [0x119671e4] */
  EAX = (r32((uint32_t)(0x119671e4)));
  /* 1193daa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193daa7 mov dword ptr [0x119671e4], eax */
  w32((uint32_t)(0x119671e4), (EAX));
  /* 1193daac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193daaf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1193dab2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1193dab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1193dabb:;
  /* 1193dabb mov esp, ebp */
  ESP = (EBP);
  /* 1193dabd pop ebp */
  EBP = (pop32());
  /* 1193dabe ret  */
  ESPCHK(0x1193d9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dac0 @ 0x1193dac0 (494 bytes, 149 insns) */
void f_1193dac0(void) {
  FTRACE(0x1193dac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193dac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193dac1 mov ebp, esp */
  EBP = (ESP);
  /* 1193dac3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193dac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193dac9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193dacc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1193dacf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193dad2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1193dad5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1193dad8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1193dadf:;
  /* 1193dadf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193dae3 jl 0x1193daf8 */
  if ((C.sf!=C.of)) goto L_1193daf8;
  /* 1193dae5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193dae8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1193daea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1193daed mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193daf0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193daf3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1193daf6 jmp 0x1193dadf */
  goto L_1193dadf;
L_1193daf8:;
  /* 1193daf8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193dafb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193db01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193db04 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1193db0b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1193db0e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1193db15 jmp 0x1193db20 */
  goto L_1193db20;
L_1193db17:;
  /* 1193db17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193db1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193db1d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1193db20:;
  /* 1193db20 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193db24 jge 0x1193db46 */
  if ((C.sf==C.of)) goto L_1193db46;
  /* 1193db26 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193db29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193db2c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1193db2f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1193db32 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193db35 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193db38 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1193db3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193db3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193db41 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1193db44 jmp 0x1193db17 */
  goto L_1193db17;
L_1193db46:;
  /* 1193db46 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193db49 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1193db4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193db4f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1193db52 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193db54 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1193db57 push 4 */
  push32((uint32_t)(0x4u));
  /* 1193db59 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1193db5e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1193db63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193db66 push edx */
  push32((uint32_t)(EDX));
  /* 1193db67 call dword ptr [0x1196833c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196833c))), 0x1193db6du);
  /* 1193db6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193db6f jne 0x1193db79 */
  if (!C.zf) goto L_1193db79;
  /* 1193db71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1193db74 jmp 0x1193dcaa */
  goto L_1193dcaa;
L_1193db79:;
  /* 1193db79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193db7c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193db81 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1193db84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193db87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1193db8a jmp 0x1193db98 */
  goto L_1193db98;
L_1193db8c:;
  /* 1193db8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193db8f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193db95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1193db98:;
  /* 1193db98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193db9b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193db9e ja 0x1193dbfd */
  if ((!C.cf&&!C.zf)) goto L_1193dbfd;
  /* 1193dba0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193dba3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1193dbaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193dbad mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1193dbb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193dbba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dbbd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1193dbc0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193dbc3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1193dbc9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193dbcc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dbd2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193dbd5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1193dbd8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193dbdb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193dbe1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193dbe4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1193dbe7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193dbea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dbef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1193dbf2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193dbf5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1193dbfb jmp 0x1193db8c */
  goto L_1193db8c;
L_1193dbfd:;
  /* 1193dbfd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193dc00 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dc06 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1193dc09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193dc0c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dc0f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dc12 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1193dc15 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dc18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1193dc1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1193dc1e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193dc21 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dc24 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1193dc27 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193dc2a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dc2d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dc30 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1193dc33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dc36 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1193dc39 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1193dc3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193dc3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dc42 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1193dc45 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193dc48 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dc4b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1193dc53 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193dc56 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dc59 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1193dc64 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dc67 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1193dc6b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dc6e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1193dc71 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1193dc74 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dc77 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1193dc7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193dc7c jne 0x1193dc8d */
  if (!C.zf) goto L_1193dc8d;
  /* 1193dc7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193dc81 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193dc84 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1193dc87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193dc8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1193dc8d:;
  /* 1193dc8d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193dc92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193dc95 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193dc97 not edx */
  EDX = (~(EDX));
  /* 1193dc99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193dc9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1193dc9f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193dca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193dca4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1193dca7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1193dcaa:;
  /* 1193dcaa mov esp, ebp */
  ESP = (EBP);
  /* 1193dcac pop ebp */
  EBP = (pop32());
  /* 1193dcad ret  */
  ESPCHK(0x1193dac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcb0 @ 0x1193dcb0 (1515 bytes, 489 insns) */
void f_1193dcb0(void) {
  FTRACE(0x1193dcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193dcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193dcb1 mov ebp, esp */
  EBP = (ESP);
  /* 1193dcb3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193dcb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1193dcb9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dcbc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1193dcbe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1193dcc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193dcc4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1193dcc7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1193dcca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193dccd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193dcd0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193dcd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1193dcd6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193dcd9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1193dcdc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1193dcdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193dce2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193dce8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193dceb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1193dcf2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1193dcf5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193dcf8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193dcfb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1193dcfe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dd01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1193dd03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193dd06 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1193dd09 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dd0c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dd0f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1193dd12 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dd15 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1193dd17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1193dd1a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193dd1d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193dd20 jle 0x1193dfd6 */
  if ((C.zf||C.sf!=C.of)) goto L_1193dfd6;
  /* 1193dd26 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193dd29 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1193dd2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193dd2e jne 0x1193dd3b */
  if (!C.zf) goto L_1193dd3b;
  /* 1193dd30 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193dd33 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dd36 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193dd39 jle 0x1193dd42 */
  if ((C.zf||C.sf!=C.of)) goto L_1193dd42;
L_1193dd3b:;
  /* 1193dd3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193dd3d jmp 0x1193e297 */
  goto L_1193e297;
L_1193dd42:;
  /* 1193dd42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193dd45 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1193dd48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193dd4b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1193dd4e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193dd52 jbe 0x1193dd5b */
  if ((C.cf||C.zf)) goto L_1193dd5b;
  /* 1193dd54 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1193dd5b:;
  /* 1193dd5b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dd5e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dd61 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193dd64 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193dd67 jne 0x1193de3d */
  if (!C.zf) goto L_1193de3d;
  /* 1193dd6d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193dd71 jae 0x1193ddd2 */
  if (!C.cf) goto L_1193ddd2;
  /* 1193dd73 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193dd78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193dd7b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193dd7d not edx */
  EDX = (~(EDX));
  /* 1193dd7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193dd82 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193dd85 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1193dd89 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193dd8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193dd8e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193dd91 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1193dd95 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193dd98 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dd9b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1193dd9e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193dda1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193dda4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dda7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1193ddaa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193ddad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ddb0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1193ddb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193ddb6 jne 0x1193ddd0 */
  if (!C.zf) goto L_1193ddd0;
  /* 1193ddb8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193ddbd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193ddc0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193ddc2 not edx */
  EDX = (~(EDX));
  /* 1193ddc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ddc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1193ddc9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193ddcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ddce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1193ddd0:;
  /* 1193ddd0 jmp 0x1193de3d */
  goto L_1193de3d;
L_1193ddd2:;
  /* 1193ddd2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193ddd5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ddd8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193dddd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193dddf not eax */
  EAX = (~(EAX));
  /* 1193dde1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193dde4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193dde7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1193ddee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1193ddf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ddf3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193ddf6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1193ddfd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193de00 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193de03 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1193de06 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193de09 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193de0c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193de0f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1193de12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193de15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193de18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1193de1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193de1e jne 0x1193de3d */
  if (!C.zf) goto L_1193de3d;
  /* 1193de20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193de23 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193de26 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193de2b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193de2d not eax */
  EAX = (~(EAX));
  /* 1193de2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193de32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193de35 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1193de37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193de3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1193de3d:;
  /* 1193de3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193de40 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1193de43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193de46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193de49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1193de4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193de4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1193de52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193de55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1193de58 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1193de5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193de5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193de61 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193de64 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1193de67 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193de6b jle 0x1193dfb7 */
  if ((C.zf||C.sf!=C.of)) goto L_1193dfb7;
  /* 1193de71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193de74 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193de77 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1193de7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193de7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1193de80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193de83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1193de86 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193de8a jbe 0x1193de93 */
  if ((C.cf||C.zf)) goto L_1193de93;
  /* 1193de8c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1193de93:;
  /* 1193de93 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193de96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193de99 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1193de9c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1193de9f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dea2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193dea5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193dea8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1193deab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193deae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193deb1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1193deb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193deb7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193deba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1193debd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dec0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193dec3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dec6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1193dec9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193decc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193decf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193ded2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ded5 jne 0x1193dfa3 */
  if (!C.zf) goto L_1193dfa3;
  /* 1193dedb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193dedf jae 0x1193df3c */
  if (!C.cf) goto L_1193df3c;
  /* 1193dee1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193dee4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dee7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1193deeb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193deee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193def1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1193def4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1193def7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193defa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193defd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1193df00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193df02 jne 0x1193df1a */
  if (!C.zf) goto L_1193df1a;
  /* 1193df04 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193df09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193df0c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193df0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193df11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1193df13 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193df15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193df18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1193df1a:;
  /* 1193df1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193df1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193df22 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193df24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193df27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193df2a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1193df2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1193df30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193df33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193df36 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1193df3a jmp 0x1193dfa3 */
  goto L_1193dfa3;
L_1193df3c:;
  /* 1193df3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193df3f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193df42 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1193df46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193df49 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193df4c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1193df4f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1193df52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193df55 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193df58 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1193df5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193df5d jne 0x1193df7a */
  if (!C.zf) goto L_1193df7a;
  /* 1193df5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193df62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193df65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193df6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193df6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193df6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193df72 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193df74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193df77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1193df7a:;
  /* 1193df7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193df7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193df80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193df85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193df87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193df8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193df8d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1193df94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1193df96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193df99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193df9c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1193dfa3:;
  /* 1193dfa3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dfa6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193dfa9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1193dfab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193dfae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dfb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193dfb4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1193dfb7:;
  /* 1193dfb7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193dfba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dfbd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dfc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1193dfc2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193dfc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dfc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dfcb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dfce mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1193dfd1 jmp 0x1193e292 */
  goto L_1193e292;
L_1193dfd6:;
  /* 1193dfd6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193dfd9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193dfdc jge 0x1193e292 */
  if ((C.sf==C.of)) goto L_1193e292;
  /* 1193dfe2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193dfe5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dfe8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dfeb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1193dfed mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1193dff0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dff3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dff6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193dff9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1193dffc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193dfff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e002 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1193e005 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193e008 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e00b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1193e00e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193e011 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1193e014 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e017 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1193e01a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e01e jbe 0x1193e027 */
  if ((C.cf||C.zf)) goto L_1193e027;
  /* 1193e020 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1193e027:;
  /* 1193e027 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193e02a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1193e02d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193e02f jne 0x1193e170 */
  if (!C.zf) goto L_1193e170;
  /* 1193e035 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193e038 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1193e03b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e03e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1193e041 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e045 jbe 0x1193e04e */
  if ((C.cf||C.zf)) goto L_1193e04e;
  /* 1193e047 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1193e04e:;
  /* 1193e04e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193e051 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193e054 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193e057 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e05a jne 0x1193e130 */
  if (!C.zf) goto L_1193e130;
  /* 1193e060 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e064 jae 0x1193e0c5 */
  if (!C.cf) goto L_1193e0c5;
  /* 1193e066 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193e06b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193e06e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193e070 not edx */
  EDX = (~(EDX));
  /* 1193e072 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193e075 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e078 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1193e07c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193e07e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193e081 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e084 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1193e088 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e08b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e08e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1193e091 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193e094 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e097 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e09a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1193e09d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e0a0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e0a3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1193e0a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193e0a9 jne 0x1193e0c3 */
  if (!C.zf) goto L_1193e0c3;
  /* 1193e0ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193e0b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193e0b3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193e0b5 not edx */
  EDX = (~(EDX));
  /* 1193e0b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193e0ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1193e0bc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193e0be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193e0c1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1193e0c3:;
  /* 1193e0c3 jmp 0x1193e130 */
  goto L_1193e130;
L_1193e0c5:;
  /* 1193e0c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193e0c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e0cb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193e0d0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193e0d2 not eax */
  EAX = (~(EAX));
  /* 1193e0d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193e0d7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e0da mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1193e0e1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1193e0e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193e0e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e0e9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1193e0f0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e0f3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e0f6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1193e0f9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193e0fc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e0ff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e102 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1193e105 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e108 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e10b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1193e10f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193e111 jne 0x1193e130 */
  if (!C.zf) goto L_1193e130;
  /* 1193e113 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193e116 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e119 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193e11e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193e120 not eax */
  EAX = (~(EAX));
  /* 1193e122 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193e125 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193e128 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1193e12a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193e12d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1193e130:;
  /* 1193e130 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193e133 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1193e136 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193e139 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193e13c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1193e13f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193e142 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1193e145 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193e148 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1193e14b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1193e14e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193e151 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e154 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1193e157 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193e15a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1193e15d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e160 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1193e163 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e167 jbe 0x1193e170 */
  if ((C.cf||C.zf)) goto L_1193e170;
  /* 1193e169 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1193e170:;
  /* 1193e170 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193e173 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193e176 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1193e179 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1193e17c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e17f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193e182 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193e185 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1193e188 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e18b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193e18e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1193e191 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193e194 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e197 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1193e19a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e19d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193e1a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e1a3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1193e1a6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e1a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e1ac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193e1af cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e1b2 jne 0x1193e27e */
  if (!C.zf) goto L_1193e27e;
  /* 1193e1b8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e1bc jae 0x1193e218 */
  if (!C.cf) goto L_1193e218;
  /* 1193e1be mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e1c1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e1c4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1193e1c8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e1cb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e1ce mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1193e1d1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1193e1d3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e1d6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e1d9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1193e1dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193e1de jne 0x1193e1f6 */
  if (!C.zf) goto L_1193e1f6;
  /* 1193e1e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193e1e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193e1e8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193e1ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193e1ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1193e1ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1193e1f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193e1f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1193e1f6:;
  /* 1193e1f6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193e1fb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193e1fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193e200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193e203 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e206 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1193e20a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193e20c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193e20f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e212 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1193e216 jmp 0x1193e27e */
  goto L_1193e27e;
L_1193e218:;
  /* 1193e218 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e21b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e21e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1193e222 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e225 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e228 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1193e22b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1193e22d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e230 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e233 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1193e236 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193e238 jne 0x1193e255 */
  if (!C.zf) goto L_1193e255;
  /* 1193e23a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193e23d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e240 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1193e245 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1193e247 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193e24a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193e24d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1193e24f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193e252 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1193e255:;
  /* 1193e255 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193e258 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e25b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193e260 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193e262 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193e265 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e268 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1193e26f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193e271 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193e274 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1193e277 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1193e27e:;
  /* 1193e27e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e281 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193e284 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1193e286 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e289 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e28c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193e28f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1193e292:;
  /* 1193e292 mov eax, 1 */
  EAX = (0x1u);
L_1193e297:;
  /* 1193e297 mov esp, ebp */
  ESP = (EBP);
  /* 1193e299 pop ebp */
  EBP = (pop32());
  /* 1193e29a ret  */
  ESPCHK(0x1193dcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2a0 @ 0x1193e2a0 (304 bytes, 79 insns) */
void f_1193e2a0(void) {
  FTRACE(0x1193e2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193e2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193e2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1193e2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1193e2a4 cmp dword ptr [0x119671e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119671e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e2ab je 0x1193e3cc */
  if (C.zf) goto L_1193e3cc;
  /* 1193e2b1 mov eax, dword ptr [0x119671d8] */
  EAX = (r32((uint32_t)(0x119671d8)));
  /* 1193e2b6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1193e2b9 mov ecx, dword ptr [0x119671e0] */
  ECX = (r32((uint32_t)(0x119671e0)));
  /* 1193e2bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1193e2c2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e2c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1193e2c7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1193e2cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1193e2d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193e2d4 push eax */
  push32((uint32_t)(EAX));
  /* 1193e2d5 call dword ptr [0x11968360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968360))), 0x1193e2dbu);
  /* 1193e2db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193e2e0 mov ecx, dword ptr [0x119671d8] */
  ECX = (r32((uint32_t)(0x119671d8)));
  /* 1193e2e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193e2e8 mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193e2ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1193e2f0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1193e2f2 mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193e2f8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1193e2fb mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193e300 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193e303 mov edx, dword ptr [0x119671d8] */
  EDX = (r32((uint32_t)(0x119671d8)));
  /* 1193e309 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1193e314 mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193e319 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193e31c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1193e31f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1193e322 mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193e327 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193e32a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1193e32d mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193e333 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1193e336 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1193e33a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193e33c jne 0x1193e352 */
  if (!C.zf) goto L_1193e352;
  /* 1193e33e mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193e344 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1193e347 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1193e349 mov ecx, dword ptr [0x119671e0] */
  ECX = (r32((uint32_t)(0x119671e0)));
  /* 1193e34f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1193e352:;
  /* 1193e352 mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193e358 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e35c jne 0x1193e3c2 */
  if (!C.zf) goto L_1193e3c2;
  /* 1193e35e cmp dword ptr [0x119671e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119671e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e365 jle 0x1193e3c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1193e3c2;
  /* 1193e367 mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193e36c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1193e36f push ecx */
  push32((uint32_t)(ECX));
  /* 1193e370 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193e372 mov edx, dword ptr [0x119671ec] */
  EDX = (r32((uint32_t)(0x119671ec)));
  /* 1193e378 push edx */
  push32((uint32_t)(EDX));
  /* 1193e379 call dword ptr [0x11968364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968364))), 0x1193e37fu);
  /* 1193e37f mov eax, dword ptr [0x119671e4] */
  EAX = (r32((uint32_t)(0x119671e4)));
  /* 1193e384 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193e387 mov ecx, dword ptr [0x119671e8] */
  ECX = (r32((uint32_t)(0x119671e8)));
  /* 1193e38d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e38f mov edx, dword ptr [0x119671e0] */
  EDX = (r32((uint32_t)(0x119671e0)));
  /* 1193e395 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e398 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e39a push ecx */
  push32((uint32_t)(ECX));
  /* 1193e39b mov eax, dword ptr [0x119671e0] */
  EAX = (r32((uint32_t)(0x119671e0)));
  /* 1193e3a0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e3a3 push eax */
  push32((uint32_t)(EAX));
  /* 1193e3a4 mov ecx, dword ptr [0x119671e0] */
  ECX = (r32((uint32_t)(0x119671e0)));
  /* 1193e3aa push ecx */
  push32((uint32_t)(ECX));
  /* 1193e3ab call 0x119409d0 */
  push32(0x1193e3b0u); f_119409d0();
  /* 1193e3b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e3b3 mov edx, dword ptr [0x119671e4] */
  EDX = (r32((uint32_t)(0x119671e4)));
  /* 1193e3b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e3bc mov dword ptr [0x119671e4], edx */
  w32((uint32_t)(0x119671e4), (EDX));
L_1193e3c2:;
  /* 1193e3c2 mov dword ptr [0x119671e0], 0 */
  w32((uint32_t)(0x119671e0), (0x0u));
L_1193e3cc:;
  /* 1193e3cc mov esp, ebp */
  ESP = (EBP);
  /* 1193e3ce pop ebp */
  EBP = (pop32());
  /* 1193e3cf ret  */
  ESPCHK(0x1193e2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3d0 @ 0x1193e3d0 (1565 bytes, 343 insns) */
void f_1193e3d0(void) {
  FTRACE(0x1193e3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193e3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193e3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1193e3d3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e3d9 mov eax, dword ptr [0x119671e4] */
  EAX = (r32((uint32_t)(0x119671e4)));
  /* 1193e3de imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193e3e1 push eax */
  push32((uint32_t)(EAX));
  /* 1193e3e2 mov ecx, dword ptr [0x119671e8] */
  ECX = (r32((uint32_t)(0x119671e8)));
  /* 1193e3e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1193e3e9 call dword ptr [0x1196838c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196838c))), 0x1193e3efu);
  /* 1193e3ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193e3f1 je 0x1193e3fb */
  if (C.zf) goto L_1193e3fb;
  /* 1193e3f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1193e3f6 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e3fb:;
  /* 1193e3fb mov edx, dword ptr [0x119671e8] */
  EDX = (r32((uint32_t)(0x119671e8)));
  /* 1193e401 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1193e407 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1193e411 jmp 0x1193e422 */
  goto L_1193e422;
L_1193e413:;
  /* 1193e413 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1193e419 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e41c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1193e422:;
  /* 1193e422 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1193e428 cmp ecx, dword ptr [0x119671e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119671e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e42e jge 0x1193e9e7 */
  if ((C.sf==C.of)) goto L_1193e9e7;
  /* 1193e434 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1193e43a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1193e43d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1193e443 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1193e448 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1193e44e push ecx */
  push32((uint32_t)(ECX));
  /* 1193e44f call dword ptr [0x1196838c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196838c))), 0x1193e455u);
  /* 1193e455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193e457 je 0x1193e463 */
  if (C.zf) goto L_1193e463;
  /* 1193e459 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1193e45e jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e463:;
  /* 1193e463 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1193e469 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1193e46c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1193e472 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1193e478 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e47e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1193e481 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1193e487 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1193e48a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1193e48d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1193e497 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1193e4a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1193e4a8 jmp 0x1193e4b3 */
  goto L_1193e4b3;
L_1193e4aa:;
  /* 1193e4aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193e4ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e4b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1193e4b3:;
  /* 1193e4b3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e4b7 jge 0x1193e9ab */
  if ((C.sf==C.of)) goto L_1193e9ab;
  /* 1193e4bd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1193e4c7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1193e4d1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1193e4db mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1193e4e5 jmp 0x1193e4f6 */
  goto L_1193e4f6;
L_1193e4e7:;
  /* 1193e4e7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1193e4ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e4f0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1193e4f6:;
  /* 1193e4f6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e4fd jge 0x1193e512 */
  if ((C.sf==C.of)) goto L_1193e512;
  /* 1193e4ff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1193e505 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1193e510 jmp 0x1193e4e7 */
  goto L_1193e4e7;
L_1193e512:;
  /* 1193e512 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e516 jl 0x1193e94d */
  if ((C.sf!=C.of)) goto L_1193e94d;
  /* 1193e51c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1193e521 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1193e527 push ecx */
  push32((uint32_t)(ECX));
  /* 1193e528 call dword ptr [0x1196838c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196838c))), 0x1193e52eu);
  /* 1193e52e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193e530 je 0x1193e53c */
  if (C.zf) goto L_1193e53c;
  /* 1193e532 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1193e537 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e53c:;
  /* 1193e53c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1193e542 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1193e545 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1193e54f jmp 0x1193e560 */
  goto L_1193e560;
L_1193e551:;
  /* 1193e551 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1193e557 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e55a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1193e560:;
  /* 1193e560 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e567 jge 0x1193e6e4 */
  if ((C.sf==C.of)) goto L_1193e6e4;
  /* 1193e56d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193e570 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e573 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1193e579 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1193e57f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e585 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1193e58b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1193e591 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e595 jne 0x1193e5a2 */
  if (!C.zf) goto L_1193e5a2;
  /* 1193e597 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1193e59d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e5a0 je 0x1193e5ac */
  if (C.zf) goto L_1193e5ac;
L_1193e5a2:;
  /* 1193e5a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1193e5a7 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e5ac:;
  /* 1193e5ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1193e5b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1193e5b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1193e5ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1193e5c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1193e5c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1193e5cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1193e5cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193e5d1 je 0x1193e609 */
  if (C.zf) goto L_1193e609;
  /* 1193e5d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1193e5d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e5dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1193e5e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e5ec jle 0x1193e5f8 */
  if ((C.zf||C.sf!=C.of)) goto L_1193e5f8;
  /* 1193e5ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1193e5f3 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e5f8:;
  /* 1193e5f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1193e5fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e601 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1193e607 jmp 0x1193e64b */
  goto L_1193e64b;
L_1193e609:;
  /* 1193e609 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1193e60f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1193e612 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e615 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1193e61b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e622 jle 0x1193e62e */
  if ((C.zf||C.sf!=C.of)) goto L_1193e62e;
  /* 1193e624 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1193e62e:;
  /* 1193e62e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1193e634 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1193e63b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e63e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1193e644 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1193e64b:;
  /* 1193e64b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e652 jl 0x1193e66d */
  if ((C.sf!=C.of)) goto L_1193e66d;
  /* 1193e654 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1193e65a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1193e65d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193e65f jne 0x1193e66d */
  if (!C.zf) goto L_1193e66d;
  /* 1193e661 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e66b jle 0x1193e677 */
  if ((C.zf||C.sf!=C.of)) goto L_1193e677;
L_1193e66d:;
  /* 1193e66d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1193e672 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e677:;
  /* 1193e677 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1193e67d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e683 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1193e686 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e68c je 0x1193e698 */
  if (C.zf) goto L_1193e698;
  /* 1193e68e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1193e693 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e698:;
  /* 1193e698 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1193e69e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e6a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1193e6aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1193e6b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e6b6 jb 0x1193e5ac */
  if (C.cf) goto L_1193e5ac;
  /* 1193e6bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1193e6c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e6c8 je 0x1193e6d4 */
  if (C.zf) goto L_1193e6d4;
  /* 1193e6ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1193e6cf jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e6d4:;
  /* 1193e6d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193e6d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e6dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1193e6df jmp 0x1193e551 */
  goto L_1193e551;
L_1193e6e4:;
  /* 1193e6e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193e6e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1193e6e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e6ef je 0x1193e6fb */
  if (C.zf) goto L_1193e6fb;
  /* 1193e6f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1193e6f6 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e6fb:;
  /* 1193e6fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193e6fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1193e704 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1193e70b jmp 0x1193e716 */
  goto L_1193e716;
L_1193e70d:;
  /* 1193e70d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e710 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e713 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1193e716:;
  /* 1193e716 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e71a jge 0x1193e94d */
  if ((C.sf==C.of)) goto L_1193e94d;
  /* 1193e720 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1193e72a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1193e730 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1193e736:;
  /* 1193e736 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1193e73c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193e73f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1193e745 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1193e74b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e751 je 0x1193e87a */
  if (C.zf) goto L_1193e87a;
  /* 1193e757 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e75a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1193e760 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e767 je 0x1193e87a */
  if (C.zf) goto L_1193e87a;
  /* 1193e76d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1193e773 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e779 jb 0x1193e78e */
  if (C.cf) goto L_1193e78e;
  /* 1193e77b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1193e781 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e786 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e78c jb 0x1193e798 */
  if (C.cf) goto L_1193e798;
L_1193e78e:;
  /* 1193e78e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1193e793 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e798:;
  /* 1193e798 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1193e79e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1193e7a4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1193e7aa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1193e7b0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e7b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1193e7b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193e7b9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e7be mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1193e7c4:;
  /* 1193e7c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193e7c7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e7cd je 0x1193e7ee */
  if (C.zf) goto L_1193e7ee;
  /* 1193e7cf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193e7d2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e7d8 jne 0x1193e7dc */
  if (!C.zf) goto L_1193e7dc;
  /* 1193e7da jmp 0x1193e7ee */
  goto L_1193e7ee;
L_1193e7dc:;
  /* 1193e7dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193e7df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1193e7e1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1193e7e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193e7e7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e7e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1193e7ec jmp 0x1193e7c4 */
  goto L_1193e7c4;
L_1193e7ee:;
  /* 1193e7ee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193e7f1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e7f7 jne 0x1193e803 */
  if (!C.zf) goto L_1193e803;
  /* 1193e7f9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1193e7fe jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e803:;
  /* 1193e803 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1193e809 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1193e80b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1193e80e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e811 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1193e817 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e81e jle 0x1193e82a */
  if ((C.zf||C.sf!=C.of)) goto L_1193e82a;
  /* 1193e820 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1193e82a:;
  /* 1193e82a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1193e830 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e833 je 0x1193e83f */
  if (C.zf) goto L_1193e83f;
  /* 1193e835 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1193e83a jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e83f:;
  /* 1193e83f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1193e845 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1193e848 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e84e je 0x1193e85a */
  if (C.zf) goto L_1193e85a;
  /* 1193e850 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1193e855 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e85a:;
  /* 1193e85a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1193e860 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1193e866 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1193e86c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e86f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1193e875 jmp 0x1193e736 */
  goto L_1193e736;
L_1193e87a:;
  /* 1193e87a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e881 je 0x1193e8f1 */
  if (C.zf) goto L_1193e8f1;
  /* 1193e883 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e887 jge 0x1193e8bb */
  if ((C.sf==C.of)) goto L_1193e8bb;
  /* 1193e889 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193e88e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e891 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193e893 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1193e899 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193e89b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1193e8a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193e8a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e8a9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193e8ab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1193e8b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193e8b3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1193e8b9 jmp 0x1193e8f1 */
  goto L_1193e8f1;
L_1193e8bb:;
  /* 1193e8bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e8be sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e8c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193e8c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193e8c8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1193e8ce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193e8d0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1193e8d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e8d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e8dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1193e8e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1193e8e3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1193e8e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1193e8eb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1193e8f1:;
  /* 1193e8f1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1193e8f7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193e8fa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e900 jne 0x1193e914 */
  if (!C.zf) goto L_1193e914;
  /* 1193e902 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193e905 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1193e90b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e912 je 0x1193e91e */
  if (C.zf) goto L_1193e91e;
L_1193e914:;
  /* 1193e914 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1193e919 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e91e:;
  /* 1193e91e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1193e924 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1193e927 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e92d je 0x1193e939 */
  if (C.zf) goto L_1193e939;
  /* 1193e92f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1193e934 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e939:;
  /* 1193e939 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1193e93f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e942 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1193e948 jmp 0x1193e70d */
  goto L_1193e70d;
L_1193e94d:;
  /* 1193e94d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193e950 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1193e956 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1193e95c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e960 jne 0x1193e97a */
  if (!C.zf) goto L_1193e97a;
  /* 1193e962 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193e965 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1193e96b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1193e971 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e978 je 0x1193e981 */
  if (C.zf) goto L_1193e981;
L_1193e97a:;
  /* 1193e97a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1193e97f jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e981:;
  /* 1193e981 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1193e987 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e98d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1193e993 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193e996 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e99b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1193e99e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193e9a1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1193e9a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1193e9a6 jmp 0x1193e4aa */
  goto L_1193e4aa;
L_1193e9ab:;
  /* 1193e9ab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1193e9b1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1193e9b7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e9b9 jne 0x1193e9cc */
  if (!C.zf) goto L_1193e9cc;
  /* 1193e9bb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1193e9c1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1193e9c7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193e9ca je 0x1193e9d3 */
  if (C.zf) goto L_1193e9d3;
L_1193e9cc:;
  /* 1193e9cc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1193e9d1 jmp 0x1193e9e9 */
  goto L_1193e9e9;
L_1193e9d3:;
  /* 1193e9d3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1193e9d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193e9dc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1193e9e2 jmp 0x1193e413 */
  goto L_1193e413;
L_1193e9e7:;
  /* 1193e9e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1193e9e9:;
  /* 1193e9e9 mov esp, ebp */
  ESP = (EBP);
  /* 1193e9eb pop ebp */
  EBP = (pop32());
  /* 1193e9ec ret  */
  ESPCHK(0x1193e3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9f0 @ 0x1193e9f0 (250 bytes, 92 insns) */
void f_1193e9f0(void) {
  FTRACE(0x1193e9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193e9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193e9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1193e9f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193e9f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1193e9f7 push esi */
  push32((uint32_t)(ESI));
  /* 1193e9f8 push edi */
  push32((uint32_t)(EDI));
  /* 1193e9f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1193e9fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1193e9ff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1193ea02 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1193ea05:;
  /* 1193ea05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ea09 jne 0x1193ea29 */
  if (!C.zf) goto L_1193ea29;
  /* 1193ea0b push 0x11960d84 */
  push32((uint32_t)(0x11960d84u));
  /* 1193ea10 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193ea12 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1193ea14 push 0x11960d78 */
  push32((uint32_t)(0x11960d78u));
  /* 1193ea19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1193ea1b call 0x11937ba0 */
  push32(0x1193ea20u); f_11937ba0();
  /* 1193ea20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ea23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ea26 jne 0x1193ea29 */
  if (!C.zf) goto L_1193ea29;
  /* 1193ea28 int3  */
  x86_unimpl("int3 @ 0x1193ea28");
L_1193ea29:;
  /* 1193ea29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193ea2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193ea2d jne 0x1193ea05 */
  if (!C.zf) goto L_1193ea05;
L_1193ea2f:;
  /* 1193ea2f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ea33 jne 0x1193ea53 */
  if (!C.zf) goto L_1193ea53;
  /* 1193ea35 push 0x11960d68 */
  push32((uint32_t)(0x11960d68u));
  /* 1193ea3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1193ea3c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1193ea3e push 0x11960d78 */
  push32((uint32_t)(0x11960d78u));
  /* 1193ea43 push 2 */
  push32((uint32_t)(0x2u));
  /* 1193ea45 call 0x11937ba0 */
  push32(0x1193ea4au); f_11937ba0();
  /* 1193ea4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ea4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ea50 jne 0x1193ea53 */
  if (!C.zf) goto L_1193ea53;
  /* 1193ea52 int3  */
  x86_unimpl("int3 @ 0x1193ea52");
L_1193ea53:;
  /* 1193ea53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193ea55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193ea57 jne 0x1193ea2f */
  if (!C.zf) goto L_1193ea2f;
  /* 1193ea59 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ea5c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1193ea63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ea66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ea69 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1193ea6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ea6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ea72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1193ea74 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ea77 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1193ea7e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1193ea81 push ecx */
  push32((uint32_t)(ECX));
  /* 1193ea82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193ea85 push edx */
  push32((uint32_t)(EDX));
  /* 1193ea86 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ea89 push eax */
  push32((uint32_t)(EAX));
  /* 1193ea8a call 0x1193fa70 */
  push32(0x1193ea8fu); f_1193fa70();
  /* 1193ea8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ea92 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1193ea95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ea98 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1193ea9b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ea9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193eaa1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1193eaa4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193eaa7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193eaab jl 0x1193eacf */
  if ((C.sf!=C.of)) goto L_1193eacf;
  /* 1193eaad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193eab0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1193eab2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1193eab5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1193eab7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1193eabd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1193eac0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193eac3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1193eac5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193eac8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193eacb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1193eacd jmp 0x1193eae0 */
  goto L_1193eae0;
L_1193eacf:;
  /* 1193eacf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ead2 push edx */
  push32((uint32_t)(EDX));
  /* 1193ead3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193ead5 call 0x1193f7f0 */
  push32(0x1193eadau); f_1193f7f0();
  /* 1193eada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193eadd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1193eae0:;
  /* 1193eae0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193eae3 pop edi */
  EDI = (pop32());
  /* 1193eae4 pop esi */
  ESI = (pop32());
  /* 1193eae5 pop ebx */
  EBX = (pop32());
  /* 1193eae6 mov esp, ebp */
  ESP = (EBP);
  /* 1193eae8 pop ebp */
  EBP = (pop32());
  /* 1193eae9 ret  */
  ESPCHK(0x1193e9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaf0 @ 0x1193eaf0 (183 bytes, 58 insns) */
void f_1193eaf0(void) {
  FTRACE(0x1193eaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193eaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193eaf1 mov ebp, esp */
  EBP = (ESP);
  /* 1193eaf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193eaf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193eaf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193eafc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193eb01 ja 0x1193eb1a */
  if ((!C.cf&&!C.zf)) goto L_1193eb1a;
  /* 1193eb03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193eb06 mov edx, dword ptr [0x11963c98] */
  EDX = (r32((uint32_t)(0x11963c98)));
  /* 1193eb0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193eb0e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1193eb12 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1193eb15 jmp 0x1193eba3 */
  goto L_1193eba3;
L_1193eb1a:;
  /* 1193eb1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193eb1d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1193eb20 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1193eb26 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1193eb2c mov edx, dword ptr [0x11963c98] */
  EDX = (r32((uint32_t)(0x11963c98)));
  /* 1193eb32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193eb34 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1193eb38 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1193eb3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193eb3f je 0x1193eb63 */
  if (C.zf) goto L_1193eb63;
  /* 1193eb41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193eb44 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1193eb47 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1193eb4d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1193eb50 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1193eb53 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1193eb56 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1193eb5a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1193eb61 jmp 0x1193eb74 */
  goto L_1193eb74;
L_1193eb63:;
  /* 1193eb63 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1193eb66 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1193eb69 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1193eb6d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1193eb74:;
  /* 1193eb74 push 1 */
  push32((uint32_t)(0x1u));
  /* 1193eb76 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193eb78 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193eb7a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1193eb7d push ecx */
  push32((uint32_t)(ECX));
  /* 1193eb7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193eb81 push edx */
  push32((uint32_t)(EDX));
  /* 1193eb82 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1193eb85 push eax */
  push32((uint32_t)(EAX));
  /* 1193eb86 push 1 */
  push32((uint32_t)(0x1u));
  /* 1193eb88 call 0x11940d10 */
  push32(0x1193eb8du); f_11940d10();
  /* 1193eb8d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193eb90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193eb92 jne 0x1193eb98 */
  if (!C.zf) goto L_1193eb98;
  /* 1193eb94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193eb96 jmp 0x1193eba3 */
  goto L_1193eba3;
L_1193eb98:;
  /* 1193eb98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193eb9b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1193eba0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1193eba3:;
  /* 1193eba3 mov esp, ebp */
  ESP = (EBP);
  /* 1193eba5 pop ebp */
  EBP = (pop32());
  /* 1193eba6 ret  */
  ESPCHK(0x1193eaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebb0 @ 0x1193ebb0 (836 bytes, 238 insns) */
void f_1193ebb0(void) {
  FTRACE(0x1193ebb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193ebb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193ebb1 mov ebp, esp */
  EBP = (ESP);
  /* 1193ebb3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ebb6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1193ebb8 call 0x1193c4e0 */
  push32(0x1193ebbdu); f_1193c4e0();
  /* 1193ebbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ebc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ebc3 push eax */
  push32((uint32_t)(EAX));
  /* 1193ebc4 call 0x1193ef00 */
  push32(0x1193ebc9u); f_1193ef00();
  /* 1193ebc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ebcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1193ebcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ebd2 cmp ecx, dword ptr [0x11966f24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11966f24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ebd8 jne 0x1193ebeb */
  if (!C.zf) goto L_1193ebeb;
  /* 1193ebda push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1193ebdc call 0x1193c580 */
  push32(0x1193ebe1u); f_1193c580();
  /* 1193ebe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ebe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193ebe6 jmp 0x1193eef0 */
  goto L_1193eef0;
L_1193ebeb:;
  /* 1193ebeb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ebef jne 0x1193ec0c */
  if (!C.zf) goto L_1193ec0c;
  /* 1193ebf1 call 0x1193efe0 */
  push32(0x1193ebf6u); f_1193efe0();
  /* 1193ebf6 call 0x1193f060 */
  push32(0x1193ebfbu); f_1193f060();
  /* 1193ebfb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1193ebfd call 0x1193c580 */
  push32(0x1193ec02u); f_1193c580();
  /* 1193ec02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ec05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193ec07 jmp 0x1193eef0 */
  goto L_1193eef0;
L_1193ec0c:;
  /* 1193ec0c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1193ec13 jmp 0x1193ec1e */
  goto L_1193ec1e;
L_1193ec15:;
  /* 1193ec15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ec18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ec1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1193ec1e:;
  /* 1193ec1e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ec22 jae 0x1193ed6f */
  if (!C.cf) goto L_1193ed6f;
  /* 1193ec28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ec2b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193ec2e mov ecx, dword ptr [eax + 0x11963eb8] */
  ECX = (r32((uint32_t)(EAX + 0x11963eb8)));
  /* 1193ec34 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ec37 jne 0x1193ed6a */
  if (!C.zf) goto L_1193ed6a;
  /* 1193ec3d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1193ec44 jmp 0x1193ec4f */
  goto L_1193ec4f;
L_1193ec46:;
  /* 1193ec46 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ec49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ec4c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1193ec4f:;
  /* 1193ec4f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ec56 jae 0x1193ec64 */
  if (!C.cf) goto L_1193ec64;
  /* 1193ec58 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ec5b mov byte ptr [eax + 0x119670c0], 0 */
  w8((uint32_t)(EAX + 0x119670c0), (0x0u));
  /* 1193ec62 jmp 0x1193ec46 */
  goto L_1193ec46;
L_1193ec64:;
  /* 1193ec64 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1193ec6b jmp 0x1193ec76 */
  goto L_1193ec76;
L_1193ec6d:;
  /* 1193ec6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193ec70 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ec73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1193ec76:;
  /* 1193ec76 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ec7a jae 0x1193ecf7 */
  if (!C.cf) goto L_1193ecf7;
  /* 1193ec7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ec7f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193ec82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193ec85 lea ecx, [edx + eax*8 + 0x11963ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11963ec8));
  /* 1193ec8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1193ec8f jmp 0x1193ec9a */
  goto L_1193ec9a;
L_1193ec91:;
  /* 1193ec91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ec94 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ec97 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1193ec9a:;
  /* 1193ec9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ec9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1193ec9f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1193eca1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193eca3 je 0x1193ecf2 */
  if (C.zf) goto L_1193ecf2;
  /* 1193eca5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193eca8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193ecaa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1193ecad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193ecaf je 0x1193ecf2 */
  if (C.zf) goto L_1193ecf2;
  /* 1193ecb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ecb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193ecb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1193ecb8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1193ecbb jmp 0x1193ecc6 */
  goto L_1193ecc6;
L_1193ecbd:;
  /* 1193ecbd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ecc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ecc3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1193ecc6:;
  /* 1193ecc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193ecc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193eccb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1193ecce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ecd1 ja 0x1193ecf0 */
  if ((!C.cf&&!C.zf)) goto L_1193ecf0;
  /* 1193ecd3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ecd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193ecd9 mov dl, byte ptr [eax + 0x119670c1] */
  DL = (r8((uint32_t)(EAX + 0x119670c1)));
  /* 1193ecdf or dl, byte ptr [ecx + 0x11963eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11963eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1193ece5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ece8 mov byte ptr [eax + 0x119670c1], dl */
  w8((uint32_t)(EAX + 0x119670c1), (DL));
  /* 1193ecee jmp 0x1193ecbd */
  goto L_1193ecbd;
L_1193ecf0:;
  /* 1193ecf0 jmp 0x1193ec91 */
  goto L_1193ec91;
L_1193ecf2:;
  /* 1193ecf2 jmp 0x1193ec6d */
  goto L_1193ec6d;
L_1193ecf7:;
  /* 1193ecf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ecfa mov dword ptr [0x11966f24], ecx */
  w32((uint32_t)(0x11966f24), (ECX));
  /* 1193ed00 mov dword ptr [0x11966fac], 1 */
  w32((uint32_t)(0x11966fac), (0x1u));
  /* 1193ed0a mov edx, dword ptr [0x11966f24] */
  EDX = (r32((uint32_t)(0x11966f24)));
  /* 1193ed10 push edx */
  push32((uint32_t)(EDX));
  /* 1193ed11 call 0x1193ef60 */
  push32(0x1193ed16u); f_1193ef60();
  /* 1193ed16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ed19 mov dword ptr [0x119671c4], eax */
  w32((uint32_t)(0x119671c4), (EAX));
  /* 1193ed1e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1193ed25 jmp 0x1193ed30 */
  goto L_1193ed30;
L_1193ed27:;
  /* 1193ed27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193ed2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ed2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1193ed30:;
  /* 1193ed30 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ed34 jae 0x1193ed54 */
  if (!C.cf) goto L_1193ed54;
  /* 1193ed36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ed39 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193ed3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193ed3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193ed42 mov cx, word ptr [ecx + eax*2 + 0x11963ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11963ebc)));
  /* 1193ed4a mov word ptr [edx*2 + 0x11966fa0], cx */
  w16((uint32_t)(EDX*2 + 0x11966fa0), (CX));
  /* 1193ed52 jmp 0x1193ed27 */
  goto L_1193ed27;
L_1193ed54:;
  /* 1193ed54 call 0x1193f060 */
  push32(0x1193ed59u); f_1193f060();
  /* 1193ed59 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1193ed5b call 0x1193c580 */
  push32(0x1193ed60u); f_1193c580();
  /* 1193ed60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ed63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193ed65 jmp 0x1193eef0 */
  goto L_1193eef0;
L_1193ed6a:;
  /* 1193ed6a jmp 0x1193ec15 */
  goto L_1193ec15;
L_1193ed6f:;
  /* 1193ed6f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1193ed72 push edx */
  push32((uint32_t)(EDX));
  /* 1193ed73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ed76 push eax */
  push32((uint32_t)(EAX));
  /* 1193ed77 call dword ptr [0x11968338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968338))), 0x1193ed7du);
  /* 1193ed7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ed80 jne 0x1193eec2 */
  if (!C.zf) goto L_1193eec2;
  /* 1193ed86 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1193ed8d jmp 0x1193ed98 */
  goto L_1193ed98;
L_1193ed8f:;
  /* 1193ed8f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ed92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ed95 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1193ed98:;
  /* 1193ed98 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ed9f jae 0x1193edad */
  if (!C.cf) goto L_1193edad;
  /* 1193eda1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193eda4 mov byte ptr [edx + 0x119670c0], 0 */
  w8((uint32_t)(EDX + 0x119670c0), (0x0u));
  /* 1193edab jmp 0x1193ed8f */
  goto L_1193ed8f;
L_1193edad:;
  /* 1193edad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193edb0 mov dword ptr [0x11966f24], eax */
  w32((uint32_t)(0x11966f24), (EAX));
  /* 1193edb5 mov dword ptr [0x119671c4], 0 */
  w32((uint32_t)(0x119671c4), (0x0u));
  /* 1193edbf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193edc3 jbe 0x1193ee7e */
  if ((C.cf||C.zf)) goto L_1193ee7e;
  /* 1193edc9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1193edcc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1193edcf jmp 0x1193edda */
  goto L_1193edda;
L_1193edd1:;
  /* 1193edd1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193edd4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193edd7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1193edda:;
  /* 1193edda mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193eddd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1193eddf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1193ede1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193ede3 je 0x1193ee2c */
  if (C.zf) goto L_1193ee2c;
  /* 1193ede5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193ede8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193edea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1193eded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193edef je 0x1193ee2c */
  if (C.zf) goto L_1193ee2c;
  /* 1193edf1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193edf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193edf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1193edf8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1193edfb jmp 0x1193ee06 */
  goto L_1193ee06;
L_1193edfd:;
  /* 1193edfd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ee00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ee03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1193ee06:;
  /* 1193ee06 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193ee09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193ee0b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1193ee0e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ee11 ja 0x1193ee2a */
  if ((!C.cf&&!C.zf)) goto L_1193ee2a;
  /* 1193ee13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ee16 mov cl, byte ptr [eax + 0x119670c1] */
  CL = (r8((uint32_t)(EAX + 0x119670c1)));
  /* 1193ee1c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1193ee1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ee22 mov byte ptr [edx + 0x119670c1], cl */
  w8((uint32_t)(EDX + 0x119670c1), (CL));
  /* 1193ee28 jmp 0x1193edfd */
  goto L_1193edfd;
L_1193ee2a:;
  /* 1193ee2a jmp 0x1193edd1 */
  goto L_1193edd1;
L_1193ee2c:;
  /* 1193ee2c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1193ee33 jmp 0x1193ee3e */
  goto L_1193ee3e;
L_1193ee35:;
  /* 1193ee35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ee38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ee3b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1193ee3e:;
  /* 1193ee3e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ee45 jae 0x1193ee5e */
  if (!C.cf) goto L_1193ee5e;
  /* 1193ee47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ee4a mov dl, byte ptr [ecx + 0x119670c1] */
  DL = (r8((uint32_t)(ECX + 0x119670c1)));
  /* 1193ee50 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1193ee53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1193ee56 mov byte ptr [eax + 0x119670c1], dl */
  w8((uint32_t)(EAX + 0x119670c1), (DL));
  /* 1193ee5c jmp 0x1193ee35 */
  goto L_1193ee35;
L_1193ee5e:;
  /* 1193ee5e mov ecx, dword ptr [0x11966f24] */
  ECX = (r32((uint32_t)(0x11966f24)));
  /* 1193ee64 push ecx */
  push32((uint32_t)(ECX));
  /* 1193ee65 call 0x1193ef60 */
  push32(0x1193ee6au); f_1193ef60();
  /* 1193ee6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ee6d mov dword ptr [0x119671c4], eax */
  w32((uint32_t)(0x119671c4), (EAX));
  /* 1193ee72 mov dword ptr [0x11966fac], 1 */
  w32((uint32_t)(0x11966fac), (0x1u));
  /* 1193ee7c jmp 0x1193ee88 */
  goto L_1193ee88;
L_1193ee7e:;
  /* 1193ee7e mov dword ptr [0x11966fac], 0 */
  w32((uint32_t)(0x11966fac), (0x0u));
L_1193ee88:;
  /* 1193ee88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1193ee8f jmp 0x1193ee9a */
  goto L_1193ee9a;
L_1193ee91:;
  /* 1193ee91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193ee94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ee97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1193ee9a:;
  /* 1193ee9a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ee9e jae 0x1193eeaf */
  if (!C.cf) goto L_1193eeaf;
  /* 1193eea0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193eea3 mov word ptr [eax*2 + 0x11966fa0], 0 */
  w16((uint32_t)(EAX*2 + 0x11966fa0), (0x0u));
  /* 1193eead jmp 0x1193ee91 */
  goto L_1193ee91;
L_1193eeaf:;
  /* 1193eeaf call 0x1193f060 */
  push32(0x1193eeb4u); f_1193f060();
  /* 1193eeb4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1193eeb6 call 0x1193c580 */
  push32(0x1193eebbu); f_1193c580();
  /* 1193eebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193eebe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193eec0 jmp 0x1193eef0 */
  goto L_1193eef0;
L_1193eec2:;
  /* 1193eec2 cmp dword ptr [0x11965a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193eec9 je 0x1193eee3 */
  if (C.zf) goto L_1193eee3;
  /* 1193eecb call 0x1193efe0 */
  push32(0x1193eed0u); f_1193efe0();
  /* 1193eed0 call 0x1193f060 */
  push32(0x1193eed5u); f_1193f060();
  /* 1193eed5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1193eed7 call 0x1193c580 */
  push32(0x1193eedcu); f_1193c580();
  /* 1193eedc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193eedf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193eee1 jmp 0x1193eef0 */
  goto L_1193eef0;
L_1193eee3:;
  /* 1193eee3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1193eee5 call 0x1193c580 */
  push32(0x1193eeeau); f_1193c580();
  /* 1193eeea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193eeed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1193eef0:;
  /* 1193eef0 mov esp, ebp */
  ESP = (EBP);
  /* 1193eef2 pop ebp */
  EBP = (pop32());
  /* 1193eef3 ret  */
  ESPCHK(0x1193ebb0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1193ef00 (89 bytes, 21 insns) */
void f_1193ef00(void) {
  FTRACE(0x1193ef00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193ef00 push ebp */
  push32((uint32_t)(EBP));
  /* 1193ef01 mov ebp, esp */
  EBP = (ESP);
  /* 1193ef03 mov dword ptr [0x11965a40], 0 */
  w32((uint32_t)(0x11965a40), (0x0u));
  /* 1193ef0d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ef11 jne 0x1193ef25 */
  if (!C.zf) goto L_1193ef25;
  /* 1193ef13 mov dword ptr [0x11965a40], 1 */
  w32((uint32_t)(0x11965a40), (0x1u));
  /* 1193ef1d call dword ptr [0x11968330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968330))), 0x1193ef23u);
  /* 1193ef23 jmp 0x1193ef57 */
  goto L_1193ef57;
L_1193ef25:;
  /* 1193ef25 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ef29 jne 0x1193ef3d */
  if (!C.zf) goto L_1193ef3d;
  /* 1193ef2b mov dword ptr [0x11965a40], 1 */
  w32((uint32_t)(0x11965a40), (0x1u));
  /* 1193ef35 call dword ptr [0x11968334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968334))), 0x1193ef3bu);
  /* 1193ef3b jmp 0x1193ef57 */
  goto L_1193ef57;
L_1193ef3d:;
  /* 1193ef3d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ef41 jne 0x1193ef54 */
  if (!C.zf) goto L_1193ef54;
  /* 1193ef43 mov dword ptr [0x11965a40], 1 */
  w32((uint32_t)(0x11965a40), (0x1u));
  /* 1193ef4d mov eax, dword ptr [0x11965a60] */
  EAX = (r32((uint32_t)(0x11965a60)));
  /* 1193ef52 jmp 0x1193ef57 */
  goto L_1193ef57;
L_1193ef54:;
  /* 1193ef54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1193ef57:;
  /* 1193ef57 pop ebp */
  EBP = (pop32());
  /* 1193ef58 ret  */
  ESPCHK(0x1193ef00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef60 @ 0x1193ef60 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1193ef60(void) {
  FTRACE(0x1193ef60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193ef60 push ebp */
  push32((uint32_t)(EBP));
  /* 1193ef61 mov ebp, esp */
  EBP = (ESP);
  /* 1193ef63 push ecx */
  push32((uint32_t)(ECX));
  /* 1193ef64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193ef67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1193ef6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ef6d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ef73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1193ef76 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ef7a ja 0x1193efaa */
  if ((!C.cf&&!C.zf)) goto L_1193efaa;
  /* 1193ef7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ef7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193ef81 mov dl, byte ptr [eax + 0x1193efc4] */
  DL = (r8((uint32_t)(EAX + 0x1193efc4)));
  /* 1193ef87 jmp dword ptr [edx*4 + 0x1193efb0] */
  switch (EDX) {
    case 0: goto L_1193ef8e;
    case 1: goto L_1193ef95;
    case 2: goto L_1193ef9c;
    case 3: goto L_1193efa3;
    case 4: goto L_1193efaa;
    default: x86_unimpl("switch@0x1193ef87 out of table"); return;
  }
L_1193ef8e:;
  /* 1193ef8e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1193ef93 jmp 0x1193efac */
  goto L_1193efac;
L_1193ef95:;
  /* 1193ef95 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1193ef9a jmp 0x1193efac */
  goto L_1193efac;
L_1193ef9c:;
  /* 1193ef9c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1193efa1 jmp 0x1193efac */
  goto L_1193efac;
L_1193efa3:;
  /* 1193efa3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1193efa8 jmp 0x1193efac */
  goto L_1193efac;
L_1193efaa:;
  /* 1193efaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1193efac:;
  /* 1193efac mov esp, ebp */
  ESP = (EBP);
  /* 1193efae pop ebp */
  EBP = (pop32());
  /* 1193efaf ret  */
  ESPCHK(0x1193ef60u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1193efe0 (116 bytes, 29 insns) */
void f_1193efe0(void) {
  FTRACE(0x1193efe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193efe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193efe1 mov ebp, esp */
  EBP = (ESP);
  /* 1193efe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1193efe4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1193efeb jmp 0x1193eff6 */
  goto L_1193eff6;
L_1193efed:;
  /* 1193efed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193eff0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193eff3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1193eff6:;
  /* 1193eff6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193effd jge 0x1193f00b */
  if ((C.sf==C.of)) goto L_1193f00b;
  /* 1193efff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193f002 mov byte ptr [ecx + 0x119670c0], 0 */
  w8((uint32_t)(ECX + 0x119670c0), (0x0u));
  /* 1193f009 jmp 0x1193efed */
  goto L_1193efed;
L_1193f00b:;
  /* 1193f00b mov dword ptr [0x11966f24], 0 */
  w32((uint32_t)(0x11966f24), (0x0u));
  /* 1193f015 mov dword ptr [0x11966fac], 0 */
  w32((uint32_t)(0x11966fac), (0x0u));
  /* 1193f01f mov dword ptr [0x119671c4], 0 */
  w32((uint32_t)(0x119671c4), (0x0u));
  /* 1193f029 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1193f030 jmp 0x1193f03b */
  goto L_1193f03b;
L_1193f032:;
  /* 1193f032 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193f035 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f038 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1193f03b:;
  /* 1193f03b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f03f jge 0x1193f050 */
  if ((C.sf==C.of)) goto L_1193f050;
  /* 1193f041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193f044 mov word ptr [eax*2 + 0x11966fa0], 0 */
  w16((uint32_t)(EAX*2 + 0x11966fa0), (0x0u));
  /* 1193f04e jmp 0x1193f032 */
  goto L_1193f032;
L_1193f050:;
  /* 1193f050 mov esp, ebp */
  ESP = (EBP);
  /* 1193f052 pop ebp */
  EBP = (pop32());
  /* 1193f053 ret  */
  ESPCHK(0x1193efe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f060 @ 0x1193f060 (770 bytes, 175 insns) */
void f_1193f060(void) {
  FTRACE(0x1193f060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193f060 push ebp */
  push32((uint32_t)(EBP));
  /* 1193f061 mov ebp, esp */
  EBP = (ESP);
  /* 1193f063 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f069 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1193f06f push eax */
  push32((uint32_t)(EAX));
  /* 1193f070 mov ecx, dword ptr [0x11966f24] */
  ECX = (r32((uint32_t)(0x11966f24)));
  /* 1193f076 push ecx */
  push32((uint32_t)(ECX));
  /* 1193f077 call dword ptr [0x11968338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968338))), 0x1193f07du);
  /* 1193f07d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f080 jne 0x1193f299 */
  if (!C.zf) goto L_1193f299;
  /* 1193f086 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1193f090 jmp 0x1193f0a1 */
  goto L_1193f0a1;
L_1193f092:;
  /* 1193f092 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f098 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f09b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1193f0a1:;
  /* 1193f0a1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f0ab jae 0x1193f0c2 */
  if (!C.cf) goto L_1193f0c2;
  /* 1193f0ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f0b3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1193f0b9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1193f0c0 jmp 0x1193f092 */
  goto L_1193f092;
L_1193f0c2:;
  /* 1193f0c2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1193f0c9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1193f0cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1193f0d2 jmp 0x1193f0dd */
  goto L_1193f0dd;
L_1193f0d4:;
  /* 1193f0d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193f0d7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f0da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1193f0dd:;
  /* 1193f0dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193f0e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f0e2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1193f0e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193f0e6 je 0x1193f128 */
  if (C.zf) goto L_1193f128;
  /* 1193f0e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193f0eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1193f0ed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1193f0ef mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1193f0f5 jmp 0x1193f106 */
  goto L_1193f106;
L_1193f0f7:;
  /* 1193f0f7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f0fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f100 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1193f106:;
  /* 1193f106 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193f109 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1193f10b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1193f10e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f114 ja 0x1193f126 */
  if ((!C.cf&&!C.zf)) goto L_1193f126;
  /* 1193f116 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f11c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1193f124 jmp 0x1193f0f7 */
  goto L_1193f0f7;
L_1193f126:;
  /* 1193f126 jmp 0x1193f0d4 */
  goto L_1193f0d4;
L_1193f128:;
  /* 1193f128 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193f12a mov eax, dword ptr [0x119671c4] */
  EAX = (r32((uint32_t)(0x119671c4)));
  /* 1193f12f push eax */
  push32((uint32_t)(EAX));
  /* 1193f130 mov ecx, dword ptr [0x11966f24] */
  ECX = (r32((uint32_t)(0x11966f24)));
  /* 1193f136 push ecx */
  push32((uint32_t)(ECX));
  /* 1193f137 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1193f13d push edx */
  push32((uint32_t)(EDX));
  /* 1193f13e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1193f143 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1193f149 push eax */
  push32((uint32_t)(EAX));
  /* 1193f14a push 1 */
  push32((uint32_t)(0x1u));
  /* 1193f14c call 0x11940d10 */
  push32(0x1193f151u); f_11940d10();
  /* 1193f151 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f154 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193f156 mov ecx, dword ptr [0x11966f24] */
  ECX = (r32((uint32_t)(0x11966f24)));
  /* 1193f15c push ecx */
  push32((uint32_t)(ECX));
  /* 1193f15d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1193f162 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1193f168 push edx */
  push32((uint32_t)(EDX));
  /* 1193f169 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1193f16e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1193f174 push eax */
  push32((uint32_t)(EAX));
  /* 1193f175 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1193f17a mov ecx, dword ptr [0x119671c4] */
  ECX = (r32((uint32_t)(0x119671c4)));
  /* 1193f180 push ecx */
  push32((uint32_t)(ECX));
  /* 1193f181 call 0x11940ed0 */
  push32(0x1193f186u); f_11940ed0();
  /* 1193f186 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f189 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193f18b mov edx, dword ptr [0x11966f24] */
  EDX = (r32((uint32_t)(0x11966f24)));
  /* 1193f191 push edx */
  push32((uint32_t)(EDX));
  /* 1193f192 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1193f197 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1193f19d push eax */
  push32((uint32_t)(EAX));
  /* 1193f19e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1193f1a3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1193f1a9 push ecx */
  push32((uint32_t)(ECX));
  /* 1193f1aa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1193f1af mov edx, dword ptr [0x119671c4] */
  EDX = (r32((uint32_t)(0x119671c4)));
  /* 1193f1b5 push edx */
  push32((uint32_t)(EDX));
  /* 1193f1b6 call 0x11940ed0 */
  push32(0x1193f1bbu); f_11940ed0();
  /* 1193f1bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f1be mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1193f1c8 jmp 0x1193f1d9 */
  goto L_1193f1d9;
L_1193f1ca:;
  /* 1193f1ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f1d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f1d3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1193f1d9:;
  /* 1193f1d9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f1e3 jae 0x1193f294 */
  if (!C.cf) goto L_1193f294;
  /* 1193f1e9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f1ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f1f1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1193f1f9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1193f1fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193f1fe je 0x1193f236 */
  if (C.zf) goto L_1193f236;
  /* 1193f200 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f206 mov cl, byte ptr [eax + 0x119670c1] */
  CL = (r8((uint32_t)(EAX + 0x119670c1)));
  /* 1193f20c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1193f20f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f215 mov byte ptr [edx + 0x119670c1], cl */
  w8((uint32_t)(EDX + 0x119670c1), (CL));
  /* 1193f21b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f221 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f227 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1193f22e mov byte ptr [eax + 0x11966fc0], dl */
  w8((uint32_t)(EAX + 0x11966fc0), (DL));
  /* 1193f234 jmp 0x1193f28f */
  goto L_1193f28f;
L_1193f236:;
  /* 1193f236 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f23c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1193f23e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1193f246 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1193f249 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193f24b je 0x1193f282 */
  if (C.zf) goto L_1193f282;
  /* 1193f24d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f253 mov al, byte ptr [edx + 0x119670c1] */
  AL = (r8((uint32_t)(EDX + 0x119670c1)));
  /* 1193f259 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1193f25b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f261 mov byte ptr [ecx + 0x119670c1], al */
  w8((uint32_t)(ECX + 0x119670c1), (AL));
  /* 1193f267 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f26d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f273 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1193f27a mov byte ptr [edx + 0x11966fc0], cl */
  w8((uint32_t)(EDX + 0x11966fc0), (CL));
  /* 1193f280 jmp 0x1193f28f */
  goto L_1193f28f;
L_1193f282:;
  /* 1193f282 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f288 mov byte ptr [edx + 0x11966fc0], 0 */
  w8((uint32_t)(EDX + 0x11966fc0), (0x0u));
L_1193f28f:;
  /* 1193f28f jmp 0x1193f1ca */
  goto L_1193f1ca;
L_1193f294:;
  /* 1193f294 jmp 0x1193f35e */
  goto L_1193f35e;
L_1193f299:;
  /* 1193f299 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1193f2a3 jmp 0x1193f2b4 */
  goto L_1193f2b4;
L_1193f2a5:;
  /* 1193f2a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f2ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f2ae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1193f2b4:;
  /* 1193f2b4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f2be jae 0x1193f35e */
  if (!C.cf) goto L_1193f35e;
  /* 1193f2c4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f2cb jb 0x1193f308 */
  if (C.cf) goto L_1193f308;
  /* 1193f2cd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f2d4 ja 0x1193f308 */
  if ((!C.cf&&!C.zf)) goto L_1193f308;
  /* 1193f2d6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f2dc mov dl, byte ptr [ecx + 0x119670c1] */
  DL = (r8((uint32_t)(ECX + 0x119670c1)));
  /* 1193f2e2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1193f2e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f2eb mov byte ptr [eax + 0x119670c1], dl */
  w8((uint32_t)(EAX + 0x119670c1), (DL));
  /* 1193f2f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f2f7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f2fa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f300 mov byte ptr [edx + 0x11966fc0], cl */
  w8((uint32_t)(EDX + 0x11966fc0), (CL));
  /* 1193f306 jmp 0x1193f359 */
  goto L_1193f359;
L_1193f308:;
  /* 1193f308 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f30f jb 0x1193f34c */
  if (C.cf) goto L_1193f34c;
  /* 1193f311 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f318 ja 0x1193f34c */
  if ((!C.cf&&!C.zf)) goto L_1193f34c;
  /* 1193f31a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f320 mov cl, byte ptr [eax + 0x119670c1] */
  CL = (r8((uint32_t)(EAX + 0x119670c1)));
  /* 1193f326 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1193f329 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f32f mov byte ptr [edx + 0x119670c1], cl */
  w8((uint32_t)(EDX + 0x119670c1), (CL));
  /* 1193f335 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f33b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f33e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f344 mov byte ptr [ecx + 0x11966fc0], al */
  w8((uint32_t)(ECX + 0x11966fc0), (AL));
  /* 1193f34a jmp 0x1193f359 */
  goto L_1193f359;
L_1193f34c:;
  /* 1193f34c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1193f352 mov byte ptr [edx + 0x11966fc0], 0 */
  w8((uint32_t)(EDX + 0x11966fc0), (0x0u));
L_1193f359:;
  /* 1193f359 jmp 0x1193f2a5 */
  goto L_1193f2a5;
L_1193f35e:;
  /* 1193f35e mov esp, ebp */
  ESP = (EBP);
  /* 1193f360 pop ebp */
  EBP = (pop32());
  /* 1193f361 ret  */
  ESPCHK(0x1193f060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x1193f370 (23 bytes, 9 insns) */
void f_1193f370(void) {
  FTRACE(0x1193f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193f370 push ebp */
  push32((uint32_t)(EBP));
  /* 1193f371 mov ebp, esp */
  EBP = (ESP);
  /* 1193f373 cmp dword ptr [0x11966fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11966fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f37a je 0x1193f383 */
  if (C.zf) goto L_1193f383;
  /* 1193f37c mov eax, dword ptr [0x11966f24] */
  EAX = (r32((uint32_t)(0x11966f24)));
  /* 1193f381 jmp 0x1193f385 */
  goto L_1193f385;
L_1193f383:;
  /* 1193f383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1193f385:;
  /* 1193f385 pop ebp */
  EBP = (pop32());
  /* 1193f386 ret  */
  ESPCHK(0x1193f370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f390 @ 0x1193f390 (34 bytes, 10 insns) */
void f_1193f390(void) {
  FTRACE(0x1193f390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193f390 push ebp */
  push32((uint32_t)(EBP));
  /* 1193f391 mov ebp, esp */
  EBP = (ESP);
  /* 1193f393 cmp dword ptr [0x11967370], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11967370))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f39a jne 0x1193f3b0 */
  if (!C.zf) goto L_1193f3b0;
  /* 1193f39c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1193f39e call 0x1193ebb0 */
  push32(0x1193f3a3u); f_1193ebb0();
  /* 1193f3a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f3a6 mov dword ptr [0x11967370], 1 */
  w32((uint32_t)(0x11967370), (0x1u));
L_1193f3b0:;
  /* 1193f3b0 pop ebp */
  EBP = (pop32());
  /* 1193f3b1 ret  */
  ESPCHK(0x1193f390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3c0 @ 0x1193f3c0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_1193f3c0(void) {
  FTRACE(0x1193f3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193f3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193f3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1193f3c3 push edi */
  push32((uint32_t)(EDI));
  /* 1193f3c4 push esi */
  push32((uint32_t)(ESI));
  /* 1193f3c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1193f3c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1193f3cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1193f3ce mov eax, ecx */
  EAX = (ECX);
  /* 1193f3d0 mov edx, ecx */
  EDX = (ECX);
  /* 1193f3d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f3d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f3d6 jbe 0x1193f3e0 */
  if ((C.cf||C.zf)) goto L_1193f3e0;
  /* 1193f3d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f3da jb 0x1193f558 */
  if (C.cf) goto L_1193f558;
L_1193f3e0:;
  /* 1193f3e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1193f3e6 jne 0x1193f3fc */
  if (!C.zf) goto L_1193f3fc;
  /* 1193f3e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1193f3eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1193f3ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f3f1 jb 0x1193f41c */
  if (C.cf) goto L_1193f41c;
  /* 1193f3f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1193f3f5 jmp dword ptr [edx*4 + 0x1193f508] */
  switch (EDX) {
    case 0: goto L_1193f518;
    case 1: goto L_1193f520;
    case 2: goto L_1193f52c;
    case 3: goto L_1193f540;
    default: x86_unimpl("switch@0x1193f3f5 out of table"); return;
  }
L_1193f3fc:;
  /* 1193f3fc mov eax, edi */
  EAX = (EDI);
  /* 1193f3fe mov edx, 3 */
  EDX = (0x3u);
  /* 1193f403 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f406 jb 0x1193f414 */
  if (C.cf) goto L_1193f414;
  /* 1193f408 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1193f40b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f40d jmp dword ptr [eax*4 + 0x1193f420] */
  switch (EAX) {
    case 1: goto L_1193f430;
    case 2: goto L_1193f45c;
    case 3: goto L_1193f480;
    default: x86_unimpl("switch@0x1193f40d out of table"); return;
  }
L_1193f414:;
  /* 1193f414 jmp dword ptr [ecx*4 + 0x1193f518] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1193f518)))); return;
  /* 1193f41b nop  */
  /* nop */
L_1193f41c:;
  /* 1193f41c jmp dword ptr [ecx*4 + 0x1193f49c] */
  switch (ECX) {
    case 0: goto L_1193f4ff;
    case 1: goto L_1193f4ec;
    case 2: goto L_1193f4e4;
    case 3: goto L_1193f4dc;
    case 4: goto L_1193f4d4;
    case 5: goto L_1193f4cc;
    case 6: goto L_1193f4c4;
    case 7: goto L_1193f4bc;
    default: x86_unimpl("switch@0x1193f41c out of table"); return;
  }
  /* 1193f423 nop  */
  /* nop */
L_1193f430:;
  /* 1193f430 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f432 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1193f434 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1193f436 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1193f439 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1193f43c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1193f43f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1193f442 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1193f445 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f448 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f44b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f44e jb 0x1193f41c */
  if (C.cf) goto L_1193f41c;
  /* 1193f450 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1193f452 jmp dword ptr [edx*4 + 0x1193f508] */
  switch (EDX) {
    case 0: goto L_1193f518;
    case 1: goto L_1193f520;
    case 2: goto L_1193f52c;
    case 3: goto L_1193f540;
    default: x86_unimpl("switch@0x1193f452 out of table"); return;
  }
  /* 1193f459 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1193f45c:;
  /* 1193f45c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f45e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1193f460 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1193f462 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1193f465 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1193f468 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1193f46b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f46e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f471 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f474 jb 0x1193f41c */
  if (C.cf) goto L_1193f41c;
  /* 1193f476 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1193f478 jmp dword ptr [edx*4 + 0x1193f508] */
  switch (EDX) {
    case 0: goto L_1193f518;
    case 1: goto L_1193f520;
    case 2: goto L_1193f52c;
    case 3: goto L_1193f540;
    default: x86_unimpl("switch@0x1193f478 out of table"); return;
  }
  /* 1193f47f nop  */
  /* nop */
L_1193f480:;
  /* 1193f480 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f482 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1193f484 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1193f486 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1193f487 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1193f48a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1193f48b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f48e jb 0x1193f41c */
  if (C.cf) goto L_1193f41c;
  /* 1193f490 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1193f492 jmp dword ptr [edx*4 + 0x1193f508] */
  switch (EDX) {
    case 0: goto L_1193f518;
    case 1: goto L_1193f520;
    case 2: goto L_1193f52c;
    case 3: goto L_1193f540;
    default: x86_unimpl("switch@0x1193f492 out of table"); return;
  }
  /* 1193f499 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1193f4bc:;
  /* 1193f4bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1193f4c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1193f4c4:;
  /* 1193f4c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1193f4c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1193f4cc:;
  /* 1193f4cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1193f4d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1193f4d4:;
  /* 1193f4d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1193f4d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1193f4dc:;
  /* 1193f4dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1193f4e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1193f4e4:;
  /* 1193f4e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1193f4e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1193f4ec:;
  /* 1193f4ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1193f4f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1193f4f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1193f4fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f4fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1193f4ff:;
  /* 1193f4ff jmp dword ptr [edx*4 + 0x1193f508] */
  switch (EDX) {
    case 0: goto L_1193f518;
    case 1: goto L_1193f520;
    case 2: goto L_1193f52c;
    case 3: goto L_1193f540;
    default: x86_unimpl("switch@0x1193f4ff out of table"); return;
  }
  /* 1193f506 mov edi, edi */
  EDI = (EDI);
L_1193f518:;
  /* 1193f518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193f51b pop esi */
  ESI = (pop32());
  /* 1193f51c pop edi */
  EDI = (pop32());
  /* 1193f51d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1193f51e ret  */
  ESPCHK(0x1193f3c0u, _esp0);
  ESP += 4; return;
  /* 1193f51f nop  */
  /* nop */
L_1193f520:;
  /* 1193f520 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1193f522 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1193f524 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193f527 pop esi */
  ESI = (pop32());
  /* 1193f528 pop edi */
  EDI = (pop32());
  /* 1193f529 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1193f52a ret  */
  ESPCHK(0x1193f3c0u, _esp0);
  ESP += 4; return;
  /* 1193f52b nop  */
  /* nop */
L_1193f52c:;
  /* 1193f52c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1193f52e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1193f530 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1193f533 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1193f536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193f539 pop esi */
  ESI = (pop32());
  /* 1193f53a pop edi */
  EDI = (pop32());
  /* 1193f53b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1193f53c ret  */
  ESPCHK(0x1193f3c0u, _esp0);
  ESP += 4; return;
  /* 1193f53d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1193f540:;
  /* 1193f540 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1193f542 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1193f544 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1193f547 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1193f54a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1193f54d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1193f550 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193f553 pop esi */
  ESI = (pop32());
  /* 1193f554 pop edi */
  EDI = (pop32());
  /* 1193f555 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1193f556 ret  */
  ESPCHK(0x1193f3c0u, _esp0);
  ESP += 4; return;
  /* 1193f557 nop  */
  /* nop */
L_1193f558:;
  /* 1193f558 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1193f55c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1193f560 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1193f566 jne 0x1193f58c */
  if (!C.zf) goto L_1193f58c;
  /* 1193f568 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1193f56b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1193f56e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f571 jb 0x1193f580 */
  if (C.cf) goto L_1193f580;
  /* 1193f573 std  */
  C.df=1;
  /* 1193f574 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1193f576 cld  */
  C.df=0;
  /* 1193f577 jmp dword ptr [edx*4 + 0x1193f6a0] */
  switch (EDX) {
    case 0: goto L_1193f6b0;
    case 1: goto L_1193f6b8;
    case 2: goto L_1193f6c8;
    case 3: goto L_1193f6dc;
    default: x86_unimpl("switch@0x1193f577 out of table"); return;
  }
  /* 1193f57e mov edi, edi */
  EDI = (EDI);
L_1193f580:;
  /* 1193f580 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1193f582 jmp dword ptr [ecx*4 + 0x1193f650] */
  switch (ECX) {
    case 0: goto L_1193f697;
    default: x86_unimpl("switch@0x1193f582 out of table"); return;
  }
  /* 1193f589 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1193f58c:;
  /* 1193f58c mov eax, edi */
  EAX = (EDI);
  /* 1193f58e mov edx, 3 */
  EDX = (0x3u);
  /* 1193f593 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f596 jb 0x1193f5a4 */
  if (C.cf) goto L_1193f5a4;
  /* 1193f598 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1193f59b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f59d jmp dword ptr [eax*4 + 0x1193f5a8] */
  switch (EAX) {
    case 1: goto L_1193f5b8;
    case 2: goto L_1193f5d8;
    case 3: goto L_1193f600;
    default: x86_unimpl("switch@0x1193f59d out of table"); return;
  }
L_1193f5a4:;
  /* 1193f5a4 jmp dword ptr [ecx*4 + 0x1193f6a0] */
  switch (ECX) {
    case 0: goto L_1193f6b0;
    case 1: goto L_1193f6b8;
    case 2: goto L_1193f6c8;
    case 3: goto L_1193f6dc;
    default: x86_unimpl("switch@0x1193f5a4 out of table"); return;
  }
  /* 1193f5ab nop  */
  /* nop */
L_1193f5b8:;
  /* 1193f5b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1193f5bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f5bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1193f5c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1193f5c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1193f5c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1193f5c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f5c8 jb 0x1193f580 */
  if (C.cf) goto L_1193f580;
  /* 1193f5ca std  */
  C.df=1;
  /* 1193f5cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1193f5cd cld  */
  C.df=0;
  /* 1193f5ce jmp dword ptr [edx*4 + 0x1193f6a0] */
  switch (EDX) {
    case 0: goto L_1193f6b0;
    case 1: goto L_1193f6b8;
    case 2: goto L_1193f6c8;
    case 3: goto L_1193f6dc;
    default: x86_unimpl("switch@0x1193f5ce out of table"); return;
  }
  /* 1193f5d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1193f5d8:;
  /* 1193f5d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1193f5db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f5dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1193f5e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1193f5e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1193f5e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1193f5e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f5ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f5ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f5f2 jb 0x1193f580 */
  if (C.cf) goto L_1193f580;
  /* 1193f5f4 std  */
  C.df=1;
  /* 1193f5f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1193f5f7 cld  */
  C.df=0;
  /* 1193f5f8 jmp dword ptr [edx*4 + 0x1193f6a0] */
  switch (EDX) {
    case 0: goto L_1193f6b0;
    case 1: goto L_1193f6b8;
    case 2: goto L_1193f6c8;
    case 3: goto L_1193f6dc;
    default: x86_unimpl("switch@0x1193f5f8 out of table"); return;
  }
  /* 1193f5ff nop  */
  /* nop */
L_1193f600:;
  /* 1193f600 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1193f603 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f605 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1193f608 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1193f60b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1193f60e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1193f611 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1193f614 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1193f617 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f61a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f61d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f620 jb 0x1193f580 */
  if (C.cf) goto L_1193f580;
  /* 1193f626 std  */
  C.df=1;
  /* 1193f627 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1193f629 cld  */
  C.df=0;
  /* 1193f62a jmp dword ptr [edx*4 + 0x1193f6a0] */
  switch (EDX) {
    case 0: goto L_1193f6b0;
    case 1: goto L_1193f6b8;
    case 2: goto L_1193f6c8;
    case 3: goto L_1193f6dc;
    default: x86_unimpl("switch@0x1193f62a out of table"); return;
  }
  /* 1193f631 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1193f634 push esp */
  push32((uint32_t)(ESP));
  /* 1193f635 not byte ptr [ebx - 0x6c09a3ef] */
  w8((uint32_t)(EBX + -0x6c09a3ef), (~(r8((uint32_t)(EBX + -0x6c09a3ef)))));
  /* 1193f63b adc dword ptr [esi + esi*8 - 0x6d], esp */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*8 + -0x6d))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*8 + -0x6d), (_r)); fl_add(_a,_b,_r,32); }
  /* 1193f63f adc dword ptr [esi + esi*8 - 0x6d], ebp */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*8 + -0x6d))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*8 + -0x6d), (_r)); fl_add(_a,_b,_r,32); }
  /* 1193f643 adc dword ptr [esi + esi*8 - 0x6d], esi */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*8 + -0x6d))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*8 + -0x6d), (_r)); fl_add(_a,_b,_r,32); }
  /* 1193f647 adc dword ptr [esi + esi*8 - 0x6d], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*8 + -0x6d))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*8 + -0x6d), (_r)); fl_add(_a,_b,_r,32); }
  /* 1193f64c test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1193f64e xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 1193f654 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1193f658 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1193f65c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1193f660 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1193f664 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1193f668 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1193f66c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1193f670 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1193f674 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1193f678 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1193f67c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1193f680 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1193f684 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1193f688 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1193f68c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1193f693 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f695 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1193f697:;
  /* 1193f697 jmp dword ptr [edx*4 + 0x1193f6a0] */
  switch (EDX) {
    case 0: goto L_1193f6b0;
    case 1: goto L_1193f6b8;
    case 2: goto L_1193f6c8;
    case 3: goto L_1193f6dc;
    default: x86_unimpl("switch@0x1193f697 out of table"); return;
  }
  /* 1193f69e mov edi, edi */
  EDI = (EDI);
L_1193f6b0:;
  /* 1193f6b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193f6b3 pop esi */
  ESI = (pop32());
  /* 1193f6b4 pop edi */
  EDI = (pop32());
  /* 1193f6b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1193f6b6 ret  */
  ESPCHK(0x1193f3c0u, _esp0);
  ESP += 4; return;
  /* 1193f6b7 nop  */
  /* nop */
L_1193f6b8:;
  /* 1193f6b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1193f6bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1193f6be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193f6c1 pop esi */
  ESI = (pop32());
  /* 1193f6c2 pop edi */
  EDI = (pop32());
  /* 1193f6c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1193f6c4 ret  */
  ESPCHK(0x1193f3c0u, _esp0);
  ESP += 4; return;
  /* 1193f6c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1193f6c8:;
  /* 1193f6c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1193f6cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1193f6ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1193f6d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1193f6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193f6d7 pop esi */
  ESI = (pop32());
  /* 1193f6d8 pop edi */
  EDI = (pop32());
  /* 1193f6d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1193f6da ret  */
  ESPCHK(0x1193f3c0u, _esp0);
  ESP += 4; return;
  /* 1193f6db nop  */
  /* nop */
L_1193f6dc:;
  /* 1193f6dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1193f6df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1193f6e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1193f6e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1193f6e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1193f6eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1193f6ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193f6f1 pop esi */
  ESI = (pop32());
  /* 1193f6f2 pop edi */
  EDI = (pop32());
  /* 1193f6f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1193f6f4 ret  */
  ESPCHK(0x1193f3c0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1193f700 (104 bytes, 43 insns) */
void f_1193f700(void) {
  FTRACE(0x1193f700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193f700 push ebx */
  push32((uint32_t)(EBX));
  /* 1193f701 push esi */
  push32((uint32_t)(ESI));
  /* 1193f702 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1193f706 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193f708 jne 0x1193f722 */
  if (!C.zf) goto L_1193f722;
  /* 1193f70a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1193f70e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1193f712 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f714 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1193f716 mov ebx, eax */
  EBX = (EAX);
  /* 1193f718 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1193f71c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1193f71e mov edx, ebx */
  EDX = (EBX);
  /* 1193f720 jmp 0x1193f763 */
  goto L_1193f763;
L_1193f722:;
  /* 1193f722 mov ecx, eax */
  ECX = (EAX);
  /* 1193f724 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1193f728 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1193f72c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1193f730:;
  /* 1193f730 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1193f732 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1193f734 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1193f736 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1193f738 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1193f73a jne 0x1193f730 */
  if (!C.zf) goto L_1193f730;
  /* 1193f73c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1193f73e mov esi, eax */
  ESI = (EAX);
  /* 1193f740 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1193f744 mov ecx, eax */
  ECX = (EAX);
  /* 1193f746 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1193f74a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1193f74c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f74e jb 0x1193f75e */
  if (C.cf) goto L_1193f75e;
  /* 1193f750 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f754 ja 0x1193f75e */
  if ((!C.cf&&!C.zf)) goto L_1193f75e;
  /* 1193f756 jb 0x1193f75f */
  if (C.cf) goto L_1193f75f;
  /* 1193f758 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f75c jbe 0x1193f75f */
  if ((C.cf||C.zf)) goto L_1193f75f;
L_1193f75e:;
  /* 1193f75e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1193f75f:;
  /* 1193f75f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f761 mov eax, esi */
  EAX = (ESI);
L_1193f763:;
  /* 1193f763 pop esi */
  ESI = (pop32());
  /* 1193f764 pop ebx */
  EBX = (pop32());
  /* 1193f765 ret 0x10 */
  ESPCHK(0x1193f700u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1193f770 (117 bytes, 44 insns) */
void f_1193f770(void) {
  FTRACE(0x1193f770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193f770 push ebx */
  push32((uint32_t)(EBX));
  /* 1193f771 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1193f775 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193f777 jne 0x1193f791 */
  if (!C.zf) goto L_1193f791;
  /* 1193f779 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1193f77d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1193f781 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f783 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1193f785 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1193f789 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1193f78b mov eax, edx */
  EAX = (EDX);
  /* 1193f78d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1193f78f jmp 0x1193f7e1 */
  goto L_1193f7e1;
L_1193f791:;
  /* 1193f791 mov ecx, eax */
  ECX = (EAX);
  /* 1193f793 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1193f797 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1193f79b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1193f79f:;
  /* 1193f79f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1193f7a1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1193f7a3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1193f7a5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1193f7a7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1193f7a9 jne 0x1193f79f */
  if (!C.zf) goto L_1193f79f;
  /* 1193f7ab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1193f7ad mov ecx, eax */
  ECX = (EAX);
  /* 1193f7af mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1193f7b3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1193f7b4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1193f7b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f7ba jb 0x1193f7ca */
  if (C.cf) goto L_1193f7ca;
  /* 1193f7bc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f7c0 ja 0x1193f7ca */
  if ((!C.cf&&!C.zf)) goto L_1193f7ca;
  /* 1193f7c2 jb 0x1193f7d2 */
  if (C.cf) goto L_1193f7d2;
  /* 1193f7c4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f7c8 jbe 0x1193f7d2 */
  if ((C.cf||C.zf)) goto L_1193f7d2;
L_1193f7ca:;
  /* 1193f7ca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f7ce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1193f7d2:;
  /* 1193f7d2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f7d6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f7da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1193f7dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1193f7de sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1193f7e1:;
  /* 1193f7e1 pop ebx */
  EBX = (pop32());
  /* 1193f7e2 ret 0x10 */
  ESPCHK(0x1193f770u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f7f0 @ 0x1193f7f0 (628 bytes, 214 insns) */
void f_1193f7f0(void) {
  FTRACE(0x1193f7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193f7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1193f7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1193f7f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f7f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1193f7f7 push esi */
  push32((uint32_t)(ESI));
  /* 1193f7f8 push edi */
  push32((uint32_t)(EDI));
L_1193f7f9:;
  /* 1193f7f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f7fd jne 0x1193f81d */
  if (!C.zf) goto L_1193f81d;
  /* 1193f7ff push 0x11960e30 */
  push32((uint32_t)(0x11960e30u));
  /* 1193f804 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193f806 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1193f808 push 0x11960e24 */
  push32((uint32_t)(0x11960e24u));
  /* 1193f80d push 2 */
  push32((uint32_t)(0x2u));
  /* 1193f80f call 0x11937ba0 */
  push32(0x1193f814u); f_11937ba0();
  /* 1193f814 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f817 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f81a jne 0x1193f81d */
  if (!C.zf) goto L_1193f81d;
  /* 1193f81c int3  */
  x86_unimpl("int3 @ 0x1193f81c");
L_1193f81d:;
  /* 1193f81d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193f81f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193f821 jne 0x1193f7f9 */
  if (!C.zf) goto L_1193f7f9;
  /* 1193f823 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193f826 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1193f829 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f82c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1193f82f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1193f832 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f835 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1193f838 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1193f83e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193f840 je 0x1193f84f */
  if (C.zf) goto L_1193f84f;
  /* 1193f842 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f845 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1193f848 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1193f84b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193f84d je 0x1193f865 */
  if (C.zf) goto L_1193f865;
L_1193f84f:;
  /* 1193f84f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f852 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1193f855 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1193f857 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f85a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1193f85d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1193f860 jmp 0x1193fa5d */
  goto L_1193fa5d;
L_1193f865:;
  /* 1193f865 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f868 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1193f86b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1193f86e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193f870 je 0x1193f8bc */
  if (C.zf) goto L_1193f8bc;
  /* 1193f872 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f875 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1193f87c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f87f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1193f882 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1193f885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193f887 je 0x1193f8a5 */
  if (C.zf) goto L_1193f8a5;
  /* 1193f889 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f88c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f88f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1193f892 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1193f894 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f897 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1193f89a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1193f89d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f8a0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1193f8a3 jmp 0x1193f8bc */
  goto L_1193f8bc;
L_1193f8a5:;
  /* 1193f8a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f8a8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1193f8ab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1193f8ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f8b1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1193f8b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1193f8b7 jmp 0x1193fa5d */
  goto L_1193fa5d;
L_1193f8bc:;
  /* 1193f8bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f8bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1193f8c2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1193f8c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f8c8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1193f8cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f8ce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1193f8d1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1193f8d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f8d7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1193f8da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f8dd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1193f8e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1193f8eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193f8ee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1193f8f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f8f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1193f8f7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1193f8fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193f8ff jne 0x1193f92f */
  if (!C.zf) goto L_1193f92f;
  /* 1193f901 cmp dword ptr [ebp - 8], 0x11964140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11964140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f908 je 0x1193f913 */
  if (C.zf) goto L_1193f913;
  /* 1193f90a cmp dword ptr [ebp - 8], 0x11964160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11964160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f911 jne 0x1193f923 */
  if (!C.zf) goto L_1193f923;
L_1193f913:;
  /* 1193f913 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193f916 push edx */
  push32((uint32_t)(EDX));
  /* 1193f917 call 0x11941760 */
  push32(0x1193f91cu); f_11941760();
  /* 1193f91c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f91f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193f921 jne 0x1193f92f */
  if (!C.zf) goto L_1193f92f;
L_1193f923:;
  /* 1193f923 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f926 push eax */
  push32((uint32_t)(EAX));
  /* 1193f927 call 0x11941690 */
  push32(0x1193f92cu); f_11941690();
  /* 1193f92c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1193f92f:;
  /* 1193f92f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f932 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1193f935 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1193f93b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193f93d je 0x1193fa1b */
  if (C.zf) goto L_1193fa1b;
L_1193f943:;
  /* 1193f943 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f946 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f949 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1193f94b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f94e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193f950 jge 0x1193f973 */
  if ((C.sf==C.of)) goto L_1193f973;
  /* 1193f952 push 0x11960de4 */
  push32((uint32_t)(0x11960de4u));
  /* 1193f957 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193f959 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1193f95e push 0x11960e24 */
  push32((uint32_t)(0x11960e24u));
  /* 1193f963 push 2 */
  push32((uint32_t)(0x2u));
  /* 1193f965 call 0x11937ba0 */
  push32(0x1193f96au); f_11937ba0();
  /* 1193f96a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f96d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f970 jne 0x1193f973 */
  if (!C.zf) goto L_1193f973;
  /* 1193f972 int3  */
  x86_unimpl("int3 @ 0x1193f972");
L_1193f973:;
  /* 1193f973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193f975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193f977 jne 0x1193f943 */
  if (!C.zf) goto L_1193f943;
  /* 1193f979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f97c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f97f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1193f981 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f984 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1193f987 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f98a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1193f98d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f990 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f993 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1193f995 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f998 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1193f99b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193f99e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f9a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1193f9a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f9a8 jle 0x1193f9c6 */
  if ((C.zf||C.sf!=C.of)) goto L_1193f9c6;
  /* 1193f9aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193f9ad push ecx */
  push32((uint32_t)(ECX));
  /* 1193f9ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193f9b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1193f9b4 push eax */
  push32((uint32_t)(EAX));
  /* 1193f9b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193f9b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1193f9b9 call 0x11941380 */
  push32(0x1193f9beu); f_11941380();
  /* 1193f9be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f9c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1193f9c4 jmp 0x1193fa0e */
  goto L_1193fa0e;
L_1193f9c6:;
  /* 1193f9c6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193f9ca je 0x1193f9e9 */
  if (C.zf) goto L_1193f9e9;
  /* 1193f9cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193f9cf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1193f9d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193f9d5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1193f9d8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193f9db mov ecx, dword ptr [edx*4 + 0x11967220] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11967220)));
  /* 1193f9e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193f9e4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1193f9e7 jmp 0x1193f9f0 */
  goto L_1193f9f0;
L_1193f9e9:;
  /* 1193f9e9 mov dword ptr [ebp - 0x14], 0x11963a60 */
  w32((uint32_t)(EBP + -0x14), (0x11963a60u));
L_1193f9f0:;
  /* 1193f9f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1193f9f3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1193f9f7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1193f9fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193f9fc je 0x1193fa0e */
  if (C.zf) goto L_1193fa0e;
  /* 1193f9fe push 2 */
  push32((uint32_t)(0x2u));
  /* 1193fa00 push 0 */
  push32((uint32_t)(0x0u));
  /* 1193fa02 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193fa05 push ecx */
  push32((uint32_t)(ECX));
  /* 1193fa06 call 0x11941230 */
  push32(0x1193fa0bu); f_11941230();
  /* 1193fa0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1193fa0e:;
  /* 1193fa0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193fa11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1193fa14 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1193fa17 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1193fa19 jmp 0x1193fa39 */
  goto L_1193fa39;
L_1193fa1b:;
  /* 1193fa1b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1193fa22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fa25 push edx */
  push32((uint32_t)(EDX));
  /* 1193fa26 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1193fa29 push eax */
  push32((uint32_t)(EAX));
  /* 1193fa2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1193fa2d push ecx */
  push32((uint32_t)(ECX));
  /* 1193fa2e call 0x11941380 */
  push32(0x1193fa33u); f_11941380();
  /* 1193fa33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fa36 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1193fa39:;
  /* 1193fa39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193fa3c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fa3f je 0x1193fa55 */
  if (C.zf) goto L_1193fa55;
  /* 1193fa41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193fa44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1193fa47 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1193fa4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193fa4d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1193fa50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1193fa53 jmp 0x1193fa5d */
  goto L_1193fa5d;
L_1193fa55:;
  /* 1193fa55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193fa58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1193fa5d:;
  /* 1193fa5d pop edi */
  EDI = (pop32());
  /* 1193fa5e pop esi */
  ESI = (pop32());
  /* 1193fa5f pop ebx */
  EBX = (pop32());
  /* 1193fa60 mov esp, ebp */
  ESP = (EBP);
  /* 1193fa62 pop ebp */
  EBP = (pop32());
  /* 1193fa63 ret  */
  ESPCHK(0x1193f7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa70 @ 0x1193fa70 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1193fa70(void) {
  FTRACE(0x1193fa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1193fa70 push ebp */
  push32((uint32_t)(EBP));
  /* 1193fa71 mov ebp, esp */
  EBP = (ESP);
  /* 1193fa73 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193fa79 push ebx */
  push32((uint32_t)(EBX));
  /* 1193fa7a push esi */
  push32((uint32_t)(ESI));
  /* 1193fa7b push edi */
  push32((uint32_t)(EDI));
  /* 1193fa7c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1193fa83 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1193fa8d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1193fa94:;
  /* 1193fa94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193fa97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1193fa99 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1193fa9c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193faa0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193faa3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193faa6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1193faa9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193faab je 0x11940687 */
  if (C.zf) goto L_11940687;
  /* 1193fab1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fab8 jl 0x11940687 */
  if ((C.sf!=C.of)) goto L_11940687;
  /* 1193fabe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fac2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fac5 jl 0x1193fae6 */
  if ((C.sf!=C.of)) goto L_1193fae6;
  /* 1193fac7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193facb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193face jg 0x1193fae6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1193fae6;
  /* 1193fad0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fad4 movsx ecx, byte ptr [eax + 0x11960e1c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11960e1c))));
  /* 1193fadb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1193fade mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1193fae4 jmp 0x1193faf0 */
  goto L_1193faf0;
L_1193fae6:;
  /* 1193fae6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1193faf0:;
  /* 1193faf0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1193faf6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1193faf9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1193fafc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193faff movsx edx, byte ptr [ecx + eax*8 + 0x11960e3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11960e3c))));
  /* 1193fb07 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1193fb0a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1193fb0d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1193fb10 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1193fb16 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fb1d ja 0x11940682 */
  if ((!C.cf&&!C.zf)) goto L_11940682;
  /* 1193fb23 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1193fb29 jmp dword ptr [ecx*4 + 0x11940694] */
  switch (ECX) {
    case 0: goto L_1193fb30;
    case 1: goto L_1193fbca;
    case 2: goto L_1193fc0c;
    case 3: goto L_1193fc7b;
    case 4: goto L_1193fcd3;
    case 5: goto L_1193fce2;
    case 6: goto L_1193fd2e;
    case 7: goto L_1193fdc1;
    case 8: goto L_1193fc58;
    case 9: goto L_1193fc63;
    case 10: goto L_1193fc4e;
    case 11: goto L_1193fc43;
    case 12: goto L_1193fc6e;
    case 13: goto L_1193fc76;
    default: x86_unimpl("switch@0x1193fb29 out of table"); return;
  }
L_1193fb30:;
  /* 1193fb30 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1193fb37 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1193fb3a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1193fb40 mov eax, dword ptr [0x11963c98] */
  EAX = (r32((uint32_t)(0x11963c98)));
  /* 1193fb45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1193fb47 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1193fb4b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1193fb51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193fb53 je 0x1193fbad */
  if (C.zf) goto L_1193fbad;
  /* 1193fb55 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1193fb5b push edx */
  push32((uint32_t)(EDX));
  /* 1193fb5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193fb5f push eax */
  push32((uint32_t)(EAX));
  /* 1193fb60 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fb64 push ecx */
  push32((uint32_t)(ECX));
  /* 1193fb65 call 0x119407a0 */
  push32(0x1193fb6au); f_119407a0();
  /* 1193fb6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fb6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193fb70 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1193fb72 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1193fb75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193fb78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fb7b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1193fb7e:;
  /* 1193fb7e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fb82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193fb84 jne 0x1193fba7 */
  if (!C.zf) goto L_1193fba7;
  /* 1193fb86 push 0x11960ebc */
  push32((uint32_t)(0x11960ebcu));
  /* 1193fb8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1193fb8d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1193fb92 push 0x11960eb0 */
  push32((uint32_t)(0x11960eb0u));
  /* 1193fb97 push 2 */
  push32((uint32_t)(0x2u));
  /* 1193fb99 call 0x11937ba0 */
  push32(0x1193fb9eu); f_11937ba0();
  /* 1193fb9e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fba1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fba4 jne 0x1193fba7 */
  if (!C.zf) goto L_1193fba7;
  /* 1193fba6 int3  */
  x86_unimpl("int3 @ 0x1193fba6");
L_1193fba7:;
  /* 1193fba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193fba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193fbab jne 0x1193fb7e */
  if (!C.zf) goto L_1193fb7e;
L_1193fbad:;
  /* 1193fbad lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1193fbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1193fbb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1193fbb7 push edx */
  push32((uint32_t)(EDX));
  /* 1193fbb8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fbbc push eax */
  push32((uint32_t)(EAX));
  /* 1193fbbd call 0x119407a0 */
  push32(0x1193fbc2u); f_119407a0();
  /* 1193fbc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fbc5 jmp 0x11940682 */
  goto L_11940682;
L_1193fbca:;
  /* 1193fbca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1193fbd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1193fbd4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1193fbda mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1193fbe0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1193fbe6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1193fbec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1193fbef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1193fbf6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1193fc00 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1193fc07 jmp 0x11940682 */
  goto L_11940682;
L_1193fc0c:;
  /* 1193fc0c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fc10 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1193fc16 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1193fc1c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193fc1f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1193fc25 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fc2c ja 0x1193fc76 */
  if ((!C.cf&&!C.zf)) goto L_1193fc76;
  /* 1193fc2e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1193fc34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193fc36 mov al, byte ptr [ecx + 0x119406cc] */
  AL = (r8((uint32_t)(ECX + 0x119406cc)));
  /* 1193fc3c jmp dword ptr [eax*4 + 0x119406b4] */
  switch (EAX) {
    case 0: goto L_1193fc58;
    case 1: goto L_1193fc63;
    case 2: goto L_1193fc4e;
    case 3: goto L_1193fc43;
    case 4: goto L_1193fc6e;
    case 5: goto L_1193fc76;
    default: x86_unimpl("switch@0x1193fc3c out of table"); return;
  }
L_1193fc43:;
  /* 1193fc43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fc46 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1193fc49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1193fc4c jmp 0x1193fc76 */
  goto L_1193fc76;
L_1193fc4e:;
  /* 1193fc4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fc51 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1193fc53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1193fc56 jmp 0x1193fc76 */
  goto L_1193fc76;
L_1193fc58:;
  /* 1193fc58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fc5b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1193fc5e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1193fc61 jmp 0x1193fc76 */
  goto L_1193fc76;
L_1193fc63:;
  /* 1193fc63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fc66 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1193fc69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1193fc6c jmp 0x1193fc76 */
  goto L_1193fc76;
L_1193fc6e:;
  /* 1193fc6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fc71 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1193fc73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1193fc76:;
  /* 1193fc76 jmp 0x11940682 */
  goto L_11940682;
L_1193fc7b:;
  /* 1193fc7b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fc7f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fc82 jne 0x1193fcb7 */
  if (!C.zf) goto L_1193fcb7;
  /* 1193fc84 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1193fc87 push edx */
  push32((uint32_t)(EDX));
  /* 1193fc88 call 0x119408b0 */
  push32(0x1193fc8du); f_119408b0();
  /* 1193fc8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fc90 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1193fc96 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fc9d jge 0x1193fcb5 */
  if ((C.sf==C.of)) goto L_1193fcb5;
  /* 1193fc9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fca2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1193fca4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1193fca7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1193fcad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1193fcaf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1193fcb5:;
  /* 1193fcb5 jmp 0x1193fcce */
  goto L_1193fcce;
L_1193fcb7:;
  /* 1193fcb7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1193fcbd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193fcc0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fcc4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1193fcc8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1193fcce:;
  /* 1193fcce jmp 0x11940682 */
  goto L_11940682;
L_1193fcd3:;
  /* 1193fcd3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1193fcdd jmp 0x11940682 */
  goto L_11940682;
L_1193fce2:;
  /* 1193fce2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fce6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fce9 jne 0x1193fd12 */
  if (!C.zf) goto L_1193fd12;
  /* 1193fceb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1193fcee push eax */
  push32((uint32_t)(EAX));
  /* 1193fcef call 0x119408b0 */
  push32(0x1193fcf4u); f_119408b0();
  /* 1193fcf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fcf7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1193fcfd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fd04 jge 0x1193fd10 */
  if ((C.sf==C.of)) goto L_1193fd10;
  /* 1193fd06 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1193fd10:;
  /* 1193fd10 jmp 0x1193fd29 */
  goto L_1193fd29;
L_1193fd12:;
  /* 1193fd12 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1193fd18 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1193fd1b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fd1f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1193fd23 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1193fd29:;
  /* 1193fd29 jmp 0x11940682 */
  goto L_11940682;
L_1193fd2e:;
  /* 1193fd2e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fd32 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1193fd38 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1193fd3e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193fd41 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1193fd47 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fd4e ja 0x1193fdbc */
  if ((!C.cf&&!C.zf)) goto L_1193fdbc;
  /* 1193fd50 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1193fd56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193fd58 mov al, byte ptr [ecx + 0x119406f1] */
  AL = (r8((uint32_t)(ECX + 0x119406f1)));
  /* 1193fd5e jmp dword ptr [eax*4 + 0x119406dd] */
  switch (EAX) {
    case 0: goto L_1193fd70;
    case 1: goto L_1193fda9;
    case 2: goto L_1193fd65;
    case 3: goto L_1193fdb3;
    case 4: goto L_1193fdbc;
    default: x86_unimpl("switch@0x1193fd5e out of table"); return;
  }
L_1193fd65:;
  /* 1193fd65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fd68 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1193fd6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1193fd6e jmp 0x1193fdbc */
  goto L_1193fdbc;
L_1193fd70:;
  /* 1193fd70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193fd73 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1193fd76 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fd79 jne 0x1193fd9b */
  if (!C.zf) goto L_1193fd9b;
  /* 1193fd7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193fd7e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1193fd82 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fd85 jne 0x1193fd9b */
  if (!C.zf) goto L_1193fd9b;
  /* 1193fd87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1193fd8a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fd8d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1193fd90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fd93 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1193fd96 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1193fd99 jmp 0x1193fda7 */
  goto L_1193fda7;
L_1193fd9b:;
  /* 1193fd9b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1193fda2 jmp 0x1193fb30 */
  goto L_1193fb30;
L_1193fda7:;
  /* 1193fda7 jmp 0x1193fdbc */
  goto L_1193fdbc;
L_1193fda9:;
  /* 1193fda9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fdac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1193fdae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1193fdb1 jmp 0x1193fdbc */
  goto L_1193fdbc;
L_1193fdb3:;
  /* 1193fdb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fdb6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1193fdb9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1193fdbc:;
  /* 1193fdbc jmp 0x11940682 */
  goto L_11940682;
L_1193fdc1:;
  /* 1193fdc1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1193fdc5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1193fdcb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1193fdd1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193fdd4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1193fdda cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fde1 ja 0x119404a7 */
  if ((!C.cf&&!C.zf)) goto L_119404a7;
  /* 1193fde7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1193fded xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1193fdef mov cl, byte ptr [edx + 0x1194075c] */
  CL = (r8((uint32_t)(EDX + 0x1194075c)));
  /* 1193fdf5 jmp dword ptr [ecx*4 + 0x11940720] */
  switch (ECX) {
    case 0: goto L_1193fdfc;
    case 1: goto L_11940090;
    case 2: goto L_1193ff20;
    case 3: goto L_119401c9;
    case 4: goto L_1193fe8b;
    case 5: goto L_1193fe11;
    case 6: goto L_1194019b;
    case 7: goto L_119400a0;
    case 8: goto L_11940045;
    case 9: goto L_11940215;
    case 10: goto L_119401bf;
    case 11: goto L_1193ff36;
    case 12: goto L_119401b3;
    case 13: goto L_119401d5;
    case 14: goto L_119404a7;
    default: x86_unimpl("switch@0x1193fdf5 out of table"); return;
  }
L_1193fdfc:;
  /* 1193fdfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fdff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1193fe04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193fe06 jne 0x1193fe11 */
  if (!C.zf) goto L_1193fe11;
  /* 1193fe08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fe0b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1193fe0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1193fe11:;
  /* 1193fe11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fe14 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1193fe1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1193fe1c je 0x1193fe57 */
  if (C.zf) goto L_1193fe57;
  /* 1193fe1e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1193fe21 push eax */
  push32((uint32_t)(EAX));
  /* 1193fe22 call 0x119408f0 */
  push32(0x1193fe27u); f_119408f0();
  /* 1193fe27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fe2a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1193fe2e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1193fe32 push ecx */
  push32((uint32_t)(ECX));
  /* 1193fe33 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1193fe39 push edx */
  push32((uint32_t)(EDX));
  /* 1193fe3a call 0x119419d0 */
  push32(0x1193fe3fu); f_119419d0();
  /* 1193fe3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fe42 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1193fe45 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fe49 jge 0x1193fe55 */
  if ((C.sf==C.of)) goto L_1193fe55;
  /* 1193fe4b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1193fe55:;
  /* 1193fe55 jmp 0x1193fe7d */
  goto L_1193fe7d;
L_1193fe57:;
  /* 1193fe57 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1193fe5a push eax */
  push32((uint32_t)(EAX));
  /* 1193fe5b call 0x119408b0 */
  push32(0x1193fe60u); f_119408b0();
  /* 1193fe60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fe63 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1193fe6a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1193fe70 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1193fe76 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1193fe7d:;
  /* 1193fe7d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1193fe83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1193fe86 jmp 0x119404a7 */
  goto L_119404a7;
L_1193fe8b:;
  /* 1193fe8b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1193fe8e push eax */
  push32((uint32_t)(EAX));
  /* 1193fe8f call 0x119408b0 */
  push32(0x1193fe94u); f_119408b0();
  /* 1193fe94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fe97 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1193fe9d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193fea4 je 0x1193feb2 */
  if (C.zf) goto L_1193feb2;
  /* 1193fea6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1193feac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193feb0 jne 0x1193fecc */
  if (!C.zf) goto L_1193fecc;
L_1193feb2:;
  /* 1193feb2 mov edx, dword ptr [0x11963fb0] */
  EDX = (r32((uint32_t)(0x11963fb0)));
  /* 1193feb8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1193febb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193febe push eax */
  push32((uint32_t)(EAX));
  /* 1193febf call 0x1193b910 */
  push32(0x1193fec4u); f_1193b910();
  /* 1193fec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193fec7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1193feca jmp 0x1193ff1b */
  goto L_1193ff1b;
L_1193fecc:;
  /* 1193fecc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193fecf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1193fed5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193fed7 je 0x1193fefc */
  if (C.zf) goto L_1193fefc;
  /* 1193fed9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1193fedf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1193fee2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1193fee5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1193feeb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1193feee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1193fef0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1193fef3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1193fefa jmp 0x1193ff1b */
  goto L_1193ff1b;
L_1193fefc:;
  /* 1193fefc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1193ff03 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1193ff09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1193ff0c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1193ff0f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1193ff15 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1193ff18 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1193ff1b:;
  /* 1193ff1b jmp 0x119404a7 */
  goto L_119404a7;
L_1193ff20:;
  /* 1193ff20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ff23 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1193ff29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1193ff2b jne 0x1193ff36 */
  if (!C.zf) goto L_1193ff36;
  /* 1193ff2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ff30 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1193ff33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1193ff36:;
  /* 1193ff36 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ff3d jne 0x1193ff4b */
  if (!C.zf) goto L_1193ff4b;
  /* 1193ff3f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1193ff49 jmp 0x1193ff57 */
  goto L_1193ff57;
L_1193ff4b:;
  /* 1193ff4b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1193ff51 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1193ff57:;
  /* 1193ff57 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1193ff5d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1193ff63 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1193ff66 push edx */
  push32((uint32_t)(EDX));
  /* 1193ff67 call 0x119408b0 */
  push32(0x1193ff6cu); f_119408b0();
  /* 1193ff6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ff6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1193ff72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1193ff75 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1193ff7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193ff7c je 0x1193ffe6 */
  if (C.zf) goto L_1193ffe6;
  /* 1193ff7e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ff82 jne 0x1193ff8d */
  if (!C.zf) goto L_1193ff8d;
  /* 1193ff84 mov ecx, dword ptr [0x11963fb4] */
  ECX = (r32((uint32_t)(0x11963fb4)));
  /* 1193ff8a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1193ff8d:;
  /* 1193ff8d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1193ff94 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193ff97 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1193ff9d:;
  /* 1193ff9d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1193ffa3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1193ffa9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ffac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1193ffb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193ffb4 je 0x1193ffd6 */
  if (C.zf) goto L_1193ffd6;
  /* 1193ffb6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1193ffbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1193ffbe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1193ffc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1193ffc3 je 0x1193ffd6 */
  if (C.zf) goto L_1193ffd6;
  /* 1193ffc5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1193ffcb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1193ffce mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1193ffd4 jmp 0x1193ff9d */
  goto L_1193ff9d;
L_1193ffd6:;
  /* 1193ffd6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1193ffdc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1193ffdf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1193ffe1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1193ffe4 jmp 0x11940040 */
  goto L_11940040;
L_1193ffe6:;
  /* 1193ffe6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1193ffea jne 0x1193fff4 */
  if (!C.zf) goto L_1193fff4;
  /* 1193ffec mov eax, dword ptr [0x11963fb0] */
  EAX = (r32((uint32_t)(0x11963fb0)));
  /* 1193fff1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1193fff4:;
  /* 1193fff4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1193fff7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1193fffd:;
  /* 1193fffd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11940003 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11940009 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194000c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11940012 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11940014 je 0x11940034 */
  if (C.zf) goto L_11940034;
  /* 11940016 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1194001c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1194001f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11940021 je 0x11940034 */
  if (C.zf) goto L_11940034;
  /* 11940023 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11940029 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194002c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11940032 jmp 0x1193fffd */
  goto L_1193fffd;
L_11940034:;
  /* 11940034 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1194003a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194003d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11940040:;
  /* 11940040 jmp 0x119404a7 */
  goto L_119404a7;
L_11940045:;
  /* 11940045 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11940048 push edx */
  push32((uint32_t)(EDX));
  /* 11940049 call 0x119408b0 */
  push32(0x1194004eu); f_119408b0();
  /* 1194004e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11940051 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11940057 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194005a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1194005d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194005f je 0x11940073 */
  if (C.zf) goto L_11940073;
  /* 11940061 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11940067 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1194006e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11940071 jmp 0x11940081 */
  goto L_11940081;
L_11940073:;
  /* 11940073 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11940079 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1194007f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11940081:;
  /* 11940081 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1194008b jmp 0x119404a7 */
  goto L_119404a7;
L_11940090:;
  /* 11940090 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11940097 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1194009a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1194009d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_119400a0:;
  /* 119400a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119400a3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 119400a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119400a8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 119400ae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 119400b1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119400b8 jge 0x119400c6 */
  if ((C.sf==C.of)) goto L_119400c6;
  /* 119400ba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 119400c4 jmp 0x119400e2 */
  goto L_119400e2;
L_119400c6:;
  /* 119400c6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119400cd jne 0x119400e2 */
  if (!C.zf) goto L_119400e2;
  /* 119400cf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119400d3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119400d6 jne 0x119400e2 */
  if (!C.zf) goto L_119400e2;
  /* 119400d8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_119400e2:;
  /* 119400e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119400e5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119400e8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 119400eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119400ee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119400f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119400f3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 119400f6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 119400fc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11940102 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11940105 push ecx */
  push32((uint32_t)(ECX));
  /* 11940106 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1194010c push edx */
  push32((uint32_t)(EDX));
  /* 1194010d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11940111 push eax */
  push32((uint32_t)(EAX));
  /* 11940112 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11940115 push ecx */
  push32((uint32_t)(ECX));
  /* 11940116 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1194011c push edx */
  push32((uint32_t)(EDX));
  /* 1194011d call dword ptr [0x119643a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119643a0))), 0x11940123u);
  /* 11940123 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11940126 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940129 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1194012e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11940130 je 0x11940148 */
  if (C.zf) goto L_11940148;
  /* 11940132 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940139 jne 0x11940148 */
  if (!C.zf) goto L_11940148;
  /* 1194013b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194013e push ecx */
  push32((uint32_t)(ECX));
  /* 1194013f call dword ptr [0x119643ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119643ac))), 0x11940145u);
  /* 11940145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11940148:;
  /* 11940148 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1194014c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194014f jne 0x1194016a */
  if (!C.zf) goto L_1194016a;
  /* 11940151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940154 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11940159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194015b jne 0x1194016a */
  if (!C.zf) goto L_1194016a;
  /* 1194015d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11940160 push ecx */
  push32((uint32_t)(ECX));
  /* 11940161 call dword ptr [0x119643a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119643a4))), 0x11940167u);
  /* 11940167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1194016a:;
  /* 1194016a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194016d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11940170 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940173 jne 0x11940187 */
  if (!C.zf) goto L_11940187;
  /* 11940175 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940178 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1194017b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1194017e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11940181 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11940184 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11940187:;
  /* 11940187 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194018a push eax */
  push32((uint32_t)(EAX));
  /* 1194018b call 0x1193b910 */
  push32(0x11940190u); f_1193b910();
  /* 11940190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11940193 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11940196 jmp 0x119404a7 */
  goto L_119404a7;
L_1194019b:;
  /* 1194019b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194019e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 119401a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119401a4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 119401ae jmp 0x11940235 */
  goto L_11940235;
L_119401b3:;
  /* 119401b3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 119401bd jmp 0x11940235 */
  goto L_11940235;
L_119401bf:;
  /* 119401bf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_119401c9:;
  /* 119401c9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 119401d3 jmp 0x119401df */
  goto L_119401df;
L_119401d5:;
  /* 119401d5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_119401df:;
  /* 119401df mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 119401e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119401ec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 119401f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119401f4 je 0x11940213 */
  if (C.zf) goto L_11940213;
  /* 119401f6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 119401fd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11940203 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11940206 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1194020c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11940213:;
  /* 11940213 jmp 0x11940235 */
  goto L_11940235;
L_11940215:;
  /* 11940215 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1194021f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940222 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11940228 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1194022a je 0x11940235 */
  if (C.zf) goto L_11940235;
  /* 1194022c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194022f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11940232 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11940235:;
  /* 11940235 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940238 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1194023d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194023f je 0x1194025e */
  if (C.zf) goto L_1194025e;
  /* 11940241 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11940244 push ecx */
  push32((uint32_t)(ECX));
  /* 11940245 call 0x119408d0 */
  push32(0x1194024au); f_119408d0();
  /* 1194024a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194024d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11940253 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11940259 jmp 0x119402ef */
  goto L_119402ef;
L_1194025e:;
  /* 1194025e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940261 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11940264 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11940266 je 0x119402b0 */
  if (C.zf) goto L_119402b0;
  /* 11940268 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194026b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1194026e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11940270 je 0x11940290 */
  if (C.zf) goto L_11940290;
  /* 11940272 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11940275 push ecx */
  push32((uint32_t)(ECX));
  /* 11940276 call 0x119408b0 */
  push32(0x1194027bu); f_119408b0();
  /* 1194027b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194027e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11940281 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11940282 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11940288 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1194028e jmp 0x119402ae */
  goto L_119402ae;
L_11940290:;
  /* 11940290 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11940293 push edx */
  push32((uint32_t)(EDX));
  /* 11940294 call 0x119408b0 */
  push32(0x11940299u); f_119408b0();
  /* 11940299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194029c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119402a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119402a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 119402a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_119402ae:;
  /* 119402ae jmp 0x119402ef */
  goto L_119402ef;
L_119402b0:;
  /* 119402b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119402b3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 119402b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119402b8 je 0x119402d5 */
  if (C.zf) goto L_119402d5;
  /* 119402ba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 119402bd push ecx */
  push32((uint32_t)(ECX));
  /* 119402be call 0x119408b0 */
  push32(0x119402c3u); f_119408b0();
  /* 119402c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119402c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119402c7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 119402cd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 119402d3 jmp 0x119402ef */
  goto L_119402ef;
L_119402d5:;
  /* 119402d5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 119402d8 push edx */
  push32((uint32_t)(EDX));
  /* 119402d9 call 0x119408b0 */
  push32(0x119402deu); f_119408b0();
  /* 119402de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119402e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119402e3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 119402e9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_119402ef:;
  /* 119402ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119402f2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 119402f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119402f7 je 0x11940337 */
  if (C.zf) goto L_11940337;
  /* 119402f9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940300 jg 0x11940337 */
  if ((!C.zf&&C.sf==C.of)) goto L_11940337;
  /* 11940302 jl 0x1194030d */
  if ((C.sf!=C.of)) goto L_1194030d;
  /* 11940304 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194030b jae 0x11940337 */
  if (!C.cf) goto L_11940337;
L_1194030d:;
  /* 1194030d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11940313 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11940315 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1194031b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194031e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11940320 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11940326 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1194032c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194032f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11940332 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11940335 jmp 0x1194034f */
  goto L_1194034f;
L_11940337:;
  /* 11940337 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1194033d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11940343 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11940349 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1194034f:;
  /* 1194034f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940352 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11940358 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1194035a jne 0x11940377 */
  if (!C.zf) goto L_11940377;
  /* 1194035c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11940362 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11940368 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1194036b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11940371 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11940377:;
  /* 11940377 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194037e jge 0x1194038c */
  if ((C.sf==C.of)) goto L_1194038c;
  /* 11940380 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1194038a jmp 0x11940395 */
  goto L_11940395;
L_1194038c:;
  /* 1194038c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194038f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11940392 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11940395:;
  /* 11940395 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1194039b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 119403a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119403a3 jne 0x119403ac */
  if (!C.zf) goto L_119403ac;
  /* 119403a5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_119403ac:;
  /* 119403ac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 119403af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_119403b2:;
  /* 119403b2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 119403b8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 119403be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119403c1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 119403c7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119403c9 jg 0x119403df */
  if ((!C.zf&&C.sf==C.of)) goto L_119403df;
  /* 119403cb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 119403d1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 119403d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119403d9 je 0x11940460 */
  if (C.zf) goto L_11940460;
L_119403df:;
  /* 119403df mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 119403e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119403e6 push edx */
  push32((uint32_t)(EDX));
  /* 119403e7 push eax */
  push32((uint32_t)(EAX));
  /* 119403e8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 119403ee push edx */
  push32((uint32_t)(EDX));
  /* 119403ef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 119403f5 push eax */
  push32((uint32_t)(EAX));
  /* 119403f6 call 0x1193f770 */
  push32(0x119403fbu); f_1193f770();
  /* 119403fb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119403fe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11940404 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1194040a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1194040b push edx */
  push32((uint32_t)(EDX));
  /* 1194040c push eax */
  push32((uint32_t)(EAX));
  /* 1194040d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11940413 push ecx */
  push32((uint32_t)(ECX));
  /* 11940414 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1194041a push edx */
  push32((uint32_t)(EDX));
  /* 1194041b call 0x1193f700 */
  push32(0x11940420u); f_1193f700();
  /* 11940420 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11940426 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1194042c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940433 jle 0x11940447 */
  if ((C.zf||C.sf!=C.of)) goto L_11940447;
  /* 11940435 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1194043b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11940441 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11940447:;
  /* 11940447 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194044a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11940450 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11940452 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11940455 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940458 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1194045b jmp 0x119403b2 */
  goto L_119403b2;
L_11940460:;
  /* 11940460 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11940463 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940466 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11940469 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194046c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194046f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11940472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940475 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1194047a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194047c je 0x119404a7 */
  if (C.zf) goto L_119404a7;
  /* 1194047e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11940481 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11940484 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940487 jne 0x1194048f */
  if (!C.zf) goto L_1194048f;
  /* 11940489 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194048d jne 0x119404a7 */
  if (!C.zf) goto L_119404a7;
L_1194048f:;
  /* 1194048f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11940492 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940495 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11940498 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194049b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1194049e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119404a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119404a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_119404a7:;
  /* 119404a7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119404ae jne 0x11940682 */
  if (!C.zf) goto L_11940682;
  /* 119404b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119404b7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 119404ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119404bc je 0x1194050d */
  if (C.zf) goto L_1194050d;
  /* 119404be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119404c1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 119404c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119404c9 je 0x119404db */
  if (C.zf) goto L_119404db;
  /* 119404cb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 119404d2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 119404d9 jmp 0x1194050d */
  goto L_1194050d;
L_119404db:;
  /* 119404db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119404de and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119404e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119404e3 je 0x119404f5 */
  if (C.zf) goto L_119404f5;
  /* 119404e5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 119404ec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 119404f3 jmp 0x1194050d */
  goto L_1194050d;
L_119404f5:;
  /* 119404f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119404f8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 119404fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119404fd je 0x1194050d */
  if (C.zf) goto L_1194050d;
  /* 119404ff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11940506 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1194050d:;
  /* 1194050d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11940513 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940516 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940519 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1194051f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940522 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11940525 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11940527 jne 0x11940545 */
  if (!C.zf) goto L_11940545;
  /* 11940529 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1194052f push eax */
  push32((uint32_t)(EAX));
  /* 11940530 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940533 push ecx */
  push32((uint32_t)(ECX));
  /* 11940534 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1194053a push edx */
  push32((uint32_t)(EDX));
  /* 1194053b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1194053d call 0x11940820 */
  push32(0x11940542u); f_11940820();
  /* 11940542 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11940545:;
  /* 11940545 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1194054b push eax */
  push32((uint32_t)(EAX));
  /* 1194054c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194054f push ecx */
  push32((uint32_t)(ECX));
  /* 11940550 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11940553 push edx */
  push32((uint32_t)(EDX));
  /* 11940554 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1194055a push eax */
  push32((uint32_t)(EAX));
  /* 1194055b call 0x11940860 */
  push32(0x11940560u); f_11940860();
  /* 11940560 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11940563 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940566 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11940569 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1194056b je 0x11940593 */
  if (C.zf) goto L_11940593;
  /* 1194056d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940570 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11940573 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11940575 jne 0x11940593 */
  if (!C.zf) goto L_11940593;
  /* 11940577 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1194057d push eax */
  push32((uint32_t)(EAX));
  /* 1194057e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940581 push ecx */
  push32((uint32_t)(ECX));
  /* 11940582 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11940588 push edx */
  push32((uint32_t)(EDX));
  /* 11940589 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1194058b call 0x11940820 */
  push32(0x11940590u); f_11940820();
  /* 11940590 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11940593:;
  /* 11940593 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940597 je 0x11940641 */
  if (C.zf) goto L_11940641;
  /* 1194059d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119405a1 jle 0x11940641 */
  if ((C.zf||C.sf!=C.of)) goto L_11940641;
  /* 119405a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119405aa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 119405b0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119405b3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_119405b9:;
  /* 119405b9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 119405bf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 119405c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119405c8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 119405ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119405d0 je 0x1194063f */
  if (C.zf) goto L_1194063f;
  /* 119405d2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 119405d8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 119405db mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 119405e2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 119405e9 push eax */
  push32((uint32_t)(EAX));
  /* 119405ea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 119405f0 push ecx */
  push32((uint32_t)(ECX));
  /* 119405f1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 119405f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119405fa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11940600 call 0x119419d0 */
  push32(0x11940605u); f_119419d0();
  /* 11940605 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11940608 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1194060e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940615 jg 0x11940619 */
  if ((!C.zf&&C.sf==C.of)) goto L_11940619;
  /* 11940617 jmp 0x1194063f */
  goto L_1194063f;
L_11940619:;
  /* 11940619 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1194061f push eax */
  push32((uint32_t)(EAX));
  /* 11940620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940623 push ecx */
  push32((uint32_t)(ECX));
  /* 11940624 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1194062a push edx */
  push32((uint32_t)(EDX));
  /* 1194062b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11940631 push eax */
  push32((uint32_t)(EAX));
  /* 11940632 call 0x11940860 */
  push32(0x11940637u); f_11940860();
  /* 11940637 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194063a jmp 0x119405b9 */
  goto L_119405b9;
L_1194063f:;
  /* 1194063f jmp 0x1194065c */
  goto L_1194065c;
L_11940641:;
  /* 11940641 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11940647 push ecx */
  push32((uint32_t)(ECX));
  /* 11940648 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194064b push edx */
  push32((uint32_t)(EDX));
  /* 1194064c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1194064f push eax */
  push32((uint32_t)(EAX));
  /* 11940650 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11940653 push ecx */
  push32((uint32_t)(ECX));
  /* 11940654 call 0x11940860 */
  push32(0x11940659u); f_11940860();
  /* 11940659 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1194065c:;
  /* 1194065c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194065f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11940662 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11940664 je 0x11940682 */
  if (C.zf) goto L_11940682;
  /* 11940666 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1194066c push eax */
  push32((uint32_t)(EAX));
  /* 1194066d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940670 push ecx */
  push32((uint32_t)(ECX));
  /* 11940671 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11940677 push edx */
  push32((uint32_t)(EDX));
  /* 11940678 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1194067a call 0x11940820 */
  push32(0x1194067fu); f_11940820();
  /* 1194067f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11940682:;
  /* 11940682 jmp 0x1193fa94 */
  goto L_1193fa94;
L_11940687:;
  /* 11940687 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1194068d pop edi */
  EDI = (pop32());
  /* 1194068e pop esi */
  ESI = (pop32());
  /* 1194068f pop ebx */
  EBX = (pop32());
  /* 11940690 mov esp, ebp */
  ESP = (EBP);
  /* 11940692 pop ebp */
  EBP = (pop32());
  /* 11940693 ret  */
  ESPCHK(0x1193fa70u, _esp0);
  ESP += 4; return;
}

/* FUN_100107a0 @ 0x119407a0 (119 bytes, 44 insns) */
void f_119407a0(void) {
  FTRACE(0x119407a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119407a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119407a1 mov ebp, esp */
  EBP = (ESP);
  /* 119407a3 push ecx */
  push32((uint32_t)(ECX));
  /* 119407a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119407a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119407aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119407ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119407b0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119407b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119407b6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119407ba jl 0x119407e2 */
  if ((C.sf!=C.of)) goto L_119407e2;
  /* 119407bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119407bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119407c1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 119407c4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 119407c6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 119407ca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119407d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119407d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119407d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119407d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119407db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119407de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119407e0 jmp 0x119407f5 */
  goto L_119407f5;
L_119407e2:;
  /* 119407e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119407e5 push edx */
  push32((uint32_t)(EDX));
  /* 119407e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119407e9 push eax */
  push32((uint32_t)(EAX));
  /* 119407ea call 0x1193f7f0 */
  push32(0x119407efu); f_1193f7f0();
  /* 119407ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119407f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119407f5:;
  /* 119407f5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119407f9 jne 0x11940806 */
  if (!C.zf) goto L_11940806;
  /* 119407fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119407fe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11940804 jmp 0x11940813 */
  goto L_11940813;
L_11940806:;
  /* 11940806 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11940809 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1194080b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194080e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11940811 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11940813:;
  /* 11940813 mov esp, ebp */
  ESP = (EBP);
  /* 11940815 pop ebp */
  EBP = (pop32());
  /* 11940816 ret  */
  ESPCHK(0x119407a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010820 @ 0x11940820 (53 bytes, 23 insns) */
void f_11940820(void) {
  FTRACE(0x11940820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11940820 push ebp */
  push32((uint32_t)(EBP));
  /* 11940821 mov ebp, esp */
  EBP = (ESP);
L_11940823:;
  /* 11940823 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11940826 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11940829 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194082c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1194082f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11940831 jle 0x11940853 */
  if ((C.zf||C.sf!=C.of)) goto L_11940853;
  /* 11940833 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11940836 push edx */
  push32((uint32_t)(EDX));
  /* 11940837 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194083a push eax */
  push32((uint32_t)(EAX));
  /* 1194083b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194083e push ecx */
  push32((uint32_t)(ECX));
  /* 1194083f call 0x119407a0 */
  push32(0x11940844u); f_119407a0();
  /* 11940844 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11940847 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194084a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194084d jne 0x11940851 */
  if (!C.zf) goto L_11940851;
  /* 1194084f jmp 0x11940853 */
  goto L_11940853;
L_11940851:;
  /* 11940851 jmp 0x11940823 */
  goto L_11940823;
L_11940853:;
  /* 11940853 pop ebp */
  EBP = (pop32());
  /* 11940854 ret  */
  ESPCHK(0x11940820u, _esp0);
  ESP += 4; return;
}

/* FUN_10010860 @ 0x11940860 (74 bytes, 31 insns) */
void f_11940860(void) {
  FTRACE(0x11940860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11940860 push ebp */
  push32((uint32_t)(EBP));
  /* 11940861 mov ebp, esp */
  EBP = (ESP);
  /* 11940863 push ecx */
  push32((uint32_t)(ECX));
L_11940864:;
  /* 11940864 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11940867 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194086a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194086d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11940870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11940872 jle 0x119408a6 */
  if ((C.zf||C.sf!=C.of)) goto L_119408a6;
  /* 11940874 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11940877 push edx */
  push32((uint32_t)(EDX));
  /* 11940878 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194087b push eax */
  push32((uint32_t)(EAX));
  /* 1194087c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194087f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11940882 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11940885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940888 push eax */
  push32((uint32_t)(EAX));
  /* 11940889 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194088c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194088f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11940892 call 0x119407a0 */
  push32(0x11940897u); f_119407a0();
  /* 11940897 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194089a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194089d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119408a0 jne 0x119408a4 */
  if (!C.zf) goto L_119408a4;
  /* 119408a2 jmp 0x119408a6 */
  goto L_119408a6;
L_119408a4:;
  /* 119408a4 jmp 0x11940864 */
  goto L_11940864;
L_119408a6:;
  /* 119408a6 mov esp, ebp */
  ESP = (EBP);
  /* 119408a8 pop ebp */
  EBP = (pop32());
  /* 119408a9 ret  */
  ESPCHK(0x11940860u, _esp0);
  ESP += 4; return;
}

/* FUN_100108b0 @ 0x119408b0 (26 bytes, 12 insns) */
void f_119408b0(void) {
  FTRACE(0x119408b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119408b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119408b1 mov ebp, esp */
  EBP = (ESP);
  /* 119408b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119408b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119408b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119408bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119408be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119408c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119408c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119408c5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 119408c8 pop ebp */
  EBP = (pop32());
  /* 119408c9 ret  */
  ESPCHK(0x119408b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108d0 @ 0x119408d0 (31 bytes, 14 insns) */
void f_119408d0(void) {
  FTRACE(0x119408d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119408d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119408d1 mov ebp, esp */
  EBP = (ESP);
  /* 119408d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119408d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119408d8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119408db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119408de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119408e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119408e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119408e5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119408e8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119408ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119408ed pop ebp */
  EBP = (pop32());
  /* 119408ee ret  */
  ESPCHK(0x119408d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108f0 @ 0x119408f0 (27 bytes, 12 insns) */
void f_119408f0(void) {
  FTRACE(0x119408f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119408f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119408f1 mov ebp, esp */
  EBP = (ESP);
  /* 119408f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119408f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119408f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119408fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119408fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11940900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940903 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11940905 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11940909 pop ebp */
  EBP = (pop32());
  /* 1194090a ret  */
  ESPCHK(0x119408f0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11940910 (145 bytes, 42 insns) */
void f_11940910(void) {
  FTRACE(0x11940910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11940910 push ebp */
  push32((uint32_t)(EBP));
  /* 11940911 mov ebp, esp */
  EBP = (ESP);
  /* 11940913 push ecx */
  push32((uint32_t)(ECX));
  /* 11940914 call 0x119409c0 */
  push32(0x11940919u); f_119409c0();
  /* 11940919 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194091c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1194091e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11940925 jmp 0x11940930 */
  goto L_11940930;
L_11940927:;
  /* 11940927 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194092a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194092d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11940930:;
  /* 11940930 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940934 jae 0x1194095a */
  if (!C.cf) goto L_1194095a;
  /* 11940936 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11940939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194093c cmp ecx, dword ptr [eax*8 + 0x11963fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11963fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940943 jne 0x11940958 */
  if (!C.zf) goto L_11940958;
  /* 11940945 call 0x119409b0 */
  push32(0x1194094au); f_119409b0();
  /* 1194094a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194094d mov ecx, dword ptr [edx*8 + 0x11963fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11963fbc)));
  /* 11940954 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11940956 jmp 0x1194099d */
  goto L_1194099d;
L_11940958:;
  /* 11940958 jmp 0x11940927 */
  goto L_11940927;
L_1194095a:;
  /* 1194095a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194095e jb 0x11940973 */
  if (C.cf) goto L_11940973;
  /* 11940960 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940964 ja 0x11940973 */
  if ((!C.cf&&!C.zf)) goto L_11940973;
  /* 11940966 call 0x119409b0 */
  push32(0x1194096bu); f_119409b0();
  /* 1194096b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11940971 jmp 0x1194099d */
  goto L_1194099d;
L_11940973:;
  /* 11940973 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194097a jb 0x11940992 */
  if (C.cf) goto L_11940992;
  /* 1194097c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940983 ja 0x11940992 */
  if ((!C.cf&&!C.zf)) goto L_11940992;
  /* 11940985 call 0x119409b0 */
  push32(0x1194098au); f_119409b0();
  /* 1194098a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11940990 jmp 0x1194099d */
  goto L_1194099d;
L_11940992:;
  /* 11940992 call 0x119409b0 */
  push32(0x11940997u); f_119409b0();
  /* 11940997 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1194099d:;
  /* 1194099d mov esp, ebp */
  ESP = (EBP);
  /* 1194099f pop ebp */
  EBP = (pop32());
  /* 119409a0 ret  */
  ESPCHK(0x11940910u, _esp0);
  ESP += 4; return;
}

/* FUN_100109b0 @ 0x119409b0 (13 bytes, 6 insns) */
void f_119409b0(void) {
  FTRACE(0x119409b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119409b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119409b1 mov ebp, esp */
  EBP = (ESP);
  /* 119409b3 call 0x11938520 */
  push32(0x119409b8u); f_11938520();
  /* 119409b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119409bb pop ebp */
  EBP = (pop32());
  /* 119409bc ret  */
  ESPCHK(0x119409b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100109c0 @ 0x119409c0 (13 bytes, 6 insns) */
void f_119409c0(void) {
  FTRACE(0x119409c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119409c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119409c1 mov ebp, esp */
  EBP = (ESP);
  /* 119409c3 call 0x11938520 */
  push32(0x119409c8u); f_11938520();
  /* 119409c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119409cb pop ebp */
  EBP = (pop32());
  /* 119409cc ret  */
  ESPCHK(0x119409c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100109d0 @ 0x119409d0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_119409d0(void) {
  FTRACE(0x119409d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119409d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119409d1 mov ebp, esp */
  EBP = (ESP);
  /* 119409d3 push edi */
  push32((uint32_t)(EDI));
  /* 119409d4 push esi */
  push32((uint32_t)(ESI));
  /* 119409d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119409d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119409db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 119409de mov eax, ecx */
  EAX = (ECX);
  /* 119409e0 mov edx, ecx */
  EDX = (ECX);
  /* 119409e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119409e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119409e6 jbe 0x119409f0 */
  if ((C.cf||C.zf)) goto L_119409f0;
  /* 119409e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119409ea jb 0x11940b68 */
  if (C.cf) goto L_11940b68;
L_119409f0:;
  /* 119409f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119409f6 jne 0x11940a0c */
  if (!C.zf) goto L_11940a0c;
  /* 119409f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119409fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119409fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940a01 jb 0x11940a2c */
  if (C.cf) goto L_11940a2c;
  /* 11940a03 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11940a05 jmp dword ptr [edx*4 + 0x11940b18] */
  switch (EDX) {
    case 0: goto L_11940b28;
    case 1: goto L_11940b30;
    case 2: goto L_11940b3c;
    case 3: goto L_11940b50;
    default: x86_unimpl("switch@0x11940a05 out of table"); return;
  }
L_11940a0c:;
  /* 11940a0c mov eax, edi */
  EAX = (EDI);
  /* 11940a0e mov edx, 3 */
  EDX = (0x3u);
  /* 11940a13 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940a16 jb 0x11940a24 */
  if (C.cf) goto L_11940a24;
  /* 11940a18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11940a1b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11940a1d jmp dword ptr [eax*4 + 0x11940a30] */
  switch (EAX) {
    case 1: goto L_11940a40;
    case 2: goto L_11940a6c;
    case 3: goto L_11940a90;
    default: x86_unimpl("switch@0x11940a1d out of table"); return;
  }
L_11940a24:;
  /* 11940a24 jmp dword ptr [ecx*4 + 0x11940b28] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11940b28)))); return;
  /* 11940a2b nop  */
  /* nop */
L_11940a2c:;
  /* 11940a2c jmp dword ptr [ecx*4 + 0x11940aac] */
  switch (ECX) {
    case 0: goto L_11940b0f;
    case 1: goto L_11940afc;
    case 2: goto L_11940af4;
    case 3: goto L_11940aec;
    case 4: goto L_11940ae4;
    case 5: goto L_11940adc;
    case 6: goto L_11940ad4;
    case 7: goto L_11940acc;
    default: x86_unimpl("switch@0x11940a2c out of table"); return;
  }
  /* 11940a33 nop  */
  /* nop */
L_11940a40:;
  /* 11940a40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11940a42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11940a44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11940a46 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11940a49 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11940a4c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11940a4f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11940a52 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11940a55 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11940a58 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11940a5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940a5e jb 0x11940a2c */
  if (C.cf) goto L_11940a2c;
  /* 11940a60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11940a62 jmp dword ptr [edx*4 + 0x11940b18] */
  switch (EDX) {
    case 0: goto L_11940b28;
    case 1: goto L_11940b30;
    case 2: goto L_11940b3c;
    case 3: goto L_11940b50;
    default: x86_unimpl("switch@0x11940a62 out of table"); return;
  }
  /* 11940a69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11940a6c:;
  /* 11940a6c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11940a6e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11940a70 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11940a72 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11940a75 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11940a78 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11940a7b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11940a7e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11940a81 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940a84 jb 0x11940a2c */
  if (C.cf) goto L_11940a2c;
  /* 11940a86 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11940a88 jmp dword ptr [edx*4 + 0x11940b18] */
  switch (EDX) {
    case 0: goto L_11940b28;
    case 1: goto L_11940b30;
    case 2: goto L_11940b3c;
    case 3: goto L_11940b50;
    default: x86_unimpl("switch@0x11940a88 out of table"); return;
  }
  /* 11940a8f nop  */
  /* nop */
L_11940a90:;
  /* 11940a90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11940a92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11940a94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11940a96 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11940a97 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11940a9a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11940a9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940a9e jb 0x11940a2c */
  if (C.cf) goto L_11940a2c;
  /* 11940aa0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11940aa2 jmp dword ptr [edx*4 + 0x11940b18] */
  switch (EDX) {
    case 0: goto L_11940b28;
    case 1: goto L_11940b30;
    case 2: goto L_11940b3c;
    case 3: goto L_11940b50;
    default: x86_unimpl("switch@0x11940aa2 out of table"); return;
  }
  /* 11940aa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11940acc:;
  /* 11940acc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11940ad0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11940ad4:;
  /* 11940ad4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11940ad8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11940adc:;
  /* 11940adc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11940ae0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11940ae4:;
  /* 11940ae4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11940ae8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11940aec:;
  /* 11940aec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11940af0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11940af4:;
  /* 11940af4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11940af8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11940afc:;
  /* 11940afc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11940b00 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11940b04 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11940b0b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11940b0d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11940b0f:;
  /* 11940b0f jmp dword ptr [edx*4 + 0x11940b18] */
  switch (EDX) {
    case 0: goto L_11940b28;
    case 1: goto L_11940b30;
    case 2: goto L_11940b3c;
    case 3: goto L_11940b50;
    default: x86_unimpl("switch@0x11940b0f out of table"); return;
  }
  /* 11940b16 mov edi, edi */
  EDI = (EDI);
L_11940b28:;
  /* 11940b28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940b2b pop esi */
  ESI = (pop32());
  /* 11940b2c pop edi */
  EDI = (pop32());
  /* 11940b2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11940b2e ret  */
  ESPCHK(0x119409d0u, _esp0);
  ESP += 4; return;
  /* 11940b2f nop  */
  /* nop */
L_11940b30:;
  /* 11940b30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11940b32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11940b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940b37 pop esi */
  ESI = (pop32());
  /* 11940b38 pop edi */
  EDI = (pop32());
  /* 11940b39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11940b3a ret  */
  ESPCHK(0x119409d0u, _esp0);
  ESP += 4; return;
  /* 11940b3b nop  */
  /* nop */
L_11940b3c:;
  /* 11940b3c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11940b3e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11940b40 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11940b43 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11940b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940b49 pop esi */
  ESI = (pop32());
  /* 11940b4a pop edi */
  EDI = (pop32());
  /* 11940b4b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11940b4c ret  */
  ESPCHK(0x119409d0u, _esp0);
  ESP += 4; return;
  /* 11940b4d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11940b50:;
  /* 11940b50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11940b52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11940b54 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11940b57 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11940b5a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11940b5d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11940b60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940b63 pop esi */
  ESI = (pop32());
  /* 11940b64 pop edi */
  EDI = (pop32());
  /* 11940b65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11940b66 ret  */
  ESPCHK(0x119409d0u, _esp0);
  ESP += 4; return;
  /* 11940b67 nop  */
  /* nop */
L_11940b68:;
  /* 11940b68 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11940b6c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11940b70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11940b76 jne 0x11940b9c */
  if (!C.zf) goto L_11940b9c;
  /* 11940b78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11940b7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11940b7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940b81 jb 0x11940b90 */
  if (C.cf) goto L_11940b90;
  /* 11940b83 std  */
  C.df=1;
  /* 11940b84 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11940b86 cld  */
  C.df=0;
  /* 11940b87 jmp dword ptr [edx*4 + 0x11940cb0] */
  switch (EDX) {
    case 0: goto L_11940cc0;
    case 1: goto L_11940cc8;
    case 2: goto L_11940cd8;
    case 3: goto L_11940cec;
    default: x86_unimpl("switch@0x11940b87 out of table"); return;
  }
  /* 11940b8e mov edi, edi */
  EDI = (EDI);
L_11940b90:;
  /* 11940b90 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11940b92 jmp dword ptr [ecx*4 + 0x11940c60] */
  switch (ECX) {
    case 0: goto L_11940ca7;
    default: x86_unimpl("switch@0x11940b92 out of table"); return;
  }
  /* 11940b99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11940b9c:;
  /* 11940b9c mov eax, edi */
  EAX = (EDI);
  /* 11940b9e mov edx, 3 */
  EDX = (0x3u);
  /* 11940ba3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940ba6 jb 0x11940bb4 */
  if (C.cf) goto L_11940bb4;
  /* 11940ba8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11940bab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940bad jmp dword ptr [eax*4 + 0x11940bb8] */
  switch (EAX) {
    case 1: goto L_11940bc8;
    case 2: goto L_11940be8;
    case 3: goto L_11940c10;
    default: x86_unimpl("switch@0x11940bad out of table"); return;
  }
L_11940bb4:;
  /* 11940bb4 jmp dword ptr [ecx*4 + 0x11940cb0] */
  switch (ECX) {
    case 0: goto L_11940cc0;
    case 1: goto L_11940cc8;
    case 2: goto L_11940cd8;
    case 3: goto L_11940cec;
    default: x86_unimpl("switch@0x11940bb4 out of table"); return;
  }
  /* 11940bbb nop  */
  /* nop */
L_11940bc8:;
  /* 11940bc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11940bcb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11940bcd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11940bd0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11940bd1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11940bd4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11940bd5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940bd8 jb 0x11940b90 */
  if (C.cf) goto L_11940b90;
  /* 11940bda std  */
  C.df=1;
  /* 11940bdb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11940bdd cld  */
  C.df=0;
  /* 11940bde jmp dword ptr [edx*4 + 0x11940cb0] */
  switch (EDX) {
    case 0: goto L_11940cc0;
    case 1: goto L_11940cc8;
    case 2: goto L_11940cd8;
    case 3: goto L_11940cec;
    default: x86_unimpl("switch@0x11940bde out of table"); return;
  }
  /* 11940be5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11940be8:;
  /* 11940be8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11940beb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11940bed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11940bf0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11940bf3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11940bf6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11940bf9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940bfc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940bff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940c02 jb 0x11940b90 */
  if (C.cf) goto L_11940b90;
  /* 11940c04 std  */
  C.df=1;
  /* 11940c05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11940c07 cld  */
  C.df=0;
  /* 11940c08 jmp dword ptr [edx*4 + 0x11940cb0] */
  switch (EDX) {
    case 0: goto L_11940cc0;
    case 1: goto L_11940cc8;
    case 2: goto L_11940cd8;
    case 3: goto L_11940cec;
    default: x86_unimpl("switch@0x11940c08 out of table"); return;
  }
  /* 11940c0f nop  */
  /* nop */
L_11940c10:;
  /* 11940c10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11940c13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11940c15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11940c18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11940c1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11940c1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11940c21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11940c24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11940c27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940c2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940c2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940c30 jb 0x11940b90 */
  if (C.cf) goto L_11940b90;
  /* 11940c36 std  */
  C.df=1;
  /* 11940c37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11940c39 cld  */
  C.df=0;
  /* 11940c3a jmp dword ptr [edx*4 + 0x11940cb0] */
  switch (EDX) {
    case 0: goto L_11940cc0;
    case 1: goto L_11940cc8;
    case 2: goto L_11940cd8;
    case 3: goto L_11940cec;
    default: x86_unimpl("switch@0x11940c3a out of table"); return;
  }
  /* 11940c41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11940c44 or al, 0x94 */
  { uint32_t _r=(AL)|(0x94u); AL = (_r); fl_logic(_r,8); }
  /* 11940c47 adc dword ptr [esp + ecx - 0x6c], ebp */
  { uint32_t _a=(r32((uint32_t)(ESP + ECX*1 + -0x6c))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ECX*1 + -0x6c), (_r)); fl_add(_a,_b,_r,32); }
  /* 11940c4b adc dword ptr [esp + ecx - 0x6c], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + ECX*1 + -0x6c))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ECX*1 + -0x6c), (_r)); fl_add(_a,_b,_r,32); }
  /* 11940c4f adc dword ptr [esp + ecx - 0x6c], edi */
  { uint32_t _a=(r32((uint32_t)(ESP + ECX*1 + -0x6c))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ECX*1 + -0x6c), (_r)); fl_add(_a,_b,_r,32); }
  /* 11940c53 adc dword ptr [esp + ecx + 0xc8c1194], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + ECX*1 + 0xc8c1194))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ECX*1 + 0xc8c1194), (_r)); fl_add(_a,_b,_r,32); }
  /* 11940c5a xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11940c5c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11940c5d or al, 0x94 */
  { uint32_t _r=(AL)|(0x94u); AL = (_r); fl_logic(_r,8); }
  /* 11940c64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11940c68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11940c6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11940c70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11940c74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11940c78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11940c7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11940c80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11940c84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11940c88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11940c8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11940c90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11940c94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11940c98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11940c9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11940ca3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11940ca5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11940ca7:;
  /* 11940ca7 jmp dword ptr [edx*4 + 0x11940cb0] */
  switch (EDX) {
    case 0: goto L_11940cc0;
    case 1: goto L_11940cc8;
    case 2: goto L_11940cd8;
    case 3: goto L_11940cec;
    default: x86_unimpl("switch@0x11940ca7 out of table"); return;
  }
  /* 11940cae mov edi, edi */
  EDI = (EDI);
L_11940cc0:;
  /* 11940cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940cc3 pop esi */
  ESI = (pop32());
  /* 11940cc4 pop edi */
  EDI = (pop32());
  /* 11940cc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11940cc6 ret  */
  ESPCHK(0x119409d0u, _esp0);
  ESP += 4; return;
  /* 11940cc7 nop  */
  /* nop */
L_11940cc8:;
  /* 11940cc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11940ccb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11940cce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940cd1 pop esi */
  ESI = (pop32());
  /* 11940cd2 pop edi */
  EDI = (pop32());
  /* 11940cd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11940cd4 ret  */
  ESPCHK(0x119409d0u, _esp0);
  ESP += 4; return;
  /* 11940cd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11940cd8:;
  /* 11940cd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11940cdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11940cde mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11940ce1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11940ce4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940ce7 pop esi */
  ESI = (pop32());
  /* 11940ce8 pop edi */
  EDI = (pop32());
  /* 11940ce9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11940cea ret  */
  ESPCHK(0x119409d0u, _esp0);
  ESP += 4; return;
  /* 11940ceb nop  */
  /* nop */
L_11940cec:;
  /* 11940cec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11940cef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11940cf2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11940cf5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11940cf8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11940cfb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11940cfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940d01 pop esi */
  ESI = (pop32());
  /* 11940d02 pop edi */
  EDI = (pop32());
  /* 11940d03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11940d04 ret  */
  ESPCHK(0x119409d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d10 @ 0x11940d10 (421 bytes, 148 insns) */
void f_11940d10(void) {
  FTRACE(0x11940d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11940d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11940d11 mov ebp, esp */
  EBP = (ESP);
  /* 11940d13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11940d15 push 0x11960ed8 */
  push32((uint32_t)(0x11960ed8u));
  /* 11940d1a push 0x11941be8 */
  push32((uint32_t)(0x11941be8u));
  /* 11940d1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11940d25 push eax */
  push32((uint32_t)(EAX));
  /* 11940d26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11940d2d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11940d30 push ebx */
  push32((uint32_t)(EBX));
  /* 11940d31 push esi */
  push32((uint32_t)(ESI));
  /* 11940d32 push edi */
  push32((uint32_t)(EDI));
  /* 11940d33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11940d36 cmp dword ptr [0x11965a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940d3d jne 0x11940d8e */
  if (!C.zf) goto L_11940d8e;
  /* 11940d3f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11940d42 push eax */
  push32((uint32_t)(EAX));
  /* 11940d43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11940d45 push 0x11960ed0 */
  push32((uint32_t)(0x11960ed0u));
  /* 11940d4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11940d4c call dword ptr [0x11968324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968324))), 0x11940d52u);
  /* 11940d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11940d54 je 0x11940d62 */
  if (C.zf) goto L_11940d62;
  /* 11940d56 mov dword ptr [0x11965a44], 1 */
  w32((uint32_t)(0x11965a44), (0x1u));
  /* 11940d60 jmp 0x11940d8e */
  goto L_11940d8e;
L_11940d62:;
  /* 11940d62 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11940d65 push ecx */
  push32((uint32_t)(ECX));
  /* 11940d66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11940d68 push 0x11960ecc */
  push32((uint32_t)(0x11960eccu));
  /* 11940d6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11940d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11940d71 call dword ptr [0x11968328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968328))), 0x11940d77u);
  /* 11940d77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11940d79 je 0x11940d87 */
  if (C.zf) goto L_11940d87;
  /* 11940d7b mov dword ptr [0x11965a44], 2 */
  w32((uint32_t)(0x11965a44), (0x2u));
  /* 11940d85 jmp 0x11940d8e */
  goto L_11940d8e;
L_11940d87:;
  /* 11940d87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11940d89 jmp 0x11940eb8 */
  goto L_11940eb8;
L_11940d8e:;
  /* 11940d8e cmp dword ptr [0x11965a44], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11965a44))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940d95 jne 0x11940dc5 */
  if (!C.zf) goto L_11940dc5;
  /* 11940d97 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940d9b jne 0x11940da6 */
  if (!C.zf) goto L_11940da6;
  /* 11940d9d mov edx, dword ptr [0x11965a50] */
  EDX = (r32((uint32_t)(0x11965a50)));
  /* 11940da3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11940da6:;
  /* 11940da6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11940da9 push eax */
  push32((uint32_t)(EAX));
  /* 11940daa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11940dad push ecx */
  push32((uint32_t)(ECX));
  /* 11940dae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11940db1 push edx */
  push32((uint32_t)(EDX));
  /* 11940db2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940db5 push eax */
  push32((uint32_t)(EAX));
  /* 11940db6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11940db9 push ecx */
  push32((uint32_t)(ECX));
  /* 11940dba call dword ptr [0x11968328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968328))), 0x11940dc0u);
  /* 11940dc0 jmp 0x11940eb8 */
  goto L_11940eb8;
L_11940dc5:;
  /* 11940dc5 cmp dword ptr [0x11965a44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11965a44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940dcc jne 0x11940eb6 */
  if (!C.zf) goto L_11940eb6;
  /* 11940dd2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940dd6 jne 0x11940de1 */
  if (!C.zf) goto L_11940de1;
  /* 11940dd8 mov edx, dword ptr [0x11965a60] */
  EDX = (r32((uint32_t)(0x11965a60)));
  /* 11940dde mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11940de1:;
  /* 11940de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11940de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11940de5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11940de8 push eax */
  push32((uint32_t)(EAX));
  /* 11940de9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11940dec push ecx */
  push32((uint32_t)(ECX));
  /* 11940ded mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11940df0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11940df2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940df4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11940df7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11940dfa push edx */
  push32((uint32_t)(EDX));
  /* 11940dfb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11940dfe push eax */
  push32((uint32_t)(EAX));
  /* 11940dff call dword ptr [0x1196832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196832c))), 0x11940e05u);
  /* 11940e05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11940e08 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940e0c jne 0x11940e15 */
  if (!C.zf) goto L_11940e15;
  /* 11940e0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11940e10 jmp 0x11940eb8 */
  goto L_11940eb8;
L_11940e15:;
  /* 11940e15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11940e1c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11940e1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11940e21 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11940e24 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11940e26 call 0x1193bc80 */
  push32(0x11940e2bu); f_1193bc80();
  /* 11940e2b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11940e2e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11940e31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11940e34 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11940e37 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11940e3a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11940e3c push edx */
  push32((uint32_t)(EDX));
  /* 11940e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11940e3f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11940e42 push eax */
  push32((uint32_t)(EAX));
  /* 11940e43 call 0x1193c850 */
  push32(0x11940e48u); f_1193c850();
  /* 11940e48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11940e4b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11940e52 jmp 0x11940e6b */
  goto L_11940e6b;
  /* 11940e54 mov eax, 1 */
  EAX = (0x1u);
  /* 11940e59 ret  */
  ESPCHK(0x11940d10u, _esp0);
  ESP += 4; return;
  /* 11940e5a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11940e5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11940e64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11940e6b:;
  /* 11940e6b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940e6f jne 0x11940e75 */
  if (!C.zf) goto L_11940e75;
  /* 11940e71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11940e73 jmp 0x11940eb8 */
  goto L_11940eb8;
L_11940e75:;
  /* 11940e75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11940e78 push ecx */
  push32((uint32_t)(ECX));
  /* 11940e79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11940e7c push edx */
  push32((uint32_t)(EDX));
  /* 11940e7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11940e80 push eax */
  push32((uint32_t)(EAX));
  /* 11940e81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11940e84 push ecx */
  push32((uint32_t)(ECX));
  /* 11940e85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11940e87 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11940e8a push edx */
  push32((uint32_t)(EDX));
  /* 11940e8b call dword ptr [0x1196832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196832c))), 0x11940e91u);
  /* 11940e91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11940e94 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940e98 jne 0x11940e9e */
  if (!C.zf) goto L_11940e9e;
  /* 11940e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11940e9c jmp 0x11940eb8 */
  goto L_11940eb8;
L_11940e9e:;
  /* 11940e9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11940ea1 push eax */
  push32((uint32_t)(EAX));
  /* 11940ea2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11940ea5 push ecx */
  push32((uint32_t)(ECX));
  /* 11940ea6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11940ea9 push edx */
  push32((uint32_t)(EDX));
  /* 11940eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940ead push eax */
  push32((uint32_t)(EAX));
  /* 11940eae call dword ptr [0x11968324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968324))), 0x11940eb4u);
  /* 11940eb4 jmp 0x11940eb8 */
  goto L_11940eb8;
L_11940eb6:;
  /* 11940eb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11940eb8:;
  /* 11940eb8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11940ebb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11940ebe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11940ec5 pop edi */
  EDI = (pop32());
  /* 11940ec6 pop esi */
  ESI = (pop32());
  /* 11940ec7 pop ebx */
  EBX = (pop32());
  /* 11940ec8 mov esp, ebp */
  ESP = (EBP);
  /* 11940eca pop ebp */
  EBP = (pop32());
  /* 11940ecb ret  */
  ESPCHK(0x11940d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ed0 @ 0x11940ed0 (727 bytes, 263 insns) */
void f_11940ed0(void) {
  FTRACE(0x11940ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11940ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11940ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11940ed3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11940ed5 push 0x11960ee8 */
  push32((uint32_t)(0x11960ee8u));
  /* 11940eda push 0x11941be8 */
  push32((uint32_t)(0x11941be8u));
  /* 11940edf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11940ee5 push eax */
  push32((uint32_t)(EAX));
  /* 11940ee6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11940eed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11940ef0 push ebx */
  push32((uint32_t)(EBX));
  /* 11940ef1 push esi */
  push32((uint32_t)(ESI));
  /* 11940ef2 push edi */
  push32((uint32_t)(EDI));
  /* 11940ef3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11940ef6 cmp dword ptr [0x11965a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940efd jne 0x11940f56 */
  if (!C.zf) goto L_11940f56;
  /* 11940eff push 0 */
  push32((uint32_t)(0x0u));
  /* 11940f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11940f03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11940f05 push 0x11960ed0 */
  push32((uint32_t)(0x11960ed0u));
  /* 11940f0a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11940f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11940f11 call dword ptr [0x1196831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196831c))), 0x11940f17u);
  /* 11940f17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11940f19 je 0x11940f27 */
  if (C.zf) goto L_11940f27;
  /* 11940f1b mov dword ptr [0x11965a68], 1 */
  w32((uint32_t)(0x11965a68), (0x1u));
  /* 11940f25 jmp 0x11940f56 */
  goto L_11940f56;
L_11940f27:;
  /* 11940f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11940f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11940f2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11940f2d push 0x11960ecc */
  push32((uint32_t)(0x11960eccu));
  /* 11940f32 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11940f37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11940f39 call dword ptr [0x11968320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968320))), 0x11940f3fu);
  /* 11940f3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11940f41 je 0x11940f4f */
  if (C.zf) goto L_11940f4f;
  /* 11940f43 mov dword ptr [0x11965a68], 2 */
  w32((uint32_t)(0x11965a68), (0x2u));
  /* 11940f4d jmp 0x11940f56 */
  goto L_11940f56;
L_11940f4f:;
  /* 11940f4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11940f51 jmp 0x119411c1 */
  goto L_119411c1;
L_11940f56:;
  /* 11940f56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940f5a jle 0x11940f6f */
  if ((C.zf||C.sf!=C.of)) goto L_11940f6f;
  /* 11940f5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11940f5f push eax */
  push32((uint32_t)(EAX));
  /* 11940f60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11940f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11940f64 call 0x119411e0 */
  push32(0x11940f69u); f_119411e0();
  /* 11940f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11940f6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11940f6f:;
  /* 11940f6f cmp dword ptr [0x11965a68], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11965a68))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940f76 jne 0x11940f9b */
  if (!C.zf) goto L_11940f9b;
  /* 11940f78 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11940f7b push edx */
  push32((uint32_t)(EDX));
  /* 11940f7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11940f7f push eax */
  push32((uint32_t)(EAX));
  /* 11940f80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11940f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11940f84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11940f87 push edx */
  push32((uint32_t)(EDX));
  /* 11940f88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11940f8b push eax */
  push32((uint32_t)(EAX));
  /* 11940f8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11940f8f push ecx */
  push32((uint32_t)(ECX));
  /* 11940f90 call dword ptr [0x11968320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968320))), 0x11940f96u);
  /* 11940f96 jmp 0x119411c1 */
  goto L_119411c1;
L_11940f9b:;
  /* 11940f9b cmp dword ptr [0x11965a68], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11965a68))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940fa2 jne 0x119411bf */
  if (!C.zf) goto L_119411bf;
  /* 11940fa8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940fac jne 0x11940fb7 */
  if (!C.zf) goto L_11940fb7;
  /* 11940fae mov edx, dword ptr [0x11965a60] */
  EDX = (r32((uint32_t)(0x11965a60)));
  /* 11940fb4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11940fb7:;
  /* 11940fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11940fb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11940fbb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11940fbe push eax */
  push32((uint32_t)(EAX));
  /* 11940fbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11940fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11940fc3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11940fc6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11940fc8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11940fca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11940fcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11940fd0 push edx */
  push32((uint32_t)(EDX));
  /* 11940fd1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11940fd4 push eax */
  push32((uint32_t)(EAX));
  /* 11940fd5 call dword ptr [0x1196832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196832c))), 0x11940fdbu);
  /* 11940fdb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11940fde cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11940fe2 jne 0x11940feb */
  if (!C.zf) goto L_11940feb;
  /* 11940fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11940fe6 jmp 0x119411c1 */
  goto L_119411c1;
L_11940feb:;
  /* 11940feb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11940ff2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11940ff5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11940ff7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11940ffa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11940ffc call 0x1193bc80 */
  push32(0x11941001u); f_1193bc80();
  /* 11941001 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11941004 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11941007 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1194100a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1194100d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11941014 jmp 0x1194102d */
  goto L_1194102d;
  /* 11941016 mov eax, 1 */
  EAX = (0x1u);
  /* 1194101b ret  */
  ESPCHK(0x11940ed0u, _esp0);
  ESP += 4; return;
  /* 1194101c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1194101f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11941026 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1194102d:;
  /* 1194102d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941031 jne 0x1194103a */
  if (!C.zf) goto L_1194103a;
  /* 11941033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11941035 jmp 0x119411c1 */
  goto L_119411c1;
L_1194103a:;
  /* 1194103a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1194103d push edx */
  push32((uint32_t)(EDX));
  /* 1194103e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11941041 push eax */
  push32((uint32_t)(EAX));
  /* 11941042 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11941045 push ecx */
  push32((uint32_t)(ECX));
  /* 11941046 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11941049 push edx */
  push32((uint32_t)(EDX));
  /* 1194104a push 1 */
  push32((uint32_t)(0x1u));
  /* 1194104c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1194104f push eax */
  push32((uint32_t)(EAX));
  /* 11941050 call dword ptr [0x1196832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196832c))), 0x11941056u);
  /* 11941056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11941058 jne 0x11941061 */
  if (!C.zf) goto L_11941061;
  /* 1194105a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194105c jmp 0x119411c1 */
  goto L_119411c1;
L_11941061:;
  /* 11941061 push 0 */
  push32((uint32_t)(0x0u));
  /* 11941063 push 0 */
  push32((uint32_t)(0x0u));
  /* 11941065 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11941068 push ecx */
  push32((uint32_t)(ECX));
  /* 11941069 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1194106c push edx */
  push32((uint32_t)(EDX));
  /* 1194106d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11941070 push eax */
  push32((uint32_t)(EAX));
  /* 11941071 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941074 push ecx */
  push32((uint32_t)(ECX));
  /* 11941075 call dword ptr [0x1196831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196831c))), 0x1194107bu);
  /* 1194107b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1194107e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941082 jne 0x1194108b */
  if (!C.zf) goto L_1194108b;
  /* 11941084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11941086 jmp 0x119411c1 */
  goto L_119411c1;
L_1194108b:;
  /* 1194108b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194108e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11941094 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11941096 je 0x119410db */
  if (C.zf) goto L_119410db;
  /* 11941098 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194109c je 0x119410d6 */
  if (C.zf) goto L_119410d6;
  /* 1194109e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119410a1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119410a4 jle 0x119410ad */
  if ((C.zf||C.sf!=C.of)) goto L_119410ad;
  /* 119410a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119410a8 jmp 0x119411c1 */
  goto L_119411c1;
L_119410ad:;
  /* 119410ad mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119410b0 push ecx */
  push32((uint32_t)(ECX));
  /* 119410b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119410b4 push edx */
  push32((uint32_t)(EDX));
  /* 119410b5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119410b8 push eax */
  push32((uint32_t)(EAX));
  /* 119410b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119410bc push ecx */
  push32((uint32_t)(ECX));
  /* 119410bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119410c0 push edx */
  push32((uint32_t)(EDX));
  /* 119410c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119410c4 push eax */
  push32((uint32_t)(EAX));
  /* 119410c5 call dword ptr [0x1196831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196831c))), 0x119410cbu);
  /* 119410cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119410cd jne 0x119410d6 */
  if (!C.zf) goto L_119410d6;
  /* 119410cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119410d1 jmp 0x119411c1 */
  goto L_119411c1;
L_119410d6:;
  /* 119410d6 jmp 0x119411ba */
  goto L_119411ba;
L_119410db:;
  /* 119410db mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119410de mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 119410e1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119410e8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119410eb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119410ed add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119410f0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119410f2 call 0x1193bc80 */
  push32(0x119410f7u); f_1193bc80();
  /* 119410f7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 119410fa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119410fd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11941100 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11941103 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1194110a jmp 0x11941123 */
  goto L_11941123;
  /* 1194110c mov eax, 1 */
  EAX = (0x1u);
  /* 11941111 ret  */
  ESPCHK(0x11940ed0u, _esp0);
  ESP += 4; return;
  /* 11941112 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11941115 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1194111c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11941123:;
  /* 11941123 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941127 jne 0x11941130 */
  if (!C.zf) goto L_11941130;
  /* 11941129 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194112b jmp 0x119411c1 */
  goto L_119411c1;
L_11941130:;
  /* 11941130 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11941133 push eax */
  push32((uint32_t)(EAX));
  /* 11941134 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11941137 push ecx */
  push32((uint32_t)(ECX));
  /* 11941138 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1194113b push edx */
  push32((uint32_t)(EDX));
  /* 1194113c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1194113f push eax */
  push32((uint32_t)(EAX));
  /* 11941140 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11941143 push ecx */
  push32((uint32_t)(ECX));
  /* 11941144 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941147 push edx */
  push32((uint32_t)(EDX));
  /* 11941148 call dword ptr [0x1196831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196831c))), 0x1194114eu);
  /* 1194114e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11941150 jne 0x11941156 */
  if (!C.zf) goto L_11941156;
  /* 11941152 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11941154 jmp 0x119411c1 */
  goto L_119411c1;
L_11941156:;
  /* 11941156 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194115a jne 0x1194118a */
  if (!C.zf) goto L_1194118a;
  /* 1194115c push 0 */
  push32((uint32_t)(0x0u));
  /* 1194115e push 0 */
  push32((uint32_t)(0x0u));
  /* 11941160 push 0 */
  push32((uint32_t)(0x0u));
  /* 11941162 push 0 */
  push32((uint32_t)(0x0u));
  /* 11941164 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11941167 push eax */
  push32((uint32_t)(EAX));
  /* 11941168 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194116b push ecx */
  push32((uint32_t)(ECX));
  /* 1194116c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11941171 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11941174 push edx */
  push32((uint32_t)(EDX));
  /* 11941175 call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x1194117bu);
  /* 1194117b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1194117e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941182 jne 0x11941188 */
  if (!C.zf) goto L_11941188;
  /* 11941184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11941186 jmp 0x119411c1 */
  goto L_119411c1;
L_11941188:;
  /* 11941188 jmp 0x119411ba */
  goto L_119411ba;
L_1194118a:;
  /* 1194118a push 0 */
  push32((uint32_t)(0x0u));
  /* 1194118c push 0 */
  push32((uint32_t)(0x0u));
  /* 1194118e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11941191 push eax */
  push32((uint32_t)(EAX));
  /* 11941192 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11941195 push ecx */
  push32((uint32_t)(ECX));
  /* 11941196 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11941199 push edx */
  push32((uint32_t)(EDX));
  /* 1194119a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194119d push eax */
  push32((uint32_t)(EAX));
  /* 1194119e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119411a3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 119411a6 push ecx */
  push32((uint32_t)(ECX));
  /* 119411a7 call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x119411adu);
  /* 119411ad mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119411b0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119411b4 jne 0x119411ba */
  if (!C.zf) goto L_119411ba;
  /* 119411b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119411b8 jmp 0x119411c1 */
  goto L_119411c1;
L_119411ba:;
  /* 119411ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119411bd jmp 0x119411c1 */
  goto L_119411c1;
L_119411bf:;
  /* 119411bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119411c1:;
  /* 119411c1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 119411c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119411c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119411ce pop edi */
  EDI = (pop32());
  /* 119411cf pop esi */
  ESI = (pop32());
  /* 119411d0 pop ebx */
  EBX = (pop32());
  /* 119411d1 mov esp, ebp */
  ESP = (EBP);
  /* 119411d3 pop ebp */
  EBP = (pop32());
  /* 119411d4 ret  */
  ESPCHK(0x11940ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111e0 @ 0x119411e0 (80 bytes, 32 insns) */
void f_119411e0(void) {
  FTRACE(0x119411e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119411e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119411e1 mov ebp, esp */
  EBP = (ESP);
  /* 119411e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119411e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119411e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119411ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119411ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119411f2:;
  /* 119411f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119411f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119411f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119411fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119411fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11941200 je 0x11941217 */
  if (C.zf) goto L_11941217;
  /* 11941202 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941205 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11941208 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1194120a je 0x11941217 */
  if (C.zf) goto L_11941217;
  /* 1194120c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194120f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941212 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11941215 jmp 0x119411f2 */
  goto L_119411f2;
L_11941217:;
  /* 11941217 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194121a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1194121d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1194121f jne 0x11941229 */
  if (!C.zf) goto L_11941229;
  /* 11941221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941224 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11941227 jmp 0x1194122c */
  goto L_1194122c;
L_11941229:;
  /* 11941229 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1194122c:;
  /* 1194122c mov esp, ebp */
  ESP = (EBP);
  /* 1194122e pop ebp */
  EBP = (pop32());
  /* 1194122f ret  */
  ESPCHK(0x119411e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011230 @ 0x11941230 (130 bytes, 43 insns) */
void f_11941230(void) {
  FTRACE(0x11941230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941230 push ebp */
  push32((uint32_t)(EBP));
  /* 11941231 mov ebp, esp */
  EBP = (ESP);
  /* 11941233 push ecx */
  push32((uint32_t)(ECX));
  /* 11941234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941237 cmp eax, dword ptr [0x1196735c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1196735c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194123d jae 0x11941261 */
  if (!C.cf) goto L_11941261;
  /* 1194123f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941242 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11941245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941248 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1194124b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194124e mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 11941255 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1194125a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1194125d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1194125f jne 0x1194127c */
  if (!C.zf) goto L_1194127c;
L_11941261:;
  /* 11941261 call 0x119409b0 */
  push32(0x11941266u); f_119409b0();
  /* 11941266 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1194126c call 0x119409c0 */
  push32(0x11941271u); f_119409c0();
  /* 11941271 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11941277 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1194127a jmp 0x119412ae */
  goto L_119412ae;
L_1194127c:;
  /* 1194127c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194127f push edx */
  push32((uint32_t)(EDX));
  /* 11941280 call 0x119421d0 */
  push32(0x11941285u); f_119421d0();
  /* 11941285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11941288 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194128b push eax */
  push32((uint32_t)(EAX));
  /* 1194128c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194128f push ecx */
  push32((uint32_t)(ECX));
  /* 11941290 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941293 push edx */
  push32((uint32_t)(EDX));
  /* 11941294 call 0x119412c0 */
  push32(0x11941299u); f_119412c0();
  /* 11941299 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194129c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1194129f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119412a2 push eax */
  push32((uint32_t)(EAX));
  /* 119412a3 call 0x11942260 */
  push32(0x119412a8u); f_11942260();
  /* 119412a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119412ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119412ae:;
  /* 119412ae mov esp, ebp */
  ESP = (EBP);
  /* 119412b0 pop ebp */
  EBP = (pop32());
  /* 119412b1 ret  */
  ESPCHK(0x11941230u, _esp0);
  ESP += 4; return;
}

/* FUN_100112c0 @ 0x119412c0 (178 bytes, 56 insns) */
void f_119412c0(void) {
  FTRACE(0x119412c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119412c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119412c1 mov ebp, esp */
  EBP = (ESP);
  /* 119412c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119412c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119412c9 push eax */
  push32((uint32_t)(EAX));
  /* 119412ca call 0x11942050 */
  push32(0x119412cfu); f_11942050();
  /* 119412cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119412d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119412d5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119412d9 jne 0x119412ee */
  if (!C.zf) goto L_119412ee;
  /* 119412db call 0x119409b0 */
  push32(0x119412e0u); f_119409b0();
  /* 119412e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119412e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119412e9 jmp 0x1194136e */
  goto L_1194136e;
L_119412ee:;
  /* 119412ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119412f1 push ecx */
  push32((uint32_t)(ECX));
  /* 119412f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119412f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119412f7 push edx */
  push32((uint32_t)(EDX));
  /* 119412f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119412fb push eax */
  push32((uint32_t)(EAX));
  /* 119412fc call dword ptr [0x11968318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968318))), 0x11941302u);
  /* 11941302 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11941305 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941309 jne 0x11941316 */
  if (!C.zf) goto L_11941316;
  /* 1194130b call dword ptr [0x119683dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683dc))), 0x11941311u);
  /* 11941311 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11941314 jmp 0x1194131d */
  goto L_1194131d;
L_11941316:;
  /* 11941316 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1194131d:;
  /* 1194131d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941321 je 0x11941334 */
  if (C.zf) goto L_11941334;
  /* 11941323 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941326 push ecx */
  push32((uint32_t)(ECX));
  /* 11941327 call 0x11940910 */
  push32(0x1194132cu); f_11940910();
  /* 1194132c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194132f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11941332 jmp 0x1194136e */
  goto L_1194136e;
L_11941334:;
  /* 11941334 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941337 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1194133a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194133d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11941340 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941343 mov ecx, dword ptr [edx*4 + 0x11967220] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11967220)));
  /* 1194134a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1194134e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11941351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941354 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11941357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194135a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1194135d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941360 mov eax, dword ptr [eax*4 + 0x11967220] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 11941367 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1194136b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1194136e:;
  /* 1194136e mov esp, ebp */
  ESP = (EBP);
  /* 11941370 pop ebp */
  EBP = (pop32());
  /* 11941371 ret  */
  ESPCHK(0x119412c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011380 @ 0x11941380 (130 bytes, 43 insns) */
void f_11941380(void) {
  FTRACE(0x11941380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941380 push ebp */
  push32((uint32_t)(EBP));
  /* 11941381 mov ebp, esp */
  EBP = (ESP);
  /* 11941383 push ecx */
  push32((uint32_t)(ECX));
  /* 11941384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941387 cmp eax, dword ptr [0x1196735c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1196735c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194138d jae 0x119413b1 */
  if (!C.cf) goto L_119413b1;
  /* 1194138f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941392 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11941395 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941398 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1194139b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194139e mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 119413a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119413aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119413ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119413af jne 0x119413cc */
  if (!C.zf) goto L_119413cc;
L_119413b1:;
  /* 119413b1 call 0x119409b0 */
  push32(0x119413b6u); f_119409b0();
  /* 119413b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119413bc call 0x119409c0 */
  push32(0x119413c1u); f_119409c0();
  /* 119413c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119413c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119413ca jmp 0x119413fe */
  goto L_119413fe;
L_119413cc:;
  /* 119413cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119413cf push edx */
  push32((uint32_t)(EDX));
  /* 119413d0 call 0x119421d0 */
  push32(0x119413d5u); f_119421d0();
  /* 119413d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119413d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119413db push eax */
  push32((uint32_t)(EAX));
  /* 119413dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119413df push ecx */
  push32((uint32_t)(ECX));
  /* 119413e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119413e3 push edx */
  push32((uint32_t)(EDX));
  /* 119413e4 call 0x11941410 */
  push32(0x119413e9u); f_11941410();
  /* 119413e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119413ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119413ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119413f2 push eax */
  push32((uint32_t)(EAX));
  /* 119413f3 call 0x11942260 */
  push32(0x119413f8u); f_11942260();
  /* 119413f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119413fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119413fe:;
  /* 119413fe mov esp, ebp */
  ESP = (EBP);
  /* 11941400 pop ebp */
  EBP = (pop32());
  /* 11941401 ret  */
  ESPCHK(0x11941380u, _esp0);
  ESP += 4; return;
}

/* FUN_10011410 @ 0x11941410 (627 bytes, 182 insns) */
void f_11941410(void) {
  FTRACE(0x11941410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941410 push ebp */
  push32((uint32_t)(EBP));
  /* 11941411 mov ebp, esp */
  EBP = (ESP);
  /* 11941413 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11941419 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11941420 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11941423 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11941429 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194142d jne 0x11941436 */
  if (!C.zf) goto L_11941436;
  /* 1194142f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11941431 jmp 0x1194167f */
  goto L_1194167f;
L_11941436:;
  /* 11941436 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941439 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1194143c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194143f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11941442 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941445 mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 1194144c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11941451 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11941454 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11941456 je 0x11941468 */
  if (C.zf) goto L_11941468;
  /* 11941458 push 2 */
  push32((uint32_t)(0x2u));
  /* 1194145a push 0 */
  push32((uint32_t)(0x0u));
  /* 1194145c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194145f push edx */
  push32((uint32_t)(EDX));
  /* 11941460 call 0x119412c0 */
  push32(0x11941465u); f_119412c0();
  /* 11941465 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11941468:;
  /* 11941468 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194146b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1194146e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941471 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11941474 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941477 mov edx, dword ptr [eax*4 + 0x11967220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 1194147e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11941483 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11941488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194148a je 0x1194159c */
  if (C.zf) goto L_1194159c;
  /* 11941490 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11941493 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11941496 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1194149d:;
  /* 1194149d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119414a0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119414a3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119414a6 jae 0x1194159a */
  if (!C.cf) goto L_1194159a;
  /* 119414ac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 119414b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119414b5:;
  /* 119414b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119414b8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 119414be sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119414c0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119414c6 jge 0x11941527 */
  if ((C.sf==C.of)) goto L_11941527;
  /* 119414c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119414cb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119414ce cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119414d1 jae 0x11941527 */
  if (!C.cf) goto L_11941527;
  /* 119414d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119414d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119414d8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 119414de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119414e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119414e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119414e7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 119414ee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119414f1 jne 0x11941511 */
  if (!C.zf) goto L_11941511;
  /* 119414f3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 119414f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119414fc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11941502 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11941505 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11941508 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194150b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194150e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11941511:;
  /* 11941511 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11941514 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1194151a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1194151c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194151f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941522 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11941525 jmp 0x119414b5 */
  goto L_119414b5;
L_11941527:;
  /* 11941527 push 0 */
  push32((uint32_t)(0x0u));
  /* 11941529 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1194152f push edx */
  push32((uint32_t)(EDX));
  /* 11941530 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11941533 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11941539 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194153b push eax */
  push32((uint32_t)(EAX));
  /* 1194153c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11941542 push edx */
  push32((uint32_t)(EDX));
  /* 11941543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941546 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11941549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194154c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1194154f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941552 mov edx, dword ptr [eax*4 + 0x11967220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 11941559 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1194155c push eax */
  push32((uint32_t)(EAX));
  /* 1194155d call dword ptr [0x119683a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683a0))), 0x11941563u);
  /* 11941563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11941565 je 0x1194158a */
  if (C.zf) goto L_1194158a;
  /* 11941567 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1194156a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941570 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11941573 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11941576 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1194157c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194157e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941584 jge 0x11941588 */
  if ((C.sf==C.of)) goto L_11941588;
  /* 11941586 jmp 0x1194159a */
  goto L_1194159a;
L_11941588:;
  /* 11941588 jmp 0x11941595 */
  goto L_11941595;
L_1194158a:;
  /* 1194158a call dword ptr [0x119683dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683dc))), 0x11941590u);
  /* 11941590 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11941593 jmp 0x1194159a */
  goto L_1194159a;
L_11941595:;
  /* 11941595 jmp 0x1194149d */
  goto L_1194149d;
L_1194159a:;
  /* 1194159a jmp 0x119415ec */
  goto L_119415ec;
L_1194159c:;
  /* 1194159c push 0 */
  push32((uint32_t)(0x0u));
  /* 1194159e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 119415a4 push ecx */
  push32((uint32_t)(ECX));
  /* 119415a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119415a8 push edx */
  push32((uint32_t)(EDX));
  /* 119415a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119415ac push eax */
  push32((uint32_t)(EAX));
  /* 119415ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119415b0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119415b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119415b6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119415b9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119415bc mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 119415c3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 119415c6 push ecx */
  push32((uint32_t)(ECX));
  /* 119415c7 call dword ptr [0x119683a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683a0))), 0x119415cdu);
  /* 119415cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119415cf je 0x119415e3 */
  if (C.zf) goto L_119415e3;
  /* 119415d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119415d8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 119415de mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119415e1 jmp 0x119415ec */
  goto L_119415ec;
L_119415e3:;
  /* 119415e3 call dword ptr [0x119683dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683dc))), 0x119415e9u);
  /* 119415e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119415ec:;
  /* 119415ec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119415f0 jne 0x11941676 */
  if (!C.zf) goto L_11941676;
  /* 119415f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119415fa je 0x1194162a */
  if (C.zf) goto L_1194162a;
  /* 119415fc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941600 jne 0x11941619 */
  if (!C.zf) goto L_11941619;
  /* 11941602 call 0x119409b0 */
  push32(0x11941607u); f_119409b0();
  /* 11941607 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1194160d call 0x119409c0 */
  push32(0x11941612u); f_119409c0();
  /* 11941612 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11941615 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11941617 jmp 0x11941625 */
  goto L_11941625;
L_11941619:;
  /* 11941619 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194161c push edx */
  push32((uint32_t)(EDX));
  /* 1194161d call 0x11940910 */
  push32(0x11941622u); f_11940910();
  /* 11941622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11941625:;
  /* 11941625 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11941628 jmp 0x1194167f */
  goto L_1194167f;
L_1194162a:;
  /* 1194162a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194162d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11941630 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941633 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11941636 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941639 mov edx, dword ptr [eax*4 + 0x11967220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 11941640 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11941645 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11941648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194164a je 0x1194165b */
  if (C.zf) goto L_1194165b;
  /* 1194164c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194164f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11941652 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941655 jne 0x1194165b */
  if (!C.zf) goto L_1194165b;
  /* 11941657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11941659 jmp 0x1194167f */
  goto L_1194167f;
L_1194165b:;
  /* 1194165b call 0x119409b0 */
  push32(0x11941660u); f_119409b0();
  /* 11941660 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11941666 call 0x119409c0 */
  push32(0x1194166bu); f_119409c0();
  /* 1194166b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11941671 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11941674 jmp 0x1194167f */
  goto L_1194167f;
L_11941676:;
  /* 11941676 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11941679 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1194167f:;
  /* 1194167f mov esp, ebp */
  ESP = (EBP);
  /* 11941681 pop ebp */
  EBP = (pop32());
  /* 11941682 ret  */
  ESPCHK(0x11941410u, _esp0);
  ESP += 4; return;
}

/* FUN_10011690 @ 0x11941690 (199 bytes, 68 insns) */
void f_11941690(void) {
  FTRACE(0x11941690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941690 push ebp */
  push32((uint32_t)(EBP));
  /* 11941691 mov ebp, esp */
  EBP = (ESP);
  /* 11941693 push ecx */
  push32((uint32_t)(ECX));
  /* 11941694 push ebx */
  push32((uint32_t)(EBX));
  /* 11941695 push esi */
  push32((uint32_t)(ESI));
  /* 11941696 push edi */
  push32((uint32_t)(EDI));
L_11941697:;
  /* 11941697 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194169b jne 0x119416bb */
  if (!C.zf) goto L_119416bb;
  /* 1194169d push 0x11960e30 */
  push32((uint32_t)(0x11960e30u));
  /* 119416a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119416a4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 119416a6 push 0x11960f00 */
  push32((uint32_t)(0x11960f00u));
  /* 119416ab push 2 */
  push32((uint32_t)(0x2u));
  /* 119416ad call 0x11937ba0 */
  push32(0x119416b2u); f_11937ba0();
  /* 119416b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119416b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119416b8 jne 0x119416bb */
  if (!C.zf) goto L_119416bb;
  /* 119416ba int3  */
  x86_unimpl("int3 @ 0x119416ba");
L_119416bb:;
  /* 119416bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119416bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119416bf jne 0x11941697 */
  if (!C.zf) goto L_11941697;
  /* 119416c1 mov ecx, dword ptr [0x11965a6c] */
  ECX = (r32((uint32_t)(0x11965a6c)));
  /* 119416c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119416ca mov dword ptr [0x11965a6c], ecx */
  w32((uint32_t)(0x11965a6c), (ECX));
  /* 119416d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119416d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119416d6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 119416d8 push 0x11960f00 */
  push32((uint32_t)(0x11960f00u));
  /* 119416dd push 2 */
  push32((uint32_t)(0x2u));
  /* 119416df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119416e4 call 0x11938ae0 */
  push32(0x119416e9u); f_11938ae0();
  /* 119416e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119416ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119416ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 119416f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119416f5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119416f9 je 0x11941716 */
  if (C.zf) goto L_11941716;
  /* 119416fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119416fe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11941701 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11941704 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941707 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1194170a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194170d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11941714 jmp 0x1194173b */
  goto L_1194173b;
L_11941716:;
  /* 11941716 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941719 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1194171c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1194171f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941722 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11941725 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941728 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194172b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194172e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11941731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941734 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1194173b:;
  /* 1194173b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194173e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941741 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11941744 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11941746 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941749 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11941750 pop edi */
  EDI = (pop32());
  /* 11941751 pop esi */
  ESI = (pop32());
  /* 11941752 pop ebx */
  EBX = (pop32());
  /* 11941753 mov esp, ebp */
  ESP = (EBP);
  /* 11941755 pop ebp */
  EBP = (pop32());
  /* 11941756 ret  */
  ESPCHK(0x11941690u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11941760 (50 bytes, 17 insns) */
void f_11941760(void) {
  FTRACE(0x11941760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941760 push ebp */
  push32((uint32_t)(EBP));
  /* 11941761 mov ebp, esp */
  EBP = (ESP);
  /* 11941763 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941766 cmp eax, dword ptr [0x1196735c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1196735c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194176c jb 0x11941772 */
  if (C.cf) goto L_11941772;
  /* 1194176e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11941770 jmp 0x11941790 */
  goto L_11941790;
L_11941772:;
  /* 11941772 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941775 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11941778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194177b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1194177e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941781 mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 11941788 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1194178d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11941790:;
  /* 11941790 pop ebp */
  EBP = (pop32());
  /* 11941791 ret  */
  ESPCHK(0x11941760u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x119417a0 (300 bytes, 80 insns) */
void f_119417a0(void) {
  FTRACE(0x119417a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119417a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119417a1 mov ebp, esp */
  EBP = (ESP);
  /* 119417a3 push ecx */
  push32((uint32_t)(ECX));
  /* 119417a4 cmp dword ptr [0x11966f20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11966f20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119417ab jne 0x119417b9 */
  if (!C.zf) goto L_119417b9;
  /* 119417ad mov dword ptr [0x11966f20], 0x200 */
  w32((uint32_t)(0x11966f20), (0x200u));
  /* 119417b7 jmp 0x119417cc */
  goto L_119417cc;
L_119417b9:;
  /* 119417b9 cmp dword ptr [0x11966f20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11966f20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119417c0 jge 0x119417cc */
  if ((C.sf==C.of)) goto L_119417cc;
  /* 119417c2 mov dword ptr [0x11966f20], 0x14 */
  w32((uint32_t)(0x11966f20), (0x14u));
L_119417cc:;
  /* 119417cc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 119417d1 push 0x11960f0c */
  push32((uint32_t)(0x11960f0cu));
  /* 119417d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 119417d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 119417da mov eax, dword ptr [0x11966f20] */
  EAX = (r32((uint32_t)(0x11966f20)));
  /* 119417df push eax */
  push32((uint32_t)(EAX));
  /* 119417e0 call 0x11938ef0 */
  push32(0x119417e5u); f_11938ef0();
  /* 119417e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119417e8 mov dword ptr [0x11965be0], eax */
  w32((uint32_t)(0x11965be0), (EAX));
  /* 119417ed cmp dword ptr [0x11965be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119417f4 jne 0x11941835 */
  if (!C.zf) goto L_11941835;
  /* 119417f6 mov dword ptr [0x11966f20], 0x14 */
  w32((uint32_t)(0x11966f20), (0x14u));
  /* 11941800 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11941805 push 0x11960f0c */
  push32((uint32_t)(0x11960f0cu));
  /* 1194180a push 2 */
  push32((uint32_t)(0x2u));
  /* 1194180c push 4 */
  push32((uint32_t)(0x4u));
  /* 1194180e mov ecx, dword ptr [0x11966f20] */
  ECX = (r32((uint32_t)(0x11966f20)));
  /* 11941814 push ecx */
  push32((uint32_t)(ECX));
  /* 11941815 call 0x11938ef0 */
  push32(0x1194181au); f_11938ef0();
  /* 1194181a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194181d mov dword ptr [0x11965be0], eax */
  w32((uint32_t)(0x11965be0), (EAX));
  /* 11941822 cmp dword ptr [0x11965be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941829 jne 0x11941835 */
  if (!C.zf) goto L_11941835;
  /* 1194182b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1194182d call 0x11937a50 */
  push32(0x11941832u); f_11937a50();
  /* 11941832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11941835:;
  /* 11941835 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1194183c jmp 0x11941847 */
  goto L_11941847;
L_1194183e:;
  /* 1194183e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941841 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941844 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11941847:;
  /* 11941847 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194184b jge 0x11941866 */
  if ((C.sf==C.of)) goto L_11941866;
  /* 1194184d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941850 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11941853 add eax, 0x11964120 */
  { uint32_t _a=(EAX),_b=(0x11964120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941858 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194185b mov edx, dword ptr [0x11965be0] */
  EDX = (r32((uint32_t)(0x11965be0)));
  /* 11941861 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11941864 jmp 0x1194183e */
  goto L_1194183e;
L_11941866:;
  /* 11941866 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1194186d jmp 0x11941878 */
  goto L_11941878;
L_1194186f:;
  /* 1194186f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941872 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941875 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11941878:;
  /* 11941878 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194187c jge 0x119418c8 */
  if ((C.sf==C.of)) goto L_119418c8;
  /* 1194187e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941881 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11941884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941887 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1194188a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194188d mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 11941894 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941898 je 0x119418b6 */
  if (C.zf) goto L_119418b6;
  /* 1194189a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194189d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119418a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119418a3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119418a6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119418a9 mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 119418b0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119418b4 jne 0x119418c6 */
  if (!C.zf) goto L_119418c6;
L_119418b6:;
  /* 119418b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119418b9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119418bc mov dword ptr [ecx + 0x11964130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11964130), (0xffffffffu));
L_119418c6:;
  /* 119418c6 jmp 0x1194186f */
  goto L_1194186f;
L_119418c8:;
  /* 119418c8 mov esp, ebp */
  ESP = (EBP);
  /* 119418ca pop ebp */
  EBP = (pop32());
  /* 119418cb ret  */
  ESPCHK(0x119417a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118d0 @ 0x119418d0 (26 bytes, 9 insns) */
void f_119418d0(void) {
  FTRACE(0x119418d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119418d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119418d1 mov ebp, esp */
  EBP = (ESP);
  /* 119418d3 call 0x119424d0 */
  push32(0x119418d8u); f_119424d0();
  /* 119418d8 movsx eax, byte ptr [0x11965884] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11965884))));
  /* 119418df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119418e1 je 0x119418e8 */
  if (C.zf) goto L_119418e8;
  /* 119418e3 call 0x11942290 */
  push32(0x119418e8u); f_11942290();
L_119418e8:;
  /* 119418e8 pop ebp */
  EBP = (pop32());
  /* 119418e9 ret  */
  ESPCHK(0x119418d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118f0 @ 0x119418f0 (61 bytes, 20 insns) */
void f_119418f0(void) {
  FTRACE(0x119418f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119418f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119418f1 mov ebp, esp */
  EBP = (ESP);
  /* 119418f3 cmp dword ptr [ebp + 8], 0x11964120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11964120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119418fa jb 0x1194191e */
  if (C.cf) goto L_1194191e;
  /* 119418fc cmp dword ptr [ebp + 8], 0x11964380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11964380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941903 ja 0x1194191e */
  if ((!C.cf&&!C.zf)) goto L_1194191e;
  /* 11941905 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941908 sub eax, 0x11964120 */
  { uint32_t _a=(EAX),_b=(0x11964120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194190d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11941910 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941913 push eax */
  push32((uint32_t)(EAX));
  /* 11941914 call 0x1193c4e0 */
  push32(0x11941919u); f_1193c4e0();
  /* 11941919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194191c jmp 0x1194192b */
  goto L_1194192b;
L_1194191e:;
  /* 1194191e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941921 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941924 push ecx */
  push32((uint32_t)(ECX));
  /* 11941925 call dword ptr [0x11968354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968354))), 0x1194192bu);
L_1194192b:;
  /* 1194192b pop ebp */
  EBP = (pop32());
  /* 1194192c ret  */
  ESPCHK(0x119418f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011930 @ 0x11941930 (41 bytes, 16 insns) */
void f_11941930(void) {
  FTRACE(0x11941930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941930 push ebp */
  push32((uint32_t)(EBP));
  /* 11941931 mov ebp, esp */
  EBP = (ESP);
  /* 11941933 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941937 jge 0x1194194a */
  if ((C.sf==C.of)) goto L_1194194a;
  /* 11941939 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194193c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194193f push eax */
  push32((uint32_t)(EAX));
  /* 11941940 call 0x1193c4e0 */
  push32(0x11941945u); f_1193c4e0();
  /* 11941945 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11941948 jmp 0x11941957 */
  goto L_11941957;
L_1194194a:;
  /* 1194194a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194194d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941950 push ecx */
  push32((uint32_t)(ECX));
  /* 11941951 call dword ptr [0x11968354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968354))), 0x11941957u);
L_11941957:;
  /* 11941957 pop ebp */
  EBP = (pop32());
  /* 11941958 ret  */
  ESPCHK(0x11941930u, _esp0);
  ESP += 4; return;
}

/* FUN_10011960 @ 0x11941960 (61 bytes, 20 insns) */
void f_11941960(void) {
  FTRACE(0x11941960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941960 push ebp */
  push32((uint32_t)(EBP));
  /* 11941961 mov ebp, esp */
  EBP = (ESP);
  /* 11941963 cmp dword ptr [ebp + 8], 0x11964120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11964120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194196a jb 0x1194198e */
  if (C.cf) goto L_1194198e;
  /* 1194196c cmp dword ptr [ebp + 8], 0x11964380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11964380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941973 ja 0x1194198e */
  if ((!C.cf&&!C.zf)) goto L_1194198e;
  /* 11941975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941978 sub eax, 0x11964120 */
  { uint32_t _a=(EAX),_b=(0x11964120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194197d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11941980 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941983 push eax */
  push32((uint32_t)(EAX));
  /* 11941984 call 0x1193c580 */
  push32(0x11941989u); f_1193c580();
  /* 11941989 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194198c jmp 0x1194199b */
  goto L_1194199b;
L_1194198e:;
  /* 1194198e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941991 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941994 push ecx */
  push32((uint32_t)(ECX));
  /* 11941995 call dword ptr [0x11968350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968350))), 0x1194199bu);
L_1194199b:;
  /* 1194199b pop ebp */
  EBP = (pop32());
  /* 1194199c ret  */
  ESPCHK(0x11941960u, _esp0);
  ESP += 4; return;
}

/* FUN_100119a0 @ 0x119419a0 (41 bytes, 16 insns) */
void f_119419a0(void) {
  FTRACE(0x119419a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119419a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119419a1 mov ebp, esp */
  EBP = (ESP);
  /* 119419a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119419a7 jge 0x119419ba */
  if ((C.sf==C.of)) goto L_119419ba;
  /* 119419a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119419ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119419af push eax */
  push32((uint32_t)(EAX));
  /* 119419b0 call 0x1193c580 */
  push32(0x119419b5u); f_1193c580();
  /* 119419b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119419b8 jmp 0x119419c7 */
  goto L_119419c7;
L_119419ba:;
  /* 119419ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119419bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119419c0 push ecx */
  push32((uint32_t)(ECX));
  /* 119419c1 call dword ptr [0x11968350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968350))), 0x119419c7u);
L_119419c7:;
  /* 119419c7 pop ebp */
  EBP = (pop32());
  /* 119419c8 ret  */
  ESPCHK(0x119419a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119d0 @ 0x119419d0 (119 bytes, 34 insns) */
void f_119419d0(void) {
  FTRACE(0x119419d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119419d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119419d1 mov ebp, esp */
  EBP = (ESP);
  /* 119419d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119419d6 push 0x11965bdc */
  push32((uint32_t)(0x11965bdcu));
  /* 119419db call dword ptr [0x119683b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683b4))), 0x119419e1u);
  /* 119419e1 cmp dword ptr [0x11965bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119419e8 je 0x11941a08 */
  if (C.zf) goto L_11941a08;
  /* 119419ea push 0x11965bdc */
  push32((uint32_t)(0x11965bdcu));
  /* 119419ef call dword ptr [0x119683a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683a4))), 0x119419f5u);
  /* 119419f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119419f7 call 0x1193c4e0 */
  push32(0x119419fcu); f_1193c4e0();
  /* 119419fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119419ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11941a06 jmp 0x11941a0f */
  goto L_11941a0f;
L_11941a08:;
  /* 11941a08 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11941a0f:;
  /* 11941a0f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11941a13 push eax */
  push32((uint32_t)(EAX));
  /* 11941a14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941a17 push ecx */
  push32((uint32_t)(ECX));
  /* 11941a18 call 0x11941a50 */
  push32(0x11941a1du); f_11941a50();
  /* 11941a1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11941a20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11941a23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941a27 je 0x11941a35 */
  if (C.zf) goto L_11941a35;
  /* 11941a29 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11941a2b call 0x1193c580 */
  push32(0x11941a30u); f_1193c580();
  /* 11941a30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11941a33 jmp 0x11941a40 */
  goto L_11941a40;
L_11941a35:;
  /* 11941a35 push 0x11965bdc */
  push32((uint32_t)(0x11965bdcu));
  /* 11941a3a call dword ptr [0x119683a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683a4))), 0x11941a40u);
L_11941a40:;
  /* 11941a40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11941a43 mov esp, ebp */
  ESP = (EBP);
  /* 11941a45 pop ebp */
  EBP = (pop32());
  /* 11941a46 ret  */
  ESPCHK(0x119419d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a50 @ 0x11941a50 (160 bytes, 50 insns) */
void f_11941a50(void) {
  FTRACE(0x11941a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11941a51 mov ebp, esp */
  EBP = (ESP);
  /* 11941a53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11941a56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941a5a jne 0x11941a63 */
  if (!C.zf) goto L_11941a63;
  /* 11941a5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11941a5e jmp 0x11941aec */
  goto L_11941aec;
L_11941a63:;
  /* 11941a63 cmp dword ptr [0x11965a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941a6a jne 0x11941a9a */
  if (!C.zf) goto L_11941a9a;
  /* 11941a6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11941a6f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11941a74 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941a79 jle 0x11941a8b */
  if ((C.zf||C.sf!=C.of)) goto L_11941a8b;
  /* 11941a7b call 0x119409b0 */
  push32(0x11941a80u); f_119409b0();
  /* 11941a80 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11941a86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11941a89 jmp 0x11941aec */
  goto L_11941aec;
L_11941a8b:;
  /* 11941a8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941a8e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11941a91 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11941a93 mov eax, 1 */
  EAX = (0x1u);
  /* 11941a98 jmp 0x11941aec */
  goto L_11941aec;
L_11941a9a:;
  /* 11941a9a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11941aa1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11941aa4 push eax */
  push32((uint32_t)(EAX));
  /* 11941aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11941aa7 mov ecx, dword ptr [0x11963ea4] */
  ECX = (r32((uint32_t)(0x11963ea4)));
  /* 11941aad push ecx */
  push32((uint32_t)(ECX));
  /* 11941aae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941ab1 push edx */
  push32((uint32_t)(EDX));
  /* 11941ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11941ab4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11941ab7 push eax */
  push32((uint32_t)(EAX));
  /* 11941ab8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11941abd mov ecx, dword ptr [0x11965a60] */
  ECX = (r32((uint32_t)(0x11965a60)));
  /* 11941ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11941ac4 call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x11941acau);
  /* 11941aca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11941acd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941ad1 je 0x11941ad9 */
  if (C.zf) goto L_11941ad9;
  /* 11941ad3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941ad7 je 0x11941ae9 */
  if (C.zf) goto L_11941ae9;
L_11941ad9:;
  /* 11941ad9 call 0x119409b0 */
  push32(0x11941adeu); f_119409b0();
  /* 11941ade mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11941ae4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11941ae7 jmp 0x11941aec */
  goto L_11941aec;
L_11941ae9:;
  /* 11941ae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11941aec:;
  /* 11941aec mov esp, ebp */
  ESP = (EBP);
  /* 11941aee pop ebp */
  EBP = (pop32());
  /* 11941aef ret  */
  ESPCHK(0x11941a50u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11941af0 (32 bytes, 18 insns) */
void f_11941af0(void) {
  FTRACE(0x11941af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11941af1 mov ebp, esp */
  EBP = (ESP);
  /* 11941af3 push ebx */
  push32((uint32_t)(EBX));
  /* 11941af4 push esi */
  push32((uint32_t)(ESI));
  /* 11941af5 push edi */
  push32((uint32_t)(EDI));
  /* 11941af6 push ebp */
  push32((uint32_t)(EBP));
  /* 11941af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11941af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11941afb push 0x11941b08 */
  push32((uint32_t)(0x11941b08u));
  /* 11941b00 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11941b03 call 0x1194923c */
  push32(0x11941b08u); f_1194923c();
  /* 11941b08 pop ebp */
  EBP = (pop32());
  /* 11941b09 pop edi */
  EDI = (pop32());
  /* 11941b0a pop esi */
  ESI = (pop32());
  /* 11941b0b pop ebx */
  EBX = (pop32());
  /* 11941b0c mov esp, ebp */
  ESP = (EBP);
  /* 11941b0e pop ebp */
  EBP = (pop32());
  /* 11941b0f ret  */
  ESPCHK(0x11941af0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11941b32 (104 bytes, 33 insns) */
void f_11941b32(void) {
  FTRACE(0x11941b32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941b32 push ebx */
  push32((uint32_t)(EBX));
  /* 11941b33 push esi */
  push32((uint32_t)(ESI));
  /* 11941b34 push edi */
  push32((uint32_t)(EDI));
  /* 11941b35 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11941b39 push eax */
  push32((uint32_t)(EAX));
  /* 11941b3a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11941b3c push 0x11941b10 */
  push32((uint32_t)(0x11941b10u));
  /* 11941b41 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11941b48 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11941b4f:;
  /* 11941b4f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11941b53 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11941b56 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11941b59 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941b5c je 0x11941b8c */
  if (C.zf) goto L_11941b8c;
  /* 11941b5e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941b62 je 0x11941b8c */
  if (C.zf) goto L_11941b8c;
  /* 11941b64 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11941b67 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11941b6a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11941b6e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11941b71 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941b76 jne 0x11941b8a */
  if (!C.zf) goto L_11941b8a;
  /* 11941b78 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11941b7d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11941b81 call 0x11941bc6 */
  push32(0x11941b86u); f_11941bc6();
  /* 11941b86 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11941b8au);
L_11941b8a:;
  /* 11941b8a jmp 0x11941b4f */
  goto L_11941b4f;
L_11941b8c:;
  /* 11941b8c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11941b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11941b96 pop edi */
  EDI = (pop32());
  /* 11941b97 pop esi */
  ESI = (pop32());
  /* 11941b98 pop ebx */
  EBX = (pop32());
  /* 11941b99 ret  */
  ESPCHK(0x11941b32u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bc6 @ 0x11941bc6 (24 bytes, 10 insns) */
void f_11941bc6(void) {
  FTRACE(0x11941bc6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11941bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11941bc8 mov ebx, 0x119643b8 */
  EBX = (0x119643b8u);
  /* 11941bcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941bd0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11941bd3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11941bd6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11941bd9 pop ecx */
  ECX = (pop32());
  /* 11941bda pop ebx */
  EBX = (pop32());
  /* 11941bdb ret 4 */
  ESPCHK(0x11941bc6u, _esp0);
  ESP += 8; return;
}

/* FUN_10011ca5 @ 0x11941ca5 (27 bytes, 11 insns) */
void f_11941ca5(void) {
  FTRACE(0x11941ca5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941ca5 push ebp */
  push32((uint32_t)(EBP));
  /* 11941ca6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11941caa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11941cac mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11941caf push eax */
  push32((uint32_t)(EAX));
  /* 11941cb0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11941cb3 push eax */
  push32((uint32_t)(EAX));
  /* 11941cb4 call 0x11941b32 */
  push32(0x11941cb9u); f_11941b32();
  /* 11941cb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11941cbc pop ebp */
  EBP = (pop32());
  /* 11941cbd ret 4 */
  ESPCHK(0x11941ca5u, _esp0);
  ESP += 8; return;
}

/* FUN_10011cc0 @ 0x11941cc0 (482 bytes, 138 insns) */
void f_11941cc0(void) {
  FTRACE(0x11941cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11941cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11941cc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11941cc6 push esi */
  push32((uint32_t)(ESI));
  /* 11941cc7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11941cce push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11941cd0 call 0x1193c4e0 */
  push32(0x11941cd5u); f_1193c4e0();
  /* 11941cd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11941cd8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11941cdf jmp 0x11941cea */
  goto L_11941cea;
L_11941ce1:;
  /* 11941ce1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11941ce4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941ce7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11941cea:;
  /* 11941cea cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941cee jge 0x11941e90 */
  if ((C.sf==C.of)) goto L_11941e90;
  /* 11941cf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11941cf7 cmp dword ptr [ecx*4 + 0x11967220], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11967220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941cff je 0x11941df6 */
  if (C.zf) goto L_11941df6;
  /* 11941d05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11941d08 mov eax, dword ptr [edx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11967220)));
  /* 11941d0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11941d12 jmp 0x11941d1d */
  goto L_11941d1d;
L_11941d14:;
  /* 11941d14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941d17 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941d1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11941d1d:;
  /* 11941d1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11941d20 mov eax, dword ptr [edx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11967220)));
  /* 11941d27 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941d2c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941d2f jae 0x11941de6 */
  if (!C.cf) goto L_11941de6;
  /* 11941d35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941d38 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11941d3c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11941d3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11941d41 jne 0x11941de1 */
  if (!C.zf) goto L_11941de1;
  /* 11941d47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941d4a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941d4e jne 0x11941d89 */
  if (!C.zf) goto L_11941d89;
  /* 11941d50 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11941d52 call 0x1193c4e0 */
  push32(0x11941d57u); f_1193c4e0();
  /* 11941d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11941d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941d5d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941d61 jne 0x11941d7f */
  if (!C.zf) goto L_11941d7f;
  /* 11941d63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941d66 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941d69 push edx */
  push32((uint32_t)(EDX));
  /* 11941d6a call dword ptr [0x11968358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968358))), 0x11941d70u);
  /* 11941d70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941d73 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11941d76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941d79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941d7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11941d7f:;
  /* 11941d7f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11941d81 call 0x1193c580 */
  push32(0x11941d86u); f_1193c580();
  /* 11941d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11941d89:;
  /* 11941d89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941d8c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941d8f push eax */
  push32((uint32_t)(EAX));
  /* 11941d90 call dword ptr [0x11968354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968354))), 0x11941d96u);
  /* 11941d96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941d99 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11941d9d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11941da0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11941da2 je 0x11941db6 */
  if (C.zf) goto L_11941db6;
  /* 11941da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941da7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941daa push eax */
  push32((uint32_t)(EAX));
  /* 11941dab call dword ptr [0x11968350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968350))), 0x11941db1u);
  /* 11941db1 jmp 0x11941d14 */
  goto L_11941d14;
L_11941db6:;
  /* 11941db6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941db9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11941dbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11941dc2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11941dc5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11941dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941dcb sub eax, dword ptr [edx*4 + 0x11967220] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11967220))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11941dd2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11941dd3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11941dd8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11941dda add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941ddc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11941ddf jmp 0x11941de6 */
  goto L_11941de6;
L_11941de1:;
  /* 11941de1 jmp 0x11941d14 */
  goto L_11941d14;
L_11941de6:;
  /* 11941de6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941dea je 0x11941df1 */
  if (C.zf) goto L_11941df1;
  /* 11941dec jmp 0x11941e90 */
  goto L_11941e90;
L_11941df1:;
  /* 11941df1 jmp 0x11941e8b */
  goto L_11941e8b;
L_11941df6:;
  /* 11941df6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11941df8 push 0x11960f14 */
  push32((uint32_t)(0x11960f14u));
  /* 11941dfd push 2 */
  push32((uint32_t)(0x2u));
  /* 11941dff push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11941e04 call 0x11938ae0 */
  push32(0x11941e09u); f_11938ae0();
  /* 11941e09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11941e0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11941e0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941e13 je 0x11941e89 */
  if (C.zf) goto L_11941e89;
  /* 11941e15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11941e18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941e1b mov dword ptr [eax*4 + 0x11967220], ecx */
  w32((uint32_t)(EAX*4 + 0x11967220), (ECX));
  /* 11941e22 mov edx, dword ptr [0x1196735c] */
  EDX = (r32((uint32_t)(0x1196735c)));
  /* 11941e28 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941e2b mov dword ptr [0x1196735c], edx */
  w32((uint32_t)(0x1196735c), (EDX));
  /* 11941e31 jmp 0x11941e3c */
  goto L_11941e3c;
L_11941e33:;
  /* 11941e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941e36 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941e39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11941e3c:;
  /* 11941e3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11941e3f mov edx, dword ptr [ecx*4 + 0x11967220] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 11941e46 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11941e4c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941e4f jae 0x11941e74 */
  if (!C.cf) goto L_11941e74;
  /* 11941e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941e54 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11941e58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941e5b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11941e61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941e64 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11941e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11941e6b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11941e72 jmp 0x11941e33 */
  goto L_11941e33;
L_11941e74:;
  /* 11941e74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11941e77 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11941e7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11941e7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11941e80 push edx */
  push32((uint32_t)(EDX));
  /* 11941e81 call 0x119421d0 */
  push32(0x11941e86u); f_119421d0();
  /* 11941e86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11941e89:;
  /* 11941e89 jmp 0x11941e90 */
  goto L_11941e90;
L_11941e8b:;
  /* 11941e8b jmp 0x11941ce1 */
  goto L_11941ce1;
L_11941e90:;
  /* 11941e90 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11941e92 call 0x1193c580 */
  push32(0x11941e97u); f_1193c580();
  /* 11941e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11941e9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11941e9d pop esi */
  ESI = (pop32());
  /* 11941e9e mov esp, ebp */
  ESP = (EBP);
  /* 11941ea0 pop ebp */
  EBP = (pop32());
  /* 11941ea1 ret  */
  ESPCHK(0x11941cc0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11941eb0 (183 bytes, 57 insns) */
void f_11941eb0(void) {
  FTRACE(0x11941eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11941eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11941eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11941eb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941eb7 cmp eax, dword ptr [0x1196735c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1196735c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941ebd jae 0x11941f4a */
  if (!C.cf) goto L_11941f4a;
  /* 11941ec3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941ec6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11941ec9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941ecc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11941ecf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941ed2 mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 11941ed9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941edd jne 0x11941f4a */
  if (!C.zf) goto L_11941f4a;
  /* 11941edf cmp dword ptr [0x11965844], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11965844))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941ee6 jne 0x11941f2a */
  if (!C.zf) goto L_11941f2a;
  /* 11941ee8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941eeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11941eee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941ef2 je 0x11941f02 */
  if (C.zf) goto L_11941f02;
  /* 11941ef4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941ef8 je 0x11941f10 */
  if (C.zf) goto L_11941f10;
  /* 11941efa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941efe je 0x11941f1e */
  if (C.zf) goto L_11941f1e;
  /* 11941f00 jmp 0x11941f2a */
  goto L_11941f2a;
L_11941f02:;
  /* 11941f02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11941f05 push edx */
  push32((uint32_t)(EDX));
  /* 11941f06 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11941f08 call dword ptr [0x11968310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968310))), 0x11941f0eu);
  /* 11941f0e jmp 0x11941f2a */
  goto L_11941f2a;
L_11941f10:;
  /* 11941f10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11941f13 push eax */
  push32((uint32_t)(EAX));
  /* 11941f14 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11941f16 call dword ptr [0x11968310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968310))), 0x11941f1cu);
  /* 11941f1c jmp 0x11941f2a */
  goto L_11941f2a;
L_11941f1e:;
  /* 11941f1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11941f21 push ecx */
  push32((uint32_t)(ECX));
  /* 11941f22 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11941f24 call dword ptr [0x11968310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968310))), 0x11941f2au);
L_11941f2a:;
  /* 11941f2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941f2d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11941f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941f33 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11941f36 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941f39 mov ecx, dword ptr [edx*4 + 0x11967220] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11967220)));
  /* 11941f40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11941f43 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11941f46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11941f48 jmp 0x11941f63 */
  goto L_11941f63;
L_11941f4a:;
  /* 11941f4a call 0x119409b0 */
  push32(0x11941f4fu); f_119409b0();
  /* 11941f4f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11941f55 call 0x119409c0 */
  push32(0x11941f5au); f_119409c0();
  /* 11941f5a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11941f60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11941f63:;
  /* 11941f63 mov esp, ebp */
  ESP = (EBP);
  /* 11941f65 pop ebp */
  EBP = (pop32());
  /* 11941f66 ret  */
  ESPCHK(0x11941eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f70 @ 0x11941f70 (216 bytes, 63 insns) */
void f_11941f70(void) {
  FTRACE(0x11941f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11941f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11941f71 mov ebp, esp */
  EBP = (ESP);
  /* 11941f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11941f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941f77 cmp eax, dword ptr [0x1196735c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1196735c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941f7d jae 0x1194202b */
  if (!C.cf) goto L_1194202b;
  /* 11941f83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941f86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11941f89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941f8c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11941f8f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941f92 mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 11941f99 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11941f9e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11941fa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11941fa3 je 0x1194202b */
  if (C.zf) goto L_1194202b;
  /* 11941fa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941fac sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11941faf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941fb2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11941fb5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11941fb8 mov ecx, dword ptr [edx*4 + 0x11967220] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11967220)));
  /* 11941fbf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941fc3 je 0x1194202b */
  if (C.zf) goto L_1194202b;
  /* 11941fc5 cmp dword ptr [0x11965844], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11965844))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941fcc jne 0x1194200a */
  if (!C.zf) goto L_1194200a;
  /* 11941fce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11941fd1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11941fd4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941fd8 je 0x11941fe8 */
  if (C.zf) goto L_11941fe8;
  /* 11941fda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941fde je 0x11941ff4 */
  if (C.zf) goto L_11941ff4;
  /* 11941fe0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11941fe4 je 0x11942000 */
  if (C.zf) goto L_11942000;
  /* 11941fe6 jmp 0x1194200a */
  goto L_1194200a;
L_11941fe8:;
  /* 11941fe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11941fea push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11941fec call dword ptr [0x11968310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968310))), 0x11941ff2u);
  /* 11941ff2 jmp 0x1194200a */
  goto L_1194200a;
L_11941ff4:;
  /* 11941ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11941ff6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11941ff8 call dword ptr [0x11968310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968310))), 0x11941ffeu);
  /* 11941ffe jmp 0x1194200a */
  goto L_1194200a;
L_11942000:;
  /* 11942000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11942002 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11942004 call dword ptr [0x11968310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968310))), 0x1194200au);
L_1194200a:;
  /* 1194200a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194200d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11942010 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942013 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11942016 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942019 mov edx, dword ptr [eax*4 + 0x11967220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 11942020 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11942027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942029 jmp 0x11942044 */
  goto L_11942044;
L_1194202b:;
  /* 1194202b call 0x119409b0 */
  push32(0x11942030u); f_119409b0();
  /* 11942030 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11942036 call 0x119409c0 */
  push32(0x1194203bu); f_119409c0();
  /* 1194203b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11942041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11942044:;
  /* 11942044 mov esp, ebp */
  ESP = (EBP);
  /* 11942046 pop ebp */
  EBP = (pop32());
  /* 11942047 ret  */
  ESPCHK(0x11941f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012050 @ 0x11942050 (102 bytes, 30 insns) */
void f_11942050(void) {
  FTRACE(0x11942050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942050 push ebp */
  push32((uint32_t)(EBP));
  /* 11942051 mov ebp, esp */
  EBP = (ESP);
  /* 11942053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942056 cmp eax, dword ptr [0x1196735c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1196735c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194205c jae 0x1194209b */
  if (!C.cf) goto L_1194209b;
  /* 1194205e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942061 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11942064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942067 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1194206a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194206d mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 11942074 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11942079 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1194207c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1194207e je 0x1194209b */
  if (C.zf) goto L_1194209b;
  /* 11942080 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942083 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11942086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942089 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1194208c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194208f mov ecx, dword ptr [edx*4 + 0x11967220] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11967220)));
  /* 11942096 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11942099 jmp 0x119420b4 */
  goto L_119420b4;
L_1194209b:;
  /* 1194209b call 0x119409b0 */
  push32(0x119420a0u); f_119409b0();
  /* 119420a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119420a6 call 0x119409c0 */
  push32(0x119420abu); f_119409c0();
  /* 119420ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119420b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_119420b4:;
  /* 119420b4 pop ebp */
  EBP = (pop32());
  /* 119420b5 ret  */
  ESPCHK(0x11942050u, _esp0);
  ESP += 4; return;
}

/* FUN_100120c0 @ 0x119420c0 (260 bytes, 83 insns) */
void f_119420c0(void) {
  FTRACE(0x119420c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119420c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119420c1 mov ebp, esp */
  EBP = (ESP);
  /* 119420c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119420c6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 119420ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119420cd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 119420d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119420d2 je 0x119420dd */
  if (C.zf) goto L_119420dd;
  /* 119420d4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 119420d7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 119420da mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_119420dd:;
  /* 119420dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119420e0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 119420e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119420e8 je 0x119420f2 */
  if (C.zf) goto L_119420f2;
  /* 119420ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 119420ed or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 119420ef mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_119420f2:;
  /* 119420f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119420f5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 119420fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119420fd je 0x11942108 */
  if (C.zf) goto L_11942108;
  /* 119420ff mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11942102 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11942105 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11942108:;
  /* 11942108 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194210b push eax */
  push32((uint32_t)(EAX));
  /* 1194210c call dword ptr [0x119683e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683e8))), 0x11942112u);
  /* 11942112 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11942115 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942119 jne 0x11942132 */
  if (!C.zf) goto L_11942132;
  /* 1194211b call dword ptr [0x119683dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683dc))), 0x11942121u);
  /* 11942121 push eax */
  push32((uint32_t)(EAX));
  /* 11942122 call 0x11940910 */
  push32(0x11942127u); f_11940910();
  /* 11942127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194212a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1194212d jmp 0x119421c0 */
  goto L_119421c0;
L_11942132:;
  /* 11942132 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942136 jne 0x11942143 */
  if (!C.zf) goto L_11942143;
  /* 11942138 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1194213b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1194213e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11942141 jmp 0x11942152 */
  goto L_11942152;
L_11942143:;
  /* 11942143 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942147 jne 0x11942152 */
  if (!C.zf) goto L_11942152;
  /* 11942149 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1194214c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1194214f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11942152:;
  /* 11942152 call 0x11941cc0 */
  push32(0x11942157u); f_11941cc0();
  /* 11942157 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1194215a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194215e jne 0x1194217b */
  if (!C.zf) goto L_1194217b;
  /* 11942160 call 0x119409b0 */
  push32(0x11942165u); f_119409b0();
  /* 11942165 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1194216b call 0x119409c0 */
  push32(0x11942170u); f_119409c0();
  /* 11942170 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11942176 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11942179 jmp 0x119421c0 */
  goto L_119421c0;
L_1194217b:;
  /* 1194217b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194217e push eax */
  push32((uint32_t)(EAX));
  /* 1194217f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942182 push ecx */
  push32((uint32_t)(ECX));
  /* 11942183 call 0x11941eb0 */
  push32(0x11942188u); f_11941eb0();
  /* 11942188 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194218b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1194218e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11942191 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11942194 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942197 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1194219a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194219d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119421a0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119421a3 mov edx, dword ptr [eax*4 + 0x11967220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 119421aa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 119421ad mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 119421b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119421b4 push ecx */
  push32((uint32_t)(ECX));
  /* 119421b5 call 0x11942260 */
  push32(0x119421bau); f_11942260();
  /* 119421ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119421bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_119421c0:;
  /* 119421c0 mov esp, ebp */
  ESP = (EBP);
  /* 119421c2 pop ebp */
  EBP = (pop32());
  /* 119421c3 ret  */
  ESPCHK(0x119420c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100121d0 @ 0x119421d0 (134 bytes, 44 insns) */
void f_119421d0(void) {
  FTRACE(0x119421d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119421d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119421d1 mov ebp, esp */
  EBP = (ESP);
  /* 119421d3 push ecx */
  push32((uint32_t)(ECX));
  /* 119421d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119421d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119421da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119421dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119421e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119421e3 mov edx, dword ptr [eax*4 + 0x11967220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 119421ea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119421ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119421ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119421f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119421f6 jne 0x11942231 */
  if (!C.zf) goto L_11942231;
  /* 119421f8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119421fa call 0x1193c4e0 */
  push32(0x119421ffu); f_1193c4e0();
  /* 119421ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942202 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942205 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942209 jne 0x11942227 */
  if (!C.zf) goto L_11942227;
  /* 1194220b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194220e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942211 push edx */
  push32((uint32_t)(EDX));
  /* 11942212 call dword ptr [0x11968358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968358))), 0x11942218u);
  /* 11942218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194221b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1194221e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942224 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11942227:;
  /* 11942227 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11942229 call 0x1193c580 */
  push32(0x1194222eu); f_1193c580();
  /* 1194222e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11942231:;
  /* 11942231 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942234 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11942237 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194223a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1194223d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942240 mov edx, dword ptr [eax*4 + 0x11967220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 11942247 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1194224b push eax */
  push32((uint32_t)(EAX));
  /* 1194224c call dword ptr [0x11968354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968354))), 0x11942252u);
  /* 11942252 mov esp, ebp */
  ESP = (EBP);
  /* 11942254 pop ebp */
  EBP = (pop32());
  /* 11942255 ret  */
  ESPCHK(0x119421d0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11942260 (38 bytes, 13 insns) */
void f_11942260(void) {
  FTRACE(0x11942260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942260 push ebp */
  push32((uint32_t)(EBP));
  /* 11942261 mov ebp, esp */
  EBP = (ESP);
  /* 11942263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942266 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11942269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194226c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1194226f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942272 mov edx, dword ptr [eax*4 + 0x11967220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 11942279 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1194227d push eax */
  push32((uint32_t)(EAX));
  /* 1194227e call dword ptr [0x11968350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968350))), 0x11942284u);
  /* 11942284 pop ebp */
  EBP = (pop32());
  /* 11942285 ret  */
  ESPCHK(0x11942260u, _esp0);
  ESP += 4; return;
}

/* FUN_10012290 @ 0x11942290 (218 bytes, 63 insns) */
void f_11942290(void) {
  FTRACE(0x11942290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942290 push ebp */
  push32((uint32_t)(EBP));
  /* 11942291 mov ebp, esp */
  EBP = (ESP);
  /* 11942293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942296 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1194229d push 2 */
  push32((uint32_t)(0x2u));
  /* 1194229f call 0x1193c4e0 */
  push32(0x119422a4u); f_1193c4e0();
  /* 119422a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119422a7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 119422ae jmp 0x119422b9 */
  goto L_119422b9;
L_119422b0:;
  /* 119422b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119422b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119422b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119422b9:;
  /* 119422b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119422bc cmp ecx, dword ptr [0x11966f20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11966f20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119422c2 jge 0x11942359 */
  if ((C.sf==C.of)) goto L_11942359;
  /* 119422c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119422cb mov eax, dword ptr [0x11965be0] */
  EAX = (r32((uint32_t)(0x11965be0)));
  /* 119422d0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119422d4 je 0x11942354 */
  if (C.zf) goto L_11942354;
  /* 119422d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119422d9 mov edx, dword ptr [0x11965be0] */
  EDX = (r32((uint32_t)(0x11965be0)));
  /* 119422df mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 119422e2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119422e5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 119422eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119422ed je 0x11942311 */
  if (C.zf) goto L_11942311;
  /* 119422ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119422f2 mov eax, dword ptr [0x11965be0] */
  EAX = (r32((uint32_t)(0x11965be0)));
  /* 119422f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119422fa push ecx */
  push32((uint32_t)(ECX));
  /* 119422fb call 0x11943080 */
  push32(0x11942300u); f_11943080();
  /* 11942300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942303 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942306 je 0x11942311 */
  if (C.zf) goto L_11942311;
  /* 11942308 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194230b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194230e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11942311:;
  /* 11942311 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942315 jl 0x11942354 */
  if ((C.sf!=C.of)) goto L_11942354;
  /* 11942317 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194231a mov ecx, dword ptr [0x11965be0] */
  ECX = (r32((uint32_t)(0x11965be0)));
  /* 11942320 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11942323 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942326 push edx */
  push32((uint32_t)(EDX));
  /* 11942327 call dword ptr [0x119683bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683bc))), 0x1194232du);
  /* 1194232d push 2 */
  push32((uint32_t)(0x2u));
  /* 1194232f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942332 mov ecx, dword ptr [0x11965be0] */
  ECX = (r32((uint32_t)(0x11965be0)));
  /* 11942338 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1194233b push edx */
  push32((uint32_t)(EDX));
  /* 1194233c call 0x11939570 */
  push32(0x11942341u); f_11939570();
  /* 11942341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942344 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942347 mov ecx, dword ptr [0x11965be0] */
  ECX = (r32((uint32_t)(0x11965be0)));
  /* 1194234d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11942354:;
  /* 11942354 jmp 0x119422b0 */
  goto L_119422b0;
L_11942359:;
  /* 11942359 push 2 */
  push32((uint32_t)(0x2u));
  /* 1194235b call 0x1193c580 */
  push32(0x11942360u); f_1193c580();
  /* 11942360 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942366 mov esp, ebp */
  ESP = (EBP);
  /* 11942368 pop ebp */
  EBP = (pop32());
  /* 11942369 ret  */
  ESPCHK(0x11942290u, _esp0);
  ESP += 4; return;
}

/* FUN_10012370 @ 0x11942370 (68 bytes, 26 insns) */
void f_11942370(void) {
  FTRACE(0x11942370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942370 push ebp */
  push32((uint32_t)(EBP));
  /* 11942371 mov ebp, esp */
  EBP = (ESP);
  /* 11942373 push ecx */
  push32((uint32_t)(ECX));
  /* 11942374 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942378 jne 0x11942386 */
  if (!C.zf) goto L_11942386;
  /* 1194237a push 0 */
  push32((uint32_t)(0x0u));
  /* 1194237c call 0x119424e0 */
  push32(0x11942381u); f_119424e0();
  /* 11942381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942384 jmp 0x119423b0 */
  goto L_119423b0;
L_11942386:;
  /* 11942386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942389 push eax */
  push32((uint32_t)(EAX));
  /* 1194238a call 0x119418f0 */
  push32(0x1194238fu); f_119418f0();
  /* 1194238f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942392 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942395 push ecx */
  push32((uint32_t)(ECX));
  /* 11942396 call 0x119423c0 */
  push32(0x1194239bu); f_119423c0();
  /* 1194239b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194239e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119423a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119423a4 push edx */
  push32((uint32_t)(EDX));
  /* 119423a5 call 0x11941960 */
  push32(0x119423aau); f_11941960();
  /* 119423aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119423ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119423b0:;
  /* 119423b0 mov esp, ebp */
  ESP = (EBP);
  /* 119423b2 pop ebp */
  EBP = (pop32());
  /* 119423b3 ret  */
  ESPCHK(0x11942370u, _esp0);
  ESP += 4; return;
}

/* FUN_100123c0 @ 0x119423c0 (65 bytes, 26 insns) */
void f_119423c0(void) {
  FTRACE(0x119423c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119423c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119423c1 mov ebp, esp */
  EBP = (ESP);
  /* 119423c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119423c6 push eax */
  push32((uint32_t)(EAX));
  /* 119423c7 call 0x11942410 */
  push32(0x119423ccu); f_11942410();
  /* 119423cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119423cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119423d1 je 0x119423d8 */
  if (C.zf) goto L_119423d8;
  /* 119423d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119423d6 jmp 0x119423ff */
  goto L_119423ff;
L_119423d8:;
  /* 119423d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119423db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119423de and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 119423e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119423e6 je 0x119423fd */
  if (C.zf) goto L_119423fd;
  /* 119423e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119423eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119423ee push ecx */
  push32((uint32_t)(ECX));
  /* 119423ef call 0x119431d0 */
  push32(0x119423f4u); f_119431d0();
  /* 119423f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119423f7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119423f9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119423fb jmp 0x119423ff */
  goto L_119423ff;
L_119423fd:;
  /* 119423fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119423ff:;
  /* 119423ff pop ebp */
  EBP = (pop32());
  /* 11942400 ret  */
  ESPCHK(0x119423c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012410 @ 0x11942410 (183 bytes, 62 insns) */
void f_11942410(void) {
  FTRACE(0x11942410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942410 push ebp */
  push32((uint32_t)(EBP));
  /* 11942411 mov ebp, esp */
  EBP = (ESP);
  /* 11942413 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942416 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1194241d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942420 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11942423 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942426 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11942429 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1194242c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194242f jne 0x119424ab */
  if (!C.zf) goto L_119424ab;
  /* 11942431 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942434 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11942437 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1194243d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1194243f je 0x119424ab */
  if (C.zf) goto L_119424ab;
  /* 11942441 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942444 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942447 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11942449 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194244c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194244f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942453 jle 0x119424ab */
  if ((C.zf||C.sf!=C.of)) goto L_119424ab;
  /* 11942455 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942458 push edx */
  push32((uint32_t)(EDX));
  /* 11942459 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194245c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1194245f push ecx */
  push32((uint32_t)(ECX));
  /* 11942460 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942463 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11942466 push eax */
  push32((uint32_t)(EAX));
  /* 11942467 call 0x11941380 */
  push32(0x1194246cu); f_11941380();
  /* 1194246c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194246f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942472 jne 0x11942495 */
  if (!C.zf) goto L_11942495;
  /* 11942474 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942477 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1194247a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11942480 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11942482 je 0x11942493 */
  if (C.zf) goto L_11942493;
  /* 11942484 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942487 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1194248a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1194248d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942490 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11942493:;
  /* 11942493 jmp 0x119424ab */
  goto L_119424ab;
L_11942495:;
  /* 11942495 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942498 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1194249b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1194249e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119424a1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 119424a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119424ab:;
  /* 119424ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119424ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119424b1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119424b4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119424b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119424b9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 119424c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119424c3 mov esp, ebp */
  ESP = (EBP);
  /* 119424c5 pop ebp */
  EBP = (pop32());
  /* 119424c6 ret  */
  ESPCHK(0x11942410u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x119424d0 (15 bytes, 7 insns) */
void f_119424d0(void) {
  FTRACE(0x119424d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119424d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119424d1 mov ebp, esp */
  EBP = (ESP);
  /* 119424d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119424d5 call 0x119424e0 */
  push32(0x119424dau); f_119424e0();
  /* 119424da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119424dd pop ebp */
  EBP = (pop32());
  /* 119424de ret  */
  ESPCHK(0x119424d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124e0 @ 0x119424e0 (319 bytes, 94 insns) */
void f_119424e0(void) {
  FTRACE(0x119424e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119424e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119424e1 mov ebp, esp */
  EBP = (ESP);
  /* 119424e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119424e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119424ed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119424f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 119424f6 call 0x1193c4e0 */
  push32(0x119424fbu); f_1193c4e0();
  /* 119424fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119424fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11942505 jmp 0x11942510 */
  goto L_11942510;
L_11942507:;
  /* 11942507 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194250a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194250d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11942510:;
  /* 11942510 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942513 cmp ecx, dword ptr [0x11966f20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11966f20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942519 jge 0x11942603 */
  if ((C.sf==C.of)) goto L_11942603;
  /* 1194251f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942522 mov eax, dword ptr [0x11965be0] */
  EAX = (r32((uint32_t)(0x11965be0)));
  /* 11942527 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194252b je 0x119425fe */
  if (C.zf) goto L_119425fe;
  /* 11942531 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942534 mov edx, dword ptr [0x11965be0] */
  EDX = (r32((uint32_t)(0x11965be0)));
  /* 1194253a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1194253d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11942540 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11942546 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11942548 je 0x119425fe */
  if (C.zf) goto L_119425fe;
  /* 1194254e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942551 mov eax, dword ptr [0x11965be0] */
  EAX = (r32((uint32_t)(0x11965be0)));
  /* 11942556 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11942559 push ecx */
  push32((uint32_t)(ECX));
  /* 1194255a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194255d push edx */
  push32((uint32_t)(EDX));
  /* 1194255e call 0x11941930 */
  push32(0x11942563u); f_11941930();
  /* 11942563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942566 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942569 mov ecx, dword ptr [0x11965be0] */
  ECX = (r32((uint32_t)(0x11965be0)));
  /* 1194256f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11942572 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11942575 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1194257a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194257c je 0x119425e5 */
  if (C.zf) goto L_119425e5;
  /* 1194257e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942582 jne 0x119425a9 */
  if (!C.zf) goto L_119425a9;
  /* 11942584 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942587 mov edx, dword ptr [0x11965be0] */
  EDX = (r32((uint32_t)(0x11965be0)));
  /* 1194258d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11942590 push eax */
  push32((uint32_t)(EAX));
  /* 11942591 call 0x119423c0 */
  push32(0x11942596u); f_119423c0();
  /* 11942596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942599 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194259c je 0x119425a7 */
  if (C.zf) goto L_119425a7;
  /* 1194259e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119425a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119425a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119425a7:;
  /* 119425a7 jmp 0x119425e5 */
  goto L_119425e5;
L_119425a9:;
  /* 119425a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119425ad jne 0x119425e5 */
  if (!C.zf) goto L_119425e5;
  /* 119425af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119425b2 mov eax, dword ptr [0x11965be0] */
  EAX = (r32((uint32_t)(0x11965be0)));
  /* 119425b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119425ba mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119425bd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 119425c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119425c2 je 0x119425e5 */
  if (C.zf) goto L_119425e5;
  /* 119425c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119425c7 mov ecx, dword ptr [0x11965be0] */
  ECX = (r32((uint32_t)(0x11965be0)));
  /* 119425cd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119425d0 push edx */
  push32((uint32_t)(EDX));
  /* 119425d1 call 0x119423c0 */
  push32(0x119425d6u); f_119423c0();
  /* 119425d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119425d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119425dc jne 0x119425e5 */
  if (!C.zf) goto L_119425e5;
  /* 119425de mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_119425e5:;
  /* 119425e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119425e8 mov ecx, dword ptr [0x11965be0] */
  ECX = (r32((uint32_t)(0x11965be0)));
  /* 119425ee mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119425f1 push edx */
  push32((uint32_t)(EDX));
  /* 119425f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119425f5 push eax */
  push32((uint32_t)(EAX));
  /* 119425f6 call 0x119419a0 */
  push32(0x119425fbu); f_119419a0();
  /* 119425fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119425fe:;
  /* 119425fe jmp 0x11942507 */
  goto L_11942507;
L_11942603:;
  /* 11942603 push 2 */
  push32((uint32_t)(0x2u));
  /* 11942605 call 0x1193c580 */
  push32(0x1194260au); f_1193c580();
  /* 1194260a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194260d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942611 jne 0x11942618 */
  if (!C.zf) goto L_11942618;
  /* 11942613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942616 jmp 0x1194261b */
  goto L_1194261b;
L_11942618:;
  /* 11942618 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1194261b:;
  /* 1194261b mov esp, ebp */
  ESP = (EBP);
  /* 1194261d pop ebp */
  EBP = (pop32());
  /* 1194261e ret  */
  ESPCHK(0x119424e0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11942620 (15 bytes, 7 insns) */
void f_11942620(void) {
  FTRACE(0x11942620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942620 push ebp */
  push32((uint32_t)(EBP));
  /* 11942621 mov ebp, esp */
  EBP = (ESP);
  /* 11942623 push 2 */
  push32((uint32_t)(0x2u));
  /* 11942625 call 0x11937a50 */
  push32(0x1194262au); f_11937a50();
  /* 1194262a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194262d pop ebp */
  EBP = (pop32());
  /* 1194262e ret  */
  ESPCHK(0x11942620u, _esp0);
  ESP += 4; return;
}

/* FUN_10012630 @ 0x11942630 (1007 bytes, 269 insns) */
void f_11942630(void) {
  FTRACE(0x11942630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942630 push ebp */
  push32((uint32_t)(EBP));
  /* 11942631 mov ebp, esp */
  EBP = (ESP);
  /* 11942633 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942639 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194263d jl 0x11942645 */
  if ((C.sf!=C.of)) goto L_11942645;
  /* 1194263f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942643 jle 0x1194264c */
  if ((C.zf||C.sf!=C.of)) goto L_1194264c;
L_11942645:;
  /* 11942645 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942647 jmp 0x11942a1b */
  goto L_11942a1b;
L_1194264c:;
  /* 1194264c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1194264e call 0x1193c4e0 */
  push32(0x11942653u); f_1193c4e0();
  /* 11942653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942656 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1194265d mov eax, dword ptr [0x11965bcc] */
  EAX = (r32((uint32_t)(0x11965bcc)));
  /* 11942662 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942665 mov dword ptr [0x11965bcc], eax */
  w32((uint32_t)(0x11965bcc), (EAX));
L_1194266a:;
  /* 1194266a cmp dword ptr [0x11965bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942671 je 0x1194267d */
  if (C.zf) goto L_1194267d;
  /* 11942673 push 1 */
  push32((uint32_t)(0x1u));
  /* 11942675 call dword ptr [0x1196830c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196830c))), 0x1194267bu);
  /* 1194267b jmp 0x1194266a */
  goto L_1194266a;
L_1194267d:;
  /* 1194267d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942681 je 0x119426c1 */
  if (C.zf) goto L_119426c1;
  /* 11942683 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942687 je 0x119426a1 */
  if (C.zf) goto L_119426a1;
  /* 11942689 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194268c push ecx */
  push32((uint32_t)(ECX));
  /* 1194268d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942690 push edx */
  push32((uint32_t)(EDX));
  /* 11942691 call 0x11942a20 */
  push32(0x11942696u); f_11942a20();
  /* 11942696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942699 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1194269f jmp 0x119426b3 */
  goto L_119426b3;
L_119426a1:;
  /* 119426a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119426a4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119426a7 mov ecx, dword ptr [eax + 0x119644dc] */
  ECX = (r32((uint32_t)(EAX + 0x119644dc)));
  /* 119426ad mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_119426b3:;
  /* 119426b3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 119426b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119426bc jmp 0x119429fb */
  goto L_119429fb;
L_119426c1:;
  /* 119426c1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 119426c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119426cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119426d3 je 0x119429f3 */
  if (C.zf) goto L_119429f3;
  /* 119426d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119426dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119426df cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119426e2 jne 0x11942904 */
  if (!C.zf) goto L_11942904;
  /* 119426e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119426eb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 119426ef cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119426f2 jne 0x11942904 */
  if (!C.zf) goto L_11942904;
  /* 119426f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119426fb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 119426ff cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942702 jne 0x11942904 */
  if (!C.zf) goto L_11942904;
  /* 11942708 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194270b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11942711:;
  /* 11942711 push 0x11960f64 */
  push32((uint32_t)(0x11960f64u));
  /* 11942716 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1194271c push ecx */
  push32((uint32_t)(ECX));
  /* 1194271d call 0x11944880 */
  push32(0x11942722u); f_11944880();
  /* 11942722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942725 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1194272b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942732 je 0x1194275d */
  if (C.zf) goto L_1194275d;
  /* 11942734 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1194273a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942740 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11942746 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194274d je 0x1194275d */
  if (C.zf) goto L_1194275d;
  /* 1194274f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11942755 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11942758 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194275b jne 0x11942783 */
  if (!C.zf) goto L_11942783;
L_1194275d:;
  /* 1194275d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942761 je 0x1194277c */
  if (C.zf) goto L_1194277c;
  /* 11942763 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11942765 call 0x1193c580 */
  push32(0x1194276au); f_1193c580();
  /* 1194276a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194276d mov edx, dword ptr [0x11965bcc] */
  EDX = (r32((uint32_t)(0x11965bcc)));
  /* 11942773 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942776 mov dword ptr [0x11965bcc], edx */
  w32((uint32_t)(0x11965bcc), (EDX));
L_1194277c:;
  /* 1194277c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194277e jmp 0x11942a1b */
  goto L_11942a1b;
L_11942783:;
  /* 11942783 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1194278a jmp 0x11942795 */
  goto L_11942795;
L_1194278c:;
  /* 1194278c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1194278f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942792 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11942795:;
  /* 11942795 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942799 jg 0x119427e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_119427e3;
  /* 1194279b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 119427a1 push ecx */
  push32((uint32_t)(ECX));
  /* 119427a2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119427a8 push edx */
  push32((uint32_t)(EDX));
  /* 119427a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119427ac imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119427af mov ecx, dword ptr [eax + 0x119644d8] */
  ECX = (r32((uint32_t)(EAX + 0x119644d8)));
  /* 119427b5 push ecx */
  push32((uint32_t)(ECX));
  /* 119427b6 call 0x11944840 */
  push32(0x119427bbu); f_11944840();
  /* 119427bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119427be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119427c0 jne 0x119427e1 */
  if (!C.zf) goto L_119427e1;
  /* 119427c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119427c5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119427c8 mov eax, dword ptr [edx + 0x119644d8] */
  EAX = (r32((uint32_t)(EDX + 0x119644d8)));
  /* 119427ce push eax */
  push32((uint32_t)(EAX));
  /* 119427cf call 0x1193b910 */
  push32(0x119427d4u); f_1193b910();
  /* 119427d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119427d7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119427dd jne 0x119427e1 */
  if (!C.zf) goto L_119427e1;
  /* 119427df jmp 0x119427e3 */
  goto L_119427e3;
L_119427e1:;
  /* 119427e1 jmp 0x1194278c */
  goto L_1194278c;
L_119427e3:;
  /* 119427e3 push 0x11960f60 */
  push32((uint32_t)(0x11960f60u));
  /* 119427e8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119427ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119427f1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 119427f7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119427fd push edx */
  push32((uint32_t)(EDX));
  /* 119427fe call 0x11944800 */
  push32(0x11942803u); f_11944800();
  /* 11942803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942806 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1194280c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942813 jne 0x11942849 */
  if (!C.zf) goto L_11942849;
  /* 11942815 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1194281b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1194281e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942821 je 0x11942849 */
  if (C.zf) goto L_11942849;
  /* 11942823 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942827 je 0x11942842 */
  if (C.zf) goto L_11942842;
  /* 11942829 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1194282b call 0x1193c580 */
  push32(0x11942830u); f_1193c580();
  /* 11942830 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942833 mov edx, dword ptr [0x11965bcc] */
  EDX = (r32((uint32_t)(0x11965bcc)));
  /* 11942839 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194283c mov dword ptr [0x11965bcc], edx */
  w32((uint32_t)(0x11965bcc), (EDX));
L_11942842:;
  /* 11942842 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942844 jmp 0x11942a1b */
  goto L_11942a1b;
L_11942849:;
  /* 11942849 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194284d jg 0x1194289a */
  if ((!C.zf&&C.sf==C.of)) goto L_1194289a;
  /* 1194284f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11942855 push eax */
  push32((uint32_t)(EAX));
  /* 11942856 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1194285c push ecx */
  push32((uint32_t)(ECX));
  /* 1194285d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11942863 push edx */
  push32((uint32_t)(EDX));
  /* 11942864 call 0x1193c300 */
  push32(0x11942869u); f_1193c300();
  /* 11942869 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194286c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11942872 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1194287a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11942880 push ecx */
  push32((uint32_t)(ECX));
  /* 11942881 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11942884 push edx */
  push32((uint32_t)(EDX));
  /* 11942885 call 0x11942a20 */
  push32(0x1194288au); f_11942a20();
  /* 1194288a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194288d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194288f je 0x1194289a */
  if (C.zf) goto L_1194289a;
  /* 11942891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942894 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942897 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1194289a:;
  /* 1194289a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119428a0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119428a6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 119428ac mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119428b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119428b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119428b7 je 0x119428c8 */
  if (C.zf) goto L_119428c8;
  /* 119428b9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119428bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119428c2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_119428c8:;
  /* 119428c8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119428ce movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119428d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119428d3 jne 0x11942711 */
  if (!C.zf) goto L_11942711;
  /* 119428d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119428dd je 0x119428ec */
  if (C.zf) goto L_119428ec;
  /* 119428df call 0x11942bc0 */
  push32(0x119428e4u); f_11942bc0();
  /* 119428e4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 119428ea jmp 0x119428f6 */
  goto L_119428f6;
L_119428ec:;
  /* 119428ec mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_119428f6:;
  /* 119428f6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 119428fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119428ff jmp 0x119429f1 */
  goto L_119429f1;
L_11942904:;
  /* 11942904 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942907 push edx */
  push32((uint32_t)(EDX));
  /* 11942908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1194290a push 0 */
  push32((uint32_t)(0x0u));
  /* 1194290c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11942912 push eax */
  push32((uint32_t)(EAX));
  /* 11942913 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942916 push ecx */
  push32((uint32_t)(ECX));
  /* 11942917 call 0x11942cc0 */
  push32(0x1194291cu); f_11942cc0();
  /* 1194291c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194291f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11942922 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942926 je 0x119429f1 */
  if (C.zf) goto L_119429f1;
  /* 1194292c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11942933 jmp 0x1194293e */
  goto L_1194293e;
L_11942935:;
  /* 11942935 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11942938 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194293b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1194293e:;
  /* 1194293e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942942 jg 0x119429a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_119429a0;
  /* 11942944 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942948 je 0x1194299e */
  if (C.zf) goto L_1194299e;
  /* 1194294a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1194294d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942950 mov ecx, dword ptr [eax + 0x119644dc] */
  ECX = (r32((uint32_t)(EAX + 0x119644dc)));
  /* 11942956 push ecx */
  push32((uint32_t)(ECX));
  /* 11942957 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1194295d push edx */
  push32((uint32_t)(EDX));
  /* 1194295e call 0x11944770 */
  push32(0x11942963u); f_11944770();
  /* 11942963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942968 je 0x11942995 */
  if (C.zf) goto L_11942995;
  /* 1194296a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11942970 push eax */
  push32((uint32_t)(EAX));
  /* 11942971 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11942974 push ecx */
  push32((uint32_t)(ECX));
  /* 11942975 call 0x11942a20 */
  push32(0x1194297au); f_11942a20();
  /* 1194297a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194297d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194297f je 0x1194298c */
  if (C.zf) goto L_1194298c;
  /* 11942981 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942984 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942987 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1194298a jmp 0x11942993 */
  goto L_11942993;
L_1194298c:;
  /* 1194298c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11942993:;
  /* 11942993 jmp 0x1194299e */
  goto L_1194299e;
L_11942995:;
  /* 11942995 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942998 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194299b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1194299e:;
  /* 1194299e jmp 0x11942935 */
  goto L_11942935;
L_119429a0:;
  /* 119429a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119429a4 je 0x119429cb */
  if (C.zf) goto L_119429cb;
  /* 119429a6 call 0x11942bc0 */
  push32(0x119429abu); f_11942bc0();
  /* 119429ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119429ae push 2 */
  push32((uint32_t)(0x2u));
  /* 119429b0 mov ecx, dword ptr [0x119644dc] */
  ECX = (r32((uint32_t)(0x119644dc)));
  /* 119429b6 push ecx */
  push32((uint32_t)(ECX));
  /* 119429b7 call 0x11939570 */
  push32(0x119429bcu); f_11939570();
  /* 119429bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119429bf mov dword ptr [0x119644dc], 0 */
  w32((uint32_t)(0x119644dc), (0x0u));
  /* 119429c9 jmp 0x119429f1 */
  goto L_119429f1;
L_119429cb:;
  /* 119429cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119429cf je 0x119429de */
  if (C.zf) goto L_119429de;
  /* 119429d1 call 0x11942bc0 */
  push32(0x119429d6u); f_11942bc0();
  /* 119429d6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 119429dc jmp 0x119429e8 */
  goto L_119429e8;
L_119429de:;
  /* 119429de mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_119429e8:;
  /* 119429e8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 119429ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119429f1:;
  /* 119429f1 jmp 0x119429fb */
  goto L_119429fb;
L_119429f3:;
  /* 119429f3 call 0x11942bc0 */
  push32(0x119429f8u); f_11942bc0();
  /* 119429f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119429fb:;
  /* 119429fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119429ff je 0x11942a18 */
  if (C.zf) goto L_11942a18;
  /* 11942a01 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11942a03 call 0x1193c580 */
  push32(0x11942a08u); f_1193c580();
  /* 11942a08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942a0b mov eax, dword ptr [0x11965bcc] */
  EAX = (r32((uint32_t)(0x11965bcc)));
  /* 11942a10 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942a13 mov dword ptr [0x11965bcc], eax */
  w32((uint32_t)(0x11965bcc), (EAX));
L_11942a18:;
  /* 11942a18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11942a1b:;
  /* 11942a1b mov esp, ebp */
  ESP = (EBP);
  /* 11942a1d pop ebp */
  EBP = (pop32());
  /* 11942a1e ret  */
  ESPCHK(0x11942630u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a20 @ 0x11942a20 (403 bytes, 117 insns) */
void f_11942a20(void) {
  FTRACE(0x11942a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11942a21 mov ebp, esp */
  EBP = (ESP);
  /* 11942a23 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942a29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942a2c push eax */
  push32((uint32_t)(EAX));
  /* 11942a2d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11942a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11942a34 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11942a3a push edx */
  push32((uint32_t)(EDX));
  /* 11942a3b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11942a41 push eax */
  push32((uint32_t)(EAX));
  /* 11942a42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942a45 push ecx */
  push32((uint32_t)(ECX));
  /* 11942a46 call 0x11942cc0 */
  push32(0x11942a4bu); f_11942cc0();
  /* 11942a4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942a4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942a50 jne 0x11942a59 */
  if (!C.zf) goto L_11942a59;
  /* 11942a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942a54 jmp 0x11942baf */
  goto L_11942baf;
L_11942a59:;
  /* 11942a59 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11942a5e push 0x11960f68 */
  push32((uint32_t)(0x11960f68u));
  /* 11942a63 push 2 */
  push32((uint32_t)(0x2u));
  /* 11942a65 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11942a6b push edx */
  push32((uint32_t)(EDX));
  /* 11942a6c call 0x1193b910 */
  push32(0x11942a71u); f_1193b910();
  /* 11942a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942a74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942a77 push eax */
  push32((uint32_t)(EAX));
  /* 11942a78 call 0x11938ae0 */
  push32(0x11942a7du); f_11938ae0();
  /* 11942a7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942a80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11942a83 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942a87 jne 0x11942a90 */
  if (!C.zf) goto L_11942a90;
  /* 11942a89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942a8b jmp 0x11942baf */
  goto L_11942baf;
L_11942a90:;
  /* 11942a90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942a93 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942a96 mov ecx, dword ptr [eax + 0x119644dc] */
  ECX = (r32((uint32_t)(EAX + 0x119644dc)));
  /* 11942a9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11942a9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942aa2 mov eax, dword ptr [edx*4 + 0x11965a48] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11965a48)));
  /* 11942aa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11942aac push 6 */
  push32((uint32_t)(0x6u));
  /* 11942aae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942ab1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942ab4 add ecx, 0x11965a98 */
  { uint32_t _a=(ECX),_b=(0x11965a98u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942aba push ecx */
  push32((uint32_t)(ECX));
  /* 11942abb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11942abe push edx */
  push32((uint32_t)(EDX));
  /* 11942abf call 0x1193f3c0 */
  push32(0x11942ac4u); f_1193f3c0();
  /* 11942ac4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942ac7 mov eax, dword ptr [0x11965a60] */
  EAX = (r32((uint32_t)(0x11965a60)));
  /* 11942acc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11942acf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11942ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 11942ad6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942ad9 push edx */
  push32((uint32_t)(EDX));
  /* 11942ada call 0x1193ba90 */
  push32(0x11942adfu); f_1193ba90();
  /* 11942adf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942ae2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942ae5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942ae8 mov dword ptr [ecx + 0x119644dc], eax */
  w32((uint32_t)(ECX + 0x119644dc), (EAX));
  /* 11942aee mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11942af4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11942afa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942afd mov dword ptr [eax*4 + 0x11965a48], edx */
  w32((uint32_t)(EAX*4 + 0x11965a48), (EDX));
  /* 11942b04 push 6 */
  push32((uint32_t)(0x6u));
  /* 11942b06 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11942b0c push ecx */
  push32((uint32_t)(ECX));
  /* 11942b0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942b10 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942b13 add edx, 0x11965a98 */
  { uint32_t _a=(EDX),_b=(0x11965a98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942b19 push edx */
  push32((uint32_t)(EDX));
  /* 11942b1a call 0x1193f3c0 */
  push32(0x11942b1fu); f_1193f3c0();
  /* 11942b1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942b22 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942b26 jne 0x11942b33 */
  if (!C.zf) goto L_11942b33;
  /* 11942b28 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11942b2e mov dword ptr [0x11965a60], eax */
  w32((uint32_t)(0x11965a60), (EAX));
L_11942b33:;
  /* 11942b33 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942b37 jne 0x11942b45 */
  if (!C.zf) goto L_11942b45;
  /* 11942b39 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11942b3f mov dword ptr [0x11965a64], ecx */
  w32((uint32_t)(0x11965a64), (ECX));
L_11942b45:;
  /* 11942b45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942b48 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942b4b call dword ptr [edx + 0x119644e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x119644e0))), 0x11942b51u);
  /* 11942b51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942b53 je 0x11942b8c */
  if (C.zf) goto L_11942b8c;
  /* 11942b55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942b58 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942b5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942b5e mov dword ptr [eax + 0x119644dc], ecx */
  w32((uint32_t)(EAX + 0x119644dc), (ECX));
  /* 11942b64 push 2 */
  push32((uint32_t)(0x2u));
  /* 11942b66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942b69 push edx */
  push32((uint32_t)(EDX));
  /* 11942b6a call 0x11939570 */
  push32(0x11942b6fu); f_11939570();
  /* 11942b6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942b72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942b75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942b78 mov dword ptr [eax*4 + 0x11965a48], ecx */
  w32((uint32_t)(EAX*4 + 0x11965a48), (ECX));
  /* 11942b7f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11942b82 mov dword ptr [0x11965a60], edx */
  w32((uint32_t)(0x11965a60), (EDX));
  /* 11942b88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942b8a jmp 0x11942baf */
  goto L_11942baf;
L_11942b8c:;
  /* 11942b8c cmp dword ptr [ebp - 0xc], 0x119643c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x119643c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942b93 je 0x11942ba3 */
  if (C.zf) goto L_11942ba3;
  /* 11942b95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11942b97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942b9a push eax */
  push32((uint32_t)(EAX));
  /* 11942b9b call 0x11939570 */
  push32(0x11942ba0u); f_11939570();
  /* 11942ba0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11942ba3:;
  /* 11942ba3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942ba6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942ba9 mov eax, dword ptr [ecx + 0x119644dc] */
  EAX = (r32((uint32_t)(ECX + 0x119644dc)));
L_11942baf:;
  /* 11942baf mov esp, ebp */
  ESP = (EBP);
  /* 11942bb1 pop ebp */
  EBP = (pop32());
  /* 11942bb2 ret  */
  ESPCHK(0x11942a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bc0 @ 0x11942bc0 (256 bytes, 72 insns) */
void f_11942bc0(void) {
  FTRACE(0x11942bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11942bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11942bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942bc6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11942bcd cmp dword ptr [0x119644dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119644dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942bd4 jne 0x11942bf4 */
  if (!C.zf) goto L_11942bf4;
  /* 11942bd6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11942bdb push 0x11960f68 */
  push32((uint32_t)(0x11960f68u));
  /* 11942be0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11942be2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11942be7 call 0x11938ae0 */
  push32(0x11942becu); f_11938ae0();
  /* 11942bec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942bef mov dword ptr [0x119644dc], eax */
  w32((uint32_t)(0x119644dc), (EAX));
L_11942bf4:;
  /* 11942bf4 mov eax, dword ptr [0x119644dc] */
  EAX = (r32((uint32_t)(0x119644dc)));
  /* 11942bf9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11942bfc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11942c03 jmp 0x11942c0e */
  goto L_11942c0e;
L_11942c05:;
  /* 11942c05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942c08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942c0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11942c0e:;
  /* 11942c0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942c11 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942c14 mov eax, dword ptr [edx + 0x119644dc] */
  EAX = (r32((uint32_t)(EDX + 0x119644dc)));
  /* 11942c1a push eax */
  push32((uint32_t)(EAX));
  /* 11942c1b push 0x11960f74 */
  push32((uint32_t)(0x11960f74u));
  /* 11942c20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942c23 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942c26 mov edx, dword ptr [ecx + 0x119644d8] */
  EDX = (r32((uint32_t)(ECX + 0x119644d8)));
  /* 11942c2c push edx */
  push32((uint32_t)(EDX));
  /* 11942c2d push 3 */
  push32((uint32_t)(0x3u));
  /* 11942c2f mov eax, dword ptr [0x119644dc] */
  EAX = (r32((uint32_t)(0x119644dc)));
  /* 11942c34 push eax */
  push32((uint32_t)(EAX));
  /* 11942c35 call 0x11942e60 */
  push32(0x11942c3au); f_11942e60();
  /* 11942c3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942c3d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942c41 jge 0x11942c89 */
  if ((C.sf==C.of)) goto L_11942c89;
  /* 11942c43 push 0x11960f60 */
  push32((uint32_t)(0x11960f60u));
  /* 11942c48 mov ecx, dword ptr [0x119644dc] */
  ECX = (r32((uint32_t)(0x119644dc)));
  /* 11942c4e push ecx */
  push32((uint32_t)(ECX));
  /* 11942c4f call 0x1193baa0 */
  push32(0x11942c54u); f_1193baa0();
  /* 11942c54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942c57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942c5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942c5d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942c60 mov eax, dword ptr [edx + 0x119644dc] */
  EAX = (r32((uint32_t)(EDX + 0x119644dc)));
  /* 11942c66 push eax */
  push32((uint32_t)(EAX));
  /* 11942c67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942c6a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11942c6d mov edx, dword ptr [ecx + 0x119644dc] */
  EDX = (r32((uint32_t)(ECX + 0x119644dc)));
  /* 11942c73 push edx */
  push32((uint32_t)(EDX));
  /* 11942c74 call 0x11944770 */
  push32(0x11942c79u); f_11944770();
  /* 11942c79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942c7e je 0x11942c87 */
  if (C.zf) goto L_11942c87;
  /* 11942c80 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11942c87:;
  /* 11942c87 jmp 0x11942cb7 */
  goto L_11942cb7;
L_11942c89:;
  /* 11942c89 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942c8d jne 0x11942c96 */
  if (!C.zf) goto L_11942c96;
  /* 11942c8f mov eax, dword ptr [0x119644dc] */
  EAX = (r32((uint32_t)(0x119644dc)));
  /* 11942c94 jmp 0x11942cbc */
  goto L_11942cbc;
L_11942c96:;
  /* 11942c96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11942c98 mov eax, dword ptr [0x119644dc] */
  EAX = (r32((uint32_t)(0x119644dc)));
  /* 11942c9d push eax */
  push32((uint32_t)(EAX));
  /* 11942c9e call 0x11939570 */
  push32(0x11942ca3u); f_11939570();
  /* 11942ca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942ca6 mov dword ptr [0x119644dc], 0 */
  w32((uint32_t)(0x119644dc), (0x0u));
  /* 11942cb0 mov eax, dword ptr [0x119644f4] */
  EAX = (r32((uint32_t)(0x119644f4)));
  /* 11942cb5 jmp 0x11942cbc */
  goto L_11942cbc;
L_11942cb7:;
  /* 11942cb7 jmp 0x11942c05 */
  goto L_11942c05;
L_11942cbc:;
  /* 11942cbc mov esp, ebp */
  ESP = (EBP);
  /* 11942cbe pop ebp */
  EBP = (pop32());
  /* 11942cbf ret  */
  ESPCHK(0x11942bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cc0 @ 0x11942cc0 (388 bytes, 115 insns) */
void f_11942cc0(void) {
  FTRACE(0x11942cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11942cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11942cc3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942cc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942ccd jne 0x11942cd6 */
  if (!C.zf) goto L_11942cd6;
  /* 11942ccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942cd1 jmp 0x11942e40 */
  goto L_11942e40;
L_11942cd6:;
  /* 11942cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942cd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11942cdc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942cdf jne 0x11942d30 */
  if (!C.zf) goto L_11942d30;
  /* 11942ce1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942ce4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11942ce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942cea jne 0x11942d30 */
  if (!C.zf) goto L_11942d30;
  /* 11942cec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942cef mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11942cf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942cf5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11942cf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942cfd je 0x11942d19 */
  if (C.zf) goto L_11942d19;
  /* 11942cff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11942d02 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11942d07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11942d0a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11942d10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11942d13 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11942d19:;
  /* 11942d19 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942d1d je 0x11942d28 */
  if (C.zf) goto L_11942d28;
  /* 11942d1f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11942d22 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11942d28:;
  /* 11942d28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942d2b jmp 0x11942e40 */
  goto L_11942e40;
L_11942d30:;
  /* 11942d30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11942d34 push 0x11964450 */
  push32((uint32_t)(0x11964450u));
  /* 11942d39 call 0x11944770 */
  push32(0x11942d3eu); f_11944770();
  /* 11942d3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942d41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942d43 je 0x11942df8 */
  if (C.zf) goto L_11942df8;
  /* 11942d49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942d4c push edx */
  push32((uint32_t)(EDX));
  /* 11942d4d push 0x119643cc */
  push32((uint32_t)(0x119643ccu));
  /* 11942d52 call 0x11944770 */
  push32(0x11942d57u); f_11944770();
  /* 11942d57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942d5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942d5c je 0x11942df8 */
  if (C.zf) goto L_11942df8;
  /* 11942d62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942d65 push eax */
  push32((uint32_t)(EAX));
  /* 11942d66 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11942d6c push ecx */
  push32((uint32_t)(ECX));
  /* 11942d6d call 0x11942eb0 */
  push32(0x11942d72u); f_11942eb0();
  /* 11942d72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942d77 je 0x11942d80 */
  if (C.zf) goto L_11942d80;
  /* 11942d79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942d7b jmp 0x11942e40 */
  goto L_11942e40;
L_11942d80:;
  /* 11942d80 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11942d86 push edx */
  push32((uint32_t)(EDX));
  /* 11942d87 push 0x11965a70 */
  push32((uint32_t)(0x11965a70u));
  /* 11942d8c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11942d92 push eax */
  push32((uint32_t)(EAX));
  /* 11942d93 call 0x119448c0 */
  push32(0x11942d98u); f_119448c0();
  /* 11942d98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942d9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942d9d jne 0x11942da6 */
  if (!C.zf) goto L_11942da6;
  /* 11942d9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942da1 jmp 0x11942e40 */
  goto L_11942e40;
L_11942da6:;
  /* 11942da6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11942da8 mov cx, word ptr [0x11965a74] */
  CX = (r16((uint32_t)(0x11965a74)));
  /* 11942daf mov dword ptr [0x11965a78], ecx */
  w32((uint32_t)(0x11965a78), (ECX));
  /* 11942db5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11942dbb push edx */
  push32((uint32_t)(EDX));
  /* 11942dbc push 0x11964450 */
  push32((uint32_t)(0x11964450u));
  /* 11942dc1 call 0x11943010 */
  push32(0x11942dc6u); f_11943010();
  /* 11942dc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942dc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942dcc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11942dcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11942dd1 je 0x11942de6 */
  if (C.zf) goto L_11942de6;
  /* 11942dd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942dd6 push edx */
  push32((uint32_t)(EDX));
  /* 11942dd7 push 0x119643cc */
  push32((uint32_t)(0x119643ccu));
  /* 11942ddc call 0x1193ba90 */
  push32(0x11942de1u); f_1193ba90();
  /* 11942de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942de4 jmp 0x11942df8 */
  goto L_11942df8;
L_11942de6:;
  /* 11942de6 push 0x11964450 */
  push32((uint32_t)(0x11964450u));
  /* 11942deb push 0x119643cc */
  push32((uint32_t)(0x119643ccu));
  /* 11942df0 call 0x1193ba90 */
  push32(0x11942df5u); f_1193ba90();
  /* 11942df5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11942df8:;
  /* 11942df8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942dfc je 0x11942e11 */
  if (C.zf) goto L_11942e11;
  /* 11942dfe push 6 */
  push32((uint32_t)(0x6u));
  /* 11942e00 push 0x11965a70 */
  push32((uint32_t)(0x11965a70u));
  /* 11942e05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11942e08 push eax */
  push32((uint32_t)(EAX));
  /* 11942e09 call 0x1193f3c0 */
  push32(0x11942e0eu); f_1193f3c0();
  /* 11942e0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11942e11:;
  /* 11942e11 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942e15 je 0x11942e2a */
  if (C.zf) goto L_11942e2a;
  /* 11942e17 push 4 */
  push32((uint32_t)(0x4u));
  /* 11942e19 push 0x11965a78 */
  push32((uint32_t)(0x11965a78u));
  /* 11942e1e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11942e21 push ecx */
  push32((uint32_t)(ECX));
  /* 11942e22 call 0x1193f3c0 */
  push32(0x11942e27u); f_1193f3c0();
  /* 11942e27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11942e2a:;
  /* 11942e2a push 0x11964450 */
  push32((uint32_t)(0x11964450u));
  /* 11942e2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942e32 push edx */
  push32((uint32_t)(EDX));
  /* 11942e33 call 0x1193ba90 */
  push32(0x11942e38u); f_1193ba90();
  /* 11942e38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942e3b mov eax, 0x11964450 */
  EAX = (0x11964450u);
L_11942e40:;
  /* 11942e40 mov esp, ebp */
  ESP = (EBP);
  /* 11942e42 pop ebp */
  EBP = (pop32());
  /* 11942e43 ret  */
  ESPCHK(0x11942cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e50 @ 0x11942e50 (7 bytes, 5 insns) */
void f_11942e50(void) {
  FTRACE(0x11942e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11942e51 mov ebp, esp */
  EBP = (ESP);
  /* 11942e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942e55 pop ebp */
  EBP = (pop32());
  /* 11942e56 ret  */
  ESPCHK(0x11942e50u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11942e60 (79 bytes, 28 insns) */
void f_11942e60(void) {
  FTRACE(0x11942e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11942e61 mov ebp, esp */
  EBP = (ESP);
  /* 11942e63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942e66 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11942e69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11942e6c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11942e73 jmp 0x11942e7e */
  goto L_11942e7e;
L_11942e75:;
  /* 11942e75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942e78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942e7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11942e7e:;
  /* 11942e7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11942e81 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942e84 jge 0x11942ea4 */
  if ((C.sf==C.of)) goto L_11942ea4;
  /* 11942e86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942e89 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942e8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11942e8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942e92 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11942e95 push edx */
  push32((uint32_t)(EDX));
  /* 11942e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942e99 push eax */
  push32((uint32_t)(EAX));
  /* 11942e9a call 0x1193baa0 */
  push32(0x11942e9fu); f_1193baa0();
  /* 11942e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942ea2 jmp 0x11942e75 */
  goto L_11942e75;
L_11942ea4:;
  /* 11942ea4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11942eab mov esp, ebp */
  ESP = (EBP);
  /* 11942ead pop ebp */
  EBP = (pop32());
  /* 11942eae ret  */
  ESPCHK(0x11942e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012eb0 @ 0x11942eb0 (349 bytes, 122 insns) */
void f_11942eb0(void) {
  FTRACE(0x11942eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11942eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11942eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11942eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11942eb6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11942ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 11942ebd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942ec0 push eax */
  push32((uint32_t)(EAX));
  /* 11942ec1 call 0x1193c850 */
  push32(0x11942ec6u); f_1193c850();
  /* 11942ec6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942ec9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942ecc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11942ecf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11942ed1 jne 0x11942eda */
  if (!C.zf) goto L_11942eda;
  /* 11942ed3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942ed5 jmp 0x11943009 */
  goto L_11943009;
L_11942eda:;
  /* 11942eda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942edd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11942ee0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942ee3 jne 0x11942f10 */
  if (!C.zf) goto L_11942f10;
  /* 11942ee5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942ee8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11942eec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942eee je 0x11942f10 */
  if (C.zf) goto L_11942f10;
  /* 11942ef0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942ef3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 11942ef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942efa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942f00 push edx */
  push32((uint32_t)(EDX));
  /* 11942f01 call 0x1193ba90 */
  push32(0x11942f06u); f_1193ba90();
  /* 11942f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11942f0b jmp 0x11943009 */
  goto L_11943009;
L_11942f10:;
  /* 11942f10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11942f17 jmp 0x11942f22 */
  goto L_11942f22;
L_11942f19:;
  /* 11942f19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11942f1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942f1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11942f22:;
  /* 11942f22 push 0x11960f78 */
  push32((uint32_t)(0x11960f78u));
  /* 11942f27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942f2a push ecx */
  push32((uint32_t)(ECX));
  /* 11942f2b call 0x11944800 */
  push32(0x11942f30u); f_11944800();
  /* 11942f30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942f33 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11942f36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942f3a jne 0x11942f44 */
  if (!C.zf) goto L_11942f44;
  /* 11942f3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11942f3f jmp 0x11943009 */
  goto L_11943009;
L_11942f44:;
  /* 11942f44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942f47 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942f4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11942f4c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11942f4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942f53 jne 0x11942f7a */
  if (!C.zf) goto L_11942f7a;
  /* 11942f55 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942f59 jge 0x11942f7a */
  if ((C.sf==C.of)) goto L_11942f7a;
  /* 11942f5b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11942f5f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942f62 je 0x11942f7a */
  if (C.zf) goto L_11942f7a;
  /* 11942f64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942f67 push edx */
  push32((uint32_t)(EDX));
  /* 11942f68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942f6b push eax */
  push32((uint32_t)(EAX));
  /* 11942f6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942f6f push ecx */
  push32((uint32_t)(ECX));
  /* 11942f70 call 0x1193c300 */
  push32(0x11942f75u); f_1193c300();
  /* 11942f75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942f78 jmp 0x11942fe0 */
  goto L_11942fe0;
L_11942f7a:;
  /* 11942f7a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942f7e jne 0x11942fa8 */
  if (!C.zf) goto L_11942fa8;
  /* 11942f80 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942f84 jge 0x11942fa8 */
  if ((C.sf==C.of)) goto L_11942fa8;
  /* 11942f86 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11942f8a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942f8d je 0x11942fa8 */
  if (C.zf) goto L_11942fa8;
  /* 11942f8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942f92 push eax */
  push32((uint32_t)(EAX));
  /* 11942f93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942f96 push ecx */
  push32((uint32_t)(ECX));
  /* 11942f97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942f9a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942f9d push edx */
  push32((uint32_t)(EDX));
  /* 11942f9e call 0x1193c300 */
  push32(0x11942fa3u); f_1193c300();
  /* 11942fa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942fa6 jmp 0x11942fe0 */
  goto L_11942fe0;
L_11942fa8:;
  /* 11942fa8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942fac jne 0x11942fdb */
  if (!C.zf) goto L_11942fdb;
  /* 11942fae movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11942fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942fb4 je 0x11942fbf */
  if (C.zf) goto L_11942fbf;
  /* 11942fb6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11942fba cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942fbd jne 0x11942fdb */
  if (!C.zf) goto L_11942fdb;
L_11942fbf:;
  /* 11942fbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942fc2 push edx */
  push32((uint32_t)(EDX));
  /* 11942fc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942fc6 push eax */
  push32((uint32_t)(EAX));
  /* 11942fc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11942fca add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11942fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11942fd1 call 0x1193c300 */
  push32(0x11942fd6u); f_1193c300();
  /* 11942fd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11942fd9 jmp 0x11942fe0 */
  goto L_11942fe0;
L_11942fdb:;
  /* 11942fdb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11942fde jmp 0x11943009 */
  goto L_11943009;
L_11942fe0:;
  /* 11942fe0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11942fe4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11942fe7 jne 0x11942feb */
  if (!C.zf) goto L_11942feb;
  /* 11942fe9 jmp 0x11943007 */
  goto L_11943007;
L_11942feb:;
  /* 11942feb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11942fef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11942ff1 jne 0x11942ff5 */
  if (!C.zf) goto L_11942ff5;
  /* 11942ff3 jmp 0x11943007 */
  goto L_11943007;
L_11942ff5:;
  /* 11942ff5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11942ff8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11942ffb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11942fff mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11943002 jmp 0x11942f19 */
  goto L_11942f19;
L_11943007:;
  /* 11943007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11943009:;
  /* 11943009 mov esp, ebp */
  ESP = (EBP);
  /* 1194300b pop ebp */
  EBP = (pop32());
  /* 1194300c ret  */
  ESPCHK(0x11942eb0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11943010 (101 bytes, 36 insns) */
void f_11943010(void) {
  FTRACE(0x11943010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11943010 push ebp */
  push32((uint32_t)(EBP));
  /* 11943011 mov ebp, esp */
  EBP = (ESP);
  /* 11943013 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11943016 push eax */
  push32((uint32_t)(EAX));
  /* 11943017 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194301a push ecx */
  push32((uint32_t)(ECX));
  /* 1194301b call 0x1193ba90 */
  push32(0x11943020u); f_1193ba90();
  /* 11943020 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943023 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11943026 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1194302a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194302c je 0x11943048 */
  if (C.zf) goto L_11943048;
  /* 1194302e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11943031 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943034 push ecx */
  push32((uint32_t)(ECX));
  /* 11943035 push 0x11960f80 */
  push32((uint32_t)(0x11960f80u));
  /* 1194303a push 2 */
  push32((uint32_t)(0x2u));
  /* 1194303c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194303f push edx */
  push32((uint32_t)(EDX));
  /* 11943040 call 0x11942e60 */
  push32(0x11943045u); f_11942e60();
  /* 11943045 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11943048:;
  /* 11943048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194304b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11943052 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11943054 je 0x11943073 */
  if (C.zf) goto L_11943073;
  /* 11943056 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11943059 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194305f push edx */
  push32((uint32_t)(EDX));
  /* 11943060 push 0x11960f7c */
  push32((uint32_t)(0x11960f7cu));
  /* 11943065 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943067 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194306a push eax */
  push32((uint32_t)(EAX));
  /* 1194306b call 0x11942e60 */
  push32(0x11943070u); f_11942e60();
  /* 11943070 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11943073:;
  /* 11943073 pop ebp */
  EBP = (pop32());
  /* 11943074 ret  */
  ESPCHK(0x11943010u, _esp0);
  ESP += 4; return;
}

/* FUN_10013080 @ 0x11943080 (130 bytes, 50 insns) */
void f_11943080(void) {
  FTRACE(0x11943080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11943080 push ebp */
  push32((uint32_t)(EBP));
  /* 11943081 mov ebp, esp */
  EBP = (ESP);
  /* 11943083 push ecx */
  push32((uint32_t)(ECX));
  /* 11943084 push ebx */
  push32((uint32_t)(EBX));
  /* 11943085 push esi */
  push32((uint32_t)(ESI));
  /* 11943086 push edi */
  push32((uint32_t)(EDI));
  /* 11943087 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1194308e:;
  /* 1194308e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943092 jne 0x119430b2 */
  if (!C.zf) goto L_119430b2;
  /* 11943094 push 0x11960f90 */
  push32((uint32_t)(0x11960f90u));
  /* 11943099 push 0 */
  push32((uint32_t)(0x0u));
  /* 1194309b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1194309d push 0x11960f84 */
  push32((uint32_t)(0x11960f84u));
  /* 119430a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 119430a4 call 0x11937ba0 */
  push32(0x119430a9u); f_11937ba0();
  /* 119430a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119430ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119430af jne 0x119430b2 */
  if (!C.zf) goto L_119430b2;
  /* 119430b1 int3  */
  x86_unimpl("int3 @ 0x119430b1");
L_119430b2:;
  /* 119430b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119430b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119430b6 jne 0x1194308e */
  if (!C.zf) goto L_1194308e;
  /* 119430b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119430bb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119430be and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 119430c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119430c3 je 0x119430d1 */
  if (C.zf) goto L_119430d1;
  /* 119430c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119430c8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 119430cf jmp 0x119430f8 */
  goto L_119430f8;
L_119430d1:;
  /* 119430d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119430d4 push ecx */
  push32((uint32_t)(ECX));
  /* 119430d5 call 0x119418f0 */
  push32(0x119430dau); f_119418f0();
  /* 119430da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119430dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119430e0 push edx */
  push32((uint32_t)(EDX));
  /* 119430e1 call 0x11943110 */
  push32(0x119430e6u); f_11943110();
  /* 119430e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119430e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119430ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119430ef push eax */
  push32((uint32_t)(EAX));
  /* 119430f0 call 0x11941960 */
  push32(0x119430f5u); f_11941960();
  /* 119430f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119430f8:;
  /* 119430f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119430fb pop edi */
  EDI = (pop32());
  /* 119430fc pop esi */
  ESI = (pop32());
  /* 119430fd pop ebx */
  EBX = (pop32());
  /* 119430fe mov esp, ebp */
  ESP = (EBP);
  /* 11943100 pop ebp */
  EBP = (pop32());
  /* 11943101 ret  */
  ESPCHK(0x11943080u, _esp0);
  ESP += 4; return;
}

/* FUN_10013110 @ 0x11943110 (190 bytes, 67 insns) */
void f_11943110(void) {
  FTRACE(0x11943110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11943110 push ebp */
  push32((uint32_t)(EBP));
  /* 11943111 mov ebp, esp */
  EBP = (ESP);
  /* 11943113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11943116 push ebx */
  push32((uint32_t)(EBX));
  /* 11943117 push esi */
  push32((uint32_t)(ESI));
  /* 11943118 push edi */
  push32((uint32_t)(EDI));
  /* 11943119 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11943120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943123 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11943126:;
  /* 11943126 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194312a jne 0x1194314a */
  if (!C.zf) goto L_1194314a;
  /* 1194312c push 0x11960e30 */
  push32((uint32_t)(0x11960e30u));
  /* 11943131 push 0 */
  push32((uint32_t)(0x0u));
  /* 11943133 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11943135 push 0x11960f84 */
  push32((uint32_t)(0x11960f84u));
  /* 1194313a push 2 */
  push32((uint32_t)(0x2u));
  /* 1194313c call 0x11937ba0 */
  push32(0x11943141u); f_11937ba0();
  /* 11943141 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943144 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943147 jne 0x1194314a */
  if (!C.zf) goto L_1194314a;
  /* 11943149 int3  */
  x86_unimpl("int3 @ 0x11943149");
L_1194314a:;
  /* 1194314a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1194314c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1194314e jne 0x11943126 */
  if (!C.zf) goto L_11943126;
  /* 11943150 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11943153 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11943156 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1194315b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194315d je 0x119431ba */
  if (C.zf) goto L_119431ba;
  /* 1194315f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11943162 push ecx */
  push32((uint32_t)(ECX));
  /* 11943163 call 0x11942410 */
  push32(0x11943168u); f_11942410();
  /* 11943168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194316b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1194316e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11943171 push edx */
  push32((uint32_t)(EDX));
  /* 11943172 call 0x11945790 */
  push32(0x11943177u); f_11945790();
  /* 11943177 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194317a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194317d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11943180 push ecx */
  push32((uint32_t)(ECX));
  /* 11943181 call 0x11945660 */
  push32(0x11943186u); f_11945660();
  /* 11943186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194318b jge 0x11943196 */
  if ((C.sf==C.of)) goto L_11943196;
  /* 1194318d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11943194 jmp 0x119431ba */
  goto L_119431ba;
L_11943196:;
  /* 11943196 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11943199 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194319d je 0x119431ba */
  if (C.zf) goto L_119431ba;
  /* 1194319f push 2 */
  push32((uint32_t)(0x2u));
  /* 119431a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119431a4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 119431a7 push ecx */
  push32((uint32_t)(ECX));
  /* 119431a8 call 0x11939570 */
  push32(0x119431adu); f_11939570();
  /* 119431ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119431b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119431b3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_119431ba:;
  /* 119431ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119431bd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 119431c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119431c7 pop edi */
  EDI = (pop32());
  /* 119431c8 pop esi */
  ESI = (pop32());
  /* 119431c9 pop ebx */
  EBX = (pop32());
  /* 119431ca mov esp, ebp */
  ESP = (EBP);
  /* 119431cc pop ebp */
  EBP = (pop32());
  /* 119431cd ret  */
  ESPCHK(0x11943110u, _esp0);
  ESP += 4; return;
}

/* FUN_100131d0 @ 0x119431d0 (210 bytes, 63 insns) */
void f_119431d0(void) {
  FTRACE(0x119431d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119431d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119431d1 mov ebp, esp */
  EBP = (ESP);
  /* 119431d3 push ecx */
  push32((uint32_t)(ECX));
  /* 119431d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119431d7 cmp eax, dword ptr [0x1196735c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1196735c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119431dd jae 0x11943201 */
  if (!C.cf) goto L_11943201;
  /* 119431df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119431e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119431e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119431e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119431eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119431ee mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 119431f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119431fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119431fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119431ff jne 0x11943214 */
  if (!C.zf) goto L_11943214;
L_11943201:;
  /* 11943201 call 0x119409b0 */
  push32(0x11943206u); f_119409b0();
  /* 11943206 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1194320c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1194320f jmp 0x1194329e */
  goto L_1194329e;
L_11943214:;
  /* 11943214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943217 push edx */
  push32((uint32_t)(EDX));
  /* 11943218 call 0x119421d0 */
  push32(0x1194321du); f_119421d0();
  /* 1194321d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943220 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943223 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11943226 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943229 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1194322c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194322f mov edx, dword ptr [eax*4 + 0x11967220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 11943236 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1194323b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1194323e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11943240 je 0x1194327d */
  if (C.zf) goto L_1194327d;
  /* 11943242 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943245 push ecx */
  push32((uint32_t)(ECX));
  /* 11943246 call 0x11942050 */
  push32(0x1194324bu); f_11942050();
  /* 1194324b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194324e push eax */
  push32((uint32_t)(EAX));
  /* 1194324f call dword ptr [0x11968308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968308))), 0x11943255u);
  /* 11943255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11943257 jne 0x11943264 */
  if (!C.zf) goto L_11943264;
  /* 11943259 call dword ptr [0x119683dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683dc))), 0x1194325fu);
  /* 1194325f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11943262 jmp 0x1194326b */
  goto L_1194326b;
L_11943264:;
  /* 11943264 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1194326b:;
  /* 1194326b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194326f jne 0x11943273 */
  if (!C.zf) goto L_11943273;
  /* 11943271 jmp 0x1194328f */
  goto L_1194328f;
L_11943273:;
  /* 11943273 call 0x119409c0 */
  push32(0x11943278u); f_119409c0();
  /* 11943278 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194327b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1194327d:;
  /* 1194327d call 0x119409b0 */
  push32(0x11943282u); f_119409b0();
  /* 11943282 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11943288 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1194328f:;
  /* 1194328f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943292 push eax */
  push32((uint32_t)(EAX));
  /* 11943293 call 0x11942260 */
  push32(0x11943298u); f_11942260();
  /* 11943298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194329b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1194329e:;
  /* 1194329e mov esp, ebp */
  ESP = (EBP);
  /* 119432a0 pop ebp */
  EBP = (pop32());
  /* 119432a1 ret  */
  ESPCHK(0x119431d0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x119432b0 (219 bytes, 64 insns) */
void f_119432b0(void) {
  FTRACE(0x119432b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119432b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119432b1 mov ebp, esp */
  EBP = (ESP);
  /* 119432b3 push ecx */
  push32((uint32_t)(ECX));
  /* 119432b4 cmp dword ptr [0x11965a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119432bb je 0x11943351 */
  if (C.zf) goto L_11943351;
  /* 119432c1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 119432c3 push 0x11960fa0 */
  push32((uint32_t)(0x11960fa0u));
  /* 119432c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 119432ca push 0xac */
  push32((uint32_t)(0xacu));
  /* 119432cf push 1 */
  push32((uint32_t)(0x1u));
  /* 119432d1 call 0x11938ef0 */
  push32(0x119432d6u); f_11938ef0();
  /* 119432d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119432d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119432dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119432e0 jne 0x119432ec */
  if (!C.zf) goto L_119432ec;
  /* 119432e2 mov eax, 1 */
  EAX = (0x1u);
  /* 119432e7 jmp 0x11943387 */
  goto L_11943387;
L_119432ec:;
  /* 119432ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119432ef push eax */
  push32((uint32_t)(EAX));
  /* 119432f0 call 0x11943390 */
  push32(0x119432f5u); f_11943390();
  /* 119432f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119432f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119432fa je 0x1194331d */
  if (C.zf) goto L_1194331d;
  /* 119432fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119432ff push ecx */
  push32((uint32_t)(ECX));
  /* 11943300 call 0x11943920 */
  push32(0x11943305u); f_11943920();
  /* 11943305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943308 push 2 */
  push32((uint32_t)(0x2u));
  /* 1194330a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194330d push edx */
  push32((uint32_t)(EDX));
  /* 1194330e call 0x11939570 */
  push32(0x11943313u); f_11939570();
  /* 11943313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943316 mov eax, 1 */
  EAX = (0x1u);
  /* 1194331b jmp 0x11943387 */
  goto L_11943387;
L_1194331d:;
  /* 1194331d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943320 mov dword ptr [0x11964c98], eax */
  w32((uint32_t)(0x11964c98), (EAX));
  /* 11943325 mov ecx, dword ptr [0x11965a7c] */
  ECX = (r32((uint32_t)(0x11965a7c)));
  /* 1194332b push ecx */
  push32((uint32_t)(ECX));
  /* 1194332c call 0x11943920 */
  push32(0x11943331u); f_11943920();
  /* 11943331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943334 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943336 mov edx, dword ptr [0x11965a7c] */
  EDX = (r32((uint32_t)(0x11965a7c)));
  /* 1194333c push edx */
  push32((uint32_t)(EDX));
  /* 1194333d call 0x11939570 */
  push32(0x11943342u); f_11939570();
  /* 11943342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943348 mov dword ptr [0x11965a7c], eax */
  w32((uint32_t)(0x11965a7c), (EAX));
  /* 1194334d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194334f jmp 0x11943387 */
  goto L_11943387;
L_11943351:;
  /* 11943351 mov dword ptr [0x11964c98], 0x11964ca0 */
  w32((uint32_t)(0x11964c98), (0x11964ca0u));
  /* 1194335b mov ecx, dword ptr [0x11965a7c] */
  ECX = (r32((uint32_t)(0x11965a7c)));
  /* 11943361 push ecx */
  push32((uint32_t)(ECX));
  /* 11943362 call 0x11943920 */
  push32(0x11943367u); f_11943920();
  /* 11943367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194336a push 2 */
  push32((uint32_t)(0x2u));
  /* 1194336c mov edx, dword ptr [0x11965a7c] */
  EDX = (r32((uint32_t)(0x11965a7c)));
  /* 11943372 push edx */
  push32((uint32_t)(EDX));
  /* 11943373 call 0x11939570 */
  push32(0x11943378u); f_11939570();
  /* 11943378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194337b mov dword ptr [0x11965a7c], 0 */
  w32((uint32_t)(0x11965a7c), (0x0u));
  /* 11943385 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11943387:;
  /* 11943387 mov esp, ebp */
  ESP = (EBP);
  /* 11943389 pop ebp */
  EBP = (pop32());
  /* 1194338a ret  */
  ESPCHK(0x119432b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013390 @ 0x11943390 (1423 bytes, 533 insns) */
void f_11943390(void) {
  FTRACE(0x11943390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11943390 push ebp */
  push32((uint32_t)(EBP));
  /* 11943391 mov ebp, esp */
  EBP = (ESP);
  /* 11943393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11943396 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1194339d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194339f mov ax, word ptr [0x11965ab6] */
  AX = (r16((uint32_t)(0x11965ab6)));
  /* 119433a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119433a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119433aa mov cx, word ptr [0x11965ab8] */
  CX = (r16((uint32_t)(0x11965ab8)));
  /* 119433b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119433b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119433b8 jne 0x119433c2 */
  if (!C.zf) goto L_119433c2;
  /* 119433ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119433bd jmp 0x1194391b */
  goto L_1194391b;
L_119433c2:;
  /* 119433c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119433c5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119433c8 push edx */
  push32((uint32_t)(EDX));
  /* 119433c9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 119433cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119433ce push eax */
  push32((uint32_t)(EAX));
  /* 119433cf push 1 */
  push32((uint32_t)(0x1u));
  /* 119433d1 call 0x11946ca0 */
  push32(0x119433d6u); f_11946ca0();
  /* 119433d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119433d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119433dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119433de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119433e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119433e4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119433e7 push edx */
  push32((uint32_t)(EDX));
  /* 119433e8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 119433ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119433ed push eax */
  push32((uint32_t)(EAX));
  /* 119433ee push 1 */
  push32((uint32_t)(0x1u));
  /* 119433f0 call 0x11946ca0 */
  push32(0x119433f5u); f_11946ca0();
  /* 119433f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119433f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119433fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119433fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943400 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943403 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943406 push edx */
  push32((uint32_t)(EDX));
  /* 11943407 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11943409 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194340c push eax */
  push32((uint32_t)(EAX));
  /* 1194340d push 1 */
  push32((uint32_t)(0x1u));
  /* 1194340f call 0x11946ca0 */
  push32(0x11943414u); f_11946ca0();
  /* 11943414 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943417 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194341a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194341c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194341f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943422 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943425 push edx */
  push32((uint32_t)(EDX));
  /* 11943426 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11943428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194342b push eax */
  push32((uint32_t)(EAX));
  /* 1194342c push 1 */
  push32((uint32_t)(0x1u));
  /* 1194342e call 0x11946ca0 */
  push32(0x11943433u); f_11946ca0();
  /* 11943433 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943436 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943439 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194343b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194343e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943441 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943444 push edx */
  push32((uint32_t)(EDX));
  /* 11943445 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11943447 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194344a push eax */
  push32((uint32_t)(EAX));
  /* 1194344b push 1 */
  push32((uint32_t)(0x1u));
  /* 1194344d call 0x11946ca0 */
  push32(0x11943452u); f_11946ca0();
  /* 11943452 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943455 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943458 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194345a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194345d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943460 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943463 push edx */
  push32((uint32_t)(EDX));
  /* 11943464 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11943466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943469 push eax */
  push32((uint32_t)(EAX));
  /* 1194346a push 1 */
  push32((uint32_t)(0x1u));
  /* 1194346c call 0x11946ca0 */
  push32(0x11943471u); f_11946ca0();
  /* 11943471 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943474 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943477 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943479 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194347c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194347f push edx */
  push32((uint32_t)(EDX));
  /* 11943480 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11943482 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943485 push eax */
  push32((uint32_t)(EAX));
  /* 11943486 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943488 call 0x11946ca0 */
  push32(0x1194348du); f_11946ca0();
  /* 1194348d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943490 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943493 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943495 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943498 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194349b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194349e push edx */
  push32((uint32_t)(EDX));
  /* 1194349f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 119434a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119434a4 push eax */
  push32((uint32_t)(EAX));
  /* 119434a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 119434a7 call 0x11946ca0 */
  push32(0x119434acu); f_11946ca0();
  /* 119434ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119434af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119434b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119434b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119434b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119434ba add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119434bd push edx */
  push32((uint32_t)(EDX));
  /* 119434be push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 119434c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119434c3 push eax */
  push32((uint32_t)(EAX));
  /* 119434c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 119434c6 call 0x11946ca0 */
  push32(0x119434cbu); f_11946ca0();
  /* 119434cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119434ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119434d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119434d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119434d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119434d9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119434dc push edx */
  push32((uint32_t)(EDX));
  /* 119434dd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 119434df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119434e2 push eax */
  push32((uint32_t)(EAX));
  /* 119434e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119434e5 call 0x11946ca0 */
  push32(0x119434eau); f_11946ca0();
  /* 119434ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119434ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119434f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119434f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119434f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119434f8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119434fb push edx */
  push32((uint32_t)(EDX));
  /* 119434fc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 119434fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943501 push eax */
  push32((uint32_t)(EAX));
  /* 11943502 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943504 call 0x11946ca0 */
  push32(0x11943509u); f_11946ca0();
  /* 11943509 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194350c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194350f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943511 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943517 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194351a push edx */
  push32((uint32_t)(EDX));
  /* 1194351b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1194351d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943520 push eax */
  push32((uint32_t)(EAX));
  /* 11943521 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943523 call 0x11946ca0 */
  push32(0x11943528u); f_11946ca0();
  /* 11943528 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194352b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194352e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943530 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943536 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943539 push edx */
  push32((uint32_t)(EDX));
  /* 1194353a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1194353c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194353f push eax */
  push32((uint32_t)(EAX));
  /* 11943540 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943542 call 0x11946ca0 */
  push32(0x11943547u); f_11946ca0();
  /* 11943547 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194354a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194354d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194354f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943552 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943555 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943558 push edx */
  push32((uint32_t)(EDX));
  /* 11943559 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1194355b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194355e push eax */
  push32((uint32_t)(EAX));
  /* 1194355f push 1 */
  push32((uint32_t)(0x1u));
  /* 11943561 call 0x11946ca0 */
  push32(0x11943566u); f_11946ca0();
  /* 11943566 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943569 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194356c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194356e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943574 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943577 push edx */
  push32((uint32_t)(EDX));
  /* 11943578 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1194357a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194357d push eax */
  push32((uint32_t)(EAX));
  /* 1194357e push 1 */
  push32((uint32_t)(0x1u));
  /* 11943580 call 0x11946ca0 */
  push32(0x11943585u); f_11946ca0();
  /* 11943585 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943588 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194358b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194358d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943590 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943593 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943596 push edx */
  push32((uint32_t)(EDX));
  /* 11943597 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11943599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194359c push eax */
  push32((uint32_t)(EAX));
  /* 1194359d push 1 */
  push32((uint32_t)(0x1u));
  /* 1194359f call 0x11946ca0 */
  push32(0x119435a4u); f_11946ca0();
  /* 119435a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119435a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119435aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119435ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119435af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119435b2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119435b5 push edx */
  push32((uint32_t)(EDX));
  /* 119435b6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 119435b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119435bb push eax */
  push32((uint32_t)(EAX));
  /* 119435bc push 1 */
  push32((uint32_t)(0x1u));
  /* 119435be call 0x11946ca0 */
  push32(0x119435c3u); f_11946ca0();
  /* 119435c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119435c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119435c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119435cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119435ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119435d1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119435d4 push edx */
  push32((uint32_t)(EDX));
  /* 119435d5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 119435d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119435da push eax */
  push32((uint32_t)(EAX));
  /* 119435db push 1 */
  push32((uint32_t)(0x1u));
  /* 119435dd call 0x11946ca0 */
  push32(0x119435e2u); f_11946ca0();
  /* 119435e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119435e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119435e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119435ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119435ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119435f0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119435f3 push edx */
  push32((uint32_t)(EDX));
  /* 119435f4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 119435f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119435f9 push eax */
  push32((uint32_t)(EAX));
  /* 119435fa push 1 */
  push32((uint32_t)(0x1u));
  /* 119435fc call 0x11946ca0 */
  push32(0x11943601u); f_11946ca0();
  /* 11943601 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943604 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943607 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943609 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194360c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194360f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943612 push edx */
  push32((uint32_t)(EDX));
  /* 11943613 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11943615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943618 push eax */
  push32((uint32_t)(EAX));
  /* 11943619 push 1 */
  push32((uint32_t)(0x1u));
  /* 1194361b call 0x11946ca0 */
  push32(0x11943620u); f_11946ca0();
  /* 11943620 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943623 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943626 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943628 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194362b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194362e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943631 push edx */
  push32((uint32_t)(EDX));
  /* 11943632 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11943634 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943637 push eax */
  push32((uint32_t)(EAX));
  /* 11943638 push 1 */
  push32((uint32_t)(0x1u));
  /* 1194363a call 0x11946ca0 */
  push32(0x1194363fu); f_11946ca0();
  /* 1194363f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943642 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943645 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943647 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194364a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194364d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943650 push edx */
  push32((uint32_t)(EDX));
  /* 11943651 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11943653 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943656 push eax */
  push32((uint32_t)(EAX));
  /* 11943657 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943659 call 0x11946ca0 */
  push32(0x1194365eu); f_11946ca0();
  /* 1194365e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943661 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943664 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943666 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194366c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194366f push edx */
  push32((uint32_t)(EDX));
  /* 11943670 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11943672 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943675 push eax */
  push32((uint32_t)(EAX));
  /* 11943676 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943678 call 0x11946ca0 */
  push32(0x1194367du); f_11946ca0();
  /* 1194367d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943680 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943683 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943685 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943688 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194368b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194368e push edx */
  push32((uint32_t)(EDX));
  /* 1194368f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11943691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943694 push eax */
  push32((uint32_t)(EAX));
  /* 11943695 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943697 call 0x11946ca0 */
  push32(0x1194369cu); f_11946ca0();
  /* 1194369c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194369f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119436a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119436a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119436a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119436aa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119436ad push edx */
  push32((uint32_t)(EDX));
  /* 119436ae push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 119436b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119436b3 push eax */
  push32((uint32_t)(EAX));
  /* 119436b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 119436b6 call 0x11946ca0 */
  push32(0x119436bbu); f_11946ca0();
  /* 119436bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119436be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119436c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119436c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119436c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119436c9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119436cc push edx */
  push32((uint32_t)(EDX));
  /* 119436cd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 119436cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119436d2 push eax */
  push32((uint32_t)(EAX));
  /* 119436d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119436d5 call 0x11946ca0 */
  push32(0x119436dau); f_11946ca0();
  /* 119436da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119436dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119436e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119436e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119436e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119436e8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119436eb push edx */
  push32((uint32_t)(EDX));
  /* 119436ec push 0x38 */
  push32((uint32_t)(0x38u));
  /* 119436ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119436f1 push eax */
  push32((uint32_t)(EAX));
  /* 119436f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 119436f4 call 0x11946ca0 */
  push32(0x119436f9u); f_11946ca0();
  /* 119436f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119436fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119436ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943701 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943704 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943707 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194370a push edx */
  push32((uint32_t)(EDX));
  /* 1194370b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1194370d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943710 push eax */
  push32((uint32_t)(EAX));
  /* 11943711 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943713 call 0x11946ca0 */
  push32(0x11943718u); f_11946ca0();
  /* 11943718 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194371b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194371e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943720 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943723 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943726 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943729 push edx */
  push32((uint32_t)(EDX));
  /* 1194372a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1194372c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194372f push eax */
  push32((uint32_t)(EAX));
  /* 11943730 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943732 call 0x11946ca0 */
  push32(0x11943737u); f_11946ca0();
  /* 11943737 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194373a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194373d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194373f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943742 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943745 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943748 push edx */
  push32((uint32_t)(EDX));
  /* 11943749 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1194374b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194374e push eax */
  push32((uint32_t)(EAX));
  /* 1194374f push 1 */
  push32((uint32_t)(0x1u));
  /* 11943751 call 0x11946ca0 */
  push32(0x11943756u); f_11946ca0();
  /* 11943756 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943759 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194375c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194375e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943761 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943764 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943767 push edx */
  push32((uint32_t)(EDX));
  /* 11943768 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1194376a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194376d push eax */
  push32((uint32_t)(EAX));
  /* 1194376e push 1 */
  push32((uint32_t)(0x1u));
  /* 11943770 call 0x11946ca0 */
  push32(0x11943775u); f_11946ca0();
  /* 11943775 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943778 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194377b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194377d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943780 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943783 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943786 push edx */
  push32((uint32_t)(EDX));
  /* 11943787 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11943789 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194378c push eax */
  push32((uint32_t)(EAX));
  /* 1194378d push 1 */
  push32((uint32_t)(0x1u));
  /* 1194378f call 0x11946ca0 */
  push32(0x11943794u); f_11946ca0();
  /* 11943794 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943797 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194379a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194379c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194379f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119437a2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119437a8 push edx */
  push32((uint32_t)(EDX));
  /* 119437a9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 119437ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119437ae push eax */
  push32((uint32_t)(EAX));
  /* 119437af push 1 */
  push32((uint32_t)(0x1u));
  /* 119437b1 call 0x11946ca0 */
  push32(0x119437b6u); f_11946ca0();
  /* 119437b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119437b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119437bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119437be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119437c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119437c4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119437ca push edx */
  push32((uint32_t)(EDX));
  /* 119437cb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 119437cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119437d0 push eax */
  push32((uint32_t)(EAX));
  /* 119437d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 119437d3 call 0x11946ca0 */
  push32(0x119437d8u); f_11946ca0();
  /* 119437d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119437db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119437de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119437e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119437e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119437e6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119437ec push edx */
  push32((uint32_t)(EDX));
  /* 119437ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119437ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119437f2 push eax */
  push32((uint32_t)(EAX));
  /* 119437f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119437f5 call 0x11946ca0 */
  push32(0x119437fau); f_11946ca0();
  /* 119437fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119437fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943800 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943802 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943805 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943808 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194380e push edx */
  push32((uint32_t)(EDX));
  /* 1194380f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11943811 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943814 push eax */
  push32((uint32_t)(EAX));
  /* 11943815 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943817 call 0x11946ca0 */
  push32(0x1194381cu); f_11946ca0();
  /* 1194381c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194381f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943822 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943824 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943827 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194382a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943830 push edx */
  push32((uint32_t)(EDX));
  /* 11943831 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11943833 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943836 push eax */
  push32((uint32_t)(EAX));
  /* 11943837 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943839 call 0x11946ca0 */
  push32(0x1194383eu); f_11946ca0();
  /* 1194383e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943841 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943844 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943846 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943849 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194384c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943852 push edx */
  push32((uint32_t)(EDX));
  /* 11943853 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11943855 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943858 push eax */
  push32((uint32_t)(EAX));
  /* 11943859 push 1 */
  push32((uint32_t)(0x1u));
  /* 1194385b call 0x11946ca0 */
  push32(0x11943860u); f_11946ca0();
  /* 11943860 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943863 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943866 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943868 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194386b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194386e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943874 push edx */
  push32((uint32_t)(EDX));
  /* 11943875 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11943877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194387a push eax */
  push32((uint32_t)(EAX));
  /* 1194387b push 1 */
  push32((uint32_t)(0x1u));
  /* 1194387d call 0x11946ca0 */
  push32(0x11943882u); f_11946ca0();
  /* 11943882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943885 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943888 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194388a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1194388d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943890 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943896 push edx */
  push32((uint32_t)(EDX));
  /* 11943897 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11943899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194389c push eax */
  push32((uint32_t)(EAX));
  /* 1194389d push 1 */
  push32((uint32_t)(0x1u));
  /* 1194389f call 0x11946ca0 */
  push32(0x119438a4u); f_11946ca0();
  /* 119438a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119438a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119438aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119438ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119438af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119438b2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119438b8 push edx */
  push32((uint32_t)(EDX));
  /* 119438b9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 119438bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119438be push eax */
  push32((uint32_t)(EAX));
  /* 119438bf push 1 */
  push32((uint32_t)(0x1u));
  /* 119438c1 call 0x11946ca0 */
  push32(0x119438c6u); f_11946ca0();
  /* 119438c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119438c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119438cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119438ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119438d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119438d4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119438da push edx */
  push32((uint32_t)(EDX));
  /* 119438db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 119438dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119438e0 push eax */
  push32((uint32_t)(EAX));
  /* 119438e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 119438e3 call 0x11946ca0 */
  push32(0x119438e8u); f_11946ca0();
  /* 119438e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119438eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119438ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119438f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119438f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119438f6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119438fc push edx */
  push32((uint32_t)(EDX));
  /* 119438fd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11943902 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11943905 push eax */
  push32((uint32_t)(EAX));
  /* 11943906 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943908 call 0x11946ca0 */
  push32(0x1194390du); f_11946ca0();
  /* 1194390d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943910 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11943913 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943915 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11943918 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1194391b:;
  /* 1194391b mov esp, ebp */
  ESP = (EBP);
  /* 1194391d pop ebp */
  EBP = (pop32());
  /* 1194391e ret  */
  ESPCHK(0x11943390u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11943920 (779 bytes, 265 insns) */
void f_11943920(void) {
  FTRACE(0x11943920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11943920 push ebp */
  push32((uint32_t)(EBP));
  /* 11943921 mov ebp, esp */
  EBP = (ESP);
  /* 11943923 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943927 jne 0x1194392e */
  if (!C.zf) goto L_1194392e;
  /* 11943929 jmp 0x11943c29 */
  goto L_11943c29;
L_1194392e:;
  /* 1194392e push 2 */
  push32((uint32_t)(0x2u));
  /* 11943930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943933 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11943936 push ecx */
  push32((uint32_t)(ECX));
  /* 11943937 call 0x11939570 */
  push32(0x1194393cu); f_11939570();
  /* 1194393c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194393f push 2 */
  push32((uint32_t)(0x2u));
  /* 11943941 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943944 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11943947 push eax */
  push32((uint32_t)(EAX));
  /* 11943948 call 0x11939570 */
  push32(0x1194394du); f_11939570();
  /* 1194394d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943950 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943952 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943955 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11943958 push edx */
  push32((uint32_t)(EDX));
  /* 11943959 call 0x11939570 */
  push32(0x1194395eu); f_11939570();
  /* 1194395e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943961 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943966 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11943969 push ecx */
  push32((uint32_t)(ECX));
  /* 1194396a call 0x11939570 */
  push32(0x1194396fu); f_11939570();
  /* 1194396f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943972 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943977 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1194397a push eax */
  push32((uint32_t)(EAX));
  /* 1194397b call 0x11939570 */
  push32(0x11943980u); f_11939570();
  /* 11943980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943983 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943985 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943988 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1194398b push edx */
  push32((uint32_t)(EDX));
  /* 1194398c call 0x11939570 */
  push32(0x11943991u); f_11939570();
  /* 11943991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943994 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943999 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1194399b push ecx */
  push32((uint32_t)(ECX));
  /* 1194399c call 0x11939570 */
  push32(0x119439a1u); f_11939570();
  /* 119439a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119439a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 119439a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119439a9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 119439ac push eax */
  push32((uint32_t)(EAX));
  /* 119439ad call 0x11939570 */
  push32(0x119439b2u); f_11939570();
  /* 119439b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119439b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119439b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119439ba mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 119439bd push edx */
  push32((uint32_t)(EDX));
  /* 119439be call 0x11939570 */
  push32(0x119439c3u); f_11939570();
  /* 119439c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119439c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 119439c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119439cb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 119439ce push ecx */
  push32((uint32_t)(ECX));
  /* 119439cf call 0x11939570 */
  push32(0x119439d4u); f_11939570();
  /* 119439d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119439d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119439d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119439dc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 119439df push eax */
  push32((uint32_t)(EAX));
  /* 119439e0 call 0x11939570 */
  push32(0x119439e5u); f_11939570();
  /* 119439e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119439e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 119439ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119439ed mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 119439f0 push edx */
  push32((uint32_t)(EDX));
  /* 119439f1 call 0x11939570 */
  push32(0x119439f6u); f_11939570();
  /* 119439f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119439f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 119439fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119439fe mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11943a01 push ecx */
  push32((uint32_t)(ECX));
  /* 11943a02 call 0x11939570 */
  push32(0x11943a07u); f_11939570();
  /* 11943a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943a0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11943a0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943a0f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11943a12 push eax */
  push32((uint32_t)(EAX));
  /* 11943a13 call 0x11939570 */
  push32(0x11943a18u); f_11939570();
  /* 11943a18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943a1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11943a1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943a20 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11943a23 push edx */
  push32((uint32_t)(EDX));
  /* 11943a24 call 0x11939570 */
  push32(0x11943a29u); f_11939570();
  /* 11943a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943a2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11943a2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943a31 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11943a34 push ecx */
  push32((uint32_t)(ECX));
  /* 11943a35 call 0x11939570 */
  push32(0x11943a3au); f_11939570();
  /* 11943a3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943a3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11943a3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943a42 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11943a45 push eax */
  push32((uint32_t)(EAX));
  /* 11943a46 call 0x11939570 */
  push32(0x11943a4bu); f_11939570();
  /* 11943a4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943a4e push 2 */
  push32((uint32_t)(0x2u));
  /* 11943a50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943a53 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11943a56 push edx */
  push32((uint32_t)(EDX));
  /* 11943a57 call 0x11939570 */
  push32(0x11943a5cu); f_11939570();
  /* 11943a5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943a5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11943a61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943a64 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11943a67 push ecx */
  push32((uint32_t)(ECX));
  /* 11943a68 call 0x11939570 */
  push32(0x11943a6du); f_11939570();
  /* 11943a6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943a70 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943a72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943a75 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11943a78 push eax */
  push32((uint32_t)(EAX));
  /* 11943a79 call 0x11939570 */
  push32(0x11943a7eu); f_11939570();
  /* 11943a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943a81 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943a83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943a86 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11943a89 push edx */
  push32((uint32_t)(EDX));
  /* 11943a8a call 0x11939570 */
  push32(0x11943a8fu); f_11939570();
  /* 11943a8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943a92 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943a97 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11943a9a push ecx */
  push32((uint32_t)(ECX));
  /* 11943a9b call 0x11939570 */
  push32(0x11943aa0u); f_11939570();
  /* 11943aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943aa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943aa8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11943aab push eax */
  push32((uint32_t)(EAX));
  /* 11943aac call 0x11939570 */
  push32(0x11943ab1u); f_11939570();
  /* 11943ab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943ab4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943ab6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943ab9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11943abc push edx */
  push32((uint32_t)(EDX));
  /* 11943abd call 0x11939570 */
  push32(0x11943ac2u); f_11939570();
  /* 11943ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943ac5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943ac7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943aca mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11943acd push ecx */
  push32((uint32_t)(ECX));
  /* 11943ace call 0x11939570 */
  push32(0x11943ad3u); f_11939570();
  /* 11943ad3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943ad6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943ad8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943adb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11943ade push eax */
  push32((uint32_t)(EAX));
  /* 11943adf call 0x11939570 */
  push32(0x11943ae4u); f_11939570();
  /* 11943ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943ae9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943aec mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11943aef push edx */
  push32((uint32_t)(EDX));
  /* 11943af0 call 0x11939570 */
  push32(0x11943af5u); f_11939570();
  /* 11943af5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943af8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943afa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943afd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11943b00 push ecx */
  push32((uint32_t)(ECX));
  /* 11943b01 call 0x11939570 */
  push32(0x11943b06u); f_11939570();
  /* 11943b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943b09 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943b0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943b0e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11943b11 push eax */
  push32((uint32_t)(EAX));
  /* 11943b12 call 0x11939570 */
  push32(0x11943b17u); f_11939570();
  /* 11943b17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943b1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11943b1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943b1f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11943b22 push edx */
  push32((uint32_t)(EDX));
  /* 11943b23 call 0x11939570 */
  push32(0x11943b28u); f_11939570();
  /* 11943b28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943b2b push 2 */
  push32((uint32_t)(0x2u));
  /* 11943b2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943b30 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11943b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11943b34 call 0x11939570 */
  push32(0x11943b39u); f_11939570();
  /* 11943b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943b3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11943b3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943b41 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11943b44 push eax */
  push32((uint32_t)(EAX));
  /* 11943b45 call 0x11939570 */
  push32(0x11943b4au); f_11939570();
  /* 11943b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11943b4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943b52 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11943b58 push edx */
  push32((uint32_t)(EDX));
  /* 11943b59 call 0x11939570 */
  push32(0x11943b5eu); f_11939570();
  /* 11943b5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943b61 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943b63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943b66 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11943b6c push ecx */
  push32((uint32_t)(ECX));
  /* 11943b6d call 0x11939570 */
  push32(0x11943b72u); f_11939570();
  /* 11943b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943b75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943b77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943b7a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11943b80 push eax */
  push32((uint32_t)(EAX));
  /* 11943b81 call 0x11939570 */
  push32(0x11943b86u); f_11939570();
  /* 11943b86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943b89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943b8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943b8e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11943b94 push edx */
  push32((uint32_t)(EDX));
  /* 11943b95 call 0x11939570 */
  push32(0x11943b9au); f_11939570();
  /* 11943b9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943b9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11943b9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943ba2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11943ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 11943ba9 call 0x11939570 */
  push32(0x11943baeu); f_11939570();
  /* 11943bae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943bb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943bb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943bb6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11943bbc push eax */
  push32((uint32_t)(EAX));
  /* 11943bbd call 0x11939570 */
  push32(0x11943bc2u); f_11939570();
  /* 11943bc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943bc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943bc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943bca mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11943bd0 push edx */
  push32((uint32_t)(EDX));
  /* 11943bd1 call 0x11939570 */
  push32(0x11943bd6u); f_11939570();
  /* 11943bd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943bd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943bdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943bde mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11943be4 push ecx */
  push32((uint32_t)(ECX));
  /* 11943be5 call 0x11939570 */
  push32(0x11943beau); f_11939570();
  /* 11943bea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943bed push 2 */
  push32((uint32_t)(0x2u));
  /* 11943bef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943bf2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11943bf8 push eax */
  push32((uint32_t)(EAX));
  /* 11943bf9 call 0x11939570 */
  push32(0x11943bfeu); f_11939570();
  /* 11943bfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943c01 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943c03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943c06 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11943c0c push edx */
  push32((uint32_t)(EDX));
  /* 11943c0d call 0x11939570 */
  push32(0x11943c12u); f_11939570();
  /* 11943c12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943c15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943c17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943c1a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11943c20 push ecx */
  push32((uint32_t)(ECX));
  /* 11943c21 call 0x11939570 */
  push32(0x11943c26u); f_11939570();
  /* 11943c26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11943c29:;
  /* 11943c29 pop ebp */
  EBP = (pop32());
  /* 11943c2a ret  */
  ESPCHK(0x11943920u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c30 @ 0x11943c30 (678 bytes, 180 insns) */
void f_11943c30(void) {
  FTRACE(0x11943c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11943c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11943c31 mov ebp, esp */
  EBP = (ESP);
  /* 11943c33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11943c36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11943c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11943c3f mov ax, word ptr [0x11965ab2] */
  AX = (r16((uint32_t)(0x11965ab2)));
  /* 11943c45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11943c48 cmp dword ptr [0x11965a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943c4f je 0x11943daa */
  if (C.zf) goto L_11943daa;
  /* 11943c55 push 0x11965a80 */
  push32((uint32_t)(0x11965a80u));
  /* 11943c5a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11943c5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943c5f push ecx */
  push32((uint32_t)(ECX));
  /* 11943c60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11943c62 call 0x11946ca0 */
  push32(0x11943c67u); f_11946ca0();
  /* 11943c67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943c6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11943c6d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11943c6f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11943c72 push 0x11965a84 */
  push32((uint32_t)(0x11965a84u));
  /* 11943c77 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11943c79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943c7c push eax */
  push32((uint32_t)(EAX));
  /* 11943c7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11943c7f call 0x11946ca0 */
  push32(0x11943c84u); f_11946ca0();
  /* 11943c84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943c87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11943c8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943c8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11943c8f push 0x11965a88 */
  push32((uint32_t)(0x11965a88u));
  /* 11943c94 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11943c96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943c99 push edx */
  push32((uint32_t)(EDX));
  /* 11943c9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11943c9c call 0x11946ca0 */
  push32(0x11943ca1u); f_11946ca0();
  /* 11943ca1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943ca4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11943ca7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11943ca9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11943cac mov edx, dword ptr [0x11965a88] */
  EDX = (r32((uint32_t)(0x11965a88)));
  /* 11943cb2 push edx */
  push32((uint32_t)(EDX));
  /* 11943cb3 call 0x11943ee0 */
  push32(0x11943cb8u); f_11943ee0();
  /* 11943cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943cbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943cbf je 0x11943d19 */
  if (C.zf) goto L_11943d19;
  /* 11943cc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943cc3 mov eax, dword ptr [0x11965a80] */
  EAX = (r32((uint32_t)(0x11965a80)));
  /* 11943cc8 push eax */
  push32((uint32_t)(EAX));
  /* 11943cc9 call 0x11939570 */
  push32(0x11943cceu); f_11939570();
  /* 11943cce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943cd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943cd3 mov ecx, dword ptr [0x11965a84] */
  ECX = (r32((uint32_t)(0x11965a84)));
  /* 11943cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11943cda call 0x11939570 */
  push32(0x11943cdfu); f_11939570();
  /* 11943cdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943ce2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943ce4 mov edx, dword ptr [0x11965a88] */
  EDX = (r32((uint32_t)(0x11965a88)));
  /* 11943cea push edx */
  push32((uint32_t)(EDX));
  /* 11943ceb call 0x11939570 */
  push32(0x11943cf0u); f_11939570();
  /* 11943cf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943cf3 mov dword ptr [0x11965a80], 0 */
  w32((uint32_t)(0x11965a80), (0x0u));
  /* 11943cfd mov dword ptr [0x11965a84], 0 */
  w32((uint32_t)(0x11965a84), (0x0u));
  /* 11943d07 mov dword ptr [0x11965a88], 0 */
  w32((uint32_t)(0x11965a88), (0x0u));
  /* 11943d11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11943d14 jmp 0x11943ed2 */
  goto L_11943ed2;
L_11943d19:;
  /* 11943d19 mov eax, dword ptr [0x11964d88] */
  EAX = (r32((uint32_t)(0x11964d88)));
  /* 11943d1e cmp dword ptr [eax], 0x11964d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11964d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943d24 je 0x11943d60 */
  if (C.zf) goto L_11943d60;
  /* 11943d26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943d28 mov ecx, dword ptr [0x11964d88] */
  ECX = (r32((uint32_t)(0x11964d88)));
  /* 11943d2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11943d30 push edx */
  push32((uint32_t)(EDX));
  /* 11943d31 call 0x11939570 */
  push32(0x11943d36u); f_11939570();
  /* 11943d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943d39 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943d3b mov eax, dword ptr [0x11964d88] */
  EAX = (r32((uint32_t)(0x11964d88)));
  /* 11943d40 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11943d43 push ecx */
  push32((uint32_t)(ECX));
  /* 11943d44 call 0x11939570 */
  push32(0x11943d49u); f_11939570();
  /* 11943d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11943d4e mov edx, dword ptr [0x11964d88] */
  EDX = (r32((uint32_t)(0x11964d88)));
  /* 11943d54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11943d57 push eax */
  push32((uint32_t)(EAX));
  /* 11943d58 call 0x11939570 */
  push32(0x11943d5du); f_11939570();
  /* 11943d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11943d60:;
  /* 11943d60 mov ecx, dword ptr [0x11964d88] */
  ECX = (r32((uint32_t)(0x11964d88)));
  /* 11943d66 mov edx, dword ptr [0x11965a80] */
  EDX = (r32((uint32_t)(0x11965a80)));
  /* 11943d6c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11943d6e mov eax, dword ptr [0x11964d88] */
  EAX = (r32((uint32_t)(0x11964d88)));
  /* 11943d73 mov ecx, dword ptr [0x11965a84] */
  ECX = (r32((uint32_t)(0x11965a84)));
  /* 11943d79 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11943d7c mov edx, dword ptr [0x11964d88] */
  EDX = (r32((uint32_t)(0x11964d88)));
  /* 11943d82 mov eax, dword ptr [0x11965a88] */
  EAX = (r32((uint32_t)(0x11965a88)));
  /* 11943d87 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11943d8a mov ecx, dword ptr [0x11964d88] */
  ECX = (r32((uint32_t)(0x11964d88)));
  /* 11943d90 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11943d92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11943d94 mov byte ptr [0x11963ea8], al */
  w8((uint32_t)(0x11963ea8), (AL));
  /* 11943d99 mov dword ptr [0x11963eac], 1 */
  w32((uint32_t)(0x11963eac), (0x1u));
  /* 11943da3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11943da5 jmp 0x11943ed2 */
  goto L_11943ed2;
L_11943daa:;
  /* 11943daa push 2 */
  push32((uint32_t)(0x2u));
  /* 11943dac mov ecx, dword ptr [0x11965a80] */
  ECX = (r32((uint32_t)(0x11965a80)));
  /* 11943db2 push ecx */
  push32((uint32_t)(ECX));
  /* 11943db3 call 0x11939570 */
  push32(0x11943db8u); f_11939570();
  /* 11943db8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943dbb push 2 */
  push32((uint32_t)(0x2u));
  /* 11943dbd mov edx, dword ptr [0x11965a84] */
  EDX = (r32((uint32_t)(0x11965a84)));
  /* 11943dc3 push edx */
  push32((uint32_t)(EDX));
  /* 11943dc4 call 0x11939570 */
  push32(0x11943dc9u); f_11939570();
  /* 11943dc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943dcc push 2 */
  push32((uint32_t)(0x2u));
  /* 11943dce mov eax, dword ptr [0x11965a88] */
  EAX = (r32((uint32_t)(0x11965a88)));
  /* 11943dd3 push eax */
  push32((uint32_t)(EAX));
  /* 11943dd4 call 0x11939570 */
  push32(0x11943dd9u); f_11939570();
  /* 11943dd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943ddc mov dword ptr [0x11965a80], 0 */
  w32((uint32_t)(0x11965a80), (0x0u));
  /* 11943de6 mov dword ptr [0x11965a84], 0 */
  w32((uint32_t)(0x11965a84), (0x0u));
  /* 11943df0 mov dword ptr [0x11965a88], 0 */
  w32((uint32_t)(0x11965a88), (0x0u));
  /* 11943dfa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11943dff push 0x11960fac */
  push32((uint32_t)(0x11960facu));
  /* 11943e04 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943e06 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943e08 call 0x11938ae0 */
  push32(0x11943e0du); f_11938ae0();
  /* 11943e0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943e10 mov ecx, dword ptr [0x11964d88] */
  ECX = (r32((uint32_t)(0x11964d88)));
  /* 11943e16 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11943e18 mov edx, dword ptr [0x11964d88] */
  EDX = (r32((uint32_t)(0x11964d88)));
  /* 11943e1e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943e21 jne 0x11943e2b */
  if (!C.zf) goto L_11943e2b;
  /* 11943e23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11943e26 jmp 0x11943ed2 */
  goto L_11943ed2;
L_11943e2b:;
  /* 11943e2b push 0x11960f7c */
  push32((uint32_t)(0x11960f7cu));
  /* 11943e30 mov eax, dword ptr [0x11964d88] */
  EAX = (r32((uint32_t)(0x11964d88)));
  /* 11943e35 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11943e37 push ecx */
  push32((uint32_t)(ECX));
  /* 11943e38 call 0x1193ba90 */
  push32(0x11943e3du); f_1193ba90();
  /* 11943e3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943e40 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11943e45 push 0x11960fac */
  push32((uint32_t)(0x11960facu));
  /* 11943e4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11943e4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11943e4e call 0x11938ae0 */
  push32(0x11943e53u); f_11938ae0();
  /* 11943e53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943e56 mov edx, dword ptr [0x11964d88] */
  EDX = (r32((uint32_t)(0x11964d88)));
  /* 11943e5c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11943e5f mov eax, dword ptr [0x11964d88] */
  EAX = (r32((uint32_t)(0x11964d88)));
  /* 11943e64 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943e68 jne 0x11943e6f */
  if (!C.zf) goto L_11943e6f;
  /* 11943e6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11943e6d jmp 0x11943ed2 */
  goto L_11943ed2;
L_11943e6f:;
  /* 11943e6f mov ecx, dword ptr [0x11964d88] */
  ECX = (r32((uint32_t)(0x11964d88)));
  /* 11943e75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11943e78 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11943e7b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11943e80 push 0x11960fac */
  push32((uint32_t)(0x11960facu));
  /* 11943e85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943e87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943e89 call 0x11938ae0 */
  push32(0x11943e8eu); f_11938ae0();
  /* 11943e8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943e91 mov ecx, dword ptr [0x11964d88] */
  ECX = (r32((uint32_t)(0x11964d88)));
  /* 11943e97 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11943e9a mov edx, dword ptr [0x11964d88] */
  EDX = (r32((uint32_t)(0x11964d88)));
  /* 11943ea0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943ea4 jne 0x11943eab */
  if (!C.zf) goto L_11943eab;
  /* 11943ea6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11943ea9 jmp 0x11943ed2 */
  goto L_11943ed2;
L_11943eab:;
  /* 11943eab mov eax, dword ptr [0x11964d88] */
  EAX = (r32((uint32_t)(0x11964d88)));
  /* 11943eb0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11943eb3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11943eb6 mov edx, dword ptr [0x11964d88] */
  EDX = (r32((uint32_t)(0x11964d88)));
  /* 11943ebc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11943ebe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11943ec0 mov byte ptr [0x11963ea8], cl */
  w8((uint32_t)(0x11963ea8), (CL));
  /* 11943ec6 mov dword ptr [0x11963eac], 1 */
  w32((uint32_t)(0x11963eac), (0x1u));
  /* 11943ed0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11943ed2:;
  /* 11943ed2 mov esp, ebp */
  ESP = (EBP);
  /* 11943ed4 pop ebp */
  EBP = (pop32());
  /* 11943ed5 ret  */
  ESPCHK(0x11943c30u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11943ee0 (125 bytes, 49 insns) */
void f_11943ee0(void) {
  FTRACE(0x11943ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11943ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11943ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11943ee3 push ecx */
  push32((uint32_t)(ECX));
L_11943ee4:;
  /* 11943ee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943ee7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11943eea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11943eec je 0x11943f59 */
  if (C.zf) goto L_11943f59;
  /* 11943eee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943ef1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11943ef4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943ef7 jl 0x11943f1d */
  if ((C.sf!=C.of)) goto L_11943f1d;
  /* 11943ef9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943efc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11943eff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943f02 jg 0x11943f1d */
  if ((!C.zf&&C.sf==C.of)) goto L_11943f1d;
  /* 11943f04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943f07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11943f0a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11943f0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943f10 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11943f12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943f15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943f18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11943f1b jmp 0x11943f57 */
  goto L_11943f57;
L_11943f1d:;
  /* 11943f1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943f20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11943f23 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943f26 jne 0x11943f4e */
  if (!C.zf) goto L_11943f4e;
  /* 11943f28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943f2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11943f2e:;
  /* 11943f2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943f31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943f34 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11943f37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11943f39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943f3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943f3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11943f42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943f45 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11943f48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11943f4a jne 0x11943f2e */
  if (!C.zf) goto L_11943f2e;
  /* 11943f4c jmp 0x11943f57 */
  goto L_11943f57;
L_11943f4e:;
  /* 11943f4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11943f51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11943f54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11943f57:;
  /* 11943f57 jmp 0x11943ee4 */
  goto L_11943ee4;
L_11943f59:;
  /* 11943f59 mov esp, ebp */
  ESP = (EBP);
  /* 11943f5b pop ebp */
  EBP = (pop32());
  /* 11943f5c ret  */
  ESPCHK(0x11943ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f60 @ 0x11943f60 (304 bytes, 85 insns) */
void f_11943f60(void) {
  FTRACE(0x11943f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11943f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11943f61 mov ebp, esp */
  EBP = (ESP);
  /* 11943f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11943f64 cmp dword ptr [0x11965a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943f6b je 0x1194402c */
  if (C.zf) goto L_1194402c;
  /* 11943f71 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11943f73 push 0x11960fb8 */
  push32((uint32_t)(0x11960fb8u));
  /* 11943f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943f7a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11943f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11943f7e call 0x11938ef0 */
  push32(0x11943f83u); f_11938ef0();
  /* 11943f83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943f86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11943f89 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11943f8d jne 0x11943f99 */
  if (!C.zf) goto L_11943f99;
  /* 11943f8f mov eax, 1 */
  EAX = (0x1u);
  /* 11943f94 jmp 0x1194408c */
  goto L_1194408c;
L_11943f99:;
  /* 11943f99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943f9c push eax */
  push32((uint32_t)(EAX));
  /* 11943f9d call 0x11944090 */
  push32(0x11943fa2u); f_11944090();
  /* 11943fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943fa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11943fa7 je 0x11943fcd */
  if (C.zf) goto L_11943fcd;
  /* 11943fa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943fac push ecx */
  push32((uint32_t)(ECX));
  /* 11943fad call 0x11944320 */
  push32(0x11943fb2u); f_11944320();
  /* 11943fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943fb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11943fb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943fba push edx */
  push32((uint32_t)(EDX));
  /* 11943fbb call 0x11939570 */
  push32(0x11943fc0u); f_11939570();
  /* 11943fc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11943fc3 mov eax, 1 */
  EAX = (0x1u);
  /* 11943fc8 jmp 0x1194408c */
  goto L_1194408c;
L_11943fcd:;
  /* 11943fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943fd0 mov ecx, dword ptr [0x11964d88] */
  ECX = (r32((uint32_t)(0x11964d88)));
  /* 11943fd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11943fd8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11943fda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943fdd mov ecx, dword ptr [0x11964d88] */
  ECX = (r32((uint32_t)(0x11964d88)));
  /* 11943fe3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11943fe6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11943fe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943fec mov ecx, dword ptr [0x11964d88] */
  ECX = (r32((uint32_t)(0x11964d88)));
  /* 11943ff2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11943ff5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11943ff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11943ffb mov dword ptr [0x11964d88], eax */
  w32((uint32_t)(0x11964d88), (EAX));
  /* 11944000 mov ecx, dword ptr [0x11965a8c] */
  ECX = (r32((uint32_t)(0x11965a8c)));
  /* 11944006 push ecx */
  push32((uint32_t)(ECX));
  /* 11944007 call 0x11944320 */
  push32(0x1194400cu); f_11944320();
  /* 1194400c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194400f push 2 */
  push32((uint32_t)(0x2u));
  /* 11944011 mov edx, dword ptr [0x11965a8c] */
  EDX = (r32((uint32_t)(0x11965a8c)));
  /* 11944017 push edx */
  push32((uint32_t)(EDX));
  /* 11944018 call 0x11939570 */
  push32(0x1194401du); f_11939570();
  /* 1194401d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944020 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944023 mov dword ptr [0x11965a8c], eax */
  w32((uint32_t)(0x11965a8c), (EAX));
  /* 11944028 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194402a jmp 0x1194408c */
  goto L_1194408c;
L_1194402c:;
  /* 1194402c mov ecx, dword ptr [0x11964d88] */
  ECX = (r32((uint32_t)(0x11964d88)));
  /* 11944032 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11944034 mov dword ptr [0x11964d58], edx */
  w32((uint32_t)(0x11964d58), (EDX));
  /* 1194403a mov eax, dword ptr [0x11964d88] */
  EAX = (r32((uint32_t)(0x11964d88)));
  /* 1194403f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11944042 mov dword ptr [0x11964d5c], ecx */
  w32((uint32_t)(0x11964d5c), (ECX));
  /* 11944048 mov edx, dword ptr [0x11964d88] */
  EDX = (r32((uint32_t)(0x11964d88)));
  /* 1194404e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11944051 mov dword ptr [0x11964d60], eax */
  w32((uint32_t)(0x11964d60), (EAX));
  /* 11944056 mov dword ptr [0x11964d88], 0x11964d58 */
  w32((uint32_t)(0x11964d88), (0x11964d58u));
  /* 11944060 mov ecx, dword ptr [0x11965a8c] */
  ECX = (r32((uint32_t)(0x11965a8c)));
  /* 11944066 push ecx */
  push32((uint32_t)(ECX));
  /* 11944067 call 0x11944320 */
  push32(0x1194406cu); f_11944320();
  /* 1194406c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194406f push 2 */
  push32((uint32_t)(0x2u));
  /* 11944071 mov edx, dword ptr [0x11965a8c] */
  EDX = (r32((uint32_t)(0x11965a8c)));
  /* 11944077 push edx */
  push32((uint32_t)(EDX));
  /* 11944078 call 0x11939570 */
  push32(0x1194407du); f_11939570();
  /* 1194407d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944080 mov dword ptr [0x11965a8c], 0 */
  w32((uint32_t)(0x11965a8c), (0x0u));
  /* 1194408a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1194408c:;
  /* 1194408c mov esp, ebp */
  ESP = (EBP);
  /* 1194408e pop ebp */
  EBP = (pop32());
  /* 1194408f ret  */
  ESPCHK(0x11943f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014090 @ 0x11944090 (525 bytes, 200 insns) */
void f_11944090(void) {
  FTRACE(0x11944090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944090 push ebp */
  push32((uint32_t)(EBP));
  /* 11944091 mov ebp, esp */
  EBP = (ESP);
  /* 11944093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944096 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1194409d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194409f mov ax, word ptr [0x11965aac] */
  AX = (r16((uint32_t)(0x11965aac)));
  /* 119440a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119440a8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119440ac jne 0x119440b6 */
  if (!C.zf) goto L_119440b6;
  /* 119440ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119440b1 jmp 0x11944299 */
  goto L_11944299;
L_119440b6:;
  /* 119440b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119440b9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119440bc push ecx */
  push32((uint32_t)(ECX));
  /* 119440bd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 119440bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119440c2 push edx */
  push32((uint32_t)(EDX));
  /* 119440c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119440c5 call 0x11946ca0 */
  push32(0x119440cau); f_11946ca0();
  /* 119440ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119440cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119440d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119440d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119440d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119440d8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119440db push edx */
  push32((uint32_t)(EDX));
  /* 119440dc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 119440de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119440e1 push eax */
  push32((uint32_t)(EAX));
  /* 119440e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 119440e4 call 0x11946ca0 */
  push32(0x119440e9u); f_11946ca0();
  /* 119440e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119440ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119440ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119440f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119440f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119440f7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119440fa push edx */
  push32((uint32_t)(EDX));
  /* 119440fb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 119440fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944100 push eax */
  push32((uint32_t)(EAX));
  /* 11944101 push 1 */
  push32((uint32_t)(0x1u));
  /* 11944103 call 0x11946ca0 */
  push32(0x11944108u); f_11946ca0();
  /* 11944108 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194410b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194410e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11944110 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11944113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944116 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944119 push edx */
  push32((uint32_t)(EDX));
  /* 1194411a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1194411c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194411f push eax */
  push32((uint32_t)(EAX));
  /* 11944120 push 1 */
  push32((uint32_t)(0x1u));
  /* 11944122 call 0x11946ca0 */
  push32(0x11944127u); f_11946ca0();
  /* 11944127 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194412a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194412d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194412f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11944132 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944135 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944138 push edx */
  push32((uint32_t)(EDX));
  /* 11944139 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1194413b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194413e push eax */
  push32((uint32_t)(EAX));
  /* 1194413f push 1 */
  push32((uint32_t)(0x1u));
  /* 11944141 call 0x11946ca0 */
  push32(0x11944146u); f_11946ca0();
  /* 11944146 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944149 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194414c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194414e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11944151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944154 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11944157 push eax */
  push32((uint32_t)(EAX));
  /* 11944158 call 0x119442a0 */
  push32(0x1194415du); f_119442a0();
  /* 1194415d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944160 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944163 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944166 push ecx */
  push32((uint32_t)(ECX));
  /* 11944167 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11944169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194416c push edx */
  push32((uint32_t)(EDX));
  /* 1194416d push 1 */
  push32((uint32_t)(0x1u));
  /* 1194416f call 0x11946ca0 */
  push32(0x11944174u); f_11946ca0();
  /* 11944174 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944177 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194417a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194417c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1194417f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944182 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944185 push edx */
  push32((uint32_t)(EDX));
  /* 11944186 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11944188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194418b push eax */
  push32((uint32_t)(EAX));
  /* 1194418c push 1 */
  push32((uint32_t)(0x1u));
  /* 1194418e call 0x11946ca0 */
  push32(0x11944193u); f_11946ca0();
  /* 11944193 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944196 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11944199 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194419b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1194419e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119441a1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119441a4 push edx */
  push32((uint32_t)(EDX));
  /* 119441a5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 119441a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119441aa push eax */
  push32((uint32_t)(EAX));
  /* 119441ab push 0 */
  push32((uint32_t)(0x0u));
  /* 119441ad call 0x11946ca0 */
  push32(0x119441b2u); f_11946ca0();
  /* 119441b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119441b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119441b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119441ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119441bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119441c0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119441c3 push edx */
  push32((uint32_t)(EDX));
  /* 119441c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119441c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119441c9 push eax */
  push32((uint32_t)(EAX));
  /* 119441ca push 0 */
  push32((uint32_t)(0x0u));
  /* 119441cc call 0x11946ca0 */
  push32(0x119441d1u); f_11946ca0();
  /* 119441d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119441d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119441d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119441d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119441dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119441df add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119441e2 push edx */
  push32((uint32_t)(EDX));
  /* 119441e3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 119441e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119441e8 push eax */
  push32((uint32_t)(EAX));
  /* 119441e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119441eb call 0x11946ca0 */
  push32(0x119441f0u); f_11946ca0();
  /* 119441f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119441f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119441f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119441f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119441fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119441fe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944201 push edx */
  push32((uint32_t)(EDX));
  /* 11944202 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11944204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944207 push eax */
  push32((uint32_t)(EAX));
  /* 11944208 push 0 */
  push32((uint32_t)(0x0u));
  /* 1194420a call 0x11946ca0 */
  push32(0x1194420fu); f_11946ca0();
  /* 1194420f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944212 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11944215 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11944217 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1194421a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194421d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944220 push edx */
  push32((uint32_t)(EDX));
  /* 11944221 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11944223 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944226 push eax */
  push32((uint32_t)(EAX));
  /* 11944227 push 0 */
  push32((uint32_t)(0x0u));
  /* 11944229 call 0x11946ca0 */
  push32(0x1194422eu); f_11946ca0();
  /* 1194422e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944231 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11944234 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11944236 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11944239 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194423c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194423f push edx */
  push32((uint32_t)(EDX));
  /* 11944240 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11944242 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944245 push eax */
  push32((uint32_t)(EAX));
  /* 11944246 push 0 */
  push32((uint32_t)(0x0u));
  /* 11944248 call 0x11946ca0 */
  push32(0x1194424du); f_11946ca0();
  /* 1194424d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944250 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11944253 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11944255 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11944258 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194425b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194425e push edx */
  push32((uint32_t)(EDX));
  /* 1194425f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11944261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944264 push eax */
  push32((uint32_t)(EAX));
  /* 11944265 push 0 */
  push32((uint32_t)(0x0u));
  /* 11944267 call 0x11946ca0 */
  push32(0x1194426cu); f_11946ca0();
  /* 1194426c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194426f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11944272 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11944274 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11944277 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194427a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194427d push edx */
  push32((uint32_t)(EDX));
  /* 1194427e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11944280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944283 push eax */
  push32((uint32_t)(EAX));
  /* 11944284 push 0 */
  push32((uint32_t)(0x0u));
  /* 11944286 call 0x11946ca0 */
  push32(0x1194428bu); f_11946ca0();
  /* 1194428b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194428e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11944291 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11944293 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11944296 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11944299:;
  /* 11944299 mov esp, ebp */
  ESP = (EBP);
  /* 1194429b pop ebp */
  EBP = (pop32());
  /* 1194429c ret  */
  ESPCHK(0x11944090u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x119442a0 (125 bytes, 49 insns) */
void f_119442a0(void) {
  FTRACE(0x119442a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119442a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119442a1 mov ebp, esp */
  EBP = (ESP);
  /* 119442a3 push ecx */
  push32((uint32_t)(ECX));
L_119442a4:;
  /* 119442a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119442a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119442aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119442ac je 0x11944319 */
  if (C.zf) goto L_11944319;
  /* 119442ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119442b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119442b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119442b7 jl 0x119442dd */
  if ((C.sf!=C.of)) goto L_119442dd;
  /* 119442b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119442bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119442bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119442c2 jg 0x119442dd */
  if ((!C.zf&&C.sf==C.of)) goto L_119442dd;
  /* 119442c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119442c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119442ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119442cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119442d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 119442d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119442d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119442d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119442db jmp 0x11944317 */
  goto L_11944317;
L_119442dd:;
  /* 119442dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119442e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119442e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119442e6 jne 0x1194430e */
  if (!C.zf) goto L_1194430e;
  /* 119442e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119442eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119442ee:;
  /* 119442ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119442f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119442f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 119442f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119442f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119442fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119442ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11944302 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944305 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11944308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194430a jne 0x119442ee */
  if (!C.zf) goto L_119442ee;
  /* 1194430c jmp 0x11944317 */
  goto L_11944317;
L_1194430e:;
  /* 1194430e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944311 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944314 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11944317:;
  /* 11944317 jmp 0x119442a4 */
  goto L_119442a4;
L_11944319:;
  /* 11944319 mov esp, ebp */
  ESP = (EBP);
  /* 1194431b pop ebp */
  EBP = (pop32());
  /* 1194431c ret  */
  ESPCHK(0x119442a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014320 @ 0x11944320 (147 bytes, 52 insns) */
void f_11944320(void) {
  FTRACE(0x11944320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944320 push ebp */
  push32((uint32_t)(EBP));
  /* 11944321 mov ebp, esp */
  EBP = (ESP);
  /* 11944323 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944327 jne 0x1194432e */
  if (!C.zf) goto L_1194432e;
  /* 11944329 jmp 0x119443b1 */
  goto L_119443b1;
L_1194432e:;
  /* 1194432e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944331 cmp dword ptr [eax + 0xc], 0x11965ae8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11965ae8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944338 je 0x119443b1 */
  if (C.zf) goto L_119443b1;
  /* 1194433a push 2 */
  push32((uint32_t)(0x2u));
  /* 1194433c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194433f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11944342 push edx */
  push32((uint32_t)(EDX));
  /* 11944343 call 0x11939570 */
  push32(0x11944348u); f_11939570();
  /* 11944348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194434b push 2 */
  push32((uint32_t)(0x2u));
  /* 1194434d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944350 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11944353 push ecx */
  push32((uint32_t)(ECX));
  /* 11944354 call 0x11939570 */
  push32(0x11944359u); f_11939570();
  /* 11944359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194435c push 2 */
  push32((uint32_t)(0x2u));
  /* 1194435e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944361 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11944364 push eax */
  push32((uint32_t)(EAX));
  /* 11944365 call 0x11939570 */
  push32(0x1194436au); f_11939570();
  /* 1194436a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194436d push 2 */
  push32((uint32_t)(0x2u));
  /* 1194436f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944372 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11944375 push edx */
  push32((uint32_t)(EDX));
  /* 11944376 call 0x11939570 */
  push32(0x1194437bu); f_11939570();
  /* 1194437b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194437e push 2 */
  push32((uint32_t)(0x2u));
  /* 11944380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944383 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11944386 push ecx */
  push32((uint32_t)(ECX));
  /* 11944387 call 0x11939570 */
  push32(0x1194438cu); f_11939570();
  /* 1194438c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194438f push 2 */
  push32((uint32_t)(0x2u));
  /* 11944391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944394 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11944397 push eax */
  push32((uint32_t)(EAX));
  /* 11944398 call 0x11939570 */
  push32(0x1194439du); f_11939570();
  /* 1194439d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119443a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119443a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119443a5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 119443a8 push edx */
  push32((uint32_t)(EDX));
  /* 119443a9 call 0x11939570 */
  push32(0x119443aeu); f_11939570();
  /* 119443ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119443b1:;
  /* 119443b1 pop ebp */
  EBP = (pop32());
  /* 119443b2 ret  */
  ESPCHK(0x11944320u, _esp0);
  ESP += 4; return;
}

/* FUN_100143c0 @ 0x119443c0 (928 bytes, 284 insns) */
void f_119443c0(void) {
  FTRACE(0x119443c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119443c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119443c1 mov ebp, esp */
  EBP = (ESP);
  /* 119443c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119443c6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 119443cd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 119443d4 cmp dword ptr [0x11965a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119443db je 0x11944711 */
  if (C.zf) goto L_11944711;
  /* 119443e1 cmp dword ptr [0x11965a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119443e8 jne 0x11944410 */
  if (!C.zf) goto L_11944410;
  /* 119443ea push 0x11965a60 */
  push32((uint32_t)(0x11965a60u));
  /* 119443ef push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 119443f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119443f6 mov ax, word ptr [0x11965aa4] */
  AX = (r16((uint32_t)(0x11965aa4)));
  /* 119443fc push eax */
  push32((uint32_t)(EAX));
  /* 119443fd push 0 */
  push32((uint32_t)(0x0u));
  /* 119443ff call 0x11946ca0 */
  push32(0x11944404u); f_11946ca0();
  /* 11944404 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944409 je 0x11944410 */
  if (C.zf) goto L_11944410;
  /* 1194440b jmp 0x119446d2 */
  goto L_119446d2;
L_11944410:;
  /* 11944410 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11944412 push 0x11960fc4 */
  push32((uint32_t)(0x11960fc4u));
  /* 11944417 push 2 */
  push32((uint32_t)(0x2u));
  /* 11944419 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1194441e call 0x11938ae0 */
  push32(0x11944423u); f_11938ae0();
  /* 11944423 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944426 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11944429 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1194442b push 0x11960fc4 */
  push32((uint32_t)(0x11960fc4u));
  /* 11944430 push 2 */
  push32((uint32_t)(0x2u));
  /* 11944432 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11944437 call 0x11938ae0 */
  push32(0x1194443cu); f_11938ae0();
  /* 1194443c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194443f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11944442 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11944444 push 0x11960fc4 */
  push32((uint32_t)(0x11960fc4u));
  /* 11944449 push 2 */
  push32((uint32_t)(0x2u));
  /* 1194444b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11944450 call 0x11938ae0 */
  push32(0x11944455u); f_11938ae0();
  /* 11944455 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944458 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1194445b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1194445d push 0x11960fc4 */
  push32((uint32_t)(0x11960fc4u));
  /* 11944462 push 2 */
  push32((uint32_t)(0x2u));
  /* 11944464 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11944469 call 0x11938ae0 */
  push32(0x1194446eu); f_11938ae0();
  /* 1194446e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944471 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11944474 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944478 je 0x1194448c */
  if (C.zf) goto L_1194448c;
  /* 1194447a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194447e je 0x1194448c */
  if (C.zf) goto L_1194448c;
  /* 11944480 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944484 je 0x1194448c */
  if (C.zf) goto L_1194448c;
  /* 11944486 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194448a jne 0x11944491 */
  if (!C.zf) goto L_11944491;
L_1194448c:;
  /* 1194448c jmp 0x119446d2 */
  goto L_119446d2;
L_11944491:;
  /* 11944491 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11944494 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11944497 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1194449e jmp 0x119444a9 */
  goto L_119444a9;
L_119444a0:;
  /* 119444a0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119444a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119444a6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_119444a9:;
  /* 119444a9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119444b0 jge 0x119444c5 */
  if ((C.sf==C.of)) goto L_119444c5;
  /* 119444b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119444b5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 119444b8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 119444ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119444bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119444c0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119444c3 jmp 0x119444a0 */
  goto L_119444a0;
L_119444c5:;
  /* 119444c5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 119444c8 push eax */
  push32((uint32_t)(EAX));
  /* 119444c9 mov ecx, dword ptr [0x11965a60] */
  ECX = (r32((uint32_t)(0x11965a60)));
  /* 119444cf push ecx */
  push32((uint32_t)(ECX));
  /* 119444d0 call dword ptr [0x11968338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968338))), 0x119444d6u);
  /* 119444d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119444d8 jne 0x119444df */
  if (!C.zf) goto L_119444df;
  /* 119444da jmp 0x119446d2 */
  goto L_119446d2;
L_119444df:;
  /* 119444df cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119444e3 jbe 0x119444ea */
  if ((C.cf||C.zf)) goto L_119444ea;
  /* 119444e5 jmp 0x119446d2 */
  goto L_119446d2;
L_119444ea:;
  /* 119444ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119444ed and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119444f3 mov dword ptr [0x11963ea4], edx */
  w32((uint32_t)(0x11963ea4), (EDX));
  /* 119444f9 cmp dword ptr [0x11963ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11963ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944500 jle 0x11944559 */
  if ((C.zf||C.sf!=C.of)) goto L_11944559;
  /* 11944502 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11944505 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11944508 jmp 0x11944513 */
  goto L_11944513;
L_1194450a:;
  /* 1194450a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1194450d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944510 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11944513:;
  /* 11944513 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11944516 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11944518 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1194451a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194451c je 0x11944559 */
  if (C.zf) goto L_11944559;
  /* 1194451e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11944521 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11944523 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11944526 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11944528 je 0x11944559 */
  if (C.zf) goto L_11944559;
  /* 1194452a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1194452d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1194452f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11944531 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11944534 jmp 0x1194453f */
  goto L_1194453f;
L_11944536:;
  /* 11944536 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11944539 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194453c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1194453f:;
  /* 1194453f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11944542 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11944544 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11944547 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194454a jg 0x11944557 */
  if ((!C.zf&&C.sf==C.of)) goto L_11944557;
  /* 1194454c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1194454f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944552 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11944555 jmp 0x11944536 */
  goto L_11944536;
L_11944557:;
  /* 11944557 jmp 0x1194450a */
  goto L_1194450a;
L_11944559:;
  /* 11944559 push 0 */
  push32((uint32_t)(0x0u));
  /* 1194455b push 0 */
  push32((uint32_t)(0x0u));
  /* 1194455d push 0 */
  push32((uint32_t)(0x0u));
  /* 1194455f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11944562 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944565 push eax */
  push32((uint32_t)(EAX));
  /* 11944566 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1194456b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1194456e push ecx */
  push32((uint32_t)(ECX));
  /* 1194456f push 1 */
  push32((uint32_t)(0x1u));
  /* 11944571 call 0x11940d10 */
  push32(0x11944576u); f_11940d10();
  /* 11944576 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944579 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194457b jne 0x11944582 */
  if (!C.zf) goto L_11944582;
  /* 1194457d jmp 0x119446d2 */
  goto L_119446d2;
L_11944582:;
  /* 11944582 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11944585 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1194458a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1194458d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11944590 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11944597 jmp 0x119445a2 */
  goto L_119445a2;
L_11944599:;
  /* 11944599 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194459c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194459f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_119445a2:;
  /* 119445a2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119445a9 jge 0x119445c0 */
  if ((C.sf==C.of)) goto L_119445c0;
  /* 119445ab mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119445ae mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 119445b2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 119445b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119445b8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119445bb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119445be jmp 0x11944599 */
  goto L_11944599;
L_119445c0:;
  /* 119445c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119445c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119445c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119445c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119445ca push edx */
  push32((uint32_t)(EDX));
  /* 119445cb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119445d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119445d3 push eax */
  push32((uint32_t)(EAX));
  /* 119445d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 119445d6 call 0x11946f40 */
  push32(0x119445dbu); f_11946f40();
  /* 119445db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119445de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119445e0 jne 0x119445e7 */
  if (!C.zf) goto L_119445e7;
  /* 119445e2 jmp 0x119446d2 */
  goto L_119446d2;
L_119445e7:;
  /* 119445e7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119445ea mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 119445ef cmp dword ptr [0x11963ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11963ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119445f6 jle 0x11944653 */
  if ((C.zf||C.sf!=C.of)) goto L_11944653;
  /* 119445f8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 119445fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119445fe jmp 0x11944609 */
  goto L_11944609;
L_11944600:;
  /* 11944600 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11944603 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944606 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11944609:;
  /* 11944609 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1194460c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1194460e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11944610 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11944612 je 0x11944653 */
  if (C.zf) goto L_11944653;
  /* 11944614 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11944617 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11944619 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1194461c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1194461e je 0x11944653 */
  if (C.zf) goto L_11944653;
  /* 11944620 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11944623 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11944625 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11944627 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1194462a jmp 0x11944635 */
  goto L_11944635;
L_1194462c:;
  /* 1194462c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194462f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944632 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11944635:;
  /* 11944635 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11944638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194463a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1194463d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944640 jg 0x11944651 */
  if ((!C.zf&&C.sf==C.of)) goto L_11944651;
  /* 11944642 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11944645 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11944648 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1194464f jmp 0x1194462c */
  goto L_1194462c;
L_11944651:;
  /* 11944651 jmp 0x11944600 */
  goto L_11944600;
L_11944653:;
  /* 11944653 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11944656 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944659 mov dword ptr [0x11963c98], eax */
  w32((uint32_t)(0x11963c98), (EAX));
  /* 1194465e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11944661 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944664 mov dword ptr [0x11963c9c], ecx */
  w32((uint32_t)(0x11963c9c), (ECX));
  /* 1194466a cmp dword ptr [0x11965a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944671 je 0x11944684 */
  if (C.zf) goto L_11944684;
  /* 11944673 push 2 */
  push32((uint32_t)(0x2u));
  /* 11944675 mov edx, dword ptr [0x11965a90] */
  EDX = (r32((uint32_t)(0x11965a90)));
  /* 1194467b push edx */
  push32((uint32_t)(EDX));
  /* 1194467c call 0x11939570 */
  push32(0x11944681u); f_11939570();
  /* 11944681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11944684:;
  /* 11944684 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11944687 mov dword ptr [0x11965a90], eax */
  w32((uint32_t)(0x11965a90), (EAX));
  /* 1194468c cmp dword ptr [0x11965a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944693 je 0x119446a6 */
  if (C.zf) goto L_119446a6;
  /* 11944695 push 2 */
  push32((uint32_t)(0x2u));
  /* 11944697 mov ecx, dword ptr [0x11965a94] */
  ECX = (r32((uint32_t)(0x11965a94)));
  /* 1194469d push ecx */
  push32((uint32_t)(ECX));
  /* 1194469e call 0x11939570 */
  push32(0x119446a3u); f_11939570();
  /* 119446a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119446a6:;
  /* 119446a6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119446a9 mov dword ptr [0x11965a94], edx */
  w32((uint32_t)(0x11965a94), (EDX));
  /* 119446af push 2 */
  push32((uint32_t)(0x2u));
  /* 119446b1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119446b4 push eax */
  push32((uint32_t)(EAX));
  /* 119446b5 call 0x11939570 */
  push32(0x119446bau); f_11939570();
  /* 119446ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119446bd push 2 */
  push32((uint32_t)(0x2u));
  /* 119446bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119446c2 push ecx */
  push32((uint32_t)(ECX));
  /* 119446c3 call 0x11939570 */
  push32(0x119446c8u); f_11939570();
  /* 119446c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119446cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119446cd jmp 0x1194475c */
  goto L_1194475c;
L_119446d2:;
  /* 119446d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 119446d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119446d7 push edx */
  push32((uint32_t)(EDX));
  /* 119446d8 call 0x11939570 */
  push32(0x119446ddu); f_11939570();
  /* 119446dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119446e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119446e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119446e5 push eax */
  push32((uint32_t)(EAX));
  /* 119446e6 call 0x11939570 */
  push32(0x119446ebu); f_11939570();
  /* 119446eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119446ee push 2 */
  push32((uint32_t)(0x2u));
  /* 119446f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119446f3 push ecx */
  push32((uint32_t)(ECX));
  /* 119446f4 call 0x11939570 */
  push32(0x119446f9u); f_11939570();
  /* 119446f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119446fc push 2 */
  push32((uint32_t)(0x2u));
  /* 119446fe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11944701 push edx */
  push32((uint32_t)(EDX));
  /* 11944702 call 0x11939570 */
  push32(0x11944707u); f_11939570();
  /* 11944707 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194470a mov eax, 1 */
  EAX = (0x1u);
  /* 1194470f jmp 0x1194475c */
  goto L_1194475c;
L_11944711:;
  /* 11944711 mov dword ptr [0x11963c98], 0x11963ca2 */
  w32((uint32_t)(0x11963c98), (0x11963ca2u));
  /* 1194471b mov dword ptr [0x11963c9c], 0x11963ca2 */
  w32((uint32_t)(0x11963c9c), (0x11963ca2u));
  /* 11944725 push 2 */
  push32((uint32_t)(0x2u));
  /* 11944727 mov eax, dword ptr [0x11965a90] */
  EAX = (r32((uint32_t)(0x11965a90)));
  /* 1194472c push eax */
  push32((uint32_t)(EAX));
  /* 1194472d call 0x11939570 */
  push32(0x11944732u); f_11939570();
  /* 11944732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944735 push 2 */
  push32((uint32_t)(0x2u));
  /* 11944737 mov ecx, dword ptr [0x11965a94] */
  ECX = (r32((uint32_t)(0x11965a94)));
  /* 1194473d push ecx */
  push32((uint32_t)(ECX));
  /* 1194473e call 0x11939570 */
  push32(0x11944743u); f_11939570();
  /* 11944743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944746 mov dword ptr [0x11965a90], 0 */
  w32((uint32_t)(0x11965a90), (0x0u));
  /* 11944750 mov dword ptr [0x11965a94], 0 */
  w32((uint32_t)(0x11965a94), (0x0u));
  /* 1194475a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1194475c:;
  /* 1194475c mov esp, ebp */
  ESP = (EBP);
  /* 1194475e pop ebp */
  EBP = (pop32());
  /* 1194475f ret  */
  ESPCHK(0x119443c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014760 @ 0x11944760 (7 bytes, 5 insns) */
void f_11944760(void) {
  FTRACE(0x11944760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944760 push ebp */
  push32((uint32_t)(EBP));
  /* 11944761 mov ebp, esp */
  EBP = (ESP);
  /* 11944763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11944765 pop ebp */
  EBP = (pop32());
  /* 11944766 ret  */
  ESPCHK(0x11944760u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11944770 (129 bytes, 56 insns) */
void f_11944770(void) {
  FTRACE(0x11944770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944770 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11944774 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11944778 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1194477e jne 0x119447bc */
  if (!C.zf) goto L_119447bc;
L_11944780:;
  /* 11944780 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11944782 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11944784 jne 0x119447b4 */
  if (!C.zf) goto L_119447b4;
  /* 11944786 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11944788 je 0x119447b0 */
  if (C.zf) goto L_119447b0;
  /* 1194478a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1194478d jne 0x119447b4 */
  if (!C.zf) goto L_119447b4;
  /* 1194478f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11944791 je 0x119447b0 */
  if (C.zf) goto L_119447b0;
  /* 11944793 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11944796 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11944799 jne 0x119447b4 */
  if (!C.zf) goto L_119447b4;
  /* 1194479b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1194479d je 0x119447b0 */
  if (C.zf) goto L_119447b0;
  /* 1194479f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119447a2 jne 0x119447b4 */
  if (!C.zf) goto L_119447b4;
  /* 119447a4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119447a7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119447aa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 119447ac jne 0x11944780 */
  if (!C.zf) goto L_11944780;
  /* 119447ae mov edi, edi */
  EDI = (EDI);
L_119447b0:;
  /* 119447b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119447b2 ret  */
  ESPCHK(0x11944770u, _esp0);
  ESP += 4; return;
  /* 119447b3 nop  */
  /* nop */
L_119447b4:;
  /* 119447b4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119447b6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119447b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119447b9 ret  */
  ESPCHK(0x11944770u, _esp0);
  ESP += 4; return;
  /* 119447ba mov edi, edi */
  EDI = (EDI);
L_119447bc:;
  /* 119447bc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 119447c2 je 0x119447d8 */
  if (C.zf) goto L_119447d8;
  /* 119447c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119447c6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 119447c7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119447c9 jne 0x119447b4 */
  if (!C.zf) goto L_119447b4;
  /* 119447cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119447cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119447ce je 0x119447b0 */
  if (C.zf) goto L_119447b0;
  /* 119447d0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 119447d6 je 0x11944780 */
  if (C.zf) goto L_11944780;
L_119447d8:;
  /* 119447d8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 119447db add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119447de cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119447e0 jne 0x119447b4 */
  if (!C.zf) goto L_119447b4;
  /* 119447e2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119447e4 je 0x119447b0 */
  if (C.zf) goto L_119447b0;
  /* 119447e6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119447e9 jne 0x119447b4 */
  if (!C.zf) goto L_119447b4;
  /* 119447eb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 119447ed je 0x119447b0 */
  if (C.zf) goto L_119447b0;
  /* 119447ef add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119447f2 jmp 0x11944780 */
  goto L_11944780;
}

/* FUN_10014800 @ 0x11944800 (62 bytes, 35 insns) */
void f_11944800(void) {
  FTRACE(0x11944800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944800 push ebp */
  push32((uint32_t)(EBP));
  /* 11944801 mov ebp, esp */
  EBP = (ESP);
  /* 11944803 push esi */
  push32((uint32_t)(ESI));
  /* 11944804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11944806 push eax */
  push32((uint32_t)(EAX));
  /* 11944807 push eax */
  push32((uint32_t)(EAX));
  /* 11944808 push eax */
  push32((uint32_t)(EAX));
  /* 11944809 push eax */
  push32((uint32_t)(EAX));
  /* 1194480a push eax */
  push32((uint32_t)(EAX));
  /* 1194480b push eax */
  push32((uint32_t)(EAX));
  /* 1194480c push eax */
  push32((uint32_t)(EAX));
  /* 1194480d push eax */
  push32((uint32_t)(EAX));
  /* 1194480e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11944811 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11944814:;
  /* 11944814 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11944816 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11944818 je 0x11944821 */
  if (C.zf) goto L_11944821;
  /* 1194481a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1194481b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1194481b");
  /* 1194481f jmp 0x11944814 */
  goto L_11944814;
L_11944821:;
  /* 11944821 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11944824 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11944827 nop  */
  /* nop */
L_11944828:;
  /* 11944828 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11944829 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1194482b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1194482d je 0x11944836 */
  if (C.zf) goto L_11944836;
  /* 1194482f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11944830 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11944830");
  /* 11944834 jae 0x11944828 */
  if (!C.cf) goto L_11944828;
L_11944836:;
  /* 11944836 mov eax, ecx */
  EAX = (ECX);
  /* 11944838 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194483b pop esi */
  ESI = (pop32());
  /* 1194483c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1194483d ret  */
  ESPCHK(0x11944800u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11944840 (56 bytes, 31 insns) */
void f_11944840(void) {
  FTRACE(0x11944840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944840 push ebp */
  push32((uint32_t)(EBP));
  /* 11944841 mov ebp, esp */
  EBP = (ESP);
  /* 11944843 push edi */
  push32((uint32_t)(EDI));
  /* 11944844 push esi */
  push32((uint32_t)(ESI));
  /* 11944845 push ebx */
  push32((uint32_t)(EBX));
  /* 11944846 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11944849 jecxz 0x11944871 */
  x86_unimpl("jecxz @ 0x11944849");
  /* 1194484b mov ebx, ecx */
  EBX = (ECX);
  /* 1194484d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11944850 mov esi, edi */
  ESI = (EDI);
  /* 11944852 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11944854 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11944856 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11944858 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194485a mov edi, esi */
  EDI = (ESI);
  /* 1194485c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1194485f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11944861 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11944864 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11944866 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11944869 ja 0x1194486f */
  if ((!C.cf&&!C.zf)) goto L_1194486f;
  /* 1194486b je 0x11944871 */
  if (C.zf) goto L_11944871;
  /* 1194486d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1194486e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1194486f:;
  /* 1194486f not ecx */
  ECX = (~(ECX));
L_11944871:;
  /* 11944871 mov eax, ecx */
  EAX = (ECX);
  /* 11944873 pop ebx */
  EBX = (pop32());
  /* 11944874 pop esi */
  ESI = (pop32());
  /* 11944875 pop edi */
  EDI = (pop32());
  /* 11944876 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11944877 ret  */
  ESPCHK(0x11944840u, _esp0);
  ESP += 4; return;
}

/* FUN_10014880 @ 0x11944880 (58 bytes, 32 insns) */
void f_11944880(void) {
  FTRACE(0x11944880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944880 push ebp */
  push32((uint32_t)(EBP));
  /* 11944881 mov ebp, esp */
  EBP = (ESP);
  /* 11944883 push esi */
  push32((uint32_t)(ESI));
  /* 11944884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11944886 push eax */
  push32((uint32_t)(EAX));
  /* 11944887 push eax */
  push32((uint32_t)(EAX));
  /* 11944888 push eax */
  push32((uint32_t)(EAX));
  /* 11944889 push eax */
  push32((uint32_t)(EAX));
  /* 1194488a push eax */
  push32((uint32_t)(EAX));
  /* 1194488b push eax */
  push32((uint32_t)(EAX));
  /* 1194488c push eax */
  push32((uint32_t)(EAX));
  /* 1194488d push eax */
  push32((uint32_t)(EAX));
  /* 1194488e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11944891 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11944894:;
  /* 11944894 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11944896 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11944898 je 0x119448a1 */
  if (C.zf) goto L_119448a1;
  /* 1194489a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1194489b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1194489b");
  /* 1194489f jmp 0x11944894 */
  goto L_11944894;
L_119448a1:;
  /* 119448a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_119448a4:;
  /* 119448a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119448a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119448a8 je 0x119448b4 */
  if (C.zf) goto L_119448b4;
  /* 119448aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119448ab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x119448ab");
  /* 119448af jae 0x119448a4 */
  if (!C.cf) goto L_119448a4;
  /* 119448b1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_119448b4:;
  /* 119448b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119448b7 pop esi */
  ESI = (pop32());
  /* 119448b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119448b9 ret  */
  ESPCHK(0x11944880u, _esp0);
  ESP += 4; return;
}

/* FUN_100148c0 @ 0x119448c0 (512 bytes, 147 insns) */
void f_119448c0(void) {
  FTRACE(0x119448c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119448c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119448c1 mov ebp, esp */
  EBP = (ESP);
  /* 119448c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119448c6 cmp dword ptr [0x11965adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119448cd jne 0x119448f2 */
  if (!C.zf) goto L_119448f2;
  /* 119448cf call 0x11945390 */
  push32(0x119448d4u); f_11945390();
  /* 119448d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119448d6 je 0x119448e2 */
  if (C.zf) goto L_119448e2;
  /* 119448d8 mov eax, dword ptr [0x119682fc] */
  EAX = (r32((uint32_t)(0x119682fc)));
  /* 119448dd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119448e0 jmp 0x119448e9 */
  goto L_119448e9;
L_119448e2:;
  /* 119448e2 mov dword ptr [ebp - 8], 0x119453e0 */
  w32((uint32_t)(EBP + -0x8), (0x119453e0u));
L_119448e9:;
  /* 119448e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119448ec mov dword ptr [0x11965adc], ecx */
  w32((uint32_t)(0x11965adc), (ECX));
L_119448f2:;
  /* 119448f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119448f6 jne 0x11944902 */
  if (!C.zf) goto L_11944902;
  /* 119448f8 call 0x119451e0 */
  push32(0x119448fdu); f_119451e0();
  /* 119448fd jmp 0x119449ce */
  goto L_119449ce;
L_11944902:;
  /* 11944902 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944905 mov dword ptr [0x11965acc], edx */
  w32((uint32_t)(0x11965acc), (EDX));
  /* 1194490b cmp dword ptr [0x11965acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944912 je 0x11944934 */
  if (C.zf) goto L_11944934;
  /* 11944914 mov eax, dword ptr [0x11965acc] */
  EAX = (r32((uint32_t)(0x11965acc)));
  /* 11944919 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1194491c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1194491e je 0x11944934 */
  if (C.zf) goto L_11944934;
  /* 11944920 push 0x11965acc */
  push32((uint32_t)(0x11965accu));
  /* 11944925 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11944927 push 0x11964a90 */
  push32((uint32_t)(0x11964a90u));
  /* 1194492c call 0x11944ac0 */
  push32(0x11944931u); f_11944ac0();
  /* 11944931 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11944934:;
  /* 11944934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944937 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194493a mov dword ptr [0x11965ad0], edx */
  w32((uint32_t)(0x11965ad0), (EDX));
  /* 11944940 cmp dword ptr [0x11965ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944947 je 0x11944969 */
  if (C.zf) goto L_11944969;
  /* 11944949 mov eax, dword ptr [0x11965ad0] */
  EAX = (r32((uint32_t)(0x11965ad0)));
  /* 1194494e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11944951 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11944953 je 0x11944969 */
  if (C.zf) goto L_11944969;
  /* 11944955 push 0x11965ad0 */
  push32((uint32_t)(0x11965ad0u));
  /* 1194495a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1194495c push 0x119649d8 */
  push32((uint32_t)(0x119649d8u));
  /* 11944961 call 0x11944ac0 */
  push32(0x11944966u); f_11944ac0();
  /* 11944966 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11944969:;
  /* 11944969 mov dword ptr [0x11965ad4], 0 */
  w32((uint32_t)(0x11965ad4), (0x0u));
  /* 11944973 cmp dword ptr [0x11965acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194497a je 0x119449ad */
  if (C.zf) goto L_119449ad;
  /* 1194497c mov edx, dword ptr [0x11965acc] */
  EDX = (r32((uint32_t)(0x11965acc)));
  /* 11944982 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11944985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944987 je 0x119449ad */
  if (C.zf) goto L_119449ad;
  /* 11944989 cmp dword ptr [0x11965ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944990 je 0x119449a6 */
  if (C.zf) goto L_119449a6;
  /* 11944992 mov ecx, dword ptr [0x11965ad0] */
  ECX = (r32((uint32_t)(0x11965ad0)));
  /* 11944998 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1194499b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1194499d je 0x119449a6 */
  if (C.zf) goto L_119449a6;
  /* 1194499f call 0x11944b50 */
  push32(0x119449a4u); f_11944b50();
  /* 119449a4 jmp 0x119449ab */
  goto L_119449ab;
L_119449a6:;
  /* 119449a6 call 0x11944f40 */
  push32(0x119449abu); f_11944f40();
L_119449ab:;
  /* 119449ab jmp 0x119449ce */
  goto L_119449ce;
L_119449ad:;
  /* 119449ad cmp dword ptr [0x11965ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119449b4 je 0x119449c9 */
  if (C.zf) goto L_119449c9;
  /* 119449b6 mov eax, dword ptr [0x11965ad0] */
  EAX = (r32((uint32_t)(0x11965ad0)));
  /* 119449bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119449be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119449c0 je 0x119449c9 */
  if (C.zf) goto L_119449c9;
  /* 119449c2 call 0x119450e0 */
  push32(0x119449c7u); f_119450e0();
  /* 119449c7 jmp 0x119449ce */
  goto L_119449ce;
L_119449c9:;
  /* 119449c9 call 0x119451e0 */
  push32(0x119449ceu); f_119451e0();
L_119449ce:;
  /* 119449ce cmp dword ptr [0x11965ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119449d5 jne 0x119449de */
  if (!C.zf) goto L_119449de;
  /* 119449d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119449d9 jmp 0x11944abc */
  goto L_11944abc;
L_119449de:;
  /* 119449de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119449e1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119449e7 push edx */
  push32((uint32_t)(EDX));
  /* 119449e8 call 0x11945210 */
  push32(0x119449edu); f_11945210();
  /* 119449ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119449f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119449f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119449f7 je 0x11944a0c */
  if (C.zf) goto L_11944a0c;
  /* 119449f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119449fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11944a01 push eax */
  push32((uint32_t)(EAX));
  /* 11944a02 call dword ptr [0x11968300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968300))), 0x11944a08u);
  /* 11944a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944a0a jne 0x11944a13 */
  if (!C.zf) goto L_11944a13;
L_11944a0c:;
  /* 11944a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11944a0e jmp 0x11944abc */
  goto L_11944abc;
L_11944a13:;
  /* 11944a13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11944a15 mov ecx, dword ptr [0x11965abc] */
  ECX = (r32((uint32_t)(0x11965abc)));
  /* 11944a1b push ecx */
  push32((uint32_t)(ECX));
  /* 11944a1c call dword ptr [0x11968304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968304))), 0x11944a22u);
  /* 11944a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944a24 jne 0x11944a2d */
  if (!C.zf) goto L_11944a2d;
  /* 11944a26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11944a28 jmp 0x11944abc */
  goto L_11944abc;
L_11944a2d:;
  /* 11944a2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944a31 je 0x11944a58 */
  if (C.zf) goto L_11944a58;
  /* 11944a33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11944a36 mov ax, word ptr [0x11965abc] */
  AX = (r16((uint32_t)(0x11965abc)));
  /* 11944a3c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11944a3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11944a42 mov dx, word ptr [0x11965ad8] */
  DX = (r16((uint32_t)(0x11965ad8)));
  /* 11944a49 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11944a4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11944a50 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11944a54 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11944a58:;
  /* 11944a58 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944a5c je 0x11944ab7 */
  if (C.zf) goto L_11944ab7;
  /* 11944a5e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11944a60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11944a63 push edx */
  push32((uint32_t)(EDX));
  /* 11944a64 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11944a69 mov eax, dword ptr [0x11965abc] */
  EAX = (r32((uint32_t)(0x11965abc)));
  /* 11944a6e push eax */
  push32((uint32_t)(EAX));
  /* 11944a6f call dword ptr [0x11965adc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11965adc))), 0x11944a75u);
  /* 11944a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944a77 jne 0x11944a7d */
  if (!C.zf) goto L_11944a7d;
  /* 11944a79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11944a7b jmp 0x11944abc */
  goto L_11944abc;
L_11944a7d:;
  /* 11944a7d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11944a7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11944a82 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944a85 push ecx */
  push32((uint32_t)(ECX));
  /* 11944a86 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11944a8b mov edx, dword ptr [0x11965ad8] */
  EDX = (r32((uint32_t)(0x11965ad8)));
  /* 11944a91 push edx */
  push32((uint32_t)(EDX));
  /* 11944a92 call dword ptr [0x11965adc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11965adc))), 0x11944a98u);
  /* 11944a98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944a9a jne 0x11944aa0 */
  if (!C.zf) goto L_11944aa0;
  /* 11944a9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11944a9e jmp 0x11944abc */
  goto L_11944abc;
L_11944aa0:;
  /* 11944aa0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11944aa2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11944aa5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944aaa push eax */
  push32((uint32_t)(EAX));
  /* 11944aab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944aae push ecx */
  push32((uint32_t)(ECX));
  /* 11944aaf call 0x1193b620 */
  push32(0x11944ab4u); f_1193b620();
  /* 11944ab4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11944ab7:;
  /* 11944ab7 mov eax, 1 */
  EAX = (0x1u);
L_11944abc:;
  /* 11944abc mov esp, ebp */
  ESP = (EBP);
  /* 11944abe pop ebp */
  EBP = (pop32());
  /* 11944abf ret  */
  ESPCHK(0x119448c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ac0 @ 0x11944ac0 (130 bytes, 47 insns) */
void f_11944ac0(void) {
  FTRACE(0x11944ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11944ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11944ac3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944ac6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11944acd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11944ad4:;
  /* 11944ad4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11944ad7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944ada jg 0x11944b3e */
  if ((!C.zf&&C.sf==C.of)) goto L_11944b3e;
  /* 11944adc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944ae0 je 0x11944b3e */
  if (C.zf) goto L_11944b3e;
  /* 11944ae2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11944ae5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944ae8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11944ae9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944aeb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11944aed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11944af0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944af3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944af6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11944af9 push eax */
  push32((uint32_t)(EAX));
  /* 11944afa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11944afd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11944aff push edx */
  push32((uint32_t)(EDX));
  /* 11944b00 call 0x119471b0 */
  push32(0x11944b05u); f_119471b0();
  /* 11944b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944b08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11944b0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944b0f jne 0x11944b22 */
  if (!C.zf) goto L_11944b22;
  /* 11944b11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944b14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944b17 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11944b1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11944b1e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11944b20 jmp 0x11944b3c */
  goto L_11944b3c;
L_11944b22:;
  /* 11944b22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944b26 jge 0x11944b33 */
  if ((C.sf==C.of)) goto L_11944b33;
  /* 11944b28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944b2b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944b2e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11944b31 jmp 0x11944b3c */
  goto L_11944b3c;
L_11944b33:;
  /* 11944b33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944b36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944b39 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11944b3c:;
  /* 11944b3c jmp 0x11944ad4 */
  goto L_11944ad4;
L_11944b3e:;
  /* 11944b3e mov esp, ebp */
  ESP = (EBP);
  /* 11944b40 pop ebp */
  EBP = (pop32());
  /* 11944b41 ret  */
  ESPCHK(0x11944ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b50 @ 0x11944b50 (186 bytes, 50 insns) */
void f_11944b50(void) {
  FTRACE(0x11944b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11944b51 mov ebp, esp */
  EBP = (ESP);
  /* 11944b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11944b54 mov eax, dword ptr [0x11965acc] */
  EAX = (r32((uint32_t)(0x11965acc)));
  /* 11944b59 push eax */
  push32((uint32_t)(EAX));
  /* 11944b5a call 0x1193b910 */
  push32(0x11944b5fu); f_1193b910();
  /* 11944b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944b62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11944b64 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944b67 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11944b6a mov dword ptr [0x11965ac8], ecx */
  w32((uint32_t)(0x11965ac8), (ECX));
  /* 11944b70 mov edx, dword ptr [0x11965ad0] */
  EDX = (r32((uint32_t)(0x11965ad0)));
  /* 11944b76 push edx */
  push32((uint32_t)(EDX));
  /* 11944b77 call 0x1193b910 */
  push32(0x11944b7cu); f_1193b910();
  /* 11944b7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944b7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11944b81 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944b84 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11944b87 mov dword ptr [0x11965ac0], ecx */
  w32((uint32_t)(0x11965ac0), (ECX));
  /* 11944b8d mov dword ptr [0x11965abc], 0 */
  w32((uint32_t)(0x11965abc), (0x0u));
  /* 11944b97 cmp dword ptr [0x11965ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944b9e je 0x11944ba9 */
  if (C.zf) goto L_11944ba9;
  /* 11944ba0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11944ba7 jmp 0x11944bbb */
  goto L_11944bbb;
L_11944ba9:;
  /* 11944ba9 mov edx, dword ptr [0x11965acc] */
  EDX = (r32((uint32_t)(0x11965acc)));
  /* 11944baf push edx */
  push32((uint32_t)(EDX));
  /* 11944bb0 call 0x119455f0 */
  push32(0x11944bb5u); f_119455f0();
  /* 11944bb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944bb8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11944bbb:;
  /* 11944bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944bbe mov dword ptr [0x11965ac4], eax */
  w32((uint32_t)(0x11965ac4), (EAX));
  /* 11944bc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11944bc5 push 0x11944c10 */
  push32((uint32_t)(0x11944c10u));
  /* 11944bca call dword ptr [0x119682f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682f8))), 0x11944bd0u);
  /* 11944bd0 mov ecx, dword ptr [0x11965ad4] */
  ECX = (r32((uint32_t)(0x11965ad4)));
  /* 11944bd6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11944bdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11944bde je 0x11944bfc */
  if (C.zf) goto L_11944bfc;
  /* 11944be0 mov edx, dword ptr [0x11965ad4] */
  EDX = (r32((uint32_t)(0x11965ad4)));
  /* 11944be6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11944bec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11944bee je 0x11944bfc */
  if (C.zf) goto L_11944bfc;
  /* 11944bf0 mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 11944bf5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11944bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944bfa jne 0x11944c06 */
  if (!C.zf) goto L_11944c06;
L_11944bfc:;
  /* 11944bfc mov dword ptr [0x11965ad4], 0 */
  w32((uint32_t)(0x11965ad4), (0x0u));
L_11944c06:;
  /* 11944c06 mov esp, ebp */
  ESP = (EBP);
  /* 11944c08 pop ebp */
  EBP = (pop32());
  /* 11944c09 ret  */
  ESPCHK(0x11944b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c10 @ 0x11944c10 (804 bytes, 220 insns) */
void f_11944c10(void) {
  FTRACE(0x11944c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11944c11 mov ebp, esp */
  EBP = (ESP);
  /* 11944c13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944c19 push eax */
  push32((uint32_t)(EAX));
  /* 11944c1a call 0x11945570 */
  push32(0x11944c1fu); f_11945570();
  /* 11944c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944c22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11944c25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11944c27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11944c2a push ecx */
  push32((uint32_t)(ECX));
  /* 11944c2b mov edx, dword ptr [0x11965ac0] */
  EDX = (r32((uint32_t)(0x11965ac0)));
  /* 11944c31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11944c33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944c35 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11944c3b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944c41 push edx */
  push32((uint32_t)(EDX));
  /* 11944c42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944c45 push eax */
  push32((uint32_t)(EAX));
  /* 11944c46 call dword ptr [0x11965adc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11965adc))), 0x11944c4cu);
  /* 11944c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944c4e jne 0x11944c64 */
  if (!C.zf) goto L_11944c64;
  /* 11944c50 mov dword ptr [0x11965ad4], 0 */
  w32((uint32_t)(0x11965ad4), (0x0u));
  /* 11944c5a mov eax, 1 */
  EAX = (0x1u);
  /* 11944c5f jmp 0x11944f2e */
  goto L_11944f2e;
L_11944c64:;
  /* 11944c64 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11944c67 push ecx */
  push32((uint32_t)(ECX));
  /* 11944c68 mov edx, dword ptr [0x11965ad0] */
  EDX = (r32((uint32_t)(0x11965ad0)));
  /* 11944c6e push edx */
  push32((uint32_t)(EDX));
  /* 11944c6f call 0x119471b0 */
  push32(0x11944c74u); f_119471b0();
  /* 11944c74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944c77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944c79 jne 0x11944d9f */
  if (!C.zf) goto L_11944d9f;
  /* 11944c7f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11944c81 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11944c84 push eax */
  push32((uint32_t)(EAX));
  /* 11944c85 mov ecx, dword ptr [0x11965ac8] */
  ECX = (r32((uint32_t)(0x11965ac8)));
  /* 11944c8b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11944c8d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944c8f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11944c95 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944c9b push ecx */
  push32((uint32_t)(ECX));
  /* 11944c9c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944c9f push edx */
  push32((uint32_t)(EDX));
  /* 11944ca0 call dword ptr [0x11965adc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11965adc))), 0x11944ca6u);
  /* 11944ca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944ca8 jne 0x11944cbe */
  if (!C.zf) goto L_11944cbe;
  /* 11944caa mov dword ptr [0x11965ad4], 0 */
  w32((uint32_t)(0x11965ad4), (0x0u));
  /* 11944cb4 mov eax, 1 */
  EAX = (0x1u);
  /* 11944cb9 jmp 0x11944f2e */
  goto L_11944f2e;
L_11944cbe:;
  /* 11944cbe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11944cc1 push eax */
  push32((uint32_t)(EAX));
  /* 11944cc2 mov ecx, dword ptr [0x11965acc] */
  ECX = (r32((uint32_t)(0x11965acc)));
  /* 11944cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11944cc9 call 0x119471b0 */
  push32(0x11944cceu); f_119471b0();
  /* 11944cce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944cd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944cd3 jne 0x11944d00 */
  if (!C.zf) goto L_11944d00;
  /* 11944cd5 mov edx, dword ptr [0x11965ad4] */
  EDX = (r32((uint32_t)(0x11965ad4)));
  /* 11944cdb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11944ce1 mov dword ptr [0x11965ad4], edx */
  w32((uint32_t)(0x11965ad4), (EDX));
  /* 11944ce7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944cea mov dword ptr [0x11965ad8], eax */
  w32((uint32_t)(0x11965ad8), (EAX));
  /* 11944cef mov ecx, dword ptr [0x11965ad8] */
  ECX = (r32((uint32_t)(0x11965ad8)));
  /* 11944cf5 mov dword ptr [0x11965abc], ecx */
  w32((uint32_t)(0x11965abc), (ECX));
  /* 11944cfb jmp 0x11944d9f */
  goto L_11944d9f;
L_11944d00:;
  /* 11944d00 mov edx, dword ptr [0x11965ad4] */
  EDX = (r32((uint32_t)(0x11965ad4)));
  /* 11944d06 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11944d09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11944d0b jne 0x11944d9f */
  if (!C.zf) goto L_11944d9f;
  /* 11944d11 cmp dword ptr [0x11965ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944d18 je 0x11944d6d */
  if (C.zf) goto L_11944d6d;
  /* 11944d1a mov eax, dword ptr [0x11965ac4] */
  EAX = (r32((uint32_t)(0x11965ac4)));
  /* 11944d1f push eax */
  push32((uint32_t)(EAX));
  /* 11944d20 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11944d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11944d24 mov edx, dword ptr [0x11965acc] */
  EDX = (r32((uint32_t)(0x11965acc)));
  /* 11944d2a push edx */
  push32((uint32_t)(EDX));
  /* 11944d2b call 0x11947280 */
  push32(0x11944d30u); f_11947280();
  /* 11944d30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944d33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944d35 jne 0x11944d6d */
  if (!C.zf) goto L_11944d6d;
  /* 11944d37 mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 11944d3c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11944d3e mov dword ptr [0x11965ad4], eax */
  w32((uint32_t)(0x11965ad4), (EAX));
  /* 11944d43 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944d46 mov dword ptr [0x11965ad8], ecx */
  w32((uint32_t)(0x11965ad8), (ECX));
  /* 11944d4c mov edx, dword ptr [0x11965acc] */
  EDX = (r32((uint32_t)(0x11965acc)));
  /* 11944d52 push edx */
  push32((uint32_t)(EDX));
  /* 11944d53 call 0x1193b910 */
  push32(0x11944d58u); f_1193b910();
  /* 11944d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944d5b cmp eax, dword ptr [0x11965ac4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11965ac4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944d61 jne 0x11944d6b */
  if (!C.zf) goto L_11944d6b;
  /* 11944d63 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944d66 mov dword ptr [0x11965abc], eax */
  w32((uint32_t)(0x11965abc), (EAX));
L_11944d6b:;
  /* 11944d6b jmp 0x11944d9f */
  goto L_11944d9f;
L_11944d6d:;
  /* 11944d6d mov ecx, dword ptr [0x11965ad4] */
  ECX = (r32((uint32_t)(0x11965ad4)));
  /* 11944d73 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11944d76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11944d78 jne 0x11944d9f */
  if (!C.zf) goto L_11944d9f;
  /* 11944d7a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944d7d push edx */
  push32((uint32_t)(EDX));
  /* 11944d7e call 0x119452b0 */
  push32(0x11944d83u); f_119452b0();
  /* 11944d83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944d86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944d88 je 0x11944d9f */
  if (C.zf) goto L_11944d9f;
  /* 11944d8a mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 11944d8f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11944d91 mov dword ptr [0x11965ad4], eax */
  w32((uint32_t)(0x11965ad4), (EAX));
  /* 11944d96 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944d99 mov dword ptr [0x11965ad8], ecx */
  w32((uint32_t)(0x11965ad8), (ECX));
L_11944d9f:;
  /* 11944d9f mov edx, dword ptr [0x11965ad4] */
  EDX = (r32((uint32_t)(0x11965ad4)));
  /* 11944da5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11944dab cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944db1 je 0x11944f21 */
  if (C.zf) goto L_11944f21;
  /* 11944db7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11944db9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11944dbc push eax */
  push32((uint32_t)(EAX));
  /* 11944dbd mov ecx, dword ptr [0x11965ac8] */
  ECX = (r32((uint32_t)(0x11965ac8)));
  /* 11944dc3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11944dc5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944dc7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11944dcd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11944dd4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944dd7 push edx */
  push32((uint32_t)(EDX));
  /* 11944dd8 call dword ptr [0x11965adc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11965adc))), 0x11944ddeu);
  /* 11944dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944de0 jne 0x11944df6 */
  if (!C.zf) goto L_11944df6;
  /* 11944de2 mov dword ptr [0x11965ad4], 0 */
  w32((uint32_t)(0x11965ad4), (0x0u));
  /* 11944dec mov eax, 1 */
  EAX = (0x1u);
  /* 11944df1 jmp 0x11944f2e */
  goto L_11944f2e;
L_11944df6:;
  /* 11944df6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11944df9 push eax */
  push32((uint32_t)(EAX));
  /* 11944dfa mov ecx, dword ptr [0x11965acc] */
  ECX = (r32((uint32_t)(0x11965acc)));
  /* 11944e00 push ecx */
  push32((uint32_t)(ECX));
  /* 11944e01 call 0x119471b0 */
  push32(0x11944e06u); f_119471b0();
  /* 11944e06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944e0b jne 0x11944ec0 */
  if (!C.zf) goto L_11944ec0;
  /* 11944e11 mov edx, dword ptr [0x11965ad4] */
  EDX = (r32((uint32_t)(0x11965ad4)));
  /* 11944e17 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11944e1a mov dword ptr [0x11965ad4], edx */
  w32((uint32_t)(0x11965ad4), (EDX));
  /* 11944e20 cmp dword ptr [0x11965ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944e27 je 0x11944e4a */
  if (C.zf) goto L_11944e4a;
  /* 11944e29 mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 11944e2e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11944e31 mov dword ptr [0x11965ad4], eax */
  w32((uint32_t)(0x11965ad4), (EAX));
  /* 11944e36 cmp dword ptr [0x11965abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944e3d jne 0x11944e48 */
  if (!C.zf) goto L_11944e48;
  /* 11944e3f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944e42 mov dword ptr [0x11965abc], ecx */
  w32((uint32_t)(0x11965abc), (ECX));
L_11944e48:;
  /* 11944e48 jmp 0x11944ebe */
  goto L_11944ebe;
L_11944e4a:;
  /* 11944e4a cmp dword ptr [0x11965ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944e51 je 0x11944e9f */
  if (C.zf) goto L_11944e9f;
  /* 11944e53 mov edx, dword ptr [0x11965acc] */
  EDX = (r32((uint32_t)(0x11965acc)));
  /* 11944e59 push edx */
  push32((uint32_t)(EDX));
  /* 11944e5a call 0x1193b910 */
  push32(0x11944e5fu); f_1193b910();
  /* 11944e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944e62 cmp eax, dword ptr [0x11965ac4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11965ac4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944e68 jne 0x11944e9f */
  if (!C.zf) goto L_11944e9f;
  /* 11944e6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11944e6c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944e6f push eax */
  push32((uint32_t)(EAX));
  /* 11944e70 call 0x11945300 */
  push32(0x11944e75u); f_11945300();
  /* 11944e75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944e78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944e7a je 0x11944e9d */
  if (C.zf) goto L_11944e9d;
  /* 11944e7c mov ecx, dword ptr [0x11965ad4] */
  ECX = (r32((uint32_t)(0x11965ad4)));
  /* 11944e82 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11944e85 mov dword ptr [0x11965ad4], ecx */
  w32((uint32_t)(0x11965ad4), (ECX));
  /* 11944e8b cmp dword ptr [0x11965abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944e92 jne 0x11944e9d */
  if (!C.zf) goto L_11944e9d;
  /* 11944e94 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944e97 mov dword ptr [0x11965abc], edx */
  w32((uint32_t)(0x11965abc), (EDX));
L_11944e9d:;
  /* 11944e9d jmp 0x11944ebe */
  goto L_11944ebe;
L_11944e9f:;
  /* 11944e9f mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 11944ea4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11944ea7 mov dword ptr [0x11965ad4], eax */
  w32((uint32_t)(0x11965ad4), (EAX));
  /* 11944eac cmp dword ptr [0x11965abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944eb3 jne 0x11944ebe */
  if (!C.zf) goto L_11944ebe;
  /* 11944eb5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944eb8 mov dword ptr [0x11965abc], ecx */
  w32((uint32_t)(0x11965abc), (ECX));
L_11944ebe:;
  /* 11944ebe jmp 0x11944f21 */
  goto L_11944f21;
L_11944ec0:;
  /* 11944ec0 cmp dword ptr [0x11965ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944ec7 jne 0x11944f21 */
  if (!C.zf) goto L_11944f21;
  /* 11944ec9 cmp dword ptr [0x11965ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944ed0 je 0x11944f21 */
  if (C.zf) goto L_11944f21;
  /* 11944ed2 mov edx, dword ptr [0x11965ac4] */
  EDX = (r32((uint32_t)(0x11965ac4)));
  /* 11944ed8 push edx */
  push32((uint32_t)(EDX));
  /* 11944ed9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11944edc push eax */
  push32((uint32_t)(EAX));
  /* 11944edd mov ecx, dword ptr [0x11965acc] */
  ECX = (r32((uint32_t)(0x11965acc)));
  /* 11944ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 11944ee4 call 0x11947280 */
  push32(0x11944ee9u); f_11947280();
  /* 11944ee9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944eec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944eee jne 0x11944f21 */
  if (!C.zf) goto L_11944f21;
  /* 11944ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11944ef2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944ef5 push edx */
  push32((uint32_t)(EDX));
  /* 11944ef6 call 0x11945300 */
  push32(0x11944efbu); f_11945300();
  /* 11944efb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944f00 je 0x11944f21 */
  if (C.zf) goto L_11944f21;
  /* 11944f02 mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 11944f07 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11944f0a mov dword ptr [0x11965ad4], eax */
  w32((uint32_t)(0x11965ad4), (EAX));
  /* 11944f0f cmp dword ptr [0x11965abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944f16 jne 0x11944f21 */
  if (!C.zf) goto L_11944f21;
  /* 11944f18 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944f1b mov dword ptr [0x11965abc], ecx */
  w32((uint32_t)(0x11965abc), (ECX));
L_11944f21:;
  /* 11944f21 mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 11944f26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11944f29 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11944f2b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944f2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11944f2e:;
  /* 11944f2e mov esp, ebp */
  ESP = (EBP);
  /* 11944f30 pop ebp */
  EBP = (pop32());
  /* 11944f31 ret 4 */
  ESPCHK(0x11944c10u, _esp0);
  ESP += 8; return;
}

/* FUN_10014f40 @ 0x11944f40 (116 bytes, 33 insns) */
void f_11944f40(void) {
  FTRACE(0x11944f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11944f41 mov ebp, esp */
  EBP = (ESP);
  /* 11944f43 push ecx */
  push32((uint32_t)(ECX));
  /* 11944f44 mov eax, dword ptr [0x11965acc] */
  EAX = (r32((uint32_t)(0x11965acc)));
  /* 11944f49 push eax */
  push32((uint32_t)(EAX));
  /* 11944f4a call 0x1193b910 */
  push32(0x11944f4fu); f_1193b910();
  /* 11944f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944f52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11944f54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944f57 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11944f5a mov dword ptr [0x11965ac8], ecx */
  w32((uint32_t)(0x11965ac8), (ECX));
  /* 11944f60 cmp dword ptr [0x11965ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11944f67 je 0x11944f72 */
  if (C.zf) goto L_11944f72;
  /* 11944f69 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11944f70 jmp 0x11944f84 */
  goto L_11944f84;
L_11944f72:;
  /* 11944f72 mov edx, dword ptr [0x11965acc] */
  EDX = (r32((uint32_t)(0x11965acc)));
  /* 11944f78 push edx */
  push32((uint32_t)(EDX));
  /* 11944f79 call 0x119455f0 */
  push32(0x11944f7eu); f_119455f0();
  /* 11944f7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944f81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11944f84:;
  /* 11944f84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11944f87 mov dword ptr [0x11965ac4], eax */
  w32((uint32_t)(0x11965ac4), (EAX));
  /* 11944f8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11944f8e push 0x11944fc0 */
  push32((uint32_t)(0x11944fc0u));
  /* 11944f93 call dword ptr [0x119682f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682f8))), 0x11944f99u);
  /* 11944f99 mov ecx, dword ptr [0x11965ad4] */
  ECX = (r32((uint32_t)(0x11965ad4)));
  /* 11944f9f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11944fa2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11944fa4 jne 0x11944fb0 */
  if (!C.zf) goto L_11944fb0;
  /* 11944fa6 mov dword ptr [0x11965ad4], 0 */
  w32((uint32_t)(0x11965ad4), (0x0u));
L_11944fb0:;
  /* 11944fb0 mov esp, ebp */
  ESP = (EBP);
  /* 11944fb2 pop ebp */
  EBP = (pop32());
  /* 11944fb3 ret  */
  ESPCHK(0x11944f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fc0 @ 0x11944fc0 (287 bytes, 86 insns) */
void f_11944fc0(void) {
  FTRACE(0x11944fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11944fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11944fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11944fc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11944fc9 push eax */
  push32((uint32_t)(EAX));
  /* 11944fca call 0x11945570 */
  push32(0x11944fcfu); f_11945570();
  /* 11944fcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11944fd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11944fd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11944fd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11944fda push ecx */
  push32((uint32_t)(ECX));
  /* 11944fdb mov edx, dword ptr [0x11965ac8] */
  EDX = (r32((uint32_t)(0x11965ac8)));
  /* 11944fe1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11944fe3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11944fe5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11944feb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11944ff1 push edx */
  push32((uint32_t)(EDX));
  /* 11944ff2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11944ff5 push eax */
  push32((uint32_t)(EAX));
  /* 11944ff6 call dword ptr [0x11965adc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11965adc))), 0x11944ffcu);
  /* 11944ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11944ffe jne 0x11945014 */
  if (!C.zf) goto L_11945014;
  /* 11945000 mov dword ptr [0x11965ad4], 0 */
  w32((uint32_t)(0x11965ad4), (0x0u));
  /* 1194500a mov eax, 1 */
  EAX = (0x1u);
  /* 1194500f jmp 0x119450d9 */
  goto L_119450d9;
L_11945014:;
  /* 11945014 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11945017 push ecx */
  push32((uint32_t)(ECX));
  /* 11945018 mov edx, dword ptr [0x11965acc] */
  EDX = (r32((uint32_t)(0x11965acc)));
  /* 1194501e push edx */
  push32((uint32_t)(EDX));
  /* 1194501f call 0x119471b0 */
  push32(0x11945024u); f_119471b0();
  /* 11945024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945027 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11945029 jne 0x11945069 */
  if (!C.zf) goto L_11945069;
  /* 1194502b cmp dword ptr [0x11965ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945032 jne 0x11945046 */
  if (!C.zf) goto L_11945046;
  /* 11945034 push 1 */
  push32((uint32_t)(0x1u));
  /* 11945036 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11945039 push eax */
  push32((uint32_t)(EAX));
  /* 1194503a call 0x11945300 */
  push32(0x1194503fu); f_11945300();
  /* 1194503f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945042 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11945044 je 0x11945067 */
  if (C.zf) goto L_11945067;
L_11945046:;
  /* 11945046 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11945049 mov dword ptr [0x11965ad8], ecx */
  w32((uint32_t)(0x11965ad8), (ECX));
  /* 1194504f mov edx, dword ptr [0x11965ad8] */
  EDX = (r32((uint32_t)(0x11965ad8)));
  /* 11945055 mov dword ptr [0x11965abc], edx */
  w32((uint32_t)(0x11965abc), (EDX));
  /* 1194505b mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 11945060 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11945062 mov dword ptr [0x11965ad4], eax */
  w32((uint32_t)(0x11965ad4), (EAX));
L_11945067:;
  /* 11945067 jmp 0x119450cc */
  goto L_119450cc;
L_11945069:;
  /* 11945069 cmp dword ptr [0x11965ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945070 jne 0x119450cc */
  if (!C.zf) goto L_119450cc;
  /* 11945072 cmp dword ptr [0x11965ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945079 je 0x119450cc */
  if (C.zf) goto L_119450cc;
  /* 1194507b mov ecx, dword ptr [0x11965ac4] */
  ECX = (r32((uint32_t)(0x11965ac4)));
  /* 11945081 push ecx */
  push32((uint32_t)(ECX));
  /* 11945082 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11945085 push edx */
  push32((uint32_t)(EDX));
  /* 11945086 mov eax, dword ptr [0x11965acc] */
  EAX = (r32((uint32_t)(0x11965acc)));
  /* 1194508b push eax */
  push32((uint32_t)(EAX));
  /* 1194508c call 0x11947280 */
  push32(0x11945091u); f_11947280();
  /* 11945091 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11945096 jne 0x119450cc */
  if (!C.zf) goto L_119450cc;
  /* 11945098 push 0 */
  push32((uint32_t)(0x0u));
  /* 1194509a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1194509d push ecx */
  push32((uint32_t)(ECX));
  /* 1194509e call 0x11945300 */
  push32(0x119450a3u); f_11945300();
  /* 119450a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119450a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119450a8 je 0x119450cc */
  if (C.zf) goto L_119450cc;
  /* 119450aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119450ad mov dword ptr [0x11965ad8], edx */
  w32((uint32_t)(0x11965ad8), (EDX));
  /* 119450b3 mov eax, dword ptr [0x11965ad8] */
  EAX = (r32((uint32_t)(0x11965ad8)));
  /* 119450b8 mov dword ptr [0x11965abc], eax */
  w32((uint32_t)(0x11965abc), (EAX));
  /* 119450bd mov ecx, dword ptr [0x11965ad4] */
  ECX = (r32((uint32_t)(0x11965ad4)));
  /* 119450c3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119450c6 mov dword ptr [0x11965ad4], ecx */
  w32((uint32_t)(0x11965ad4), (ECX));
L_119450cc:;
  /* 119450cc mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 119450d1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119450d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119450d6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119450d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_119450d9:;
  /* 119450d9 mov esp, ebp */
  ESP = (EBP);
  /* 119450db pop ebp */
  EBP = (pop32());
  /* 119450dc ret 4 */
  ESPCHK(0x11944fc0u, _esp0);
  ESP += 8; return;
}

/* FUN_100150e0 @ 0x119450e0 (69 bytes, 20 insns) */
void f_119450e0(void) {
  FTRACE(0x119450e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119450e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119450e1 mov ebp, esp */
  EBP = (ESP);
  /* 119450e3 mov eax, dword ptr [0x11965ad0] */
  EAX = (r32((uint32_t)(0x11965ad0)));
  /* 119450e8 push eax */
  push32((uint32_t)(EAX));
  /* 119450e9 call 0x1193b910 */
  push32(0x119450eeu); f_1193b910();
  /* 119450ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119450f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119450f3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119450f6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 119450f9 mov dword ptr [0x11965ac0], ecx */
  w32((uint32_t)(0x11965ac0), (ECX));
  /* 119450ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11945101 push 0x11945130 */
  push32((uint32_t)(0x11945130u));
  /* 11945106 call dword ptr [0x119682f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682f8))), 0x1194510cu);
  /* 1194510c mov edx, dword ptr [0x11965ad4] */
  EDX = (r32((uint32_t)(0x11965ad4)));
  /* 11945112 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11945115 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11945117 jne 0x11945123 */
  if (!C.zf) goto L_11945123;
  /* 11945119 mov dword ptr [0x11965ad4], 0 */
  w32((uint32_t)(0x11965ad4), (0x0u));
L_11945123:;
  /* 11945123 pop ebp */
  EBP = (pop32());
  /* 11945124 ret  */
  ESPCHK(0x119450e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015130 @ 0x11945130 (172 bytes, 54 insns) */
void f_11945130(void) {
  FTRACE(0x11945130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945130 push ebp */
  push32((uint32_t)(EBP));
  /* 11945131 mov ebp, esp */
  EBP = (ESP);
  /* 11945133 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945139 push eax */
  push32((uint32_t)(EAX));
  /* 1194513a call 0x11945570 */
  push32(0x1194513fu); f_11945570();
  /* 1194513f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945142 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11945145 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11945147 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1194514a push ecx */
  push32((uint32_t)(ECX));
  /* 1194514b mov edx, dword ptr [0x11965ac0] */
  EDX = (r32((uint32_t)(0x11965ac0)));
  /* 11945151 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11945153 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945155 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1194515b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945161 push edx */
  push32((uint32_t)(EDX));
  /* 11945162 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11945165 push eax */
  push32((uint32_t)(EAX));
  /* 11945166 call dword ptr [0x11965adc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11965adc))), 0x1194516cu);
  /* 1194516c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194516e jne 0x11945181 */
  if (!C.zf) goto L_11945181;
  /* 11945170 mov dword ptr [0x11965ad4], 0 */
  w32((uint32_t)(0x11965ad4), (0x0u));
  /* 1194517a mov eax, 1 */
  EAX = (0x1u);
  /* 1194517f jmp 0x119451d6 */
  goto L_119451d6;
L_11945181:;
  /* 11945181 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11945184 push ecx */
  push32((uint32_t)(ECX));
  /* 11945185 mov edx, dword ptr [0x11965ad0] */
  EDX = (r32((uint32_t)(0x11965ad0)));
  /* 1194518b push edx */
  push32((uint32_t)(EDX));
  /* 1194518c call 0x119471b0 */
  push32(0x11945191u); f_119471b0();
  /* 11945191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11945196 jne 0x119451c9 */
  if (!C.zf) goto L_119451c9;
  /* 11945198 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1194519b push eax */
  push32((uint32_t)(EAX));
  /* 1194519c call 0x119452b0 */
  push32(0x119451a1u); f_119452b0();
  /* 119451a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119451a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119451a6 je 0x119451c9 */
  if (C.zf) goto L_119451c9;
  /* 119451a8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119451ab mov dword ptr [0x11965ad8], ecx */
  w32((uint32_t)(0x11965ad8), (ECX));
  /* 119451b1 mov edx, dword ptr [0x11965ad8] */
  EDX = (r32((uint32_t)(0x11965ad8)));
  /* 119451b7 mov dword ptr [0x11965abc], edx */
  w32((uint32_t)(0x11965abc), (EDX));
  /* 119451bd mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 119451c2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 119451c4 mov dword ptr [0x11965ad4], eax */
  w32((uint32_t)(0x11965ad4), (EAX));
L_119451c9:;
  /* 119451c9 mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 119451ce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119451d1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119451d3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119451d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_119451d6:;
  /* 119451d6 mov esp, ebp */
  ESP = (EBP);
  /* 119451d8 pop ebp */
  EBP = (pop32());
  /* 119451d9 ret 4 */
  ESPCHK(0x11945130u, _esp0);
  ESP += 8; return;
}

/* FUN_100151e0 @ 0x119451e0 (43 bytes, 11 insns) */
void f_119451e0(void) {
  FTRACE(0x119451e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119451e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119451e1 mov ebp, esp */
  EBP = (ESP);
  /* 119451e3 mov eax, dword ptr [0x11965ad4] */
  EAX = (r32((uint32_t)(0x11965ad4)));
  /* 119451e8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 119451ed mov dword ptr [0x11965ad4], eax */
  w32((uint32_t)(0x11965ad4), (EAX));
  /* 119451f2 call dword ptr [0x119682f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682f4))), 0x119451f8u);
  /* 119451f8 mov dword ptr [0x11965ad8], eax */
  w32((uint32_t)(0x11965ad8), (EAX));
  /* 119451fd mov ecx, dword ptr [0x11965ad8] */
  ECX = (r32((uint32_t)(0x11965ad8)));
  /* 11945203 mov dword ptr [0x11965abc], ecx */
  w32((uint32_t)(0x11965abc), (ECX));
  /* 11945209 pop ebp */
  EBP = (pop32());
  /* 1194520a ret  */
  ESPCHK(0x119451e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015210 @ 0x11945210 (155 bytes, 57 insns) */
void f_11945210(void) {
  FTRACE(0x11945210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945210 push ebp */
  push32((uint32_t)(EBP));
  /* 11945211 mov ebp, esp */
  EBP = (ESP);
  /* 11945213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945216 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194521a je 0x1194523b */
  if (C.zf) goto L_1194523b;
  /* 1194521c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194521f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11945222 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11945224 je 0x1194523b */
  if (C.zf) goto L_1194523b;
  /* 11945226 push 0x11961654 */
  push32((uint32_t)(0x11961654u));
  /* 1194522b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194522e push edx */
  push32((uint32_t)(EDX));
  /* 1194522f call 0x11944770 */
  push32(0x11945234u); f_11944770();
  /* 11945234 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11945239 jne 0x11945263 */
  if (!C.zf) goto L_11945263;
L_1194523b:;
  /* 1194523b push 8 */
  push32((uint32_t)(0x8u));
  /* 1194523d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11945240 push eax */
  push32((uint32_t)(EAX));
  /* 11945241 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11945246 mov ecx, dword ptr [0x11965ad8] */
  ECX = (r32((uint32_t)(0x11965ad8)));
  /* 1194524c push ecx */
  push32((uint32_t)(ECX));
  /* 1194524d call dword ptr [0x11965adc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11965adc))), 0x11945253u);
  /* 11945253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11945255 jne 0x1194525b */
  if (!C.zf) goto L_1194525b;
  /* 11945257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11945259 jmp 0x119452a7 */
  goto L_119452a7;
L_1194525b:;
  /* 1194525b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1194525e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11945261 jmp 0x1194529b */
  goto L_1194529b;
L_11945263:;
  /* 11945263 push 0x11961650 */
  push32((uint32_t)(0x11961650u));
  /* 11945268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194526b push eax */
  push32((uint32_t)(EAX));
  /* 1194526c call 0x11944770 */
  push32(0x11945271u); f_11944770();
  /* 11945271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11945276 jne 0x1194529b */
  if (!C.zf) goto L_1194529b;
  /* 11945278 push 8 */
  push32((uint32_t)(0x8u));
  /* 1194527a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1194527d push ecx */
  push32((uint32_t)(ECX));
  /* 1194527e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11945280 mov edx, dword ptr [0x11965ad8] */
  EDX = (r32((uint32_t)(0x11965ad8)));
  /* 11945286 push edx */
  push32((uint32_t)(EDX));
  /* 11945287 call dword ptr [0x11965adc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11965adc))), 0x1194528du);
  /* 1194528d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194528f jne 0x11945295 */
  if (!C.zf) goto L_11945295;
  /* 11945291 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11945293 jmp 0x119452a7 */
  goto L_119452a7;
L_11945295:;
  /* 11945295 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11945298 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1194529b:;
  /* 1194529b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194529e push ecx */
  push32((uint32_t)(ECX));
  /* 1194529f call 0x11947390 */
  push32(0x119452a4u); f_11947390();
  /* 119452a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119452a7:;
  /* 119452a7 mov esp, ebp */
  ESP = (EBP);
  /* 119452a9 pop ebp */
  EBP = (pop32());
  /* 119452aa ret  */
  ESPCHK(0x11945210u, _esp0);
  ESP += 4; return;
}

/* FUN_100152b0 @ 0x119452b0 (79 bytes, 26 insns) */
void f_119452b0(void) {
  FTRACE(0x119452b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119452b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119452b1 mov ebp, esp */
  EBP = (ESP);
  /* 119452b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119452b6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 119452ba mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 119452be mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119452c5 jmp 0x119452d0 */
  goto L_119452d0;
L_119452c7:;
  /* 119452c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119452ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119452cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119452d0:;
  /* 119452d0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119452d4 jae 0x119452f6 */
  if (!C.cf) goto L_119452f6;
  /* 119452d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119452d9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119452df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119452e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119452e4 mov cx, word ptr [eax*2 + 0x119649c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x119649c4)));
  /* 119452ec cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119452ee jne 0x119452f4 */
  if (!C.zf) goto L_119452f4;
  /* 119452f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119452f2 jmp 0x119452fb */
  goto L_119452fb;
L_119452f4:;
  /* 119452f4 jmp 0x119452c7 */
  goto L_119452c7;
L_119452f6:;
  /* 119452f6 mov eax, 1 */
  EAX = (0x1u);
L_119452fb:;
  /* 119452fb mov esp, ebp */
  ESP = (EBP);
  /* 119452fd pop ebp */
  EBP = (pop32());
  /* 119452fe ret  */
  ESPCHK(0x119452b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015300 @ 0x11945300 (135 bytes, 48 insns) */
void f_11945300(void) {
  FTRACE(0x11945300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945300 push ebp */
  push32((uint32_t)(EBP));
  /* 11945301 mov ebp, esp */
  EBP = (ESP);
  /* 11945303 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945306 push esi */
  push32((uint32_t)(ESI));
  /* 11945307 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194530a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1194530f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11945314 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11945319 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1194531c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11945321 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11945324 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11945326 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11945329 push ecx */
  push32((uint32_t)(ECX));
  /* 1194532a push 1 */
  push32((uint32_t)(0x1u));
  /* 1194532c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194532f push edx */
  push32((uint32_t)(EDX));
  /* 11945330 call dword ptr [0x11965adc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11965adc))), 0x11945336u);
  /* 11945336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11945338 jne 0x1194533e */
  if (!C.zf) goto L_1194533e;
  /* 1194533a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194533c jmp 0x11945382 */
  goto L_11945382;
L_1194533e:;
  /* 1194533e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11945341 push eax */
  push32((uint32_t)(EAX));
  /* 11945342 call 0x11945570 */
  push32(0x11945347u); f_11945570();
  /* 11945347 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194534a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194534d je 0x1194537d */
  if (C.zf) goto L_1194537d;
  /* 1194534f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945353 je 0x1194537d */
  if (C.zf) goto L_1194537d;
  /* 11945355 mov ecx, dword ptr [0x11965acc] */
  ECX = (r32((uint32_t)(0x11965acc)));
  /* 1194535b push ecx */
  push32((uint32_t)(ECX));
  /* 1194535c call 0x119455f0 */
  push32(0x11945361u); f_119455f0();
  /* 11945361 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945364 mov esi, eax */
  ESI = (EAX);
  /* 11945366 mov edx, dword ptr [0x11965acc] */
  EDX = (r32((uint32_t)(0x11965acc)));
  /* 1194536c push edx */
  push32((uint32_t)(EDX));
  /* 1194536d call 0x1193b910 */
  push32(0x11945372u); f_1193b910();
  /* 11945372 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945375 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945377 jne 0x1194537d */
  if (!C.zf) goto L_1194537d;
  /* 11945379 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194537b jmp 0x11945382 */
  goto L_11945382;
L_1194537d:;
  /* 1194537d mov eax, 1 */
  EAX = (0x1u);
L_11945382:;
  /* 11945382 pop esi */
  ESI = (pop32());
  /* 11945383 mov esp, ebp */
  ESP = (EBP);
  /* 11945385 pop ebp */
  EBP = (pop32());
  /* 11945386 ret  */
  ESPCHK(0x11945300u, _esp0);
  ESP += 4; return;
}

/* FUN_10015390 @ 0x11945390 (77 bytes, 18 insns) */
void f_11945390(void) {
  FTRACE(0x11945390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945390 push ebp */
  push32((uint32_t)(EBP));
  /* 11945391 mov ebp, esp */
  EBP = (ESP);
  /* 11945393 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945399 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 119453a3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 119453a9 push eax */
  push32((uint32_t)(EAX));
  /* 119453aa call dword ptr [0x119682f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682f0))), 0x119453b0u);
  /* 119453b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119453b2 je 0x119453c9 */
  if (C.zf) goto L_119453c9;
  /* 119453b4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119453bb jne 0x119453c9 */
  if (!C.zf) goto L_119453c9;
  /* 119453bd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 119453c7 jmp 0x119453d3 */
  goto L_119453d3;
L_119453c9:;
  /* 119453c9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_119453d3:;
  /* 119453d3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 119453d9 mov esp, ebp */
  ESP = (EBP);
  /* 119453db pop ebp */
  EBP = (pop32());
  /* 119453dc ret  */
  ESPCHK(0x11945390u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x119453e0 (388 bytes, 118 insns) */
void f_119453e0(void) {
  FTRACE(0x119453e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119453e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119453e1 mov ebp, esp */
  EBP = (ESP);
  /* 119453e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119453e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119453ed mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 119453f4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_119453fb:;
  /* 119453fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119453fe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945401 jg 0x11945548 */
  if ((!C.zf&&C.sf==C.of)) goto L_11945548;
  /* 11945407 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1194540a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194540d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1194540e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945410 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11945412 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11945415 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945418 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194541b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194541e cmp edx, dword ptr [ecx + 0x11964520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11964520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945424 jne 0x1194551e */
  if (!C.zf) goto L_1194551e;
  /* 1194542a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194542d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11945430 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945434 ja 0x11945457 */
  if ((!C.cf&&!C.zf)) goto L_11945457;
  /* 11945436 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194543a je 0x119454c9 */
  if (C.zf) goto L_119454c9;
  /* 11945440 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945444 je 0x11945474 */
  if (C.zf) goto L_11945474;
  /* 11945446 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194544a je 0x11945496 */
  if (C.zf) goto L_11945496;
  /* 1194544c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945450 je 0x119454b8 */
  if (C.zf) goto L_119454b8;
  /* 11945452 jmp 0x119454e8 */
  goto L_119454e8;
L_11945457:;
  /* 11945457 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194545e je 0x11945485 */
  if (C.zf) goto L_11945485;
  /* 11945460 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945467 je 0x119454a7 */
  if (C.zf) goto L_119454a7;
  /* 11945469 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945470 je 0x119454da */
  if (C.zf) goto L_119454da;
  /* 11945472 jmp 0x119454e8 */
  goto L_119454e8;
L_11945474:;
  /* 11945474 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945477 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194547a add ecx, 0x11964524 */
  { uint32_t _a=(ECX),_b=(0x11964524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945480 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11945483 jmp 0x119454e8 */
  goto L_119454e8;
L_11945485:;
  /* 11945485 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945488 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194548b mov eax, dword ptr [edx + 0x1196452c] */
  EAX = (r32((uint32_t)(EDX + 0x1196452c)));
  /* 11945491 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11945494 jmp 0x119454e8 */
  goto L_119454e8;
L_11945496:;
  /* 11945496 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945499 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194549c add ecx, 0x11964530 */
  { uint32_t _a=(ECX),_b=(0x11964530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119454a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119454a5 jmp 0x119454e8 */
  goto L_119454e8;
L_119454a7:;
  /* 119454a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119454aa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119454ad mov eax, dword ptr [edx + 0x11964534] */
  EAX = (r32((uint32_t)(EDX + 0x11964534)));
  /* 119454b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119454b6 jmp 0x119454e8 */
  goto L_119454e8;
L_119454b8:;
  /* 119454b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119454bb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119454be add ecx, 0x11964538 */
  { uint32_t _a=(ECX),_b=(0x11964538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119454c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119454c7 jmp 0x119454e8 */
  goto L_119454e8;
L_119454c9:;
  /* 119454c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119454cc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119454cf add edx, 0x1196453c */
  { uint32_t _a=(EDX),_b=(0x1196453cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119454d5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119454d8 jmp 0x119454e8 */
  goto L_119454e8;
L_119454da:;
  /* 119454da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119454dd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119454e0 add eax, 0x11964544 */
  { uint32_t _a=(EAX),_b=(0x11964544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119454e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119454e8:;
  /* 119454e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119454ec je 0x119454f4 */
  if (C.zf) goto L_119454f4;
  /* 119454ee cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119454f2 jge 0x119454f6 */
  if ((C.sf==C.of)) goto L_119454f6;
L_119454f4:;
  /* 119454f4 jmp 0x11945548 */
  goto L_11945548;
L_119454f6:;
  /* 119454f6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119454f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119454fc push ecx */
  push32((uint32_t)(ECX));
  /* 119454fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11945500 push edx */
  push32((uint32_t)(EDX));
  /* 11945501 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945504 push eax */
  push32((uint32_t)(EAX));
  /* 11945505 call 0x1193c300 */
  push32(0x1194550au); f_1193c300();
  /* 1194550a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194550d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945510 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945513 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11945517 mov eax, 1 */
  EAX = (0x1u);
  /* 1194551c jmp 0x1194555e */
  goto L_1194555e;
L_1194551e:;
  /* 1194551e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945521 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11945524 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945527 cmp eax, dword ptr [edx + 0x11964520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11964520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194552d jae 0x1194553a */
  if (!C.cf) goto L_1194553a;
  /* 1194552f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945532 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945535 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11945538 jmp 0x11945543 */
  goto L_11945543;
L_1194553a:;
  /* 1194553a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194553d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945540 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11945543:;
  /* 11945543 jmp 0x119453fb */
  goto L_119453fb;
L_11945548:;
  /* 11945548 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194554b push eax */
  push32((uint32_t)(EAX));
  /* 1194554c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194554f push ecx */
  push32((uint32_t)(ECX));
  /* 11945550 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11945553 push edx */
  push32((uint32_t)(EDX));
  /* 11945554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945557 push eax */
  push32((uint32_t)(EAX));
  /* 11945558 call dword ptr [0x119682fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682fc))), 0x1194555eu);
L_1194555e:;
  /* 1194555e mov esp, ebp */
  ESP = (EBP);
  /* 11945560 pop ebp */
  EBP = (pop32());
  /* 11945561 ret 0x10 */
  ESPCHK(0x119453e0u, _esp0);
  ESP += 20; return;
}

/* FUN_10015570 @ 0x11945570 (118 bytes, 42 insns) */
void f_11945570(void) {
  FTRACE(0x11945570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945570 push ebp */
  push32((uint32_t)(EBP));
  /* 11945571 mov ebp, esp */
  EBP = (ESP);
  /* 11945573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945576 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1194557d:;
  /* 1194557d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945580 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11945582 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11945585 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11945589 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194558c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194558f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11945592 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11945594 je 0x119455df */
  if (C.zf) goto L_119455df;
  /* 11945596 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1194559a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194559d jl 0x119455b2 */
  if ((C.sf!=C.of)) goto L_119455b2;
  /* 1194559f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119455a3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119455a6 jg 0x119455b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_119455b2;
  /* 119455a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 119455ab add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119455ad mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 119455b0 jmp 0x119455cc */
  goto L_119455cc;
L_119455b2:;
  /* 119455b2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119455b6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119455b9 jl 0x119455cc */
  if ((C.sf!=C.of)) goto L_119455cc;
  /* 119455bb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119455bf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119455c2 jg 0x119455cc */
  if ((!C.zf&&C.sf==C.of)) goto L_119455cc;
  /* 119455c4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 119455c7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119455c9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_119455cc:;
  /* 119455cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119455cf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 119455d2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119455d6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 119455da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119455dd jmp 0x1194557d */
  goto L_1194557d;
L_119455df:;
  /* 119455df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119455e2 mov esp, ebp */
  ESP = (EBP);
  /* 119455e4 pop ebp */
  EBP = (pop32());
  /* 119455e5 ret  */
  ESPCHK(0x11945570u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x119455f0 (101 bytes, 36 insns) */
void f_119455f0(void) {
  FTRACE(0x119455f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119455f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119455f1 mov ebp, esp */
  EBP = (ESP);
  /* 119455f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119455f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119455fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945600 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11945602 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11945605 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945608 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194560b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1194560e:;
  /* 1194560e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11945612 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945615 jl 0x11945620 */
  if ((C.sf!=C.of)) goto L_11945620;
  /* 11945617 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1194561b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194561e jle 0x11945632 */
  if ((C.zf||C.sf!=C.of)) goto L_11945632;
L_11945620:;
  /* 11945620 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11945624 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945627 jl 0x1194564e */
  if ((C.sf!=C.of)) goto L_1194564e;
  /* 11945629 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1194562d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945630 jg 0x1194564e */
  if ((!C.zf&&C.sf==C.of)) goto L_1194564e;
L_11945632:;
  /* 11945632 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11945635 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945638 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1194563b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194563e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11945640 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11945643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945646 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945649 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1194564c jmp 0x1194560e */
  goto L_1194560e;
L_1194564e:;
  /* 1194564e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11945651 mov esp, ebp */
  ESP = (EBP);
  /* 11945653 pop ebp */
  EBP = (pop32());
  /* 11945654 ret  */
  ESPCHK(0x119455f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015660 @ 0x11945660 (122 bytes, 39 insns) */
void f_11945660(void) {
  FTRACE(0x11945660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945660 push ebp */
  push32((uint32_t)(EBP));
  /* 11945661 mov ebp, esp */
  EBP = (ESP);
  /* 11945663 push ecx */
  push32((uint32_t)(ECX));
  /* 11945664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945667 cmp eax, dword ptr [0x1196735c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1196735c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194566d jae 0x11945691 */
  if (!C.cf) goto L_11945691;
  /* 1194566f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945672 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11945675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945678 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1194567b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194567e mov eax, dword ptr [ecx*4 + 0x11967220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11967220)));
  /* 11945685 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1194568a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1194568d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1194568f jne 0x119456ac */
  if (!C.zf) goto L_119456ac;
L_11945691:;
  /* 11945691 call 0x119409b0 */
  push32(0x11945696u); f_119409b0();
  /* 11945696 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1194569c call 0x119409c0 */
  push32(0x119456a1u); f_119409c0();
  /* 119456a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119456a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119456aa jmp 0x119456d6 */
  goto L_119456d6;
L_119456ac:;
  /* 119456ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119456af push edx */
  push32((uint32_t)(EDX));
  /* 119456b0 call 0x119421d0 */
  push32(0x119456b5u); f_119421d0();
  /* 119456b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119456b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119456bb push eax */
  push32((uint32_t)(EAX));
  /* 119456bc call 0x119456e0 */
  push32(0x119456c1u); f_119456e0();
  /* 119456c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119456c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119456c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119456ca push ecx */
  push32((uint32_t)(ECX));
  /* 119456cb call 0x11942260 */
  push32(0x119456d0u); f_11942260();
  /* 119456d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119456d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119456d6:;
  /* 119456d6 mov esp, ebp */
  ESP = (EBP);
  /* 119456d8 pop ebp */
  EBP = (pop32());
  /* 119456d9 ret  */
  ESPCHK(0x11945660u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x119456e0 (170 bytes, 59 insns) */
void f_119456e0(void) {
  FTRACE(0x119456e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119456e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119456e1 mov ebp, esp */
  EBP = (ESP);
  /* 119456e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119456e4 push esi */
  push32((uint32_t)(ESI));
  /* 119456e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119456e8 push eax */
  push32((uint32_t)(EAX));
  /* 119456e9 call 0x11942050 */
  push32(0x119456eeu); f_11942050();
  /* 119456ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119456f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119456f4 je 0x11945733 */
  if (C.zf) goto L_11945733;
  /* 119456f6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119456fa je 0x11945702 */
  if (C.zf) goto L_11945702;
  /* 119456fc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945700 jne 0x1194571c */
  if (!C.zf) goto L_1194571c;
L_11945702:;
  /* 11945702 push 1 */
  push32((uint32_t)(0x1u));
  /* 11945704 call 0x11942050 */
  push32(0x11945709u); f_11942050();
  /* 11945709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194570c mov esi, eax */
  ESI = (EAX);
  /* 1194570e push 2 */
  push32((uint32_t)(0x2u));
  /* 11945710 call 0x11942050 */
  push32(0x11945715u); f_11942050();
  /* 11945715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945718 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194571a je 0x11945733 */
  if (C.zf) goto L_11945733;
L_1194571c:;
  /* 1194571c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194571f push ecx */
  push32((uint32_t)(ECX));
  /* 11945720 call 0x11942050 */
  push32(0x11945725u); f_11942050();
  /* 11945725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945728 push eax */
  push32((uint32_t)(EAX));
  /* 11945729 call dword ptr [0x119682ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682ec))), 0x1194572fu);
  /* 1194572f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11945731 je 0x1194573c */
  if (C.zf) goto L_1194573c;
L_11945733:;
  /* 11945733 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1194573a jmp 0x11945745 */
  goto L_11945745;
L_1194573c:;
  /* 1194573c call dword ptr [0x119683dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683dc))), 0x11945742u);
  /* 11945742 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11945745:;
  /* 11945745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945748 push edx */
  push32((uint32_t)(EDX));
  /* 11945749 call 0x11941f70 */
  push32(0x1194574eu); f_11941f70();
  /* 1194574e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945751 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945754 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11945757 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194575a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1194575d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11945760 mov edx, dword ptr [eax*4 + 0x11967220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11967220)));
  /* 11945767 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1194576c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945770 je 0x11945783 */
  if (C.zf) goto L_11945783;
  /* 11945772 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11945775 push eax */
  push32((uint32_t)(EAX));
  /* 11945776 call 0x11940910 */
  push32(0x1194577bu); f_11940910();
  /* 1194577b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194577e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11945781 jmp 0x11945785 */
  goto L_11945785;
L_11945783:;
  /* 11945783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11945785:;
  /* 11945785 pop esi */
  ESI = (pop32());
  /* 11945786 mov esp, ebp */
  ESP = (EBP);
  /* 11945788 pop ebp */
  EBP = (pop32());
  /* 11945789 ret  */
  ESPCHK(0x119456e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015790 @ 0x11945790 (146 bytes, 52 insns) */
void f_11945790(void) {
  FTRACE(0x11945790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945790 push ebp */
  push32((uint32_t)(EBP));
  /* 11945791 mov ebp, esp */
  EBP = (ESP);
  /* 11945793 push ebx */
  push32((uint32_t)(EBX));
  /* 11945794 push esi */
  push32((uint32_t)(ESI));
  /* 11945795 push edi */
  push32((uint32_t)(EDI));
L_11945796:;
  /* 11945796 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194579a jne 0x119457ba */
  if (!C.zf) goto L_119457ba;
  /* 1194579c push 0x11960f90 */
  push32((uint32_t)(0x11960f90u));
  /* 119457a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119457a3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 119457a5 push 0x11961658 */
  push32((uint32_t)(0x11961658u));
  /* 119457aa push 2 */
  push32((uint32_t)(0x2u));
  /* 119457ac call 0x11937ba0 */
  push32(0x119457b1u); f_11937ba0();
  /* 119457b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119457b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119457b7 jne 0x119457ba */
  if (!C.zf) goto L_119457ba;
  /* 119457b9 int3  */
  x86_unimpl("int3 @ 0x119457b9");
L_119457ba:;
  /* 119457ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119457bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119457be jne 0x11945796 */
  if (!C.zf) goto L_11945796;
  /* 119457c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119457c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119457c6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 119457cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119457ce je 0x1194581d */
  if (C.zf) goto L_1194581d;
  /* 119457d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119457d3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119457d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 119457d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119457db je 0x1194581d */
  if (C.zf) goto L_1194581d;
  /* 119457dd push 2 */
  push32((uint32_t)(0x2u));
  /* 119457df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119457e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119457e5 push eax */
  push32((uint32_t)(EAX));
  /* 119457e6 call 0x11939570 */
  push32(0x119457ebu); f_11939570();
  /* 119457eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119457ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119457f1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119457f4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 119457fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119457fd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11945800 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945803 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11945809 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194580c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11945813 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945816 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1194581d:;
  /* 1194581d pop edi */
  EDI = (pop32());
  /* 1194581e pop esi */
  ESI = (pop32());
  /* 1194581f pop ebx */
  EBX = (pop32());
  /* 11945820 pop ebp */
  EBP = (pop32());
  /* 11945821 ret  */
  ESPCHK(0x11945790u, _esp0);
  ESP += 4; return;
}

/* FUN_10015830 @ 0x11945830 (289 bytes, 97 insns) */
void f_11945830(void) {
  FTRACE(0x11945830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945830 push ebp */
  push32((uint32_t)(EBP));
  /* 11945831 mov ebp, esp */
  EBP = (ESP);
  /* 11945833 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945836 push esi */
  push32((uint32_t)(ESI));
  /* 11945837 mov eax, dword ptr [0x11964c98] */
  EAX = (r32((uint32_t)(0x11964c98)));
  /* 1194583c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1194583f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11945846 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1194584d jmp 0x11945858 */
  goto L_11945858;
L_1194584f:;
  /* 1194584f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945852 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945855 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11945858:;
  /* 11945858 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194585c jae 0x11945891 */
  if (!C.cf) goto L_11945891;
  /* 1194585e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945861 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945864 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11945867 push ecx */
  push32((uint32_t)(ECX));
  /* 11945868 call 0x1193b910 */
  push32(0x1194586du); f_1193b910();
  /* 1194586d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945870 mov esi, eax */
  ESI = (EAX);
  /* 11945872 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945875 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945878 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1194587c push ecx */
  push32((uint32_t)(ECX));
  /* 1194587d call 0x1193b910 */
  push32(0x11945882u); f_1193b910();
  /* 11945882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945885 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945888 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1194588c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1194588f jmp 0x1194584f */
  goto L_1194584f;
L_11945891:;
  /* 11945891 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11945894 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945897 push eax */
  push32((uint32_t)(EAX));
  /* 11945898 call 0x11938ac0 */
  push32(0x1194589du); f_11938ac0();
  /* 1194589d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119458a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119458a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119458a7 je 0x11945949 */
  if (C.zf) goto L_11945949;
  /* 119458ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119458b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119458b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119458ba jmp 0x119458c5 */
  goto L_119458c5;
L_119458bc:;
  /* 119458bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119458bf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119458c2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119458c5:;
  /* 119458c5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119458c9 jae 0x1194593a */
  if (!C.cf) goto L_1194593a;
  /* 119458cb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119458ce mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 119458d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119458d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119458d7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119458da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119458dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119458e0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119458e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119458e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119458e7 push edx */
  push32((uint32_t)(EDX));
  /* 119458e8 call 0x1193ba90 */
  push32(0x119458edu); f_1193ba90();
  /* 119458ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119458f0 push eax */
  push32((uint32_t)(EAX));
  /* 119458f1 call 0x1193b910 */
  push32(0x119458f6u); f_1193b910();
  /* 119458f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119458f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119458fc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119458fe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11945901 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945904 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11945907 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1194590a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194590d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11945910 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945913 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945916 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1194591a push eax */
  push32((uint32_t)(EAX));
  /* 1194591b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1194591e push ecx */
  push32((uint32_t)(ECX));
  /* 1194591f call 0x1193ba90 */
  push32(0x11945924u); f_1193ba90();
  /* 11945924 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945927 push eax */
  push32((uint32_t)(EAX));
  /* 11945928 call 0x1193b910 */
  push32(0x1194592du); f_1193b910();
  /* 1194592d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945930 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945933 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945935 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11945938 jmp 0x119458bc */
  goto L_119458bc;
L_1194593a:;
  /* 1194593a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1194593d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11945940 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945943 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945946 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11945949:;
  /* 11945949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194594c pop esi */
  ESI = (pop32());
  /* 1194594d mov esp, ebp */
  ESP = (EBP);
  /* 1194594f pop ebp */
  EBP = (pop32());
  /* 11945950 ret  */
  ESPCHK(0x11945830u, _esp0);
  ESP += 4; return;
}

/* FUN_10015960 @ 0x11945960 (291 bytes, 97 insns) */
void f_11945960(void) {
  FTRACE(0x11945960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945960 push ebp */
  push32((uint32_t)(EBP));
  /* 11945961 mov ebp, esp */
  EBP = (ESP);
  /* 11945963 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945966 push esi */
  push32((uint32_t)(ESI));
  /* 11945967 mov eax, dword ptr [0x11964c98] */
  EAX = (r32((uint32_t)(0x11964c98)));
  /* 1194596c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1194596f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11945976 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1194597d jmp 0x11945988 */
  goto L_11945988;
L_1194597f:;
  /* 1194597f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945982 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945985 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11945988:;
  /* 11945988 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194598c jae 0x119459c2 */
  if (!C.cf) goto L_119459c2;
  /* 1194598e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945991 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945994 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11945998 push ecx */
  push32((uint32_t)(ECX));
  /* 11945999 call 0x1193b910 */
  push32(0x1194599eu); f_1193b910();
  /* 1194599e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119459a1 mov esi, eax */
  ESI = (EAX);
  /* 119459a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119459a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119459a9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 119459ad push ecx */
  push32((uint32_t)(ECX));
  /* 119459ae call 0x1193b910 */
  push32(0x119459b3u); f_1193b910();
  /* 119459b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119459b6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119459b9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 119459bd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119459c0 jmp 0x1194597f */
  goto L_1194597f;
L_119459c2:;
  /* 119459c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119459c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119459c8 push eax */
  push32((uint32_t)(EAX));
  /* 119459c9 call 0x11938ac0 */
  push32(0x119459ceu); f_11938ac0();
  /* 119459ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119459d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119459d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119459d8 je 0x11945a7b */
  if (C.zf) goto L_11945a7b;
  /* 119459de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119459e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119459e4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119459eb jmp 0x119459f6 */
  goto L_119459f6;
L_119459ed:;
  /* 119459ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119459f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119459f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119459f6:;
  /* 119459f6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119459fa jae 0x11945a6c */
  if (!C.cf) goto L_11945a6c;
  /* 119459fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119459ff mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11945a02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945a05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945a08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11945a0b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945a0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945a11 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11945a15 push ecx */
  push32((uint32_t)(ECX));
  /* 11945a16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945a19 push edx */
  push32((uint32_t)(EDX));
  /* 11945a1a call 0x1193ba90 */
  push32(0x11945a1fu); f_1193ba90();
  /* 11945a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945a22 push eax */
  push32((uint32_t)(EAX));
  /* 11945a23 call 0x1193b910 */
  push32(0x11945a28u); f_1193b910();
  /* 11945a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945a2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945a2e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945a30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11945a33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945a36 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11945a39 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945a3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945a3f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11945a42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945a45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945a48 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11945a4c push eax */
  push32((uint32_t)(EAX));
  /* 11945a4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945a50 push ecx */
  push32((uint32_t)(ECX));
  /* 11945a51 call 0x1193ba90 */
  push32(0x11945a56u); f_1193ba90();
  /* 11945a56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945a59 push eax */
  push32((uint32_t)(EAX));
  /* 11945a5a call 0x1193b910 */
  push32(0x11945a5fu); f_1193b910();
  /* 11945a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945a62 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945a65 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945a67 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11945a6a jmp 0x119459ed */
  goto L_119459ed;
L_11945a6c:;
  /* 11945a6c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945a6f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11945a72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945a75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945a78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11945a7b:;
  /* 11945a7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11945a7e pop esi */
  ESI = (pop32());
  /* 11945a7f mov esp, ebp */
  ESP = (EBP);
  /* 11945a81 pop ebp */
  EBP = (pop32());
  /* 11945a82 ret  */
  ESPCHK(0x11945960u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a90 @ 0x11945a90 (878 bytes, 273 insns) */
void f_11945a90(void) {
  FTRACE(0x11945a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11945a91 mov ebp, esp */
  EBP = (ESP);
  /* 11945a93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945a96 push esi */
  push32((uint32_t)(ESI));
  /* 11945a97 mov eax, dword ptr [0x11964c98] */
  EAX = (r32((uint32_t)(0x11964c98)));
  /* 11945a9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11945a9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11945aa6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11945aad jmp 0x11945ab8 */
  goto L_11945ab8;
L_11945aaf:;
  /* 11945aaf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945ab2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945ab5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11945ab8:;
  /* 11945ab8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945abc jae 0x11945af1 */
  if (!C.cf) goto L_11945af1;
  /* 11945abe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945ac1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945ac4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11945ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 11945ac8 call 0x1193b910 */
  push32(0x11945acdu); f_1193b910();
  /* 11945acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945ad0 mov esi, eax */
  ESI = (EAX);
  /* 11945ad2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945ad5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945ad8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11945adc push ecx */
  push32((uint32_t)(ECX));
  /* 11945add call 0x1193b910 */
  push32(0x11945ae2u); f_1193b910();
  /* 11945ae2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945ae5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945ae8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11945aec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11945aef jmp 0x11945aaf */
  goto L_11945aaf;
L_11945af1:;
  /* 11945af1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11945af8 jmp 0x11945b03 */
  goto L_11945b03;
L_11945afa:;
  /* 11945afa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945afd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945b00 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11945b03:;
  /* 11945b03 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945b07 jae 0x11945b3d */
  if (!C.cf) goto L_11945b3d;
  /* 11945b09 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945b0c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945b0f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11945b13 push eax */
  push32((uint32_t)(EAX));
  /* 11945b14 call 0x1193b910 */
  push32(0x11945b19u); f_1193b910();
  /* 11945b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945b1c mov esi, eax */
  ESI = (EAX);
  /* 11945b1e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945b21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945b24 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11945b28 push eax */
  push32((uint32_t)(EAX));
  /* 11945b29 call 0x1193b910 */
  push32(0x11945b2eu); f_1193b910();
  /* 11945b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945b31 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945b34 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11945b38 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11945b3b jmp 0x11945afa */
  goto L_11945afa;
L_11945b3d:;
  /* 11945b3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945b40 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11945b46 push eax */
  push32((uint32_t)(EAX));
  /* 11945b47 call 0x1193b910 */
  push32(0x11945b4cu); f_1193b910();
  /* 11945b4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945b4f mov esi, eax */
  ESI = (EAX);
  /* 11945b51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945b54 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11945b5a push edx */
  push32((uint32_t)(EDX));
  /* 11945b5b call 0x1193b910 */
  push32(0x11945b60u); f_1193b910();
  /* 11945b60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945b63 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945b66 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11945b6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11945b6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945b70 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11945b76 push edx */
  push32((uint32_t)(EDX));
  /* 11945b77 call 0x1193b910 */
  push32(0x11945b7cu); f_1193b910();
  /* 11945b7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945b7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11945b82 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11945b86 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11945b89 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945b8c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11945b92 push ecx */
  push32((uint32_t)(ECX));
  /* 11945b93 call 0x1193b910 */
  push32(0x11945b98u); f_1193b910();
  /* 11945b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945b9b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11945b9e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11945ba2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11945ba5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945ba8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11945bae push edx */
  push32((uint32_t)(EDX));
  /* 11945baf call 0x1193b910 */
  push32(0x11945bb4u); f_1193b910();
  /* 11945bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945bb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11945bba lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11945bbe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11945bc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11945bc4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945bc9 push eax */
  push32((uint32_t)(EAX));
  /* 11945bca call 0x11938ac0 */
  push32(0x11945bcfu); f_11938ac0();
  /* 11945bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945bd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11945bd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945bd9 je 0x11945df6 */
  if (C.zf) goto L_11945df6;
  /* 11945bdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11945be2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11945be5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11945be8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945bee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11945bf1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11945bf6 mov eax, dword ptr [0x11964c98] */
  EAX = (r32((uint32_t)(0x11964c98)));
  /* 11945bfb push eax */
  push32((uint32_t)(EAX));
  /* 11945bfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11945bff push ecx */
  push32((uint32_t)(ECX));
  /* 11945c00 call 0x1193f3c0 */
  push32(0x11945c05u); f_1193f3c0();
  /* 11945c05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945c08 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11945c0f jmp 0x11945c1a */
  goto L_11945c1a;
L_11945c11:;
  /* 11945c11 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945c14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945c17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11945c1a:;
  /* 11945c1a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945c1e jae 0x11945c8e */
  if (!C.cf) goto L_11945c8e;
  /* 11945c20 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945c23 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11945c26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945c29 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11945c2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945c2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945c32 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11945c35 push edx */
  push32((uint32_t)(EDX));
  /* 11945c36 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945c39 push eax */
  push32((uint32_t)(EAX));
  /* 11945c3a call 0x1193ba90 */
  push32(0x11945c3fu); f_1193ba90();
  /* 11945c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945c42 push eax */
  push32((uint32_t)(EAX));
  /* 11945c43 call 0x1193b910 */
  push32(0x11945c48u); f_1193b910();
  /* 11945c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945c4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945c4e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11945c52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11945c55 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945c58 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11945c5b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945c5e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11945c62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945c65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945c68 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11945c6c push edx */
  push32((uint32_t)(EDX));
  /* 11945c6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945c70 push eax */
  push32((uint32_t)(EAX));
  /* 11945c71 call 0x1193ba90 */
  push32(0x11945c76u); f_1193ba90();
  /* 11945c76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945c79 push eax */
  push32((uint32_t)(EAX));
  /* 11945c7a call 0x1193b910 */
  push32(0x11945c7fu); f_1193b910();
  /* 11945c7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945c82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945c85 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11945c89 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11945c8c jmp 0x11945c11 */
  goto L_11945c11;
L_11945c8e:;
  /* 11945c8e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11945c95 jmp 0x11945ca0 */
  goto L_11945ca0;
L_11945c97:;
  /* 11945c97 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945c9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945c9d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11945ca0:;
  /* 11945ca0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945ca4 jae 0x11945d16 */
  if (!C.cf) goto L_11945d16;
  /* 11945ca6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945ca9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11945cac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945caf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11945cb3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945cb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945cb9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11945cbd push eax */
  push32((uint32_t)(EAX));
  /* 11945cbe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 11945cc2 call 0x1193ba90 */
  push32(0x11945cc7u); f_1193ba90();
  /* 11945cc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945cca push eax */
  push32((uint32_t)(EAX));
  /* 11945ccb call 0x1193b910 */
  push32(0x11945cd0u); f_1193b910();
  /* 11945cd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945cd3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945cd6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11945cda mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11945cdd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945ce0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11945ce3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945ce6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11945cea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945ced mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945cf0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11945cf4 push eax */
  push32((uint32_t)(EAX));
  /* 11945cf5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 11945cf9 call 0x1193ba90 */
  push32(0x11945cfeu); f_1193ba90();
  /* 11945cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945d01 push eax */
  push32((uint32_t)(EAX));
  /* 11945d02 call 0x1193b910 */
  push32(0x11945d07u); f_1193b910();
  /* 11945d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945d0a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945d0d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11945d11 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11945d14 jmp 0x11945c97 */
  goto L_11945c97;
L_11945d16:;
  /* 11945d16 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11945d19 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945d1c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11945d22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945d25 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11945d2b push ecx */
  push32((uint32_t)(ECX));
  /* 11945d2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945d2f push edx */
  push32((uint32_t)(EDX));
  /* 11945d30 call 0x1193ba90 */
  push32(0x11945d35u); f_1193ba90();
  /* 11945d35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945d38 push eax */
  push32((uint32_t)(EAX));
  /* 11945d39 call 0x1193b910 */
  push32(0x11945d3eu); f_1193b910();
  /* 11945d3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945d41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945d44 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11945d48 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11945d4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11945d4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945d51 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11945d57 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945d5a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11945d60 push eax */
  push32((uint32_t)(EAX));
  /* 11945d61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945d64 push ecx */
  push32((uint32_t)(ECX));
  /* 11945d65 call 0x1193ba90 */
  push32(0x11945d6au); f_1193ba90();
  /* 11945d6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945d6d push eax */
  push32((uint32_t)(EAX));
  /* 11945d6e call 0x1193b910 */
  push32(0x11945d73u); f_1193b910();
  /* 11945d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945d76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945d79 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11945d7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11945d80 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11945d83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945d86 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11945d8c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945d8f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11945d95 push ecx */
  push32((uint32_t)(ECX));
  /* 11945d96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945d99 push edx */
  push32((uint32_t)(EDX));
  /* 11945d9a call 0x1193ba90 */
  push32(0x11945d9fu); f_1193ba90();
  /* 11945d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945da2 push eax */
  push32((uint32_t)(EAX));
  /* 11945da3 call 0x1193b910 */
  push32(0x11945da8u); f_1193b910();
  /* 11945da8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945dab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945dae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11945db2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11945db5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11945db8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945dbb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11945dc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945dc4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11945dca push eax */
  push32((uint32_t)(EAX));
  /* 11945dcb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945dce push ecx */
  push32((uint32_t)(ECX));
  /* 11945dcf call 0x1193ba90 */
  push32(0x11945dd4u); f_1193ba90();
  /* 11945dd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945dd7 push eax */
  push32((uint32_t)(EAX));
  /* 11945dd8 call 0x1193b910 */
  push32(0x11945dddu); f_1193b910();
  /* 11945ddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945de0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945de3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11945de7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11945dea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11945ded mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11945df0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11945df6:;
  /* 11945df6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11945df9 pop esi */
  ESI = (pop32());
  /* 11945dfa mov esp, ebp */
  ESP = (EBP);
  /* 11945dfc pop ebp */
  EBP = (pop32());
  /* 11945dfd ret  */
  ESPCHK(0x11945a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e00 @ 0x11945e00 (31 bytes, 15 insns) */
void f_11945e00(void) {
  FTRACE(0x11945e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11945e01 mov ebp, esp */
  EBP = (ESP);
  /* 11945e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11945e05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11945e08 push eax */
  push32((uint32_t)(EAX));
  /* 11945e09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945e0c push ecx */
  push32((uint32_t)(ECX));
  /* 11945e0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11945e10 push edx */
  push32((uint32_t)(EDX));
  /* 11945e11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945e14 push eax */
  push32((uint32_t)(EAX));
  /* 11945e15 call 0x11945e20 */
  push32(0x11945e1au); f_11945e20();
  /* 11945e1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945e1d pop ebp */
  EBP = (pop32());
  /* 11945e1e ret  */
  ESPCHK(0x11945e00u, _esp0);
  ESP += 4; return;
}

