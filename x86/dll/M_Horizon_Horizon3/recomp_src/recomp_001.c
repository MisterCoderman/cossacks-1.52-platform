#include "recomp.h"

/* FUN_10008f70 @ 0x12768f70 (10 bytes, 5 insns) */
void f_12768f70(void) {
  FTRACE(0x12768f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12768f71 mov ebp, esp */
  EBP = (ESP);
  /* 12768f73 mov eax, dword ptr [0x1278ec94] */
  EAX = (r32((uint32_t)(0x1278ec94)));
  /* 12768f78 pop ebp */
  EBP = (pop32());
  /* 12768f79 ret  */
  ESPCHK(0x12768f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f80 @ 0x12768f80 (31 bytes, 11 insns) */
void f_12768f80(void) {
  FTRACE(0x12768f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12768f81 mov ebp, esp */
  EBP = (ESP);
  /* 12768f83 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768f8a jbe 0x12768f90 */
  if ((C.cf||C.zf)) goto L_12768f90;
  /* 12768f8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768f8e jmp 0x12768f9d */
  goto L_12768f9d;
L_12768f90:;
  /* 12768f90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768f93 mov dword ptr [0x1278ec94], eax */
  w32((uint32_t)(0x1278ec94), (EAX));
  /* 12768f98 mov eax, 1 */
  EAX = (0x1u);
L_12768f9d:;
  /* 12768f9d pop ebp */
  EBP = (pop32());
  /* 12768f9e ret  */
  ESPCHK(0x12768f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fa0 @ 0x12768fa0 (89 bytes, 20 insns) */
void f_12768fa0(void) {
  FTRACE(0x12768fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12768fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12768fa3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12768fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12768faa mov eax, dword ptr [0x1279200c] */
  EAX = (r32((uint32_t)(0x1279200c)));
  /* 12768faf push eax */
  push32((uint32_t)(EAX));
  /* 12768fb0 call dword ptr [0x12793310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793310))), 0x12768fb6u);
  /* 12768fb6 mov dword ptr [0x12792008], eax */
  w32((uint32_t)(0x12792008), (EAX));
  /* 12768fbb cmp dword ptr [0x12792008], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12792008))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768fc2 jne 0x12768fc8 */
  if (!C.zf) goto L_12768fc8;
  /* 12768fc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768fc6 jmp 0x12768ff7 */
  goto L_12768ff7;
L_12768fc8:;
  /* 12768fc8 mov ecx, dword ptr [0x12792008] */
  ECX = (r32((uint32_t)(0x12792008)));
  /* 12768fce mov dword ptr [0x12791ffc], ecx */
  w32((uint32_t)(0x12791ffc), (ECX));
  /* 12768fd4 mov dword ptr [0x12792000], 0 */
  w32((uint32_t)(0x12792000), (0x0u));
  /* 12768fde mov dword ptr [0x12792004], 0 */
  w32((uint32_t)(0x12792004), (0x0u));
  /* 12768fe8 mov dword ptr [0x12791fe8], 0x10 */
  w32((uint32_t)(0x12791fe8), (0x10u));
  /* 12768ff2 mov eax, 1 */
  EAX = (0x1u);
L_12768ff7:;
  /* 12768ff7 pop ebp */
  EBP = (pop32());
  /* 12768ff8 ret  */
  ESPCHK(0x12768fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009000 @ 0x12769000 (85 bytes, 29 insns) */
void f_12769000(void) {
  FTRACE(0x12769000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12769000 push ebp */
  push32((uint32_t)(EBP));
  /* 12769001 mov ebp, esp */
  EBP = (ESP);
  /* 12769003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769006 mov eax, dword ptr [0x12792004] */
  EAX = (r32((uint32_t)(0x12792004)));
  /* 1276900b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276900e mov ecx, dword ptr [0x12792008] */
  ECX = (r32((uint32_t)(0x12792008)));
  /* 12769014 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769016 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12769019 mov edx, dword ptr [0x12792008] */
  EDX = (r32((uint32_t)(0x12792008)));
  /* 1276901f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12769022:;
  /* 12769022 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12769025 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769028 jae 0x1276904f */
  if (!C.cf) goto L_1276904f;
  /* 1276902a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276902d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769030 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769033 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12769036 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276903d jae 0x12769044 */
  if (!C.cf) goto L_12769044;
  /* 1276903f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12769042 jmp 0x12769051 */
  goto L_12769051;
L_12769044:;
  /* 12769044 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12769047 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276904a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276904d jmp 0x12769022 */
  goto L_12769022;
L_1276904f:;
  /* 1276904f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12769051:;
  /* 12769051 mov esp, ebp */
  ESP = (EBP);
  /* 12769053 pop ebp */
  EBP = (pop32());
  /* 12769054 ret  */
  ESPCHK(0x12769000u, _esp0);
  ESP += 4; return;
}

/* FUN_10009060 @ 0x12769060 (95 bytes, 33 insns) */
void f_12769060(void) {
  FTRACE(0x12769060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12769060 push ebp */
  push32((uint32_t)(EBP));
  /* 12769061 mov ebp, esp */
  EBP = (ESP);
  /* 12769063 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769069 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276906c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276906f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12769072 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12769075 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12769078 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276907b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12769080 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769083 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12769085 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769088 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1276908b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1276908d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276908f jne 0x127690b1 */
  if (!C.zf) goto L_127690b1;
  /* 12769091 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12769094 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12769097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12769099 jne 0x127690b1 */
  if (!C.zf) goto L_127690b1;
  /* 1276909b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276909e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 127690a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127690a6 je 0x127690b1 */
  if (C.zf) goto L_127690b1;
  /* 127690a8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 127690af jmp 0x127690b8 */
  goto L_127690b8;
L_127690b1:;
  /* 127690b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_127690b8:;
  /* 127690b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127690bb mov esp, ebp */
  ESP = (EBP);
  /* 127690bd pop ebp */
  EBP = (pop32());
  /* 127690be ret  */
  ESPCHK(0x12769060u, _esp0);
  ESP += 4; return;
}

/* FUN_100090c0 @ 0x127690c0 (1485 bytes, 453 insns) */
void f_127690c0(void) {
  FTRACE(0x127690c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127690c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127690c1 mov ebp, esp */
  EBP = (ESP);
  /* 127690c3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127690c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127690c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127690cc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 127690cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127690d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127690d5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127690d8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127690db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127690de shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 127690e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127690e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127690e7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127690ed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127690f0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 127690f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127690fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127690fd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769100 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12769103 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769106 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12769108 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276910b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1276910e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769111 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769114 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12769117 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1276911a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276911c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1276911f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769122 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12769125 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12769128 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276912b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1276912e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12769130 jne 0x12769258 */
  if (!C.zf) goto L_12769258;
  /* 12769136 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769139 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1276913c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276913f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12769142 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769146 jbe 0x1276914f */
  if ((C.cf||C.zf)) goto L_1276914f;
  /* 12769148 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1276914f:;
  /* 1276914f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769152 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769155 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12769158 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276915b jne 0x12769231 */
  if (!C.zf) goto L_12769231;
  /* 12769161 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769165 jae 0x127691c6 */
  if (!C.cf) goto L_127691c6;
  /* 12769167 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1276916c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276916f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12769171 not eax */
  EAX = (~(EAX));
  /* 12769173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769176 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769179 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1276917d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276917f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769182 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769185 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12769189 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1276918c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276918f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12769192 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12769195 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769198 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276919b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1276919e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127691a1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127691a4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127691a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127691aa jne 0x127691c4 */
  if (!C.zf) goto L_127691c4;
  /* 127691ac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127691b1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127691b4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127691b6 not eax */
  EAX = (~(EAX));
  /* 127691b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127691bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127691bd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127691bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127691c2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127691c4:;
  /* 127691c4 jmp 0x12769231 */
  goto L_12769231;
L_127691c6:;
  /* 127691c6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127691c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127691cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127691d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127691d3 not edx */
  EDX = (~(EDX));
  /* 127691d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127691d8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127691db mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 127691e2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127691e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127691e7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127691ea mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 127691f1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127691f4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127691f7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127691fa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127691fd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769200 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769203 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12769206 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769209 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276920c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12769210 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12769212 jne 0x12769231 */
  if (!C.zf) goto L_12769231;
  /* 12769214 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12769217 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276921a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276921f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12769221 not edx */
  EDX = (~(EDX));
  /* 12769223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769226 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12769229 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1276922b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276922e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12769231:;
  /* 12769231 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769234 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12769237 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1276923a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1276923d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12769240 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769243 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12769246 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769249 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1276924c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1276924f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769252 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769255 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12769258:;
  /* 12769258 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276925b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1276925e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769261 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12769264 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769268 jbe 0x12769271 */
  if ((C.cf||C.zf)) goto L_12769271;
  /* 1276926a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12769271:;
  /* 12769271 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12769274 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12769277 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12769279 jne 0x127693d5 */
  if (!C.zf) goto L_127693d5;
  /* 1276927f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769282 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769285 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12769288 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276928b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1276928e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769291 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12769294 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769298 jbe 0x127692a1 */
  if ((C.cf||C.zf)) goto L_127692a1;
  /* 1276929a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_127692a1:;
  /* 127692a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127692a4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127692a7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 127692aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127692ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127692b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127692b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 127692b6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127692ba jbe 0x127692c3 */
  if ((C.cf||C.zf)) goto L_127692c3;
  /* 127692bc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_127692c3:;
  /* 127692c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127692c6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127692c9 je 0x127693cf */
  if (C.zf) goto L_127693cf;
  /* 127692cf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127692d2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127692d5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127692d8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127692db jne 0x127693b1 */
  if (!C.zf) goto L_127693b1;
  /* 127692e1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127692e5 jae 0x12769346 */
  if (!C.cf) goto L_12769346;
  /* 127692e7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127692ec mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127692ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127692f1 not edx */
  EDX = (~(EDX));
  /* 127692f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127692f6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127692f9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127692fd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127692ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769302 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769305 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12769309 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1276930c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276930f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12769312 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12769315 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769318 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276931b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1276931e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769321 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769324 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12769328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276932a jne 0x12769344 */
  if (!C.zf) goto L_12769344;
  /* 1276932c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12769331 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769334 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12769336 not edx */
  EDX = (~(EDX));
  /* 12769338 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276933b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276933d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1276933f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769342 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12769344:;
  /* 12769344 jmp 0x127693b1 */
  goto L_127693b1;
L_12769346:;
  /* 12769346 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769349 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276934c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12769351 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12769353 not eax */
  EAX = (~(EAX));
  /* 12769355 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769358 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1276935b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12769362 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12769364 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769367 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1276936a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12769371 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769374 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769377 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1276937a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1276937d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769380 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769383 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12769386 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769389 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276938c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12769390 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12769392 jne 0x127693b1 */
  if (!C.zf) goto L_127693b1;
  /* 12769394 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769397 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276939a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1276939f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127693a1 not eax */
  EAX = (~(EAX));
  /* 127693a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127693a6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127693a9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127693ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127693ae mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127693b1:;
  /* 127693b1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127693b4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127693b7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 127693ba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127693bd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127693c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127693c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127693c6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127693c9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127693cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_127693cf:;
  /* 127693cf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 127693d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_127693d5:;
  /* 127693d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127693d8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127693db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127693dd jne 0x127693eb */
  if (!C.zf) goto L_127693eb;
  /* 127693df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127693e2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127693e5 je 0x127694fb */
  if (C.zf) goto L_127694fb;
L_127693eb:;
  /* 127693eb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127693ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127693f1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 127693f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127693f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127693fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127693fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12769400 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12769403 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769406 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12769409 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1276940c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276940f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769412 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12769415 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769418 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276941b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276941e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12769421 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769424 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769427 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276942a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276942d jne 0x127694fb */
  if (!C.zf) goto L_127694fb;
  /* 12769433 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769437 jae 0x12769494 */
  if (!C.cf) goto L_12769494;
  /* 12769439 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1276943c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276943f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12769443 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769446 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769449 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1276944c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1276944f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769452 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769455 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12769458 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276945a jne 0x12769472 */
  if (!C.zf) goto L_12769472;
  /* 1276945c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12769461 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12769464 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12769466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769469 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276946b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1276946d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769470 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12769472:;
  /* 12769472 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12769477 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276947a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1276947c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276947f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769482 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12769486 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12769488 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276948b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1276948e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12769492 jmp 0x127694fb */
  goto L_127694fb;
L_12769494:;
  /* 12769494 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12769497 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276949a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1276949e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127694a1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127694a4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127694a7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127694aa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127694ad add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127694b0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 127694b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127694b5 jne 0x127694d2 */
  if (!C.zf) goto L_127694d2;
  /* 127694b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127694ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127694bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127694c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127694c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127694c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127694ca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127694cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127694cf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_127694d2:;
  /* 127694d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127694d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127694d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127694dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127694df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127694e2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127694e5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127694ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127694ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127694f1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127694f4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_127694fb:;
  /* 127694fb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127694fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769501 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12769503 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769506 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769509 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276950c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1276950f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12769512 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12769514 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769517 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276951a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1276951c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276951f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769522 jne 0x12769689 */
  if (!C.zf) goto L_12769689;
  /* 12769528 cmp dword ptr [0x12792000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12792000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276952f je 0x12769678 */
  if (C.zf) goto L_12769678;
  /* 12769535 mov eax, dword ptr [0x12791ff8] */
  EAX = (r32((uint32_t)(0x12791ff8)));
  /* 1276953a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1276953d mov ecx, dword ptr [0x12792000] */
  ECX = (r32((uint32_t)(0x12792000)));
  /* 12769543 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12769546 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769548 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1276954b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12769550 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12769555 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769558 push eax */
  push32((uint32_t)(EAX));
  /* 12769559 call dword ptr [0x1279332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279332c))), 0x1276955fu);
  /* 1276955f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12769564 mov ecx, dword ptr [0x12791ff8] */
  ECX = (r32((uint32_t)(0x12791ff8)));
  /* 1276956a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276956c mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 12769571 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12769574 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12769576 mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 1276957c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1276957f mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 12769584 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12769587 mov edx, dword ptr [0x12791ff8] */
  EDX = (r32((uint32_t)(0x12791ff8)));
  /* 1276958d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12769598 mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 1276959d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127695a0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 127695a3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127695a6 mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 127695ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127695ae mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 127695b1 mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 127695b7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127695ba movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 127695be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127695c0 jne 0x127695d6 */
  if (!C.zf) goto L_127695d6;
  /* 127695c2 mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 127695c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127695cb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 127695cd mov ecx, dword ptr [0x12792000] */
  ECX = (r32((uint32_t)(0x12792000)));
  /* 127695d3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_127695d6:;
  /* 127695d6 mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 127695dc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127695e0 jne 0x12769678 */
  if (!C.zf) goto L_12769678;
  /* 127695e6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127695eb push 0 */
  push32((uint32_t)(0x0u));
  /* 127695ed mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 127695f2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127695f5 push ecx */
  push32((uint32_t)(ECX));
  /* 127695f6 call dword ptr [0x1279332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279332c))), 0x127695fcu);
  /* 127695fc mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 12769602 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12769605 push eax */
  push32((uint32_t)(EAX));
  /* 12769606 push 0 */
  push32((uint32_t)(0x0u));
  /* 12769608 mov ecx, dword ptr [0x1279200c] */
  ECX = (r32((uint32_t)(0x1279200c)));
  /* 1276960e push ecx */
  push32((uint32_t)(ECX));
  /* 1276960f call dword ptr [0x12793330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793330))), 0x12769615u);
  /* 12769615 mov edx, dword ptr [0x12792004] */
  EDX = (r32((uint32_t)(0x12792004)));
  /* 1276961b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276961e mov eax, dword ptr [0x12792008] */
  EAX = (r32((uint32_t)(0x12792008)));
  /* 12769623 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769625 mov ecx, dword ptr [0x12792000] */
  ECX = (r32((uint32_t)(0x12792000)));
  /* 1276962b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276962e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769630 push eax */
  push32((uint32_t)(EAX));
  /* 12769631 mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 12769637 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276963a push edx */
  push32((uint32_t)(EDX));
  /* 1276963b mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 12769640 push eax */
  push32((uint32_t)(EAX));
  /* 12769641 call 0x1276cbf0 */
  push32(0x12769646u); f_1276cbf0();
  /* 12769646 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12769649 mov ecx, dword ptr [0x12792004] */
  ECX = (r32((uint32_t)(0x12792004)));
  /* 1276964f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769652 mov dword ptr [0x12792004], ecx */
  w32((uint32_t)(0x12792004), (ECX));
  /* 12769658 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276965b cmp edx, dword ptr [0x12792000] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12792000))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769661 jbe 0x1276966c */
  if ((C.cf||C.zf)) goto L_1276966c;
  /* 12769663 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769666 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769669 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1276966c:;
  /* 1276966c mov ecx, dword ptr [0x12792008] */
  ECX = (r32((uint32_t)(0x12792008)));
  /* 12769672 mov dword ptr [0x12791ffc], ecx */
  w32((uint32_t)(0x12791ffc), (ECX));
L_12769678:;
  /* 12769678 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276967b mov dword ptr [0x12792000], edx */
  w32((uint32_t)(0x12792000), (EDX));
  /* 12769681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769684 mov dword ptr [0x12791ff8], eax */
  w32((uint32_t)(0x12791ff8), (EAX));
L_12769689:;
  /* 12769689 mov esp, ebp */
  ESP = (EBP);
  /* 1276968b pop ebp */
  EBP = (pop32());
  /* 1276968c ret  */
  ESPCHK(0x127690c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009690 @ 0x12769690 (1334 bytes, 427 insns) */
void f_12769690(void) {
  FTRACE(0x12769690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12769690 push ebp */
  push32((uint32_t)(EBP));
  /* 12769691 mov ebp, esp */
  EBP = (ESP);
  /* 12769693 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769696 push esi */
  push32((uint32_t)(ESI));
  /* 12769697 mov eax, dword ptr [0x12792004] */
  EAX = (r32((uint32_t)(0x12792004)));
  /* 1276969c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276969f mov ecx, dword ptr [0x12792008] */
  ECX = (r32((uint32_t)(0x12792008)));
  /* 127696a5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127696a7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127696aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127696ad add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127696b0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 127696b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 127696b6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127696b9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127696bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127696bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127696c2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127696c6 jge 0x127696dc */
  if ((C.sf==C.of)) goto L_127696dc;
  /* 127696c8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127696cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127696ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127696d0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127696d3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 127696da jmp 0x127696f1 */
  goto L_127696f1;
L_127696dc:;
  /* 127696dc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127696e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127696e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127696e9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127696ec shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127696ee mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_127696f1:;
  /* 127696f1 mov ecx, dword ptr [0x12791ffc] */
  ECX = (r32((uint32_t)(0x12791ffc)));
  /* 127696f7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_127696fa:;
  /* 127696fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127696fd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769700 jae 0x12769726 */
  if (!C.cf) goto L_12769726;
  /* 12769702 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769705 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12769708 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1276970a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276970d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12769710 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12769713 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12769715 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12769717 je 0x1276971b */
  if (C.zf) goto L_1276971b;
  /* 12769719 jmp 0x12769726 */
  goto L_12769726;
L_1276971b:;
  /* 1276971b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276971e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769721 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12769724 jmp 0x127696fa */
  goto L_127696fa;
L_12769726:;
  /* 12769726 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769729 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276972c jne 0x1276980d */
  if (!C.zf) goto L_1276980d;
  /* 12769732 mov eax, dword ptr [0x12792008] */
  EAX = (r32((uint32_t)(0x12792008)));
  /* 12769737 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1276973a:;
  /* 1276973a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276973d cmp ecx, dword ptr [0x12791ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12791ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769743 jae 0x12769769 */
  if (!C.cf) goto L_12769769;
  /* 12769745 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769748 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276974b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1276974d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769750 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12769753 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12769756 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12769758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276975a je 0x1276975e */
  if (C.zf) goto L_1276975e;
  /* 1276975c jmp 0x12769769 */
  goto L_12769769;
L_1276975e:;
  /* 1276975e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769761 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769764 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12769767 jmp 0x1276973a */
  goto L_1276973a;
L_12769769:;
  /* 12769769 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276976c cmp ecx, dword ptr [0x12791ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12791ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769772 jne 0x1276980d */
  if (!C.zf) goto L_1276980d;
L_12769778:;
  /* 12769778 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276977b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276977e jae 0x12769796 */
  if (!C.cf) goto L_12769796;
  /* 12769780 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769783 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769787 je 0x1276978b */
  if (C.zf) goto L_1276978b;
  /* 12769789 jmp 0x12769796 */
  goto L_12769796;
L_1276978b:;
  /* 1276978b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276978e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769791 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12769794 jmp 0x12769778 */
  goto L_12769778;
L_12769796:;
  /* 12769796 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769799 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276979c jne 0x127697e7 */
  if (!C.zf) goto L_127697e7;
  /* 1276979e mov eax, dword ptr [0x12792008] */
  EAX = (r32((uint32_t)(0x12792008)));
  /* 127697a3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_127697a6:;
  /* 127697a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127697a9 cmp ecx, dword ptr [0x12791ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12791ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127697af jae 0x127697c7 */
  if (!C.cf) goto L_127697c7;
  /* 127697b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127697b4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127697b8 je 0x127697bc */
  if (C.zf) goto L_127697bc;
  /* 127697ba jmp 0x127697c7 */
  goto L_127697c7;
L_127697bc:;
  /* 127697bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127697bf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127697c2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127697c5 jmp 0x127697a6 */
  goto L_127697a6;
L_127697c7:;
  /* 127697c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127697ca cmp ecx, dword ptr [0x12791ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12791ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127697d0 jne 0x127697e7 */
  if (!C.zf) goto L_127697e7;
  /* 127697d2 call 0x12769bd0 */
  push32(0x127697d7u); f_12769bd0();
  /* 127697d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127697da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127697de jne 0x127697e7 */
  if (!C.zf) goto L_127697e7;
  /* 127697e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127697e2 jmp 0x12769bc1 */
  goto L_12769bc1;
L_127697e7:;
  /* 127697e7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127697ea push edx */
  push32((uint32_t)(EDX));
  /* 127697eb call 0x12769ce0 */
  push32(0x127697f0u); f_12769ce0();
  /* 127697f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127697f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127697f6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127697f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127697fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127697fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12769801 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769804 jne 0x1276980d */
  if (!C.zf) goto L_1276980d;
  /* 12769806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12769808 jmp 0x12769bc1 */
  goto L_12769bc1;
L_1276980d:;
  /* 1276980d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769810 mov dword ptr [0x12791ffc], edx */
  w32((uint32_t)(0x12791ffc), (EDX));
  /* 12769816 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769819 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1276981c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1276981f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769822 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12769824 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12769827 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276982b je 0x12769850 */
  if (C.zf) goto L_12769850;
  /* 1276982d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769830 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769833 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12769836 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1276983a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276983d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769840 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12769843 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1276984a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1276984c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276984e jne 0x12769885 */
  if (!C.zf) goto L_12769885;
L_12769850:;
  /* 12769850 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12769857:;
  /* 12769857 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276985a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1276985d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12769860 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12769864 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769867 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1276986a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1276986d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12769874 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12769876 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12769878 jne 0x12769885 */
  if (!C.zf) goto L_12769885;
  /* 1276987a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276987d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769880 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12769883 jmp 0x12769857 */
  goto L_12769857;
L_12769885:;
  /* 12769885 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769888 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276988e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769891 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12769898 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276989b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127698a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127698a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127698a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127698ab and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 127698af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127698b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127698b6 jne 0x127698d2 */
  if (!C.zf) goto L_127698d2;
  /* 127698b8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 127698bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127698c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127698c5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127698c8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 127698cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_127698d2:;
  /* 127698d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127698d6 jl 0x127698eb */
  if ((C.sf!=C.of)) goto L_127698eb;
  /* 127698d8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127698db shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127698dd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127698e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127698e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127698e6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127698e9 jmp 0x127698d2 */
  goto L_127698d2;
L_127698eb:;
  /* 127698eb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127698ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127698f1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 127698f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127698f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127698fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127698fd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769900 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12769903 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12769906 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12769909 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276990c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1276990f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769913 jle 0x1276991c */
  if ((C.zf||C.sf!=C.of)) goto L_1276991c;
  /* 12769915 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1276991c:;
  /* 1276991c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276991f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769922 je 0x12769b40 */
  if (C.zf) goto L_12769b40;
  /* 12769928 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276992b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276992e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12769931 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769934 jne 0x12769a0a */
  if (!C.zf) goto L_12769a0a;
  /* 1276993a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276993e jge 0x1276999f */
  if ((C.sf==C.of)) goto L_1276999f;
  /* 12769940 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12769945 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12769948 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1276994a not eax */
  EAX = (~(EAX));
  /* 1276994c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276994f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769952 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12769956 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12769958 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276995b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1276995e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12769962 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769965 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769968 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1276996b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1276996e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769971 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769974 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12769977 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1276997a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276997d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12769981 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12769983 jne 0x1276999d */
  if (!C.zf) goto L_1276999d;
  /* 12769985 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1276998a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276998d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1276998f not eax */
  EAX = (~(EAX));
  /* 12769991 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769994 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12769996 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12769998 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276999b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1276999d:;
  /* 1276999d jmp 0x12769a0a */
  goto L_12769a0a;
L_1276999f:;
  /* 1276999f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127699a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127699a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127699aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127699ac not edx */
  EDX = (~(EDX));
  /* 127699ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127699b1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127699b4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 127699bb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127699bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127699c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127699c3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 127699ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127699cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127699d0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127699d3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127699d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127699d9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127699dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127699df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127699e2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127699e5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127699e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127699eb jne 0x12769a0a */
  if (!C.zf) goto L_12769a0a;
  /* 127699ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127699f0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127699f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127699f8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127699fa not edx */
  EDX = (~(EDX));
  /* 127699fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127699ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12769a02 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12769a04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769a07 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12769a0a:;
  /* 12769a0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a0d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12769a10 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a13 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12769a16 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12769a19 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a1c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12769a1f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a22 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12769a25 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12769a28 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769a2c je 0x12769b40 */
  if (C.zf) goto L_12769b40;
  /* 12769a32 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769a35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769a38 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12769a3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12769a3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12769a44 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12769a47 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12769a4a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12769a50 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12769a53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12769a56 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a59 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12769a5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12769a62 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a65 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12769a68 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769a6e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12769a71 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769a74 jne 0x12769b40 */
  if (!C.zf) goto L_12769b40;
  /* 12769a7a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769a7e jge 0x12769ada */
  if ((C.sf==C.of)) goto L_12769ada;
  /* 12769a80 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769a83 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769a86 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12769a8a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769a8d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769a90 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12769a93 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12769a95 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769a98 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769a9b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12769a9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12769aa0 jne 0x12769ab8 */
  if (!C.zf) goto L_12769ab8;
  /* 12769aa2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12769aa7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769aaa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12769aac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769aaf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12769ab1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12769ab3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769ab6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12769ab8:;
  /* 12769ab8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12769abd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769ac0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12769ac2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769ac5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769ac8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12769acc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12769ace mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769ad1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769ad4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12769ad8 jmp 0x12769b40 */
  goto L_12769b40;
L_12769ada:;
  /* 12769ada mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769add add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769ae0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12769ae4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769ae7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769aea mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12769aed add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12769aef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769af2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769af5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12769af8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12769afa jne 0x12769b17 */
  if (!C.zf) goto L_12769b17;
  /* 12769afc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769aff sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769b02 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12769b07 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12769b09 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769b0c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12769b0f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12769b11 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769b14 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12769b17:;
  /* 12769b17 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769b1a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769b1d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12769b22 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12769b24 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769b27 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769b2a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12769b31 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12769b33 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769b36 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769b39 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12769b40:;
  /* 12769b40 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769b44 je 0x12769b5a */
  if (C.zf) goto L_12769b5a;
  /* 12769b46 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769b49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12769b4c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12769b4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769b51 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769b54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12769b57 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12769b5a:;
  /* 12769b5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769b5d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769b60 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12769b63 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12769b66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769b69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769b6c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12769b6e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12769b71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769b74 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769b77 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769b7a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12769b7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769b80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12769b82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769b85 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12769b87 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769b8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769b8d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12769b8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12769b91 jne 0x12769bb3 */
  if (!C.zf) goto L_12769bb3;
  /* 12769b93 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769b96 cmp eax, dword ptr [0x12792000] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12792000))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769b9c jne 0x12769bb3 */
  if (!C.zf) goto L_12769bb3;
  /* 12769b9e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769ba1 cmp ecx, dword ptr [0x12791ff8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12791ff8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769ba7 jne 0x12769bb3 */
  if (!C.zf) goto L_12769bb3;
  /* 12769ba9 mov dword ptr [0x12792000], 0 */
  w32((uint32_t)(0x12792000), (0x0u));
L_12769bb3:;
  /* 12769bb3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12769bb6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769bb9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12769bbb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769bbe add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12769bc1:;
  /* 12769bc1 pop esi */
  ESI = (pop32());
  /* 12769bc2 mov esp, ebp */
  ESP = (EBP);
  /* 12769bc4 pop ebp */
  EBP = (pop32());
  /* 12769bc5 ret  */
  ESPCHK(0x12769690u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x12769bd0 (271 bytes, 78 insns) */
void f_12769bd0(void) {
  FTRACE(0x12769bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12769bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12769bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12769bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12769bd4 mov eax, dword ptr [0x12792004] */
  EAX = (r32((uint32_t)(0x12792004)));
  /* 12769bd9 cmp eax, dword ptr [0x12791fe8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12791fe8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769bdf jne 0x12769c2b */
  if (!C.zf) goto L_12769c2b;
  /* 12769be1 mov ecx, dword ptr [0x12791fe8] */
  ECX = (r32((uint32_t)(0x12791fe8)));
  /* 12769be7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769bea imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12769bed push ecx */
  push32((uint32_t)(ECX));
  /* 12769bee mov edx, dword ptr [0x12792008] */
  EDX = (r32((uint32_t)(0x12792008)));
  /* 12769bf4 push edx */
  push32((uint32_t)(EDX));
  /* 12769bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12769bf7 mov eax, dword ptr [0x1279200c] */
  EAX = (r32((uint32_t)(0x1279200c)));
  /* 12769bfc push eax */
  push32((uint32_t)(EAX));
  /* 12769bfd call dword ptr [0x1279330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279330c))), 0x12769c03u);
  /* 12769c03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12769c06 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769c0a jne 0x12769c13 */
  if (!C.zf) goto L_12769c13;
  /* 12769c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12769c0e jmp 0x12769cdb */
  goto L_12769cdb;
L_12769c13:;
  /* 12769c13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769c16 mov dword ptr [0x12792008], ecx */
  w32((uint32_t)(0x12792008), (ECX));
  /* 12769c1c mov edx, dword ptr [0x12791fe8] */
  EDX = (r32((uint32_t)(0x12791fe8)));
  /* 12769c22 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769c25 mov dword ptr [0x12791fe8], edx */
  w32((uint32_t)(0x12791fe8), (EDX));
L_12769c2b:;
  /* 12769c2b mov eax, dword ptr [0x12792004] */
  EAX = (r32((uint32_t)(0x12792004)));
  /* 12769c30 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12769c33 mov ecx, dword ptr [0x12792008] */
  ECX = (r32((uint32_t)(0x12792008)));
  /* 12769c39 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769c3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12769c3e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12769c43 push 8 */
  push32((uint32_t)(0x8u));
  /* 12769c45 mov edx, dword ptr [0x1279200c] */
  EDX = (r32((uint32_t)(0x1279200c)));
  /* 12769c4b push edx */
  push32((uint32_t)(EDX));
  /* 12769c4c call dword ptr [0x12793310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793310))), 0x12769c52u);
  /* 12769c52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769c55 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12769c58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769c5b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769c5f jne 0x12769c65 */
  if (!C.zf) goto L_12769c65;
  /* 12769c61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12769c63 jmp 0x12769cdb */
  goto L_12769cdb;
L_12769c65:;
  /* 12769c65 push 4 */
  push32((uint32_t)(0x4u));
  /* 12769c67 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12769c6c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12769c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12769c73 call dword ptr [0x12793308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793308))), 0x12769c79u);
  /* 12769c79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769c7c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12769c7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769c82 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769c86 jne 0x12769ca2 */
  if (!C.zf) goto L_12769ca2;
  /* 12769c88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769c8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12769c8e push ecx */
  push32((uint32_t)(ECX));
  /* 12769c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12769c91 mov edx, dword ptr [0x1279200c] */
  EDX = (r32((uint32_t)(0x1279200c)));
  /* 12769c97 push edx */
  push32((uint32_t)(EDX));
  /* 12769c98 call dword ptr [0x12793330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793330))), 0x12769c9eu);
  /* 12769c9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12769ca0 jmp 0x12769cdb */
  goto L_12769cdb;
L_12769ca2:;
  /* 12769ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769ca5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12769cab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769cae mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12769cb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769cb8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12769cbf mov eax, dword ptr [0x12792004] */
  EAX = (r32((uint32_t)(0x12792004)));
  /* 12769cc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769cc7 mov dword ptr [0x12792004], eax */
  w32((uint32_t)(0x12792004), (EAX));
  /* 12769ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769ccf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12769cd2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12769cd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12769cdb:;
  /* 12769cdb mov esp, ebp */
  ESP = (EBP);
  /* 12769cdd pop ebp */
  EBP = (pop32());
  /* 12769cde ret  */
  ESPCHK(0x12769bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ce0 @ 0x12769ce0 (494 bytes, 149 insns) */
void f_12769ce0(void) {
  FTRACE(0x12769ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12769ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12769ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12769ce3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769ce6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769ce9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12769cec mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12769cef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769cf2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12769cf5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12769cf8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12769cff:;
  /* 12769cff cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769d03 jl 0x12769d18 */
  if ((C.sf!=C.of)) goto L_12769d18;
  /* 12769d05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12769d08 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12769d0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12769d0d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12769d10 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769d13 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12769d16 jmp 0x12769cff */
  goto L_12769cff;
L_12769d18:;
  /* 12769d18 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12769d1b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12769d21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769d24 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12769d2b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12769d2e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12769d35 jmp 0x12769d40 */
  goto L_12769d40;
L_12769d37:;
  /* 12769d37 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12769d3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769d3d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12769d40:;
  /* 12769d40 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769d44 jge 0x12769d66 */
  if ((C.sf==C.of)) goto L_12769d66;
  /* 12769d46 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12769d49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12769d4c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12769d4f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12769d52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769d55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769d58 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12769d5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769d5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769d61 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12769d64 jmp 0x12769d37 */
  goto L_12769d37;
L_12769d66:;
  /* 12769d66 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12769d69 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12769d6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769d6f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12769d72 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769d74 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12769d77 push 4 */
  push32((uint32_t)(0x4u));
  /* 12769d79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12769d7e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12769d83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769d86 push edx */
  push32((uint32_t)(EDX));
  /* 12769d87 call dword ptr [0x12793308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793308))), 0x12769d8du);
  /* 12769d8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12769d8f jne 0x12769d99 */
  if (!C.zf) goto L_12769d99;
  /* 12769d91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12769d94 jmp 0x12769eca */
  goto L_12769eca;
L_12769d99:;
  /* 12769d99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769d9c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769da1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12769da4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769da7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12769daa jmp 0x12769db8 */
  goto L_12769db8;
L_12769dac:;
  /* 12769dac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769daf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769db5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12769db8:;
  /* 12769db8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769dbb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769dbe ja 0x12769e1d */
  if ((!C.cf&&!C.zf)) goto L_12769e1d;
  /* 12769dc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769dc3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12769dca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769dcd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12769dd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769dda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769ddd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12769de0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769de3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12769de9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769dec add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769df2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769df5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12769df8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769dfb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769e01 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769e04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12769e07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769e0a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769e0f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12769e12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12769e15 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12769e1b jmp 0x12769dac */
  goto L_12769dac;
L_12769e1d:;
  /* 12769e1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12769e20 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769e26 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12769e29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769e2c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769e2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769e32 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12769e35 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769e38 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12769e3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12769e3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769e41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769e44 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12769e47 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769e4a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769e4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769e50 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12769e53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769e56 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12769e59 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12769e5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12769e5f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769e62 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12769e65 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12769e68 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769e6b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12769e73 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12769e76 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769e79 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12769e84 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769e87 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12769e8b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769e8e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12769e91 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12769e94 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769e97 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12769e9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12769e9c jne 0x12769ead */
  if (!C.zf) goto L_12769ead;
  /* 12769e9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769ea1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12769ea4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12769ea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769eaa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12769ead:;
  /* 12769ead mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12769eb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12769eb5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12769eb7 not edx */
  EDX = (~(EDX));
  /* 12769eb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769ebc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12769ebf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12769ec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769ec4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12769ec7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12769eca:;
  /* 12769eca mov esp, ebp */
  ESP = (EBP);
  /* 12769ecc pop ebp */
  EBP = (pop32());
  /* 12769ecd ret  */
  ESPCHK(0x12769ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ed0 @ 0x12769ed0 (1515 bytes, 489 insns) */
void f_12769ed0(void) {
  FTRACE(0x12769ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12769ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12769ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12769ed3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769ed6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12769ed9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769edc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12769ede mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12769ee1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769ee4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12769ee7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12769eea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769eed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12769ef0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769ef3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12769ef6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12769ef9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12769efc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12769eff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769f02 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12769f08 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769f0b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12769f12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12769f15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12769f18 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769f1b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12769f1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769f21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12769f23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769f26 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12769f29 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12769f2c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769f2f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12769f32 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769f35 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12769f37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12769f3a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12769f3d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769f40 jle 0x1276a1f6 */
  if ((C.zf||C.sf!=C.of)) goto L_1276a1f6;
  /* 12769f46 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769f49 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12769f4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12769f4e jne 0x12769f5b */
  if (!C.zf) goto L_12769f5b;
  /* 12769f50 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12769f53 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769f56 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769f59 jle 0x12769f62 */
  if ((C.zf||C.sf!=C.of)) goto L_12769f62;
L_12769f5b:;
  /* 12769f5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12769f5d jmp 0x1276a4b7 */
  goto L_1276a4b7;
L_12769f62:;
  /* 12769f62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12769f65 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12769f68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769f6b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12769f6e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769f72 jbe 0x12769f7b */
  if ((C.cf||C.zf)) goto L_12769f7b;
  /* 12769f74 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12769f7b:;
  /* 12769f7b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769f7e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12769f81 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12769f84 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769f87 jne 0x1276a05d */
  if (!C.zf) goto L_1276a05d;
  /* 12769f8d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12769f91 jae 0x12769ff2 */
  if (!C.cf) goto L_12769ff2;
  /* 12769f93 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12769f98 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12769f9b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12769f9d not edx */
  EDX = (~(EDX));
  /* 12769f9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769fa2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769fa5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12769fa9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12769fab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12769fae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769fb1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12769fb5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769fb8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769fbb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12769fbe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12769fc1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769fc4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769fc7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12769fca mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12769fcd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12769fd0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12769fd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12769fd6 jne 0x12769ff0 */
  if (!C.zf) goto L_12769ff0;
  /* 12769fd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12769fdd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12769fe0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12769fe2 not edx */
  EDX = (~(EDX));
  /* 12769fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769fe7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12769fe9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12769feb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12769fee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12769ff0:;
  /* 12769ff0 jmp 0x1276a05d */
  goto L_1276a05d;
L_12769ff2:;
  /* 12769ff2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12769ff5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12769ff8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12769ffd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12769fff not eax */
  EAX = (~(EAX));
  /* 1276a001 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a004 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a007 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1276a00e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276a010 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a013 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a016 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1276a01d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a020 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a023 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1276a026 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1276a029 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a02c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a02f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1276a032 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a035 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a038 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1276a03c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276a03e jne 0x1276a05d */
  if (!C.zf) goto L_1276a05d;
  /* 1276a040 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276a043 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a046 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1276a04b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1276a04d not eax */
  EAX = (~(EAX));
  /* 1276a04f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a052 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276a055 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1276a057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a05a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1276a05d:;
  /* 1276a05d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a060 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1276a063 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a066 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276a069 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1276a06c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a06f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1276a072 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a075 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1276a078 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1276a07b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276a07e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a081 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a084 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1276a087 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a08b jle 0x1276a1d7 */
  if ((C.zf||C.sf!=C.of)) goto L_1276a1d7;
  /* 1276a091 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a094 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a097 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1276a09a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276a09d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1276a0a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a0a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1276a0a6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a0aa jbe 0x1276a0b3 */
  if ((C.cf||C.zf)) goto L_1276a0b3;
  /* 1276a0ac mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1276a0b3:;
  /* 1276a0b3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276a0b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276a0b9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1276a0bc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1276a0bf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a0c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276a0c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276a0c8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1276a0cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a0ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276a0d1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1276a0d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276a0d7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a0da mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1276a0dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a0e0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276a0e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a0e6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1276a0e9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a0ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a0ef mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276a0f2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a0f5 jne 0x1276a1c3 */
  if (!C.zf) goto L_1276a1c3;
  /* 1276a0fb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a0ff jae 0x1276a15c */
  if (!C.cf) goto L_1276a15c;
  /* 1276a101 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a104 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a107 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1276a10b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a10e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a111 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1276a114 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1276a117 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a11a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a11d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1276a120 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276a122 jne 0x1276a13a */
  if (!C.zf) goto L_1276a13a;
  /* 1276a124 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276a129 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276a12c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276a12e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a131 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276a133 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1276a135 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a138 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1276a13a:;
  /* 1276a13a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1276a13f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276a142 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1276a144 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a147 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a14a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1276a14e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276a150 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a153 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a156 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1276a15a jmp 0x1276a1c3 */
  goto L_1276a1c3;
L_1276a15c:;
  /* 1276a15c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a15f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a162 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1276a166 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a169 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a16c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1276a16f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1276a172 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a175 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a178 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1276a17b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276a17d jne 0x1276a19a */
  if (!C.zf) goto L_1276a19a;
  /* 1276a17f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276a182 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a185 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276a18a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276a18c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a18f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276a192 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1276a194 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a197 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1276a19a:;
  /* 1276a19a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276a19d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a1a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1276a1a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1276a1a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a1aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a1ad mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1276a1b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276a1b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a1b9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a1bc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1276a1c3:;
  /* 1276a1c3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a1c6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276a1c9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1276a1cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a1ce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a1d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276a1d4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1276a1d7:;
  /* 1276a1d7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276a1da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a1dd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a1e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1276a1e2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276a1e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a1e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a1eb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a1ee mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1276a1f1 jmp 0x1276a4b2 */
  goto L_1276a4b2;
L_1276a1f6:;
  /* 1276a1f6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276a1f9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a1fc jge 0x1276a4b2 */
  if ((C.sf==C.of)) goto L_1276a4b2;
  /* 1276a202 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276a205 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a208 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a20b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1276a20d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276a210 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a213 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a216 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a219 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1276a21c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a21f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a222 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1276a225 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276a228 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a22b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1276a22e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276a231 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1276a234 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a237 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1276a23a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a23e jbe 0x1276a247 */
  if ((C.cf||C.zf)) goto L_1276a247;
  /* 1276a240 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1276a247:;
  /* 1276a247 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276a24a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1276a24d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276a24f jne 0x1276a390 */
  if (!C.zf) goto L_1276a390;
  /* 1276a255 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276a258 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1276a25b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a25e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1276a261 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a265 jbe 0x1276a26e */
  if ((C.cf||C.zf)) goto L_1276a26e;
  /* 1276a267 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1276a26e:;
  /* 1276a26e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a271 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a274 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276a277 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a27a jne 0x1276a350 */
  if (!C.zf) goto L_1276a350;
  /* 1276a280 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a284 jae 0x1276a2e5 */
  if (!C.cf) goto L_1276a2e5;
  /* 1276a286 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276a28b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276a28e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276a290 not edx */
  EDX = (~(EDX));
  /* 1276a292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a295 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a298 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1276a29c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1276a29e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a2a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a2a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1276a2a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a2ab add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a2ae mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1276a2b1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1276a2b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a2b7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a2ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1276a2bd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a2c0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a2c3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1276a2c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276a2c9 jne 0x1276a2e3 */
  if (!C.zf) goto L_1276a2e3;
  /* 1276a2cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276a2d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276a2d3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276a2d5 not edx */
  EDX = (~(EDX));
  /* 1276a2d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a2da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276a2dc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1276a2de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a2e1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1276a2e3:;
  /* 1276a2e3 jmp 0x1276a350 */
  goto L_1276a350;
L_1276a2e5:;
  /* 1276a2e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276a2e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a2eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1276a2f0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1276a2f2 not eax */
  EAX = (~(EAX));
  /* 1276a2f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a2f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a2fa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1276a301 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276a303 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a306 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a309 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1276a310 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a313 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a316 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1276a319 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1276a31c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a31f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a322 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1276a325 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a328 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a32b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1276a32f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276a331 jne 0x1276a350 */
  if (!C.zf) goto L_1276a350;
  /* 1276a333 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276a336 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a339 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1276a33e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1276a340 not eax */
  EAX = (~(EAX));
  /* 1276a342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a345 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276a348 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1276a34a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a34d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1276a350:;
  /* 1276a350 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a353 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1276a356 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a359 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276a35c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1276a35f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a362 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1276a365 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276a368 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1276a36b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1276a36e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276a371 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a374 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1276a377 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276a37a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1276a37d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a380 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1276a383 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a387 jbe 0x1276a390 */
  if ((C.cf||C.zf)) goto L_1276a390;
  /* 1276a389 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1276a390:;
  /* 1276a390 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276a393 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276a396 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1276a399 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1276a39c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a39f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276a3a2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276a3a5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1276a3a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a3ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276a3ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1276a3b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276a3b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a3b7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1276a3ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a3bd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276a3c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a3c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1276a3c6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a3c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a3cc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276a3cf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a3d2 jne 0x1276a49e */
  if (!C.zf) goto L_1276a49e;
  /* 1276a3d8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a3dc jae 0x1276a438 */
  if (!C.cf) goto L_1276a438;
  /* 1276a3de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a3e1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a3e4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1276a3e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a3eb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a3ee mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1276a3f1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1276a3f3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a3f6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a3f9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1276a3fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276a3fe jne 0x1276a416 */
  if (!C.zf) goto L_1276a416;
  /* 1276a400 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1276a405 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276a408 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1276a40a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a40d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276a40f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1276a411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a414 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1276a416:;
  /* 1276a416 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276a41b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276a41e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276a420 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a423 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a426 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1276a42a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1276a42c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a42f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a432 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1276a436 jmp 0x1276a49e */
  goto L_1276a49e;
L_1276a438:;
  /* 1276a438 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a43b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a43e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1276a442 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a445 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a448 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1276a44b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1276a44d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a450 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a453 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1276a456 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276a458 jne 0x1276a475 */
  if (!C.zf) goto L_1276a475;
  /* 1276a45a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276a45d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a460 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1276a465 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1276a467 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a46a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276a46d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1276a46f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276a472 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1276a475:;
  /* 1276a475 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276a478 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a47b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276a480 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276a482 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a485 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a488 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1276a48f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1276a491 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a494 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276a497 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1276a49e:;
  /* 1276a49e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a4a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276a4a4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1276a4a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a4a9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a4ac mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276a4af mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1276a4b2:;
  /* 1276a4b2 mov eax, 1 */
  EAX = (0x1u);
L_1276a4b7:;
  /* 1276a4b7 mov esp, ebp */
  ESP = (EBP);
  /* 1276a4b9 pop ebp */
  EBP = (pop32());
  /* 1276a4ba ret  */
  ESPCHK(0x12769ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4c0 @ 0x1276a4c0 (304 bytes, 79 insns) */
void f_1276a4c0(void) {
  FTRACE(0x1276a4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276a4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276a4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1276a4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276a4c4 cmp dword ptr [0x12792000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12792000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a4cb je 0x1276a5ec */
  if (C.zf) goto L_1276a5ec;
  /* 1276a4d1 mov eax, dword ptr [0x12791ff8] */
  EAX = (r32((uint32_t)(0x12791ff8)));
  /* 1276a4d6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1276a4d9 mov ecx, dword ptr [0x12792000] */
  ECX = (r32((uint32_t)(0x12792000)));
  /* 1276a4df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276a4e2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a4e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276a4e7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1276a4ec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1276a4f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276a4f4 push eax */
  push32((uint32_t)(EAX));
  /* 1276a4f5 call dword ptr [0x1279332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279332c))), 0x1276a4fbu);
  /* 1276a4fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276a500 mov ecx, dword ptr [0x12791ff8] */
  ECX = (r32((uint32_t)(0x12791ff8)));
  /* 1276a506 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276a508 mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 1276a50d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1276a510 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1276a512 mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 1276a518 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1276a51b mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 1276a520 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1276a523 mov edx, dword ptr [0x12791ff8] */
  EDX = (r32((uint32_t)(0x12791ff8)));
  /* 1276a529 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1276a534 mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 1276a539 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1276a53c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1276a53f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1276a542 mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 1276a547 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1276a54a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1276a54d mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 1276a553 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1276a556 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1276a55a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276a55c jne 0x1276a572 */
  if (!C.zf) goto L_1276a572;
  /* 1276a55e mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 1276a564 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1276a567 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1276a569 mov ecx, dword ptr [0x12792000] */
  ECX = (r32((uint32_t)(0x12792000)));
  /* 1276a56f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1276a572:;
  /* 1276a572 mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 1276a578 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a57c jne 0x1276a5e2 */
  if (!C.zf) goto L_1276a5e2;
  /* 1276a57e cmp dword ptr [0x12792004], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12792004))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a585 jle 0x1276a5e2 */
  if ((C.zf||C.sf!=C.of)) goto L_1276a5e2;
  /* 1276a587 mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 1276a58c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1276a58f push ecx */
  push32((uint32_t)(ECX));
  /* 1276a590 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276a592 mov edx, dword ptr [0x1279200c] */
  EDX = (r32((uint32_t)(0x1279200c)));
  /* 1276a598 push edx */
  push32((uint32_t)(EDX));
  /* 1276a599 call dword ptr [0x12793330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793330))), 0x1276a59fu);
  /* 1276a59f mov eax, dword ptr [0x12792004] */
  EAX = (r32((uint32_t)(0x12792004)));
  /* 1276a5a4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276a5a7 mov ecx, dword ptr [0x12792008] */
  ECX = (r32((uint32_t)(0x12792008)));
  /* 1276a5ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a5af mov edx, dword ptr [0x12792000] */
  EDX = (r32((uint32_t)(0x12792000)));
  /* 1276a5b5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a5b8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a5ba push ecx */
  push32((uint32_t)(ECX));
  /* 1276a5bb mov eax, dword ptr [0x12792000] */
  EAX = (r32((uint32_t)(0x12792000)));
  /* 1276a5c0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a5c3 push eax */
  push32((uint32_t)(EAX));
  /* 1276a5c4 mov ecx, dword ptr [0x12792000] */
  ECX = (r32((uint32_t)(0x12792000)));
  /* 1276a5ca push ecx */
  push32((uint32_t)(ECX));
  /* 1276a5cb call 0x1276cbf0 */
  push32(0x1276a5d0u); f_1276cbf0();
  /* 1276a5d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a5d3 mov edx, dword ptr [0x12792004] */
  EDX = (r32((uint32_t)(0x12792004)));
  /* 1276a5d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a5dc mov dword ptr [0x12792004], edx */
  w32((uint32_t)(0x12792004), (EDX));
L_1276a5e2:;
  /* 1276a5e2 mov dword ptr [0x12792000], 0 */
  w32((uint32_t)(0x12792000), (0x0u));
L_1276a5ec:;
  /* 1276a5ec mov esp, ebp */
  ESP = (EBP);
  /* 1276a5ee pop ebp */
  EBP = (pop32());
  /* 1276a5ef ret  */
  ESPCHK(0x1276a4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5f0 @ 0x1276a5f0 (1565 bytes, 343 insns) */
void f_1276a5f0(void) {
  FTRACE(0x1276a5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276a5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276a5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1276a5f3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a5f9 mov eax, dword ptr [0x12792004] */
  EAX = (r32((uint32_t)(0x12792004)));
  /* 1276a5fe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276a601 push eax */
  push32((uint32_t)(EAX));
  /* 1276a602 mov ecx, dword ptr [0x12792008] */
  ECX = (r32((uint32_t)(0x12792008)));
  /* 1276a608 push ecx */
  push32((uint32_t)(ECX));
  /* 1276a609 call dword ptr [0x127933a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933a0))), 0x1276a60fu);
  /* 1276a60f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276a611 je 0x1276a61b */
  if (C.zf) goto L_1276a61b;
  /* 1276a613 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276a616 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276a61b:;
  /* 1276a61b mov edx, dword ptr [0x12792008] */
  EDX = (r32((uint32_t)(0x12792008)));
  /* 1276a621 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1276a627 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1276a631 jmp 0x1276a642 */
  goto L_1276a642;
L_1276a633:;
  /* 1276a633 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1276a639 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a63c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1276a642:;
  /* 1276a642 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1276a648 cmp ecx, dword ptr [0x12792004] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12792004))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a64e jge 0x1276ac07 */
  if ((C.sf==C.of)) goto L_1276ac07;
  /* 1276a654 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1276a65a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1276a65d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1276a663 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1276a668 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1276a66e push ecx */
  push32((uint32_t)(ECX));
  /* 1276a66f call dword ptr [0x127933a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933a0))), 0x1276a675u);
  /* 1276a675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276a677 je 0x1276a683 */
  if (C.zf) goto L_1276a683;
  /* 1276a679 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1276a67e jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276a683:;
  /* 1276a683 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1276a689 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1276a68c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1276a692 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1276a698 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a69e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1276a6a1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1276a6a7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1276a6aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276a6ad mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1276a6b7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1276a6c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1276a6c8 jmp 0x1276a6d3 */
  goto L_1276a6d3;
L_1276a6ca:;
  /* 1276a6ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276a6cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a6d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1276a6d3:;
  /* 1276a6d3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a6d7 jge 0x1276abcb */
  if ((C.sf==C.of)) goto L_1276abcb;
  /* 1276a6dd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1276a6e7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1276a6f1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1276a6fb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1276a705 jmp 0x1276a716 */
  goto L_1276a716;
L_1276a707:;
  /* 1276a707 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1276a70d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a710 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1276a716:;
  /* 1276a716 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a71d jge 0x1276a732 */
  if ((C.sf==C.of)) goto L_1276a732;
  /* 1276a71f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1276a725 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1276a730 jmp 0x1276a707 */
  goto L_1276a707;
L_1276a732:;
  /* 1276a732 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a736 jl 0x1276ab6d */
  if ((C.sf!=C.of)) goto L_1276ab6d;
  /* 1276a73c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1276a741 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1276a747 push ecx */
  push32((uint32_t)(ECX));
  /* 1276a748 call dword ptr [0x127933a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933a0))), 0x1276a74eu);
  /* 1276a74e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276a750 je 0x1276a75c */
  if (C.zf) goto L_1276a75c;
  /* 1276a752 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1276a757 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276a75c:;
  /* 1276a75c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1276a762 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1276a765 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1276a76f jmp 0x1276a780 */
  goto L_1276a780;
L_1276a771:;
  /* 1276a771 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1276a777 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a77a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1276a780:;
  /* 1276a780 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a787 jge 0x1276a904 */
  if ((C.sf==C.of)) goto L_1276a904;
  /* 1276a78d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276a790 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a793 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1276a799 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1276a79f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a7a5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1276a7ab mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1276a7b1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a7b5 jne 0x1276a7c2 */
  if (!C.zf) goto L_1276a7c2;
  /* 1276a7b7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1276a7bd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a7c0 je 0x1276a7cc */
  if (C.zf) goto L_1276a7cc;
L_1276a7c2:;
  /* 1276a7c2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1276a7c7 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276a7cc:;
  /* 1276a7cc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1276a7d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1276a7d4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1276a7da mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1276a7e0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1276a7e6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1276a7ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1276a7ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276a7f1 je 0x1276a829 */
  if (C.zf) goto L_1276a829;
  /* 1276a7f3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1276a7f9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a7fc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1276a802 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a80c jle 0x1276a818 */
  if ((C.zf||C.sf!=C.of)) goto L_1276a818;
  /* 1276a80e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1276a813 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276a818:;
  /* 1276a818 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1276a81e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a821 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1276a827 jmp 0x1276a86b */
  goto L_1276a86b;
L_1276a829:;
  /* 1276a829 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1276a82f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1276a832 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276a835 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1276a83b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a842 jle 0x1276a84e */
  if ((C.zf||C.sf!=C.of)) goto L_1276a84e;
  /* 1276a844 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1276a84e:;
  /* 1276a84e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1276a854 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1276a85b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a85e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1276a864 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1276a86b:;
  /* 1276a86b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a872 jl 0x1276a88d */
  if ((C.sf!=C.of)) goto L_1276a88d;
  /* 1276a874 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1276a87a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1276a87d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276a87f jne 0x1276a88d */
  if (!C.zf) goto L_1276a88d;
  /* 1276a881 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a88b jle 0x1276a897 */
  if ((C.zf||C.sf!=C.of)) goto L_1276a897;
L_1276a88d:;
  /* 1276a88d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1276a892 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276a897:;
  /* 1276a897 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1276a89d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a8a3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1276a8a6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a8ac je 0x1276a8b8 */
  if (C.zf) goto L_1276a8b8;
  /* 1276a8ae mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1276a8b3 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276a8b8:;
  /* 1276a8b8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1276a8be add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a8c4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1276a8ca mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1276a8d0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a8d6 jb 0x1276a7cc */
  if (C.cf) goto L_1276a7cc;
  /* 1276a8dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1276a8e2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a8e8 je 0x1276a8f4 */
  if (C.zf) goto L_1276a8f4;
  /* 1276a8ea mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1276a8ef jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276a8f4:;
  /* 1276a8f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276a8f7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a8fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276a8ff jmp 0x1276a771 */
  goto L_1276a771;
L_1276a904:;
  /* 1276a904 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276a907 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276a909 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a90f je 0x1276a91b */
  if (C.zf) goto L_1276a91b;
  /* 1276a911 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1276a916 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276a91b:;
  /* 1276a91b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276a91e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1276a924 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1276a92b jmp 0x1276a936 */
  goto L_1276a936;
L_1276a92d:;
  /* 1276a92d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a930 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a933 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1276a936:;
  /* 1276a936 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a93a jge 0x1276ab6d */
  if ((C.sf==C.of)) goto L_1276ab6d;
  /* 1276a940 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1276a94a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1276a950 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1276a956:;
  /* 1276a956 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1276a95c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276a95f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1276a965 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1276a96b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a971 je 0x1276aa9a */
  if (C.zf) goto L_1276aa9a;
  /* 1276a977 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276a97a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1276a980 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a987 je 0x1276aa9a */
  if (C.zf) goto L_1276aa9a;
  /* 1276a98d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1276a993 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a999 jb 0x1276a9ae */
  if (C.cf) goto L_1276a9ae;
  /* 1276a99b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1276a9a1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a9a6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a9ac jb 0x1276a9b8 */
  if (C.cf) goto L_1276a9b8;
L_1276a9ae:;
  /* 1276a9ae mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1276a9b3 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276a9b8:;
  /* 1276a9b8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1276a9be and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1276a9c4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1276a9ca mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1276a9d0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a9d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1276a9d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276a9d9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276a9de mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1276a9e4:;
  /* 1276a9e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276a9e7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a9ed je 0x1276aa0e */
  if (C.zf) goto L_1276aa0e;
  /* 1276a9ef mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276a9f2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276a9f8 jne 0x1276a9fc */
  if (!C.zf) goto L_1276a9fc;
  /* 1276a9fa jmp 0x1276aa0e */
  goto L_1276aa0e;
L_1276a9fc:;
  /* 1276a9fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276a9ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276aa01 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1276aa04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276aa07 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276aa09 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1276aa0c jmp 0x1276a9e4 */
  goto L_1276a9e4;
L_1276aa0e:;
  /* 1276aa0e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276aa11 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276aa17 jne 0x1276aa23 */
  if (!C.zf) goto L_1276aa23;
  /* 1276aa19 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1276aa1e jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276aa23:;
  /* 1276aa23 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1276aa29 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276aa2b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1276aa2e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276aa31 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1276aa37 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276aa3e jle 0x1276aa4a */
  if ((C.zf||C.sf!=C.of)) goto L_1276aa4a;
  /* 1276aa40 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1276aa4a:;
  /* 1276aa4a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1276aa50 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276aa53 je 0x1276aa5f */
  if (C.zf) goto L_1276aa5f;
  /* 1276aa55 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1276aa5a jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276aa5f:;
  /* 1276aa5f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1276aa65 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1276aa68 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276aa6e je 0x1276aa7a */
  if (C.zf) goto L_1276aa7a;
  /* 1276aa70 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1276aa75 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276aa7a:;
  /* 1276aa7a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1276aa80 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1276aa86 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1276aa8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276aa8f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1276aa95 jmp 0x1276a956 */
  goto L_1276a956;
L_1276aa9a:;
  /* 1276aa9a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276aaa1 je 0x1276ab11 */
  if (C.zf) goto L_1276ab11;
  /* 1276aaa3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276aaa7 jge 0x1276aadb */
  if ((C.sf==C.of)) goto L_1276aadb;
  /* 1276aaa9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276aaae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276aab1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276aab3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1276aab9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1276aabb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1276aac1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276aac6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276aac9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276aacb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1276aad1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1276aad3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1276aad9 jmp 0x1276ab11 */
  goto L_1276ab11;
L_1276aadb:;
  /* 1276aadb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276aade sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276aae1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276aae6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276aae8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1276aaee or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1276aaf0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1276aaf6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276aaf9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276aafc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1276ab01 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1276ab03 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1276ab09 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ab0b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1276ab11:;
  /* 1276ab11 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1276ab17 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276ab1a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ab20 jne 0x1276ab34 */
  if (!C.zf) goto L_1276ab34;
  /* 1276ab22 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276ab25 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1276ab2b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ab32 je 0x1276ab3e */
  if (C.zf) goto L_1276ab3e;
L_1276ab34:;
  /* 1276ab34 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1276ab39 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276ab3e:;
  /* 1276ab3e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1276ab44 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1276ab47 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ab4d je 0x1276ab59 */
  if (C.zf) goto L_1276ab59;
  /* 1276ab4f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1276ab54 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276ab59:;
  /* 1276ab59 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1276ab5f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ab62 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1276ab68 jmp 0x1276a92d */
  goto L_1276a92d;
L_1276ab6d:;
  /* 1276ab6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276ab70 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1276ab76 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1276ab7c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ab80 jne 0x1276ab9a */
  if (!C.zf) goto L_1276ab9a;
  /* 1276ab82 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276ab85 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1276ab8b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1276ab91 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ab98 je 0x1276aba1 */
  if (C.zf) goto L_1276aba1;
L_1276ab9a:;
  /* 1276ab9a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1276ab9f jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276aba1:;
  /* 1276aba1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1276aba7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276abad mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1276abb3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276abb6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276abbb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1276abbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276abc1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1276abc3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1276abc6 jmp 0x1276a6ca */
  goto L_1276a6ca;
L_1276abcb:;
  /* 1276abcb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1276abd1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1276abd7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276abd9 jne 0x1276abec */
  if (!C.zf) goto L_1276abec;
  /* 1276abdb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1276abe1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1276abe7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276abea je 0x1276abf3 */
  if (C.zf) goto L_1276abf3;
L_1276abec:;
  /* 1276abec mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1276abf1 jmp 0x1276ac09 */
  goto L_1276ac09;
L_1276abf3:;
  /* 1276abf3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1276abf9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276abfc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1276ac02 jmp 0x1276a633 */
  goto L_1276a633;
L_1276ac07:;
  /* 1276ac07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276ac09:;
  /* 1276ac09 mov esp, ebp */
  ESP = (EBP);
  /* 1276ac0b pop ebp */
  EBP = (pop32());
  /* 1276ac0c ret  */
  ESPCHK(0x1276a5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac10 @ 0x1276ac10 (250 bytes, 92 insns) */
void f_1276ac10(void) {
  FTRACE(0x1276ac10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276ac10 push ebp */
  push32((uint32_t)(EBP));
  /* 1276ac11 mov ebp, esp */
  EBP = (ESP);
  /* 1276ac13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ac16 push ebx */
  push32((uint32_t)(EBX));
  /* 1276ac17 push esi */
  push32((uint32_t)(ESI));
  /* 1276ac18 push edi */
  push32((uint32_t)(EDI));
  /* 1276ac19 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1276ac1c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1276ac1f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1276ac22 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1276ac25:;
  /* 1276ac25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ac29 jne 0x1276ac49 */
  if (!C.zf) goto L_1276ac49;
  /* 1276ac2b push 0x1278c100 */
  push32((uint32_t)(0x1278c100u));
  /* 1276ac30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276ac32 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1276ac34 push 0x1278c0f4 */
  push32((uint32_t)(0x1278c0f4u));
  /* 1276ac39 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ac3b call 0x12763dc0 */
  push32(0x1276ac40u); f_12763dc0();
  /* 1276ac40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ac43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ac46 jne 0x1276ac49 */
  if (!C.zf) goto L_1276ac49;
  /* 1276ac48 int3  */
  x86_unimpl("int3 @ 0x1276ac48");
L_1276ac49:;
  /* 1276ac49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276ac4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276ac4d jne 0x1276ac25 */
  if (!C.zf) goto L_1276ac25;
L_1276ac4f:;
  /* 1276ac4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ac53 jne 0x1276ac73 */
  if (!C.zf) goto L_1276ac73;
  /* 1276ac55 push 0x1278c0e4 */
  push32((uint32_t)(0x1278c0e4u));
  /* 1276ac5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276ac5c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1276ac5e push 0x1278c0f4 */
  push32((uint32_t)(0x1278c0f4u));
  /* 1276ac63 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ac65 call 0x12763dc0 */
  push32(0x1276ac6au); f_12763dc0();
  /* 1276ac6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ac6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ac70 jne 0x1276ac73 */
  if (!C.zf) goto L_1276ac73;
  /* 1276ac72 int3  */
  x86_unimpl("int3 @ 0x1276ac72");
L_1276ac73:;
  /* 1276ac73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ac75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ac77 jne 0x1276ac4f */
  if (!C.zf) goto L_1276ac4f;
  /* 1276ac79 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276ac7c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1276ac83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276ac86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ac89 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1276ac8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276ac8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ac92 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1276ac94 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276ac97 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1276ac9e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276aca1 push ecx */
  push32((uint32_t)(ECX));
  /* 1276aca2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276aca5 push edx */
  push32((uint32_t)(EDX));
  /* 1276aca6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276aca9 push eax */
  push32((uint32_t)(EAX));
  /* 1276acaa call 0x1276bc90 */
  push32(0x1276acafu); f_1276bc90();
  /* 1276acaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276acb2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1276acb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276acb8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276acbb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276acbe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276acc1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1276acc4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276acc7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276accb jl 0x1276acef */
  if ((C.sf!=C.of)) goto L_1276acef;
  /* 1276accd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276acd0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1276acd2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1276acd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276acd7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1276acdd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1276ace0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276ace3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1276ace5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ace8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276aceb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1276aced jmp 0x1276ad00 */
  goto L_1276ad00;
L_1276acef:;
  /* 1276acef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276acf2 push edx */
  push32((uint32_t)(EDX));
  /* 1276acf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276acf5 call 0x1276ba10 */
  push32(0x1276acfau); f_1276ba10();
  /* 1276acfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276acfd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1276ad00:;
  /* 1276ad00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276ad03 pop edi */
  EDI = (pop32());
  /* 1276ad04 pop esi */
  ESI = (pop32());
  /* 1276ad05 pop ebx */
  EBX = (pop32());
  /* 1276ad06 mov esp, ebp */
  ESP = (EBP);
  /* 1276ad08 pop ebp */
  EBP = (pop32());
  /* 1276ad09 ret  */
  ESPCHK(0x1276ac10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad10 @ 0x1276ad10 (183 bytes, 58 insns) */
void f_1276ad10(void) {
  FTRACE(0x1276ad10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276ad10 push ebp */
  push32((uint32_t)(EBP));
  /* 1276ad11 mov ebp, esp */
  EBP = (ESP);
  /* 1276ad13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ad16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ad19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ad1c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ad21 ja 0x1276ad3a */
  if ((!C.cf&&!C.zf)) goto L_1276ad3a;
  /* 1276ad23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ad26 mov edx, dword ptr [0x1278ec98] */
  EDX = (r32((uint32_t)(0x1278ec98)));
  /* 1276ad2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ad2e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1276ad32 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1276ad35 jmp 0x1276adc3 */
  goto L_1276adc3;
L_1276ad3a:;
  /* 1276ad3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ad3d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1276ad40 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1276ad46 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1276ad4c mov edx, dword ptr [0x1278ec98] */
  EDX = (r32((uint32_t)(0x1278ec98)));
  /* 1276ad52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ad54 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1276ad58 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1276ad5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ad5f je 0x1276ad83 */
  if (C.zf) goto L_1276ad83;
  /* 1276ad61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ad64 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1276ad67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1276ad6d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1276ad70 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1276ad73 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1276ad76 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1276ad7a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1276ad81 jmp 0x1276ad94 */
  goto L_1276ad94;
L_1276ad83:;
  /* 1276ad83 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1276ad86 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1276ad89 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1276ad8d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1276ad94:;
  /* 1276ad94 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276ad96 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276ad98 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276ad9a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1276ad9d push ecx */
  push32((uint32_t)(ECX));
  /* 1276ad9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ada1 push edx */
  push32((uint32_t)(EDX));
  /* 1276ada2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1276ada5 push eax */
  push32((uint32_t)(EAX));
  /* 1276ada6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276ada8 call 0x1276cf30 */
  push32(0x1276adadu); f_1276cf30();
  /* 1276adad add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276adb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276adb2 jne 0x1276adb8 */
  if (!C.zf) goto L_1276adb8;
  /* 1276adb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276adb6 jmp 0x1276adc3 */
  goto L_1276adc3;
L_1276adb8:;
  /* 1276adb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276adbb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276adc0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1276adc3:;
  /* 1276adc3 mov esp, ebp */
  ESP = (EBP);
  /* 1276adc5 pop ebp */
  EBP = (pop32());
  /* 1276adc6 ret  */
  ESPCHK(0x1276ad10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000add0 @ 0x1276add0 (836 bytes, 238 insns) */
void f_1276add0(void) {
  FTRACE(0x1276add0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276add0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276add1 mov ebp, esp */
  EBP = (ESP);
  /* 1276add3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276add6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1276add8 call 0x12768700 */
  push32(0x1276adddu); f_12768700();
  /* 1276addd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ade0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ade3 push eax */
  push32((uint32_t)(EAX));
  /* 1276ade4 call 0x1276b120 */
  push32(0x1276ade9u); f_1276b120();
  /* 1276ade9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276adec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1276adef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276adf2 cmp ecx, dword ptr [0x12791d44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12791d44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276adf8 jne 0x1276ae0b */
  if (!C.zf) goto L_1276ae0b;
  /* 1276adfa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1276adfc call 0x127687a0 */
  push32(0x1276ae01u); f_127687a0();
  /* 1276ae01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ae04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ae06 jmp 0x1276b110 */
  goto L_1276b110;
L_1276ae0b:;
  /* 1276ae0b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ae0f jne 0x1276ae2c */
  if (!C.zf) goto L_1276ae2c;
  /* 1276ae11 call 0x1276b200 */
  push32(0x1276ae16u); f_1276b200();
  /* 1276ae16 call 0x1276b280 */
  push32(0x1276ae1bu); f_1276b280();
  /* 1276ae1b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1276ae1d call 0x127687a0 */
  push32(0x1276ae22u); f_127687a0();
  /* 1276ae22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ae25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ae27 jmp 0x1276b110 */
  goto L_1276b110;
L_1276ae2c:;
  /* 1276ae2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276ae33 jmp 0x1276ae3e */
  goto L_1276ae3e;
L_1276ae35:;
  /* 1276ae35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276ae38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ae3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1276ae3e:;
  /* 1276ae3e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ae42 jae 0x1276af8f */
  if (!C.cf) goto L_1276af8f;
  /* 1276ae48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276ae4b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ae4e mov ecx, dword ptr [eax + 0x1278eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1278eeb8)));
  /* 1276ae54 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ae57 jne 0x1276af8a */
  if (!C.zf) goto L_1276af8a;
  /* 1276ae5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1276ae64 jmp 0x1276ae6f */
  goto L_1276ae6f;
L_1276ae66:;
  /* 1276ae66 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276ae69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ae6c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1276ae6f:;
  /* 1276ae6f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ae76 jae 0x1276ae84 */
  if (!C.cf) goto L_1276ae84;
  /* 1276ae78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276ae7b mov byte ptr [eax + 0x12791ee0], 0 */
  w8((uint32_t)(EAX + 0x12791ee0), (0x0u));
  /* 1276ae82 jmp 0x1276ae66 */
  goto L_1276ae66;
L_1276ae84:;
  /* 1276ae84 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1276ae8b jmp 0x1276ae96 */
  goto L_1276ae96;
L_1276ae8d:;
  /* 1276ae8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276ae90 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ae93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1276ae96:;
  /* 1276ae96 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ae9a jae 0x1276af17 */
  if (!C.cf) goto L_1276af17;
  /* 1276ae9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276ae9f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276aea2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276aea5 lea ecx, [edx + eax*8 + 0x1278eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1278eec8));
  /* 1276aeac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1276aeaf jmp 0x1276aeba */
  goto L_1276aeba;
L_1276aeb1:;
  /* 1276aeb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276aeb4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276aeb7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1276aeba:;
  /* 1276aeba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276aebd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276aebf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1276aec1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276aec3 je 0x1276af12 */
  if (C.zf) goto L_1276af12;
  /* 1276aec5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276aec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276aeca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1276aecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276aecf je 0x1276af12 */
  if (C.zf) goto L_1276af12;
  /* 1276aed1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276aed4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276aed6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1276aed8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1276aedb jmp 0x1276aee6 */
  goto L_1276aee6;
L_1276aedd:;
  /* 1276aedd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276aee0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276aee3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1276aee6:;
  /* 1276aee6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276aee9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276aeeb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1276aeee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276aef1 ja 0x1276af10 */
  if ((!C.cf&&!C.zf)) goto L_1276af10;
  /* 1276aef3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276aef6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276aef9 mov dl, byte ptr [eax + 0x12791ee1] */
  DL = (r8((uint32_t)(EAX + 0x12791ee1)));
  /* 1276aeff or dl, byte ptr [ecx + 0x1278eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1278eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1276af05 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276af08 mov byte ptr [eax + 0x12791ee1], dl */
  w8((uint32_t)(EAX + 0x12791ee1), (DL));
  /* 1276af0e jmp 0x1276aedd */
  goto L_1276aedd;
L_1276af10:;
  /* 1276af10 jmp 0x1276aeb1 */
  goto L_1276aeb1;
L_1276af12:;
  /* 1276af12 jmp 0x1276ae8d */
  goto L_1276ae8d;
L_1276af17:;
  /* 1276af17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276af1a mov dword ptr [0x12791d44], ecx */
  w32((uint32_t)(0x12791d44), (ECX));
  /* 1276af20 mov dword ptr [0x12791dcc], 1 */
  w32((uint32_t)(0x12791dcc), (0x1u));
  /* 1276af2a mov edx, dword ptr [0x12791d44] */
  EDX = (r32((uint32_t)(0x12791d44)));
  /* 1276af30 push edx */
  push32((uint32_t)(EDX));
  /* 1276af31 call 0x1276b180 */
  push32(0x1276af36u); f_1276b180();
  /* 1276af36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276af39 mov dword ptr [0x12791fe4], eax */
  w32((uint32_t)(0x12791fe4), (EAX));
  /* 1276af3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1276af45 jmp 0x1276af50 */
  goto L_1276af50;
L_1276af47:;
  /* 1276af47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276af4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276af4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1276af50:;
  /* 1276af50 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276af54 jae 0x1276af74 */
  if (!C.cf) goto L_1276af74;
  /* 1276af56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276af59 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276af5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276af5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276af62 mov cx, word ptr [ecx + eax*2 + 0x1278eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1278eebc)));
  /* 1276af6a mov word ptr [edx*2 + 0x12791dc0], cx */
  w16((uint32_t)(EDX*2 + 0x12791dc0), (CX));
  /* 1276af72 jmp 0x1276af47 */
  goto L_1276af47;
L_1276af74:;
  /* 1276af74 call 0x1276b280 */
  push32(0x1276af79u); f_1276b280();
  /* 1276af79 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1276af7b call 0x127687a0 */
  push32(0x1276af80u); f_127687a0();
  /* 1276af80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276af83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276af85 jmp 0x1276b110 */
  goto L_1276b110;
L_1276af8a:;
  /* 1276af8a jmp 0x1276ae35 */
  goto L_1276ae35;
L_1276af8f:;
  /* 1276af8f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1276af92 push edx */
  push32((uint32_t)(EDX));
  /* 1276af93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276af96 push eax */
  push32((uint32_t)(EAX));
  /* 1276af97 call dword ptr [0x12793304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793304))), 0x1276af9du);
  /* 1276af9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276afa0 jne 0x1276b0e2 */
  if (!C.zf) goto L_1276b0e2;
  /* 1276afa6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1276afad jmp 0x1276afb8 */
  goto L_1276afb8;
L_1276afaf:;
  /* 1276afaf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276afb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276afb5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1276afb8:;
  /* 1276afb8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276afbf jae 0x1276afcd */
  if (!C.cf) goto L_1276afcd;
  /* 1276afc1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276afc4 mov byte ptr [edx + 0x12791ee0], 0 */
  w8((uint32_t)(EDX + 0x12791ee0), (0x0u));
  /* 1276afcb jmp 0x1276afaf */
  goto L_1276afaf;
L_1276afcd:;
  /* 1276afcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276afd0 mov dword ptr [0x12791d44], eax */
  w32((uint32_t)(0x12791d44), (EAX));
  /* 1276afd5 mov dword ptr [0x12791fe4], 0 */
  w32((uint32_t)(0x12791fe4), (0x0u));
  /* 1276afdf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276afe3 jbe 0x1276b09e */
  if ((C.cf||C.zf)) goto L_1276b09e;
  /* 1276afe9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1276afec mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1276afef jmp 0x1276affa */
  goto L_1276affa;
L_1276aff1:;
  /* 1276aff1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276aff4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276aff7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1276affa:;
  /* 1276affa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276affd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276afff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1276b001 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276b003 je 0x1276b04c */
  if (C.zf) goto L_1276b04c;
  /* 1276b005 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276b008 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276b00a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1276b00d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276b00f je 0x1276b04c */
  if (C.zf) goto L_1276b04c;
  /* 1276b011 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276b014 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b016 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1276b018 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1276b01b jmp 0x1276b026 */
  goto L_1276b026;
L_1276b01d:;
  /* 1276b01d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276b020 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b023 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1276b026:;
  /* 1276b026 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276b029 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b02b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1276b02e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b031 ja 0x1276b04a */
  if ((!C.cf&&!C.zf)) goto L_1276b04a;
  /* 1276b033 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276b036 mov cl, byte ptr [eax + 0x12791ee1] */
  CL = (r8((uint32_t)(EAX + 0x12791ee1)));
  /* 1276b03c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1276b03f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276b042 mov byte ptr [edx + 0x12791ee1], cl */
  w8((uint32_t)(EDX + 0x12791ee1), (CL));
  /* 1276b048 jmp 0x1276b01d */
  goto L_1276b01d;
L_1276b04a:;
  /* 1276b04a jmp 0x1276aff1 */
  goto L_1276aff1;
L_1276b04c:;
  /* 1276b04c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1276b053 jmp 0x1276b05e */
  goto L_1276b05e;
L_1276b055:;
  /* 1276b055 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276b058 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b05b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1276b05e:;
  /* 1276b05e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b065 jae 0x1276b07e */
  if (!C.cf) goto L_1276b07e;
  /* 1276b067 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276b06a mov dl, byte ptr [ecx + 0x12791ee1] */
  DL = (r8((uint32_t)(ECX + 0x12791ee1)));
  /* 1276b070 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1276b073 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276b076 mov byte ptr [eax + 0x12791ee1], dl */
  w8((uint32_t)(EAX + 0x12791ee1), (DL));
  /* 1276b07c jmp 0x1276b055 */
  goto L_1276b055;
L_1276b07e:;
  /* 1276b07e mov ecx, dword ptr [0x12791d44] */
  ECX = (r32((uint32_t)(0x12791d44)));
  /* 1276b084 push ecx */
  push32((uint32_t)(ECX));
  /* 1276b085 call 0x1276b180 */
  push32(0x1276b08au); f_1276b180();
  /* 1276b08a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b08d mov dword ptr [0x12791fe4], eax */
  w32((uint32_t)(0x12791fe4), (EAX));
  /* 1276b092 mov dword ptr [0x12791dcc], 1 */
  w32((uint32_t)(0x12791dcc), (0x1u));
  /* 1276b09c jmp 0x1276b0a8 */
  goto L_1276b0a8;
L_1276b09e:;
  /* 1276b09e mov dword ptr [0x12791dcc], 0 */
  w32((uint32_t)(0x12791dcc), (0x0u));
L_1276b0a8:;
  /* 1276b0a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1276b0af jmp 0x1276b0ba */
  goto L_1276b0ba;
L_1276b0b1:;
  /* 1276b0b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276b0b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b0b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1276b0ba:;
  /* 1276b0ba cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b0be jae 0x1276b0cf */
  if (!C.cf) goto L_1276b0cf;
  /* 1276b0c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276b0c3 mov word ptr [eax*2 + 0x12791dc0], 0 */
  w16((uint32_t)(EAX*2 + 0x12791dc0), (0x0u));
  /* 1276b0cd jmp 0x1276b0b1 */
  goto L_1276b0b1;
L_1276b0cf:;
  /* 1276b0cf call 0x1276b280 */
  push32(0x1276b0d4u); f_1276b280();
  /* 1276b0d4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1276b0d6 call 0x127687a0 */
  push32(0x1276b0dbu); f_127687a0();
  /* 1276b0db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b0de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276b0e0 jmp 0x1276b110 */
  goto L_1276b110;
L_1276b0e2:;
  /* 1276b0e2 cmp dword ptr [0x12790850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b0e9 je 0x1276b103 */
  if (C.zf) goto L_1276b103;
  /* 1276b0eb call 0x1276b200 */
  push32(0x1276b0f0u); f_1276b200();
  /* 1276b0f0 call 0x1276b280 */
  push32(0x1276b0f5u); f_1276b280();
  /* 1276b0f5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1276b0f7 call 0x127687a0 */
  push32(0x1276b0fcu); f_127687a0();
  /* 1276b0fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b0ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276b101 jmp 0x1276b110 */
  goto L_1276b110;
L_1276b103:;
  /* 1276b103 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1276b105 call 0x127687a0 */
  push32(0x1276b10au); f_127687a0();
  /* 1276b10a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b10d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1276b110:;
  /* 1276b110 mov esp, ebp */
  ESP = (EBP);
  /* 1276b112 pop ebp */
  EBP = (pop32());
  /* 1276b113 ret  */
  ESPCHK(0x1276add0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1276b120 (89 bytes, 21 insns) */
void f_1276b120(void) {
  FTRACE(0x1276b120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276b120 push ebp */
  push32((uint32_t)(EBP));
  /* 1276b121 mov ebp, esp */
  EBP = (ESP);
  /* 1276b123 mov dword ptr [0x12790850], 0 */
  w32((uint32_t)(0x12790850), (0x0u));
  /* 1276b12d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b131 jne 0x1276b145 */
  if (!C.zf) goto L_1276b145;
  /* 1276b133 mov dword ptr [0x12790850], 1 */
  w32((uint32_t)(0x12790850), (0x1u));
  /* 1276b13d call dword ptr [0x127932fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932fc))), 0x1276b143u);
  /* 1276b143 jmp 0x1276b177 */
  goto L_1276b177;
L_1276b145:;
  /* 1276b145 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b149 jne 0x1276b15d */
  if (!C.zf) goto L_1276b15d;
  /* 1276b14b mov dword ptr [0x12790850], 1 */
  w32((uint32_t)(0x12790850), (0x1u));
  /* 1276b155 call dword ptr [0x12793300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793300))), 0x1276b15bu);
  /* 1276b15b jmp 0x1276b177 */
  goto L_1276b177;
L_1276b15d:;
  /* 1276b15d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b161 jne 0x1276b174 */
  if (!C.zf) goto L_1276b174;
  /* 1276b163 mov dword ptr [0x12790850], 1 */
  w32((uint32_t)(0x12790850), (0x1u));
  /* 1276b16d mov eax, dword ptr [0x12790870] */
  EAX = (r32((uint32_t)(0x12790870)));
  /* 1276b172 jmp 0x1276b177 */
  goto L_1276b177;
L_1276b174:;
  /* 1276b174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1276b177:;
  /* 1276b177 pop ebp */
  EBP = (pop32());
  /* 1276b178 ret  */
  ESPCHK(0x1276b120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b180 @ 0x1276b180 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1276b180(void) {
  FTRACE(0x1276b180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276b180 push ebp */
  push32((uint32_t)(EBP));
  /* 1276b181 mov ebp, esp */
  EBP = (ESP);
  /* 1276b183 push ecx */
  push32((uint32_t)(ECX));
  /* 1276b184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276b187 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276b18a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276b18d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b193 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1276b196 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b19a ja 0x1276b1ca */
  if ((!C.cf&&!C.zf)) goto L_1276b1ca;
  /* 1276b19c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276b19f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b1a1 mov dl, byte ptr [eax + 0x1276b1e4] */
  DL = (r8((uint32_t)(EAX + 0x1276b1e4)));
  /* 1276b1a7 jmp dword ptr [edx*4 + 0x1276b1d0] */
  switch (EDX) {
    case 0: goto L_1276b1ae;
    case 1: goto L_1276b1b5;
    case 2: goto L_1276b1bc;
    case 3: goto L_1276b1c3;
    case 4: goto L_1276b1ca;
    default: x86_unimpl("switch@0x1276b1a7 out of table"); return;
  }
L_1276b1ae:;
  /* 1276b1ae mov eax, 0x411 */
  EAX = (0x411u);
  /* 1276b1b3 jmp 0x1276b1cc */
  goto L_1276b1cc;
L_1276b1b5:;
  /* 1276b1b5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1276b1ba jmp 0x1276b1cc */
  goto L_1276b1cc;
L_1276b1bc:;
  /* 1276b1bc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1276b1c1 jmp 0x1276b1cc */
  goto L_1276b1cc;
L_1276b1c3:;
  /* 1276b1c3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1276b1c8 jmp 0x1276b1cc */
  goto L_1276b1cc;
L_1276b1ca:;
  /* 1276b1ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276b1cc:;
  /* 1276b1cc mov esp, ebp */
  ESP = (EBP);
  /* 1276b1ce pop ebp */
  EBP = (pop32());
  /* 1276b1cf ret  */
  ESPCHK(0x1276b180u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1276b200 (116 bytes, 29 insns) */
void f_1276b200(void) {
  FTRACE(0x1276b200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276b200 push ebp */
  push32((uint32_t)(EBP));
  /* 1276b201 mov ebp, esp */
  EBP = (ESP);
  /* 1276b203 push ecx */
  push32((uint32_t)(ECX));
  /* 1276b204 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276b20b jmp 0x1276b216 */
  goto L_1276b216;
L_1276b20d:;
  /* 1276b20d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276b210 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b213 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1276b216:;
  /* 1276b216 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b21d jge 0x1276b22b */
  if ((C.sf==C.of)) goto L_1276b22b;
  /* 1276b21f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276b222 mov byte ptr [ecx + 0x12791ee0], 0 */
  w8((uint32_t)(ECX + 0x12791ee0), (0x0u));
  /* 1276b229 jmp 0x1276b20d */
  goto L_1276b20d;
L_1276b22b:;
  /* 1276b22b mov dword ptr [0x12791d44], 0 */
  w32((uint32_t)(0x12791d44), (0x0u));
  /* 1276b235 mov dword ptr [0x12791dcc], 0 */
  w32((uint32_t)(0x12791dcc), (0x0u));
  /* 1276b23f mov dword ptr [0x12791fe4], 0 */
  w32((uint32_t)(0x12791fe4), (0x0u));
  /* 1276b249 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276b250 jmp 0x1276b25b */
  goto L_1276b25b;
L_1276b252:;
  /* 1276b252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276b255 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b258 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1276b25b:;
  /* 1276b25b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b25f jge 0x1276b270 */
  if ((C.sf==C.of)) goto L_1276b270;
  /* 1276b261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276b264 mov word ptr [eax*2 + 0x12791dc0], 0 */
  w16((uint32_t)(EAX*2 + 0x12791dc0), (0x0u));
  /* 1276b26e jmp 0x1276b252 */
  goto L_1276b252;
L_1276b270:;
  /* 1276b270 mov esp, ebp */
  ESP = (EBP);
  /* 1276b272 pop ebp */
  EBP = (pop32());
  /* 1276b273 ret  */
  ESPCHK(0x1276b200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b280 @ 0x1276b280 (770 bytes, 175 insns) */
void f_1276b280(void) {
  FTRACE(0x1276b280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276b280 push ebp */
  push32((uint32_t)(EBP));
  /* 1276b281 mov ebp, esp */
  EBP = (ESP);
  /* 1276b283 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b289 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1276b28f push eax */
  push32((uint32_t)(EAX));
  /* 1276b290 mov ecx, dword ptr [0x12791d44] */
  ECX = (r32((uint32_t)(0x12791d44)));
  /* 1276b296 push ecx */
  push32((uint32_t)(ECX));
  /* 1276b297 call dword ptr [0x12793304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793304))), 0x1276b29du);
  /* 1276b29d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b2a0 jne 0x1276b4b9 */
  if (!C.zf) goto L_1276b4b9;
  /* 1276b2a6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1276b2b0 jmp 0x1276b2c1 */
  goto L_1276b2c1;
L_1276b2b2:;
  /* 1276b2b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b2b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b2bb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1276b2c1:;
  /* 1276b2c1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b2cb jae 0x1276b2e2 */
  if (!C.cf) goto L_1276b2e2;
  /* 1276b2cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b2d3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1276b2d9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1276b2e0 jmp 0x1276b2b2 */
  goto L_1276b2b2;
L_1276b2e2:;
  /* 1276b2e2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1276b2e9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1276b2ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276b2f2 jmp 0x1276b2fd */
  goto L_1276b2fd;
L_1276b2f4:;
  /* 1276b2f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276b2f7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b2fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1276b2fd:;
  /* 1276b2fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276b300 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b302 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1276b304 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276b306 je 0x1276b348 */
  if (C.zf) goto L_1276b348;
  /* 1276b308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276b30b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276b30d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1276b30f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1276b315 jmp 0x1276b326 */
  goto L_1276b326;
L_1276b317:;
  /* 1276b317 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b31d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b320 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1276b326:;
  /* 1276b326 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276b329 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276b32b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1276b32e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b334 ja 0x1276b346 */
  if ((!C.cf&&!C.zf)) goto L_1276b346;
  /* 1276b336 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b33c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1276b344 jmp 0x1276b317 */
  goto L_1276b317;
L_1276b346:;
  /* 1276b346 jmp 0x1276b2f4 */
  goto L_1276b2f4;
L_1276b348:;
  /* 1276b348 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276b34a mov eax, dword ptr [0x12791fe4] */
  EAX = (r32((uint32_t)(0x12791fe4)));
  /* 1276b34f push eax */
  push32((uint32_t)(EAX));
  /* 1276b350 mov ecx, dword ptr [0x12791d44] */
  ECX = (r32((uint32_t)(0x12791d44)));
  /* 1276b356 push ecx */
  push32((uint32_t)(ECX));
  /* 1276b357 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1276b35d push edx */
  push32((uint32_t)(EDX));
  /* 1276b35e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1276b363 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1276b369 push eax */
  push32((uint32_t)(EAX));
  /* 1276b36a push 1 */
  push32((uint32_t)(0x1u));
  /* 1276b36c call 0x1276cf30 */
  push32(0x1276b371u); f_1276cf30();
  /* 1276b371 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b374 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276b376 mov ecx, dword ptr [0x12791d44] */
  ECX = (r32((uint32_t)(0x12791d44)));
  /* 1276b37c push ecx */
  push32((uint32_t)(ECX));
  /* 1276b37d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1276b382 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1276b388 push edx */
  push32((uint32_t)(EDX));
  /* 1276b389 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1276b38e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1276b394 push eax */
  push32((uint32_t)(EAX));
  /* 1276b395 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1276b39a mov ecx, dword ptr [0x12791fe4] */
  ECX = (r32((uint32_t)(0x12791fe4)));
  /* 1276b3a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1276b3a1 call 0x1276d0f0 */
  push32(0x1276b3a6u); f_1276d0f0();
  /* 1276b3a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b3a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276b3ab mov edx, dword ptr [0x12791d44] */
  EDX = (r32((uint32_t)(0x12791d44)));
  /* 1276b3b1 push edx */
  push32((uint32_t)(EDX));
  /* 1276b3b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1276b3b7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1276b3bd push eax */
  push32((uint32_t)(EAX));
  /* 1276b3be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1276b3c3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1276b3c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1276b3ca push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1276b3cf mov edx, dword ptr [0x12791fe4] */
  EDX = (r32((uint32_t)(0x12791fe4)));
  /* 1276b3d5 push edx */
  push32((uint32_t)(EDX));
  /* 1276b3d6 call 0x1276d0f0 */
  push32(0x1276b3dbu); f_1276d0f0();
  /* 1276b3db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b3de mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1276b3e8 jmp 0x1276b3f9 */
  goto L_1276b3f9;
L_1276b3ea:;
  /* 1276b3ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b3f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b3f3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1276b3f9:;
  /* 1276b3f9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b403 jae 0x1276b4b4 */
  if (!C.cf) goto L_1276b4b4;
  /* 1276b409 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b40f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b411 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1276b419 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1276b41c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276b41e je 0x1276b456 */
  if (C.zf) goto L_1276b456;
  /* 1276b420 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b426 mov cl, byte ptr [eax + 0x12791ee1] */
  CL = (r8((uint32_t)(EAX + 0x12791ee1)));
  /* 1276b42c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1276b42f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b435 mov byte ptr [edx + 0x12791ee1], cl */
  w8((uint32_t)(EDX + 0x12791ee1), (CL));
  /* 1276b43b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b441 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b447 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1276b44e mov byte ptr [eax + 0x12791de0], dl */
  w8((uint32_t)(EAX + 0x12791de0), (DL));
  /* 1276b454 jmp 0x1276b4af */
  goto L_1276b4af;
L_1276b456:;
  /* 1276b456 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b45c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276b45e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1276b466 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1276b469 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276b46b je 0x1276b4a2 */
  if (C.zf) goto L_1276b4a2;
  /* 1276b46d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b473 mov al, byte ptr [edx + 0x12791ee1] */
  AL = (r8((uint32_t)(EDX + 0x12791ee1)));
  /* 1276b479 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1276b47b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b481 mov byte ptr [ecx + 0x12791ee1], al */
  w8((uint32_t)(ECX + 0x12791ee1), (AL));
  /* 1276b487 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b48d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b493 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1276b49a mov byte ptr [edx + 0x12791de0], cl */
  w8((uint32_t)(EDX + 0x12791de0), (CL));
  /* 1276b4a0 jmp 0x1276b4af */
  goto L_1276b4af;
L_1276b4a2:;
  /* 1276b4a2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b4a8 mov byte ptr [edx + 0x12791de0], 0 */
  w8((uint32_t)(EDX + 0x12791de0), (0x0u));
L_1276b4af:;
  /* 1276b4af jmp 0x1276b3ea */
  goto L_1276b3ea;
L_1276b4b4:;
  /* 1276b4b4 jmp 0x1276b57e */
  goto L_1276b57e;
L_1276b4b9:;
  /* 1276b4b9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1276b4c3 jmp 0x1276b4d4 */
  goto L_1276b4d4;
L_1276b4c5:;
  /* 1276b4c5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b4cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b4ce mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1276b4d4:;
  /* 1276b4d4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b4de jae 0x1276b57e */
  if (!C.cf) goto L_1276b57e;
  /* 1276b4e4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b4eb jb 0x1276b528 */
  if (C.cf) goto L_1276b528;
  /* 1276b4ed cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b4f4 ja 0x1276b528 */
  if ((!C.cf&&!C.zf)) goto L_1276b528;
  /* 1276b4f6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b4fc mov dl, byte ptr [ecx + 0x12791ee1] */
  DL = (r8((uint32_t)(ECX + 0x12791ee1)));
  /* 1276b502 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1276b505 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b50b mov byte ptr [eax + 0x12791ee1], dl */
  w8((uint32_t)(EAX + 0x12791ee1), (DL));
  /* 1276b511 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b517 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b51a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b520 mov byte ptr [edx + 0x12791de0], cl */
  w8((uint32_t)(EDX + 0x12791de0), (CL));
  /* 1276b526 jmp 0x1276b579 */
  goto L_1276b579;
L_1276b528:;
  /* 1276b528 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b52f jb 0x1276b56c */
  if (C.cf) goto L_1276b56c;
  /* 1276b531 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b538 ja 0x1276b56c */
  if ((!C.cf&&!C.zf)) goto L_1276b56c;
  /* 1276b53a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b540 mov cl, byte ptr [eax + 0x12791ee1] */
  CL = (r8((uint32_t)(EAX + 0x12791ee1)));
  /* 1276b546 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1276b549 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b54f mov byte ptr [edx + 0x12791ee1], cl */
  w8((uint32_t)(EDX + 0x12791ee1), (CL));
  /* 1276b555 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b55b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b55e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b564 mov byte ptr [ecx + 0x12791de0], al */
  w8((uint32_t)(ECX + 0x12791de0), (AL));
  /* 1276b56a jmp 0x1276b579 */
  goto L_1276b579;
L_1276b56c:;
  /* 1276b56c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1276b572 mov byte ptr [edx + 0x12791de0], 0 */
  w8((uint32_t)(EDX + 0x12791de0), (0x0u));
L_1276b579:;
  /* 1276b579 jmp 0x1276b4c5 */
  goto L_1276b4c5;
L_1276b57e:;
  /* 1276b57e mov esp, ebp */
  ESP = (EBP);
  /* 1276b580 pop ebp */
  EBP = (pop32());
  /* 1276b581 ret  */
  ESPCHK(0x1276b280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b590 @ 0x1276b590 (23 bytes, 9 insns) */
void f_1276b590(void) {
  FTRACE(0x1276b590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276b590 push ebp */
  push32((uint32_t)(EBP));
  /* 1276b591 mov ebp, esp */
  EBP = (ESP);
  /* 1276b593 cmp dword ptr [0x12791dcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12791dcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b59a je 0x1276b5a3 */
  if (C.zf) goto L_1276b5a3;
  /* 1276b59c mov eax, dword ptr [0x12791d44] */
  EAX = (r32((uint32_t)(0x12791d44)));
  /* 1276b5a1 jmp 0x1276b5a5 */
  goto L_1276b5a5;
L_1276b5a3:;
  /* 1276b5a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276b5a5:;
  /* 1276b5a5 pop ebp */
  EBP = (pop32());
  /* 1276b5a6 ret  */
  ESPCHK(0x1276b590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b0 @ 0x1276b5b0 (34 bytes, 10 insns) */
void f_1276b5b0(void) {
  FTRACE(0x1276b5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276b5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276b5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1276b5b3 cmp dword ptr [0x12792190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12792190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b5ba jne 0x1276b5d0 */
  if (!C.zf) goto L_1276b5d0;
  /* 1276b5bc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1276b5be call 0x1276add0 */
  push32(0x1276b5c3u); f_1276add0();
  /* 1276b5c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b5c6 mov dword ptr [0x12792190], 1 */
  w32((uint32_t)(0x12792190), (0x1u));
L_1276b5d0:;
  /* 1276b5d0 pop ebp */
  EBP = (pop32());
  /* 1276b5d1 ret  */
  ESPCHK(0x1276b5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5e0 @ 0x1276b5e0 (664 bytes, 262 insns) [15 switch table(s)] */
void f_1276b5e0(void) {
  FTRACE(0x1276b5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276b5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276b5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1276b5e3 push edi */
  push32((uint32_t)(EDI));
  /* 1276b5e4 push esi */
  push32((uint32_t)(ESI));
  /* 1276b5e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1276b5e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276b5eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1276b5ee mov eax, ecx */
  EAX = (ECX);
  /* 1276b5f0 mov edx, ecx */
  EDX = (ECX);
  /* 1276b5f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b5f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b5f6 jbe 0x1276b600 */
  if ((C.cf||C.zf)) goto L_1276b600;
  /* 1276b5f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b5fa jb 0x1276b778 */
  if (C.cf) goto L_1276b778;
L_1276b600:;
  /* 1276b600 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1276b606 jne 0x1276b61c */
  if (!C.zf) goto L_1276b61c;
  /* 1276b608 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276b60b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1276b60e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b611 jb 0x1276b63c */
  if (C.cf) goto L_1276b63c;
  /* 1276b613 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276b615 jmp dword ptr [edx*4 + 0x1276b728] */
  switch (EDX) {
    case 0: goto L_1276b738;
    case 1: goto L_1276b740;
    case 2: goto L_1276b74c;
    case 3: goto L_1276b760;
    default: x86_unimpl("switch@0x1276b615 out of table"); return;
  }
L_1276b61c:;
  /* 1276b61c mov eax, edi */
  EAX = (EDI);
  /* 1276b61e mov edx, 3 */
  EDX = (0x3u);
  /* 1276b623 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b626 jb 0x1276b634 */
  if (C.cf) goto L_1276b634;
  /* 1276b628 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1276b62b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b62d jmp dword ptr [eax*4 + 0x1276b640] */
  switch (EAX) {
    case 1: goto L_1276b650;
    case 2: goto L_1276b67c;
    case 3: goto L_1276b6a0;
    default: x86_unimpl("switch@0x1276b62d out of table"); return;
  }
L_1276b634:;
  /* 1276b634 jmp dword ptr [ecx*4 + 0x1276b738] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1276b738)))); return;
  /* 1276b63b nop  */
  /* nop */
L_1276b63c:;
  /* 1276b63c jmp dword ptr [ecx*4 + 0x1276b6bc] */
  switch (ECX) {
    case 0: goto L_1276b71f;
    case 1: goto L_1276b70c;
    case 2: goto L_1276b704;
    case 3: goto L_1276b6fc;
    case 4: goto L_1276b6f4;
    case 5: goto L_1276b6ec;
    case 6: goto L_1276b6e4;
    case 7: goto L_1276b6dc;
    default: x86_unimpl("switch@0x1276b63c out of table"); return;
  }
  /* 1276b643 nop  */
  /* nop */
L_1276b650:;
  /* 1276b650 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b652 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276b654 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276b656 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276b659 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276b65c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276b65f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276b662 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276b665 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b668 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b66b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b66e jb 0x1276b63c */
  if (C.cf) goto L_1276b63c;
  /* 1276b670 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276b672 jmp dword ptr [edx*4 + 0x1276b728] */
  switch (EDX) {
    case 0: goto L_1276b738;
    case 1: goto L_1276b740;
    case 2: goto L_1276b74c;
    case 3: goto L_1276b760;
    default: x86_unimpl("switch@0x1276b672 out of table"); return;
  }
  /* 1276b679 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276b67c:;
  /* 1276b67c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b67e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276b680 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276b682 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276b685 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276b688 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276b68b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b68e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b691 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b694 jb 0x1276b63c */
  if (C.cf) goto L_1276b63c;
  /* 1276b696 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276b698 jmp dword ptr [edx*4 + 0x1276b728] */
  switch (EDX) {
    case 0: goto L_1276b738;
    case 1: goto L_1276b740;
    case 2: goto L_1276b74c;
    case 3: goto L_1276b760;
    default: x86_unimpl("switch@0x1276b698 out of table"); return;
  }
  /* 1276b69f nop  */
  /* nop */
L_1276b6a0:;
  /* 1276b6a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b6a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276b6a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276b6a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1276b6a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276b6aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1276b6ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b6ae jb 0x1276b63c */
  if (C.cf) goto L_1276b63c;
  /* 1276b6b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276b6b2 jmp dword ptr [edx*4 + 0x1276b728] */
  switch (EDX) {
    case 0: goto L_1276b738;
    case 1: goto L_1276b740;
    case 2: goto L_1276b74c;
    case 3: goto L_1276b760;
    default: x86_unimpl("switch@0x1276b6b2 out of table"); return;
  }
  /* 1276b6b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276b6dc:;
  /* 1276b6dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1276b6e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1276b6e4:;
  /* 1276b6e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1276b6e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1276b6ec:;
  /* 1276b6ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1276b6f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1276b6f4:;
  /* 1276b6f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1276b6f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1276b6fc:;
  /* 1276b6fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1276b700 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1276b704:;
  /* 1276b704 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1276b708 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1276b70c:;
  /* 1276b70c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1276b710 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1276b714 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1276b71b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b71d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1276b71f:;
  /* 1276b71f jmp dword ptr [edx*4 + 0x1276b728] */
  switch (EDX) {
    case 0: goto L_1276b738;
    case 1: goto L_1276b740;
    case 2: goto L_1276b74c;
    case 3: goto L_1276b760;
    default: x86_unimpl("switch@0x1276b71f out of table"); return;
  }
  /* 1276b726 mov edi, edi */
  EDI = (EDI);
L_1276b738:;
  /* 1276b738 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276b73b pop esi */
  ESI = (pop32());
  /* 1276b73c pop edi */
  EDI = (pop32());
  /* 1276b73d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276b73e ret  */
  ESPCHK(0x1276b5e0u, _esp0);
  ESP += 4; return;
  /* 1276b73f nop  */
  /* nop */
L_1276b740:;
  /* 1276b740 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276b742 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276b744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276b747 pop esi */
  ESI = (pop32());
  /* 1276b748 pop edi */
  EDI = (pop32());
  /* 1276b749 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276b74a ret  */
  ESPCHK(0x1276b5e0u, _esp0);
  ESP += 4; return;
  /* 1276b74b nop  */
  /* nop */
L_1276b74c:;
  /* 1276b74c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276b74e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276b750 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276b753 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276b756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276b759 pop esi */
  ESI = (pop32());
  /* 1276b75a pop edi */
  EDI = (pop32());
  /* 1276b75b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276b75c ret  */
  ESPCHK(0x1276b5e0u, _esp0);
  ESP += 4; return;
  /* 1276b75d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276b760:;
  /* 1276b760 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276b762 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276b764 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276b767 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276b76a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276b76d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276b770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276b773 pop esi */
  ESI = (pop32());
  /* 1276b774 pop edi */
  EDI = (pop32());
  /* 1276b775 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276b776 ret  */
  ESPCHK(0x1276b5e0u, _esp0);
  ESP += 4; return;
  /* 1276b777 nop  */
  /* nop */
L_1276b778:;
  /* 1276b778 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1276b77c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1276b780 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1276b786 jne 0x1276b7ac */
  if (!C.zf) goto L_1276b7ac;
  /* 1276b788 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276b78b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1276b78e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b791 jb 0x1276b7a0 */
  if (C.cf) goto L_1276b7a0;
  /* 1276b793 std  */
  C.df=1;
  /* 1276b794 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276b796 cld  */
  C.df=0;
  /* 1276b797 jmp dword ptr [edx*4 + 0x1276b8c0] */
  switch (EDX) {
    case 0: goto L_1276b8d0;
    case 1: goto L_1276b8d8;
    case 2: goto L_1276b8e8;
    case 3: goto L_1276b8fc;
    default: x86_unimpl("switch@0x1276b797 out of table"); return;
  }
  /* 1276b79e mov edi, edi */
  EDI = (EDI);
L_1276b7a0:;
  /* 1276b7a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1276b7a2 jmp dword ptr [ecx*4 + 0x1276b870] */
  switch (ECX) {
    case 0: goto L_1276b8b7;
    default: x86_unimpl("switch@0x1276b7a2 out of table"); return;
  }
  /* 1276b7a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276b7ac:;
  /* 1276b7ac mov eax, edi */
  EAX = (EDI);
  /* 1276b7ae mov edx, 3 */
  EDX = (0x3u);
  /* 1276b7b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b7b6 jb 0x1276b7c4 */
  if (C.cf) goto L_1276b7c4;
  /* 1276b7b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1276b7bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b7bd jmp dword ptr [eax*4 + 0x1276b7c8] */
  switch (EAX) {
    case 1: goto L_1276b7d8;
    case 2: goto L_1276b7f8;
    case 3: goto L_1276b820;
    default: x86_unimpl("switch@0x1276b7bd out of table"); return;
  }
L_1276b7c4:;
  /* 1276b7c4 jmp dword ptr [ecx*4 + 0x1276b8c0] */
  switch (ECX) {
    case 0: goto L_1276b8d0;
    case 1: goto L_1276b8d8;
    case 2: goto L_1276b8e8;
    case 3: goto L_1276b8fc;
    default: x86_unimpl("switch@0x1276b7c4 out of table"); return;
  }
  /* 1276b7cb nop  */
  /* nop */
L_1276b7d8:;
  /* 1276b7d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276b7db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b7dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276b7e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1276b7e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276b7e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1276b7e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b7e8 jb 0x1276b7a0 */
  if (C.cf) goto L_1276b7a0;
  /* 1276b7ea std  */
  C.df=1;
  /* 1276b7eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276b7ed cld  */
  C.df=0;
  /* 1276b7ee jmp dword ptr [edx*4 + 0x1276b8c0] */
  switch (EDX) {
    case 0: goto L_1276b8d0;
    case 1: goto L_1276b8d8;
    case 2: goto L_1276b8e8;
    case 3: goto L_1276b8fc;
    default: x86_unimpl("switch@0x1276b7ee out of table"); return;
  }
  /* 1276b7f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276b7f8:;
  /* 1276b7f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276b7fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b7fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276b800 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276b803 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276b806 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276b809 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b80c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b80f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1276b812:;
  /* 1276b812 jb 0x1276b7a0 */
  if (C.cf) goto L_1276b7a0;
  /* 1276b814 std  */
  C.df=1;
  /* 1276b815 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276b817 cld  */
  C.df=0;
  /* 1276b818 jmp dword ptr [edx*4 + 0x1276b8c0] */
  switch (EDX) {
    case 0: goto L_1276b8d0;
    case 1: goto L_1276b8d8;
    case 2: goto L_1276b8e8;
    case 3: goto L_1276b8fc;
    default: x86_unimpl("switch@0x1276b818 out of table"); return;
  }
  /* 1276b81f nop  */
  /* nop */
L_1276b820:;
  /* 1276b820 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276b823 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b825 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276b828 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276b82b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276b82e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276b831 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276b834 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276b837 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b83a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b83d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b840 jb 0x1276b7a0 */
  if (C.cf) goto L_1276b7a0;
  /* 1276b846 std  */
  C.df=1;
  /* 1276b847 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276b849 cld  */
  C.df=0;
  /* 1276b84a jmp dword ptr [edx*4 + 0x1276b8c0] */
  switch (EDX) {
    case 0: goto L_1276b8d0;
    case 1: goto L_1276b8d8;
    case 2: goto L_1276b8e8;
    case 3: goto L_1276b8fc;
    default: x86_unimpl("switch@0x1276b84a out of table"); return;
  }
  /* 1276b851 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1276b854 je 0x1276b80e */
  if (C.zf) goto L_1276b80e;
  /* 1276b856 jbe 0x1276b86a */
  if ((C.cf||C.zf)) goto L_1276b86a;
  /* 1276b858 jl 0x1276b812 */
  if ((C.sf!=C.of)) goto L_1276b812;
  /* 1276b85a jbe 0x1276b86e */
  if ((C.cf||C.zf)) goto L_1276b86e;
  /* 1276b85c test byte ptr [eax - 0x4773ed8a], bh */
  { uint32_t _r=(r8((uint32_t)(EAX + -0x4773ed8a)))&(C.b.b.h); fl_logic(_r,8); }
  /* 1276b862 jbe 0x1276b876 */
  if ((C.cf||C.zf)) goto L_1276b876;
  /* 1276b864 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1276b865 mov eax, 0xb89c1276 */
  EAX = (0xb89c1276u);
L_1276b86a:;
  /* 1276b86a jbe 0x1276b87e */
  if ((C.cf||C.zf)) goto L_1276b87e;
  /* 1276b86c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
L_1276b86e:;
  /* 1276b86e jbe 0x1276b882 */
  if ((C.cf||C.zf)) goto L_1276b882;
  /* 1276b874 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1276b878 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1276b87c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1276b880 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1276b884 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1276b888 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1276b88c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1276b890 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1276b894 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1276b898 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1276b89c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1276b8a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1276b8a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1276b8a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1276b8ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1276b8b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b8b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1276b8b7:;
  /* 1276b8b7 jmp dword ptr [edx*4 + 0x1276b8c0] */
  switch (EDX) {
    case 0: goto L_1276b8d0;
    case 1: goto L_1276b8d8;
    case 2: goto L_1276b8e8;
    case 3: goto L_1276b8fc;
    default: x86_unimpl("switch@0x1276b8b7 out of table"); return;
  }
  /* 1276b8be mov edi, edi */
  EDI = (EDI);
L_1276b8d0:;
  /* 1276b8d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276b8d3 pop esi */
  ESI = (pop32());
  /* 1276b8d4 pop edi */
  EDI = (pop32());
  /* 1276b8d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276b8d6 ret  */
  ESPCHK(0x1276b5e0u, _esp0);
  ESP += 4; return;
  /* 1276b8d7 nop  */
  /* nop */
L_1276b8d8:;
  /* 1276b8d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276b8db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276b8de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276b8e1 pop esi */
  ESI = (pop32());
  /* 1276b8e2 pop edi */
  EDI = (pop32());
  /* 1276b8e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276b8e4 ret  */
  ESPCHK(0x1276b5e0u, _esp0);
  ESP += 4; return;
  /* 1276b8e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276b8e8:;
  /* 1276b8e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276b8eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276b8ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276b8f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276b8f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276b8f7 pop esi */
  ESI = (pop32());
  /* 1276b8f8 pop edi */
  EDI = (pop32());
  /* 1276b8f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276b8fa ret  */
  ESPCHK(0x1276b5e0u, _esp0);
  ESP += 4; return;
  /* 1276b8fb nop  */
  /* nop */
L_1276b8fc:;
  /* 1276b8fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276b8ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276b902 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276b905 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276b908 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276b90b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276b90e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276b911 pop esi */
  ESI = (pop32());
  /* 1276b912 pop edi */
  EDI = (pop32());
  /* 1276b913 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276b914 ret  */
  ESPCHK(0x1276b5e0u, _esp0);
  ESP += 4; return;
L_1276b80e: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1276b80e (unresolved jump table)"); return;
L_1276b876: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1276b876 (unresolved jump table)"); return;
L_1276b87e: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1276b87e (unresolved jump table)"); return;
L_1276b882: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1276b882 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x1276b920 (104 bytes, 43 insns) */
void f_1276b920(void) {
  FTRACE(0x1276b920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276b920 push ebx */
  push32((uint32_t)(EBX));
  /* 1276b921 push esi */
  push32((uint32_t)(ESI));
  /* 1276b922 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1276b926 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276b928 jne 0x1276b942 */
  if (!C.zf) goto L_1276b942;
  /* 1276b92a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1276b92e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1276b932 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b934 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1276b936 mov ebx, eax */
  EBX = (EAX);
  /* 1276b938 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1276b93c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1276b93e mov edx, ebx */
  EDX = (EBX);
  /* 1276b940 jmp 0x1276b983 */
  goto L_1276b983;
L_1276b942:;
  /* 1276b942 mov ecx, eax */
  ECX = (EAX);
  /* 1276b944 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1276b948 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1276b94c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1276b950:;
  /* 1276b950 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1276b952 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1276b954 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1276b956 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1276b958 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276b95a jne 0x1276b950 */
  if (!C.zf) goto L_1276b950;
  /* 1276b95c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1276b95e mov esi, eax */
  ESI = (EAX);
  /* 1276b960 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1276b964 mov ecx, eax */
  ECX = (EAX);
  /* 1276b966 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1276b96a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1276b96c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b96e jb 0x1276b97e */
  if (C.cf) goto L_1276b97e;
  /* 1276b970 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b974 ja 0x1276b97e */
  if ((!C.cf&&!C.zf)) goto L_1276b97e;
  /* 1276b976 jb 0x1276b97f */
  if (C.cf) goto L_1276b97f;
  /* 1276b978 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b97c jbe 0x1276b97f */
  if ((C.cf||C.zf)) goto L_1276b97f;
L_1276b97e:;
  /* 1276b97e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1276b97f:;
  /* 1276b97f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b981 mov eax, esi */
  EAX = (ESI);
L_1276b983:;
  /* 1276b983 pop esi */
  ESI = (pop32());
  /* 1276b984 pop ebx */
  EBX = (pop32());
  /* 1276b985 ret 0x10 */
  ESPCHK(0x1276b920u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1276b990 (117 bytes, 44 insns) */
void f_1276b990(void) {
  FTRACE(0x1276b990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276b990 push ebx */
  push32((uint32_t)(EBX));
  /* 1276b991 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1276b995 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276b997 jne 0x1276b9b1 */
  if (!C.zf) goto L_1276b9b1;
  /* 1276b999 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1276b99d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1276b9a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b9a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1276b9a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1276b9a9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1276b9ab mov eax, edx */
  EAX = (EDX);
  /* 1276b9ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276b9af jmp 0x1276ba01 */
  goto L_1276ba01;
L_1276b9b1:;
  /* 1276b9b1 mov ecx, eax */
  ECX = (EAX);
  /* 1276b9b3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1276b9b7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1276b9bb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1276b9bf:;
  /* 1276b9bf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1276b9c1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1276b9c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1276b9c5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1276b9c7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276b9c9 jne 0x1276b9bf */
  if (!C.zf) goto L_1276b9bf;
  /* 1276b9cb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1276b9cd mov ecx, eax */
  ECX = (EAX);
  /* 1276b9cf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1276b9d3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1276b9d4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1276b9d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276b9da jb 0x1276b9ea */
  if (C.cf) goto L_1276b9ea;
  /* 1276b9dc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b9e0 ja 0x1276b9ea */
  if ((!C.cf&&!C.zf)) goto L_1276b9ea;
  /* 1276b9e2 jb 0x1276b9f2 */
  if (C.cf) goto L_1276b9f2;
  /* 1276b9e4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276b9e8 jbe 0x1276b9f2 */
  if ((C.cf||C.zf)) goto L_1276b9f2;
L_1276b9ea:;
  /* 1276b9ea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b9ee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1276b9f2:;
  /* 1276b9f2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b9f6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276b9fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1276b9fc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1276b9fe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1276ba01:;
  /* 1276ba01 pop ebx */
  EBX = (pop32());
  /* 1276ba02 ret 0x10 */
  ESPCHK(0x1276b990u, _esp0);
  ESP += 20; return;
}

/* FUN_1000ba10 @ 0x1276ba10 (628 bytes, 214 insns) */
void f_1276ba10(void) {
  FTRACE(0x1276ba10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276ba10 push ebp */
  push32((uint32_t)(EBP));
  /* 1276ba11 mov ebp, esp */
  EBP = (ESP);
  /* 1276ba13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ba16 push ebx */
  push32((uint32_t)(EBX));
  /* 1276ba17 push esi */
  push32((uint32_t)(ESI));
  /* 1276ba18 push edi */
  push32((uint32_t)(EDI));
L_1276ba19:;
  /* 1276ba19 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ba1d jne 0x1276ba3d */
  if (!C.zf) goto L_1276ba3d;
  /* 1276ba1f push 0x1278c1ac */
  push32((uint32_t)(0x1278c1acu));
  /* 1276ba24 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276ba26 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1276ba28 push 0x1278c1a0 */
  push32((uint32_t)(0x1278c1a0u));
  /* 1276ba2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ba2f call 0x12763dc0 */
  push32(0x1276ba34u); f_12763dc0();
  /* 1276ba34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ba37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ba3a jne 0x1276ba3d */
  if (!C.zf) goto L_1276ba3d;
  /* 1276ba3c int3  */
  x86_unimpl("int3 @ 0x1276ba3c");
L_1276ba3d:;
  /* 1276ba3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ba3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ba41 jne 0x1276ba19 */
  if (!C.zf) goto L_1276ba19;
  /* 1276ba43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276ba46 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1276ba49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ba4c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1276ba4f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1276ba52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ba55 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276ba58 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1276ba5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276ba60 je 0x1276ba6f */
  if (C.zf) goto L_1276ba6f;
  /* 1276ba62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ba65 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1276ba68 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1276ba6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276ba6d je 0x1276ba85 */
  if (C.zf) goto L_1276ba85;
L_1276ba6f:;
  /* 1276ba6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ba72 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1276ba75 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1276ba77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ba7a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1276ba7d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276ba80 jmp 0x1276bc7d */
  goto L_1276bc7d;
L_1276ba85:;
  /* 1276ba85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ba88 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1276ba8b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1276ba8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ba90 je 0x1276badc */
  if (C.zf) goto L_1276badc;
  /* 1276ba92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ba95 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1276ba9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ba9f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1276baa2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1276baa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276baa7 je 0x1276bac5 */
  if (C.zf) goto L_1276bac5;
  /* 1276baa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276baac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276baaf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1276bab2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1276bab4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bab7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276baba and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1276babd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bac0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1276bac3 jmp 0x1276badc */
  goto L_1276badc;
L_1276bac5:;
  /* 1276bac5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bac8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276bacb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1276bace mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bad1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1276bad4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276bad7 jmp 0x1276bc7d */
  goto L_1276bc7d;
L_1276badc:;
  /* 1276badc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276badf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276bae2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1276bae5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bae8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1276baeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276baee mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276baf1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1276baf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276baf7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1276bafa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bafd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1276bb04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276bb0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276bb0e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1276bb11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bb14 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1276bb17 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1276bb1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276bb1f jne 0x1276bb4f */
  if (!C.zf) goto L_1276bb4f;
  /* 1276bb21 cmp dword ptr [ebp - 8], 0x1278f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1278f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bb28 je 0x1276bb33 */
  if (C.zf) goto L_1276bb33;
  /* 1276bb2a cmp dword ptr [ebp - 8], 0x1278f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1278f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bb31 jne 0x1276bb43 */
  if (!C.zf) goto L_1276bb43;
L_1276bb33:;
  /* 1276bb33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276bb36 push edx */
  push32((uint32_t)(EDX));
  /* 1276bb37 call 0x1276d980 */
  push32(0x1276bb3cu); f_1276d980();
  /* 1276bb3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bb3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276bb41 jne 0x1276bb4f */
  if (!C.zf) goto L_1276bb4f;
L_1276bb43:;
  /* 1276bb43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bb46 push eax */
  push32((uint32_t)(EAX));
  /* 1276bb47 call 0x1276d8b0 */
  push32(0x1276bb4cu); f_1276d8b0();
  /* 1276bb4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276bb4f:;
  /* 1276bb4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bb52 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276bb55 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1276bb5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276bb5d je 0x1276bc3b */
  if (C.zf) goto L_1276bc3b;
L_1276bb63:;
  /* 1276bb63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bb66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bb69 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1276bb6b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276bb6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276bb70 jge 0x1276bb93 */
  if ((C.sf==C.of)) goto L_1276bb93;
  /* 1276bb72 push 0x1278c160 */
  push32((uint32_t)(0x1278c160u));
  /* 1276bb77 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276bb79 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1276bb7e push 0x1278c1a0 */
  push32((uint32_t)(0x1278c1a0u));
  /* 1276bb83 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276bb85 call 0x12763dc0 */
  push32(0x1276bb8au); f_12763dc0();
  /* 1276bb8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bb8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bb90 jne 0x1276bb93 */
  if (!C.zf) goto L_1276bb93;
  /* 1276bb92 int3  */
  x86_unimpl("int3 @ 0x1276bb92");
L_1276bb93:;
  /* 1276bb93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276bb95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276bb97 jne 0x1276bb63 */
  if (!C.zf) goto L_1276bb63;
  /* 1276bb99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bb9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bb9f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1276bba1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276bba4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276bba7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bbaa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1276bbad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bbb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bbb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1276bbb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bbb8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1276bbbb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276bbbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bbc1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1276bbc4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bbc8 jle 0x1276bbe6 */
  if ((C.zf||C.sf!=C.of)) goto L_1276bbe6;
  /* 1276bbca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276bbcd push ecx */
  push32((uint32_t)(ECX));
  /* 1276bbce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bbd1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1276bbd4 push eax */
  push32((uint32_t)(EAX));
  /* 1276bbd5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276bbd8 push ecx */
  push32((uint32_t)(ECX));
  /* 1276bbd9 call 0x1276d5a0 */
  push32(0x1276bbdeu); f_1276d5a0();
  /* 1276bbde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bbe1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1276bbe4 jmp 0x1276bc2e */
  goto L_1276bc2e;
L_1276bbe6:;
  /* 1276bbe6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bbea je 0x1276bc09 */
  if (C.zf) goto L_1276bc09;
  /* 1276bbec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276bbef sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1276bbf2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276bbf5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1276bbf8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276bbfb mov ecx, dword ptr [edx*4 + 0x12792040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12792040)));
  /* 1276bc02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bc04 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1276bc07 jmp 0x1276bc10 */
  goto L_1276bc10;
L_1276bc09:;
  /* 1276bc09 mov dword ptr [ebp - 0x14], 0x1278ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1278ea60u));
L_1276bc10:;
  /* 1276bc10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276bc13 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1276bc17 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1276bc1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276bc1c je 0x1276bc2e */
  if (C.zf) goto L_1276bc2e;
  /* 1276bc1e push 2 */
  push32((uint32_t)(0x2u));
  /* 1276bc20 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276bc22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276bc25 push ecx */
  push32((uint32_t)(ECX));
  /* 1276bc26 call 0x1276d450 */
  push32(0x1276bc2bu); f_1276d450();
  /* 1276bc2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276bc2e:;
  /* 1276bc2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bc31 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1276bc34 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1276bc37 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1276bc39 jmp 0x1276bc59 */
  goto L_1276bc59;
L_1276bc3b:;
  /* 1276bc3b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1276bc42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276bc45 push edx */
  push32((uint32_t)(EDX));
  /* 1276bc46 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1276bc49 push eax */
  push32((uint32_t)(EAX));
  /* 1276bc4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276bc4d push ecx */
  push32((uint32_t)(ECX));
  /* 1276bc4e call 0x1276d5a0 */
  push32(0x1276bc53u); f_1276d5a0();
  /* 1276bc53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bc56 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1276bc59:;
  /* 1276bc59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276bc5c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bc5f je 0x1276bc75 */
  if (C.zf) goto L_1276bc75;
  /* 1276bc61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bc64 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1276bc67 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1276bc6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bc6d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1276bc70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276bc73 jmp 0x1276bc7d */
  goto L_1276bc7d;
L_1276bc75:;
  /* 1276bc75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276bc78 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1276bc7d:;
  /* 1276bc7d pop edi */
  EDI = (pop32());
  /* 1276bc7e pop esi */
  ESI = (pop32());
  /* 1276bc7f pop ebx */
  EBX = (pop32());
  /* 1276bc80 mov esp, ebp */
  ESP = (EBP);
  /* 1276bc82 pop ebp */
  EBP = (pop32());
  /* 1276bc83 ret  */
  ESPCHK(0x1276ba10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc90 @ 0x1276bc90 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1276bc90(void) {
  FTRACE(0x1276bc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276bc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1276bc91 mov ebp, esp */
  EBP = (ESP);
  /* 1276bc93 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276bc99 push ebx */
  push32((uint32_t)(EBX));
  /* 1276bc9a push esi */
  push32((uint32_t)(ESI));
  /* 1276bc9b push edi */
  push32((uint32_t)(EDI));
  /* 1276bc9c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1276bca3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1276bcad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1276bcb4:;
  /* 1276bcb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276bcb7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1276bcb9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1276bcbc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bcc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276bcc3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bcc6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1276bcc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276bccb je 0x1276c8a7 */
  if (C.zf) goto L_1276c8a7;
  /* 1276bcd1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bcd8 jl 0x1276c8a7 */
  if ((C.sf!=C.of)) goto L_1276c8a7;
  /* 1276bcde movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bce2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bce5 jl 0x1276bd06 */
  if ((C.sf!=C.of)) goto L_1276bd06;
  /* 1276bce7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bceb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bcee jg 0x1276bd06 */
  if ((!C.zf&&C.sf==C.of)) goto L_1276bd06;
  /* 1276bcf0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bcf4 movsx ecx, byte ptr [eax + 0x1278c198] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1278c198))));
  /* 1276bcfb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1276bcfe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1276bd04 jmp 0x1276bd10 */
  goto L_1276bd10;
L_1276bd06:;
  /* 1276bd06 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1276bd10:;
  /* 1276bd10 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1276bd16 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1276bd19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276bd1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276bd1f movsx edx, byte ptr [ecx + eax*8 + 0x1278c1b8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1278c1b8))));
  /* 1276bd27 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1276bd2a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1276bd2d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276bd30 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1276bd36 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bd3d ja 0x1276c8a2 */
  if ((!C.cf&&!C.zf)) goto L_1276c8a2;
  /* 1276bd43 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1276bd49 jmp dword ptr [ecx*4 + 0x1276c8b4] */
  switch (ECX) {
    case 0: goto L_1276bd50;
    case 1: goto L_1276bdea;
    case 2: goto L_1276be2c;
    case 3: goto L_1276be9b;
    case 4: goto L_1276bef3;
    case 5: goto L_1276bf02;
    case 6: goto L_1276bf4e;
    case 7: goto L_1276bfe1;
    case 8: goto L_1276be78;
    case 9: goto L_1276be83;
    case 10: goto L_1276be6e;
    case 11: goto L_1276be63;
    case 12: goto L_1276be8e;
    case 13: goto L_1276be96;
    default: x86_unimpl("switch@0x1276bd49 out of table"); return;
  }
L_1276bd50:;
  /* 1276bd50 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1276bd57 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276bd5a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1276bd60 mov eax, dword ptr [0x1278ec98] */
  EAX = (r32((uint32_t)(0x1278ec98)));
  /* 1276bd65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276bd67 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1276bd6b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1276bd71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276bd73 je 0x1276bdcd */
  if (C.zf) goto L_1276bdcd;
  /* 1276bd75 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1276bd7b push edx */
  push32((uint32_t)(EDX));
  /* 1276bd7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276bd7f push eax */
  push32((uint32_t)(EAX));
  /* 1276bd80 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bd84 push ecx */
  push32((uint32_t)(ECX));
  /* 1276bd85 call 0x1276c9c0 */
  push32(0x1276bd8au); f_1276c9c0();
  /* 1276bd8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bd8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276bd90 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1276bd92 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1276bd95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276bd98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bd9b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1276bd9e:;
  /* 1276bd9e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bda2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276bda4 jne 0x1276bdc7 */
  if (!C.zf) goto L_1276bdc7;
  /* 1276bda6 push 0x1278c238 */
  push32((uint32_t)(0x1278c238u));
  /* 1276bdab push 0 */
  push32((uint32_t)(0x0u));
  /* 1276bdad push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1276bdb2 push 0x1278c22c */
  push32((uint32_t)(0x1278c22cu));
  /* 1276bdb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276bdb9 call 0x12763dc0 */
  push32(0x1276bdbeu); f_12763dc0();
  /* 1276bdbe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bdc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bdc4 jne 0x1276bdc7 */
  if (!C.zf) goto L_1276bdc7;
  /* 1276bdc6 int3  */
  x86_unimpl("int3 @ 0x1276bdc6");
L_1276bdc7:;
  /* 1276bdc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276bdc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276bdcb jne 0x1276bd9e */
  if (!C.zf) goto L_1276bd9e;
L_1276bdcd:;
  /* 1276bdcd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1276bdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276bdd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276bdd7 push edx */
  push32((uint32_t)(EDX));
  /* 1276bdd8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bddc push eax */
  push32((uint32_t)(EAX));
  /* 1276bddd call 0x1276c9c0 */
  push32(0x1276bde2u); f_1276c9c0();
  /* 1276bde2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bde5 jmp 0x1276c8a2 */
  goto L_1276c8a2;
L_1276bdea:;
  /* 1276bdea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1276bdf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276bdf4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1276bdfa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1276be00 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1276be06 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1276be0c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1276be0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276be16 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1276be20 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1276be27 jmp 0x1276c8a2 */
  goto L_1276c8a2;
L_1276be2c:;
  /* 1276be2c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276be30 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1276be36 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1276be3c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276be3f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1276be45 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276be4c ja 0x1276be96 */
  if ((!C.cf&&!C.zf)) goto L_1276be96;
  /* 1276be4e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1276be54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276be56 mov al, byte ptr [ecx + 0x1276c8ec] */
  AL = (r8((uint32_t)(ECX + 0x1276c8ec)));
  /* 1276be5c jmp dword ptr [eax*4 + 0x1276c8d4] */
  switch (EAX) {
    case 0: goto L_1276be78;
    case 1: goto L_1276be83;
    case 2: goto L_1276be6e;
    case 3: goto L_1276be63;
    case 4: goto L_1276be8e;
    case 5: goto L_1276be96;
    default: x86_unimpl("switch@0x1276be5c out of table"); return;
  }
L_1276be63:;
  /* 1276be63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276be66 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1276be69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276be6c jmp 0x1276be96 */
  goto L_1276be96;
L_1276be6e:;
  /* 1276be6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276be71 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1276be73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276be76 jmp 0x1276be96 */
  goto L_1276be96;
L_1276be78:;
  /* 1276be78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276be7b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1276be7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1276be81 jmp 0x1276be96 */
  goto L_1276be96;
L_1276be83:;
  /* 1276be83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276be86 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1276be89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276be8c jmp 0x1276be96 */
  goto L_1276be96;
L_1276be8e:;
  /* 1276be8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276be91 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1276be93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1276be96:;
  /* 1276be96 jmp 0x1276c8a2 */
  goto L_1276c8a2;
L_1276be9b:;
  /* 1276be9b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276be9f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bea2 jne 0x1276bed7 */
  if (!C.zf) goto L_1276bed7;
  /* 1276bea4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1276bea7 push edx */
  push32((uint32_t)(EDX));
  /* 1276bea8 call 0x1276cad0 */
  push32(0x1276beadu); f_1276cad0();
  /* 1276bead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276beb0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1276beb6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bebd jge 0x1276bed5 */
  if ((C.sf==C.of)) goto L_1276bed5;
  /* 1276bebf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276bec2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1276bec4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276bec7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1276becd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1276becf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1276bed5:;
  /* 1276bed5 jmp 0x1276beee */
  goto L_1276beee;
L_1276bed7:;
  /* 1276bed7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1276bedd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276bee0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bee4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1276bee8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1276beee:;
  /* 1276beee jmp 0x1276c8a2 */
  goto L_1276c8a2;
L_1276bef3:;
  /* 1276bef3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1276befd jmp 0x1276c8a2 */
  goto L_1276c8a2;
L_1276bf02:;
  /* 1276bf02 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bf06 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bf09 jne 0x1276bf32 */
  if (!C.zf) goto L_1276bf32;
  /* 1276bf0b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1276bf0e push eax */
  push32((uint32_t)(EAX));
  /* 1276bf0f call 0x1276cad0 */
  push32(0x1276bf14u); f_1276cad0();
  /* 1276bf14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bf17 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1276bf1d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bf24 jge 0x1276bf30 */
  if ((C.sf==C.of)) goto L_1276bf30;
  /* 1276bf26 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1276bf30:;
  /* 1276bf30 jmp 0x1276bf49 */
  goto L_1276bf49;
L_1276bf32:;
  /* 1276bf32 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1276bf38 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276bf3b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bf3f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1276bf43 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1276bf49:;
  /* 1276bf49 jmp 0x1276c8a2 */
  goto L_1276c8a2;
L_1276bf4e:;
  /* 1276bf4e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bf52 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1276bf58 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1276bf5e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276bf61 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1276bf67 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bf6e ja 0x1276bfdc */
  if ((!C.cf&&!C.zf)) goto L_1276bfdc;
  /* 1276bf70 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1276bf76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276bf78 mov al, byte ptr [ecx + 0x1276c911] */
  AL = (r8((uint32_t)(ECX + 0x1276c911)));
  /* 1276bf7e jmp dword ptr [eax*4 + 0x1276c8fd] */
  switch (EAX) {
    case 0: goto L_1276bf90;
    case 1: goto L_1276bfc9;
    case 2: goto L_1276bf85;
    case 3: goto L_1276bfd3;
    case 4: goto L_1276bfdc;
    default: x86_unimpl("switch@0x1276bf7e out of table"); return;
  }
L_1276bf85:;
  /* 1276bf85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276bf88 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1276bf8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276bf8e jmp 0x1276bfdc */
  goto L_1276bfdc;
L_1276bf90:;
  /* 1276bf90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276bf93 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1276bf96 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bf99 jne 0x1276bfbb */
  if (!C.zf) goto L_1276bfbb;
  /* 1276bf9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276bf9e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1276bfa2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276bfa5 jne 0x1276bfbb */
  if (!C.zf) goto L_1276bfbb;
  /* 1276bfa7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276bfaa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276bfad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1276bfb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276bfb3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1276bfb6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276bfb9 jmp 0x1276bfc7 */
  goto L_1276bfc7;
L_1276bfbb:;
  /* 1276bfbb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1276bfc2 jmp 0x1276bd50 */
  goto L_1276bd50;
L_1276bfc7:;
  /* 1276bfc7 jmp 0x1276bfdc */
  goto L_1276bfdc;
L_1276bfc9:;
  /* 1276bfc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276bfcc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1276bfce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276bfd1 jmp 0x1276bfdc */
  goto L_1276bfdc;
L_1276bfd3:;
  /* 1276bfd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276bfd6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1276bfd9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1276bfdc:;
  /* 1276bfdc jmp 0x1276c8a2 */
  goto L_1276c8a2;
L_1276bfe1:;
  /* 1276bfe1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276bfe5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1276bfeb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1276bff1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276bff4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1276bffa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c001 ja 0x1276c6c7 */
  if ((!C.cf&&!C.zf)) goto L_1276c6c7;
  /* 1276c007 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1276c00d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276c00f mov cl, byte ptr [edx + 0x1276c97c] */
  CL = (r8((uint32_t)(EDX + 0x1276c97c)));
  /* 1276c015 jmp dword ptr [ecx*4 + 0x1276c940] */
  switch (ECX) {
    case 0: goto L_1276c01c;
    case 1: goto L_1276c2b0;
    case 2: goto L_1276c140;
    case 3: goto L_1276c3e9;
    case 4: goto L_1276c0ab;
    case 5: goto L_1276c031;
    case 6: goto L_1276c3bb;
    case 7: goto L_1276c2c0;
    case 8: goto L_1276c265;
    case 9: goto L_1276c435;
    case 10: goto L_1276c3df;
    case 11: goto L_1276c156;
    case 12: goto L_1276c3d3;
    case 13: goto L_1276c3f5;
    case 14: goto L_1276c6c7;
    default: x86_unimpl("switch@0x1276c015 out of table"); return;
  }
L_1276c01c:;
  /* 1276c01c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c01f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c026 jne 0x1276c031 */
  if (!C.zf) goto L_1276c031;
  /* 1276c028 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c02b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1276c02e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1276c031:;
  /* 1276c031 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c034 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1276c03a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c03c je 0x1276c077 */
  if (C.zf) goto L_1276c077;
  /* 1276c03e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1276c041 push eax */
  push32((uint32_t)(EAX));
  /* 1276c042 call 0x1276cb10 */
  push32(0x1276c047u); f_1276cb10();
  /* 1276c047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c04a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1276c04e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1276c052 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c053 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1276c059 push edx */
  push32((uint32_t)(EDX));
  /* 1276c05a call 0x1276dbf0 */
  push32(0x1276c05fu); f_1276dbf0();
  /* 1276c05f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c062 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1276c065 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c069 jge 0x1276c075 */
  if ((C.sf==C.of)) goto L_1276c075;
  /* 1276c06b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1276c075:;
  /* 1276c075 jmp 0x1276c09d */
  goto L_1276c09d;
L_1276c077:;
  /* 1276c077 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1276c07a push eax */
  push32((uint32_t)(EAX));
  /* 1276c07b call 0x1276cad0 */
  push32(0x1276c080u); f_1276cad0();
  /* 1276c080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c083 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1276c08a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1276c090 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1276c096 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1276c09d:;
  /* 1276c09d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1276c0a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1276c0a6 jmp 0x1276c6c7 */
  goto L_1276c6c7;
L_1276c0ab:;
  /* 1276c0ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1276c0ae push eax */
  push32((uint32_t)(EAX));
  /* 1276c0af call 0x1276cad0 */
  push32(0x1276c0b4u); f_1276cad0();
  /* 1276c0b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c0b7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1276c0bd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c0c4 je 0x1276c0d2 */
  if (C.zf) goto L_1276c0d2;
  /* 1276c0c6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1276c0cc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c0d0 jne 0x1276c0ec */
  if (!C.zf) goto L_1276c0ec;
L_1276c0d2:;
  /* 1276c0d2 mov edx, dword ptr [0x1278efb0] */
  EDX = (r32((uint32_t)(0x1278efb0)));
  /* 1276c0d8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1276c0db mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c0de push eax */
  push32((uint32_t)(EAX));
  /* 1276c0df call 0x12767b30 */
  push32(0x1276c0e4u); f_12767b30();
  /* 1276c0e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c0e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1276c0ea jmp 0x1276c13b */
  goto L_1276c13b;
L_1276c0ec:;
  /* 1276c0ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c0ef and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1276c0f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276c0f7 je 0x1276c11c */
  if (C.zf) goto L_1276c11c;
  /* 1276c0f9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1276c0ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1276c102 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1276c105 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1276c10b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1276c10e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1276c110 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1276c113 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1276c11a jmp 0x1276c13b */
  goto L_1276c13b;
L_1276c11c:;
  /* 1276c11c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1276c123 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1276c129 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276c12c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1276c12f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1276c135 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1276c138 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1276c13b:;
  /* 1276c13b jmp 0x1276c6c7 */
  goto L_1276c6c7;
L_1276c140:;
  /* 1276c140 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c143 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1276c149 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276c14b jne 0x1276c156 */
  if (!C.zf) goto L_1276c156;
  /* 1276c14d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c150 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1276c153 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1276c156:;
  /* 1276c156 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c15d jne 0x1276c16b */
  if (!C.zf) goto L_1276c16b;
  /* 1276c15f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1276c169 jmp 0x1276c177 */
  goto L_1276c177;
L_1276c16b:;
  /* 1276c16b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1276c171 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1276c177:;
  /* 1276c177 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1276c17d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1276c183 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1276c186 push edx */
  push32((uint32_t)(EDX));
  /* 1276c187 call 0x1276cad0 */
  push32(0x1276c18cu); f_1276cad0();
  /* 1276c18c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c18f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1276c192 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c195 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c19a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c19c je 0x1276c206 */
  if (C.zf) goto L_1276c206;
  /* 1276c19e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c1a2 jne 0x1276c1ad */
  if (!C.zf) goto L_1276c1ad;
  /* 1276c1a4 mov ecx, dword ptr [0x1278efb4] */
  ECX = (r32((uint32_t)(0x1278efb4)));
  /* 1276c1aa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1276c1ad:;
  /* 1276c1ad mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1276c1b4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c1b7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1276c1bd:;
  /* 1276c1bd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1276c1c3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1276c1c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c1cc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1276c1d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c1d4 je 0x1276c1f6 */
  if (C.zf) goto L_1276c1f6;
  /* 1276c1d6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1276c1dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276c1de mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1276c1e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c1e3 je 0x1276c1f6 */
  if (C.zf) goto L_1276c1f6;
  /* 1276c1e5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1276c1eb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c1ee mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1276c1f4 jmp 0x1276c1bd */
  goto L_1276c1bd;
L_1276c1f6:;
  /* 1276c1f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1276c1fc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c1ff sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1276c201 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1276c204 jmp 0x1276c260 */
  goto L_1276c260;
L_1276c206:;
  /* 1276c206 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c20a jne 0x1276c214 */
  if (!C.zf) goto L_1276c214;
  /* 1276c20c mov eax, dword ptr [0x1278efb0] */
  EAX = (r32((uint32_t)(0x1278efb0)));
  /* 1276c211 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1276c214:;
  /* 1276c214 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c217 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1276c21d:;
  /* 1276c21d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1276c223 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1276c229 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c22c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1276c232 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c234 je 0x1276c254 */
  if (C.zf) goto L_1276c254;
  /* 1276c236 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1276c23c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1276c23f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c241 je 0x1276c254 */
  if (C.zf) goto L_1276c254;
  /* 1276c243 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1276c249 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c24c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1276c252 jmp 0x1276c21d */
  goto L_1276c21d;
L_1276c254:;
  /* 1276c254 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1276c25a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c25d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1276c260:;
  /* 1276c260 jmp 0x1276c6c7 */
  goto L_1276c6c7;
L_1276c265:;
  /* 1276c265 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1276c268 push edx */
  push32((uint32_t)(EDX));
  /* 1276c269 call 0x1276cad0 */
  push32(0x1276c26eu); f_1276cad0();
  /* 1276c26e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c271 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1276c277 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c27a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c27d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c27f je 0x1276c293 */
  if (C.zf) goto L_1276c293;
  /* 1276c281 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1276c287 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1276c28e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1276c291 jmp 0x1276c2a1 */
  goto L_1276c2a1;
L_1276c293:;
  /* 1276c293 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1276c299 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1276c29f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1276c2a1:;
  /* 1276c2a1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1276c2ab jmp 0x1276c6c7 */
  goto L_1276c6c7;
L_1276c2b0:;
  /* 1276c2b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1276c2b7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1276c2ba add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1276c2bd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1276c2c0:;
  /* 1276c2c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c2c3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1276c2c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276c2c8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1276c2ce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1276c2d1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c2d8 jge 0x1276c2e6 */
  if ((C.sf==C.of)) goto L_1276c2e6;
  /* 1276c2da mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1276c2e4 jmp 0x1276c302 */
  goto L_1276c302;
L_1276c2e6:;
  /* 1276c2e6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c2ed jne 0x1276c302 */
  if (!C.zf) goto L_1276c302;
  /* 1276c2ef movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276c2f3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c2f6 jne 0x1276c302 */
  if (!C.zf) goto L_1276c302;
  /* 1276c2f8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1276c302:;
  /* 1276c302 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276c305 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c308 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1276c30b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276c30e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c311 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276c313 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276c316 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1276c31c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1276c322 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276c325 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c326 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1276c32c push edx */
  push32((uint32_t)(EDX));
  /* 1276c32d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276c331 push eax */
  push32((uint32_t)(EAX));
  /* 1276c332 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c335 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c336 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1276c33c push edx */
  push32((uint32_t)(EDX));
  /* 1276c33d call dword ptr [0x1278f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1278f3a0))), 0x1276c343u);
  /* 1276c343 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c346 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c349 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c34e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c350 je 0x1276c368 */
  if (C.zf) goto L_1276c368;
  /* 1276c352 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c359 jne 0x1276c368 */
  if (!C.zf) goto L_1276c368;
  /* 1276c35b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c35e push ecx */
  push32((uint32_t)(ECX));
  /* 1276c35f call dword ptr [0x1278f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1278f3ac))), 0x1276c365u);
  /* 1276c365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276c368:;
  /* 1276c368 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1276c36c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c36f jne 0x1276c38a */
  if (!C.zf) goto L_1276c38a;
  /* 1276c371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c374 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c37b jne 0x1276c38a */
  if (!C.zf) goto L_1276c38a;
  /* 1276c37d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c380 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c381 call dword ptr [0x1278f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1278f3a4))), 0x1276c387u);
  /* 1276c387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276c38a:;
  /* 1276c38a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c38d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1276c390 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c393 jne 0x1276c3a7 */
  if (!C.zf) goto L_1276c3a7;
  /* 1276c395 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c398 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1276c39b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1276c39e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c3a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c3a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1276c3a7:;
  /* 1276c3a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c3aa push eax */
  push32((uint32_t)(EAX));
  /* 1276c3ab call 0x12767b30 */
  push32(0x1276c3b0u); f_12767b30();
  /* 1276c3b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c3b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1276c3b6 jmp 0x1276c6c7 */
  goto L_1276c6c7;
L_1276c3bb:;
  /* 1276c3bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c3be or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1276c3c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1276c3c4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1276c3ce jmp 0x1276c455 */
  goto L_1276c455;
L_1276c3d3:;
  /* 1276c3d3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1276c3dd jmp 0x1276c455 */
  goto L_1276c455;
L_1276c3df:;
  /* 1276c3df mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1276c3e9:;
  /* 1276c3e9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1276c3f3 jmp 0x1276c3ff */
  goto L_1276c3ff;
L_1276c3f5:;
  /* 1276c3f5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1276c3ff:;
  /* 1276c3ff mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1276c409 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c40c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1276c412 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c414 je 0x1276c433 */
  if (C.zf) goto L_1276c433;
  /* 1276c416 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1276c41d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1276c423 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c426 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1276c42c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1276c433:;
  /* 1276c433 jmp 0x1276c455 */
  goto L_1276c455;
L_1276c435:;
  /* 1276c435 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1276c43f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c442 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1276c448 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276c44a je 0x1276c455 */
  if (C.zf) goto L_1276c455;
  /* 1276c44c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c44f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1276c452 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1276c455:;
  /* 1276c455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c458 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c45d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c45f je 0x1276c47e */
  if (C.zf) goto L_1276c47e;
  /* 1276c461 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1276c464 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c465 call 0x1276caf0 */
  push32(0x1276c46au); f_1276caf0();
  /* 1276c46a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c46d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1276c473 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1276c479 jmp 0x1276c50f */
  goto L_1276c50f;
L_1276c47e:;
  /* 1276c47e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c481 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1276c484 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c486 je 0x1276c4d0 */
  if (C.zf) goto L_1276c4d0;
  /* 1276c488 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c48b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c490 je 0x1276c4b0 */
  if (C.zf) goto L_1276c4b0;
  /* 1276c492 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1276c495 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c496 call 0x1276cad0 */
  push32(0x1276c49bu); f_1276cad0();
  /* 1276c49b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c49e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1276c4a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1276c4a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1276c4a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1276c4ae jmp 0x1276c4ce */
  goto L_1276c4ce;
L_1276c4b0:;
  /* 1276c4b0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1276c4b3 push edx */
  push32((uint32_t)(EDX));
  /* 1276c4b4 call 0x1276cad0 */
  push32(0x1276c4b9u); f_1276cad0();
  /* 1276c4b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c4bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276c4c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1276c4c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1276c4c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1276c4ce:;
  /* 1276c4ce jmp 0x1276c50f */
  goto L_1276c50f;
L_1276c4d0:;
  /* 1276c4d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c4d3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c4d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c4d8 je 0x1276c4f5 */
  if (C.zf) goto L_1276c4f5;
  /* 1276c4da lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1276c4dd push ecx */
  push32((uint32_t)(ECX));
  /* 1276c4de call 0x1276cad0 */
  push32(0x1276c4e3u); f_1276cad0();
  /* 1276c4e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c4e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1276c4e7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1276c4ed mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1276c4f3 jmp 0x1276c50f */
  goto L_1276c50f;
L_1276c4f5:;
  /* 1276c4f5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1276c4f8 push edx */
  push32((uint32_t)(EDX));
  /* 1276c4f9 call 0x1276cad0 */
  push32(0x1276c4feu); f_1276cad0();
  /* 1276c4fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c501 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276c503 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1276c509 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1276c50f:;
  /* 1276c50f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c512 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1276c515 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c517 je 0x1276c557 */
  if (C.zf) goto L_1276c557;
  /* 1276c519 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c520 jg 0x1276c557 */
  if ((!C.zf&&C.sf==C.of)) goto L_1276c557;
  /* 1276c522 jl 0x1276c52d */
  if ((C.sf!=C.of)) goto L_1276c52d;
  /* 1276c524 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c52b jae 0x1276c557 */
  if (!C.cf) goto L_1276c557;
L_1276c52d:;
  /* 1276c52d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1276c533 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1276c535 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1276c53b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c53e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1276c540 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1276c546 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1276c54c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c54f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1276c552 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276c555 jmp 0x1276c56f */
  goto L_1276c56f;
L_1276c557:;
  /* 1276c557 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1276c55d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1276c563 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1276c569 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1276c56f:;
  /* 1276c56f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c572 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1276c578 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c57a jne 0x1276c597 */
  if (!C.zf) goto L_1276c597;
  /* 1276c57c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1276c582 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1276c588 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1276c58b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1276c591 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1276c597:;
  /* 1276c597 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c59e jge 0x1276c5ac */
  if ((C.sf==C.of)) goto L_1276c5ac;
  /* 1276c5a0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1276c5aa jmp 0x1276c5b5 */
  goto L_1276c5b5;
L_1276c5ac:;
  /* 1276c5ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c5af and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1276c5b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1276c5b5:;
  /* 1276c5b5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1276c5bb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1276c5c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c5c3 jne 0x1276c5cc */
  if (!C.zf) goto L_1276c5cc;
  /* 1276c5c5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1276c5cc:;
  /* 1276c5cc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1276c5cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1276c5d2:;
  /* 1276c5d2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1276c5d8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1276c5de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c5e1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1276c5e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c5e9 jg 0x1276c5ff */
  if ((!C.zf&&C.sf==C.of)) goto L_1276c5ff;
  /* 1276c5eb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1276c5f1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1276c5f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276c5f9 je 0x1276c680 */
  if (C.zf) goto L_1276c680;
L_1276c5ff:;
  /* 1276c5ff mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1276c605 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1276c606 push edx */
  push32((uint32_t)(EDX));
  /* 1276c607 push eax */
  push32((uint32_t)(EAX));
  /* 1276c608 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1276c60e push edx */
  push32((uint32_t)(EDX));
  /* 1276c60f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1276c615 push eax */
  push32((uint32_t)(EAX));
  /* 1276c616 call 0x1276b990 */
  push32(0x1276c61bu); f_1276b990();
  /* 1276c61b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c61e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1276c624 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1276c62a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1276c62b push edx */
  push32((uint32_t)(EDX));
  /* 1276c62c push eax */
  push32((uint32_t)(EAX));
  /* 1276c62d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1276c633 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c634 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1276c63a push edx */
  push32((uint32_t)(EDX));
  /* 1276c63b call 0x1276b920 */
  push32(0x1276c640u); f_1276b920();
  /* 1276c640 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1276c646 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1276c64c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c653 jle 0x1276c667 */
  if ((C.zf||C.sf!=C.of)) goto L_1276c667;
  /* 1276c655 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1276c65b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c661 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1276c667:;
  /* 1276c667 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c66a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1276c670 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1276c672 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c675 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c678 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1276c67b jmp 0x1276c5d2 */
  goto L_1276c5d2;
L_1276c680:;
  /* 1276c680 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1276c683 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c686 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1276c689 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c68c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c68f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1276c692 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c695 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c69a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c69c je 0x1276c6c7 */
  if (C.zf) goto L_1276c6c7;
  /* 1276c69e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c6a1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1276c6a4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c6a7 jne 0x1276c6af */
  if (!C.zf) goto L_1276c6af;
  /* 1276c6a9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c6ad jne 0x1276c6c7 */
  if (!C.zf) goto L_1276c6c7;
L_1276c6af:;
  /* 1276c6af mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c6b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c6b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1276c6b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c6bb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1276c6be mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276c6c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c6c4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1276c6c7:;
  /* 1276c6c7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c6ce jne 0x1276c8a2 */
  if (!C.zf) goto L_1276c8a2;
  /* 1276c6d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c6d7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c6da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c6dc je 0x1276c72d */
  if (C.zf) goto L_1276c72d;
  /* 1276c6de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c6e1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1276c6e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276c6e9 je 0x1276c6fb */
  if (C.zf) goto L_1276c6fb;
  /* 1276c6eb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1276c6f2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1276c6f9 jmp 0x1276c72d */
  goto L_1276c72d;
L_1276c6fb:;
  /* 1276c6fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c6fe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1276c701 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c703 je 0x1276c715 */
  if (C.zf) goto L_1276c715;
  /* 1276c705 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1276c70c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1276c713 jmp 0x1276c72d */
  goto L_1276c72d;
L_1276c715:;
  /* 1276c715 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c718 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1276c71b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276c71d je 0x1276c72d */
  if (C.zf) goto L_1276c72d;
  /* 1276c71f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1276c726 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1276c72d:;
  /* 1276c72d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1276c733 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c736 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c739 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1276c73f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c742 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1276c745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c747 jne 0x1276c765 */
  if (!C.zf) goto L_1276c765;
  /* 1276c749 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1276c74f push eax */
  push32((uint32_t)(EAX));
  /* 1276c750 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276c753 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c754 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1276c75a push edx */
  push32((uint32_t)(EDX));
  /* 1276c75b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1276c75d call 0x1276ca40 */
  push32(0x1276c762u); f_1276ca40();
  /* 1276c762 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276c765:;
  /* 1276c765 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1276c76b push eax */
  push32((uint32_t)(EAX));
  /* 1276c76c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276c76f push ecx */
  push32((uint32_t)(ECX));
  /* 1276c770 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276c773 push edx */
  push32((uint32_t)(EDX));
  /* 1276c774 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1276c77a push eax */
  push32((uint32_t)(EAX));
  /* 1276c77b call 0x1276ca80 */
  push32(0x1276c780u); f_1276ca80();
  /* 1276c780 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c786 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1276c789 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276c78b je 0x1276c7b3 */
  if (C.zf) goto L_1276c7b3;
  /* 1276c78d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c790 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1276c793 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c795 jne 0x1276c7b3 */
  if (!C.zf) goto L_1276c7b3;
  /* 1276c797 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1276c79d push eax */
  push32((uint32_t)(EAX));
  /* 1276c79e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276c7a1 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c7a2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1276c7a8 push edx */
  push32((uint32_t)(EDX));
  /* 1276c7a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1276c7ab call 0x1276ca40 */
  push32(0x1276c7b0u); f_1276ca40();
  /* 1276c7b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276c7b3:;
  /* 1276c7b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c7b7 je 0x1276c861 */
  if (C.zf) goto L_1276c861;
  /* 1276c7bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c7c1 jle 0x1276c861 */
  if ((C.zf||C.sf!=C.of)) goto L_1276c861;
  /* 1276c7c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c7ca mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1276c7d0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276c7d3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1276c7d9:;
  /* 1276c7d9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1276c7df mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1276c7e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c7e8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1276c7ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c7f0 je 0x1276c85f */
  if (C.zf) goto L_1276c85f;
  /* 1276c7f2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1276c7f8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1276c7fb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1276c802 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1276c809 push eax */
  push32((uint32_t)(EAX));
  /* 1276c80a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1276c810 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c811 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1276c817 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c81a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1276c820 call 0x1276dbf0 */
  push32(0x1276c825u); f_1276dbf0();
  /* 1276c825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c828 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1276c82e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c835 jg 0x1276c839 */
  if ((!C.zf&&C.sf==C.of)) goto L_1276c839;
  /* 1276c837 jmp 0x1276c85f */
  goto L_1276c85f;
L_1276c839:;
  /* 1276c839 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1276c83f push eax */
  push32((uint32_t)(EAX));
  /* 1276c840 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276c843 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c844 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1276c84a push edx */
  push32((uint32_t)(EDX));
  /* 1276c84b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1276c851 push eax */
  push32((uint32_t)(EAX));
  /* 1276c852 call 0x1276ca80 */
  push32(0x1276c857u); f_1276ca80();
  /* 1276c857 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c85a jmp 0x1276c7d9 */
  goto L_1276c7d9;
L_1276c85f:;
  /* 1276c85f jmp 0x1276c87c */
  goto L_1276c87c;
L_1276c861:;
  /* 1276c861 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1276c867 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c868 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276c86b push edx */
  push32((uint32_t)(EDX));
  /* 1276c86c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276c86f push eax */
  push32((uint32_t)(EAX));
  /* 1276c870 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276c873 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c874 call 0x1276ca80 */
  push32(0x1276c879u); f_1276ca80();
  /* 1276c879 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276c87c:;
  /* 1276c87c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276c87f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1276c882 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276c884 je 0x1276c8a2 */
  if (C.zf) goto L_1276c8a2;
  /* 1276c886 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1276c88c push eax */
  push32((uint32_t)(EAX));
  /* 1276c88d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276c890 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c891 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1276c897 push edx */
  push32((uint32_t)(EDX));
  /* 1276c898 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1276c89a call 0x1276ca40 */
  push32(0x1276c89fu); f_1276ca40();
  /* 1276c89f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276c8a2:;
  /* 1276c8a2 jmp 0x1276bcb4 */
  goto L_1276bcb4;
L_1276c8a7:;
  /* 1276c8a7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1276c8ad pop edi */
  EDI = (pop32());
  /* 1276c8ae pop esi */
  ESI = (pop32());
  /* 1276c8af pop ebx */
  EBX = (pop32());
  /* 1276c8b0 mov esp, ebp */
  ESP = (EBP);
  /* 1276c8b2 pop ebp */
  EBP = (pop32());
  /* 1276c8b3 ret  */
  ESPCHK(0x1276bc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x1276c9c0 (119 bytes, 44 insns) */
void f_1276c9c0(void) {
  FTRACE(0x1276c9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276c9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276c9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1276c9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276c9c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276c9c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276c9ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276c9cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276c9d0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1276c9d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276c9d6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276c9da jl 0x1276ca02 */
  if ((C.sf!=C.of)) goto L_1276ca02;
  /* 1276c9dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276c9df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276c9e1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1276c9e4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1276c9e6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1276c9ea and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1276c9f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1276c9f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276c9f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1276c9f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276c9fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276c9fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1276ca00 jmp 0x1276ca15 */
  goto L_1276ca15;
L_1276ca02:;
  /* 1276ca02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276ca05 push edx */
  push32((uint32_t)(EDX));
  /* 1276ca06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ca09 push eax */
  push32((uint32_t)(EAX));
  /* 1276ca0a call 0x1276ba10 */
  push32(0x1276ca0fu); f_1276ba10();
  /* 1276ca0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ca12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1276ca15:;
  /* 1276ca15 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ca19 jne 0x1276ca26 */
  if (!C.zf) goto L_1276ca26;
  /* 1276ca1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276ca1e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1276ca24 jmp 0x1276ca33 */
  goto L_1276ca33;
L_1276ca26:;
  /* 1276ca26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276ca29 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1276ca2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ca2e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276ca31 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1276ca33:;
  /* 1276ca33 mov esp, ebp */
  ESP = (EBP);
  /* 1276ca35 pop ebp */
  EBP = (pop32());
  /* 1276ca36 ret  */
  ESPCHK(0x1276c9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca40 @ 0x1276ca40 (53 bytes, 23 insns) */
void f_1276ca40(void) {
  FTRACE(0x1276ca40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276ca40 push ebp */
  push32((uint32_t)(EBP));
  /* 1276ca41 mov ebp, esp */
  EBP = (ESP);
L_1276ca43:;
  /* 1276ca43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276ca46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276ca49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ca4c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1276ca4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ca51 jle 0x1276ca73 */
  if ((C.zf||C.sf!=C.of)) goto L_1276ca73;
  /* 1276ca53 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276ca56 push edx */
  push32((uint32_t)(EDX));
  /* 1276ca57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276ca5a push eax */
  push32((uint32_t)(EAX));
  /* 1276ca5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ca5e push ecx */
  push32((uint32_t)(ECX));
  /* 1276ca5f call 0x1276c9c0 */
  push32(0x1276ca64u); f_1276c9c0();
  /* 1276ca64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ca67 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276ca6a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ca6d jne 0x1276ca71 */
  if (!C.zf) goto L_1276ca71;
  /* 1276ca6f jmp 0x1276ca73 */
  goto L_1276ca73;
L_1276ca71:;
  /* 1276ca71 jmp 0x1276ca43 */
  goto L_1276ca43;
L_1276ca73:;
  /* 1276ca73 pop ebp */
  EBP = (pop32());
  /* 1276ca74 ret  */
  ESPCHK(0x1276ca40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca80 @ 0x1276ca80 (74 bytes, 31 insns) */
void f_1276ca80(void) {
  FTRACE(0x1276ca80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276ca80 push ebp */
  push32((uint32_t)(EBP));
  /* 1276ca81 mov ebp, esp */
  EBP = (ESP);
  /* 1276ca83 push ecx */
  push32((uint32_t)(ECX));
L_1276ca84:;
  /* 1276ca84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276ca87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276ca8a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ca8d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1276ca90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ca92 jle 0x1276cac6 */
  if ((C.zf||C.sf!=C.of)) goto L_1276cac6;
  /* 1276ca94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276ca97 push edx */
  push32((uint32_t)(EDX));
  /* 1276ca98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276ca9b push eax */
  push32((uint32_t)(EAX));
  /* 1276ca9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ca9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1276caa2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276caa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276caa8 push eax */
  push32((uint32_t)(EAX));
  /* 1276caa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276caac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276caaf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1276cab2 call 0x1276c9c0 */
  push32(0x1276cab7u); f_1276c9c0();
  /* 1276cab7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276caba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276cabd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cac0 jne 0x1276cac4 */
  if (!C.zf) goto L_1276cac4;
  /* 1276cac2 jmp 0x1276cac6 */
  goto L_1276cac6;
L_1276cac4:;
  /* 1276cac4 jmp 0x1276ca84 */
  goto L_1276ca84;
L_1276cac6:;
  /* 1276cac6 mov esp, ebp */
  ESP = (EBP);
  /* 1276cac8 pop ebp */
  EBP = (pop32());
  /* 1276cac9 ret  */
  ESPCHK(0x1276ca80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cad0 @ 0x1276cad0 (26 bytes, 12 insns) */
void f_1276cad0(void) {
  FTRACE(0x1276cad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276cad0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276cad1 mov ebp, esp */
  EBP = (ESP);
  /* 1276cad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cad6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276cad8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cadb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cade mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1276cae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cae3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276cae5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1276cae8 pop ebp */
  EBP = (pop32());
  /* 1276cae9 ret  */
  ESPCHK(0x1276cad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caf0 @ 0x1276caf0 (31 bytes, 14 insns) */
void f_1276caf0(void) {
  FTRACE(0x1276caf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276caf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276caf1 mov ebp, esp */
  EBP = (ESP);
  /* 1276caf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276caf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276caf8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cafb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cafe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1276cb00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cb03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276cb05 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276cb08 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1276cb0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1276cb0d pop ebp */
  EBP = (pop32());
  /* 1276cb0e ret  */
  ESPCHK(0x1276caf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb10 @ 0x1276cb10 (27 bytes, 12 insns) */
void f_1276cb10(void) {
  FTRACE(0x1276cb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276cb10 push ebp */
  push32((uint32_t)(EBP));
  /* 1276cb11 mov ebp, esp */
  EBP = (ESP);
  /* 1276cb13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cb16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276cb18 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cb1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cb1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1276cb20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cb23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276cb25 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1276cb29 pop ebp */
  EBP = (pop32());
  /* 1276cb2a ret  */
  ESPCHK(0x1276cb10u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1276cb30 (145 bytes, 42 insns) */
void f_1276cb30(void) {
  FTRACE(0x1276cb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276cb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1276cb31 mov ebp, esp */
  EBP = (ESP);
  /* 1276cb33 push ecx */
  push32((uint32_t)(ECX));
  /* 1276cb34 call 0x1276cbe0 */
  push32(0x1276cb39u); f_1276cbe0();
  /* 1276cb39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cb3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1276cb3e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276cb45 jmp 0x1276cb50 */
  goto L_1276cb50;
L_1276cb47:;
  /* 1276cb47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276cb4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cb4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1276cb50:;
  /* 1276cb50 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cb54 jae 0x1276cb7a */
  if (!C.cf) goto L_1276cb7a;
  /* 1276cb56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276cb59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cb5c cmp ecx, dword ptr [eax*8 + 0x1278efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1278efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cb63 jne 0x1276cb78 */
  if (!C.zf) goto L_1276cb78;
  /* 1276cb65 call 0x1276cbd0 */
  push32(0x1276cb6au); f_1276cbd0();
  /* 1276cb6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276cb6d mov ecx, dword ptr [edx*8 + 0x1278efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1278efbc)));
  /* 1276cb74 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1276cb76 jmp 0x1276cbbd */
  goto L_1276cbbd;
L_1276cb78:;
  /* 1276cb78 jmp 0x1276cb47 */
  goto L_1276cb47;
L_1276cb7a:;
  /* 1276cb7a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cb7e jb 0x1276cb93 */
  if (C.cf) goto L_1276cb93;
  /* 1276cb80 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cb84 ja 0x1276cb93 */
  if ((!C.cf&&!C.zf)) goto L_1276cb93;
  /* 1276cb86 call 0x1276cbd0 */
  push32(0x1276cb8bu); f_1276cbd0();
  /* 1276cb8b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1276cb91 jmp 0x1276cbbd */
  goto L_1276cbbd;
L_1276cb93:;
  /* 1276cb93 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cb9a jb 0x1276cbb2 */
  if (C.cf) goto L_1276cbb2;
  /* 1276cb9c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cba3 ja 0x1276cbb2 */
  if ((!C.cf&&!C.zf)) goto L_1276cbb2;
  /* 1276cba5 call 0x1276cbd0 */
  push32(0x1276cbaau); f_1276cbd0();
  /* 1276cbaa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1276cbb0 jmp 0x1276cbbd */
  goto L_1276cbbd;
L_1276cbb2:;
  /* 1276cbb2 call 0x1276cbd0 */
  push32(0x1276cbb7u); f_1276cbd0();
  /* 1276cbb7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1276cbbd:;
  /* 1276cbbd mov esp, ebp */
  ESP = (EBP);
  /* 1276cbbf pop ebp */
  EBP = (pop32());
  /* 1276cbc0 ret  */
  ESPCHK(0x1276cb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbd0 @ 0x1276cbd0 (13 bytes, 6 insns) */
void f_1276cbd0(void) {
  FTRACE(0x1276cbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276cbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276cbd1 mov ebp, esp */
  EBP = (ESP);
  /* 1276cbd3 call 0x12764740 */
  push32(0x1276cbd8u); f_12764740();
  /* 1276cbd8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cbdb pop ebp */
  EBP = (pop32());
  /* 1276cbdc ret  */
  ESPCHK(0x1276cbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbe0 @ 0x1276cbe0 (13 bytes, 6 insns) */
void f_1276cbe0(void) {
  FTRACE(0x1276cbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276cbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276cbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1276cbe3 call 0x12764740 */
  push32(0x1276cbe8u); f_12764740();
  /* 1276cbe8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cbeb pop ebp */
  EBP = (pop32());
  /* 1276cbec ret  */
  ESPCHK(0x1276cbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbf0 @ 0x1276cbf0 (664 bytes, 269 insns) [15 switch table(s)] */
void f_1276cbf0(void) {
  FTRACE(0x1276cbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276cbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276cbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1276cbf3 push edi */
  push32((uint32_t)(EDI));
  /* 1276cbf4 push esi */
  push32((uint32_t)(ESI));
  /* 1276cbf5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1276cbf8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276cbfb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cbfe mov eax, ecx */
  EAX = (ECX);
  /* 1276cc00 mov edx, ecx */
  EDX = (ECX);
  /* 1276cc02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cc04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cc06 jbe 0x1276cc10 */
  if ((C.cf||C.zf)) goto L_1276cc10;
  /* 1276cc08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cc0a jb 0x1276cd88 */
  if (C.cf) goto L_1276cd88;
L_1276cc10:;
  /* 1276cc10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1276cc16 jne 0x1276cc2c */
  if (!C.zf) goto L_1276cc2c;
  /* 1276cc18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276cc1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1276cc1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cc21 jb 0x1276cc4c */
  if (C.cf) goto L_1276cc4c;
  /* 1276cc23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276cc25 jmp dword ptr [edx*4 + 0x1276cd38] */
  switch (EDX) {
    case 0: goto L_1276cd48;
    case 1: goto L_1276cd50;
    case 2: goto L_1276cd5c;
    case 3: goto L_1276cd70;
    default: x86_unimpl("switch@0x1276cc25 out of table"); return;
  }
L_1276cc2c:;
  /* 1276cc2c mov eax, edi */
  EAX = (EDI);
  /* 1276cc2e mov edx, 3 */
  EDX = (0x3u);
  /* 1276cc33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276cc36 jb 0x1276cc44 */
  if (C.cf) goto L_1276cc44;
  /* 1276cc38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1276cc3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cc3d jmp dword ptr [eax*4 + 0x1276cc50] */
  switch (EAX) {
    case 1: goto L_1276cc60;
    case 2: goto L_1276cc8c;
    case 3: goto L_1276ccb0;
    default: x86_unimpl("switch@0x1276cc3d out of table"); return;
  }
L_1276cc44:;
  /* 1276cc44 jmp dword ptr [ecx*4 + 0x1276cd48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1276cd48)))); return;
  /* 1276cc4b nop  */
  /* nop */
L_1276cc4c:;
  /* 1276cc4c jmp dword ptr [ecx*4 + 0x1276cccc] */
  switch (ECX) {
    case 0: goto L_1276cd2f;
    case 1: goto L_1276cd1c;
    case 2: goto L_1276cd14;
    case 3: goto L_1276cd0c;
    case 4: goto L_1276cd04;
    case 5: goto L_1276ccfc;
    case 6: goto L_1276ccf4;
    case 7: goto L_1276ccec;
    default: x86_unimpl("switch@0x1276cc4c out of table"); return;
  }
  /* 1276cc53 nop  */
  /* nop */
L_1276cc60:;
  /* 1276cc60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276cc62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276cc64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276cc66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276cc69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276cc6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276cc6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276cc72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276cc75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cc78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cc7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cc7e jb 0x1276cc4c */
  if (C.cf) goto L_1276cc4c;
  /* 1276cc80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276cc82 jmp dword ptr [edx*4 + 0x1276cd38] */
  switch (EDX) {
    case 0: goto L_1276cd48;
    case 1: goto L_1276cd50;
    case 2: goto L_1276cd5c;
    case 3: goto L_1276cd70;
    default: x86_unimpl("switch@0x1276cc82 out of table"); return;
  }
  /* 1276cc89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276cc8c:;
  /* 1276cc8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276cc8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276cc90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276cc92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276cc95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276cc98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276cc9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cc9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cca1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cca4 jb 0x1276cc4c */
  if (C.cf) goto L_1276cc4c;
  /* 1276cca6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276cca8 jmp dword ptr [edx*4 + 0x1276cd38] */
  switch (EDX) {
    case 0: goto L_1276cd48;
    case 1: goto L_1276cd50;
    case 2: goto L_1276cd5c;
    case 3: goto L_1276cd70;
    default: x86_unimpl("switch@0x1276cca8 out of table"); return;
  }
  /* 1276ccaf nop  */
  /* nop */
L_1276ccb0:;
  /* 1276ccb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276ccb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276ccb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276ccb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1276ccb7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276ccba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1276ccbb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ccbe jb 0x1276cc4c */
  if (C.cf) goto L_1276cc4c;
  /* 1276ccc0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276ccc2 jmp dword ptr [edx*4 + 0x1276cd38] */
  switch (EDX) {
    case 0: goto L_1276cd48;
    case 1: goto L_1276cd50;
    case 2: goto L_1276cd5c;
    case 3: goto L_1276cd70;
    default: x86_unimpl("switch@0x1276ccc2 out of table"); return;
  }
  /* 1276ccc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276ccec:;
  /* 1276ccec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1276ccf0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1276ccf4:;
  /* 1276ccf4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1276ccf8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1276ccfc:;
  /* 1276ccfc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1276cd00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1276cd04:;
  /* 1276cd04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1276cd08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1276cd0c:;
  /* 1276cd0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1276cd10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1276cd14:;
  /* 1276cd14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1276cd18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1276cd1c:;
  /* 1276cd1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1276cd20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1276cd24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1276cd2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cd2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1276cd2f:;
  /* 1276cd2f jmp dword ptr [edx*4 + 0x1276cd38] */
  switch (EDX) {
    case 0: goto L_1276cd48;
    case 1: goto L_1276cd50;
    case 2: goto L_1276cd5c;
    case 3: goto L_1276cd70;
    default: x86_unimpl("switch@0x1276cd2f out of table"); return;
  }
  /* 1276cd36 mov edi, edi */
  EDI = (EDI);
L_1276cd48:;
  /* 1276cd48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cd4b pop esi */
  ESI = (pop32());
  /* 1276cd4c pop edi */
  EDI = (pop32());
  /* 1276cd4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276cd4e ret  */
  ESPCHK(0x1276cbf0u, _esp0);
  ESP += 4; return;
  /* 1276cd4f nop  */
  /* nop */
L_1276cd50:;
  /* 1276cd50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276cd52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276cd54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cd57 pop esi */
  ESI = (pop32());
  /* 1276cd58 pop edi */
  EDI = (pop32());
  /* 1276cd59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276cd5a ret  */
  ESPCHK(0x1276cbf0u, _esp0);
  ESP += 4; return;
  /* 1276cd5b nop  */
  /* nop */
L_1276cd5c:;
  /* 1276cd5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276cd5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276cd60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276cd63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276cd66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cd69 pop esi */
  ESI = (pop32());
  /* 1276cd6a pop edi */
  EDI = (pop32());
  /* 1276cd6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276cd6c ret  */
  ESPCHK(0x1276cbf0u, _esp0);
  ESP += 4; return;
  /* 1276cd6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276cd70:;
  /* 1276cd70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1276cd72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276cd74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276cd77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276cd7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276cd7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276cd80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cd83 pop esi */
  ESI = (pop32());
  /* 1276cd84 pop edi */
  EDI = (pop32());
  /* 1276cd85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276cd86 ret  */
  ESPCHK(0x1276cbf0u, _esp0);
  ESP += 4; return;
  /* 1276cd87 nop  */
  /* nop */
L_1276cd88:;
  /* 1276cd88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1276cd8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1276cd90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1276cd96 jne 0x1276cdbc */
  if (!C.zf) goto L_1276cdbc;
  /* 1276cd98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276cd9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1276cd9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cda1 jb 0x1276cdb0 */
  if (C.cf) goto L_1276cdb0;
  /* 1276cda3 std  */
  C.df=1;
  /* 1276cda4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276cda6 cld  */
  C.df=0;
  /* 1276cda7 jmp dword ptr [edx*4 + 0x1276ced0] */
  switch (EDX) {
    case 0: goto L_1276cee0;
    case 1: goto L_1276cee8;
    case 2: goto L_1276cef8;
    case 3: goto L_1276cf0c;
    default: x86_unimpl("switch@0x1276cda7 out of table"); return;
  }
  /* 1276cdae mov edi, edi */
  EDI = (EDI);
L_1276cdb0:;
  /* 1276cdb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1276cdb2 jmp dword ptr [ecx*4 + 0x1276ce80] */
  switch (ECX) {
    case 0: goto L_1276cec7;
    default: x86_unimpl("switch@0x1276cdb2 out of table"); return;
  }
  /* 1276cdb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276cdbc:;
  /* 1276cdbc mov eax, edi */
  EAX = (EDI);
  /* 1276cdbe mov edx, 3 */
  EDX = (0x3u);
  /* 1276cdc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cdc6 jb 0x1276cdd4 */
  if (C.cf) goto L_1276cdd4;
  /* 1276cdc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1276cdcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276cdcd jmp dword ptr [eax*4 + 0x1276cdd8] */
  switch (EAX) {
    case 1: goto L_1276cde8;
    case 2: goto L_1276ce08;
    case 3: goto L_1276ce30;
    default: x86_unimpl("switch@0x1276cdcd out of table"); return;
  }
L_1276cdd4:;
  /* 1276cdd4 jmp dword ptr [ecx*4 + 0x1276ced0] */
  switch (ECX) {
    case 0: goto L_1276cee0;
    case 1: goto L_1276cee8;
    case 2: goto L_1276cef8;
    case 3: goto L_1276cf0c;
    default: x86_unimpl("switch@0x1276cdd4 out of table"); return;
  }
  /* 1276cddb nop  */
  /* nop */
L_1276cde8:;
  /* 1276cde8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276cdeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276cded mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276cdf0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1276cdf1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276cdf4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1276cdf5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cdf8 jb 0x1276cdb0 */
  if (C.cf) goto L_1276cdb0;
  /* 1276cdfa std  */
  C.df=1;
  /* 1276cdfb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276cdfd cld  */
  C.df=0;
  /* 1276cdfe jmp dword ptr [edx*4 + 0x1276ced0] */
  switch (EDX) {
    case 0: goto L_1276cee0;
    case 1: goto L_1276cee8;
    case 2: goto L_1276cef8;
    case 3: goto L_1276cf0c;
    default: x86_unimpl("switch@0x1276cdfe out of table"); return;
  }
  /* 1276ce05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276ce08:;
  /* 1276ce08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276ce0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276ce0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276ce10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276ce13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276ce16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276ce19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ce1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ce1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ce22 jb 0x1276cdb0 */
  if (C.cf) goto L_1276cdb0;
  /* 1276ce24 std  */
  C.df=1;
  /* 1276ce25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276ce27 cld  */
  C.df=0;
  /* 1276ce28 jmp dword ptr [edx*4 + 0x1276ced0] */
  switch (EDX) {
    case 0: goto L_1276cee0;
    case 1: goto L_1276cee8;
    case 2: goto L_1276cef8;
    case 3: goto L_1276cf0c;
    default: x86_unimpl("switch@0x1276ce28 out of table"); return;
  }
  /* 1276ce2f nop  */
  /* nop */
L_1276ce30:;
  /* 1276ce30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276ce33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1276ce35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276ce38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276ce3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276ce3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276ce41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276ce44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276ce47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ce4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ce4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ce50 jb 0x1276cdb0 */
  if (C.cf) goto L_1276cdb0;
  /* 1276ce56 std  */
  C.df=1;
  /* 1276ce57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1276ce59 cld  */
  C.df=0;
  /* 1276ce5a jmp dword ptr [edx*4 + 0x1276ced0] */
  switch (EDX) {
    case 0: goto L_1276cee0;
    case 1: goto L_1276cee8;
    case 2: goto L_1276cef8;
    case 3: goto L_1276cf0c;
    default: x86_unimpl("switch@0x1276ce5a out of table"); return;
  }
  /* 1276ce61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1276ce64 test dh, cl */
  { uint32_t _r=(C.d.b.h)&(CL); fl_logic(_r,8); }
  /* 1276ce66 jbe 0x1276ce7a */
  if ((C.cf||C.zf)) goto L_1276ce7a;
  /* 1276ce68 mov esi, cs */
  ESI = (C.seg_cs);
  /* 1276ce6a jbe 0x1276ce7e */
  if ((C.cf||C.zf)) goto L_1276ce7e;
  /* 1276ce6c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1276ce6d into  */
  x86_unimpl("into @ 0x1276ce6d");
  /* 1276ce6e jbe 0x1276ce82 */
  if ((C.cf||C.zf)) goto L_1276ce82;
  /* 1276ce70 pushfd  */
  x86_unimpl("pushfd @ 0x1276ce70");
  /* 1276ce71 into  */
  x86_unimpl("into @ 0x1276ce71");
  /* 1276ce72 jbe 0x1276ce86 */
  if ((C.cf||C.zf)) goto L_1276ce86;
  /* 1276ce74 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1276ce75 into  */
  x86_unimpl("into @ 0x1276ce75");
  /* 1276ce76 jbe 0x1276ce8a */
  if ((C.cf||C.zf)) goto L_1276ce8a;
  /* 1276ce78 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1276ce79 into  */
  x86_unimpl("into @ 0x1276ce79");
L_1276ce7a:;
  /* 1276ce7a jbe 0x1276ce8e */
  if ((C.cf||C.zf)) goto L_1276ce8e;
  /* 1276ce7c mov ah, 0xce */
  AH = (0xceu);
L_1276ce7e:;
  /* 1276ce7e jbe 0x1276ce92 */
  if ((C.cf||C.zf)) goto L_1276ce92;
  /* 1276ce84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1276ce88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1276ce8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1276ce90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1276ce94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1276ce98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1276ce9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1276cea0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1276cea4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1276cea8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1276ceac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1276ceb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1276ceb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1276ceb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1276cebc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1276cec3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cec5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1276cec7:;
  /* 1276cec7 jmp dword ptr [edx*4 + 0x1276ced0] */
  switch (EDX) {
    case 0: goto L_1276cee0;
    case 1: goto L_1276cee8;
    case 2: goto L_1276cef8;
    case 3: goto L_1276cf0c;
    default: x86_unimpl("switch@0x1276cec7 out of table"); return;
  }
  /* 1276cece mov edi, edi */
  EDI = (EDI);
L_1276cee0:;
  /* 1276cee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cee3 pop esi */
  ESI = (pop32());
  /* 1276cee4 pop edi */
  EDI = (pop32());
  /* 1276cee5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276cee6 ret  */
  ESPCHK(0x1276cbf0u, _esp0);
  ESP += 4; return;
  /* 1276cee7 nop  */
  /* nop */
L_1276cee8:;
  /* 1276cee8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276ceeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276ceee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cef1 pop esi */
  ESI = (pop32());
  /* 1276cef2 pop edi */
  EDI = (pop32());
  /* 1276cef3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276cef4 ret  */
  ESPCHK(0x1276cbf0u, _esp0);
  ESP += 4; return;
  /* 1276cef5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1276cef8:;
  /* 1276cef8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276cefb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276cefe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276cf01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276cf04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cf07 pop esi */
  ESI = (pop32());
  /* 1276cf08 pop edi */
  EDI = (pop32());
  /* 1276cf09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276cf0a ret  */
  ESPCHK(0x1276cbf0u, _esp0);
  ESP += 4; return;
  /* 1276cf0b nop  */
  /* nop */
L_1276cf0c:;
  /* 1276cf0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1276cf0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1276cf12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1276cf15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1276cf18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1276cf1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1276cf1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cf21 pop esi */
  ESI = (pop32());
  /* 1276cf22 pop edi */
  EDI = (pop32());
  /* 1276cf23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1276cf24 ret  */
  ESPCHK(0x1276cbf0u, _esp0);
  ESP += 4; return;
L_1276ce82: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1276ce82 (unresolved jump table)"); return;
L_1276ce86: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1276ce86 (unresolved jump table)"); return;
L_1276ce8a: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1276ce8a (unresolved jump table)"); return;
L_1276ce8e: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1276ce8e (unresolved jump table)"); return;
L_1276ce92: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1276ce92 (unresolved jump table)"); return;
}

/* FUN_1000cf30 @ 0x1276cf30 (421 bytes, 148 insns) */
void f_1276cf30(void) {
  FTRACE(0x1276cf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276cf30 push ebp */
  push32((uint32_t)(EBP));
  /* 1276cf31 mov ebp, esp */
  EBP = (ESP);
  /* 1276cf33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1276cf35 push 0x1278c250 */
  push32((uint32_t)(0x1278c250u));
  /* 1276cf3a push 0x1276de08 */
  push32((uint32_t)(0x1276de08u));
  /* 1276cf3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1276cf45 push eax */
  push32((uint32_t)(EAX));
  /* 1276cf46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1276cf4d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276cf50 push ebx */
  push32((uint32_t)(EBX));
  /* 1276cf51 push esi */
  push32((uint32_t)(ESI));
  /* 1276cf52 push edi */
  push32((uint32_t)(EDI));
  /* 1276cf53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1276cf56 cmp dword ptr [0x12790854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cf5d jne 0x1276cfae */
  if (!C.zf) goto L_1276cfae;
  /* 1276cf5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1276cf62 push eax */
  push32((uint32_t)(EAX));
  /* 1276cf63 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276cf65 push 0x1278c24c */
  push32((uint32_t)(0x1278c24cu));
  /* 1276cf6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1276cf6c call dword ptr [0x127932f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f0))), 0x1276cf72u);
  /* 1276cf72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276cf74 je 0x1276cf82 */
  if (C.zf) goto L_1276cf82;
  /* 1276cf76 mov dword ptr [0x12790854], 1 */
  w32((uint32_t)(0x12790854), (0x1u));
  /* 1276cf80 jmp 0x1276cfae */
  goto L_1276cfae;
L_1276cf82:;
  /* 1276cf82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1276cf85 push ecx */
  push32((uint32_t)(ECX));
  /* 1276cf86 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276cf88 push 0x1278c248 */
  push32((uint32_t)(0x1278c248u));
  /* 1276cf8d push 1 */
  push32((uint32_t)(0x1u));
  /* 1276cf8f push 0 */
  push32((uint32_t)(0x0u));
  /* 1276cf91 call dword ptr [0x127932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f4))), 0x1276cf97u);
  /* 1276cf97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276cf99 je 0x1276cfa7 */
  if (C.zf) goto L_1276cfa7;
  /* 1276cf9b mov dword ptr [0x12790854], 2 */
  w32((uint32_t)(0x12790854), (0x2u));
  /* 1276cfa5 jmp 0x1276cfae */
  goto L_1276cfae;
L_1276cfa7:;
  /* 1276cfa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276cfa9 jmp 0x1276d0d8 */
  goto L_1276d0d8;
L_1276cfae:;
  /* 1276cfae cmp dword ptr [0x12790854], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12790854))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cfb5 jne 0x1276cfe5 */
  if (!C.zf) goto L_1276cfe5;
  /* 1276cfb7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cfbb jne 0x1276cfc6 */
  if (!C.zf) goto L_1276cfc6;
  /* 1276cfbd mov edx, dword ptr [0x12790860] */
  EDX = (r32((uint32_t)(0x12790860)));
  /* 1276cfc3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1276cfc6:;
  /* 1276cfc6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276cfc9 push eax */
  push32((uint32_t)(EAX));
  /* 1276cfca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276cfcd push ecx */
  push32((uint32_t)(ECX));
  /* 1276cfce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276cfd1 push edx */
  push32((uint32_t)(EDX));
  /* 1276cfd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276cfd5 push eax */
  push32((uint32_t)(EAX));
  /* 1276cfd6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1276cfd9 push ecx */
  push32((uint32_t)(ECX));
  /* 1276cfda call dword ptr [0x127932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f4))), 0x1276cfe0u);
  /* 1276cfe0 jmp 0x1276d0d8 */
  goto L_1276d0d8;
L_1276cfe5:;
  /* 1276cfe5 cmp dword ptr [0x12790854], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12790854))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cfec jne 0x1276d0d6 */
  if (!C.zf) goto L_1276d0d6;
  /* 1276cff2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276cff6 jne 0x1276d001 */
  if (!C.zf) goto L_1276d001;
  /* 1276cff8 mov edx, dword ptr [0x12790870] */
  EDX = (r32((uint32_t)(0x12790870)));
  /* 1276cffe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1276d001:;
  /* 1276d001 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d003 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d005 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276d008 push eax */
  push32((uint32_t)(EAX));
  /* 1276d009 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d00c push ecx */
  push32((uint32_t)(ECX));
  /* 1276d00d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1276d010 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1276d012 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d014 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1276d017 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d01a push edx */
  push32((uint32_t)(EDX));
  /* 1276d01b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276d01e push eax */
  push32((uint32_t)(EAX));
  /* 1276d01f call dword ptr [0x127932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f8))), 0x1276d025u);
  /* 1276d025 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1276d028 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d02c jne 0x1276d035 */
  if (!C.zf) goto L_1276d035;
  /* 1276d02e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d030 jmp 0x1276d0d8 */
  goto L_1276d0d8;
L_1276d035:;
  /* 1276d035 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276d03c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276d03f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1276d041 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d044 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1276d046 call 0x12767ea0 */
  push32(0x1276d04bu); f_12767ea0();
  /* 1276d04b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1276d04e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1276d051 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276d054 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1276d057 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276d05a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1276d05c push edx */
  push32((uint32_t)(EDX));
  /* 1276d05d push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d05f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276d062 push eax */
  push32((uint32_t)(EAX));
  /* 1276d063 call 0x12768a70 */
  push32(0x1276d068u); f_12768a70();
  /* 1276d068 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d06b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1276d072 jmp 0x1276d08b */
  goto L_1276d08b;
  /* 1276d074 mov eax, 1 */
  EAX = (0x1u);
  /* 1276d079 ret  */
  ESPCHK(0x1276cf30u, _esp0);
  ESP += 4; return;
  /* 1276d07a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1276d07d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1276d084 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1276d08b:;
  /* 1276d08b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d08f jne 0x1276d095 */
  if (!C.zf) goto L_1276d095;
  /* 1276d091 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d093 jmp 0x1276d0d8 */
  goto L_1276d0d8;
L_1276d095:;
  /* 1276d095 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276d098 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d099 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276d09c push edx */
  push32((uint32_t)(EDX));
  /* 1276d09d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276d0a0 push eax */
  push32((uint32_t)(EAX));
  /* 1276d0a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d0a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276d0a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276d0aa push edx */
  push32((uint32_t)(EDX));
  /* 1276d0ab call dword ptr [0x127932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f8))), 0x1276d0b1u);
  /* 1276d0b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1276d0b4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d0b8 jne 0x1276d0be */
  if (!C.zf) goto L_1276d0be;
  /* 1276d0ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d0bc jmp 0x1276d0d8 */
  goto L_1276d0d8;
L_1276d0be:;
  /* 1276d0be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276d0c1 push eax */
  push32((uint32_t)(EAX));
  /* 1276d0c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276d0c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d0c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276d0c9 push edx */
  push32((uint32_t)(EDX));
  /* 1276d0ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d0cd push eax */
  push32((uint32_t)(EAX));
  /* 1276d0ce call dword ptr [0x127932f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f0))), 0x1276d0d4u);
  /* 1276d0d4 jmp 0x1276d0d8 */
  goto L_1276d0d8;
L_1276d0d6:;
  /* 1276d0d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276d0d8:;
  /* 1276d0d8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1276d0db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276d0de mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1276d0e5 pop edi */
  EDI = (pop32());
  /* 1276d0e6 pop esi */
  ESI = (pop32());
  /* 1276d0e7 pop ebx */
  EBX = (pop32());
  /* 1276d0e8 mov esp, ebp */
  ESP = (EBP);
  /* 1276d0ea pop ebp */
  EBP = (pop32());
  /* 1276d0eb ret  */
  ESPCHK(0x1276cf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0f0 @ 0x1276d0f0 (727 bytes, 263 insns) */
void f_1276d0f0(void) {
  FTRACE(0x1276d0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276d0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276d0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1276d0f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1276d0f5 push 0x1278c260 */
  push32((uint32_t)(0x1278c260u));
  /* 1276d0fa push 0x1276de08 */
  push32((uint32_t)(0x1276de08u));
  /* 1276d0ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1276d105 push eax */
  push32((uint32_t)(EAX));
  /* 1276d106 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1276d10d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d110 push ebx */
  push32((uint32_t)(EBX));
  /* 1276d111 push esi */
  push32((uint32_t)(ESI));
  /* 1276d112 push edi */
  push32((uint32_t)(EDI));
  /* 1276d113 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1276d116 cmp dword ptr [0x12790878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d11d jne 0x1276d176 */
  if (!C.zf) goto L_1276d176;
  /* 1276d11f push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d121 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d123 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276d125 push 0x1278c24c */
  push32((uint32_t)(0x1278c24cu));
  /* 1276d12a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1276d12f push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d131 call dword ptr [0x127932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932e8))), 0x1276d137u);
  /* 1276d137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276d139 je 0x1276d147 */
  if (C.zf) goto L_1276d147;
  /* 1276d13b mov dword ptr [0x12790878], 1 */
  w32((uint32_t)(0x12790878), (0x1u));
  /* 1276d145 jmp 0x1276d176 */
  goto L_1276d176;
L_1276d147:;
  /* 1276d147 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d14b push 1 */
  push32((uint32_t)(0x1u));
  /* 1276d14d push 0x1278c248 */
  push32((uint32_t)(0x1278c248u));
  /* 1276d152 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1276d157 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d159 call dword ptr [0x127932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932ec))), 0x1276d15fu);
  /* 1276d15f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276d161 je 0x1276d16f */
  if (C.zf) goto L_1276d16f;
  /* 1276d163 mov dword ptr [0x12790878], 2 */
  w32((uint32_t)(0x12790878), (0x2u));
  /* 1276d16d jmp 0x1276d176 */
  goto L_1276d176;
L_1276d16f:;
  /* 1276d16f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d171 jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d176:;
  /* 1276d176 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d17a jle 0x1276d18f */
  if ((C.zf||C.sf!=C.of)) goto L_1276d18f;
  /* 1276d17c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276d17f push eax */
  push32((uint32_t)(EAX));
  /* 1276d180 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276d183 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d184 call 0x1276d400 */
  push32(0x1276d189u); f_1276d400();
  /* 1276d189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d18c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1276d18f:;
  /* 1276d18f cmp dword ptr [0x12790878], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12790878))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d196 jne 0x1276d1bb */
  if (!C.zf) goto L_1276d1bb;
  /* 1276d198 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1276d19b push edx */
  push32((uint32_t)(EDX));
  /* 1276d19c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276d19f push eax */
  push32((uint32_t)(EAX));
  /* 1276d1a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276d1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d1a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276d1a7 push edx */
  push32((uint32_t)(EDX));
  /* 1276d1a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d1ab push eax */
  push32((uint32_t)(EAX));
  /* 1276d1ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d1af push ecx */
  push32((uint32_t)(ECX));
  /* 1276d1b0 call dword ptr [0x127932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932ec))), 0x1276d1b6u);
  /* 1276d1b6 jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d1bb:;
  /* 1276d1bb cmp dword ptr [0x12790878], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12790878))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d1c2 jne 0x1276d3df */
  if (!C.zf) goto L_1276d3df;
  /* 1276d1c8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d1cc jne 0x1276d1d7 */
  if (!C.zf) goto L_1276d1d7;
  /* 1276d1ce mov edx, dword ptr [0x12790870] */
  EDX = (r32((uint32_t)(0x12790870)));
  /* 1276d1d4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1276d1d7:;
  /* 1276d1d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d1d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d1db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276d1de push eax */
  push32((uint32_t)(EAX));
  /* 1276d1df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276d1e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d1e3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1276d1e6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1276d1e8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d1ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1276d1ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d1f0 push edx */
  push32((uint32_t)(EDX));
  /* 1276d1f1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1276d1f4 push eax */
  push32((uint32_t)(EAX));
  /* 1276d1f5 call dword ptr [0x127932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f8))), 0x1276d1fbu);
  /* 1276d1fb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1276d1fe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d202 jne 0x1276d20b */
  if (!C.zf) goto L_1276d20b;
  /* 1276d204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d206 jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d20b:;
  /* 1276d20b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276d212 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276d215 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1276d217 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d21a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1276d21c call 0x12767ea0 */
  push32(0x1276d221u); f_12767ea0();
  /* 1276d221 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1276d224 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1276d227 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1276d22a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1276d22d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1276d234 jmp 0x1276d24d */
  goto L_1276d24d;
  /* 1276d236 mov eax, 1 */
  EAX = (0x1u);
  /* 1276d23b ret  */
  ESPCHK(0x1276d0f0u, _esp0);
  ESP += 4; return;
  /* 1276d23c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1276d23f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1276d246 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1276d24d:;
  /* 1276d24d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d251 jne 0x1276d25a */
  if (!C.zf) goto L_1276d25a;
  /* 1276d253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d255 jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d25a:;
  /* 1276d25a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276d25d push edx */
  push32((uint32_t)(EDX));
  /* 1276d25e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276d261 push eax */
  push32((uint32_t)(EAX));
  /* 1276d262 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276d265 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d266 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276d269 push edx */
  push32((uint32_t)(EDX));
  /* 1276d26a push 1 */
  push32((uint32_t)(0x1u));
  /* 1276d26c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1276d26f push eax */
  push32((uint32_t)(EAX));
  /* 1276d270 call dword ptr [0x127932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f8))), 0x1276d276u);
  /* 1276d276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276d278 jne 0x1276d281 */
  if (!C.zf) goto L_1276d281;
  /* 1276d27a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d27c jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d281:;
  /* 1276d281 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d283 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d285 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276d288 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d289 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276d28c push edx */
  push32((uint32_t)(EDX));
  /* 1276d28d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d290 push eax */
  push32((uint32_t)(EAX));
  /* 1276d291 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d294 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d295 call dword ptr [0x127932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932e8))), 0x1276d29bu);
  /* 1276d29b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1276d29e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d2a2 jne 0x1276d2ab */
  if (!C.zf) goto L_1276d2ab;
  /* 1276d2a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d2a6 jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d2ab:;
  /* 1276d2ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d2ae and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1276d2b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276d2b6 je 0x1276d2fb */
  if (C.zf) goto L_1276d2fb;
  /* 1276d2b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d2bc je 0x1276d2f6 */
  if (C.zf) goto L_1276d2f6;
  /* 1276d2be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276d2c1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d2c4 jle 0x1276d2cd */
  if ((C.zf||C.sf!=C.of)) goto L_1276d2cd;
  /* 1276d2c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d2c8 jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d2cd:;
  /* 1276d2cd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1276d2d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d2d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276d2d4 push edx */
  push32((uint32_t)(EDX));
  /* 1276d2d5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276d2d8 push eax */
  push32((uint32_t)(EAX));
  /* 1276d2d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276d2dc push ecx */
  push32((uint32_t)(ECX));
  /* 1276d2dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d2e0 push edx */
  push32((uint32_t)(EDX));
  /* 1276d2e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d2e4 push eax */
  push32((uint32_t)(EAX));
  /* 1276d2e5 call dword ptr [0x127932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932e8))), 0x1276d2ebu);
  /* 1276d2eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276d2ed jne 0x1276d2f6 */
  if (!C.zf) goto L_1276d2f6;
  /* 1276d2ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d2f1 jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d2f6:;
  /* 1276d2f6 jmp 0x1276d3da */
  goto L_1276d3da;
L_1276d2fb:;
  /* 1276d2fb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276d2fe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1276d301 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1276d308 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276d30b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1276d30d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d310 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1276d312 call 0x12767ea0 */
  push32(0x1276d317u); f_12767ea0();
  /* 1276d317 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1276d31a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1276d31d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1276d320 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1276d323 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1276d32a jmp 0x1276d343 */
  goto L_1276d343;
  /* 1276d32c mov eax, 1 */
  EAX = (0x1u);
  /* 1276d331 ret  */
  ESPCHK(0x1276d0f0u, _esp0);
  ESP += 4; return;
  /* 1276d332 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1276d335 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1276d33c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1276d343:;
  /* 1276d343 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d347 jne 0x1276d350 */
  if (!C.zf) goto L_1276d350;
  /* 1276d349 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d34b jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d350:;
  /* 1276d350 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276d353 push eax */
  push32((uint32_t)(EAX));
  /* 1276d354 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276d357 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d358 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1276d35b push edx */
  push32((uint32_t)(EDX));
  /* 1276d35c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1276d35f push eax */
  push32((uint32_t)(EAX));
  /* 1276d360 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d363 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d364 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d367 push edx */
  push32((uint32_t)(EDX));
  /* 1276d368 call dword ptr [0x127932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932e8))), 0x1276d36eu);
  /* 1276d36e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276d370 jne 0x1276d376 */
  if (!C.zf) goto L_1276d376;
  /* 1276d372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d374 jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d376:;
  /* 1276d376 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d37a jne 0x1276d3aa */
  if (!C.zf) goto L_1276d3aa;
  /* 1276d37c push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d37e push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d380 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d382 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d384 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276d387 push eax */
  push32((uint32_t)(EAX));
  /* 1276d388 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276d38b push ecx */
  push32((uint32_t)(ECX));
  /* 1276d38c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1276d391 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1276d394 push edx */
  push32((uint32_t)(EDX));
  /* 1276d395 call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x1276d39bu);
  /* 1276d39b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1276d39e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d3a2 jne 0x1276d3a8 */
  if (!C.zf) goto L_1276d3a8;
  /* 1276d3a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d3a6 jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d3a8:;
  /* 1276d3a8 jmp 0x1276d3da */
  goto L_1276d3da;
L_1276d3aa:;
  /* 1276d3aa push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d3ac push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d3ae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1276d3b1 push eax */
  push32((uint32_t)(EAX));
  /* 1276d3b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276d3b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d3b6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1276d3b9 push edx */
  push32((uint32_t)(EDX));
  /* 1276d3ba mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1276d3bd push eax */
  push32((uint32_t)(EAX));
  /* 1276d3be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1276d3c3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1276d3c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d3c7 call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x1276d3cdu);
  /* 1276d3cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1276d3d0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d3d4 jne 0x1276d3da */
  if (!C.zf) goto L_1276d3da;
  /* 1276d3d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d3d8 jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d3da:;
  /* 1276d3da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1276d3dd jmp 0x1276d3e1 */
  goto L_1276d3e1;
L_1276d3df:;
  /* 1276d3df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276d3e1:;
  /* 1276d3e1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1276d3e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276d3e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1276d3ee pop edi */
  EDI = (pop32());
  /* 1276d3ef pop esi */
  ESI = (pop32());
  /* 1276d3f0 pop ebx */
  EBX = (pop32());
  /* 1276d3f1 mov esp, ebp */
  ESP = (EBP);
  /* 1276d3f3 pop ebp */
  EBP = (pop32());
  /* 1276d3f4 ret  */
  ESPCHK(0x1276d0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x1276d400 (80 bytes, 32 insns) */
void f_1276d400(void) {
  FTRACE(0x1276d400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276d400 push ebp */
  push32((uint32_t)(EBP));
  /* 1276d401 mov ebp, esp */
  EBP = (ESP);
  /* 1276d403 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d406 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d409 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276d40c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d40f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1276d412:;
  /* 1276d412 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276d415 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276d418 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d41b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276d41e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276d420 je 0x1276d437 */
  if (C.zf) goto L_1276d437;
  /* 1276d422 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d425 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1276d428 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276d42a je 0x1276d437 */
  if (C.zf) goto L_1276d437;
  /* 1276d42c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d42f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d432 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276d435 jmp 0x1276d412 */
  goto L_1276d412;
L_1276d437:;
  /* 1276d437 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d43a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1276d43d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276d43f jne 0x1276d449 */
  if (!C.zf) goto L_1276d449;
  /* 1276d441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d444 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d447 jmp 0x1276d44c */
  goto L_1276d44c;
L_1276d449:;
  /* 1276d449 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1276d44c:;
  /* 1276d44c mov esp, ebp */
  ESP = (EBP);
  /* 1276d44e pop ebp */
  EBP = (pop32());
  /* 1276d44f ret  */
  ESPCHK(0x1276d400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d450 @ 0x1276d450 (130 bytes, 43 insns) */
void f_1276d450(void) {
  FTRACE(0x1276d450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276d450 push ebp */
  push32((uint32_t)(EBP));
  /* 1276d451 mov ebp, esp */
  EBP = (ESP);
  /* 1276d453 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d457 cmp eax, dword ptr [0x1279217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d45d jae 0x1276d481 */
  if (!C.cf) goto L_1276d481;
  /* 1276d45f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d462 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276d465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d468 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276d46b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276d46e mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276d475 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1276d47a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1276d47d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276d47f jne 0x1276d49c */
  if (!C.zf) goto L_1276d49c;
L_1276d481:;
  /* 1276d481 call 0x1276cbd0 */
  push32(0x1276d486u); f_1276cbd0();
  /* 1276d486 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1276d48c call 0x1276cbe0 */
  push32(0x1276d491u); f_1276cbe0();
  /* 1276d491 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1276d497 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276d49a jmp 0x1276d4ce */
  goto L_1276d4ce;
L_1276d49c:;
  /* 1276d49c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d49f push edx */
  push32((uint32_t)(EDX));
  /* 1276d4a0 call 0x1276e3f0 */
  push32(0x1276d4a5u); f_1276e3f0();
  /* 1276d4a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d4a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276d4ab push eax */
  push32((uint32_t)(EAX));
  /* 1276d4ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d4af push ecx */
  push32((uint32_t)(ECX));
  /* 1276d4b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d4b3 push edx */
  push32((uint32_t)(EDX));
  /* 1276d4b4 call 0x1276d4e0 */
  push32(0x1276d4b9u); f_1276d4e0();
  /* 1276d4b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d4bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276d4bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d4c2 push eax */
  push32((uint32_t)(EAX));
  /* 1276d4c3 call 0x1276e480 */
  push32(0x1276d4c8u); f_1276e480();
  /* 1276d4c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d4cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1276d4ce:;
  /* 1276d4ce mov esp, ebp */
  ESP = (EBP);
  /* 1276d4d0 pop ebp */
  EBP = (pop32());
  /* 1276d4d1 ret  */
  ESPCHK(0x1276d450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4e0 @ 0x1276d4e0 (178 bytes, 56 insns) */
void f_1276d4e0(void) {
  FTRACE(0x1276d4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276d4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276d4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1276d4e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d4e9 push eax */
  push32((uint32_t)(EAX));
  /* 1276d4ea call 0x1276e270 */
  push32(0x1276d4efu); f_1276e270();
  /* 1276d4ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d4f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1276d4f5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d4f9 jne 0x1276d50e */
  if (!C.zf) goto L_1276d50e;
  /* 1276d4fb call 0x1276cbd0 */
  push32(0x1276d500u); f_1276cbd0();
  /* 1276d500 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1276d506 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276d509 jmp 0x1276d58e */
  goto L_1276d58e;
L_1276d50e:;
  /* 1276d50e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276d511 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d512 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d514 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d517 push edx */
  push32((uint32_t)(EDX));
  /* 1276d518 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276d51b push eax */
  push32((uint32_t)(EAX));
  /* 1276d51c call dword ptr [0x127932e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932e4))), 0x1276d522u);
  /* 1276d522 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276d525 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d529 jne 0x1276d536 */
  if (!C.zf) goto L_1276d536;
  /* 1276d52b call dword ptr [0x12793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793388))), 0x1276d531u);
  /* 1276d531 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276d534 jmp 0x1276d53d */
  goto L_1276d53d;
L_1276d536:;
  /* 1276d536 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1276d53d:;
  /* 1276d53d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d541 je 0x1276d554 */
  if (C.zf) goto L_1276d554;
  /* 1276d543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d546 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d547 call 0x1276cb30 */
  push32(0x1276d54cu); f_1276cb30();
  /* 1276d54c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d54f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276d552 jmp 0x1276d58e */
  goto L_1276d58e;
L_1276d554:;
  /* 1276d554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d557 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1276d55a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d55d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1276d560 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276d563 mov ecx, dword ptr [edx*4 + 0x12792040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12792040)));
  /* 1276d56a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1276d56e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1276d571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d574 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276d577 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d57a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1276d57d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276d580 mov eax, dword ptr [eax*4 + 0x12792040] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 1276d587 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1276d58b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1276d58e:;
  /* 1276d58e mov esp, ebp */
  ESP = (EBP);
  /* 1276d590 pop ebp */
  EBP = (pop32());
  /* 1276d591 ret  */
  ESPCHK(0x1276d4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5a0 @ 0x1276d5a0 (130 bytes, 43 insns) */
void f_1276d5a0(void) {
  FTRACE(0x1276d5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276d5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276d5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1276d5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d5a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d5a7 cmp eax, dword ptr [0x1279217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d5ad jae 0x1276d5d1 */
  if (!C.cf) goto L_1276d5d1;
  /* 1276d5af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d5b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276d5b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d5b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276d5bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276d5be mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276d5c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1276d5ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1276d5cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276d5cf jne 0x1276d5ec */
  if (!C.zf) goto L_1276d5ec;
L_1276d5d1:;
  /* 1276d5d1 call 0x1276cbd0 */
  push32(0x1276d5d6u); f_1276cbd0();
  /* 1276d5d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1276d5dc call 0x1276cbe0 */
  push32(0x1276d5e1u); f_1276cbe0();
  /* 1276d5e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1276d5e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276d5ea jmp 0x1276d61e */
  goto L_1276d61e;
L_1276d5ec:;
  /* 1276d5ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d5ef push edx */
  push32((uint32_t)(EDX));
  /* 1276d5f0 call 0x1276e3f0 */
  push32(0x1276d5f5u); f_1276e3f0();
  /* 1276d5f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d5f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276d5fb push eax */
  push32((uint32_t)(EAX));
  /* 1276d5fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d5ff push ecx */
  push32((uint32_t)(ECX));
  /* 1276d600 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d603 push edx */
  push32((uint32_t)(EDX));
  /* 1276d604 call 0x1276d630 */
  push32(0x1276d609u); f_1276d630();
  /* 1276d609 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d60c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276d60f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d612 push eax */
  push32((uint32_t)(EAX));
  /* 1276d613 call 0x1276e480 */
  push32(0x1276d618u); f_1276e480();
  /* 1276d618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d61b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1276d61e:;
  /* 1276d61e mov esp, ebp */
  ESP = (EBP);
  /* 1276d620 pop ebp */
  EBP = (pop32());
  /* 1276d621 ret  */
  ESPCHK(0x1276d5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d630 @ 0x1276d630 (627 bytes, 182 insns) */
void f_1276d630(void) {
  FTRACE(0x1276d630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276d630 push ebp */
  push32((uint32_t)(EBP));
  /* 1276d631 mov ebp, esp */
  EBP = (ESP);
  /* 1276d633 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d639 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1276d640 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276d643 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1276d649 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d64d jne 0x1276d656 */
  if (!C.zf) goto L_1276d656;
  /* 1276d64f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d651 jmp 0x1276d89f */
  goto L_1276d89f;
L_1276d656:;
  /* 1276d656 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d659 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276d65c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d65f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276d662 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276d665 mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276d66c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1276d671 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1276d674 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276d676 je 0x1276d688 */
  if (C.zf) goto L_1276d688;
  /* 1276d678 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276d67a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d67c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d67f push edx */
  push32((uint32_t)(EDX));
  /* 1276d680 call 0x1276d4e0 */
  push32(0x1276d685u); f_1276d4e0();
  /* 1276d685 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276d688:;
  /* 1276d688 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d68b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276d68e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d691 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1276d694 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276d697 mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 1276d69e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1276d6a3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1276d6a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276d6aa je 0x1276d7bc */
  if (C.zf) goto L_1276d7bc;
  /* 1276d6b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d6b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1276d6b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1276d6bd:;
  /* 1276d6bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d6c0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d6c3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d6c6 jae 0x1276d7ba */
  if (!C.cf) goto L_1276d7ba;
  /* 1276d6cc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1276d6d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1276d6d5:;
  /* 1276d6d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276d6d8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1276d6de sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d6e0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d6e6 jge 0x1276d747 */
  if ((C.sf==C.of)) goto L_1276d747;
  /* 1276d6e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d6eb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d6ee cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d6f1 jae 0x1276d747 */
  if (!C.cf) goto L_1276d747;
  /* 1276d6f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d6f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1276d6f8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1276d6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d701 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d704 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276d707 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1276d70e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d711 jne 0x1276d731 */
  if (!C.zf) goto L_1276d731;
  /* 1276d713 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1276d719 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d71c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1276d722 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276d725 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1276d728 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276d72b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d72e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1276d731:;
  /* 1276d731 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276d734 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1276d73a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1276d73c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276d73f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d742 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1276d745 jmp 0x1276d6d5 */
  goto L_1276d6d5;
L_1276d747:;
  /* 1276d747 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d749 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1276d74f push edx */
  push32((uint32_t)(EDX));
  /* 1276d750 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276d753 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1276d759 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d75b push eax */
  push32((uint32_t)(EAX));
  /* 1276d75c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1276d762 push edx */
  push32((uint32_t)(EDX));
  /* 1276d763 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d766 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276d769 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d76c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1276d76f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276d772 mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 1276d779 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1276d77c push eax */
  push32((uint32_t)(EAX));
  /* 1276d77d call dword ptr [0x1279334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279334c))), 0x1276d783u);
  /* 1276d783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276d785 je 0x1276d7aa */
  if (C.zf) goto L_1276d7aa;
  /* 1276d787 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276d78a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d790 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1276d793 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276d796 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1276d79c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276d79e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d7a4 jge 0x1276d7a8 */
  if ((C.sf==C.of)) goto L_1276d7a8;
  /* 1276d7a6 jmp 0x1276d7ba */
  goto L_1276d7ba;
L_1276d7a8:;
  /* 1276d7a8 jmp 0x1276d7b5 */
  goto L_1276d7b5;
L_1276d7aa:;
  /* 1276d7aa call dword ptr [0x12793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793388))), 0x1276d7b0u);
  /* 1276d7b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1276d7b3 jmp 0x1276d7ba */
  goto L_1276d7ba;
L_1276d7b5:;
  /* 1276d7b5 jmp 0x1276d6bd */
  goto L_1276d6bd;
L_1276d7ba:;
  /* 1276d7ba jmp 0x1276d80c */
  goto L_1276d80c;
L_1276d7bc:;
  /* 1276d7bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d7be lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1276d7c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d7c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276d7c8 push edx */
  push32((uint32_t)(EDX));
  /* 1276d7c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d7cc push eax */
  push32((uint32_t)(EAX));
  /* 1276d7cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d7d0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276d7d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d7d6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276d7d9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276d7dc mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276d7e3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1276d7e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d7e7 call dword ptr [0x1279334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279334c))), 0x1276d7edu);
  /* 1276d7ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276d7ef je 0x1276d803 */
  if (C.zf) goto L_1276d803;
  /* 1276d7f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1276d7f8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1276d7fe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1276d801 jmp 0x1276d80c */
  goto L_1276d80c;
L_1276d803:;
  /* 1276d803 call dword ptr [0x12793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793388))), 0x1276d809u);
  /* 1276d809 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1276d80c:;
  /* 1276d80c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d810 jne 0x1276d896 */
  if (!C.zf) goto L_1276d896;
  /* 1276d816 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d81a je 0x1276d84a */
  if (C.zf) goto L_1276d84a;
  /* 1276d81c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d820 jne 0x1276d839 */
  if (!C.zf) goto L_1276d839;
  /* 1276d822 call 0x1276cbd0 */
  push32(0x1276d827u); f_1276cbd0();
  /* 1276d827 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1276d82d call 0x1276cbe0 */
  push32(0x1276d832u); f_1276cbe0();
  /* 1276d832 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276d835 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1276d837 jmp 0x1276d845 */
  goto L_1276d845;
L_1276d839:;
  /* 1276d839 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276d83c push edx */
  push32((uint32_t)(EDX));
  /* 1276d83d call 0x1276cb30 */
  push32(0x1276d842u); f_1276cb30();
  /* 1276d842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276d845:;
  /* 1276d845 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276d848 jmp 0x1276d89f */
  goto L_1276d89f;
L_1276d84a:;
  /* 1276d84a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d84d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276d850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d853 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1276d856 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276d859 mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 1276d860 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1276d865 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1276d868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276d86a je 0x1276d87b */
  if (C.zf) goto L_1276d87b;
  /* 1276d86c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276d86f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1276d872 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d875 jne 0x1276d87b */
  if (!C.zf) goto L_1276d87b;
  /* 1276d877 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d879 jmp 0x1276d89f */
  goto L_1276d89f;
L_1276d87b:;
  /* 1276d87b call 0x1276cbd0 */
  push32(0x1276d880u); f_1276cbd0();
  /* 1276d880 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1276d886 call 0x1276cbe0 */
  push32(0x1276d88bu); f_1276cbe0();
  /* 1276d88b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1276d891 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276d894 jmp 0x1276d89f */
  goto L_1276d89f;
L_1276d896:;
  /* 1276d896 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276d899 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1276d89f:;
  /* 1276d89f mov esp, ebp */
  ESP = (EBP);
  /* 1276d8a1 pop ebp */
  EBP = (pop32());
  /* 1276d8a2 ret  */
  ESPCHK(0x1276d630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8b0 @ 0x1276d8b0 (199 bytes, 68 insns) */
void f_1276d8b0(void) {
  FTRACE(0x1276d8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276d8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276d8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1276d8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d8b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1276d8b5 push esi */
  push32((uint32_t)(ESI));
  /* 1276d8b6 push edi */
  push32((uint32_t)(EDI));
L_1276d8b7:;
  /* 1276d8b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d8bb jne 0x1276d8db */
  if (!C.zf) goto L_1276d8db;
  /* 1276d8bd push 0x1278c1ac */
  push32((uint32_t)(0x1278c1acu));
  /* 1276d8c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276d8c4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1276d8c6 push 0x1278c278 */
  push32((uint32_t)(0x1278c278u));
  /* 1276d8cb push 2 */
  push32((uint32_t)(0x2u));
  /* 1276d8cd call 0x12763dc0 */
  push32(0x1276d8d2u); f_12763dc0();
  /* 1276d8d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d8d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d8d8 jne 0x1276d8db */
  if (!C.zf) goto L_1276d8db;
  /* 1276d8da int3  */
  x86_unimpl("int3 @ 0x1276d8da");
L_1276d8db:;
  /* 1276d8db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d8dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276d8df jne 0x1276d8b7 */
  if (!C.zf) goto L_1276d8b7;
  /* 1276d8e1 mov ecx, dword ptr [0x1279087c] */
  ECX = (r32((uint32_t)(0x1279087c)));
  /* 1276d8e7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d8ea mov dword ptr [0x1279087c], ecx */
  w32((uint32_t)(0x1279087c), (ECX));
  /* 1276d8f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d8f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276d8f6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1276d8f8 push 0x1278c278 */
  push32((uint32_t)(0x1278c278u));
  /* 1276d8fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1276d8ff push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1276d904 call 0x12764d00 */
  push32(0x1276d909u); f_12764d00();
  /* 1276d909 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d90c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d90f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1276d912 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d915 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d919 je 0x1276d936 */
  if (C.zf) goto L_1276d936;
  /* 1276d91b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d91e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1276d921 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1276d924 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d927 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1276d92a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d92d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1276d934 jmp 0x1276d95b */
  goto L_1276d95b;
L_1276d936:;
  /* 1276d936 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d939 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276d93c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1276d93f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d942 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1276d945 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d948 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276d94b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d94e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1276d951 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d954 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1276d95b:;
  /* 1276d95b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d95e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d961 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1276d964 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1276d966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276d969 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1276d970 pop edi */
  EDI = (pop32());
  /* 1276d971 pop esi */
  ESI = (pop32());
  /* 1276d972 pop ebx */
  EBX = (pop32());
  /* 1276d973 mov esp, ebp */
  ESP = (EBP);
  /* 1276d975 pop ebp */
  EBP = (pop32());
  /* 1276d976 ret  */
  ESPCHK(0x1276d8b0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1276d980 (50 bytes, 17 insns) */
void f_1276d980(void) {
  FTRACE(0x1276d980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276d980 push ebp */
  push32((uint32_t)(EBP));
  /* 1276d981 mov ebp, esp */
  EBP = (ESP);
  /* 1276d983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d986 cmp eax, dword ptr [0x1279217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d98c jb 0x1276d992 */
  if (C.cf) goto L_1276d992;
  /* 1276d98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276d990 jmp 0x1276d9b0 */
  goto L_1276d9b0;
L_1276d992:;
  /* 1276d992 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d995 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276d998 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276d99b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276d99e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276d9a1 mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276d9a8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1276d9ad and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1276d9b0:;
  /* 1276d9b0 pop ebp */
  EBP = (pop32());
  /* 1276d9b1 ret  */
  ESPCHK(0x1276d980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9c0 @ 0x1276d9c0 (300 bytes, 80 insns) */
void f_1276d9c0(void) {
  FTRACE(0x1276d9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276d9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276d9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1276d9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276d9c4 cmp dword ptr [0x12791d40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12791d40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d9cb jne 0x1276d9d9 */
  if (!C.zf) goto L_1276d9d9;
  /* 1276d9cd mov dword ptr [0x12791d40], 0x200 */
  w32((uint32_t)(0x12791d40), (0x200u));
  /* 1276d9d7 jmp 0x1276d9ec */
  goto L_1276d9ec;
L_1276d9d9:;
  /* 1276d9d9 cmp dword ptr [0x12791d40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12791d40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276d9e0 jge 0x1276d9ec */
  if ((C.sf==C.of)) goto L_1276d9ec;
  /* 1276d9e2 mov dword ptr [0x12791d40], 0x14 */
  w32((uint32_t)(0x12791d40), (0x14u));
L_1276d9ec:;
  /* 1276d9ec push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1276d9f1 push 0x1278c284 */
  push32((uint32_t)(0x1278c284u));
  /* 1276d9f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276d9f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1276d9fa mov eax, dword ptr [0x12791d40] */
  EAX = (r32((uint32_t)(0x12791d40)));
  /* 1276d9ff push eax */
  push32((uint32_t)(EAX));
  /* 1276da00 call 0x12765110 */
  push32(0x1276da05u); f_12765110();
  /* 1276da05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276da08 mov dword ptr [0x127909f0], eax */
  w32((uint32_t)(0x127909f0), (EAX));
  /* 1276da0d cmp dword ptr [0x127909f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276da14 jne 0x1276da55 */
  if (!C.zf) goto L_1276da55;
  /* 1276da16 mov dword ptr [0x12791d40], 0x14 */
  w32((uint32_t)(0x12791d40), (0x14u));
  /* 1276da20 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1276da25 push 0x1278c284 */
  push32((uint32_t)(0x1278c284u));
  /* 1276da2a push 2 */
  push32((uint32_t)(0x2u));
  /* 1276da2c push 4 */
  push32((uint32_t)(0x4u));
  /* 1276da2e mov ecx, dword ptr [0x12791d40] */
  ECX = (r32((uint32_t)(0x12791d40)));
  /* 1276da34 push ecx */
  push32((uint32_t)(ECX));
  /* 1276da35 call 0x12765110 */
  push32(0x1276da3au); f_12765110();
  /* 1276da3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276da3d mov dword ptr [0x127909f0], eax */
  w32((uint32_t)(0x127909f0), (EAX));
  /* 1276da42 cmp dword ptr [0x127909f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276da49 jne 0x1276da55 */
  if (!C.zf) goto L_1276da55;
  /* 1276da4b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1276da4d call 0x12763c70 */
  push32(0x1276da52u); f_12763c70();
  /* 1276da52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276da55:;
  /* 1276da55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276da5c jmp 0x1276da67 */
  goto L_1276da67;
L_1276da5e:;
  /* 1276da5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276da61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276da64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1276da67:;
  /* 1276da67 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276da6b jge 0x1276da86 */
  if ((C.sf==C.of)) goto L_1276da86;
  /* 1276da6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276da70 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276da73 add eax, 0x1278f120 */
  { uint32_t _a=(EAX),_b=(0x1278f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276da78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276da7b mov edx, dword ptr [0x127909f0] */
  EDX = (r32((uint32_t)(0x127909f0)));
  /* 1276da81 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1276da84 jmp 0x1276da5e */
  goto L_1276da5e;
L_1276da86:;
  /* 1276da86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276da8d jmp 0x1276da98 */
  goto L_1276da98;
L_1276da8f:;
  /* 1276da8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276da92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276da95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1276da98:;
  /* 1276da98 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276da9c jge 0x1276dae8 */
  if ((C.sf==C.of)) goto L_1276dae8;
  /* 1276da9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276daa1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276daa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276daa7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276daaa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276daad mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276dab4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dab8 je 0x1276dad6 */
  if (C.zf) goto L_1276dad6;
  /* 1276daba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276dabd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276dac0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276dac3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276dac6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276dac9 mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276dad0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dad4 jne 0x1276dae6 */
  if (!C.zf) goto L_1276dae6;
L_1276dad6:;
  /* 1276dad6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276dad9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276dadc mov dword ptr [ecx + 0x1278f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1278f130), (0xffffffffu));
L_1276dae6:;
  /* 1276dae6 jmp 0x1276da8f */
  goto L_1276da8f;
L_1276dae8:;
  /* 1276dae8 mov esp, ebp */
  ESP = (EBP);
  /* 1276daea pop ebp */
  EBP = (pop32());
  /* 1276daeb ret  */
  ESPCHK(0x1276d9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daf0 @ 0x1276daf0 (26 bytes, 9 insns) */
void f_1276daf0(void) {
  FTRACE(0x1276daf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276daf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276daf1 mov ebp, esp */
  EBP = (ESP);
  /* 1276daf3 call 0x1276e6f0 */
  push32(0x1276daf8u); f_1276e6f0();
  /* 1276daf8 movsx eax, byte ptr [0x12790694] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12790694))));
  /* 1276daff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276db01 je 0x1276db08 */
  if (C.zf) goto L_1276db08;
  /* 1276db03 call 0x1276e4b0 */
  push32(0x1276db08u); f_1276e4b0();
L_1276db08:;
  /* 1276db08 pop ebp */
  EBP = (pop32());
  /* 1276db09 ret  */
  ESPCHK(0x1276daf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db10 @ 0x1276db10 (61 bytes, 20 insns) */
void f_1276db10(void) {
  FTRACE(0x1276db10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276db10 push ebp */
  push32((uint32_t)(EBP));
  /* 1276db11 mov ebp, esp */
  EBP = (ESP);
  /* 1276db13 cmp dword ptr [ebp + 8], 0x1278f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1278f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276db1a jb 0x1276db3e */
  if (C.cf) goto L_1276db3e;
  /* 1276db1c cmp dword ptr [ebp + 8], 0x1278f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1278f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276db23 ja 0x1276db3e */
  if ((!C.cf&&!C.zf)) goto L_1276db3e;
  /* 1276db25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276db28 sub eax, 0x1278f120 */
  { uint32_t _a=(EAX),_b=(0x1278f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276db2d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276db30 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276db33 push eax */
  push32((uint32_t)(EAX));
  /* 1276db34 call 0x12768700 */
  push32(0x1276db39u); f_12768700();
  /* 1276db39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276db3c jmp 0x1276db4b */
  goto L_1276db4b;
L_1276db3e:;
  /* 1276db3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276db41 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276db44 push ecx */
  push32((uint32_t)(ECX));
  /* 1276db45 call dword ptr [0x12793320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793320))), 0x1276db4bu);
L_1276db4b:;
  /* 1276db4b pop ebp */
  EBP = (pop32());
  /* 1276db4c ret  */
  ESPCHK(0x1276db10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db50 @ 0x1276db50 (41 bytes, 16 insns) */
void f_1276db50(void) {
  FTRACE(0x1276db50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276db50 push ebp */
  push32((uint32_t)(EBP));
  /* 1276db51 mov ebp, esp */
  EBP = (ESP);
  /* 1276db53 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276db57 jge 0x1276db6a */
  if ((C.sf==C.of)) goto L_1276db6a;
  /* 1276db59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276db5c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276db5f push eax */
  push32((uint32_t)(EAX));
  /* 1276db60 call 0x12768700 */
  push32(0x1276db65u); f_12768700();
  /* 1276db65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276db68 jmp 0x1276db77 */
  goto L_1276db77;
L_1276db6a:;
  /* 1276db6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276db6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276db70 push ecx */
  push32((uint32_t)(ECX));
  /* 1276db71 call dword ptr [0x12793320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793320))), 0x1276db77u);
L_1276db77:;
  /* 1276db77 pop ebp */
  EBP = (pop32());
  /* 1276db78 ret  */
  ESPCHK(0x1276db50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db80 @ 0x1276db80 (61 bytes, 20 insns) */
void f_1276db80(void) {
  FTRACE(0x1276db80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276db80 push ebp */
  push32((uint32_t)(EBP));
  /* 1276db81 mov ebp, esp */
  EBP = (ESP);
  /* 1276db83 cmp dword ptr [ebp + 8], 0x1278f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1278f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276db8a jb 0x1276dbae */
  if (C.cf) goto L_1276dbae;
  /* 1276db8c cmp dword ptr [ebp + 8], 0x1278f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1278f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276db93 ja 0x1276dbae */
  if ((!C.cf&&!C.zf)) goto L_1276dbae;
  /* 1276db95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276db98 sub eax, 0x1278f120 */
  { uint32_t _a=(EAX),_b=(0x1278f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276db9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276dba0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dba3 push eax */
  push32((uint32_t)(EAX));
  /* 1276dba4 call 0x127687a0 */
  push32(0x1276dba9u); f_127687a0();
  /* 1276dba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dbac jmp 0x1276dbbb */
  goto L_1276dbbb;
L_1276dbae:;
  /* 1276dbae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276dbb1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dbb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1276dbb5 call dword ptr [0x1279331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279331c))), 0x1276dbbbu);
L_1276dbbb:;
  /* 1276dbbb pop ebp */
  EBP = (pop32());
  /* 1276dbbc ret  */
  ESPCHK(0x1276db80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbc0 @ 0x1276dbc0 (41 bytes, 16 insns) */
void f_1276dbc0(void) {
  FTRACE(0x1276dbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276dbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276dbc1 mov ebp, esp */
  EBP = (ESP);
  /* 1276dbc3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dbc7 jge 0x1276dbda */
  if ((C.sf==C.of)) goto L_1276dbda;
  /* 1276dbc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276dbcc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dbcf push eax */
  push32((uint32_t)(EAX));
  /* 1276dbd0 call 0x127687a0 */
  push32(0x1276dbd5u); f_127687a0();
  /* 1276dbd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dbd8 jmp 0x1276dbe7 */
  goto L_1276dbe7;
L_1276dbda:;
  /* 1276dbda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276dbdd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dbe0 push ecx */
  push32((uint32_t)(ECX));
  /* 1276dbe1 call dword ptr [0x1279331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279331c))), 0x1276dbe7u);
L_1276dbe7:;
  /* 1276dbe7 pop ebp */
  EBP = (pop32());
  /* 1276dbe8 ret  */
  ESPCHK(0x1276dbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbf0 @ 0x1276dbf0 (119 bytes, 34 insns) */
void f_1276dbf0(void) {
  FTRACE(0x1276dbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276dbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276dbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1276dbf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276dbf6 push 0x127909ec */
  push32((uint32_t)(0x127909ecu));
  /* 1276dbfb call dword ptr [0x12793360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793360))), 0x1276dc01u);
  /* 1276dc01 cmp dword ptr [0x127909dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dc08 je 0x1276dc28 */
  if (C.zf) goto L_1276dc28;
  /* 1276dc0a push 0x127909ec */
  push32((uint32_t)(0x127909ecu));
  /* 1276dc0f call dword ptr [0x12793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793350))), 0x1276dc15u);
  /* 1276dc15 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1276dc17 call 0x12768700 */
  push32(0x1276dc1cu); f_12768700();
  /* 1276dc1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dc1f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1276dc26 jmp 0x1276dc2f */
  goto L_1276dc2f;
L_1276dc28:;
  /* 1276dc28 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1276dc2f:;
  /* 1276dc2f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1276dc33 push eax */
  push32((uint32_t)(EAX));
  /* 1276dc34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276dc37 push ecx */
  push32((uint32_t)(ECX));
  /* 1276dc38 call 0x1276dc70 */
  push32(0x1276dc3du); f_1276dc70();
  /* 1276dc3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dc40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276dc43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dc47 je 0x1276dc55 */
  if (C.zf) goto L_1276dc55;
  /* 1276dc49 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1276dc4b call 0x127687a0 */
  push32(0x1276dc50u); f_127687a0();
  /* 1276dc50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dc53 jmp 0x1276dc60 */
  goto L_1276dc60;
L_1276dc55:;
  /* 1276dc55 push 0x127909ec */
  push32((uint32_t)(0x127909ecu));
  /* 1276dc5a call dword ptr [0x12793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793350))), 0x1276dc60u);
L_1276dc60:;
  /* 1276dc60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276dc63 mov esp, ebp */
  ESP = (EBP);
  /* 1276dc65 pop ebp */
  EBP = (pop32());
  /* 1276dc66 ret  */
  ESPCHK(0x1276dbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc70 @ 0x1276dc70 (160 bytes, 50 insns) */
void f_1276dc70(void) {
  FTRACE(0x1276dc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276dc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1276dc71 mov ebp, esp */
  EBP = (ESP);
  /* 1276dc73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276dc76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dc7a jne 0x1276dc83 */
  if (!C.zf) goto L_1276dc83;
  /* 1276dc7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276dc7e jmp 0x1276dd0c */
  goto L_1276dd0c;
L_1276dc83:;
  /* 1276dc83 cmp dword ptr [0x12790860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dc8a jne 0x1276dcba */
  if (!C.zf) goto L_1276dcba;
  /* 1276dc8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276dc8f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276dc94 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dc99 jle 0x1276dcab */
  if ((C.zf||C.sf!=C.of)) goto L_1276dcab;
  /* 1276dc9b call 0x1276cbd0 */
  push32(0x1276dca0u); f_1276cbd0();
  /* 1276dca0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1276dca6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276dca9 jmp 0x1276dd0c */
  goto L_1276dd0c;
L_1276dcab:;
  /* 1276dcab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276dcae mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1276dcb1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1276dcb3 mov eax, 1 */
  EAX = (0x1u);
  /* 1276dcb8 jmp 0x1276dd0c */
  goto L_1276dd0c;
L_1276dcba:;
  /* 1276dcba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1276dcc1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1276dcc4 push eax */
  push32((uint32_t)(EAX));
  /* 1276dcc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276dcc7 mov ecx, dword ptr [0x1278eea4] */
  ECX = (r32((uint32_t)(0x1278eea4)));
  /* 1276dccd push ecx */
  push32((uint32_t)(ECX));
  /* 1276dcce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276dcd1 push edx */
  push32((uint32_t)(EDX));
  /* 1276dcd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276dcd4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1276dcd7 push eax */
  push32((uint32_t)(EAX));
  /* 1276dcd8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1276dcdd mov ecx, dword ptr [0x12790870] */
  ECX = (r32((uint32_t)(0x12790870)));
  /* 1276dce3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276dce4 call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x1276dceau);
  /* 1276dcea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276dced cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dcf1 je 0x1276dcf9 */
  if (C.zf) goto L_1276dcf9;
  /* 1276dcf3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dcf7 je 0x1276dd09 */
  if (C.zf) goto L_1276dd09;
L_1276dcf9:;
  /* 1276dcf9 call 0x1276cbd0 */
  push32(0x1276dcfeu); f_1276cbd0();
  /* 1276dcfe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1276dd04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276dd07 jmp 0x1276dd0c */
  goto L_1276dd0c;
L_1276dd09:;
  /* 1276dd09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1276dd0c:;
  /* 1276dd0c mov esp, ebp */
  ESP = (EBP);
  /* 1276dd0e pop ebp */
  EBP = (pop32());
  /* 1276dd0f ret  */
  ESPCHK(0x1276dc70u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1276dd10 (32 bytes, 18 insns) */
void f_1276dd10(void) {
  FTRACE(0x1276dd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276dd10 push ebp */
  push32((uint32_t)(EBP));
  /* 1276dd11 mov ebp, esp */
  EBP = (ESP);
  /* 1276dd13 push ebx */
  push32((uint32_t)(EBX));
  /* 1276dd14 push esi */
  push32((uint32_t)(ESI));
  /* 1276dd15 push edi */
  push32((uint32_t)(EDI));
  /* 1276dd16 push ebp */
  push32((uint32_t)(EBP));
  /* 1276dd17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276dd19 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276dd1b push 0x1276dd28 */
  push32((uint32_t)(0x1276dd28u));
  /* 1276dd20 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1276dd23 call 0x1277545c */
  push32(0x1276dd28u); f_1277545c();
  /* 1276dd28 pop ebp */
  EBP = (pop32());
  /* 1276dd29 pop edi */
  EDI = (pop32());
  /* 1276dd2a pop esi */
  ESI = (pop32());
  /* 1276dd2b pop ebx */
  EBX = (pop32());
  /* 1276dd2c mov esp, ebp */
  ESP = (EBP);
  /* 1276dd2e pop ebp */
  EBP = (pop32());
  /* 1276dd2f ret  */
  ESPCHK(0x1276dd10u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1276dd52 (104 bytes, 33 insns) */
void f_1276dd52(void) {
  FTRACE(0x1276dd52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276dd52 push ebx */
  push32((uint32_t)(EBX));
  /* 1276dd53 push esi */
  push32((uint32_t)(ESI));
  /* 1276dd54 push edi */
  push32((uint32_t)(EDI));
  /* 1276dd55 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1276dd59 push eax */
  push32((uint32_t)(EAX));
  /* 1276dd5a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1276dd5c push 0x1276dd30 */
  push32((uint32_t)(0x1276dd30u));
  /* 1276dd61 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1276dd68 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1276dd6f:;
  /* 1276dd6f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1276dd73 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1276dd76 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1276dd79 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dd7c je 0x1276ddac */
  if (C.zf) goto L_1276ddac;
  /* 1276dd7e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dd82 je 0x1276ddac */
  if (C.zf) goto L_1276ddac;
  /* 1276dd84 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1276dd87 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1276dd8a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1276dd8e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1276dd91 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276dd96 jne 0x1276ddaa */
  if (!C.zf) goto L_1276ddaa;
  /* 1276dd98 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1276dd9d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1276dda1 call 0x1276dde6 */
  push32(0x1276dda6u); f_1276dde6();
  /* 1276dda6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1276ddaau);
L_1276ddaa:;
  /* 1276ddaa jmp 0x1276dd6f */
  goto L_1276dd6f;
L_1276ddac:;
  /* 1276ddac pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1276ddb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ddb6 pop edi */
  EDI = (pop32());
  /* 1276ddb7 pop esi */
  ESI = (pop32());
  /* 1276ddb8 pop ebx */
  EBX = (pop32());
  /* 1276ddb9 ret  */
  ESPCHK(0x1276dd52u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dde6 @ 0x1276dde6 (24 bytes, 10 insns) */
void f_1276dde6(void) {
  FTRACE(0x1276dde6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276dde6 push ebx */
  push32((uint32_t)(EBX));
  /* 1276dde7 push ecx */
  push32((uint32_t)(ECX));
  /* 1276dde8 mov ebx, 0x1278f3b8 */
  EBX = (0x1278f3b8u);
  /* 1276dded mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ddf0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1276ddf3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1276ddf6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1276ddf9 pop ecx */
  ECX = (pop32());
  /* 1276ddfa pop ebx */
  EBX = (pop32());
  /* 1276ddfb ret 4 */
  ESPCHK(0x1276dde6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dec5 @ 0x1276dec5 (27 bytes, 11 insns) */
void f_1276dec5(void) {
  FTRACE(0x1276dec5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276dec5 push ebp */
  push32((uint32_t)(EBP));
  /* 1276dec6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1276deca mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1276decc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1276decf push eax */
  push32((uint32_t)(EAX));
  /* 1276ded0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1276ded3 push eax */
  push32((uint32_t)(EAX));
  /* 1276ded4 call 0x1276dd52 */
  push32(0x1276ded9u); f_1276dd52();
  /* 1276ded9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dedc pop ebp */
  EBP = (pop32());
  /* 1276dedd ret 4 */
  ESPCHK(0x1276dec5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dee0 @ 0x1276dee0 (482 bytes, 138 insns) */
void f_1276dee0(void) {
  FTRACE(0x1276dee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276dee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276dee1 mov ebp, esp */
  EBP = (ESP);
  /* 1276dee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276dee6 push esi */
  push32((uint32_t)(ESI));
  /* 1276dee7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1276deee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1276def0 call 0x12768700 */
  push32(0x1276def5u); f_12768700();
  /* 1276def5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276def8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1276deff jmp 0x1276df0a */
  goto L_1276df0a;
L_1276df01:;
  /* 1276df01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276df04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276df07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1276df0a:;
  /* 1276df0a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276df0e jge 0x1276e0b0 */
  if ((C.sf==C.of)) goto L_1276e0b0;
  /* 1276df14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276df17 cmp dword ptr [ecx*4 + 0x12792040], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12792040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276df1f je 0x1276e016 */
  if (C.zf) goto L_1276e016;
  /* 1276df25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276df28 mov eax, dword ptr [edx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12792040)));
  /* 1276df2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276df32 jmp 0x1276df3d */
  goto L_1276df3d;
L_1276df34:;
  /* 1276df34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276df37 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276df3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1276df3d:;
  /* 1276df3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276df40 mov eax, dword ptr [edx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12792040)));
  /* 1276df47 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276df4c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276df4f jae 0x1276e006 */
  if (!C.cf) goto L_1276e006;
  /* 1276df55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276df58 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1276df5c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1276df5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276df61 jne 0x1276e001 */
  if (!C.zf) goto L_1276e001;
  /* 1276df67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276df6a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276df6e jne 0x1276dfa9 */
  if (!C.zf) goto L_1276dfa9;
  /* 1276df70 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1276df72 call 0x12768700 */
  push32(0x1276df77u); f_12768700();
  /* 1276df77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276df7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276df7d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276df81 jne 0x1276df9f */
  if (!C.zf) goto L_1276df9f;
  /* 1276df83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276df86 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276df89 push edx */
  push32((uint32_t)(EDX));
  /* 1276df8a call dword ptr [0x12793324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793324))), 0x1276df90u);
  /* 1276df90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276df93 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1276df96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276df99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276df9c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1276df9f:;
  /* 1276df9f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1276dfa1 call 0x127687a0 */
  push32(0x1276dfa6u); f_127687a0();
  /* 1276dfa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276dfa9:;
  /* 1276dfa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276dfac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dfaf push eax */
  push32((uint32_t)(EAX));
  /* 1276dfb0 call dword ptr [0x12793320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793320))), 0x1276dfb6u);
  /* 1276dfb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276dfb9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1276dfbd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1276dfc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276dfc2 je 0x1276dfd6 */
  if (C.zf) goto L_1276dfd6;
  /* 1276dfc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276dfc7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dfca push eax */
  push32((uint32_t)(EAX));
  /* 1276dfcb call dword ptr [0x1279331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279331c))), 0x1276dfd1u);
  /* 1276dfd1 jmp 0x1276df34 */
  goto L_1276df34;
L_1276dfd6:;
  /* 1276dfd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276dfd9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1276dfdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276dfe2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276dfe5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276dfe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276dfeb sub eax, dword ptr [edx*4 + 0x12792040] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12792040))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276dff2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1276dff3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1276dff8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1276dffa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276dffc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1276dfff jmp 0x1276e006 */
  goto L_1276e006;
L_1276e001:;
  /* 1276e001 jmp 0x1276df34 */
  goto L_1276df34;
L_1276e006:;
  /* 1276e006 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e00a je 0x1276e011 */
  if (C.zf) goto L_1276e011;
  /* 1276e00c jmp 0x1276e0b0 */
  goto L_1276e0b0;
L_1276e011:;
  /* 1276e011 jmp 0x1276e0ab */
  goto L_1276e0ab;
L_1276e016:;
  /* 1276e016 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1276e018 push 0x1278c28c */
  push32((uint32_t)(0x1278c28cu));
  /* 1276e01d push 2 */
  push32((uint32_t)(0x2u));
  /* 1276e01f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1276e024 call 0x12764d00 */
  push32(0x1276e029u); f_12764d00();
  /* 1276e029 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e02c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276e02f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e033 je 0x1276e0a9 */
  if (C.zf) goto L_1276e0a9;
  /* 1276e035 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e038 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e03b mov dword ptr [eax*4 + 0x12792040], ecx */
  w32((uint32_t)(EAX*4 + 0x12792040), (ECX));
  /* 1276e042 mov edx, dword ptr [0x1279217c] */
  EDX = (r32((uint32_t)(0x1279217c)));
  /* 1276e048 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e04b mov dword ptr [0x1279217c], edx */
  w32((uint32_t)(0x1279217c), (EDX));
  /* 1276e051 jmp 0x1276e05c */
  goto L_1276e05c;
L_1276e053:;
  /* 1276e053 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e056 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1276e05c:;
  /* 1276e05c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e05f mov edx, dword ptr [ecx*4 + 0x12792040] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276e066 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e06c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e06f jae 0x1276e094 */
  if (!C.cf) goto L_1276e094;
  /* 1276e071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e074 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1276e078 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e07b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1276e081 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e084 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1276e088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e08b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1276e092 jmp 0x1276e053 */
  goto L_1276e053;
L_1276e094:;
  /* 1276e094 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e097 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276e09a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1276e09d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e0a0 push edx */
  push32((uint32_t)(EDX));
  /* 1276e0a1 call 0x1276e3f0 */
  push32(0x1276e0a6u); f_1276e3f0();
  /* 1276e0a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276e0a9:;
  /* 1276e0a9 jmp 0x1276e0b0 */
  goto L_1276e0b0;
L_1276e0ab:;
  /* 1276e0ab jmp 0x1276df01 */
  goto L_1276df01;
L_1276e0b0:;
  /* 1276e0b0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1276e0b2 call 0x127687a0 */
  push32(0x1276e0b7u); f_127687a0();
  /* 1276e0b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e0ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e0bd pop esi */
  ESI = (pop32());
  /* 1276e0be mov esp, ebp */
  ESP = (EBP);
  /* 1276e0c0 pop ebp */
  EBP = (pop32());
  /* 1276e0c1 ret  */
  ESPCHK(0x1276dee0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1276e0d0 (183 bytes, 57 insns) */
void f_1276e0d0(void) {
  FTRACE(0x1276e0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1276e0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e0d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e0d7 cmp eax, dword ptr [0x1279217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e0dd jae 0x1276e16a */
  if (!C.cf) goto L_1276e16a;
  /* 1276e0e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e0e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276e0e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e0ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276e0ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e0f2 mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276e0f9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e0fd jne 0x1276e16a */
  if (!C.zf) goto L_1276e16a;
  /* 1276e0ff cmp dword ptr [0x12790654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12790654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e106 jne 0x1276e14a */
  if (!C.zf) goto L_1276e14a;
  /* 1276e108 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e10b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1276e10e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e112 je 0x1276e122 */
  if (C.zf) goto L_1276e122;
  /* 1276e114 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e118 je 0x1276e130 */
  if (C.zf) goto L_1276e130;
  /* 1276e11a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e11e je 0x1276e13e */
  if (C.zf) goto L_1276e13e;
  /* 1276e120 jmp 0x1276e14a */
  goto L_1276e14a;
L_1276e122:;
  /* 1276e122 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e125 push edx */
  push32((uint32_t)(EDX));
  /* 1276e126 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1276e128 call dword ptr [0x127932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932dc))), 0x1276e12eu);
  /* 1276e12e jmp 0x1276e14a */
  goto L_1276e14a;
L_1276e130:;
  /* 1276e130 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e133 push eax */
  push32((uint32_t)(EAX));
  /* 1276e134 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1276e136 call dword ptr [0x127932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932dc))), 0x1276e13cu);
  /* 1276e13c jmp 0x1276e14a */
  goto L_1276e14a;
L_1276e13e:;
  /* 1276e13e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e141 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e142 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1276e144 call dword ptr [0x127932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932dc))), 0x1276e14au);
L_1276e14a:;
  /* 1276e14a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e14d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1276e150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e153 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1276e156 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e159 mov ecx, dword ptr [edx*4 + 0x12792040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12792040)));
  /* 1276e160 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e163 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1276e166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276e168 jmp 0x1276e183 */
  goto L_1276e183;
L_1276e16a:;
  /* 1276e16a call 0x1276cbd0 */
  push32(0x1276e16fu); f_1276cbd0();
  /* 1276e16f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1276e175 call 0x1276cbe0 */
  push32(0x1276e17au); f_1276cbe0();
  /* 1276e17a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1276e180 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1276e183:;
  /* 1276e183 mov esp, ebp */
  ESP = (EBP);
  /* 1276e185 pop ebp */
  EBP = (pop32());
  /* 1276e186 ret  */
  ESPCHK(0x1276e0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x1276e190 (216 bytes, 63 insns) */
void f_1276e190(void) {
  FTRACE(0x1276e190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e190 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e191 mov ebp, esp */
  EBP = (ESP);
  /* 1276e193 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e197 cmp eax, dword ptr [0x1279217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e19d jae 0x1276e24b */
  if (!C.cf) goto L_1276e24b;
  /* 1276e1a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e1a6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276e1a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e1ac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276e1af imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e1b2 mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276e1b9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1276e1be and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1276e1c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276e1c3 je 0x1276e24b */
  if (C.zf) goto L_1276e24b;
  /* 1276e1c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e1cc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1276e1cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e1d2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1276e1d5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e1d8 mov ecx, dword ptr [edx*4 + 0x12792040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12792040)));
  /* 1276e1df cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e1e3 je 0x1276e24b */
  if (C.zf) goto L_1276e24b;
  /* 1276e1e5 cmp dword ptr [0x12790654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12790654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e1ec jne 0x1276e22a */
  if (!C.zf) goto L_1276e22a;
  /* 1276e1ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e1f1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276e1f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e1f8 je 0x1276e208 */
  if (C.zf) goto L_1276e208;
  /* 1276e1fa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e1fe je 0x1276e214 */
  if (C.zf) goto L_1276e214;
  /* 1276e200 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e204 je 0x1276e220 */
  if (C.zf) goto L_1276e220;
  /* 1276e206 jmp 0x1276e22a */
  goto L_1276e22a;
L_1276e208:;
  /* 1276e208 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276e20a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1276e20c call dword ptr [0x127932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932dc))), 0x1276e212u);
  /* 1276e212 jmp 0x1276e22a */
  goto L_1276e22a;
L_1276e214:;
  /* 1276e214 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276e216 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1276e218 call dword ptr [0x127932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932dc))), 0x1276e21eu);
  /* 1276e21e jmp 0x1276e22a */
  goto L_1276e22a;
L_1276e220:;
  /* 1276e220 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276e222 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1276e224 call dword ptr [0x127932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932dc))), 0x1276e22au);
L_1276e22a:;
  /* 1276e22a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e22d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276e230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e233 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1276e236 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e239 mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 1276e240 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1276e247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276e249 jmp 0x1276e264 */
  goto L_1276e264;
L_1276e24b:;
  /* 1276e24b call 0x1276cbd0 */
  push32(0x1276e250u); f_1276cbd0();
  /* 1276e250 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1276e256 call 0x1276cbe0 */
  push32(0x1276e25bu); f_1276cbe0();
  /* 1276e25b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1276e261 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1276e264:;
  /* 1276e264 mov esp, ebp */
  ESP = (EBP);
  /* 1276e266 pop ebp */
  EBP = (pop32());
  /* 1276e267 ret  */
  ESPCHK(0x1276e190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e270 @ 0x1276e270 (102 bytes, 30 insns) */
void f_1276e270(void) {
  FTRACE(0x1276e270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e270 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e271 mov ebp, esp */
  EBP = (ESP);
  /* 1276e273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e276 cmp eax, dword ptr [0x1279217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e27c jae 0x1276e2bb */
  if (!C.cf) goto L_1276e2bb;
  /* 1276e27e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e281 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276e284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e287 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276e28a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e28d mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276e294 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1276e299 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1276e29c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276e29e je 0x1276e2bb */
  if (C.zf) goto L_1276e2bb;
  /* 1276e2a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e2a3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1276e2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e2a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1276e2ac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e2af mov ecx, dword ptr [edx*4 + 0x12792040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12792040)));
  /* 1276e2b6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1276e2b9 jmp 0x1276e2d4 */
  goto L_1276e2d4;
L_1276e2bb:;
  /* 1276e2bb call 0x1276cbd0 */
  push32(0x1276e2c0u); f_1276cbd0();
  /* 1276e2c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1276e2c6 call 0x1276cbe0 */
  push32(0x1276e2cbu); f_1276cbe0();
  /* 1276e2cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1276e2d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1276e2d4:;
  /* 1276e2d4 pop ebp */
  EBP = (pop32());
  /* 1276e2d5 ret  */
  ESPCHK(0x1276e270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2e0 @ 0x1276e2e0 (260 bytes, 83 insns) */
void f_1276e2e0(void) {
  FTRACE(0x1276e2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1276e2e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276e2e6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1276e2ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e2ed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1276e2f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276e2f2 je 0x1276e2fd */
  if (C.zf) goto L_1276e2fd;
  /* 1276e2f4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1276e2f7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1276e2fa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1276e2fd:;
  /* 1276e2fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e300 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1276e306 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276e308 je 0x1276e312 */
  if (C.zf) goto L_1276e312;
  /* 1276e30a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1276e30d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1276e30f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1276e312:;
  /* 1276e312 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e315 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1276e31b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276e31d je 0x1276e328 */
  if (C.zf) goto L_1276e328;
  /* 1276e31f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1276e322 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1276e325 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1276e328:;
  /* 1276e328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e32b push eax */
  push32((uint32_t)(EAX));
  /* 1276e32c call dword ptr [0x12793394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793394))), 0x1276e332u);
  /* 1276e332 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276e335 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e339 jne 0x1276e352 */
  if (!C.zf) goto L_1276e352;
  /* 1276e33b call dword ptr [0x12793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793388))), 0x1276e341u);
  /* 1276e341 push eax */
  push32((uint32_t)(EAX));
  /* 1276e342 call 0x1276cb30 */
  push32(0x1276e347u); f_1276cb30();
  /* 1276e347 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e34a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276e34d jmp 0x1276e3e0 */
  goto L_1276e3e0;
L_1276e352:;
  /* 1276e352 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e356 jne 0x1276e363 */
  if (!C.zf) goto L_1276e363;
  /* 1276e358 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1276e35b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1276e35e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1276e361 jmp 0x1276e372 */
  goto L_1276e372;
L_1276e363:;
  /* 1276e363 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e367 jne 0x1276e372 */
  if (!C.zf) goto L_1276e372;
  /* 1276e369 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1276e36c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1276e36f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1276e372:;
  /* 1276e372 call 0x1276dee0 */
  push32(0x1276e377u); f_1276dee0();
  /* 1276e377 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276e37a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e37e jne 0x1276e39b */
  if (!C.zf) goto L_1276e39b;
  /* 1276e380 call 0x1276cbd0 */
  push32(0x1276e385u); f_1276cbd0();
  /* 1276e385 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1276e38b call 0x1276cbe0 */
  push32(0x1276e390u); f_1276cbe0();
  /* 1276e390 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1276e396 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276e399 jmp 0x1276e3e0 */
  goto L_1276e3e0;
L_1276e39b:;
  /* 1276e39b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e39e push eax */
  push32((uint32_t)(EAX));
  /* 1276e39f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e3a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e3a3 call 0x1276e0d0 */
  push32(0x1276e3a8u); f_1276e0d0();
  /* 1276e3a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e3ab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1276e3ae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1276e3b1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1276e3b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e3b7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276e3ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e3bd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1276e3c0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e3c3 mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 1276e3ca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1276e3cd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1276e3d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e3d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e3d5 call 0x1276e480 */
  push32(0x1276e3dau); f_1276e480();
  /* 1276e3da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e3dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1276e3e0:;
  /* 1276e3e0 mov esp, ebp */
  ESP = (EBP);
  /* 1276e3e2 pop ebp */
  EBP = (pop32());
  /* 1276e3e3 ret  */
  ESPCHK(0x1276e2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3f0 @ 0x1276e3f0 (134 bytes, 44 insns) */
void f_1276e3f0(void) {
  FTRACE(0x1276e3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1276e3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e3f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e3f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276e3fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e3fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1276e400 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e403 mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 1276e40a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e40c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276e40f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e412 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e416 jne 0x1276e451 */
  if (!C.zf) goto L_1276e451;
  /* 1276e418 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1276e41a call 0x12768700 */
  push32(0x1276e41fu); f_12768700();
  /* 1276e41f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e422 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e425 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e429 jne 0x1276e447 */
  if (!C.zf) goto L_1276e447;
  /* 1276e42b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e42e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e431 push edx */
  push32((uint32_t)(EDX));
  /* 1276e432 call dword ptr [0x12793324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793324))), 0x1276e438u);
  /* 1276e438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e43b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1276e43e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e441 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e444 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1276e447:;
  /* 1276e447 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1276e449 call 0x127687a0 */
  push32(0x1276e44eu); f_127687a0();
  /* 1276e44e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276e451:;
  /* 1276e451 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e454 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276e457 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e45a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1276e45d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e460 mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 1276e467 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1276e46b push eax */
  push32((uint32_t)(EAX));
  /* 1276e46c call dword ptr [0x12793320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793320))), 0x1276e472u);
  /* 1276e472 mov esp, ebp */
  ESP = (EBP);
  /* 1276e474 pop ebp */
  EBP = (pop32());
  /* 1276e475 ret  */
  ESPCHK(0x1276e3f0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1276e480 (38 bytes, 13 insns) */
void f_1276e480(void) {
  FTRACE(0x1276e480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e480 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e481 mov ebp, esp */
  EBP = (ESP);
  /* 1276e483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e486 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276e489 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e48c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1276e48f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e492 mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 1276e499 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1276e49d push eax */
  push32((uint32_t)(EAX));
  /* 1276e49e call dword ptr [0x1279331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279331c))), 0x1276e4a4u);
  /* 1276e4a4 pop ebp */
  EBP = (pop32());
  /* 1276e4a5 ret  */
  ESPCHK(0x1276e480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4b0 @ 0x1276e4b0 (218 bytes, 63 insns) */
void f_1276e4b0(void) {
  FTRACE(0x1276e4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1276e4b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276e4b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276e4bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1276e4bf call 0x12768700 */
  push32(0x1276e4c4u); f_12768700();
  /* 1276e4c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e4c7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1276e4ce jmp 0x1276e4d9 */
  goto L_1276e4d9;
L_1276e4d0:;
  /* 1276e4d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e4d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e4d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1276e4d9:;
  /* 1276e4d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e4dc cmp ecx, dword ptr [0x12791d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12791d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e4e2 jge 0x1276e579 */
  if ((C.sf==C.of)) goto L_1276e579;
  /* 1276e4e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e4eb mov eax, dword ptr [0x127909f0] */
  EAX = (r32((uint32_t)(0x127909f0)));
  /* 1276e4f0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e4f4 je 0x1276e574 */
  if (C.zf) goto L_1276e574;
  /* 1276e4f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e4f9 mov edx, dword ptr [0x127909f0] */
  EDX = (r32((uint32_t)(0x127909f0)));
  /* 1276e4ff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1276e502 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1276e505 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1276e50b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276e50d je 0x1276e531 */
  if (C.zf) goto L_1276e531;
  /* 1276e50f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e512 mov eax, dword ptr [0x127909f0] */
  EAX = (r32((uint32_t)(0x127909f0)));
  /* 1276e517 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1276e51a push ecx */
  push32((uint32_t)(ECX));
  /* 1276e51b call 0x1276f2a0 */
  push32(0x1276e520u); f_1276f2a0();
  /* 1276e520 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e523 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e526 je 0x1276e531 */
  if (C.zf) goto L_1276e531;
  /* 1276e528 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e52b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e52e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1276e531:;
  /* 1276e531 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e535 jl 0x1276e574 */
  if ((C.sf!=C.of)) goto L_1276e574;
  /* 1276e537 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e53a mov ecx, dword ptr [0x127909f0] */
  ECX = (r32((uint32_t)(0x127909f0)));
  /* 1276e540 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1276e543 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e546 push edx */
  push32((uint32_t)(EDX));
  /* 1276e547 call dword ptr [0x1279339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279339c))), 0x1276e54du);
  /* 1276e54d push 2 */
  push32((uint32_t)(0x2u));
  /* 1276e54f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e552 mov ecx, dword ptr [0x127909f0] */
  ECX = (r32((uint32_t)(0x127909f0)));
  /* 1276e558 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1276e55b push edx */
  push32((uint32_t)(EDX));
  /* 1276e55c call 0x12765790 */
  push32(0x1276e561u); f_12765790();
  /* 1276e561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e564 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e567 mov ecx, dword ptr [0x127909f0] */
  ECX = (r32((uint32_t)(0x127909f0)));
  /* 1276e56d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1276e574:;
  /* 1276e574 jmp 0x1276e4d0 */
  goto L_1276e4d0;
L_1276e579:;
  /* 1276e579 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276e57b call 0x127687a0 */
  push32(0x1276e580u); f_127687a0();
  /* 1276e580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e586 mov esp, ebp */
  ESP = (EBP);
  /* 1276e588 pop ebp */
  EBP = (pop32());
  /* 1276e589 ret  */
  ESPCHK(0x1276e4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e590 @ 0x1276e590 (68 bytes, 26 insns) */
void f_1276e590(void) {
  FTRACE(0x1276e590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e590 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e591 mov ebp, esp */
  EBP = (ESP);
  /* 1276e593 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e594 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e598 jne 0x1276e5a6 */
  if (!C.zf) goto L_1276e5a6;
  /* 1276e59a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276e59c call 0x1276e700 */
  push32(0x1276e5a1u); f_1276e700();
  /* 1276e5a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e5a4 jmp 0x1276e5d0 */
  goto L_1276e5d0;
L_1276e5a6:;
  /* 1276e5a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e5a9 push eax */
  push32((uint32_t)(EAX));
  /* 1276e5aa call 0x1276db10 */
  push32(0x1276e5afu); f_1276db10();
  /* 1276e5af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e5b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e5b6 call 0x1276e5e0 */
  push32(0x1276e5bbu); f_1276e5e0();
  /* 1276e5bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e5be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276e5c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e5c4 push edx */
  push32((uint32_t)(EDX));
  /* 1276e5c5 call 0x1276db80 */
  push32(0x1276e5cau); f_1276db80();
  /* 1276e5ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e5cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1276e5d0:;
  /* 1276e5d0 mov esp, ebp */
  ESP = (EBP);
  /* 1276e5d2 pop ebp */
  EBP = (pop32());
  /* 1276e5d3 ret  */
  ESPCHK(0x1276e590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x1276e5e0 (65 bytes, 26 insns) */
void f_1276e5e0(void) {
  FTRACE(0x1276e5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1276e5e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e5e6 push eax */
  push32((uint32_t)(EAX));
  /* 1276e5e7 call 0x1276e630 */
  push32(0x1276e5ecu); f_1276e630();
  /* 1276e5ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e5ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276e5f1 je 0x1276e5f8 */
  if (C.zf) goto L_1276e5f8;
  /* 1276e5f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276e5f6 jmp 0x1276e61f */
  goto L_1276e61f;
L_1276e5f8:;
  /* 1276e5f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e5fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276e5fe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1276e604 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276e606 je 0x1276e61d */
  if (C.zf) goto L_1276e61d;
  /* 1276e608 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e60b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1276e60e push ecx */
  push32((uint32_t)(ECX));
  /* 1276e60f call 0x1276f3f0 */
  push32(0x1276e614u); f_1276f3f0();
  /* 1276e614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e617 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1276e619 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276e61b jmp 0x1276e61f */
  goto L_1276e61f;
L_1276e61d:;
  /* 1276e61d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276e61f:;
  /* 1276e61f pop ebp */
  EBP = (pop32());
  /* 1276e620 ret  */
  ESPCHK(0x1276e5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e630 @ 0x1276e630 (183 bytes, 62 insns) */
void f_1276e630(void) {
  FTRACE(0x1276e630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e630 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e631 mov ebp, esp */
  EBP = (ESP);
  /* 1276e633 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276e636 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276e63d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e640 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276e643 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e646 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276e649 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1276e64c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e64f jne 0x1276e6cb */
  if (!C.zf) goto L_1276e6cb;
  /* 1276e651 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e654 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1276e657 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1276e65d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276e65f je 0x1276e6cb */
  if (C.zf) goto L_1276e6cb;
  /* 1276e661 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e664 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e667 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1276e669 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276e66c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276e66f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e673 jle 0x1276e6cb */
  if ((C.zf||C.sf!=C.of)) goto L_1276e6cb;
  /* 1276e675 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e678 push edx */
  push32((uint32_t)(EDX));
  /* 1276e679 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e67c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1276e67f push ecx */
  push32((uint32_t)(ECX));
  /* 1276e680 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e683 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1276e686 push eax */
  push32((uint32_t)(EAX));
  /* 1276e687 call 0x1276d5a0 */
  push32(0x1276e68cu); f_1276d5a0();
  /* 1276e68c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e68f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e692 jne 0x1276e6b5 */
  if (!C.zf) goto L_1276e6b5;
  /* 1276e694 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e697 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276e69a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1276e6a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276e6a2 je 0x1276e6b3 */
  if (C.zf) goto L_1276e6b3;
  /* 1276e6a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e6a7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1276e6aa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1276e6ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e6b0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1276e6b3:;
  /* 1276e6b3 jmp 0x1276e6cb */
  goto L_1276e6cb;
L_1276e6b5:;
  /* 1276e6b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e6b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1276e6bb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1276e6be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e6c1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1276e6c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1276e6cb:;
  /* 1276e6cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e6ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e6d1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1276e6d4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1276e6d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276e6d9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1276e6e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e6e3 mov esp, ebp */
  ESP = (EBP);
  /* 1276e6e5 pop ebp */
  EBP = (pop32());
  /* 1276e6e6 ret  */
  ESPCHK(0x1276e630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6f0 @ 0x1276e6f0 (15 bytes, 7 insns) */
void f_1276e6f0(void) {
  FTRACE(0x1276e6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1276e6f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276e6f5 call 0x1276e700 */
  push32(0x1276e6fau); f_1276e700();
  /* 1276e6fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e6fd pop ebp */
  EBP = (pop32());
  /* 1276e6fe ret  */
  ESPCHK(0x1276e6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x1276e700 (319 bytes, 94 insns) */
void f_1276e700(void) {
  FTRACE(0x1276e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e700 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e701 mov ebp, esp */
  EBP = (ESP);
  /* 1276e703 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276e706 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276e70d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1276e714 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276e716 call 0x12768700 */
  push32(0x1276e71bu); f_12768700();
  /* 1276e71b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e71e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1276e725 jmp 0x1276e730 */
  goto L_1276e730;
L_1276e727:;
  /* 1276e727 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e72a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e72d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1276e730:;
  /* 1276e730 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e733 cmp ecx, dword ptr [0x12791d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12791d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e739 jge 0x1276e823 */
  if ((C.sf==C.of)) goto L_1276e823;
  /* 1276e73f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e742 mov eax, dword ptr [0x127909f0] */
  EAX = (r32((uint32_t)(0x127909f0)));
  /* 1276e747 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e74b je 0x1276e81e */
  if (C.zf) goto L_1276e81e;
  /* 1276e751 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e754 mov edx, dword ptr [0x127909f0] */
  EDX = (r32((uint32_t)(0x127909f0)));
  /* 1276e75a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1276e75d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1276e760 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1276e766 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276e768 je 0x1276e81e */
  if (C.zf) goto L_1276e81e;
  /* 1276e76e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e771 mov eax, dword ptr [0x127909f0] */
  EAX = (r32((uint32_t)(0x127909f0)));
  /* 1276e776 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1276e779 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e77a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e77d push edx */
  push32((uint32_t)(EDX));
  /* 1276e77e call 0x1276db50 */
  push32(0x1276e783u); f_1276db50();
  /* 1276e783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e786 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e789 mov ecx, dword ptr [0x127909f0] */
  ECX = (r32((uint32_t)(0x127909f0)));
  /* 1276e78f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1276e792 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1276e795 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1276e79a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276e79c je 0x1276e805 */
  if (C.zf) goto L_1276e805;
  /* 1276e79e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e7a2 jne 0x1276e7c9 */
  if (!C.zf) goto L_1276e7c9;
  /* 1276e7a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e7a7 mov edx, dword ptr [0x127909f0] */
  EDX = (r32((uint32_t)(0x127909f0)));
  /* 1276e7ad mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1276e7b0 push eax */
  push32((uint32_t)(EAX));
  /* 1276e7b1 call 0x1276e5e0 */
  push32(0x1276e7b6u); f_1276e5e0();
  /* 1276e7b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e7b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e7bc je 0x1276e7c7 */
  if (C.zf) goto L_1276e7c7;
  /* 1276e7be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e7c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e7c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1276e7c7:;
  /* 1276e7c7 jmp 0x1276e805 */
  goto L_1276e805;
L_1276e7c9:;
  /* 1276e7c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e7cd jne 0x1276e805 */
  if (!C.zf) goto L_1276e805;
  /* 1276e7cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e7d2 mov eax, dword ptr [0x127909f0] */
  EAX = (r32((uint32_t)(0x127909f0)));
  /* 1276e7d7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1276e7da mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276e7dd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1276e7e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276e7e2 je 0x1276e805 */
  if (C.zf) goto L_1276e805;
  /* 1276e7e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e7e7 mov ecx, dword ptr [0x127909f0] */
  ECX = (r32((uint32_t)(0x127909f0)));
  /* 1276e7ed mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1276e7f0 push edx */
  push32((uint32_t)(EDX));
  /* 1276e7f1 call 0x1276e5e0 */
  push32(0x1276e7f6u); f_1276e5e0();
  /* 1276e7f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e7f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e7fc jne 0x1276e805 */
  if (!C.zf) goto L_1276e805;
  /* 1276e7fe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1276e805:;
  /* 1276e805 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e808 mov ecx, dword ptr [0x127909f0] */
  ECX = (r32((uint32_t)(0x127909f0)));
  /* 1276e80e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1276e811 push edx */
  push32((uint32_t)(EDX));
  /* 1276e812 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276e815 push eax */
  push32((uint32_t)(EAX));
  /* 1276e816 call 0x1276dbc0 */
  push32(0x1276e81bu); f_1276dbc0();
  /* 1276e81b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276e81e:;
  /* 1276e81e jmp 0x1276e727 */
  goto L_1276e727;
L_1276e823:;
  /* 1276e823 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276e825 call 0x127687a0 */
  push32(0x1276e82au); f_127687a0();
  /* 1276e82a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e82d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e831 jne 0x1276e838 */
  if (!C.zf) goto L_1276e838;
  /* 1276e833 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276e836 jmp 0x1276e83b */
  goto L_1276e83b;
L_1276e838:;
  /* 1276e838 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1276e83b:;
  /* 1276e83b mov esp, ebp */
  ESP = (EBP);
  /* 1276e83d pop ebp */
  EBP = (pop32());
  /* 1276e83e ret  */
  ESPCHK(0x1276e700u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1276e840 (15 bytes, 7 insns) */
void f_1276e840(void) {
  FTRACE(0x1276e840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e840 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e841 mov ebp, esp */
  EBP = (ESP);
  /* 1276e843 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276e845 call 0x12763c70 */
  push32(0x1276e84au); f_12763c70();
  /* 1276e84a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e84d pop ebp */
  EBP = (pop32());
  /* 1276e84e ret  */
  ESPCHK(0x1276e840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e850 @ 0x1276e850 (1007 bytes, 269 insns) */
void f_1276e850(void) {
  FTRACE(0x1276e850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276e850 push ebp */
  push32((uint32_t)(EBP));
  /* 1276e851 mov ebp, esp */
  EBP = (ESP);
  /* 1276e853 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276e859 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e85d jl 0x1276e865 */
  if ((C.sf!=C.of)) goto L_1276e865;
  /* 1276e85f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e863 jle 0x1276e86c */
  if ((C.zf||C.sf!=C.of)) goto L_1276e86c;
L_1276e865:;
  /* 1276e865 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276e867 jmp 0x1276ec3b */
  goto L_1276ec3b;
L_1276e86c:;
  /* 1276e86c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1276e86e call 0x12768700 */
  push32(0x1276e873u); f_12768700();
  /* 1276e873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e876 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1276e87d mov eax, dword ptr [0x127909dc] */
  EAX = (r32((uint32_t)(0x127909dc)));
  /* 1276e882 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e885 mov dword ptr [0x127909dc], eax */
  w32((uint32_t)(0x127909dc), (EAX));
L_1276e88a:;
  /* 1276e88a cmp dword ptr [0x127909ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e891 je 0x1276e89d */
  if (C.zf) goto L_1276e89d;
  /* 1276e893 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276e895 call dword ptr [0x127932d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932d8))), 0x1276e89bu);
  /* 1276e89b jmp 0x1276e88a */
  goto L_1276e88a;
L_1276e89d:;
  /* 1276e89d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e8a1 je 0x1276e8e1 */
  if (C.zf) goto L_1276e8e1;
  /* 1276e8a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e8a7 je 0x1276e8c1 */
  if (C.zf) goto L_1276e8c1;
  /* 1276e8a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e8ac push ecx */
  push32((uint32_t)(ECX));
  /* 1276e8ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e8b0 push edx */
  push32((uint32_t)(EDX));
  /* 1276e8b1 call 0x1276ec40 */
  push32(0x1276e8b6u); f_1276ec40();
  /* 1276e8b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e8b9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1276e8bf jmp 0x1276e8d3 */
  goto L_1276e8d3;
L_1276e8c1:;
  /* 1276e8c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276e8c4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e8c7 mov ecx, dword ptr [eax + 0x1278f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1278f4dc)));
  /* 1276e8cd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1276e8d3:;
  /* 1276e8d3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1276e8d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1276e8dc jmp 0x1276ec1b */
  goto L_1276ec1b;
L_1276e8e1:;
  /* 1276e8e1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1276e8e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1276e8ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e8f3 je 0x1276ec13 */
  if (C.zf) goto L_1276ec13;
  /* 1276e8f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e8fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1276e8ff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e902 jne 0x1276eb24 */
  if (!C.zf) goto L_1276eb24;
  /* 1276e908 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e90b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1276e90f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e912 jne 0x1276eb24 */
  if (!C.zf) goto L_1276eb24;
  /* 1276e918 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e91b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1276e91f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e922 jne 0x1276eb24 */
  if (!C.zf) goto L_1276eb24;
  /* 1276e928 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276e92b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1276e931:;
  /* 1276e931 push 0x1278c2dc */
  push32((uint32_t)(0x1278c2dcu));
  /* 1276e936 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1276e93c push ecx */
  push32((uint32_t)(ECX));
  /* 1276e93d call 0x12770aa0 */
  push32(0x1276e942u); f_12770aa0();
  /* 1276e942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e945 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1276e94b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e952 je 0x1276e97d */
  if (C.zf) goto L_1276e97d;
  /* 1276e954 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1276e95a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276e960 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1276e966 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e96d je 0x1276e97d */
  if (C.zf) goto L_1276e97d;
  /* 1276e96f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1276e975 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1276e978 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e97b jne 0x1276e9a3 */
  if (!C.zf) goto L_1276e9a3;
L_1276e97d:;
  /* 1276e97d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e981 je 0x1276e99c */
  if (C.zf) goto L_1276e99c;
  /* 1276e983 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1276e985 call 0x127687a0 */
  push32(0x1276e98au); f_127687a0();
  /* 1276e98a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e98d mov edx, dword ptr [0x127909dc] */
  EDX = (r32((uint32_t)(0x127909dc)));
  /* 1276e993 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276e996 mov dword ptr [0x127909dc], edx */
  w32((uint32_t)(0x127909dc), (EDX));
L_1276e99c:;
  /* 1276e99c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276e99e jmp 0x1276ec3b */
  goto L_1276ec3b;
L_1276e9a3:;
  /* 1276e9a3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1276e9aa jmp 0x1276e9b5 */
  goto L_1276e9b5;
L_1276e9ac:;
  /* 1276e9ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276e9af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e9b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1276e9b5:;
  /* 1276e9b5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e9b9 jg 0x1276ea03 */
  if ((!C.zf&&C.sf==C.of)) goto L_1276ea03;
  /* 1276e9bb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1276e9c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e9c2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1276e9c8 push edx */
  push32((uint32_t)(EDX));
  /* 1276e9c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276e9cc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e9cf mov ecx, dword ptr [eax + 0x1278f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1278f4d8)));
  /* 1276e9d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1276e9d6 call 0x12770a60 */
  push32(0x1276e9dbu); f_12770a60();
  /* 1276e9db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e9de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276e9e0 jne 0x1276ea01 */
  if (!C.zf) goto L_1276ea01;
  /* 1276e9e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276e9e5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276e9e8 mov eax, dword ptr [edx + 0x1278f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1278f4d8)));
  /* 1276e9ee push eax */
  push32((uint32_t)(EAX));
  /* 1276e9ef call 0x12767b30 */
  push32(0x1276e9f4u); f_12767b30();
  /* 1276e9f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276e9f7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276e9fd jne 0x1276ea01 */
  if (!C.zf) goto L_1276ea01;
  /* 1276e9ff jmp 0x1276ea03 */
  goto L_1276ea03;
L_1276ea01:;
  /* 1276ea01 jmp 0x1276e9ac */
  goto L_1276e9ac;
L_1276ea03:;
  /* 1276ea03 push 0x1278c2d8 */
  push32((uint32_t)(0x1278c2d8u));
  /* 1276ea08 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1276ea0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ea11 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1276ea17 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1276ea1d push edx */
  push32((uint32_t)(EDX));
  /* 1276ea1e call 0x12770a20 */
  push32(0x1276ea23u); f_12770a20();
  /* 1276ea23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ea26 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1276ea2c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ea33 jne 0x1276ea69 */
  if (!C.zf) goto L_1276ea69;
  /* 1276ea35 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1276ea3b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1276ea3e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ea41 je 0x1276ea69 */
  if (C.zf) goto L_1276ea69;
  /* 1276ea43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ea47 je 0x1276ea62 */
  if (C.zf) goto L_1276ea62;
  /* 1276ea49 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1276ea4b call 0x127687a0 */
  push32(0x1276ea50u); f_127687a0();
  /* 1276ea50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ea53 mov edx, dword ptr [0x127909dc] */
  EDX = (r32((uint32_t)(0x127909dc)));
  /* 1276ea59 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ea5c mov dword ptr [0x127909dc], edx */
  w32((uint32_t)(0x127909dc), (EDX));
L_1276ea62:;
  /* 1276ea62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ea64 jmp 0x1276ec3b */
  goto L_1276ec3b;
L_1276ea69:;
  /* 1276ea69 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ea6d jg 0x1276eaba */
  if ((!C.zf&&C.sf==C.of)) goto L_1276eaba;
  /* 1276ea6f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1276ea75 push eax */
  push32((uint32_t)(EAX));
  /* 1276ea76 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1276ea7c push ecx */
  push32((uint32_t)(ECX));
  /* 1276ea7d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1276ea83 push edx */
  push32((uint32_t)(EDX));
  /* 1276ea84 call 0x12768520 */
  push32(0x1276ea89u); f_12768520();
  /* 1276ea89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ea8c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1276ea92 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1276ea9a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1276eaa0 push ecx */
  push32((uint32_t)(ECX));
  /* 1276eaa1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276eaa4 push edx */
  push32((uint32_t)(EDX));
  /* 1276eaa5 call 0x1276ec40 */
  push32(0x1276eaaau); f_1276ec40();
  /* 1276eaaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eaad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276eaaf je 0x1276eaba */
  if (C.zf) goto L_1276eaba;
  /* 1276eab1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276eab4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eab7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1276eaba:;
  /* 1276eaba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1276eac0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eac6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1276eacc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1276ead2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1276ead5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ead7 je 0x1276eae8 */
  if (C.zf) goto L_1276eae8;
  /* 1276ead9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1276eadf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eae2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1276eae8:;
  /* 1276eae8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1276eaee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1276eaf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276eaf3 jne 0x1276e931 */
  if (!C.zf) goto L_1276e931;
  /* 1276eaf9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276eafd je 0x1276eb0c */
  if (C.zf) goto L_1276eb0c;
  /* 1276eaff call 0x1276ede0 */
  push32(0x1276eb04u); f_1276ede0();
  /* 1276eb04 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1276eb0a jmp 0x1276eb16 */
  goto L_1276eb16;
L_1276eb0c:;
  /* 1276eb0c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1276eb16:;
  /* 1276eb16 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1276eb1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1276eb1f jmp 0x1276ec11 */
  goto L_1276ec11;
L_1276eb24:;
  /* 1276eb24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276eb27 push edx */
  push32((uint32_t)(EDX));
  /* 1276eb28 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276eb2a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276eb2c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1276eb32 push eax */
  push32((uint32_t)(EAX));
  /* 1276eb33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276eb36 push ecx */
  push32((uint32_t)(ECX));
  /* 1276eb37 call 0x1276eee0 */
  push32(0x1276eb3cu); f_1276eee0();
  /* 1276eb3c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eb3f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276eb42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276eb46 je 0x1276ec11 */
  if (C.zf) goto L_1276ec11;
  /* 1276eb4c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1276eb53 jmp 0x1276eb5e */
  goto L_1276eb5e;
L_1276eb55:;
  /* 1276eb55 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276eb58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eb5b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1276eb5e:;
  /* 1276eb5e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276eb62 jg 0x1276ebc0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1276ebc0;
  /* 1276eb64 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276eb68 je 0x1276ebbe */
  if (C.zf) goto L_1276ebbe;
  /* 1276eb6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276eb6d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276eb70 mov ecx, dword ptr [eax + 0x1278f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1278f4dc)));
  /* 1276eb76 push ecx */
  push32((uint32_t)(ECX));
  /* 1276eb77 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1276eb7d push edx */
  push32((uint32_t)(EDX));
  /* 1276eb7e call 0x12770990 */
  push32(0x1276eb83u); f_12770990();
  /* 1276eb83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eb86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276eb88 je 0x1276ebb5 */
  if (C.zf) goto L_1276ebb5;
  /* 1276eb8a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1276eb90 push eax */
  push32((uint32_t)(EAX));
  /* 1276eb91 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276eb94 push ecx */
  push32((uint32_t)(ECX));
  /* 1276eb95 call 0x1276ec40 */
  push32(0x1276eb9au); f_1276ec40();
  /* 1276eb9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eb9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276eb9f je 0x1276ebac */
  if (C.zf) goto L_1276ebac;
  /* 1276eba1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276eba4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eba7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1276ebaa jmp 0x1276ebb3 */
  goto L_1276ebb3;
L_1276ebac:;
  /* 1276ebac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1276ebb3:;
  /* 1276ebb3 jmp 0x1276ebbe */
  goto L_1276ebbe;
L_1276ebb5:;
  /* 1276ebb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276ebb8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ebbb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1276ebbe:;
  /* 1276ebbe jmp 0x1276eb55 */
  goto L_1276eb55;
L_1276ebc0:;
  /* 1276ebc0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ebc4 je 0x1276ebeb */
  if (C.zf) goto L_1276ebeb;
  /* 1276ebc6 call 0x1276ede0 */
  push32(0x1276ebcbu); f_1276ede0();
  /* 1276ebcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276ebce push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ebd0 mov ecx, dword ptr [0x1278f4dc] */
  ECX = (r32((uint32_t)(0x1278f4dc)));
  /* 1276ebd6 push ecx */
  push32((uint32_t)(ECX));
  /* 1276ebd7 call 0x12765790 */
  push32(0x1276ebdcu); f_12765790();
  /* 1276ebdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ebdf mov dword ptr [0x1278f4dc], 0 */
  w32((uint32_t)(0x1278f4dc), (0x0u));
  /* 1276ebe9 jmp 0x1276ec11 */
  goto L_1276ec11;
L_1276ebeb:;
  /* 1276ebeb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ebef je 0x1276ebfe */
  if (C.zf) goto L_1276ebfe;
  /* 1276ebf1 call 0x1276ede0 */
  push32(0x1276ebf6u); f_1276ede0();
  /* 1276ebf6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1276ebfc jmp 0x1276ec08 */
  goto L_1276ec08;
L_1276ebfe:;
  /* 1276ebfe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1276ec08:;
  /* 1276ec08 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1276ec0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1276ec11:;
  /* 1276ec11 jmp 0x1276ec1b */
  goto L_1276ec1b;
L_1276ec13:;
  /* 1276ec13 call 0x1276ede0 */
  push32(0x1276ec18u); f_1276ede0();
  /* 1276ec18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1276ec1b:;
  /* 1276ec1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ec1f je 0x1276ec38 */
  if (C.zf) goto L_1276ec38;
  /* 1276ec21 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1276ec23 call 0x127687a0 */
  push32(0x1276ec28u); f_127687a0();
  /* 1276ec28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ec2b mov eax, dword ptr [0x127909dc] */
  EAX = (r32((uint32_t)(0x127909dc)));
  /* 1276ec30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ec33 mov dword ptr [0x127909dc], eax */
  w32((uint32_t)(0x127909dc), (EAX));
L_1276ec38:;
  /* 1276ec38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1276ec3b:;
  /* 1276ec3b mov esp, ebp */
  ESP = (EBP);
  /* 1276ec3d pop ebp */
  EBP = (pop32());
  /* 1276ec3e ret  */
  ESPCHK(0x1276e850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec40 @ 0x1276ec40 (403 bytes, 117 insns) */
void f_1276ec40(void) {
  FTRACE(0x1276ec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276ec40 push ebp */
  push32((uint32_t)(EBP));
  /* 1276ec41 mov ebp, esp */
  EBP = (ESP);
  /* 1276ec43 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ec49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ec4c push eax */
  push32((uint32_t)(EAX));
  /* 1276ec4d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1276ec53 push ecx */
  push32((uint32_t)(ECX));
  /* 1276ec54 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1276ec5a push edx */
  push32((uint32_t)(EDX));
  /* 1276ec5b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1276ec61 push eax */
  push32((uint32_t)(EAX));
  /* 1276ec62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276ec65 push ecx */
  push32((uint32_t)(ECX));
  /* 1276ec66 call 0x1276eee0 */
  push32(0x1276ec6bu); f_1276eee0();
  /* 1276ec6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ec6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ec70 jne 0x1276ec79 */
  if (!C.zf) goto L_1276ec79;
  /* 1276ec72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ec74 jmp 0x1276edcf */
  goto L_1276edcf;
L_1276ec79:;
  /* 1276ec79 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1276ec7e push 0x1278c2e0 */
  push32((uint32_t)(0x1278c2e0u));
  /* 1276ec83 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ec85 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1276ec8b push edx */
  push32((uint32_t)(EDX));
  /* 1276ec8c call 0x12767b30 */
  push32(0x1276ec91u); f_12767b30();
  /* 1276ec91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ec94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ec97 push eax */
  push32((uint32_t)(EAX));
  /* 1276ec98 call 0x12764d00 */
  push32(0x1276ec9du); f_12764d00();
  /* 1276ec9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eca0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276eca3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276eca7 jne 0x1276ecb0 */
  if (!C.zf) goto L_1276ecb0;
  /* 1276eca9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ecab jmp 0x1276edcf */
  goto L_1276edcf;
L_1276ecb0:;
  /* 1276ecb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ecb3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ecb6 mov ecx, dword ptr [eax + 0x1278f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1278f4dc)));
  /* 1276ecbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276ecbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ecc2 mov eax, dword ptr [edx*4 + 0x12790858] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12790858)));
  /* 1276ecc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276eccc push 6 */
  push32((uint32_t)(0x6u));
  /* 1276ecce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ecd1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ecd4 add ecx, 0x127908a8 */
  { uint32_t _a=(ECX),_b=(0x127908a8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ecda push ecx */
  push32((uint32_t)(ECX));
  /* 1276ecdb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1276ecde push edx */
  push32((uint32_t)(EDX));
  /* 1276ecdf call 0x1276b5e0 */
  push32(0x1276ece4u); f_1276b5e0();
  /* 1276ece4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ece7 mov eax, dword ptr [0x12790870] */
  EAX = (r32((uint32_t)(0x12790870)));
  /* 1276ecec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1276ecef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1276ecf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1276ecf6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ecf9 push edx */
  push32((uint32_t)(EDX));
  /* 1276ecfa call 0x12767cb0 */
  push32(0x1276ecffu); f_12767cb0();
  /* 1276ecff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ed02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ed05 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ed08 mov dword ptr [ecx + 0x1278f4dc], eax */
  w32((uint32_t)(ECX + 0x1278f4dc), (EAX));
  /* 1276ed0e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1276ed14 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1276ed1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ed1d mov dword ptr [eax*4 + 0x12790858], edx */
  w32((uint32_t)(EAX*4 + 0x12790858), (EDX));
  /* 1276ed24 push 6 */
  push32((uint32_t)(0x6u));
  /* 1276ed26 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1276ed2c push ecx */
  push32((uint32_t)(ECX));
  /* 1276ed2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ed30 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ed33 add edx, 0x127908a8 */
  { uint32_t _a=(EDX),_b=(0x127908a8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ed39 push edx */
  push32((uint32_t)(EDX));
  /* 1276ed3a call 0x1276b5e0 */
  push32(0x1276ed3fu); f_1276b5e0();
  /* 1276ed3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ed42 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ed46 jne 0x1276ed53 */
  if (!C.zf) goto L_1276ed53;
  /* 1276ed48 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1276ed4e mov dword ptr [0x12790870], eax */
  w32((uint32_t)(0x12790870), (EAX));
L_1276ed53:;
  /* 1276ed53 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ed57 jne 0x1276ed65 */
  if (!C.zf) goto L_1276ed65;
  /* 1276ed59 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1276ed5f mov dword ptr [0x12790874], ecx */
  w32((uint32_t)(0x12790874), (ECX));
L_1276ed65:;
  /* 1276ed65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ed68 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ed6b call dword ptr [edx + 0x1278f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1278f4e0))), 0x1276ed71u);
  /* 1276ed71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ed73 je 0x1276edac */
  if (C.zf) goto L_1276edac;
  /* 1276ed75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ed78 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ed7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276ed7e mov dword ptr [eax + 0x1278f4dc], ecx */
  w32((uint32_t)(EAX + 0x1278f4dc), (ECX));
  /* 1276ed84 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ed86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276ed89 push edx */
  push32((uint32_t)(EDX));
  /* 1276ed8a call 0x12765790 */
  push32(0x1276ed8fu); f_12765790();
  /* 1276ed8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ed92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ed95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276ed98 mov dword ptr [eax*4 + 0x12790858], ecx */
  w32((uint32_t)(EAX*4 + 0x12790858), (ECX));
  /* 1276ed9f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276eda2 mov dword ptr [0x12790870], edx */
  w32((uint32_t)(0x12790870), (EDX));
  /* 1276eda8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276edaa jmp 0x1276edcf */
  goto L_1276edcf;
L_1276edac:;
  /* 1276edac cmp dword ptr [ebp - 0xc], 0x1278f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1278f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276edb3 je 0x1276edc3 */
  if (C.zf) goto L_1276edc3;
  /* 1276edb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276edb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276edba push eax */
  push32((uint32_t)(EAX));
  /* 1276edbb call 0x12765790 */
  push32(0x1276edc0u); f_12765790();
  /* 1276edc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276edc3:;
  /* 1276edc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276edc6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276edc9 mov eax, dword ptr [ecx + 0x1278f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1278f4dc)));
L_1276edcf:;
  /* 1276edcf mov esp, ebp */
  ESP = (EBP);
  /* 1276edd1 pop ebp */
  EBP = (pop32());
  /* 1276edd2 ret  */
  ESPCHK(0x1276ec40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ede0 @ 0x1276ede0 (256 bytes, 72 insns) */
void f_1276ede0(void) {
  FTRACE(0x1276ede0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276ede0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276ede1 mov ebp, esp */
  EBP = (ESP);
  /* 1276ede3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276ede6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1276eded cmp dword ptr [0x1278f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1278f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276edf4 jne 0x1276ee14 */
  if (!C.zf) goto L_1276ee14;
  /* 1276edf6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1276edfb push 0x1278c2e0 */
  push32((uint32_t)(0x1278c2e0u));
  /* 1276ee00 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ee02 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1276ee07 call 0x12764d00 */
  push32(0x1276ee0cu); f_12764d00();
  /* 1276ee0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ee0f mov dword ptr [0x1278f4dc], eax */
  w32((uint32_t)(0x1278f4dc), (EAX));
L_1276ee14:;
  /* 1276ee14 mov eax, dword ptr [0x1278f4dc] */
  EAX = (r32((uint32_t)(0x1278f4dc)));
  /* 1276ee19 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1276ee1c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1276ee23 jmp 0x1276ee2e */
  goto L_1276ee2e;
L_1276ee25:;
  /* 1276ee25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276ee28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ee2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1276ee2e:;
  /* 1276ee2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276ee31 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ee34 mov eax, dword ptr [edx + 0x1278f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1278f4dc)));
  /* 1276ee3a push eax */
  push32((uint32_t)(EAX));
  /* 1276ee3b push 0x1278c2ec */
  push32((uint32_t)(0x1278c2ecu));
  /* 1276ee40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276ee43 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ee46 mov edx, dword ptr [ecx + 0x1278f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1278f4d8)));
  /* 1276ee4c push edx */
  push32((uint32_t)(EDX));
  /* 1276ee4d push 3 */
  push32((uint32_t)(0x3u));
  /* 1276ee4f mov eax, dword ptr [0x1278f4dc] */
  EAX = (r32((uint32_t)(0x1278f4dc)));
  /* 1276ee54 push eax */
  push32((uint32_t)(EAX));
  /* 1276ee55 call 0x1276f080 */
  push32(0x1276ee5au); f_1276f080();
  /* 1276ee5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ee5d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ee61 jge 0x1276eea9 */
  if ((C.sf==C.of)) goto L_1276eea9;
  /* 1276ee63 push 0x1278c2d8 */
  push32((uint32_t)(0x1278c2d8u));
  /* 1276ee68 mov ecx, dword ptr [0x1278f4dc] */
  ECX = (r32((uint32_t)(0x1278f4dc)));
  /* 1276ee6e push ecx */
  push32((uint32_t)(ECX));
  /* 1276ee6f call 0x12767cc0 */
  push32(0x1276ee74u); f_12767cc0();
  /* 1276ee74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ee77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276ee7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ee7d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ee80 mov eax, dword ptr [edx + 0x1278f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1278f4dc)));
  /* 1276ee86 push eax */
  push32((uint32_t)(EAX));
  /* 1276ee87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276ee8a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276ee8d mov edx, dword ptr [ecx + 0x1278f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1278f4dc)));
  /* 1276ee93 push edx */
  push32((uint32_t)(EDX));
  /* 1276ee94 call 0x12770990 */
  push32(0x1276ee99u); f_12770990();
  /* 1276ee99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ee9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ee9e je 0x1276eea7 */
  if (C.zf) goto L_1276eea7;
  /* 1276eea0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1276eea7:;
  /* 1276eea7 jmp 0x1276eed7 */
  goto L_1276eed7;
L_1276eea9:;
  /* 1276eea9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276eead jne 0x1276eeb6 */
  if (!C.zf) goto L_1276eeb6;
  /* 1276eeaf mov eax, dword ptr [0x1278f4dc] */
  EAX = (r32((uint32_t)(0x1278f4dc)));
  /* 1276eeb4 jmp 0x1276eedc */
  goto L_1276eedc;
L_1276eeb6:;
  /* 1276eeb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276eeb8 mov eax, dword ptr [0x1278f4dc] */
  EAX = (r32((uint32_t)(0x1278f4dc)));
  /* 1276eebd push eax */
  push32((uint32_t)(EAX));
  /* 1276eebe call 0x12765790 */
  push32(0x1276eec3u); f_12765790();
  /* 1276eec3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276eec6 mov dword ptr [0x1278f4dc], 0 */
  w32((uint32_t)(0x1278f4dc), (0x0u));
  /* 1276eed0 mov eax, dword ptr [0x1278f4f4] */
  EAX = (r32((uint32_t)(0x1278f4f4)));
  /* 1276eed5 jmp 0x1276eedc */
  goto L_1276eedc;
L_1276eed7:;
  /* 1276eed7 jmp 0x1276ee25 */
  goto L_1276ee25;
L_1276eedc:;
  /* 1276eedc mov esp, ebp */
  ESP = (EBP);
  /* 1276eede pop ebp */
  EBP = (pop32());
  /* 1276eedf ret  */
  ESPCHK(0x1276ede0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eee0 @ 0x1276eee0 (388 bytes, 115 insns) */
void f_1276eee0(void) {
  FTRACE(0x1276eee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276eee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276eee1 mov ebp, esp */
  EBP = (ESP);
  /* 1276eee3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276eee9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276eeed jne 0x1276eef6 */
  if (!C.zf) goto L_1276eef6;
  /* 1276eeef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276eef1 jmp 0x1276f060 */
  goto L_1276f060;
L_1276eef6:;
  /* 1276eef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276eef9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1276eefc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276eeff jne 0x1276ef50 */
  if (!C.zf) goto L_1276ef50;
  /* 1276ef01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ef04 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1276ef08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ef0a jne 0x1276ef50 */
  if (!C.zf) goto L_1276ef50;
  /* 1276ef0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276ef0f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1276ef12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276ef15 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1276ef19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ef1d je 0x1276ef39 */
  if (C.zf) goto L_1276ef39;
  /* 1276ef1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276ef22 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1276ef27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276ef2a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1276ef30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276ef33 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1276ef39:;
  /* 1276ef39 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ef3d je 0x1276ef48 */
  if (C.zf) goto L_1276ef48;
  /* 1276ef3f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276ef42 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1276ef48:;
  /* 1276ef48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276ef4b jmp 0x1276f060 */
  goto L_1276f060;
L_1276ef50:;
  /* 1276ef50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ef53 push ecx */
  push32((uint32_t)(ECX));
  /* 1276ef54 push 0x1278f450 */
  push32((uint32_t)(0x1278f450u));
  /* 1276ef59 call 0x12770990 */
  push32(0x1276ef5eu); f_12770990();
  /* 1276ef5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ef61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ef63 je 0x1276f018 */
  if (C.zf) goto L_1276f018;
  /* 1276ef69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ef6c push edx */
  push32((uint32_t)(EDX));
  /* 1276ef6d push 0x1278f3cc */
  push32((uint32_t)(0x1278f3ccu));
  /* 1276ef72 call 0x12770990 */
  push32(0x1276ef77u); f_12770990();
  /* 1276ef77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ef7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ef7c je 0x1276f018 */
  if (C.zf) goto L_1276f018;
  /* 1276ef82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276ef85 push eax */
  push32((uint32_t)(EAX));
  /* 1276ef86 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1276ef8c push ecx */
  push32((uint32_t)(ECX));
  /* 1276ef8d call 0x1276f0d0 */
  push32(0x1276ef92u); f_1276f0d0();
  /* 1276ef92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ef95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276ef97 je 0x1276efa0 */
  if (C.zf) goto L_1276efa0;
  /* 1276ef99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ef9b jmp 0x1276f060 */
  goto L_1276f060;
L_1276efa0:;
  /* 1276efa0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1276efa6 push edx */
  push32((uint32_t)(EDX));
  /* 1276efa7 push 0x12790880 */
  push32((uint32_t)(0x12790880u));
  /* 1276efac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1276efb2 push eax */
  push32((uint32_t)(EAX));
  /* 1276efb3 call 0x12770ae0 */
  push32(0x1276efb8u); f_12770ae0();
  /* 1276efb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276efbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276efbd jne 0x1276efc6 */
  if (!C.zf) goto L_1276efc6;
  /* 1276efbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276efc1 jmp 0x1276f060 */
  goto L_1276f060;
L_1276efc6:;
  /* 1276efc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276efc8 mov cx, word ptr [0x12790884] */
  CX = (r16((uint32_t)(0x12790884)));
  /* 1276efcf mov dword ptr [0x12790888], ecx */
  w32((uint32_t)(0x12790888), (ECX));
  /* 1276efd5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1276efdb push edx */
  push32((uint32_t)(EDX));
  /* 1276efdc push 0x1278f450 */
  push32((uint32_t)(0x1278f450u));
  /* 1276efe1 call 0x1276f230 */
  push32(0x1276efe6u); f_1276f230();
  /* 1276efe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276efe9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276efec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1276efef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276eff1 je 0x1276f006 */
  if (C.zf) goto L_1276f006;
  /* 1276eff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276eff6 push edx */
  push32((uint32_t)(EDX));
  /* 1276eff7 push 0x1278f3cc */
  push32((uint32_t)(0x1278f3ccu));
  /* 1276effc call 0x12767cb0 */
  push32(0x1276f001u); f_12767cb0();
  /* 1276f001 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f004 jmp 0x1276f018 */
  goto L_1276f018;
L_1276f006:;
  /* 1276f006 push 0x1278f450 */
  push32((uint32_t)(0x1278f450u));
  /* 1276f00b push 0x1278f3cc */
  push32((uint32_t)(0x1278f3ccu));
  /* 1276f010 call 0x12767cb0 */
  push32(0x1276f015u); f_12767cb0();
  /* 1276f015 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276f018:;
  /* 1276f018 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f01c je 0x1276f031 */
  if (C.zf) goto L_1276f031;
  /* 1276f01e push 6 */
  push32((uint32_t)(0x6u));
  /* 1276f020 push 0x12790880 */
  push32((uint32_t)(0x12790880u));
  /* 1276f025 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276f028 push eax */
  push32((uint32_t)(EAX));
  /* 1276f029 call 0x1276b5e0 */
  push32(0x1276f02eu); f_1276b5e0();
  /* 1276f02e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276f031:;
  /* 1276f031 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f035 je 0x1276f04a */
  if (C.zf) goto L_1276f04a;
  /* 1276f037 push 4 */
  push32((uint32_t)(0x4u));
  /* 1276f039 push 0x12790888 */
  push32((uint32_t)(0x12790888u));
  /* 1276f03e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276f041 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f042 call 0x1276b5e0 */
  push32(0x1276f047u); f_1276b5e0();
  /* 1276f047 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276f04a:;
  /* 1276f04a push 0x1278f450 */
  push32((uint32_t)(0x1278f450u));
  /* 1276f04f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f052 push edx */
  push32((uint32_t)(EDX));
  /* 1276f053 call 0x12767cb0 */
  push32(0x1276f058u); f_12767cb0();
  /* 1276f058 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f05b mov eax, 0x1278f450 */
  EAX = (0x1278f450u);
L_1276f060:;
  /* 1276f060 mov esp, ebp */
  ESP = (EBP);
  /* 1276f062 pop ebp */
  EBP = (pop32());
  /* 1276f063 ret  */
  ESPCHK(0x1276eee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f070 @ 0x1276f070 (7 bytes, 5 insns) */
void f_1276f070(void) {
  FTRACE(0x1276f070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276f070 push ebp */
  push32((uint32_t)(EBP));
  /* 1276f071 mov ebp, esp */
  EBP = (ESP);
  /* 1276f073 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276f075 pop ebp */
  EBP = (pop32());
  /* 1276f076 ret  */
  ESPCHK(0x1276f070u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1276f080 (79 bytes, 28 insns) */
void f_1276f080(void) {
  FTRACE(0x1276f080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276f080 push ebp */
  push32((uint32_t)(EBP));
  /* 1276f081 mov ebp, esp */
  EBP = (ESP);
  /* 1276f083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276f086 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1276f089 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276f08c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1276f093 jmp 0x1276f09e */
  goto L_1276f09e;
L_1276f095:;
  /* 1276f095 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276f098 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f09b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1276f09e:;
  /* 1276f09e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276f0a1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f0a4 jge 0x1276f0c4 */
  if ((C.sf==C.of)) goto L_1276f0c4;
  /* 1276f0a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f0a9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f0ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276f0af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f0b2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1276f0b5 push edx */
  push32((uint32_t)(EDX));
  /* 1276f0b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f0b9 push eax */
  push32((uint32_t)(EAX));
  /* 1276f0ba call 0x12767cc0 */
  push32(0x1276f0bfu); f_12767cc0();
  /* 1276f0bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f0c2 jmp 0x1276f095 */
  goto L_1276f095;
L_1276f0c4:;
  /* 1276f0c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276f0cb mov esp, ebp */
  ESP = (EBP);
  /* 1276f0cd pop ebp */
  EBP = (pop32());
  /* 1276f0ce ret  */
  ESPCHK(0x1276f080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0d0 @ 0x1276f0d0 (349 bytes, 122 insns) */
void f_1276f0d0(void) {
  FTRACE(0x1276f0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276f0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276f0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1276f0d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276f0d6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1276f0db push 0 */
  push32((uint32_t)(0x0u));
  /* 1276f0dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f0e0 push eax */
  push32((uint32_t)(EAX));
  /* 1276f0e1 call 0x12768a70 */
  push32(0x1276f0e6u); f_12768a70();
  /* 1276f0e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f0e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f0ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1276f0ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276f0f1 jne 0x1276f0fa */
  if (!C.zf) goto L_1276f0fa;
  /* 1276f0f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276f0f5 jmp 0x1276f229 */
  goto L_1276f229;
L_1276f0fa:;
  /* 1276f0fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f0fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1276f100 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f103 jne 0x1276f130 */
  if (!C.zf) goto L_1276f130;
  /* 1276f105 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f108 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1276f10c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276f10e je 0x1276f130 */
  if (C.zf) goto L_1276f130;
  /* 1276f110 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f113 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f116 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f117 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f11a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f120 push edx */
  push32((uint32_t)(EDX));
  /* 1276f121 call 0x12767cb0 */
  push32(0x1276f126u); f_12767cb0();
  /* 1276f126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f129 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276f12b jmp 0x1276f229 */
  goto L_1276f229;
L_1276f130:;
  /* 1276f130 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276f137 jmp 0x1276f142 */
  goto L_1276f142;
L_1276f139:;
  /* 1276f139 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f13c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f13f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1276f142:;
  /* 1276f142 push 0x1278c2f0 */
  push32((uint32_t)(0x1278c2f0u));
  /* 1276f147 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f14a push ecx */
  push32((uint32_t)(ECX));
  /* 1276f14b call 0x12770a20 */
  push32(0x1276f150u); f_12770a20();
  /* 1276f150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f153 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1276f156 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f15a jne 0x1276f164 */
  if (!C.zf) goto L_1276f164;
  /* 1276f15c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276f15f jmp 0x1276f229 */
  goto L_1276f229;
L_1276f164:;
  /* 1276f164 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f167 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f16a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1276f16c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1276f16f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f173 jne 0x1276f19a */
  if (!C.zf) goto L_1276f19a;
  /* 1276f175 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f179 jge 0x1276f19a */
  if ((C.sf==C.of)) goto L_1276f19a;
  /* 1276f17b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1276f17f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f182 je 0x1276f19a */
  if (C.zf) goto L_1276f19a;
  /* 1276f184 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f187 push edx */
  push32((uint32_t)(EDX));
  /* 1276f188 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f18b push eax */
  push32((uint32_t)(EAX));
  /* 1276f18c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f18f push ecx */
  push32((uint32_t)(ECX));
  /* 1276f190 call 0x12768520 */
  push32(0x1276f195u); f_12768520();
  /* 1276f195 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f198 jmp 0x1276f200 */
  goto L_1276f200;
L_1276f19a:;
  /* 1276f19a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f19e jne 0x1276f1c8 */
  if (!C.zf) goto L_1276f1c8;
  /* 1276f1a0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f1a4 jge 0x1276f1c8 */
  if ((C.sf==C.of)) goto L_1276f1c8;
  /* 1276f1a6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1276f1aa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f1ad je 0x1276f1c8 */
  if (C.zf) goto L_1276f1c8;
  /* 1276f1af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f1b2 push eax */
  push32((uint32_t)(EAX));
  /* 1276f1b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f1b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f1b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f1ba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f1bd push edx */
  push32((uint32_t)(EDX));
  /* 1276f1be call 0x12768520 */
  push32(0x1276f1c3u); f_12768520();
  /* 1276f1c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f1c6 jmp 0x1276f200 */
  goto L_1276f200;
L_1276f1c8:;
  /* 1276f1c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f1cc jne 0x1276f1fb */
  if (!C.zf) goto L_1276f1fb;
  /* 1276f1ce movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1276f1d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276f1d4 je 0x1276f1df */
  if (C.zf) goto L_1276f1df;
  /* 1276f1d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1276f1da cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f1dd jne 0x1276f1fb */
  if (!C.zf) goto L_1276f1fb;
L_1276f1df:;
  /* 1276f1df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f1e2 push edx */
  push32((uint32_t)(EDX));
  /* 1276f1e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f1e6 push eax */
  push32((uint32_t)(EAX));
  /* 1276f1e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f1ea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f1f1 call 0x12768520 */
  push32(0x1276f1f6u); f_12768520();
  /* 1276f1f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f1f9 jmp 0x1276f200 */
  goto L_1276f200;
L_1276f1fb:;
  /* 1276f1fb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276f1fe jmp 0x1276f229 */
  goto L_1276f229;
L_1276f200:;
  /* 1276f200 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1276f204 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f207 jne 0x1276f20b */
  if (!C.zf) goto L_1276f20b;
  /* 1276f209 jmp 0x1276f227 */
  goto L_1276f227;
L_1276f20b:;
  /* 1276f20b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1276f20f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276f211 jne 0x1276f215 */
  if (!C.zf) goto L_1276f215;
  /* 1276f213 jmp 0x1276f227 */
  goto L_1276f227;
L_1276f215:;
  /* 1276f215 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f218 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f21b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1276f21f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1276f222 jmp 0x1276f139 */
  goto L_1276f139;
L_1276f227:;
  /* 1276f227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276f229:;
  /* 1276f229 mov esp, ebp */
  ESP = (EBP);
  /* 1276f22b pop ebp */
  EBP = (pop32());
  /* 1276f22c ret  */
  ESPCHK(0x1276f0d0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1276f230 (101 bytes, 36 insns) */
void f_1276f230(void) {
  FTRACE(0x1276f230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276f230 push ebp */
  push32((uint32_t)(EBP));
  /* 1276f231 mov ebp, esp */
  EBP = (ESP);
  /* 1276f233 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f236 push eax */
  push32((uint32_t)(EAX));
  /* 1276f237 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f23a push ecx */
  push32((uint32_t)(ECX));
  /* 1276f23b call 0x12767cb0 */
  push32(0x1276f240u); f_12767cb0();
  /* 1276f240 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f243 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f246 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1276f24a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276f24c je 0x1276f268 */
  if (C.zf) goto L_1276f268;
  /* 1276f24e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f251 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f254 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f255 push 0x1278c2f8 */
  push32((uint32_t)(0x1278c2f8u));
  /* 1276f25a push 2 */
  push32((uint32_t)(0x2u));
  /* 1276f25c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f25f push edx */
  push32((uint32_t)(EDX));
  /* 1276f260 call 0x1276f080 */
  push32(0x1276f265u); f_1276f080();
  /* 1276f265 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276f268:;
  /* 1276f268 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f26b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1276f272 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276f274 je 0x1276f293 */
  if (C.zf) goto L_1276f293;
  /* 1276f276 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276f279 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f27f push edx */
  push32((uint32_t)(EDX));
  /* 1276f280 push 0x1278c2f4 */
  push32((uint32_t)(0x1278c2f4u));
  /* 1276f285 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276f287 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f28a push eax */
  push32((uint32_t)(EAX));
  /* 1276f28b call 0x1276f080 */
  push32(0x1276f290u); f_1276f080();
  /* 1276f290 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276f293:;
  /* 1276f293 pop ebp */
  EBP = (pop32());
  /* 1276f294 ret  */
  ESPCHK(0x1276f230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2a0 @ 0x1276f2a0 (130 bytes, 50 insns) */
void f_1276f2a0(void) {
  FTRACE(0x1276f2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276f2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276f2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1276f2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f2a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1276f2a5 push esi */
  push32((uint32_t)(ESI));
  /* 1276f2a6 push edi */
  push32((uint32_t)(EDI));
  /* 1276f2a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1276f2ae:;
  /* 1276f2ae cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f2b2 jne 0x1276f2d2 */
  if (!C.zf) goto L_1276f2d2;
  /* 1276f2b4 push 0x1278c308 */
  push32((uint32_t)(0x1278c308u));
  /* 1276f2b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276f2bb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1276f2bd push 0x1278c2fc */
  push32((uint32_t)(0x1278c2fcu));
  /* 1276f2c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276f2c4 call 0x12763dc0 */
  push32(0x1276f2c9u); f_12763dc0();
  /* 1276f2c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f2cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f2cf jne 0x1276f2d2 */
  if (!C.zf) goto L_1276f2d2;
  /* 1276f2d1 int3  */
  x86_unimpl("int3 @ 0x1276f2d1");
L_1276f2d2:;
  /* 1276f2d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276f2d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276f2d6 jne 0x1276f2ae */
  if (!C.zf) goto L_1276f2ae;
  /* 1276f2d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f2db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276f2de and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1276f2e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276f2e3 je 0x1276f2f1 */
  if (C.zf) goto L_1276f2f1;
  /* 1276f2e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f2e8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1276f2ef jmp 0x1276f318 */
  goto L_1276f318;
L_1276f2f1:;
  /* 1276f2f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f2f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f2f5 call 0x1276db10 */
  push32(0x1276f2fau); f_1276db10();
  /* 1276f2fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f2fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f300 push edx */
  push32((uint32_t)(EDX));
  /* 1276f301 call 0x1276f330 */
  push32(0x1276f306u); f_1276f330();
  /* 1276f306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f309 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276f30c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f30f push eax */
  push32((uint32_t)(EAX));
  /* 1276f310 call 0x1276db80 */
  push32(0x1276f315u); f_1276db80();
  /* 1276f315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276f318:;
  /* 1276f318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f31b pop edi */
  EDI = (pop32());
  /* 1276f31c pop esi */
  ESI = (pop32());
  /* 1276f31d pop ebx */
  EBX = (pop32());
  /* 1276f31e mov esp, ebp */
  ESP = (EBP);
  /* 1276f320 pop ebp */
  EBP = (pop32());
  /* 1276f321 ret  */
  ESPCHK(0x1276f2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f330 @ 0x1276f330 (190 bytes, 67 insns) */
void f_1276f330(void) {
  FTRACE(0x1276f330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276f330 push ebp */
  push32((uint32_t)(EBP));
  /* 1276f331 mov ebp, esp */
  EBP = (ESP);
  /* 1276f333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276f336 push ebx */
  push32((uint32_t)(EBX));
  /* 1276f337 push esi */
  push32((uint32_t)(ESI));
  /* 1276f338 push edi */
  push32((uint32_t)(EDI));
  /* 1276f339 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1276f340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f343 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1276f346:;
  /* 1276f346 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f34a jne 0x1276f36a */
  if (!C.zf) goto L_1276f36a;
  /* 1276f34c push 0x1278c1ac */
  push32((uint32_t)(0x1278c1acu));
  /* 1276f351 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276f353 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1276f355 push 0x1278c2fc */
  push32((uint32_t)(0x1278c2fcu));
  /* 1276f35a push 2 */
  push32((uint32_t)(0x2u));
  /* 1276f35c call 0x12763dc0 */
  push32(0x1276f361u); f_12763dc0();
  /* 1276f361 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f364 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f367 jne 0x1276f36a */
  if (!C.zf) goto L_1276f36a;
  /* 1276f369 int3  */
  x86_unimpl("int3 @ 0x1276f369");
L_1276f36a:;
  /* 1276f36a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f36c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276f36e jne 0x1276f346 */
  if (!C.zf) goto L_1276f346;
  /* 1276f370 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276f373 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1276f376 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1276f37b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276f37d je 0x1276f3da */
  if (C.zf) goto L_1276f3da;
  /* 1276f37f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276f382 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f383 call 0x1276e630 */
  push32(0x1276f388u); f_1276e630();
  /* 1276f388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f38b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276f38e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276f391 push edx */
  push32((uint32_t)(EDX));
  /* 1276f392 call 0x127719b0 */
  push32(0x1276f397u); f_127719b0();
  /* 1276f397 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f39a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276f39d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1276f3a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f3a1 call 0x12771880 */
  push32(0x1276f3a6u); f_12771880();
  /* 1276f3a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276f3ab jge 0x1276f3b6 */
  if ((C.sf==C.of)) goto L_1276f3b6;
  /* 1276f3ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1276f3b4 jmp 0x1276f3da */
  goto L_1276f3da;
L_1276f3b6:;
  /* 1276f3b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276f3b9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f3bd je 0x1276f3da */
  if (C.zf) goto L_1276f3da;
  /* 1276f3bf push 2 */
  push32((uint32_t)(0x2u));
  /* 1276f3c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276f3c4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1276f3c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f3c8 call 0x12765790 */
  push32(0x1276f3cdu); f_12765790();
  /* 1276f3cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f3d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276f3d3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1276f3da:;
  /* 1276f3da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276f3dd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1276f3e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f3e7 pop edi */
  EDI = (pop32());
  /* 1276f3e8 pop esi */
  ESI = (pop32());
  /* 1276f3e9 pop ebx */
  EBX = (pop32());
  /* 1276f3ea mov esp, ebp */
  ESP = (EBP);
  /* 1276f3ec pop ebp */
  EBP = (pop32());
  /* 1276f3ed ret  */
  ESPCHK(0x1276f330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3f0 @ 0x1276f3f0 (210 bytes, 63 insns) */
void f_1276f3f0(void) {
  FTRACE(0x1276f3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276f3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276f3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1276f3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f3f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f3f7 cmp eax, dword ptr [0x1279217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f3fd jae 0x1276f421 */
  if (!C.cf) goto L_1276f421;
  /* 1276f3ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f402 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1276f405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f408 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1276f40b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276f40e mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 1276f415 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1276f41a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1276f41d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276f41f jne 0x1276f434 */
  if (!C.zf) goto L_1276f434;
L_1276f421:;
  /* 1276f421 call 0x1276cbd0 */
  push32(0x1276f426u); f_1276cbd0();
  /* 1276f426 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1276f42c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276f42f jmp 0x1276f4be */
  goto L_1276f4be;
L_1276f434:;
  /* 1276f434 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f437 push edx */
  push32((uint32_t)(EDX));
  /* 1276f438 call 0x1276e3f0 */
  push32(0x1276f43du); f_1276e3f0();
  /* 1276f43d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f440 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f443 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1276f446 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f449 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1276f44c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276f44f mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 1276f456 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1276f45b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1276f45e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276f460 je 0x1276f49d */
  if (C.zf) goto L_1276f49d;
  /* 1276f462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f465 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f466 call 0x1276e270 */
  push32(0x1276f46bu); f_1276e270();
  /* 1276f46b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f46e push eax */
  push32((uint32_t)(EAX));
  /* 1276f46f call dword ptr [0x127932d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932d4))), 0x1276f475u);
  /* 1276f475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276f477 jne 0x1276f484 */
  if (!C.zf) goto L_1276f484;
  /* 1276f479 call dword ptr [0x12793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793388))), 0x1276f47fu);
  /* 1276f47f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276f482 jmp 0x1276f48b */
  goto L_1276f48b;
L_1276f484:;
  /* 1276f484 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1276f48b:;
  /* 1276f48b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f48f jne 0x1276f493 */
  if (!C.zf) goto L_1276f493;
  /* 1276f491 jmp 0x1276f4af */
  goto L_1276f4af;
L_1276f493:;
  /* 1276f493 call 0x1276cbe0 */
  push32(0x1276f498u); f_1276cbe0();
  /* 1276f498 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f49b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1276f49d:;
  /* 1276f49d call 0x1276cbd0 */
  push32(0x1276f4a2u); f_1276cbd0();
  /* 1276f4a2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1276f4a8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1276f4af:;
  /* 1276f4af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f4b2 push eax */
  push32((uint32_t)(EAX));
  /* 1276f4b3 call 0x1276e480 */
  push32(0x1276f4b8u); f_1276e480();
  /* 1276f4b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f4bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1276f4be:;
  /* 1276f4be mov esp, ebp */
  ESP = (EBP);
  /* 1276f4c0 pop ebp */
  EBP = (pop32());
  /* 1276f4c1 ret  */
  ESPCHK(0x1276f3f0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1276f4d0 (219 bytes, 64 insns) */
void f_1276f4d0(void) {
  FTRACE(0x1276f4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276f4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276f4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1276f4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f4d4 cmp dword ptr [0x1279086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1279086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f4db je 0x1276f571 */
  if (C.zf) goto L_1276f571;
  /* 1276f4e1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1276f4e3 push 0x1278c318 */
  push32((uint32_t)(0x1278c318u));
  /* 1276f4e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276f4ea push 0xac */
  push32((uint32_t)(0xacu));
  /* 1276f4ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f4f1 call 0x12765110 */
  push32(0x1276f4f6u); f_12765110();
  /* 1276f4f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f4f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276f4fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f500 jne 0x1276f50c */
  if (!C.zf) goto L_1276f50c;
  /* 1276f502 mov eax, 1 */
  EAX = (0x1u);
  /* 1276f507 jmp 0x1276f5a7 */
  goto L_1276f5a7;
L_1276f50c:;
  /* 1276f50c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f50f push eax */
  push32((uint32_t)(EAX));
  /* 1276f510 call 0x1276f5b0 */
  push32(0x1276f515u); f_1276f5b0();
  /* 1276f515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276f51a je 0x1276f53d */
  if (C.zf) goto L_1276f53d;
  /* 1276f51c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f51f push ecx */
  push32((uint32_t)(ECX));
  /* 1276f520 call 0x1276fb40 */
  push32(0x1276f525u); f_1276fb40();
  /* 1276f525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f528 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276f52a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f52d push edx */
  push32((uint32_t)(EDX));
  /* 1276f52e call 0x12765790 */
  push32(0x1276f533u); f_12765790();
  /* 1276f533 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f536 mov eax, 1 */
  EAX = (0x1u);
  /* 1276f53b jmp 0x1276f5a7 */
  goto L_1276f5a7;
L_1276f53d:;
  /* 1276f53d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f540 mov dword ptr [0x1278fc98], eax */
  w32((uint32_t)(0x1278fc98), (EAX));
  /* 1276f545 mov ecx, dword ptr [0x1279088c] */
  ECX = (r32((uint32_t)(0x1279088c)));
  /* 1276f54b push ecx */
  push32((uint32_t)(ECX));
  /* 1276f54c call 0x1276fb40 */
  push32(0x1276f551u); f_1276fb40();
  /* 1276f551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f554 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276f556 mov edx, dword ptr [0x1279088c] */
  EDX = (r32((uint32_t)(0x1279088c)));
  /* 1276f55c push edx */
  push32((uint32_t)(EDX));
  /* 1276f55d call 0x12765790 */
  push32(0x1276f562u); f_12765790();
  /* 1276f562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f568 mov dword ptr [0x1279088c], eax */
  w32((uint32_t)(0x1279088c), (EAX));
  /* 1276f56d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276f56f jmp 0x1276f5a7 */
  goto L_1276f5a7;
L_1276f571:;
  /* 1276f571 mov dword ptr [0x1278fc98], 0x1278fca0 */
  w32((uint32_t)(0x1278fc98), (0x1278fca0u));
  /* 1276f57b mov ecx, dword ptr [0x1279088c] */
  ECX = (r32((uint32_t)(0x1279088c)));
  /* 1276f581 push ecx */
  push32((uint32_t)(ECX));
  /* 1276f582 call 0x1276fb40 */
  push32(0x1276f587u); f_1276fb40();
  /* 1276f587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f58a push 2 */
  push32((uint32_t)(0x2u));
  /* 1276f58c mov edx, dword ptr [0x1279088c] */
  EDX = (r32((uint32_t)(0x1279088c)));
  /* 1276f592 push edx */
  push32((uint32_t)(EDX));
  /* 1276f593 call 0x12765790 */
  push32(0x1276f598u); f_12765790();
  /* 1276f598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f59b mov dword ptr [0x1279088c], 0 */
  w32((uint32_t)(0x1279088c), (0x0u));
  /* 1276f5a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276f5a7:;
  /* 1276f5a7 mov esp, ebp */
  ESP = (EBP);
  /* 1276f5a9 pop ebp */
  EBP = (pop32());
  /* 1276f5aa ret  */
  ESPCHK(0x1276f4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5b0 @ 0x1276f5b0 (1423 bytes, 533 insns) */
void f_1276f5b0(void) {
  FTRACE(0x1276f5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276f5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1276f5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1276f5b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276f5b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1276f5bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276f5bf mov ax, word ptr [0x127908c6] */
  AX = (r16((uint32_t)(0x127908c6)));
  /* 1276f5c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276f5c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f5ca mov cx, word ptr [0x127908c8] */
  CX = (r16((uint32_t)(0x127908c8)));
  /* 1276f5d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1276f5d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276f5d8 jne 0x1276f5e2 */
  if (!C.zf) goto L_1276f5e2;
  /* 1276f5da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276f5dd jmp 0x1276fb3b */
  goto L_1276fb3b;
L_1276f5e2:;
  /* 1276f5e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f5e5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f5e8 push edx */
  push32((uint32_t)(EDX));
  /* 1276f5e9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1276f5eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f5ee push eax */
  push32((uint32_t)(EAX));
  /* 1276f5ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f5f1 call 0x12772ec0 */
  push32(0x1276f5f6u); f_12772ec0();
  /* 1276f5f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f5f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f5fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f5fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f604 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f607 push edx */
  push32((uint32_t)(EDX));
  /* 1276f608 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1276f60a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f60d push eax */
  push32((uint32_t)(EAX));
  /* 1276f60e push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f610 call 0x12772ec0 */
  push32(0x1276f615u); f_12772ec0();
  /* 1276f615 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f618 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f61b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f61d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f620 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f623 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f626 push edx */
  push32((uint32_t)(EDX));
  /* 1276f627 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1276f629 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f62c push eax */
  push32((uint32_t)(EAX));
  /* 1276f62d push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f62f call 0x12772ec0 */
  push32(0x1276f634u); f_12772ec0();
  /* 1276f634 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f637 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f63a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f63c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f63f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f642 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f645 push edx */
  push32((uint32_t)(EDX));
  /* 1276f646 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1276f648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f64b push eax */
  push32((uint32_t)(EAX));
  /* 1276f64c push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f64e call 0x12772ec0 */
  push32(0x1276f653u); f_12772ec0();
  /* 1276f653 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f656 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f659 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f65b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f65e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f661 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f664 push edx */
  push32((uint32_t)(EDX));
  /* 1276f665 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1276f667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f66a push eax */
  push32((uint32_t)(EAX));
  /* 1276f66b push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f66d call 0x12772ec0 */
  push32(0x1276f672u); f_12772ec0();
  /* 1276f672 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f675 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f678 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f67a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f67d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f680 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f683 push edx */
  push32((uint32_t)(EDX));
  /* 1276f684 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1276f686 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f689 push eax */
  push32((uint32_t)(EAX));
  /* 1276f68a push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f68c call 0x12772ec0 */
  push32(0x1276f691u); f_12772ec0();
  /* 1276f691 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f694 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f697 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f699 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f69c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f69f push edx */
  push32((uint32_t)(EDX));
  /* 1276f6a0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1276f6a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f6a5 push eax */
  push32((uint32_t)(EAX));
  /* 1276f6a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f6a8 call 0x12772ec0 */
  push32(0x1276f6adu); f_12772ec0();
  /* 1276f6ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f6b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f6b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f6b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f6b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f6bb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f6be push edx */
  push32((uint32_t)(EDX));
  /* 1276f6bf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1276f6c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f6c4 push eax */
  push32((uint32_t)(EAX));
  /* 1276f6c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f6c7 call 0x12772ec0 */
  push32(0x1276f6ccu); f_12772ec0();
  /* 1276f6cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f6cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f6d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f6d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f6d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f6da add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f6dd push edx */
  push32((uint32_t)(EDX));
  /* 1276f6de push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1276f6e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f6e3 push eax */
  push32((uint32_t)(EAX));
  /* 1276f6e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f6e6 call 0x12772ec0 */
  push32(0x1276f6ebu); f_12772ec0();
  /* 1276f6eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f6ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f6f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f6f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f6f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f6f9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f6fc push edx */
  push32((uint32_t)(EDX));
  /* 1276f6fd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1276f6ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f702 push eax */
  push32((uint32_t)(EAX));
  /* 1276f703 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f705 call 0x12772ec0 */
  push32(0x1276f70au); f_12772ec0();
  /* 1276f70a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f70d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f710 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f712 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f715 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f718 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f71b push edx */
  push32((uint32_t)(EDX));
  /* 1276f71c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1276f71e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f721 push eax */
  push32((uint32_t)(EAX));
  /* 1276f722 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f724 call 0x12772ec0 */
  push32(0x1276f729u); f_12772ec0();
  /* 1276f729 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f72c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f72f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f731 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f737 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f73a push edx */
  push32((uint32_t)(EDX));
  /* 1276f73b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1276f73d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f740 push eax */
  push32((uint32_t)(EAX));
  /* 1276f741 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f743 call 0x12772ec0 */
  push32(0x1276f748u); f_12772ec0();
  /* 1276f748 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f74b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f74e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f750 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f756 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f759 push edx */
  push32((uint32_t)(EDX));
  /* 1276f75a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1276f75c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f75f push eax */
  push32((uint32_t)(EAX));
  /* 1276f760 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f762 call 0x12772ec0 */
  push32(0x1276f767u); f_12772ec0();
  /* 1276f767 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f76a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f76d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f76f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f772 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f775 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f778 push edx */
  push32((uint32_t)(EDX));
  /* 1276f779 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1276f77b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f77e push eax */
  push32((uint32_t)(EAX));
  /* 1276f77f push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f781 call 0x12772ec0 */
  push32(0x1276f786u); f_12772ec0();
  /* 1276f786 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f789 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f78c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f78e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f791 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f794 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f797 push edx */
  push32((uint32_t)(EDX));
  /* 1276f798 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1276f79a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f79d push eax */
  push32((uint32_t)(EAX));
  /* 1276f79e push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f7a0 call 0x12772ec0 */
  push32(0x1276f7a5u); f_12772ec0();
  /* 1276f7a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f7a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f7ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f7ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f7b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f7b3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f7b6 push edx */
  push32((uint32_t)(EDX));
  /* 1276f7b7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1276f7b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f7bc push eax */
  push32((uint32_t)(EAX));
  /* 1276f7bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f7bf call 0x12772ec0 */
  push32(0x1276f7c4u); f_12772ec0();
  /* 1276f7c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f7c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f7ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f7cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f7cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f7d2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f7d5 push edx */
  push32((uint32_t)(EDX));
  /* 1276f7d6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1276f7d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f7db push eax */
  push32((uint32_t)(EAX));
  /* 1276f7dc push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f7de call 0x12772ec0 */
  push32(0x1276f7e3u); f_12772ec0();
  /* 1276f7e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f7e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f7e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f7eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f7ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f7f1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f7f4 push edx */
  push32((uint32_t)(EDX));
  /* 1276f7f5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1276f7f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f7fa push eax */
  push32((uint32_t)(EAX));
  /* 1276f7fb push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f7fd call 0x12772ec0 */
  push32(0x1276f802u); f_12772ec0();
  /* 1276f802 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f805 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f808 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f80a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f80d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f810 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f813 push edx */
  push32((uint32_t)(EDX));
  /* 1276f814 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1276f816 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f819 push eax */
  push32((uint32_t)(EAX));
  /* 1276f81a push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f81c call 0x12772ec0 */
  push32(0x1276f821u); f_12772ec0();
  /* 1276f821 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f824 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f827 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f829 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f82c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f82f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f832 push edx */
  push32((uint32_t)(EDX));
  /* 1276f833 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1276f835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f838 push eax */
  push32((uint32_t)(EAX));
  /* 1276f839 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f83b call 0x12772ec0 */
  push32(0x1276f840u); f_12772ec0();
  /* 1276f840 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f843 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f846 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f848 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f84b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f84e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f851 push edx */
  push32((uint32_t)(EDX));
  /* 1276f852 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1276f854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f857 push eax */
  push32((uint32_t)(EAX));
  /* 1276f858 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f85a call 0x12772ec0 */
  push32(0x1276f85fu); f_12772ec0();
  /* 1276f85f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f862 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f865 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f867 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f86a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f86d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f870 push edx */
  push32((uint32_t)(EDX));
  /* 1276f871 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1276f873 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f876 push eax */
  push32((uint32_t)(EAX));
  /* 1276f877 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f879 call 0x12772ec0 */
  push32(0x1276f87eu); f_12772ec0();
  /* 1276f87e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f881 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f884 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f886 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f889 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f88c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f88f push edx */
  push32((uint32_t)(EDX));
  /* 1276f890 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1276f892 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f895 push eax */
  push32((uint32_t)(EAX));
  /* 1276f896 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f898 call 0x12772ec0 */
  push32(0x1276f89du); f_12772ec0();
  /* 1276f89d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f8a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f8a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f8a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f8a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f8ab add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f8ae push edx */
  push32((uint32_t)(EDX));
  /* 1276f8af push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1276f8b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f8b4 push eax */
  push32((uint32_t)(EAX));
  /* 1276f8b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f8b7 call 0x12772ec0 */
  push32(0x1276f8bcu); f_12772ec0();
  /* 1276f8bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f8bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f8c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f8c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f8c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f8ca add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f8cd push edx */
  push32((uint32_t)(EDX));
  /* 1276f8ce push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1276f8d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f8d3 push eax */
  push32((uint32_t)(EAX));
  /* 1276f8d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f8d6 call 0x12772ec0 */
  push32(0x1276f8dbu); f_12772ec0();
  /* 1276f8db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f8de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f8e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f8e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f8e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f8e9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f8ec push edx */
  push32((uint32_t)(EDX));
  /* 1276f8ed push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1276f8ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f8f2 push eax */
  push32((uint32_t)(EAX));
  /* 1276f8f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f8f5 call 0x12772ec0 */
  push32(0x1276f8fau); f_12772ec0();
  /* 1276f8fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f8fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f900 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f902 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f905 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f908 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f90b push edx */
  push32((uint32_t)(EDX));
  /* 1276f90c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1276f90e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f911 push eax */
  push32((uint32_t)(EAX));
  /* 1276f912 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f914 call 0x12772ec0 */
  push32(0x1276f919u); f_12772ec0();
  /* 1276f919 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f91c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f91f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f921 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f927 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f92a push edx */
  push32((uint32_t)(EDX));
  /* 1276f92b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1276f92d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f930 push eax */
  push32((uint32_t)(EAX));
  /* 1276f931 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f933 call 0x12772ec0 */
  push32(0x1276f938u); f_12772ec0();
  /* 1276f938 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f93b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f93e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f940 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f943 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f946 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f949 push edx */
  push32((uint32_t)(EDX));
  /* 1276f94a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1276f94c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f94f push eax */
  push32((uint32_t)(EAX));
  /* 1276f950 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f952 call 0x12772ec0 */
  push32(0x1276f957u); f_12772ec0();
  /* 1276f957 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f95a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f95d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f95f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f962 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f965 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f968 push edx */
  push32((uint32_t)(EDX));
  /* 1276f969 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1276f96b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f96e push eax */
  push32((uint32_t)(EAX));
  /* 1276f96f push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f971 call 0x12772ec0 */
  push32(0x1276f976u); f_12772ec0();
  /* 1276f976 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f979 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f97c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f97e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f981 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f984 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f987 push edx */
  push32((uint32_t)(EDX));
  /* 1276f988 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1276f98a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f98d push eax */
  push32((uint32_t)(EAX));
  /* 1276f98e push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f990 call 0x12772ec0 */
  push32(0x1276f995u); f_12772ec0();
  /* 1276f995 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f998 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f99b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f99d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f9a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f9a3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f9a6 push edx */
  push32((uint32_t)(EDX));
  /* 1276f9a7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1276f9a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f9ac push eax */
  push32((uint32_t)(EAX));
  /* 1276f9ad push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f9af call 0x12772ec0 */
  push32(0x1276f9b4u); f_12772ec0();
  /* 1276f9b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f9b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f9ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f9bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f9bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f9c2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f9c8 push edx */
  push32((uint32_t)(EDX));
  /* 1276f9c9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1276f9cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f9ce push eax */
  push32((uint32_t)(EAX));
  /* 1276f9cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f9d1 call 0x12772ec0 */
  push32(0x1276f9d6u); f_12772ec0();
  /* 1276f9d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f9d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f9dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276f9de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276f9e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276f9e4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f9ea push edx */
  push32((uint32_t)(EDX));
  /* 1276f9eb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1276f9ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276f9f0 push eax */
  push32((uint32_t)(EAX));
  /* 1276f9f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276f9f3 call 0x12772ec0 */
  push32(0x1276f9f8u); f_12772ec0();
  /* 1276f9f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276f9fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276f9fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276fa00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276fa03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fa06 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fa0c push edx */
  push32((uint32_t)(EDX));
  /* 1276fa0d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1276fa0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276fa12 push eax */
  push32((uint32_t)(EAX));
  /* 1276fa13 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fa15 call 0x12772ec0 */
  push32(0x1276fa1au); f_12772ec0();
  /* 1276fa1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fa1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276fa20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276fa22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276fa25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fa28 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fa2e push edx */
  push32((uint32_t)(EDX));
  /* 1276fa2f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1276fa31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276fa34 push eax */
  push32((uint32_t)(EAX));
  /* 1276fa35 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fa37 call 0x12772ec0 */
  push32(0x1276fa3cu); f_12772ec0();
  /* 1276fa3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fa3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276fa42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276fa44 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276fa47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fa4a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fa50 push edx */
  push32((uint32_t)(EDX));
  /* 1276fa51 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1276fa53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276fa56 push eax */
  push32((uint32_t)(EAX));
  /* 1276fa57 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fa59 call 0x12772ec0 */
  push32(0x1276fa5eu); f_12772ec0();
  /* 1276fa5e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fa61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276fa64 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276fa66 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276fa69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fa6c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fa72 push edx */
  push32((uint32_t)(EDX));
  /* 1276fa73 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1276fa75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276fa78 push eax */
  push32((uint32_t)(EAX));
  /* 1276fa79 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fa7b call 0x12772ec0 */
  push32(0x1276fa80u); f_12772ec0();
  /* 1276fa80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fa83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276fa86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276fa88 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276fa8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fa8e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fa94 push edx */
  push32((uint32_t)(EDX));
  /* 1276fa95 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1276fa97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276fa9a push eax */
  push32((uint32_t)(EAX));
  /* 1276fa9b push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fa9d call 0x12772ec0 */
  push32(0x1276faa2u); f_12772ec0();
  /* 1276faa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276faa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276faa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276faaa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276faad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fab0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fab6 push edx */
  push32((uint32_t)(EDX));
  /* 1276fab7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1276fab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276fabc push eax */
  push32((uint32_t)(EAX));
  /* 1276fabd push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fabf call 0x12772ec0 */
  push32(0x1276fac4u); f_12772ec0();
  /* 1276fac4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fac7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276faca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276facc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276facf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fad2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fad8 push edx */
  push32((uint32_t)(EDX));
  /* 1276fad9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1276fadb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276fade push eax */
  push32((uint32_t)(EAX));
  /* 1276fadf push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fae1 call 0x12772ec0 */
  push32(0x1276fae6u); f_12772ec0();
  /* 1276fae6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fae9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276faec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276faee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276faf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276faf4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fafa push edx */
  push32((uint32_t)(EDX));
  /* 1276fafb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1276fafd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276fb00 push eax */
  push32((uint32_t)(EAX));
  /* 1276fb01 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fb03 call 0x12772ec0 */
  push32(0x1276fb08u); f_12772ec0();
  /* 1276fb08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fb0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276fb0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276fb10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276fb13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fb16 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fb1c push edx */
  push32((uint32_t)(EDX));
  /* 1276fb1d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1276fb22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276fb25 push eax */
  push32((uint32_t)(EAX));
  /* 1276fb26 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fb28 call 0x12772ec0 */
  push32(0x1276fb2du); f_12772ec0();
  /* 1276fb2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fb30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276fb33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276fb35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1276fb38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1276fb3b:;
  /* 1276fb3b mov esp, ebp */
  ESP = (EBP);
  /* 1276fb3d pop ebp */
  EBP = (pop32());
  /* 1276fb3e ret  */
  ESPCHK(0x1276f5b0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1276fb40 (779 bytes, 265 insns) */
void f_1276fb40(void) {
  FTRACE(0x1276fb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276fb40 push ebp */
  push32((uint32_t)(EBP));
  /* 1276fb41 mov ebp, esp */
  EBP = (ESP);
  /* 1276fb43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276fb47 jne 0x1276fb4e */
  if (!C.zf) goto L_1276fb4e;
  /* 1276fb49 jmp 0x1276fe49 */
  goto L_1276fe49;
L_1276fb4e:;
  /* 1276fb4e push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fb50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fb53 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276fb56 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fb57 call 0x12765790 */
  push32(0x1276fb5cu); f_12765790();
  /* 1276fb5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fb5f push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fb61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fb64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1276fb67 push eax */
  push32((uint32_t)(EAX));
  /* 1276fb68 call 0x12765790 */
  push32(0x1276fb6du); f_12765790();
  /* 1276fb6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fb70 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fb72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fb75 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276fb78 push edx */
  push32((uint32_t)(EDX));
  /* 1276fb79 call 0x12765790 */
  push32(0x1276fb7eu); f_12765790();
  /* 1276fb7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fb81 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fb83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fb86 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1276fb89 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fb8a call 0x12765790 */
  push32(0x1276fb8fu); f_12765790();
  /* 1276fb8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fb92 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fb94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fb97 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1276fb9a push eax */
  push32((uint32_t)(EAX));
  /* 1276fb9b call 0x12765790 */
  push32(0x1276fba0u); f_12765790();
  /* 1276fba0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fba3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fba5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fba8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1276fbab push edx */
  push32((uint32_t)(EDX));
  /* 1276fbac call 0x12765790 */
  push32(0x1276fbb1u); f_12765790();
  /* 1276fbb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fbb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fbb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fbb9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276fbbb push ecx */
  push32((uint32_t)(ECX));
  /* 1276fbbc call 0x12765790 */
  push32(0x1276fbc1u); f_12765790();
  /* 1276fbc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fbc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fbc6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fbc9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1276fbcc push eax */
  push32((uint32_t)(EAX));
  /* 1276fbcd call 0x12765790 */
  push32(0x1276fbd2u); f_12765790();
  /* 1276fbd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fbd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fbd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fbda mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1276fbdd push edx */
  push32((uint32_t)(EDX));
  /* 1276fbde call 0x12765790 */
  push32(0x1276fbe3u); f_12765790();
  /* 1276fbe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fbe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fbe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fbeb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1276fbee push ecx */
  push32((uint32_t)(ECX));
  /* 1276fbef call 0x12765790 */
  push32(0x1276fbf4u); f_12765790();
  /* 1276fbf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fbf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fbf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fbfc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1276fbff push eax */
  push32((uint32_t)(EAX));
  /* 1276fc00 call 0x12765790 */
  push32(0x1276fc05u); f_12765790();
  /* 1276fc05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fc08 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fc0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fc0d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1276fc10 push edx */
  push32((uint32_t)(EDX));
  /* 1276fc11 call 0x12765790 */
  push32(0x1276fc16u); f_12765790();
  /* 1276fc16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fc19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fc1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fc1e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1276fc21 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fc22 call 0x12765790 */
  push32(0x1276fc27u); f_12765790();
  /* 1276fc27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fc2a push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fc2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fc2f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1276fc32 push eax */
  push32((uint32_t)(EAX));
  /* 1276fc33 call 0x12765790 */
  push32(0x1276fc38u); f_12765790();
  /* 1276fc38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fc3b push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fc3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fc40 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1276fc43 push edx */
  push32((uint32_t)(EDX));
  /* 1276fc44 call 0x12765790 */
  push32(0x1276fc49u); f_12765790();
  /* 1276fc49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fc4c push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fc4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fc51 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1276fc54 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fc55 call 0x12765790 */
  push32(0x1276fc5au); f_12765790();
  /* 1276fc5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fc5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fc5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fc62 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1276fc65 push eax */
  push32((uint32_t)(EAX));
  /* 1276fc66 call 0x12765790 */
  push32(0x1276fc6bu); f_12765790();
  /* 1276fc6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fc6e push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fc70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fc73 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1276fc76 push edx */
  push32((uint32_t)(EDX));
  /* 1276fc77 call 0x12765790 */
  push32(0x1276fc7cu); f_12765790();
  /* 1276fc7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fc7f push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fc81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fc84 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1276fc87 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fc88 call 0x12765790 */
  push32(0x1276fc8du); f_12765790();
  /* 1276fc8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fc90 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fc92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fc95 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1276fc98 push eax */
  push32((uint32_t)(EAX));
  /* 1276fc99 call 0x12765790 */
  push32(0x1276fc9eu); f_12765790();
  /* 1276fc9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fca3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fca6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1276fca9 push edx */
  push32((uint32_t)(EDX));
  /* 1276fcaa call 0x12765790 */
  push32(0x1276fcafu); f_12765790();
  /* 1276fcaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fcb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fcb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fcb7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1276fcba push ecx */
  push32((uint32_t)(ECX));
  /* 1276fcbb call 0x12765790 */
  push32(0x1276fcc0u); f_12765790();
  /* 1276fcc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fcc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fcc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fcc8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1276fccb push eax */
  push32((uint32_t)(EAX));
  /* 1276fccc call 0x12765790 */
  push32(0x1276fcd1u); f_12765790();
  /* 1276fcd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fcd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fcd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fcd9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1276fcdc push edx */
  push32((uint32_t)(EDX));
  /* 1276fcdd call 0x12765790 */
  push32(0x1276fce2u); f_12765790();
  /* 1276fce2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fce5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fcea mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1276fced push ecx */
  push32((uint32_t)(ECX));
  /* 1276fcee call 0x12765790 */
  push32(0x1276fcf3u); f_12765790();
  /* 1276fcf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fcf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fcf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fcfb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1276fcfe push eax */
  push32((uint32_t)(EAX));
  /* 1276fcff call 0x12765790 */
  push32(0x1276fd04u); f_12765790();
  /* 1276fd04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fd07 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fd09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fd0c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1276fd0f push edx */
  push32((uint32_t)(EDX));
  /* 1276fd10 call 0x12765790 */
  push32(0x1276fd15u); f_12765790();
  /* 1276fd15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fd18 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fd1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fd1d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1276fd20 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fd21 call 0x12765790 */
  push32(0x1276fd26u); f_12765790();
  /* 1276fd26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fd29 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fd2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fd2e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1276fd31 push eax */
  push32((uint32_t)(EAX));
  /* 1276fd32 call 0x12765790 */
  push32(0x1276fd37u); f_12765790();
  /* 1276fd37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fd3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fd3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fd3f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1276fd42 push edx */
  push32((uint32_t)(EDX));
  /* 1276fd43 call 0x12765790 */
  push32(0x1276fd48u); f_12765790();
  /* 1276fd48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fd4b push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fd4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fd50 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1276fd53 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fd54 call 0x12765790 */
  push32(0x1276fd59u); f_12765790();
  /* 1276fd59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fd5c push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fd5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fd61 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1276fd64 push eax */
  push32((uint32_t)(EAX));
  /* 1276fd65 call 0x12765790 */
  push32(0x1276fd6au); f_12765790();
  /* 1276fd6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fd6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fd6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fd72 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1276fd78 push edx */
  push32((uint32_t)(EDX));
  /* 1276fd79 call 0x12765790 */
  push32(0x1276fd7eu); f_12765790();
  /* 1276fd7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fd81 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fd83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fd86 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1276fd8c push ecx */
  push32((uint32_t)(ECX));
  /* 1276fd8d call 0x12765790 */
  push32(0x1276fd92u); f_12765790();
  /* 1276fd92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fd95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fd97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fd9a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1276fda0 push eax */
  push32((uint32_t)(EAX));
  /* 1276fda1 call 0x12765790 */
  push32(0x1276fda6u); f_12765790();
  /* 1276fda6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fda9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fdab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fdae mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1276fdb4 push edx */
  push32((uint32_t)(EDX));
  /* 1276fdb5 call 0x12765790 */
  push32(0x1276fdbau); f_12765790();
  /* 1276fdba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fdbd push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fdbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fdc2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1276fdc8 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fdc9 call 0x12765790 */
  push32(0x1276fdceu); f_12765790();
  /* 1276fdce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fdd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fdd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fdd6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1276fddc push eax */
  push32((uint32_t)(EAX));
  /* 1276fddd call 0x12765790 */
  push32(0x1276fde2u); f_12765790();
  /* 1276fde2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fde5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fde7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fdea mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1276fdf0 push edx */
  push32((uint32_t)(EDX));
  /* 1276fdf1 call 0x12765790 */
  push32(0x1276fdf6u); f_12765790();
  /* 1276fdf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fdf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fdfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fdfe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1276fe04 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fe05 call 0x12765790 */
  push32(0x1276fe0au); f_12765790();
  /* 1276fe0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fe0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fe0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fe12 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1276fe18 push eax */
  push32((uint32_t)(EAX));
  /* 1276fe19 call 0x12765790 */
  push32(0x1276fe1eu); f_12765790();
  /* 1276fe1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fe21 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fe23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fe26 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1276fe2c push edx */
  push32((uint32_t)(EDX));
  /* 1276fe2d call 0x12765790 */
  push32(0x1276fe32u); f_12765790();
  /* 1276fe32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fe35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fe37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276fe3a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1276fe40 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fe41 call 0x12765790 */
  push32(0x1276fe46u); f_12765790();
  /* 1276fe46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276fe49:;
  /* 1276fe49 pop ebp */
  EBP = (pop32());
  /* 1276fe4a ret  */
  ESPCHK(0x1276fb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe50 @ 0x1276fe50 (678 bytes, 180 insns) */
void f_1276fe50(void) {
  FTRACE(0x1276fe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276fe50 push ebp */
  push32((uint32_t)(EBP));
  /* 1276fe51 mov ebp, esp */
  EBP = (ESP);
  /* 1276fe53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276fe56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1276fe5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276fe5f mov ax, word ptr [0x127908c2] */
  AX = (r16((uint32_t)(0x127908c2)));
  /* 1276fe65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276fe68 cmp dword ptr [0x12790868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276fe6f je 0x1276ffca */
  if (C.zf) goto L_1276ffca;
  /* 1276fe75 push 0x12790890 */
  push32((uint32_t)(0x12790890u));
  /* 1276fe7a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1276fe7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276fe7f push ecx */
  push32((uint32_t)(ECX));
  /* 1276fe80 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fe82 call 0x12772ec0 */
  push32(0x1276fe87u); f_12772ec0();
  /* 1276fe87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fe8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276fe8d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1276fe8f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1276fe92 push 0x12790894 */
  push32((uint32_t)(0x12790894u));
  /* 1276fe97 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1276fe99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276fe9c push eax */
  push32((uint32_t)(EAX));
  /* 1276fe9d push 1 */
  push32((uint32_t)(0x1u));
  /* 1276fe9f call 0x12772ec0 */
  push32(0x1276fea4u); f_12772ec0();
  /* 1276fea4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fea7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276feaa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276feac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1276feaf push 0x12790898 */
  push32((uint32_t)(0x12790898u));
  /* 1276feb4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1276feb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276feb9 push edx */
  push32((uint32_t)(EDX));
  /* 1276feba push 1 */
  push32((uint32_t)(0x1u));
  /* 1276febc call 0x12772ec0 */
  push32(0x1276fec1u); f_12772ec0();
  /* 1276fec1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fec4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276fec7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1276fec9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1276fecc mov edx, dword ptr [0x12790898] */
  EDX = (r32((uint32_t)(0x12790898)));
  /* 1276fed2 push edx */
  push32((uint32_t)(EDX));
  /* 1276fed3 call 0x12770100 */
  push32(0x1276fed8u); f_12770100();
  /* 1276fed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fedb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276fedf je 0x1276ff39 */
  if (C.zf) goto L_1276ff39;
  /* 1276fee1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fee3 mov eax, dword ptr [0x12790890] */
  EAX = (r32((uint32_t)(0x12790890)));
  /* 1276fee8 push eax */
  push32((uint32_t)(EAX));
  /* 1276fee9 call 0x12765790 */
  push32(0x1276feeeu); f_12765790();
  /* 1276feee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fef1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276fef3 mov ecx, dword ptr [0x12790894] */
  ECX = (r32((uint32_t)(0x12790894)));
  /* 1276fef9 push ecx */
  push32((uint32_t)(ECX));
  /* 1276fefa call 0x12765790 */
  push32(0x1276feffu); f_12765790();
  /* 1276feff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ff02 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ff04 mov edx, dword ptr [0x12790898] */
  EDX = (r32((uint32_t)(0x12790898)));
  /* 1276ff0a push edx */
  push32((uint32_t)(EDX));
  /* 1276ff0b call 0x12765790 */
  push32(0x1276ff10u); f_12765790();
  /* 1276ff10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ff13 mov dword ptr [0x12790890], 0 */
  w32((uint32_t)(0x12790890), (0x0u));
  /* 1276ff1d mov dword ptr [0x12790894], 0 */
  w32((uint32_t)(0x12790894), (0x0u));
  /* 1276ff27 mov dword ptr [0x12790898], 0 */
  w32((uint32_t)(0x12790898), (0x0u));
  /* 1276ff31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276ff34 jmp 0x127700f2 */
  goto L_127700f2;
L_1276ff39:;
  /* 1276ff39 mov eax, dword ptr [0x1278fd88] */
  EAX = (r32((uint32_t)(0x1278fd88)));
  /* 1276ff3e cmp dword ptr [eax], 0x1278fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1278fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276ff44 je 0x1276ff80 */
  if (C.zf) goto L_1276ff80;
  /* 1276ff46 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ff48 mov ecx, dword ptr [0x1278fd88] */
  ECX = (r32((uint32_t)(0x1278fd88)));
  /* 1276ff4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276ff50 push edx */
  push32((uint32_t)(EDX));
  /* 1276ff51 call 0x12765790 */
  push32(0x1276ff56u); f_12765790();
  /* 1276ff56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ff59 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ff5b mov eax, dword ptr [0x1278fd88] */
  EAX = (r32((uint32_t)(0x1278fd88)));
  /* 1276ff60 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1276ff63 push ecx */
  push32((uint32_t)(ECX));
  /* 1276ff64 call 0x12765790 */
  push32(0x1276ff69u); f_12765790();
  /* 1276ff69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ff6c push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ff6e mov edx, dword ptr [0x1278fd88] */
  EDX = (r32((uint32_t)(0x1278fd88)));
  /* 1276ff74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1276ff77 push eax */
  push32((uint32_t)(EAX));
  /* 1276ff78 call 0x12765790 */
  push32(0x1276ff7du); f_12765790();
  /* 1276ff7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276ff80:;
  /* 1276ff80 mov ecx, dword ptr [0x1278fd88] */
  ECX = (r32((uint32_t)(0x1278fd88)));
  /* 1276ff86 mov edx, dword ptr [0x12790890] */
  EDX = (r32((uint32_t)(0x12790890)));
  /* 1276ff8c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1276ff8e mov eax, dword ptr [0x1278fd88] */
  EAX = (r32((uint32_t)(0x1278fd88)));
  /* 1276ff93 mov ecx, dword ptr [0x12790894] */
  ECX = (r32((uint32_t)(0x12790894)));
  /* 1276ff99 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1276ff9c mov edx, dword ptr [0x1278fd88] */
  EDX = (r32((uint32_t)(0x1278fd88)));
  /* 1276ffa2 mov eax, dword ptr [0x12790898] */
  EAX = (r32((uint32_t)(0x12790898)));
  /* 1276ffa7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1276ffaa mov ecx, dword ptr [0x1278fd88] */
  ECX = (r32((uint32_t)(0x1278fd88)));
  /* 1276ffb0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276ffb2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1276ffb4 mov byte ptr [0x1278eea8], al */
  w8((uint32_t)(0x1278eea8), (AL));
  /* 1276ffb9 mov dword ptr [0x1278eeac], 1 */
  w32((uint32_t)(0x1278eeac), (0x1u));
  /* 1276ffc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276ffc5 jmp 0x127700f2 */
  goto L_127700f2;
L_1276ffca:;
  /* 1276ffca push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ffcc mov ecx, dword ptr [0x12790890] */
  ECX = (r32((uint32_t)(0x12790890)));
  /* 1276ffd2 push ecx */
  push32((uint32_t)(ECX));
  /* 1276ffd3 call 0x12765790 */
  push32(0x1276ffd8u); f_12765790();
  /* 1276ffd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ffdb push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ffdd mov edx, dword ptr [0x12790894] */
  EDX = (r32((uint32_t)(0x12790894)));
  /* 1276ffe3 push edx */
  push32((uint32_t)(EDX));
  /* 1276ffe4 call 0x12765790 */
  push32(0x1276ffe9u); f_12765790();
  /* 1276ffe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276ffec push 2 */
  push32((uint32_t)(0x2u));
  /* 1276ffee mov eax, dword ptr [0x12790898] */
  EAX = (r32((uint32_t)(0x12790898)));
  /* 1276fff3 push eax */
  push32((uint32_t)(EAX));
  /* 1276fff4 call 0x12765790 */
  push32(0x1276fff9u); f_12765790();
  /* 1276fff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276fffc mov dword ptr [0x12790890], 0 */
  w32((uint32_t)(0x12790890), (0x0u));
  /* 12770006 mov dword ptr [0x12790894], 0 */
  w32((uint32_t)(0x12790894), (0x0u));
  /* 12770010 mov dword ptr [0x12790898], 0 */
  w32((uint32_t)(0x12790898), (0x0u));
  /* 1277001a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1277001f push 0x1278c324 */
  push32((uint32_t)(0x1278c324u));
  /* 12770024 push 2 */
  push32((uint32_t)(0x2u));
  /* 12770026 push 2 */
  push32((uint32_t)(0x2u));
  /* 12770028 call 0x12764d00 */
  push32(0x1277002du); f_12764d00();
  /* 1277002d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770030 mov ecx, dword ptr [0x1278fd88] */
  ECX = (r32((uint32_t)(0x1278fd88)));
  /* 12770036 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12770038 mov edx, dword ptr [0x1278fd88] */
  EDX = (r32((uint32_t)(0x1278fd88)));
  /* 1277003e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770041 jne 0x1277004b */
  if (!C.zf) goto L_1277004b;
  /* 12770043 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12770046 jmp 0x127700f2 */
  goto L_127700f2;
L_1277004b:;
  /* 1277004b push 0x1278c2f4 */
  push32((uint32_t)(0x1278c2f4u));
  /* 12770050 mov eax, dword ptr [0x1278fd88] */
  EAX = (r32((uint32_t)(0x1278fd88)));
  /* 12770055 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12770057 push ecx */
  push32((uint32_t)(ECX));
  /* 12770058 call 0x12767cb0 */
  push32(0x1277005du); f_12767cb0();
  /* 1277005d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770060 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12770065 push 0x1278c324 */
  push32((uint32_t)(0x1278c324u));
  /* 1277006a push 2 */
  push32((uint32_t)(0x2u));
  /* 1277006c push 2 */
  push32((uint32_t)(0x2u));
  /* 1277006e call 0x12764d00 */
  push32(0x12770073u); f_12764d00();
  /* 12770073 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770076 mov edx, dword ptr [0x1278fd88] */
  EDX = (r32((uint32_t)(0x1278fd88)));
  /* 1277007c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1277007f mov eax, dword ptr [0x1278fd88] */
  EAX = (r32((uint32_t)(0x1278fd88)));
  /* 12770084 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770088 jne 0x1277008f */
  if (!C.zf) goto L_1277008f;
  /* 1277008a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1277008d jmp 0x127700f2 */
  goto L_127700f2;
L_1277008f:;
  /* 1277008f mov ecx, dword ptr [0x1278fd88] */
  ECX = (r32((uint32_t)(0x1278fd88)));
  /* 12770095 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12770098 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1277009b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 127700a0 push 0x1278c324 */
  push32((uint32_t)(0x1278c324u));
  /* 127700a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127700a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127700a9 call 0x12764d00 */
  push32(0x127700aeu); f_12764d00();
  /* 127700ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127700b1 mov ecx, dword ptr [0x1278fd88] */
  ECX = (r32((uint32_t)(0x1278fd88)));
  /* 127700b7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 127700ba mov edx, dword ptr [0x1278fd88] */
  EDX = (r32((uint32_t)(0x1278fd88)));
  /* 127700c0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127700c4 jne 0x127700cb */
  if (!C.zf) goto L_127700cb;
  /* 127700c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127700c9 jmp 0x127700f2 */
  goto L_127700f2;
L_127700cb:;
  /* 127700cb mov eax, dword ptr [0x1278fd88] */
  EAX = (r32((uint32_t)(0x1278fd88)));
  /* 127700d0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127700d3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 127700d6 mov edx, dword ptr [0x1278fd88] */
  EDX = (r32((uint32_t)(0x1278fd88)));
  /* 127700dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127700de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127700e0 mov byte ptr [0x1278eea8], cl */
  w8((uint32_t)(0x1278eea8), (CL));
  /* 127700e6 mov dword ptr [0x1278eeac], 1 */
  w32((uint32_t)(0x1278eeac), (0x1u));
  /* 127700f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127700f2:;
  /* 127700f2 mov esp, ebp */
  ESP = (EBP);
  /* 127700f4 pop ebp */
  EBP = (pop32());
  /* 127700f5 ret  */
  ESPCHK(0x1276fe50u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12770100 (125 bytes, 49 insns) */
void f_12770100(void) {
  FTRACE(0x12770100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770100 push ebp */
  push32((uint32_t)(EBP));
  /* 12770101 mov ebp, esp */
  EBP = (ESP);
  /* 12770103 push ecx */
  push32((uint32_t)(ECX));
L_12770104:;
  /* 12770104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770107 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1277010a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1277010c je 0x12770179 */
  if (C.zf) goto L_12770179;
  /* 1277010e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770111 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12770114 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770117 jl 0x1277013d */
  if ((C.sf!=C.of)) goto L_1277013d;
  /* 12770119 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277011c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1277011f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770122 jg 0x1277013d */
  if ((!C.zf&&C.sf==C.of)) goto L_1277013d;
  /* 12770124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770127 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1277012a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1277012d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770130 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12770132 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770135 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770138 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1277013b jmp 0x12770177 */
  goto L_12770177;
L_1277013d:;
  /* 1277013d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770140 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12770143 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770146 jne 0x1277016e */
  if (!C.zf) goto L_1277016e;
  /* 12770148 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277014b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1277014e:;
  /* 1277014e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770154 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12770157 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12770159 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277015c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277015f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12770162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770165 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12770168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277016a jne 0x1277014e */
  if (!C.zf) goto L_1277014e;
  /* 1277016c jmp 0x12770177 */
  goto L_12770177;
L_1277016e:;
  /* 1277016e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770171 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770174 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12770177:;
  /* 12770177 jmp 0x12770104 */
  goto L_12770104;
L_12770179:;
  /* 12770179 mov esp, ebp */
  ESP = (EBP);
  /* 1277017b pop ebp */
  EBP = (pop32());
  /* 1277017c ret  */
  ESPCHK(0x12770100u, _esp0);
  ESP += 4; return;
}

/* FUN_10010180 @ 0x12770180 (304 bytes, 85 insns) */
void f_12770180(void) {
  FTRACE(0x12770180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770180 push ebp */
  push32((uint32_t)(EBP));
  /* 12770181 mov ebp, esp */
  EBP = (ESP);
  /* 12770183 push ecx */
  push32((uint32_t)(ECX));
  /* 12770184 cmp dword ptr [0x12790864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277018b je 0x1277024c */
  if (C.zf) goto L_1277024c;
  /* 12770191 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12770193 push 0x1278c330 */
  push32((uint32_t)(0x1278c330u));
  /* 12770198 push 2 */
  push32((uint32_t)(0x2u));
  /* 1277019a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1277019c push 1 */
  push32((uint32_t)(0x1u));
  /* 1277019e call 0x12765110 */
  push32(0x127701a3u); f_12765110();
  /* 127701a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127701a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127701a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127701ad jne 0x127701b9 */
  if (!C.zf) goto L_127701b9;
  /* 127701af mov eax, 1 */
  EAX = (0x1u);
  /* 127701b4 jmp 0x127702ac */
  goto L_127702ac;
L_127701b9:;
  /* 127701b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127701bc push eax */
  push32((uint32_t)(EAX));
  /* 127701bd call 0x127702b0 */
  push32(0x127701c2u); f_127702b0();
  /* 127701c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127701c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127701c7 je 0x127701ed */
  if (C.zf) goto L_127701ed;
  /* 127701c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127701cc push ecx */
  push32((uint32_t)(ECX));
  /* 127701cd call 0x12770540 */
  push32(0x127701d2u); f_12770540();
  /* 127701d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127701d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127701d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127701da push edx */
  push32((uint32_t)(EDX));
  /* 127701db call 0x12765790 */
  push32(0x127701e0u); f_12765790();
  /* 127701e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127701e3 mov eax, 1 */
  EAX = (0x1u);
  /* 127701e8 jmp 0x127702ac */
  goto L_127702ac;
L_127701ed:;
  /* 127701ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127701f0 mov ecx, dword ptr [0x1278fd88] */
  ECX = (r32((uint32_t)(0x1278fd88)));
  /* 127701f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127701f8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127701fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127701fd mov ecx, dword ptr [0x1278fd88] */
  ECX = (r32((uint32_t)(0x1278fd88)));
  /* 12770203 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12770206 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12770209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277020c mov ecx, dword ptr [0x1278fd88] */
  ECX = (r32((uint32_t)(0x1278fd88)));
  /* 12770212 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12770215 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12770218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277021b mov dword ptr [0x1278fd88], eax */
  w32((uint32_t)(0x1278fd88), (EAX));
  /* 12770220 mov ecx, dword ptr [0x1279089c] */
  ECX = (r32((uint32_t)(0x1279089c)));
  /* 12770226 push ecx */
  push32((uint32_t)(ECX));
  /* 12770227 call 0x12770540 */
  push32(0x1277022cu); f_12770540();
  /* 1277022c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277022f push 2 */
  push32((uint32_t)(0x2u));
  /* 12770231 mov edx, dword ptr [0x1279089c] */
  EDX = (r32((uint32_t)(0x1279089c)));
  /* 12770237 push edx */
  push32((uint32_t)(EDX));
  /* 12770238 call 0x12765790 */
  push32(0x1277023du); f_12765790();
  /* 1277023d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770243 mov dword ptr [0x1279089c], eax */
  w32((uint32_t)(0x1279089c), (EAX));
  /* 12770248 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277024a jmp 0x127702ac */
  goto L_127702ac;
L_1277024c:;
  /* 1277024c mov ecx, dword ptr [0x1278fd88] */
  ECX = (r32((uint32_t)(0x1278fd88)));
  /* 12770252 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12770254 mov dword ptr [0x1278fd58], edx */
  w32((uint32_t)(0x1278fd58), (EDX));
  /* 1277025a mov eax, dword ptr [0x1278fd88] */
  EAX = (r32((uint32_t)(0x1278fd88)));
  /* 1277025f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12770262 mov dword ptr [0x1278fd5c], ecx */
  w32((uint32_t)(0x1278fd5c), (ECX));
  /* 12770268 mov edx, dword ptr [0x1278fd88] */
  EDX = (r32((uint32_t)(0x1278fd88)));
  /* 1277026e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12770271 mov dword ptr [0x1278fd60], eax */
  w32((uint32_t)(0x1278fd60), (EAX));
  /* 12770276 mov dword ptr [0x1278fd88], 0x1278fd58 */
  w32((uint32_t)(0x1278fd88), (0x1278fd58u));
  /* 12770280 mov ecx, dword ptr [0x1279089c] */
  ECX = (r32((uint32_t)(0x1279089c)));
  /* 12770286 push ecx */
  push32((uint32_t)(ECX));
  /* 12770287 call 0x12770540 */
  push32(0x1277028cu); f_12770540();
  /* 1277028c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277028f push 2 */
  push32((uint32_t)(0x2u));
  /* 12770291 mov edx, dword ptr [0x1279089c] */
  EDX = (r32((uint32_t)(0x1279089c)));
  /* 12770297 push edx */
  push32((uint32_t)(EDX));
  /* 12770298 call 0x12765790 */
  push32(0x1277029du); f_12765790();
  /* 1277029d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127702a0 mov dword ptr [0x1279089c], 0 */
  w32((uint32_t)(0x1279089c), (0x0u));
  /* 127702aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127702ac:;
  /* 127702ac mov esp, ebp */
  ESP = (EBP);
  /* 127702ae pop ebp */
  EBP = (pop32());
  /* 127702af ret  */
  ESPCHK(0x12770180u, _esp0);
  ESP += 4; return;
}

/* FUN_100102b0 @ 0x127702b0 (525 bytes, 200 insns) */
void f_127702b0(void) {
  FTRACE(0x127702b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127702b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127702b1 mov ebp, esp */
  EBP = (ESP);
  /* 127702b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127702b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127702bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127702bf mov ax, word ptr [0x127908bc] */
  AX = (r16((uint32_t)(0x127908bc)));
  /* 127702c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127702c8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127702cc jne 0x127702d6 */
  if (!C.zf) goto L_127702d6;
  /* 127702ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127702d1 jmp 0x127704b9 */
  goto L_127704b9;
L_127702d6:;
  /* 127702d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127702d9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127702dc push ecx */
  push32((uint32_t)(ECX));
  /* 127702dd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 127702df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127702e2 push edx */
  push32((uint32_t)(EDX));
  /* 127702e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127702e5 call 0x12772ec0 */
  push32(0x127702eau); f_12772ec0();
  /* 127702ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127702ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127702f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127702f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127702f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127702f8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127702fb push edx */
  push32((uint32_t)(EDX));
  /* 127702fc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 127702fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770301 push eax */
  push32((uint32_t)(EAX));
  /* 12770302 push 1 */
  push32((uint32_t)(0x1u));
  /* 12770304 call 0x12772ec0 */
  push32(0x12770309u); f_12772ec0();
  /* 12770309 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277030c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277030f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12770311 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12770314 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770317 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277031a push edx */
  push32((uint32_t)(EDX));
  /* 1277031b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1277031d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770320 push eax */
  push32((uint32_t)(EAX));
  /* 12770321 push 1 */
  push32((uint32_t)(0x1u));
  /* 12770323 call 0x12772ec0 */
  push32(0x12770328u); f_12772ec0();
  /* 12770328 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277032b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277032e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12770330 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12770333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770336 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770339 push edx */
  push32((uint32_t)(EDX));
  /* 1277033a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1277033c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277033f push eax */
  push32((uint32_t)(EAX));
  /* 12770340 push 1 */
  push32((uint32_t)(0x1u));
  /* 12770342 call 0x12772ec0 */
  push32(0x12770347u); f_12772ec0();
  /* 12770347 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277034a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277034d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1277034f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12770352 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770355 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770358 push edx */
  push32((uint32_t)(EDX));
  /* 12770359 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1277035b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277035e push eax */
  push32((uint32_t)(EAX));
  /* 1277035f push 1 */
  push32((uint32_t)(0x1u));
  /* 12770361 call 0x12772ec0 */
  push32(0x12770366u); f_12772ec0();
  /* 12770366 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277036c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1277036e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12770371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770374 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12770377 push eax */
  push32((uint32_t)(EAX));
  /* 12770378 call 0x127704c0 */
  push32(0x1277037du); f_127704c0();
  /* 1277037d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770383 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770386 push ecx */
  push32((uint32_t)(ECX));
  /* 12770387 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12770389 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277038c push edx */
  push32((uint32_t)(EDX));
  /* 1277038d push 1 */
  push32((uint32_t)(0x1u));
  /* 1277038f call 0x12772ec0 */
  push32(0x12770394u); f_12772ec0();
  /* 12770394 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770397 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277039a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1277039c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1277039f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127703a2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127703a5 push edx */
  push32((uint32_t)(EDX));
  /* 127703a6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 127703a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127703ab push eax */
  push32((uint32_t)(EAX));
  /* 127703ac push 1 */
  push32((uint32_t)(0x1u));
  /* 127703ae call 0x12772ec0 */
  push32(0x127703b3u); f_12772ec0();
  /* 127703b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127703b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127703b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127703bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127703be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127703c1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127703c4 push edx */
  push32((uint32_t)(EDX));
  /* 127703c5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 127703c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127703ca push eax */
  push32((uint32_t)(EAX));
  /* 127703cb push 0 */
  push32((uint32_t)(0x0u));
  /* 127703cd call 0x12772ec0 */
  push32(0x127703d2u); f_12772ec0();
  /* 127703d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127703d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127703d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127703da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127703dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127703e0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127703e3 push edx */
  push32((uint32_t)(EDX));
  /* 127703e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127703e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127703e9 push eax */
  push32((uint32_t)(EAX));
  /* 127703ea push 0 */
  push32((uint32_t)(0x0u));
  /* 127703ec call 0x12772ec0 */
  push32(0x127703f1u); f_12772ec0();
  /* 127703f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127703f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127703f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127703f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127703fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127703ff add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770402 push edx */
  push32((uint32_t)(EDX));
  /* 12770403 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12770405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770408 push eax */
  push32((uint32_t)(EAX));
  /* 12770409 push 0 */
  push32((uint32_t)(0x0u));
  /* 1277040b call 0x12772ec0 */
  push32(0x12770410u); f_12772ec0();
  /* 12770410 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770413 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12770416 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12770418 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1277041b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277041e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770421 push edx */
  push32((uint32_t)(EDX));
  /* 12770422 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12770424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770427 push eax */
  push32((uint32_t)(EAX));
  /* 12770428 push 0 */
  push32((uint32_t)(0x0u));
  /* 1277042a call 0x12772ec0 */
  push32(0x1277042fu); f_12772ec0();
  /* 1277042f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770432 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12770435 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12770437 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1277043a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277043d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770440 push edx */
  push32((uint32_t)(EDX));
  /* 12770441 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12770443 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770446 push eax */
  push32((uint32_t)(EAX));
  /* 12770447 push 0 */
  push32((uint32_t)(0x0u));
  /* 12770449 call 0x12772ec0 */
  push32(0x1277044eu); f_12772ec0();
  /* 1277044e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770451 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12770454 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12770456 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12770459 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277045c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277045f push edx */
  push32((uint32_t)(EDX));
  /* 12770460 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12770462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770465 push eax */
  push32((uint32_t)(EAX));
  /* 12770466 push 0 */
  push32((uint32_t)(0x0u));
  /* 12770468 call 0x12772ec0 */
  push32(0x1277046du); f_12772ec0();
  /* 1277046d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770470 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12770473 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12770475 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12770478 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277047b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277047e push edx */
  push32((uint32_t)(EDX));
  /* 1277047f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12770481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770484 push eax */
  push32((uint32_t)(EAX));
  /* 12770485 push 0 */
  push32((uint32_t)(0x0u));
  /* 12770487 call 0x12772ec0 */
  push32(0x1277048cu); f_12772ec0();
  /* 1277048c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277048f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12770492 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12770494 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12770497 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277049a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277049d push edx */
  push32((uint32_t)(EDX));
  /* 1277049e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 127704a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127704a3 push eax */
  push32((uint32_t)(EAX));
  /* 127704a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127704a6 call 0x12772ec0 */
  push32(0x127704abu); f_12772ec0();
  /* 127704ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127704ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127704b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127704b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127704b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127704b9:;
  /* 127704b9 mov esp, ebp */
  ESP = (EBP);
  /* 127704bb pop ebp */
  EBP = (pop32());
  /* 127704bc ret  */
  ESPCHK(0x127702b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x127704c0 (125 bytes, 49 insns) */
void f_127704c0(void) {
  FTRACE(0x127704c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127704c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127704c1 mov ebp, esp */
  EBP = (ESP);
  /* 127704c3 push ecx */
  push32((uint32_t)(ECX));
L_127704c4:;
  /* 127704c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127704c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127704ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127704cc je 0x12770539 */
  if (C.zf) goto L_12770539;
  /* 127704ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127704d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127704d4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127704d7 jl 0x127704fd */
  if ((C.sf!=C.of)) goto L_127704fd;
  /* 127704d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127704dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127704df cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127704e2 jg 0x127704fd */
  if ((!C.zf&&C.sf==C.of)) goto L_127704fd;
  /* 127704e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127704e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127704ea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127704ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127704f0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127704f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127704f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127704f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127704fb jmp 0x12770537 */
  goto L_12770537;
L_127704fd:;
  /* 127704fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770500 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12770503 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770506 jne 0x1277052e */
  if (!C.zf) goto L_1277052e;
  /* 12770508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277050b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1277050e:;
  /* 1277050e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770511 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770514 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12770517 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12770519 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277051c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277051f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12770522 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770525 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12770528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277052a jne 0x1277050e */
  if (!C.zf) goto L_1277050e;
  /* 1277052c jmp 0x12770537 */
  goto L_12770537;
L_1277052e:;
  /* 1277052e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770531 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770534 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12770537:;
  /* 12770537 jmp 0x127704c4 */
  goto L_127704c4;
L_12770539:;
  /* 12770539 mov esp, ebp */
  ESP = (EBP);
  /* 1277053b pop ebp */
  EBP = (pop32());
  /* 1277053c ret  */
  ESPCHK(0x127704c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010540 @ 0x12770540 (147 bytes, 52 insns) */
void f_12770540(void) {
  FTRACE(0x12770540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770540 push ebp */
  push32((uint32_t)(EBP));
  /* 12770541 mov ebp, esp */
  EBP = (ESP);
  /* 12770543 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770547 jne 0x1277054e */
  if (!C.zf) goto L_1277054e;
  /* 12770549 jmp 0x127705d1 */
  goto L_127705d1;
L_1277054e:;
  /* 1277054e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770551 cmp dword ptr [eax + 0xc], 0x127908f8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x127908f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770558 je 0x127705d1 */
  if (C.zf) goto L_127705d1;
  /* 1277055a push 2 */
  push32((uint32_t)(0x2u));
  /* 1277055c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277055f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12770562 push edx */
  push32((uint32_t)(EDX));
  /* 12770563 call 0x12765790 */
  push32(0x12770568u); f_12765790();
  /* 12770568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277056b push 2 */
  push32((uint32_t)(0x2u));
  /* 1277056d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770570 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12770573 push ecx */
  push32((uint32_t)(ECX));
  /* 12770574 call 0x12765790 */
  push32(0x12770579u); f_12765790();
  /* 12770579 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277057c push 2 */
  push32((uint32_t)(0x2u));
  /* 1277057e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770581 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12770584 push eax */
  push32((uint32_t)(EAX));
  /* 12770585 call 0x12765790 */
  push32(0x1277058au); f_12765790();
  /* 1277058a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277058d push 2 */
  push32((uint32_t)(0x2u));
  /* 1277058f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770592 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12770595 push edx */
  push32((uint32_t)(EDX));
  /* 12770596 call 0x12765790 */
  push32(0x1277059bu); f_12765790();
  /* 1277059b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277059e push 2 */
  push32((uint32_t)(0x2u));
  /* 127705a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127705a3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127705a6 push ecx */
  push32((uint32_t)(ECX));
  /* 127705a7 call 0x12765790 */
  push32(0x127705acu); f_12765790();
  /* 127705ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127705af push 2 */
  push32((uint32_t)(0x2u));
  /* 127705b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127705b4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 127705b7 push eax */
  push32((uint32_t)(EAX));
  /* 127705b8 call 0x12765790 */
  push32(0x127705bdu); f_12765790();
  /* 127705bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127705c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127705c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127705c5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 127705c8 push edx */
  push32((uint32_t)(EDX));
  /* 127705c9 call 0x12765790 */
  push32(0x127705ceu); f_12765790();
  /* 127705ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127705d1:;
  /* 127705d1 pop ebp */
  EBP = (pop32());
  /* 127705d2 ret  */
  ESPCHK(0x12770540u, _esp0);
  ESP += 4; return;
}

/* FUN_100105e0 @ 0x127705e0 (928 bytes, 284 insns) */
void f_127705e0(void) {
  FTRACE(0x127705e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127705e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127705e1 mov ebp, esp */
  EBP = (ESP);
  /* 127705e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127705e6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 127705ed mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 127705f4 cmp dword ptr [0x12790860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127705fb je 0x12770931 */
  if (C.zf) goto L_12770931;
  /* 12770601 cmp dword ptr [0x12790870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770608 jne 0x12770630 */
  if (!C.zf) goto L_12770630;
  /* 1277060a push 0x12790870 */
  push32((uint32_t)(0x12790870u));
  /* 1277060f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12770614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770616 mov ax, word ptr [0x127908b4] */
  AX = (r16((uint32_t)(0x127908b4)));
  /* 1277061c push eax */
  push32((uint32_t)(EAX));
  /* 1277061d push 0 */
  push32((uint32_t)(0x0u));
  /* 1277061f call 0x12772ec0 */
  push32(0x12770624u); f_12772ec0();
  /* 12770624 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770627 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770629 je 0x12770630 */
  if (C.zf) goto L_12770630;
  /* 1277062b jmp 0x127708f2 */
  goto L_127708f2;
L_12770630:;
  /* 12770630 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12770632 push 0x1278c33c */
  push32((uint32_t)(0x1278c33cu));
  /* 12770637 push 2 */
  push32((uint32_t)(0x2u));
  /* 12770639 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1277063e call 0x12764d00 */
  push32(0x12770643u); f_12764d00();
  /* 12770643 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770646 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12770649 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1277064b push 0x1278c33c */
  push32((uint32_t)(0x1278c33cu));
  /* 12770650 push 2 */
  push32((uint32_t)(0x2u));
  /* 12770652 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12770657 call 0x12764d00 */
  push32(0x1277065cu); f_12764d00();
  /* 1277065c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277065f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12770662 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12770664 push 0x1278c33c */
  push32((uint32_t)(0x1278c33cu));
  /* 12770669 push 2 */
  push32((uint32_t)(0x2u));
  /* 1277066b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12770670 call 0x12764d00 */
  push32(0x12770675u); f_12764d00();
  /* 12770675 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770678 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1277067b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1277067d push 0x1278c33c */
  push32((uint32_t)(0x1278c33cu));
  /* 12770682 push 2 */
  push32((uint32_t)(0x2u));
  /* 12770684 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12770689 call 0x12764d00 */
  push32(0x1277068eu); f_12764d00();
  /* 1277068e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770691 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12770694 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770698 je 0x127706ac */
  if (C.zf) goto L_127706ac;
  /* 1277069a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277069e je 0x127706ac */
  if (C.zf) goto L_127706ac;
  /* 127706a0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127706a4 je 0x127706ac */
  if (C.zf) goto L_127706ac;
  /* 127706a6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127706aa jne 0x127706b1 */
  if (!C.zf) goto L_127706b1;
L_127706ac:;
  /* 127706ac jmp 0x127708f2 */
  goto L_127708f2;
L_127706b1:;
  /* 127706b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127706b4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127706b7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127706be jmp 0x127706c9 */
  goto L_127706c9;
L_127706c0:;
  /* 127706c0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127706c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127706c6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_127706c9:;
  /* 127706c9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127706d0 jge 0x127706e5 */
  if ((C.sf==C.of)) goto L_127706e5;
  /* 127706d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127706d5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 127706d8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 127706da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127706dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127706e0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127706e3 jmp 0x127706c0 */
  goto L_127706c0;
L_127706e5:;
  /* 127706e5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 127706e8 push eax */
  push32((uint32_t)(EAX));
  /* 127706e9 mov ecx, dword ptr [0x12790870] */
  ECX = (r32((uint32_t)(0x12790870)));
  /* 127706ef push ecx */
  push32((uint32_t)(ECX));
  /* 127706f0 call dword ptr [0x12793304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793304))), 0x127706f6u);
  /* 127706f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127706f8 jne 0x127706ff */
  if (!C.zf) goto L_127706ff;
  /* 127706fa jmp 0x127708f2 */
  goto L_127708f2;
L_127706ff:;
  /* 127706ff cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770703 jbe 0x1277070a */
  if ((C.cf||C.zf)) goto L_1277070a;
  /* 12770705 jmp 0x127708f2 */
  goto L_127708f2;
L_1277070a:;
  /* 1277070a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1277070d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12770713 mov dword ptr [0x1278eea4], edx */
  w32((uint32_t)(0x1278eea4), (EDX));
  /* 12770719 cmp dword ptr [0x1278eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1278eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770720 jle 0x12770779 */
  if ((C.zf||C.sf!=C.of)) goto L_12770779;
  /* 12770722 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12770725 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12770728 jmp 0x12770733 */
  goto L_12770733;
L_1277072a:;
  /* 1277072a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1277072d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770730 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12770733:;
  /* 12770733 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12770736 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770738 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1277073a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277073c je 0x12770779 */
  if (C.zf) goto L_12770779;
  /* 1277073e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12770741 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12770743 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12770746 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12770748 je 0x12770779 */
  if (C.zf) goto L_12770779;
  /* 1277074a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1277074d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1277074f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12770751 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12770754 jmp 0x1277075f */
  goto L_1277075f;
L_12770756:;
  /* 12770756 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12770759 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277075c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1277075f:;
  /* 1277075f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12770762 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12770764 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12770767 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277076a jg 0x12770777 */
  if ((!C.zf&&C.sf==C.of)) goto L_12770777;
  /* 1277076c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1277076f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770772 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12770775 jmp 0x12770756 */
  goto L_12770756;
L_12770777:;
  /* 12770777 jmp 0x1277072a */
  goto L_1277072a;
L_12770779:;
  /* 12770779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1277077b push 0 */
  push32((uint32_t)(0x0u));
  /* 1277077d push 0 */
  push32((uint32_t)(0x0u));
  /* 1277077f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12770782 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770785 push eax */
  push32((uint32_t)(EAX));
  /* 12770786 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1277078b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1277078e push ecx */
  push32((uint32_t)(ECX));
  /* 1277078f push 1 */
  push32((uint32_t)(0x1u));
  /* 12770791 call 0x1276cf30 */
  push32(0x12770796u); f_1276cf30();
  /* 12770796 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770799 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277079b jne 0x127707a2 */
  if (!C.zf) goto L_127707a2;
  /* 1277079d jmp 0x127708f2 */
  goto L_127708f2;
L_127707a2:;
  /* 127707a2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127707a5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 127707aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127707ad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127707b0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127707b7 jmp 0x127707c2 */
  goto L_127707c2;
L_127707b9:;
  /* 127707b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127707bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127707bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_127707c2:;
  /* 127707c2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127707c9 jge 0x127707e0 */
  if ((C.sf==C.of)) goto L_127707e0;
  /* 127707cb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127707ce mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 127707d2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 127707d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127707d8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127707db mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127707de jmp 0x127707b9 */
  goto L_127707b9;
L_127707e0:;
  /* 127707e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127707e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127707e4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127707e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127707ea push edx */
  push32((uint32_t)(EDX));
  /* 127707eb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127707f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127707f3 push eax */
  push32((uint32_t)(EAX));
  /* 127707f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 127707f6 call 0x12773160 */
  push32(0x127707fbu); f_12773160();
  /* 127707fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127707fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770800 jne 0x12770807 */
  if (!C.zf) goto L_12770807;
  /* 12770802 jmp 0x127708f2 */
  goto L_127708f2;
L_12770807:;
  /* 12770807 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1277080a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1277080f cmp dword ptr [0x1278eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1278eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770816 jle 0x12770873 */
  if ((C.zf||C.sf!=C.of)) goto L_12770873;
  /* 12770818 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1277081b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1277081e jmp 0x12770829 */
  goto L_12770829;
L_12770820:;
  /* 12770820 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12770823 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770826 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12770829:;
  /* 12770829 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1277082c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1277082e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12770830 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12770832 je 0x12770873 */
  if (C.zf) goto L_12770873;
  /* 12770834 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12770837 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12770839 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1277083c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1277083e je 0x12770873 */
  if (C.zf) goto L_12770873;
  /* 12770840 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12770843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770845 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12770847 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1277084a jmp 0x12770855 */
  goto L_12770855;
L_1277084c:;
  /* 1277084c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1277084f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770852 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12770855:;
  /* 12770855 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12770858 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277085a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1277085d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770860 jg 0x12770871 */
  if ((!C.zf&&C.sf==C.of)) goto L_12770871;
  /* 12770862 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12770865 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12770868 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1277086f jmp 0x1277084c */
  goto L_1277084c;
L_12770871:;
  /* 12770871 jmp 0x12770820 */
  goto L_12770820;
L_12770873:;
  /* 12770873 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12770876 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770879 mov dword ptr [0x1278ec98], eax */
  w32((uint32_t)(0x1278ec98), (EAX));
  /* 1277087e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12770881 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770884 mov dword ptr [0x1278ec9c], ecx */
  w32((uint32_t)(0x1278ec9c), (ECX));
  /* 1277088a cmp dword ptr [0x127908a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770891 je 0x127708a4 */
  if (C.zf) goto L_127708a4;
  /* 12770893 push 2 */
  push32((uint32_t)(0x2u));
  /* 12770895 mov edx, dword ptr [0x127908a0] */
  EDX = (r32((uint32_t)(0x127908a0)));
  /* 1277089b push edx */
  push32((uint32_t)(EDX));
  /* 1277089c call 0x12765790 */
  push32(0x127708a1u); f_12765790();
  /* 127708a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127708a4:;
  /* 127708a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127708a7 mov dword ptr [0x127908a0], eax */
  w32((uint32_t)(0x127908a0), (EAX));
  /* 127708ac cmp dword ptr [0x127908a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127708b3 je 0x127708c6 */
  if (C.zf) goto L_127708c6;
  /* 127708b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127708b7 mov ecx, dword ptr [0x127908a4] */
  ECX = (r32((uint32_t)(0x127908a4)));
  /* 127708bd push ecx */
  push32((uint32_t)(ECX));
  /* 127708be call 0x12765790 */
  push32(0x127708c3u); f_12765790();
  /* 127708c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127708c6:;
  /* 127708c6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127708c9 mov dword ptr [0x127908a4], edx */
  w32((uint32_t)(0x127908a4), (EDX));
  /* 127708cf push 2 */
  push32((uint32_t)(0x2u));
  /* 127708d1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127708d4 push eax */
  push32((uint32_t)(EAX));
  /* 127708d5 call 0x12765790 */
  push32(0x127708dau); f_12765790();
  /* 127708da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127708dd push 2 */
  push32((uint32_t)(0x2u));
  /* 127708df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127708e2 push ecx */
  push32((uint32_t)(ECX));
  /* 127708e3 call 0x12765790 */
  push32(0x127708e8u); f_12765790();
  /* 127708e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127708eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127708ed jmp 0x1277097c */
  goto L_1277097c;
L_127708f2:;
  /* 127708f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 127708f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127708f7 push edx */
  push32((uint32_t)(EDX));
  /* 127708f8 call 0x12765790 */
  push32(0x127708fdu); f_12765790();
  /* 127708fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770900 push 2 */
  push32((uint32_t)(0x2u));
  /* 12770902 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12770905 push eax */
  push32((uint32_t)(EAX));
  /* 12770906 call 0x12765790 */
  push32(0x1277090bu); f_12765790();
  /* 1277090b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277090e push 2 */
  push32((uint32_t)(0x2u));
  /* 12770910 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12770913 push ecx */
  push32((uint32_t)(ECX));
  /* 12770914 call 0x12765790 */
  push32(0x12770919u); f_12765790();
  /* 12770919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277091c push 2 */
  push32((uint32_t)(0x2u));
  /* 1277091e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12770921 push edx */
  push32((uint32_t)(EDX));
  /* 12770922 call 0x12765790 */
  push32(0x12770927u); f_12765790();
  /* 12770927 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277092a mov eax, 1 */
  EAX = (0x1u);
  /* 1277092f jmp 0x1277097c */
  goto L_1277097c;
L_12770931:;
  /* 12770931 mov dword ptr [0x1278ec98], 0x1278eca2 */
  w32((uint32_t)(0x1278ec98), (0x1278eca2u));
  /* 1277093b mov dword ptr [0x1278ec9c], 0x1278eca2 */
  w32((uint32_t)(0x1278ec9c), (0x1278eca2u));
  /* 12770945 push 2 */
  push32((uint32_t)(0x2u));
  /* 12770947 mov eax, dword ptr [0x127908a0] */
  EAX = (r32((uint32_t)(0x127908a0)));
  /* 1277094c push eax */
  push32((uint32_t)(EAX));
  /* 1277094d call 0x12765790 */
  push32(0x12770952u); f_12765790();
  /* 12770952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770955 push 2 */
  push32((uint32_t)(0x2u));
  /* 12770957 mov ecx, dword ptr [0x127908a4] */
  ECX = (r32((uint32_t)(0x127908a4)));
  /* 1277095d push ecx */
  push32((uint32_t)(ECX));
  /* 1277095e call 0x12765790 */
  push32(0x12770963u); f_12765790();
  /* 12770963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770966 mov dword ptr [0x127908a0], 0 */
  w32((uint32_t)(0x127908a0), (0x0u));
  /* 12770970 mov dword ptr [0x127908a4], 0 */
  w32((uint32_t)(0x127908a4), (0x0u));
  /* 1277097a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1277097c:;
  /* 1277097c mov esp, ebp */
  ESP = (EBP);
  /* 1277097e pop ebp */
  EBP = (pop32());
  /* 1277097f ret  */
  ESPCHK(0x127705e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010980 @ 0x12770980 (7 bytes, 5 insns) */
void f_12770980(void) {
  FTRACE(0x12770980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770980 push ebp */
  push32((uint32_t)(EBP));
  /* 12770981 mov ebp, esp */
  EBP = (ESP);
  /* 12770983 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770985 pop ebp */
  EBP = (pop32());
  /* 12770986 ret  */
  ESPCHK(0x12770980u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12770990 (129 bytes, 56 insns) */
void f_12770990(void) {
  FTRACE(0x12770990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770990 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12770994 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12770998 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1277099e jne 0x127709dc */
  if (!C.zf) goto L_127709dc;
L_127709a0:;
  /* 127709a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127709a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127709a4 jne 0x127709d4 */
  if (!C.zf) goto L_127709d4;
  /* 127709a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127709a8 je 0x127709d0 */
  if (C.zf) goto L_127709d0;
  /* 127709aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127709ad jne 0x127709d4 */
  if (!C.zf) goto L_127709d4;
  /* 127709af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127709b1 je 0x127709d0 */
  if (C.zf) goto L_127709d0;
  /* 127709b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127709b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127709b9 jne 0x127709d4 */
  if (!C.zf) goto L_127709d4;
  /* 127709bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127709bd je 0x127709d0 */
  if (C.zf) goto L_127709d0;
  /* 127709bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127709c2 jne 0x127709d4 */
  if (!C.zf) goto L_127709d4;
  /* 127709c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127709c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127709ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127709cc jne 0x127709a0 */
  if (!C.zf) goto L_127709a0;
  /* 127709ce mov edi, edi */
  EDI = (EDI);
L_127709d0:;
  /* 127709d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127709d2 ret  */
  ESPCHK(0x12770990u, _esp0);
  ESP += 4; return;
  /* 127709d3 nop  */
  /* nop */
L_127709d4:;
  /* 127709d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127709d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127709d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 127709d9 ret  */
  ESPCHK(0x12770990u, _esp0);
  ESP += 4; return;
  /* 127709da mov edi, edi */
  EDI = (EDI);
L_127709dc:;
  /* 127709dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 127709e2 je 0x127709f8 */
  if (C.zf) goto L_127709f8;
  /* 127709e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127709e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 127709e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127709e9 jne 0x127709d4 */
  if (!C.zf) goto L_127709d4;
  /* 127709eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127709ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127709ee je 0x127709d0 */
  if (C.zf) goto L_127709d0;
  /* 127709f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 127709f6 je 0x127709a0 */
  if (C.zf) goto L_127709a0;
L_127709f8:;
  /* 127709f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 127709fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127709fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12770a00 jne 0x127709d4 */
  if (!C.zf) goto L_127709d4;
  /* 12770a02 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12770a04 je 0x127709d0 */
  if (C.zf) goto L_127709d0;
  /* 12770a06 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12770a09 jne 0x127709d4 */
  if (!C.zf) goto L_127709d4;
  /* 12770a0b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12770a0d je 0x127709d0 */
  if (C.zf) goto L_127709d0;
  /* 12770a0f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770a12 jmp 0x127709a0 */
  goto L_127709a0;
}

/* FUN_10010a20 @ 0x12770a20 (62 bytes, 35 insns) */
void f_12770a20(void) {
  FTRACE(0x12770a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12770a21 mov ebp, esp */
  EBP = (ESP);
  /* 12770a23 push esi */
  push32((uint32_t)(ESI));
  /* 12770a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770a26 push eax */
  push32((uint32_t)(EAX));
  /* 12770a27 push eax */
  push32((uint32_t)(EAX));
  /* 12770a28 push eax */
  push32((uint32_t)(EAX));
  /* 12770a29 push eax */
  push32((uint32_t)(EAX));
  /* 12770a2a push eax */
  push32((uint32_t)(EAX));
  /* 12770a2b push eax */
  push32((uint32_t)(EAX));
  /* 12770a2c push eax */
  push32((uint32_t)(EAX));
  /* 12770a2d push eax */
  push32((uint32_t)(EAX));
  /* 12770a2e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12770a31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12770a34:;
  /* 12770a34 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12770a36 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12770a38 je 0x12770a41 */
  if (C.zf) goto L_12770a41;
  /* 12770a3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12770a3b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12770a3b");
  /* 12770a3f jmp 0x12770a34 */
  goto L_12770a34;
L_12770a41:;
  /* 12770a41 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12770a44 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12770a47 nop  */
  /* nop */
L_12770a48:;
  /* 12770a48 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12770a49 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12770a4b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12770a4d je 0x12770a56 */
  if (C.zf) goto L_12770a56;
  /* 12770a4f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12770a50 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12770a50");
  /* 12770a54 jae 0x12770a48 */
  if (!C.cf) goto L_12770a48;
L_12770a56:;
  /* 12770a56 mov eax, ecx */
  EAX = (ECX);
  /* 12770a58 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770a5b pop esi */
  ESI = (pop32());
  /* 12770a5c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12770a5d ret  */
  ESPCHK(0x12770a20u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12770a60 (56 bytes, 31 insns) */
void f_12770a60(void) {
  FTRACE(0x12770a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12770a61 mov ebp, esp */
  EBP = (ESP);
  /* 12770a63 push edi */
  push32((uint32_t)(EDI));
  /* 12770a64 push esi */
  push32((uint32_t)(ESI));
  /* 12770a65 push ebx */
  push32((uint32_t)(EBX));
  /* 12770a66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12770a69 jecxz 0x12770a91 */
  x86_unimpl("jecxz @ 0x12770a69");
  /* 12770a6b mov ebx, ecx */
  EBX = (ECX);
  /* 12770a6d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12770a70 mov esi, edi */
  ESI = (EDI);
  /* 12770a72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770a74 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12770a76 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12770a78 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770a7a mov edi, esi */
  EDI = (ESI);
  /* 12770a7c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12770a7f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12770a81 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12770a84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12770a86 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12770a89 ja 0x12770a8f */
  if ((!C.cf&&!C.zf)) goto L_12770a8f;
  /* 12770a8b je 0x12770a91 */
  if (C.zf) goto L_12770a91;
  /* 12770a8d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12770a8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12770a8f:;
  /* 12770a8f not ecx */
  ECX = (~(ECX));
L_12770a91:;
  /* 12770a91 mov eax, ecx */
  EAX = (ECX);
  /* 12770a93 pop ebx */
  EBX = (pop32());
  /* 12770a94 pop esi */
  ESI = (pop32());
  /* 12770a95 pop edi */
  EDI = (pop32());
  /* 12770a96 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12770a97 ret  */
  ESPCHK(0x12770a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010aa0 @ 0x12770aa0 (58 bytes, 32 insns) */
void f_12770aa0(void) {
  FTRACE(0x12770aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12770aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12770aa3 push esi */
  push32((uint32_t)(ESI));
  /* 12770aa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770aa6 push eax */
  push32((uint32_t)(EAX));
  /* 12770aa7 push eax */
  push32((uint32_t)(EAX));
  /* 12770aa8 push eax */
  push32((uint32_t)(EAX));
  /* 12770aa9 push eax */
  push32((uint32_t)(EAX));
  /* 12770aaa push eax */
  push32((uint32_t)(EAX));
  /* 12770aab push eax */
  push32((uint32_t)(EAX));
  /* 12770aac push eax */
  push32((uint32_t)(EAX));
  /* 12770aad push eax */
  push32((uint32_t)(EAX));
  /* 12770aae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12770ab1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12770ab4:;
  /* 12770ab4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12770ab6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12770ab8 je 0x12770ac1 */
  if (C.zf) goto L_12770ac1;
  /* 12770aba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12770abb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12770abb");
  /* 12770abf jmp 0x12770ab4 */
  goto L_12770ab4;
L_12770ac1:;
  /* 12770ac1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12770ac4:;
  /* 12770ac4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12770ac6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12770ac8 je 0x12770ad4 */
  if (C.zf) goto L_12770ad4;
  /* 12770aca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12770acb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12770acb");
  /* 12770acf jae 0x12770ac4 */
  if (!C.cf) goto L_12770ac4;
  /* 12770ad1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12770ad4:;
  /* 12770ad4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770ad7 pop esi */
  ESI = (pop32());
  /* 12770ad8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12770ad9 ret  */
  ESPCHK(0x12770aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ae0 @ 0x12770ae0 (512 bytes, 147 insns) */
void f_12770ae0(void) {
  FTRACE(0x12770ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12770ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12770ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12770ae6 cmp dword ptr [0x127908ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770aed jne 0x12770b12 */
  if (!C.zf) goto L_12770b12;
  /* 12770aef call 0x127715b0 */
  push32(0x12770af4u); f_127715b0();
  /* 12770af4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770af6 je 0x12770b02 */
  if (C.zf) goto L_12770b02;
  /* 12770af8 mov eax, dword ptr [0x127932c8] */
  EAX = (r32((uint32_t)(0x127932c8)));
  /* 12770afd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12770b00 jmp 0x12770b09 */
  goto L_12770b09;
L_12770b02:;
  /* 12770b02 mov dword ptr [ebp - 8], 0x12771600 */
  w32((uint32_t)(EBP + -0x8), (0x12771600u));
L_12770b09:;
  /* 12770b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12770b0c mov dword ptr [0x127908ec], ecx */
  w32((uint32_t)(0x127908ec), (ECX));
L_12770b12:;
  /* 12770b12 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770b16 jne 0x12770b22 */
  if (!C.zf) goto L_12770b22;
  /* 12770b18 call 0x12771400 */
  push32(0x12770b1du); f_12771400();
  /* 12770b1d jmp 0x12770bee */
  goto L_12770bee;
L_12770b22:;
  /* 12770b22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770b25 mov dword ptr [0x127908dc], edx */
  w32((uint32_t)(0x127908dc), (EDX));
  /* 12770b2b cmp dword ptr [0x127908dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770b32 je 0x12770b54 */
  if (C.zf) goto L_12770b54;
  /* 12770b34 mov eax, dword ptr [0x127908dc] */
  EAX = (r32((uint32_t)(0x127908dc)));
  /* 12770b39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12770b3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12770b3e je 0x12770b54 */
  if (C.zf) goto L_12770b54;
  /* 12770b40 push 0x127908dc */
  push32((uint32_t)(0x127908dcu));
  /* 12770b45 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12770b47 push 0x1278fa90 */
  push32((uint32_t)(0x1278fa90u));
  /* 12770b4c call 0x12770ce0 */
  push32(0x12770b51u); f_12770ce0();
  /* 12770b51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12770b54:;
  /* 12770b54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770b57 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770b5a mov dword ptr [0x127908e0], edx */
  w32((uint32_t)(0x127908e0), (EDX));
  /* 12770b60 cmp dword ptr [0x127908e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770b67 je 0x12770b89 */
  if (C.zf) goto L_12770b89;
  /* 12770b69 mov eax, dword ptr [0x127908e0] */
  EAX = (r32((uint32_t)(0x127908e0)));
  /* 12770b6e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12770b71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12770b73 je 0x12770b89 */
  if (C.zf) goto L_12770b89;
  /* 12770b75 push 0x127908e0 */
  push32((uint32_t)(0x127908e0u));
  /* 12770b7a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12770b7c push 0x1278f9d8 */
  push32((uint32_t)(0x1278f9d8u));
  /* 12770b81 call 0x12770ce0 */
  push32(0x12770b86u); f_12770ce0();
  /* 12770b86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12770b89:;
  /* 12770b89 mov dword ptr [0x127908e4], 0 */
  w32((uint32_t)(0x127908e4), (0x0u));
  /* 12770b93 cmp dword ptr [0x127908dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770b9a je 0x12770bcd */
  if (C.zf) goto L_12770bcd;
  /* 12770b9c mov edx, dword ptr [0x127908dc] */
  EDX = (r32((uint32_t)(0x127908dc)));
  /* 12770ba2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12770ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770ba7 je 0x12770bcd */
  if (C.zf) goto L_12770bcd;
  /* 12770ba9 cmp dword ptr [0x127908e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770bb0 je 0x12770bc6 */
  if (C.zf) goto L_12770bc6;
  /* 12770bb2 mov ecx, dword ptr [0x127908e0] */
  ECX = (r32((uint32_t)(0x127908e0)));
  /* 12770bb8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12770bbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12770bbd je 0x12770bc6 */
  if (C.zf) goto L_12770bc6;
  /* 12770bbf call 0x12770d70 */
  push32(0x12770bc4u); f_12770d70();
  /* 12770bc4 jmp 0x12770bcb */
  goto L_12770bcb;
L_12770bc6:;
  /* 12770bc6 call 0x12771160 */
  push32(0x12770bcbu); f_12771160();
L_12770bcb:;
  /* 12770bcb jmp 0x12770bee */
  goto L_12770bee;
L_12770bcd:;
  /* 12770bcd cmp dword ptr [0x127908e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770bd4 je 0x12770be9 */
  if (C.zf) goto L_12770be9;
  /* 12770bd6 mov eax, dword ptr [0x127908e0] */
  EAX = (r32((uint32_t)(0x127908e0)));
  /* 12770bdb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12770bde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12770be0 je 0x12770be9 */
  if (C.zf) goto L_12770be9;
  /* 12770be2 call 0x12771300 */
  push32(0x12770be7u); f_12771300();
  /* 12770be7 jmp 0x12770bee */
  goto L_12770bee;
L_12770be9:;
  /* 12770be9 call 0x12771400 */
  push32(0x12770beeu); f_12771400();
L_12770bee:;
  /* 12770bee cmp dword ptr [0x127908e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770bf5 jne 0x12770bfe */
  if (!C.zf) goto L_12770bfe;
  /* 12770bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770bf9 jmp 0x12770cdc */
  goto L_12770cdc;
L_12770bfe:;
  /* 12770bfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770c01 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770c07 push edx */
  push32((uint32_t)(EDX));
  /* 12770c08 call 0x12771430 */
  push32(0x12770c0du); f_12771430();
  /* 12770c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770c10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12770c13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770c17 je 0x12770c2c */
  if (C.zf) goto L_12770c2c;
  /* 12770c19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770c1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12770c21 push eax */
  push32((uint32_t)(EAX));
  /* 12770c22 call dword ptr [0x127932cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932cc))), 0x12770c28u);
  /* 12770c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770c2a jne 0x12770c33 */
  if (!C.zf) goto L_12770c33;
L_12770c2c:;
  /* 12770c2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770c2e jmp 0x12770cdc */
  goto L_12770cdc;
L_12770c33:;
  /* 12770c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12770c35 mov ecx, dword ptr [0x127908cc] */
  ECX = (r32((uint32_t)(0x127908cc)));
  /* 12770c3b push ecx */
  push32((uint32_t)(ECX));
  /* 12770c3c call dword ptr [0x127932d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932d0))), 0x12770c42u);
  /* 12770c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770c44 jne 0x12770c4d */
  if (!C.zf) goto L_12770c4d;
  /* 12770c46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770c48 jmp 0x12770cdc */
  goto L_12770cdc;
L_12770c4d:;
  /* 12770c4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770c51 je 0x12770c78 */
  if (C.zf) goto L_12770c78;
  /* 12770c53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12770c56 mov ax, word ptr [0x127908cc] */
  AX = (r16((uint32_t)(0x127908cc)));
  /* 12770c5c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12770c5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12770c62 mov dx, word ptr [0x127908e8] */
  DX = (r16((uint32_t)(0x127908e8)));
  /* 12770c69 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12770c6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12770c70 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12770c74 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12770c78:;
  /* 12770c78 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770c7c je 0x12770cd7 */
  if (C.zf) goto L_12770cd7;
  /* 12770c7e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12770c80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12770c83 push edx */
  push32((uint32_t)(EDX));
  /* 12770c84 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12770c89 mov eax, dword ptr [0x127908cc] */
  EAX = (r32((uint32_t)(0x127908cc)));
  /* 12770c8e push eax */
  push32((uint32_t)(EAX));
  /* 12770c8f call dword ptr [0x127908ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127908ec))), 0x12770c95u);
  /* 12770c95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770c97 jne 0x12770c9d */
  if (!C.zf) goto L_12770c9d;
  /* 12770c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770c9b jmp 0x12770cdc */
  goto L_12770cdc;
L_12770c9d:;
  /* 12770c9d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12770c9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12770ca2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 12770ca6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12770cab mov edx, dword ptr [0x127908e8] */
  EDX = (r32((uint32_t)(0x127908e8)));
  /* 12770cb1 push edx */
  push32((uint32_t)(EDX));
  /* 12770cb2 call dword ptr [0x127908ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127908ec))), 0x12770cb8u);
  /* 12770cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770cba jne 0x12770cc0 */
  if (!C.zf) goto L_12770cc0;
  /* 12770cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12770cbe jmp 0x12770cdc */
  goto L_12770cdc;
L_12770cc0:;
  /* 12770cc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12770cc2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12770cc5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770cca push eax */
  push32((uint32_t)(EAX));
  /* 12770ccb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770cce push ecx */
  push32((uint32_t)(ECX));
  /* 12770ccf call 0x12767840 */
  push32(0x12770cd4u); f_12767840();
  /* 12770cd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12770cd7:;
  /* 12770cd7 mov eax, 1 */
  EAX = (0x1u);
L_12770cdc:;
  /* 12770cdc mov esp, ebp */
  ESP = (EBP);
  /* 12770cde pop ebp */
  EBP = (pop32());
  /* 12770cdf ret  */
  ESPCHK(0x12770ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ce0 @ 0x12770ce0 (130 bytes, 47 insns) */
void f_12770ce0(void) {
  FTRACE(0x12770ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12770ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12770ce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12770ce6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12770ced mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12770cf4:;
  /* 12770cf4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12770cf7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770cfa jg 0x12770d5e */
  if ((!C.zf&&C.sf==C.of)) goto L_12770d5e;
  /* 12770cfc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770d00 je 0x12770d5e */
  if (C.zf) goto L_12770d5e;
  /* 12770d02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12770d05 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770d08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12770d09 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12770d0b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12770d0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12770d10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770d13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770d16 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12770d19 push eax */
  push32((uint32_t)(EAX));
  /* 12770d1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12770d1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12770d1f push edx */
  push32((uint32_t)(EDX));
  /* 12770d20 call 0x127733d0 */
  push32(0x12770d25u); f_127733d0();
  /* 12770d25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770d28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12770d2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770d2f jne 0x12770d42 */
  if (!C.zf) goto L_12770d42;
  /* 12770d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770d34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770d37 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12770d3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12770d3e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12770d40 jmp 0x12770d5c */
  goto L_12770d5c;
L_12770d42:;
  /* 12770d42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770d46 jge 0x12770d53 */
  if ((C.sf==C.of)) goto L_12770d53;
  /* 12770d48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770d4b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12770d4e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12770d51 jmp 0x12770d5c */
  goto L_12770d5c;
L_12770d53:;
  /* 12770d53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770d56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770d59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12770d5c:;
  /* 12770d5c jmp 0x12770cf4 */
  goto L_12770cf4;
L_12770d5e:;
  /* 12770d5e mov esp, ebp */
  ESP = (EBP);
  /* 12770d60 pop ebp */
  EBP = (pop32());
  /* 12770d61 ret  */
  ESPCHK(0x12770ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d70 @ 0x12770d70 (186 bytes, 50 insns) */
void f_12770d70(void) {
  FTRACE(0x12770d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12770d71 mov ebp, esp */
  EBP = (ESP);
  /* 12770d73 push ecx */
  push32((uint32_t)(ECX));
  /* 12770d74 mov eax, dword ptr [0x127908dc] */
  EAX = (r32((uint32_t)(0x127908dc)));
  /* 12770d79 push eax */
  push32((uint32_t)(EAX));
  /* 12770d7a call 0x12767b30 */
  push32(0x12770d7fu); f_12767b30();
  /* 12770d7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770d82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12770d84 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770d87 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12770d8a mov dword ptr [0x127908d8], ecx */
  w32((uint32_t)(0x127908d8), (ECX));
  /* 12770d90 mov edx, dword ptr [0x127908e0] */
  EDX = (r32((uint32_t)(0x127908e0)));
  /* 12770d96 push edx */
  push32((uint32_t)(EDX));
  /* 12770d97 call 0x12767b30 */
  push32(0x12770d9cu); f_12767b30();
  /* 12770d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770d9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12770da1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770da4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12770da7 mov dword ptr [0x127908d0], ecx */
  w32((uint32_t)(0x127908d0), (ECX));
  /* 12770dad mov dword ptr [0x127908cc], 0 */
  w32((uint32_t)(0x127908cc), (0x0u));
  /* 12770db7 cmp dword ptr [0x127908d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770dbe je 0x12770dc9 */
  if (C.zf) goto L_12770dc9;
  /* 12770dc0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12770dc7 jmp 0x12770ddb */
  goto L_12770ddb;
L_12770dc9:;
  /* 12770dc9 mov edx, dword ptr [0x127908dc] */
  EDX = (r32((uint32_t)(0x127908dc)));
  /* 12770dcf push edx */
  push32((uint32_t)(EDX));
  /* 12770dd0 call 0x12771810 */
  push32(0x12770dd5u); f_12771810();
  /* 12770dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770dd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12770ddb:;
  /* 12770ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12770dde mov dword ptr [0x127908d4], eax */
  w32((uint32_t)(0x127908d4), (EAX));
  /* 12770de3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12770de5 push 0x12770e30 */
  push32((uint32_t)(0x12770e30u));
  /* 12770dea call dword ptr [0x127932c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932c4))), 0x12770df0u);
  /* 12770df0 mov ecx, dword ptr [0x127908e4] */
  ECX = (r32((uint32_t)(0x127908e4)));
  /* 12770df6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12770dfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12770dfe je 0x12770e1c */
  if (C.zf) goto L_12770e1c;
  /* 12770e00 mov edx, dword ptr [0x127908e4] */
  EDX = (r32((uint32_t)(0x127908e4)));
  /* 12770e06 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12770e0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12770e0e je 0x12770e1c */
  if (C.zf) goto L_12770e1c;
  /* 12770e10 mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 12770e15 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12770e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770e1a jne 0x12770e26 */
  if (!C.zf) goto L_12770e26;
L_12770e1c:;
  /* 12770e1c mov dword ptr [0x127908e4], 0 */
  w32((uint32_t)(0x127908e4), (0x0u));
L_12770e26:;
  /* 12770e26 mov esp, ebp */
  ESP = (EBP);
  /* 12770e28 pop ebp */
  EBP = (pop32());
  /* 12770e29 ret  */
  ESPCHK(0x12770d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e30 @ 0x12770e30 (804 bytes, 220 insns) */
void f_12770e30(void) {
  FTRACE(0x12770e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12770e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12770e31 mov ebp, esp */
  EBP = (ESP);
  /* 12770e33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12770e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12770e39 push eax */
  push32((uint32_t)(EAX));
  /* 12770e3a call 0x12771790 */
  push32(0x12770e3fu); f_12771790();
  /* 12770e3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770e42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12770e45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12770e47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12770e4a push ecx */
  push32((uint32_t)(ECX));
  /* 12770e4b mov edx, dword ptr [0x127908d0] */
  EDX = (r32((uint32_t)(0x127908d0)));
  /* 12770e51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12770e53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12770e55 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12770e5b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770e61 push edx */
  push32((uint32_t)(EDX));
  /* 12770e62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12770e65 push eax */
  push32((uint32_t)(EAX));
  /* 12770e66 call dword ptr [0x127908ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127908ec))), 0x12770e6cu);
  /* 12770e6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770e6e jne 0x12770e84 */
  if (!C.zf) goto L_12770e84;
  /* 12770e70 mov dword ptr [0x127908e4], 0 */
  w32((uint32_t)(0x127908e4), (0x0u));
  /* 12770e7a mov eax, 1 */
  EAX = (0x1u);
  /* 12770e7f jmp 0x1277114e */
  goto L_1277114e;
L_12770e84:;
  /* 12770e84 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12770e87 push ecx */
  push32((uint32_t)(ECX));
  /* 12770e88 mov edx, dword ptr [0x127908e0] */
  EDX = (r32((uint32_t)(0x127908e0)));
  /* 12770e8e push edx */
  push32((uint32_t)(EDX));
  /* 12770e8f call 0x127733d0 */
  push32(0x12770e94u); f_127733d0();
  /* 12770e94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770e97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770e99 jne 0x12770fbf */
  if (!C.zf) goto L_12770fbf;
  /* 12770e9f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12770ea1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12770ea4 push eax */
  push32((uint32_t)(EAX));
  /* 12770ea5 mov ecx, dword ptr [0x127908d8] */
  ECX = (r32((uint32_t)(0x127908d8)));
  /* 12770eab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12770ead sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12770eaf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12770eb5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770ebb push ecx */
  push32((uint32_t)(ECX));
  /* 12770ebc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12770ebf push edx */
  push32((uint32_t)(EDX));
  /* 12770ec0 call dword ptr [0x127908ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127908ec))), 0x12770ec6u);
  /* 12770ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770ec8 jne 0x12770ede */
  if (!C.zf) goto L_12770ede;
  /* 12770eca mov dword ptr [0x127908e4], 0 */
  w32((uint32_t)(0x127908e4), (0x0u));
  /* 12770ed4 mov eax, 1 */
  EAX = (0x1u);
  /* 12770ed9 jmp 0x1277114e */
  goto L_1277114e;
L_12770ede:;
  /* 12770ede lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12770ee1 push eax */
  push32((uint32_t)(EAX));
  /* 12770ee2 mov ecx, dword ptr [0x127908dc] */
  ECX = (r32((uint32_t)(0x127908dc)));
  /* 12770ee8 push ecx */
  push32((uint32_t)(ECX));
  /* 12770ee9 call 0x127733d0 */
  push32(0x12770eeeu); f_127733d0();
  /* 12770eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770ef3 jne 0x12770f20 */
  if (!C.zf) goto L_12770f20;
  /* 12770ef5 mov edx, dword ptr [0x127908e4] */
  EDX = (r32((uint32_t)(0x127908e4)));
  /* 12770efb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12770f01 mov dword ptr [0x127908e4], edx */
  w32((uint32_t)(0x127908e4), (EDX));
  /* 12770f07 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12770f0a mov dword ptr [0x127908e8], eax */
  w32((uint32_t)(0x127908e8), (EAX));
  /* 12770f0f mov ecx, dword ptr [0x127908e8] */
  ECX = (r32((uint32_t)(0x127908e8)));
  /* 12770f15 mov dword ptr [0x127908cc], ecx */
  w32((uint32_t)(0x127908cc), (ECX));
  /* 12770f1b jmp 0x12770fbf */
  goto L_12770fbf;
L_12770f20:;
  /* 12770f20 mov edx, dword ptr [0x127908e4] */
  EDX = (r32((uint32_t)(0x127908e4)));
  /* 12770f26 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12770f29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12770f2b jne 0x12770fbf */
  if (!C.zf) goto L_12770fbf;
  /* 12770f31 cmp dword ptr [0x127908d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770f38 je 0x12770f8d */
  if (C.zf) goto L_12770f8d;
  /* 12770f3a mov eax, dword ptr [0x127908d4] */
  EAX = (r32((uint32_t)(0x127908d4)));
  /* 12770f3f push eax */
  push32((uint32_t)(EAX));
  /* 12770f40 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12770f43 push ecx */
  push32((uint32_t)(ECX));
  /* 12770f44 mov edx, dword ptr [0x127908dc] */
  EDX = (r32((uint32_t)(0x127908dc)));
  /* 12770f4a push edx */
  push32((uint32_t)(EDX));
  /* 12770f4b call 0x127734a0 */
  push32(0x12770f50u); f_127734a0();
  /* 12770f50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770f53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770f55 jne 0x12770f8d */
  if (!C.zf) goto L_12770f8d;
  /* 12770f57 mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 12770f5c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12770f5e mov dword ptr [0x127908e4], eax */
  w32((uint32_t)(0x127908e4), (EAX));
  /* 12770f63 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12770f66 mov dword ptr [0x127908e8], ecx */
  w32((uint32_t)(0x127908e8), (ECX));
  /* 12770f6c mov edx, dword ptr [0x127908dc] */
  EDX = (r32((uint32_t)(0x127908dc)));
  /* 12770f72 push edx */
  push32((uint32_t)(EDX));
  /* 12770f73 call 0x12767b30 */
  push32(0x12770f78u); f_12767b30();
  /* 12770f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770f7b cmp eax, dword ptr [0x127908d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127908d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770f81 jne 0x12770f8b */
  if (!C.zf) goto L_12770f8b;
  /* 12770f83 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12770f86 mov dword ptr [0x127908cc], eax */
  w32((uint32_t)(0x127908cc), (EAX));
L_12770f8b:;
  /* 12770f8b jmp 0x12770fbf */
  goto L_12770fbf;
L_12770f8d:;
  /* 12770f8d mov ecx, dword ptr [0x127908e4] */
  ECX = (r32((uint32_t)(0x127908e4)));
  /* 12770f93 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12770f96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12770f98 jne 0x12770fbf */
  if (!C.zf) goto L_12770fbf;
  /* 12770f9a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12770f9d push edx */
  push32((uint32_t)(EDX));
  /* 12770f9e call 0x127714d0 */
  push32(0x12770fa3u); f_127714d0();
  /* 12770fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12770fa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12770fa8 je 0x12770fbf */
  if (C.zf) goto L_12770fbf;
  /* 12770faa mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 12770faf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12770fb1 mov dword ptr [0x127908e4], eax */
  w32((uint32_t)(0x127908e4), (EAX));
  /* 12770fb6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12770fb9 mov dword ptr [0x127908e8], ecx */
  w32((uint32_t)(0x127908e8), (ECX));
L_12770fbf:;
  /* 12770fbf mov edx, dword ptr [0x127908e4] */
  EDX = (r32((uint32_t)(0x127908e4)));
  /* 12770fc5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12770fcb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12770fd1 je 0x12771141 */
  if (C.zf) goto L_12771141;
  /* 12770fd7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12770fd9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12770fdc push eax */
  push32((uint32_t)(EAX));
  /* 12770fdd mov ecx, dword ptr [0x127908d8] */
  ECX = (r32((uint32_t)(0x127908d8)));
  /* 12770fe3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12770fe5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12770fe7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12770fed add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12770ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12770ff4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12770ff7 push edx */
  push32((uint32_t)(EDX));
  /* 12770ff8 call dword ptr [0x127908ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127908ec))), 0x12770ffeu);
  /* 12770ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12771000 jne 0x12771016 */
  if (!C.zf) goto L_12771016;
  /* 12771002 mov dword ptr [0x127908e4], 0 */
  w32((uint32_t)(0x127908e4), (0x0u));
  /* 1277100c mov eax, 1 */
  EAX = (0x1u);
  /* 12771011 jmp 0x1277114e */
  goto L_1277114e;
L_12771016:;
  /* 12771016 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12771019 push eax */
  push32((uint32_t)(EAX));
  /* 1277101a mov ecx, dword ptr [0x127908dc] */
  ECX = (r32((uint32_t)(0x127908dc)));
  /* 12771020 push ecx */
  push32((uint32_t)(ECX));
  /* 12771021 call 0x127733d0 */
  push32(0x12771026u); f_127733d0();
  /* 12771026 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277102b jne 0x127710e0 */
  if (!C.zf) goto L_127710e0;
  /* 12771031 mov edx, dword ptr [0x127908e4] */
  EDX = (r32((uint32_t)(0x127908e4)));
  /* 12771037 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1277103a mov dword ptr [0x127908e4], edx */
  w32((uint32_t)(0x127908e4), (EDX));
  /* 12771040 cmp dword ptr [0x127908d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771047 je 0x1277106a */
  if (C.zf) goto L_1277106a;
  /* 12771049 mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 1277104e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12771051 mov dword ptr [0x127908e4], eax */
  w32((uint32_t)(0x127908e4), (EAX));
  /* 12771056 cmp dword ptr [0x127908cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277105d jne 0x12771068 */
  if (!C.zf) goto L_12771068;
  /* 1277105f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12771062 mov dword ptr [0x127908cc], ecx */
  w32((uint32_t)(0x127908cc), (ECX));
L_12771068:;
  /* 12771068 jmp 0x127710de */
  goto L_127710de;
L_1277106a:;
  /* 1277106a cmp dword ptr [0x127908d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771071 je 0x127710bf */
  if (C.zf) goto L_127710bf;
  /* 12771073 mov edx, dword ptr [0x127908dc] */
  EDX = (r32((uint32_t)(0x127908dc)));
  /* 12771079 push edx */
  push32((uint32_t)(EDX));
  /* 1277107a call 0x12767b30 */
  push32(0x1277107fu); f_12767b30();
  /* 1277107f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771082 cmp eax, dword ptr [0x127908d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127908d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771088 jne 0x127710bf */
  if (!C.zf) goto L_127710bf;
  /* 1277108a push 1 */
  push32((uint32_t)(0x1u));
  /* 1277108c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1277108f push eax */
  push32((uint32_t)(EAX));
  /* 12771090 call 0x12771520 */
  push32(0x12771095u); f_12771520();
  /* 12771095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277109a je 0x127710bd */
  if (C.zf) goto L_127710bd;
  /* 1277109c mov ecx, dword ptr [0x127908e4] */
  ECX = (r32((uint32_t)(0x127908e4)));
  /* 127710a2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 127710a5 mov dword ptr [0x127908e4], ecx */
  w32((uint32_t)(0x127908e4), (ECX));
  /* 127710ab cmp dword ptr [0x127908cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127710b2 jne 0x127710bd */
  if (!C.zf) goto L_127710bd;
  /* 127710b4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127710b7 mov dword ptr [0x127908cc], edx */
  w32((uint32_t)(0x127908cc), (EDX));
L_127710bd:;
  /* 127710bd jmp 0x127710de */
  goto L_127710de;
L_127710bf:;
  /* 127710bf mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 127710c4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 127710c7 mov dword ptr [0x127908e4], eax */
  w32((uint32_t)(0x127908e4), (EAX));
  /* 127710cc cmp dword ptr [0x127908cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127710d3 jne 0x127710de */
  if (!C.zf) goto L_127710de;
  /* 127710d5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127710d8 mov dword ptr [0x127908cc], ecx */
  w32((uint32_t)(0x127908cc), (ECX));
L_127710de:;
  /* 127710de jmp 0x12771141 */
  goto L_12771141;
L_127710e0:;
  /* 127710e0 cmp dword ptr [0x127908d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127710e7 jne 0x12771141 */
  if (!C.zf) goto L_12771141;
  /* 127710e9 cmp dword ptr [0x127908d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127710f0 je 0x12771141 */
  if (C.zf) goto L_12771141;
  /* 127710f2 mov edx, dword ptr [0x127908d4] */
  EDX = (r32((uint32_t)(0x127908d4)));
  /* 127710f8 push edx */
  push32((uint32_t)(EDX));
  /* 127710f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127710fc push eax */
  push32((uint32_t)(EAX));
  /* 127710fd mov ecx, dword ptr [0x127908dc] */
  ECX = (r32((uint32_t)(0x127908dc)));
  /* 12771103 push ecx */
  push32((uint32_t)(ECX));
  /* 12771104 call 0x127734a0 */
  push32(0x12771109u); f_127734a0();
  /* 12771109 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277110c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277110e jne 0x12771141 */
  if (!C.zf) goto L_12771141;
  /* 12771110 push 0 */
  push32((uint32_t)(0x0u));
  /* 12771112 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12771115 push edx */
  push32((uint32_t)(EDX));
  /* 12771116 call 0x12771520 */
  push32(0x1277111bu); f_12771520();
  /* 1277111b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277111e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12771120 je 0x12771141 */
  if (C.zf) goto L_12771141;
  /* 12771122 mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 12771127 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1277112a mov dword ptr [0x127908e4], eax */
  w32((uint32_t)(0x127908e4), (EAX));
  /* 1277112f cmp dword ptr [0x127908cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771136 jne 0x12771141 */
  if (!C.zf) goto L_12771141;
  /* 12771138 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1277113b mov dword ptr [0x127908cc], ecx */
  w32((uint32_t)(0x127908cc), (ECX));
L_12771141:;
  /* 12771141 mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 12771146 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12771149 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1277114b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1277114d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1277114e:;
  /* 1277114e mov esp, ebp */
  ESP = (EBP);
  /* 12771150 pop ebp */
  EBP = (pop32());
  /* 12771151 ret 4 */
  ESPCHK(0x12770e30u, _esp0);
  ESP += 8; return;
}

/* FUN_10011160 @ 0x12771160 (116 bytes, 33 insns) */
void f_12771160(void) {
  FTRACE(0x12771160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771160 push ebp */
  push32((uint32_t)(EBP));
  /* 12771161 mov ebp, esp */
  EBP = (ESP);
  /* 12771163 push ecx */
  push32((uint32_t)(ECX));
  /* 12771164 mov eax, dword ptr [0x127908dc] */
  EAX = (r32((uint32_t)(0x127908dc)));
  /* 12771169 push eax */
  push32((uint32_t)(EAX));
  /* 1277116a call 0x12767b30 */
  push32(0x1277116fu); f_12767b30();
  /* 1277116f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771172 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12771174 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771177 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1277117a mov dword ptr [0x127908d8], ecx */
  w32((uint32_t)(0x127908d8), (ECX));
  /* 12771180 cmp dword ptr [0x127908d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771187 je 0x12771192 */
  if (C.zf) goto L_12771192;
  /* 12771189 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12771190 jmp 0x127711a4 */
  goto L_127711a4;
L_12771192:;
  /* 12771192 mov edx, dword ptr [0x127908dc] */
  EDX = (r32((uint32_t)(0x127908dc)));
  /* 12771198 push edx */
  push32((uint32_t)(EDX));
  /* 12771199 call 0x12771810 */
  push32(0x1277119eu); f_12771810();
  /* 1277119e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127711a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127711a4:;
  /* 127711a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127711a7 mov dword ptr [0x127908d4], eax */
  w32((uint32_t)(0x127908d4), (EAX));
  /* 127711ac push 1 */
  push32((uint32_t)(0x1u));
  /* 127711ae push 0x127711e0 */
  push32((uint32_t)(0x127711e0u));
  /* 127711b3 call dword ptr [0x127932c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932c4))), 0x127711b9u);
  /* 127711b9 mov ecx, dword ptr [0x127908e4] */
  ECX = (r32((uint32_t)(0x127908e4)));
  /* 127711bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127711c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127711c4 jne 0x127711d0 */
  if (!C.zf) goto L_127711d0;
  /* 127711c6 mov dword ptr [0x127908e4], 0 */
  w32((uint32_t)(0x127908e4), (0x0u));
L_127711d0:;
  /* 127711d0 mov esp, ebp */
  ESP = (EBP);
  /* 127711d2 pop ebp */
  EBP = (pop32());
  /* 127711d3 ret  */
  ESPCHK(0x12771160u, _esp0);
  ESP += 4; return;
}

/* FUN_100111e0 @ 0x127711e0 (287 bytes, 86 insns) */
void f_127711e0(void) {
  FTRACE(0x127711e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127711e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127711e1 mov ebp, esp */
  EBP = (ESP);
  /* 127711e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127711e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127711e9 push eax */
  push32((uint32_t)(EAX));
  /* 127711ea call 0x12771790 */
  push32(0x127711efu); f_12771790();
  /* 127711ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127711f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 127711f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127711f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127711fa push ecx */
  push32((uint32_t)(ECX));
  /* 127711fb mov edx, dword ptr [0x127908d8] */
  EDX = (r32((uint32_t)(0x127908d8)));
  /* 12771201 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12771203 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771205 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1277120b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771211 push edx */
  push32((uint32_t)(EDX));
  /* 12771212 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12771215 push eax */
  push32((uint32_t)(EAX));
  /* 12771216 call dword ptr [0x127908ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127908ec))), 0x1277121cu);
  /* 1277121c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277121e jne 0x12771234 */
  if (!C.zf) goto L_12771234;
  /* 12771220 mov dword ptr [0x127908e4], 0 */
  w32((uint32_t)(0x127908e4), (0x0u));
  /* 1277122a mov eax, 1 */
  EAX = (0x1u);
  /* 1277122f jmp 0x127712f9 */
  goto L_127712f9;
L_12771234:;
  /* 12771234 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12771237 push ecx */
  push32((uint32_t)(ECX));
  /* 12771238 mov edx, dword ptr [0x127908dc] */
  EDX = (r32((uint32_t)(0x127908dc)));
  /* 1277123e push edx */
  push32((uint32_t)(EDX));
  /* 1277123f call 0x127733d0 */
  push32(0x12771244u); f_127733d0();
  /* 12771244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771247 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12771249 jne 0x12771289 */
  if (!C.zf) goto L_12771289;
  /* 1277124b cmp dword ptr [0x127908d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771252 jne 0x12771266 */
  if (!C.zf) goto L_12771266;
  /* 12771254 push 1 */
  push32((uint32_t)(0x1u));
  /* 12771256 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12771259 push eax */
  push32((uint32_t)(EAX));
  /* 1277125a call 0x12771520 */
  push32(0x1277125fu); f_12771520();
  /* 1277125f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12771264 je 0x12771287 */
  if (C.zf) goto L_12771287;
L_12771266:;
  /* 12771266 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12771269 mov dword ptr [0x127908e8], ecx */
  w32((uint32_t)(0x127908e8), (ECX));
  /* 1277126f mov edx, dword ptr [0x127908e8] */
  EDX = (r32((uint32_t)(0x127908e8)));
  /* 12771275 mov dword ptr [0x127908cc], edx */
  w32((uint32_t)(0x127908cc), (EDX));
  /* 1277127b mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 12771280 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12771282 mov dword ptr [0x127908e4], eax */
  w32((uint32_t)(0x127908e4), (EAX));
L_12771287:;
  /* 12771287 jmp 0x127712ec */
  goto L_127712ec;
L_12771289:;
  /* 12771289 cmp dword ptr [0x127908d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771290 jne 0x127712ec */
  if (!C.zf) goto L_127712ec;
  /* 12771292 cmp dword ptr [0x127908d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771299 je 0x127712ec */
  if (C.zf) goto L_127712ec;
  /* 1277129b mov ecx, dword ptr [0x127908d4] */
  ECX = (r32((uint32_t)(0x127908d4)));
  /* 127712a1 push ecx */
  push32((uint32_t)(ECX));
  /* 127712a2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 127712a5 push edx */
  push32((uint32_t)(EDX));
  /* 127712a6 mov eax, dword ptr [0x127908dc] */
  EAX = (r32((uint32_t)(0x127908dc)));
  /* 127712ab push eax */
  push32((uint32_t)(EAX));
  /* 127712ac call 0x127734a0 */
  push32(0x127712b1u); f_127734a0();
  /* 127712b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127712b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127712b6 jne 0x127712ec */
  if (!C.zf) goto L_127712ec;
  /* 127712b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127712ba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127712bd push ecx */
  push32((uint32_t)(ECX));
  /* 127712be call 0x12771520 */
  push32(0x127712c3u); f_12771520();
  /* 127712c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127712c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127712c8 je 0x127712ec */
  if (C.zf) goto L_127712ec;
  /* 127712ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127712cd mov dword ptr [0x127908e8], edx */
  w32((uint32_t)(0x127908e8), (EDX));
  /* 127712d3 mov eax, dword ptr [0x127908e8] */
  EAX = (r32((uint32_t)(0x127908e8)));
  /* 127712d8 mov dword ptr [0x127908cc], eax */
  w32((uint32_t)(0x127908cc), (EAX));
  /* 127712dd mov ecx, dword ptr [0x127908e4] */
  ECX = (r32((uint32_t)(0x127908e4)));
  /* 127712e3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127712e6 mov dword ptr [0x127908e4], ecx */
  w32((uint32_t)(0x127908e4), (ECX));
L_127712ec:;
  /* 127712ec mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 127712f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127712f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127712f6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127712f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_127712f9:;
  /* 127712f9 mov esp, ebp */
  ESP = (EBP);
  /* 127712fb pop ebp */
  EBP = (pop32());
  /* 127712fc ret 4 */
  ESPCHK(0x127711e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011300 @ 0x12771300 (69 bytes, 20 insns) */
void f_12771300(void) {
  FTRACE(0x12771300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771300 push ebp */
  push32((uint32_t)(EBP));
  /* 12771301 mov ebp, esp */
  EBP = (ESP);
  /* 12771303 mov eax, dword ptr [0x127908e0] */
  EAX = (r32((uint32_t)(0x127908e0)));
  /* 12771308 push eax */
  push32((uint32_t)(EAX));
  /* 12771309 call 0x12767b30 */
  push32(0x1277130eu); f_12767b30();
  /* 1277130e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771311 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12771313 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771316 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12771319 mov dword ptr [0x127908d0], ecx */
  w32((uint32_t)(0x127908d0), (ECX));
  /* 1277131f push 1 */
  push32((uint32_t)(0x1u));
  /* 12771321 push 0x12771350 */
  push32((uint32_t)(0x12771350u));
  /* 12771326 call dword ptr [0x127932c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932c4))), 0x1277132cu);
  /* 1277132c mov edx, dword ptr [0x127908e4] */
  EDX = (r32((uint32_t)(0x127908e4)));
  /* 12771332 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12771335 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12771337 jne 0x12771343 */
  if (!C.zf) goto L_12771343;
  /* 12771339 mov dword ptr [0x127908e4], 0 */
  w32((uint32_t)(0x127908e4), (0x0u));
L_12771343:;
  /* 12771343 pop ebp */
  EBP = (pop32());
  /* 12771344 ret  */
  ESPCHK(0x12771300u, _esp0);
  ESP += 4; return;
}

/* FUN_10011350 @ 0x12771350 (172 bytes, 54 insns) */
void f_12771350(void) {
  FTRACE(0x12771350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771350 push ebp */
  push32((uint32_t)(EBP));
  /* 12771351 mov ebp, esp */
  EBP = (ESP);
  /* 12771353 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771359 push eax */
  push32((uint32_t)(EAX));
  /* 1277135a call 0x12771790 */
  push32(0x1277135fu); f_12771790();
  /* 1277135f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771362 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12771365 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12771367 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1277136a push ecx */
  push32((uint32_t)(ECX));
  /* 1277136b mov edx, dword ptr [0x127908d0] */
  EDX = (r32((uint32_t)(0x127908d0)));
  /* 12771371 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12771373 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771375 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1277137b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771381 push edx */
  push32((uint32_t)(EDX));
  /* 12771382 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12771385 push eax */
  push32((uint32_t)(EAX));
  /* 12771386 call dword ptr [0x127908ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127908ec))), 0x1277138cu);
  /* 1277138c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277138e jne 0x127713a1 */
  if (!C.zf) goto L_127713a1;
  /* 12771390 mov dword ptr [0x127908e4], 0 */
  w32((uint32_t)(0x127908e4), (0x0u));
  /* 1277139a mov eax, 1 */
  EAX = (0x1u);
  /* 1277139f jmp 0x127713f6 */
  goto L_127713f6;
L_127713a1:;
  /* 127713a1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127713a4 push ecx */
  push32((uint32_t)(ECX));
  /* 127713a5 mov edx, dword ptr [0x127908e0] */
  EDX = (r32((uint32_t)(0x127908e0)));
  /* 127713ab push edx */
  push32((uint32_t)(EDX));
  /* 127713ac call 0x127733d0 */
  push32(0x127713b1u); f_127733d0();
  /* 127713b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127713b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127713b6 jne 0x127713e9 */
  if (!C.zf) goto L_127713e9;
  /* 127713b8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127713bb push eax */
  push32((uint32_t)(EAX));
  /* 127713bc call 0x127714d0 */
  push32(0x127713c1u); f_127714d0();
  /* 127713c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127713c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127713c6 je 0x127713e9 */
  if (C.zf) goto L_127713e9;
  /* 127713c8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127713cb mov dword ptr [0x127908e8], ecx */
  w32((uint32_t)(0x127908e8), (ECX));
  /* 127713d1 mov edx, dword ptr [0x127908e8] */
  EDX = (r32((uint32_t)(0x127908e8)));
  /* 127713d7 mov dword ptr [0x127908cc], edx */
  w32((uint32_t)(0x127908cc), (EDX));
  /* 127713dd mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 127713e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 127713e4 mov dword ptr [0x127908e4], eax */
  w32((uint32_t)(0x127908e4), (EAX));
L_127713e9:;
  /* 127713e9 mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 127713ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127713f1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127713f3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127713f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_127713f6:;
  /* 127713f6 mov esp, ebp */
  ESP = (EBP);
  /* 127713f8 pop ebp */
  EBP = (pop32());
  /* 127713f9 ret 4 */
  ESPCHK(0x12771350u, _esp0);
  ESP += 8; return;
}

/* FUN_10011400 @ 0x12771400 (43 bytes, 11 insns) */
void f_12771400(void) {
  FTRACE(0x12771400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771400 push ebp */
  push32((uint32_t)(EBP));
  /* 12771401 mov ebp, esp */
  EBP = (ESP);
  /* 12771403 mov eax, dword ptr [0x127908e4] */
  EAX = (r32((uint32_t)(0x127908e4)));
  /* 12771408 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1277140d mov dword ptr [0x127908e4], eax */
  w32((uint32_t)(0x127908e4), (EAX));
  /* 12771412 call dword ptr [0x127932c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932c0))), 0x12771418u);
  /* 12771418 mov dword ptr [0x127908e8], eax */
  w32((uint32_t)(0x127908e8), (EAX));
  /* 1277141d mov ecx, dword ptr [0x127908e8] */
  ECX = (r32((uint32_t)(0x127908e8)));
  /* 12771423 mov dword ptr [0x127908cc], ecx */
  w32((uint32_t)(0x127908cc), (ECX));
  /* 12771429 pop ebp */
  EBP = (pop32());
  /* 1277142a ret  */
  ESPCHK(0x12771400u, _esp0);
  ESP += 4; return;
}

/* FUN_10011430 @ 0x12771430 (155 bytes, 57 insns) */
void f_12771430(void) {
  FTRACE(0x12771430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771430 push ebp */
  push32((uint32_t)(EBP));
  /* 12771431 mov ebp, esp */
  EBP = (ESP);
  /* 12771433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771436 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277143a je 0x1277145b */
  if (C.zf) goto L_1277145b;
  /* 1277143c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277143f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12771442 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12771444 je 0x1277145b */
  if (C.zf) goto L_1277145b;
  /* 12771446 push 0x1278c9cc */
  push32((uint32_t)(0x1278c9ccu));
  /* 1277144b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277144e push edx */
  push32((uint32_t)(EDX));
  /* 1277144f call 0x12770990 */
  push32(0x12771454u); f_12770990();
  /* 12771454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771457 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12771459 jne 0x12771483 */
  if (!C.zf) goto L_12771483;
L_1277145b:;
  /* 1277145b push 8 */
  push32((uint32_t)(0x8u));
  /* 1277145d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12771460 push eax */
  push32((uint32_t)(EAX));
  /* 12771461 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12771466 mov ecx, dword ptr [0x127908e8] */
  ECX = (r32((uint32_t)(0x127908e8)));
  /* 1277146c push ecx */
  push32((uint32_t)(ECX));
  /* 1277146d call dword ptr [0x127908ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127908ec))), 0x12771473u);
  /* 12771473 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12771475 jne 0x1277147b */
  if (!C.zf) goto L_1277147b;
  /* 12771477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12771479 jmp 0x127714c7 */
  goto L_127714c7;
L_1277147b:;
  /* 1277147b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1277147e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12771481 jmp 0x127714bb */
  goto L_127714bb;
L_12771483:;
  /* 12771483 push 0x1278c9c8 */
  push32((uint32_t)(0x1278c9c8u));
  /* 12771488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277148b push eax */
  push32((uint32_t)(EAX));
  /* 1277148c call 0x12770990 */
  push32(0x12771491u); f_12770990();
  /* 12771491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12771496 jne 0x127714bb */
  if (!C.zf) goto L_127714bb;
  /* 12771498 push 8 */
  push32((uint32_t)(0x8u));
  /* 1277149a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1277149d push ecx */
  push32((uint32_t)(ECX));
  /* 1277149e push 0xb */
  push32((uint32_t)(0xbu));
  /* 127714a0 mov edx, dword ptr [0x127908e8] */
  EDX = (r32((uint32_t)(0x127908e8)));
  /* 127714a6 push edx */
  push32((uint32_t)(EDX));
  /* 127714a7 call dword ptr [0x127908ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127908ec))), 0x127714adu);
  /* 127714ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127714af jne 0x127714b5 */
  if (!C.zf) goto L_127714b5;
  /* 127714b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127714b3 jmp 0x127714c7 */
  goto L_127714c7;
L_127714b5:;
  /* 127714b5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 127714b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127714bb:;
  /* 127714bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127714be push ecx */
  push32((uint32_t)(ECX));
  /* 127714bf call 0x127735b0 */
  push32(0x127714c4u); f_127735b0();
  /* 127714c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127714c7:;
  /* 127714c7 mov esp, ebp */
  ESP = (EBP);
  /* 127714c9 pop ebp */
  EBP = (pop32());
  /* 127714ca ret  */
  ESPCHK(0x12771430u, _esp0);
  ESP += 4; return;
}

/* FUN_100114d0 @ 0x127714d0 (79 bytes, 26 insns) */
void f_127714d0(void) {
  FTRACE(0x127714d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127714d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127714d1 mov ebp, esp */
  EBP = (ESP);
  /* 127714d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127714d6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 127714da mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 127714de mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127714e5 jmp 0x127714f0 */
  goto L_127714f0;
L_127714e7:;
  /* 127714e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127714ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127714ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127714f0:;
  /* 127714f0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127714f4 jae 0x12771516 */
  if (!C.cf) goto L_12771516;
  /* 127714f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127714f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127714ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12771502 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12771504 mov cx, word ptr [eax*2 + 0x1278f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1278f9c4)));
  /* 1277150c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277150e jne 0x12771514 */
  if (!C.zf) goto L_12771514;
  /* 12771510 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12771512 jmp 0x1277151b */
  goto L_1277151b;
L_12771514:;
  /* 12771514 jmp 0x127714e7 */
  goto L_127714e7;
L_12771516:;
  /* 12771516 mov eax, 1 */
  EAX = (0x1u);
L_1277151b:;
  /* 1277151b mov esp, ebp */
  ESP = (EBP);
  /* 1277151d pop ebp */
  EBP = (pop32());
  /* 1277151e ret  */
  ESPCHK(0x127714d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011520 @ 0x12771520 (135 bytes, 48 insns) */
void f_12771520(void) {
  FTRACE(0x12771520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771520 push ebp */
  push32((uint32_t)(EBP));
  /* 12771521 mov ebp, esp */
  EBP = (ESP);
  /* 12771523 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771526 push esi */
  push32((uint32_t)(ESI));
  /* 12771527 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277152a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1277152f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12771534 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12771539 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1277153c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12771541 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12771544 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12771546 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12771549 push ecx */
  push32((uint32_t)(ECX));
  /* 1277154a push 1 */
  push32((uint32_t)(0x1u));
  /* 1277154c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277154f push edx */
  push32((uint32_t)(EDX));
  /* 12771550 call dword ptr [0x127908ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127908ec))), 0x12771556u);
  /* 12771556 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12771558 jne 0x1277155e */
  if (!C.zf) goto L_1277155e;
  /* 1277155a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277155c jmp 0x127715a2 */
  goto L_127715a2;
L_1277155e:;
  /* 1277155e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12771561 push eax */
  push32((uint32_t)(EAX));
  /* 12771562 call 0x12771790 */
  push32(0x12771567u); f_12771790();
  /* 12771567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277156a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277156d je 0x1277159d */
  if (C.zf) goto L_1277159d;
  /* 1277156f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771573 je 0x1277159d */
  if (C.zf) goto L_1277159d;
  /* 12771575 mov ecx, dword ptr [0x127908dc] */
  ECX = (r32((uint32_t)(0x127908dc)));
  /* 1277157b push ecx */
  push32((uint32_t)(ECX));
  /* 1277157c call 0x12771810 */
  push32(0x12771581u); f_12771810();
  /* 12771581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771584 mov esi, eax */
  ESI = (EAX);
  /* 12771586 mov edx, dword ptr [0x127908dc] */
  EDX = (r32((uint32_t)(0x127908dc)));
  /* 1277158c push edx */
  push32((uint32_t)(EDX));
  /* 1277158d call 0x12767b30 */
  push32(0x12771592u); f_12767b30();
  /* 12771592 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771595 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771597 jne 0x1277159d */
  if (!C.zf) goto L_1277159d;
  /* 12771599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277159b jmp 0x127715a2 */
  goto L_127715a2;
L_1277159d:;
  /* 1277159d mov eax, 1 */
  EAX = (0x1u);
L_127715a2:;
  /* 127715a2 pop esi */
  ESI = (pop32());
  /* 127715a3 mov esp, ebp */
  ESP = (EBP);
  /* 127715a5 pop ebp */
  EBP = (pop32());
  /* 127715a6 ret  */
  ESPCHK(0x12771520u, _esp0);
  ESP += 4; return;
}

/* FUN_100115b0 @ 0x127715b0 (77 bytes, 18 insns) */
void f_127715b0(void) {
  FTRACE(0x127715b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127715b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127715b1 mov ebp, esp */
  EBP = (ESP);
  /* 127715b3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127715b9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 127715c3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 127715c9 push eax */
  push32((uint32_t)(EAX));
  /* 127715ca call dword ptr [0x127932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932bc))), 0x127715d0u);
  /* 127715d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127715d2 je 0x127715e9 */
  if (C.zf) goto L_127715e9;
  /* 127715d4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127715db jne 0x127715e9 */
  if (!C.zf) goto L_127715e9;
  /* 127715dd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 127715e7 jmp 0x127715f3 */
  goto L_127715f3;
L_127715e9:;
  /* 127715e9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_127715f3:;
  /* 127715f3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 127715f9 mov esp, ebp */
  ESP = (EBP);
  /* 127715fb pop ebp */
  EBP = (pop32());
  /* 127715fc ret  */
  ESPCHK(0x127715b0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12771600 (388 bytes, 118 insns) */
void f_12771600(void) {
  FTRACE(0x12771600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771600 push ebp */
  push32((uint32_t)(EBP));
  /* 12771601 mov ebp, esp */
  EBP = (ESP);
  /* 12771603 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771606 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1277160d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12771614 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1277161b:;
  /* 1277161b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1277161e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771621 jg 0x12771768 */
  if ((!C.zf&&C.sf==C.of)) goto L_12771768;
  /* 12771627 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1277162a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277162d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1277162e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771630 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12771632 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12771635 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771638 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1277163b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277163e cmp edx, dword ptr [ecx + 0x1278f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1278f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771644 jne 0x1277173e */
  if (!C.zf) goto L_1277173e;
  /* 1277164a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277164d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12771650 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771654 ja 0x12771677 */
  if ((!C.cf&&!C.zf)) goto L_12771677;
  /* 12771656 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277165a je 0x127716e9 */
  if (C.zf) goto L_127716e9;
  /* 12771660 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771664 je 0x12771694 */
  if (C.zf) goto L_12771694;
  /* 12771666 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277166a je 0x127716b6 */
  if (C.zf) goto L_127716b6;
  /* 1277166c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771670 je 0x127716d8 */
  if (C.zf) goto L_127716d8;
  /* 12771672 jmp 0x12771708 */
  goto L_12771708;
L_12771677:;
  /* 12771677 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277167e je 0x127716a5 */
  if (C.zf) goto L_127716a5;
  /* 12771680 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771687 je 0x127716c7 */
  if (C.zf) goto L_127716c7;
  /* 12771689 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771690 je 0x127716fa */
  if (C.zf) goto L_127716fa;
  /* 12771692 jmp 0x12771708 */
  goto L_12771708;
L_12771694:;
  /* 12771694 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771697 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1277169a add ecx, 0x1278f524 */
  { uint32_t _a=(ECX),_b=(0x1278f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127716a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127716a3 jmp 0x12771708 */
  goto L_12771708;
L_127716a5:;
  /* 127716a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127716a8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127716ab mov eax, dword ptr [edx + 0x1278f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1278f52c)));
  /* 127716b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127716b4 jmp 0x12771708 */
  goto L_12771708;
L_127716b6:;
  /* 127716b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127716b9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127716bc add ecx, 0x1278f530 */
  { uint32_t _a=(ECX),_b=(0x1278f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127716c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127716c5 jmp 0x12771708 */
  goto L_12771708;
L_127716c7:;
  /* 127716c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127716ca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127716cd mov eax, dword ptr [edx + 0x1278f534] */
  EAX = (r32((uint32_t)(EDX + 0x1278f534)));
  /* 127716d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127716d6 jmp 0x12771708 */
  goto L_12771708;
L_127716d8:;
  /* 127716d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127716db imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127716de add ecx, 0x1278f538 */
  { uint32_t _a=(ECX),_b=(0x1278f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127716e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127716e7 jmp 0x12771708 */
  goto L_12771708;
L_127716e9:;
  /* 127716e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127716ec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127716ef add edx, 0x1278f53c */
  { uint32_t _a=(EDX),_b=(0x1278f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127716f5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127716f8 jmp 0x12771708 */
  goto L_12771708;
L_127716fa:;
  /* 127716fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127716fd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12771700 add eax, 0x1278f544 */
  { uint32_t _a=(EAX),_b=(0x1278f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771705 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12771708:;
  /* 12771708 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277170c je 0x12771714 */
  if (C.zf) goto L_12771714;
  /* 1277170e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771712 jge 0x12771716 */
  if ((C.sf==C.of)) goto L_12771716;
L_12771714:;
  /* 12771714 jmp 0x12771768 */
  goto L_12771768;
L_12771716:;
  /* 12771716 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12771719 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1277171c push ecx */
  push32((uint32_t)(ECX));
  /* 1277171d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12771720 push edx */
  push32((uint32_t)(EDX));
  /* 12771721 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12771724 push eax */
  push32((uint32_t)(EAX));
  /* 12771725 call 0x12768520 */
  push32(0x1277172au); f_12768520();
  /* 1277172a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277172d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12771730 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771733 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12771737 mov eax, 1 */
  EAX = (0x1u);
  /* 1277173c jmp 0x1277177e */
  goto L_1277177e;
L_1277173e:;
  /* 1277173e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771741 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12771744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771747 cmp eax, dword ptr [edx + 0x1278f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1278f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277174d jae 0x1277175a */
  if (!C.cf) goto L_1277175a;
  /* 1277174f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771752 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771755 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12771758 jmp 0x12771763 */
  goto L_12771763;
L_1277175a:;
  /* 1277175a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1277175d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771760 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12771763:;
  /* 12771763 jmp 0x1277161b */
  goto L_1277161b;
L_12771768:;
  /* 12771768 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277176b push eax */
  push32((uint32_t)(EAX));
  /* 1277176c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277176f push ecx */
  push32((uint32_t)(ECX));
  /* 12771770 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12771773 push edx */
  push32((uint32_t)(EDX));
  /* 12771774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771777 push eax */
  push32((uint32_t)(EAX));
  /* 12771778 call dword ptr [0x127932c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932c8))), 0x1277177eu);
L_1277177e:;
  /* 1277177e mov esp, ebp */
  ESP = (EBP);
  /* 12771780 pop ebp */
  EBP = (pop32());
  /* 12771781 ret 0x10 */
  ESPCHK(0x12771600u, _esp0);
  ESP += 20; return;
}

/* FUN_10011790 @ 0x12771790 (118 bytes, 42 insns) */
void f_12771790(void) {
  FTRACE(0x12771790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771790 push ebp */
  push32((uint32_t)(EBP));
  /* 12771791 mov ebp, esp */
  EBP = (ESP);
  /* 12771793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771796 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1277179d:;
  /* 1277179d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127717a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127717a2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 127717a5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127717a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127717ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127717af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127717b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127717b4 je 0x127717ff */
  if (C.zf) goto L_127717ff;
  /* 127717b6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127717ba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127717bd jl 0x127717d2 */
  if ((C.sf!=C.of)) goto L_127717d2;
  /* 127717bf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127717c3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127717c6 jg 0x127717d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_127717d2;
  /* 127717c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 127717cb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127717cd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 127717d0 jmp 0x127717ec */
  goto L_127717ec;
L_127717d2:;
  /* 127717d2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127717d6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127717d9 jl 0x127717ec */
  if ((C.sf!=C.of)) goto L_127717ec;
  /* 127717db movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127717df cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127717e2 jg 0x127717ec */
  if ((!C.zf&&C.sf==C.of)) goto L_127717ec;
  /* 127717e4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 127717e7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127717e9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_127717ec:;
  /* 127717ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127717ef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 127717f2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127717f6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 127717fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127717fd jmp 0x1277179d */
  goto L_1277179d;
L_127717ff:;
  /* 127717ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12771802 mov esp, ebp */
  ESP = (EBP);
  /* 12771804 pop ebp */
  EBP = (pop32());
  /* 12771805 ret  */
  ESPCHK(0x12771790u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12771810 (101 bytes, 36 insns) */
void f_12771810(void) {
  FTRACE(0x12771810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771810 push ebp */
  push32((uint32_t)(EBP));
  /* 12771811 mov ebp, esp */
  EBP = (ESP);
  /* 12771813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771816 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1277181d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771820 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12771822 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12771825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771828 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277182b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1277182e:;
  /* 1277182e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12771832 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771835 jl 0x12771840 */
  if ((C.sf!=C.of)) goto L_12771840;
  /* 12771837 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1277183b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277183e jle 0x12771852 */
  if ((C.zf||C.sf!=C.of)) goto L_12771852;
L_12771840:;
  /* 12771840 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12771844 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771847 jl 0x1277186e */
  if ((C.sf!=C.of)) goto L_1277186e;
  /* 12771849 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1277184d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771850 jg 0x1277186e */
  if ((!C.zf&&C.sf==C.of)) goto L_1277186e;
L_12771852:;
  /* 12771852 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12771855 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771858 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1277185b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277185e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12771860 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12771863 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771866 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771869 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1277186c jmp 0x1277182e */
  goto L_1277182e;
L_1277186e:;
  /* 1277186e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12771871 mov esp, ebp */
  ESP = (EBP);
  /* 12771873 pop ebp */
  EBP = (pop32());
  /* 12771874 ret  */
  ESPCHK(0x12771810u, _esp0);
  ESP += 4; return;
}

/* FUN_10011880 @ 0x12771880 (122 bytes, 39 insns) */
void f_12771880(void) {
  FTRACE(0x12771880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771880 push ebp */
  push32((uint32_t)(EBP));
  /* 12771881 mov ebp, esp */
  EBP = (ESP);
  /* 12771883 push ecx */
  push32((uint32_t)(ECX));
  /* 12771884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771887 cmp eax, dword ptr [0x1279217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277188d jae 0x127718b1 */
  if (!C.cf) goto L_127718b1;
  /* 1277188f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771892 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12771895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771898 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1277189b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1277189e mov eax, dword ptr [ecx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 127718a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127718aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127718ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127718af jne 0x127718cc */
  if (!C.zf) goto L_127718cc;
L_127718b1:;
  /* 127718b1 call 0x1276cbd0 */
  push32(0x127718b6u); f_1276cbd0();
  /* 127718b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127718bc call 0x1276cbe0 */
  push32(0x127718c1u); f_1276cbe0();
  /* 127718c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127718c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127718ca jmp 0x127718f6 */
  goto L_127718f6;
L_127718cc:;
  /* 127718cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127718cf push edx */
  push32((uint32_t)(EDX));
  /* 127718d0 call 0x1276e3f0 */
  push32(0x127718d5u); f_1276e3f0();
  /* 127718d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127718d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127718db push eax */
  push32((uint32_t)(EAX));
  /* 127718dc call 0x12771900 */
  push32(0x127718e1u); f_12771900();
  /* 127718e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127718e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127718e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127718ea push ecx */
  push32((uint32_t)(ECX));
  /* 127718eb call 0x1276e480 */
  push32(0x127718f0u); f_1276e480();
  /* 127718f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127718f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127718f6:;
  /* 127718f6 mov esp, ebp */
  ESP = (EBP);
  /* 127718f8 pop ebp */
  EBP = (pop32());
  /* 127718f9 ret  */
  ESPCHK(0x12771880u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12771900 (170 bytes, 59 insns) */
void f_12771900(void) {
  FTRACE(0x12771900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771900 push ebp */
  push32((uint32_t)(EBP));
  /* 12771901 mov ebp, esp */
  EBP = (ESP);
  /* 12771903 push ecx */
  push32((uint32_t)(ECX));
  /* 12771904 push esi */
  push32((uint32_t)(ESI));
  /* 12771905 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771908 push eax */
  push32((uint32_t)(EAX));
  /* 12771909 call 0x1276e270 */
  push32(0x1277190eu); f_1276e270();
  /* 1277190e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771911 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771914 je 0x12771953 */
  if (C.zf) goto L_12771953;
  /* 12771916 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277191a je 0x12771922 */
  if (C.zf) goto L_12771922;
  /* 1277191c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771920 jne 0x1277193c */
  if (!C.zf) goto L_1277193c;
L_12771922:;
  /* 12771922 push 1 */
  push32((uint32_t)(0x1u));
  /* 12771924 call 0x1276e270 */
  push32(0x12771929u); f_1276e270();
  /* 12771929 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277192c mov esi, eax */
  ESI = (EAX);
  /* 1277192e push 2 */
  push32((uint32_t)(0x2u));
  /* 12771930 call 0x1276e270 */
  push32(0x12771935u); f_1276e270();
  /* 12771935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771938 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277193a je 0x12771953 */
  if (C.zf) goto L_12771953;
L_1277193c:;
  /* 1277193c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277193f push ecx */
  push32((uint32_t)(ECX));
  /* 12771940 call 0x1276e270 */
  push32(0x12771945u); f_1276e270();
  /* 12771945 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771948 push eax */
  push32((uint32_t)(EAX));
  /* 12771949 call dword ptr [0x127932b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932b8))), 0x1277194fu);
  /* 1277194f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12771951 je 0x1277195c */
  if (C.zf) goto L_1277195c;
L_12771953:;
  /* 12771953 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1277195a jmp 0x12771965 */
  goto L_12771965;
L_1277195c:;
  /* 1277195c call dword ptr [0x12793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793388))), 0x12771962u);
  /* 12771962 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12771965:;
  /* 12771965 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771968 push edx */
  push32((uint32_t)(EDX));
  /* 12771969 call 0x1276e190 */
  push32(0x1277196eu); f_1276e190();
  /* 1277196e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771971 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771974 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12771977 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277197a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1277197d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12771980 mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 12771987 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1277198c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771990 je 0x127719a3 */
  if (C.zf) goto L_127719a3;
  /* 12771992 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12771995 push eax */
  push32((uint32_t)(EAX));
  /* 12771996 call 0x1276cb30 */
  push32(0x1277199bu); f_1276cb30();
  /* 1277199b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277199e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127719a1 jmp 0x127719a5 */
  goto L_127719a5;
L_127719a3:;
  /* 127719a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127719a5:;
  /* 127719a5 pop esi */
  ESI = (pop32());
  /* 127719a6 mov esp, ebp */
  ESP = (EBP);
  /* 127719a8 pop ebp */
  EBP = (pop32());
  /* 127719a9 ret  */
  ESPCHK(0x12771900u, _esp0);
  ESP += 4; return;
}

/* FUN_100119b0 @ 0x127719b0 (146 bytes, 52 insns) */
void f_127719b0(void) {
  FTRACE(0x127719b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127719b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127719b1 mov ebp, esp */
  EBP = (ESP);
  /* 127719b3 push ebx */
  push32((uint32_t)(EBX));
  /* 127719b4 push esi */
  push32((uint32_t)(ESI));
  /* 127719b5 push edi */
  push32((uint32_t)(EDI));
L_127719b6:;
  /* 127719b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127719ba jne 0x127719da */
  if (!C.zf) goto L_127719da;
  /* 127719bc push 0x1278c308 */
  push32((uint32_t)(0x1278c308u));
  /* 127719c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127719c3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 127719c5 push 0x1278c9d0 */
  push32((uint32_t)(0x1278c9d0u));
  /* 127719ca push 2 */
  push32((uint32_t)(0x2u));
  /* 127719cc call 0x12763dc0 */
  push32(0x127719d1u); f_12763dc0();
  /* 127719d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127719d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127719d7 jne 0x127719da */
  if (!C.zf) goto L_127719da;
  /* 127719d9 int3  */
  x86_unimpl("int3 @ 0x127719d9");
L_127719da:;
  /* 127719da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127719dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127719de jne 0x127719b6 */
  if (!C.zf) goto L_127719b6;
  /* 127719e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127719e3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127719e6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 127719ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127719ee je 0x12771a3d */
  if (C.zf) goto L_12771a3d;
  /* 127719f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127719f3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127719f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 127719f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127719fb je 0x12771a3d */
  if (C.zf) goto L_12771a3d;
  /* 127719fd push 2 */
  push32((uint32_t)(0x2u));
  /* 127719ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771a02 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12771a05 push eax */
  push32((uint32_t)(EAX));
  /* 12771a06 call 0x12765790 */
  push32(0x12771a0bu); f_12765790();
  /* 12771a0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771a11 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12771a14 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12771a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771a1d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12771a20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771a23 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12771a29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771a2c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12771a33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12771a36 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12771a3d:;
  /* 12771a3d pop edi */
  EDI = (pop32());
  /* 12771a3e pop esi */
  ESI = (pop32());
  /* 12771a3f pop ebx */
  EBX = (pop32());
  /* 12771a40 pop ebp */
  EBP = (pop32());
  /* 12771a41 ret  */
  ESPCHK(0x127719b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a50 @ 0x12771a50 (289 bytes, 97 insns) */
void f_12771a50(void) {
  FTRACE(0x12771a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12771a51 mov ebp, esp */
  EBP = (ESP);
  /* 12771a53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771a56 push esi */
  push32((uint32_t)(ESI));
  /* 12771a57 mov eax, dword ptr [0x1278fc98] */
  EAX = (r32((uint32_t)(0x1278fc98)));
  /* 12771a5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12771a5f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12771a66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12771a6d jmp 0x12771a78 */
  goto L_12771a78;
L_12771a6f:;
  /* 12771a6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771a72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771a75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12771a78:;
  /* 12771a78 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771a7c jae 0x12771ab1 */
  if (!C.cf) goto L_12771ab1;
  /* 12771a7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771a81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771a84 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12771a87 push ecx */
  push32((uint32_t)(ECX));
  /* 12771a88 call 0x12767b30 */
  push32(0x12771a8du); f_12767b30();
  /* 12771a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771a90 mov esi, eax */
  ESI = (EAX);
  /* 12771a92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771a95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771a98 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12771a9c push ecx */
  push32((uint32_t)(ECX));
  /* 12771a9d call 0x12767b30 */
  push32(0x12771aa2u); f_12767b30();
  /* 12771aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771aa5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771aa8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12771aac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12771aaf jmp 0x12771a6f */
  goto L_12771a6f;
L_12771ab1:;
  /* 12771ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12771ab4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771ab7 push eax */
  push32((uint32_t)(EAX));
  /* 12771ab8 call 0x12764ce0 */
  push32(0x12771abdu); f_12764ce0();
  /* 12771abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771ac0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12771ac3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771ac7 je 0x12771b69 */
  if (C.zf) goto L_12771b69;
  /* 12771acd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12771ad0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12771ad3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12771ada jmp 0x12771ae5 */
  goto L_12771ae5;
L_12771adc:;
  /* 12771adc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771adf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771ae2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12771ae5:;
  /* 12771ae5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771ae9 jae 0x12771b5a */
  if (!C.cf) goto L_12771b5a;
  /* 12771aeb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771aee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12771af1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771af4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771af7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12771afa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771afd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771b00 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12771b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12771b04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771b07 push edx */
  push32((uint32_t)(EDX));
  /* 12771b08 call 0x12767cb0 */
  push32(0x12771b0du); f_12767cb0();
  /* 12771b0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771b10 push eax */
  push32((uint32_t)(EAX));
  /* 12771b11 call 0x12767b30 */
  push32(0x12771b16u); f_12767b30();
  /* 12771b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771b19 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771b1c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771b1e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12771b21 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771b24 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12771b27 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771b2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771b2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12771b30 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771b33 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771b36 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12771b3a push eax */
  push32((uint32_t)(EAX));
  /* 12771b3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771b3e push ecx */
  push32((uint32_t)(ECX));
  /* 12771b3f call 0x12767cb0 */
  push32(0x12771b44u); f_12767cb0();
  /* 12771b44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771b47 push eax */
  push32((uint32_t)(EAX));
  /* 12771b48 call 0x12767b30 */
  push32(0x12771b4du); f_12767b30();
  /* 12771b4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771b50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771b53 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771b55 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12771b58 jmp 0x12771adc */
  goto L_12771adc;
L_12771b5a:;
  /* 12771b5a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771b5d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12771b60 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771b63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771b66 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12771b69:;
  /* 12771b69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12771b6c pop esi */
  ESI = (pop32());
  /* 12771b6d mov esp, ebp */
  ESP = (EBP);
  /* 12771b6f pop ebp */
  EBP = (pop32());
  /* 12771b70 ret  */
  ESPCHK(0x12771a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b80 @ 0x12771b80 (291 bytes, 97 insns) */
void f_12771b80(void) {
  FTRACE(0x12771b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12771b81 mov ebp, esp */
  EBP = (ESP);
  /* 12771b83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771b86 push esi */
  push32((uint32_t)(ESI));
  /* 12771b87 mov eax, dword ptr [0x1278fc98] */
  EAX = (r32((uint32_t)(0x1278fc98)));
  /* 12771b8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12771b8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12771b96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12771b9d jmp 0x12771ba8 */
  goto L_12771ba8;
L_12771b9f:;
  /* 12771b9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771ba2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771ba5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12771ba8:;
  /* 12771ba8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771bac jae 0x12771be2 */
  if (!C.cf) goto L_12771be2;
  /* 12771bae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771bb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771bb4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12771bb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12771bb9 call 0x12767b30 */
  push32(0x12771bbeu); f_12767b30();
  /* 12771bbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771bc1 mov esi, eax */
  ESI = (EAX);
  /* 12771bc3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771bc6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771bc9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12771bcd push ecx */
  push32((uint32_t)(ECX));
  /* 12771bce call 0x12767b30 */
  push32(0x12771bd3u); f_12767b30();
  /* 12771bd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771bd6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771bd9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12771bdd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12771be0 jmp 0x12771b9f */
  goto L_12771b9f;
L_12771be2:;
  /* 12771be2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12771be5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771be8 push eax */
  push32((uint32_t)(EAX));
  /* 12771be9 call 0x12764ce0 */
  push32(0x12771beeu); f_12764ce0();
  /* 12771bee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771bf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12771bf4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771bf8 je 0x12771c9b */
  if (C.zf) goto L_12771c9b;
  /* 12771bfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12771c01 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12771c04 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12771c0b jmp 0x12771c16 */
  goto L_12771c16;
L_12771c0d:;
  /* 12771c0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771c10 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771c13 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12771c16:;
  /* 12771c16 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771c1a jae 0x12771c8c */
  if (!C.cf) goto L_12771c8c;
  /* 12771c1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771c1f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12771c22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771c25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771c28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12771c2b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771c2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771c31 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12771c35 push ecx */
  push32((uint32_t)(ECX));
  /* 12771c36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771c39 push edx */
  push32((uint32_t)(EDX));
  /* 12771c3a call 0x12767cb0 */
  push32(0x12771c3fu); f_12767cb0();
  /* 12771c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771c42 push eax */
  push32((uint32_t)(EAX));
  /* 12771c43 call 0x12767b30 */
  push32(0x12771c48u); f_12767b30();
  /* 12771c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771c4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771c4e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771c50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12771c53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771c56 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12771c59 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771c5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771c5f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12771c62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771c65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771c68 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12771c6c push eax */
  push32((uint32_t)(EAX));
  /* 12771c6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771c70 push ecx */
  push32((uint32_t)(ECX));
  /* 12771c71 call 0x12767cb0 */
  push32(0x12771c76u); f_12767cb0();
  /* 12771c76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771c79 push eax */
  push32((uint32_t)(EAX));
  /* 12771c7a call 0x12767b30 */
  push32(0x12771c7fu); f_12767b30();
  /* 12771c7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771c82 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771c85 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771c87 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12771c8a jmp 0x12771c0d */
  goto L_12771c0d;
L_12771c8c:;
  /* 12771c8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771c8f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12771c92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771c95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771c98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12771c9b:;
  /* 12771c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12771c9e pop esi */
  ESI = (pop32());
  /* 12771c9f mov esp, ebp */
  ESP = (EBP);
  /* 12771ca1 pop ebp */
  EBP = (pop32());
  /* 12771ca2 ret  */
  ESPCHK(0x12771b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cb0 @ 0x12771cb0 (878 bytes, 273 insns) */
void f_12771cb0(void) {
  FTRACE(0x12771cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12771cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12771cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12771cb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12771cb6 push esi */
  push32((uint32_t)(ESI));
  /* 12771cb7 mov eax, dword ptr [0x1278fc98] */
  EAX = (r32((uint32_t)(0x1278fc98)));
  /* 12771cbc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12771cbf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12771cc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12771ccd jmp 0x12771cd8 */
  goto L_12771cd8;
L_12771ccf:;
  /* 12771ccf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771cd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771cd5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12771cd8:;
  /* 12771cd8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771cdc jae 0x12771d11 */
  if (!C.cf) goto L_12771d11;
  /* 12771cde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771ce1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771ce4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12771ce7 push ecx */
  push32((uint32_t)(ECX));
  /* 12771ce8 call 0x12767b30 */
  push32(0x12771cedu); f_12767b30();
  /* 12771ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771cf0 mov esi, eax */
  ESI = (EAX);
  /* 12771cf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771cf5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771cf8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12771cfc push ecx */
  push32((uint32_t)(ECX));
  /* 12771cfd call 0x12767b30 */
  push32(0x12771d02u); f_12767b30();
  /* 12771d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771d05 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771d08 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12771d0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12771d0f jmp 0x12771ccf */
  goto L_12771ccf;
L_12771d11:;
  /* 12771d11 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12771d18 jmp 0x12771d23 */
  goto L_12771d23;
L_12771d1a:;
  /* 12771d1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771d1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771d20 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12771d23:;
  /* 12771d23 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771d27 jae 0x12771d5d */
  if (!C.cf) goto L_12771d5d;
  /* 12771d29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771d2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771d2f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12771d33 push eax */
  push32((uint32_t)(EAX));
  /* 12771d34 call 0x12767b30 */
  push32(0x12771d39u); f_12767b30();
  /* 12771d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771d3c mov esi, eax */
  ESI = (EAX);
  /* 12771d3e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771d41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771d44 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12771d48 push eax */
  push32((uint32_t)(EAX));
  /* 12771d49 call 0x12767b30 */
  push32(0x12771d4eu); f_12767b30();
  /* 12771d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771d51 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771d54 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12771d58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12771d5b jmp 0x12771d1a */
  goto L_12771d1a;
L_12771d5d:;
  /* 12771d5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771d60 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12771d66 push eax */
  push32((uint32_t)(EAX));
  /* 12771d67 call 0x12767b30 */
  push32(0x12771d6cu); f_12767b30();
  /* 12771d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771d6f mov esi, eax */
  ESI = (EAX);
  /* 12771d71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771d74 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12771d7a push edx */
  push32((uint32_t)(EDX));
  /* 12771d7b call 0x12767b30 */
  push32(0x12771d80u); f_12767b30();
  /* 12771d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771d83 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771d86 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12771d8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12771d8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771d90 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12771d96 push edx */
  push32((uint32_t)(EDX));
  /* 12771d97 call 0x12767b30 */
  push32(0x12771d9cu); f_12767b30();
  /* 12771d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771d9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12771da2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12771da6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12771da9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771dac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12771db2 push ecx */
  push32((uint32_t)(ECX));
  /* 12771db3 call 0x12767b30 */
  push32(0x12771db8u); f_12767b30();
  /* 12771db8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771dbb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12771dbe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12771dc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12771dc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771dc8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12771dce push edx */
  push32((uint32_t)(EDX));
  /* 12771dcf call 0x12767b30 */
  push32(0x12771dd4u); f_12767b30();
  /* 12771dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771dd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12771dda lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12771dde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12771de1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12771de4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771de9 push eax */
  push32((uint32_t)(EAX));
  /* 12771dea call 0x12764ce0 */
  push32(0x12771defu); f_12764ce0();
  /* 12771def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771df2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12771df5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771df9 je 0x12772016 */
  if (C.zf) goto L_12772016;
  /* 12771dff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12771e02 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12771e05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12771e08 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771e0e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12771e11 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12771e16 mov eax, dword ptr [0x1278fc98] */
  EAX = (r32((uint32_t)(0x1278fc98)));
  /* 12771e1b push eax */
  push32((uint32_t)(EAX));
  /* 12771e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12771e1f push ecx */
  push32((uint32_t)(ECX));
  /* 12771e20 call 0x1276b5e0 */
  push32(0x12771e25u); f_1276b5e0();
  /* 12771e25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771e28 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12771e2f jmp 0x12771e3a */
  goto L_12771e3a;
L_12771e31:;
  /* 12771e31 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771e34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771e37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12771e3a:;
  /* 12771e3a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771e3e jae 0x12771eae */
  if (!C.cf) goto L_12771eae;
  /* 12771e40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771e43 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12771e46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771e49 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12771e4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771e4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771e52 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12771e55 push edx */
  push32((uint32_t)(EDX));
  /* 12771e56 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771e59 push eax */
  push32((uint32_t)(EAX));
  /* 12771e5a call 0x12767cb0 */
  push32(0x12771e5fu); f_12767cb0();
  /* 12771e5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771e62 push eax */
  push32((uint32_t)(EAX));
  /* 12771e63 call 0x12767b30 */
  push32(0x12771e68u); f_12767b30();
  /* 12771e68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771e6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771e6e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12771e72 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12771e75 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771e78 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12771e7b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771e7e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12771e82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771e85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771e88 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12771e8c push edx */
  push32((uint32_t)(EDX));
  /* 12771e8d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771e90 push eax */
  push32((uint32_t)(EAX));
  /* 12771e91 call 0x12767cb0 */
  push32(0x12771e96u); f_12767cb0();
  /* 12771e96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771e99 push eax */
  push32((uint32_t)(EAX));
  /* 12771e9a call 0x12767b30 */
  push32(0x12771e9fu); f_12767b30();
  /* 12771e9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771ea2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771ea5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12771ea9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12771eac jmp 0x12771e31 */
  goto L_12771e31;
L_12771eae:;
  /* 12771eae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12771eb5 jmp 0x12771ec0 */
  goto L_12771ec0;
L_12771eb7:;
  /* 12771eb7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771eba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12771ebd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12771ec0:;
  /* 12771ec0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12771ec4 jae 0x12771f36 */
  if (!C.cf) goto L_12771f36;
  /* 12771ec6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771ec9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12771ecc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771ecf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12771ed3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771ed6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771ed9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12771edd push eax */
  push32((uint32_t)(EAX));
  /* 12771ede mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 12771ee2 call 0x12767cb0 */
  push32(0x12771ee7u); f_12767cb0();
  /* 12771ee7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771eea push eax */
  push32((uint32_t)(EAX));
  /* 12771eeb call 0x12767b30 */
  push32(0x12771ef0u); f_12767b30();
  /* 12771ef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771ef3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771ef6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12771efa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12771efd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771f00 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12771f03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771f06 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12771f0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12771f0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771f10 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12771f14 push eax */
  push32((uint32_t)(EAX));
  /* 12771f15 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771f18 push ecx */
  push32((uint32_t)(ECX));
  /* 12771f19 call 0x12767cb0 */
  push32(0x12771f1eu); f_12767cb0();
  /* 12771f1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771f21 push eax */
  push32((uint32_t)(EAX));
  /* 12771f22 call 0x12767b30 */
  push32(0x12771f27u); f_12767b30();
  /* 12771f27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771f2a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771f2d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12771f31 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12771f34 jmp 0x12771eb7 */
  goto L_12771eb7;
L_12771f36:;
  /* 12771f36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12771f39 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771f3c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12771f42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771f45 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12771f4b push ecx */
  push32((uint32_t)(ECX));
  /* 12771f4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771f4f push edx */
  push32((uint32_t)(EDX));
  /* 12771f50 call 0x12767cb0 */
  push32(0x12771f55u); f_12767cb0();
  /* 12771f55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771f58 push eax */
  push32((uint32_t)(EAX));
  /* 12771f59 call 0x12767b30 */
  push32(0x12771f5eu); f_12767b30();
  /* 12771f5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771f61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771f64 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12771f68 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12771f6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12771f6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771f71 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12771f77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771f7a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12771f80 push eax */
  push32((uint32_t)(EAX));
  /* 12771f81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771f84 push ecx */
  push32((uint32_t)(ECX));
  /* 12771f85 call 0x12767cb0 */
  push32(0x12771f8au); f_12767cb0();
  /* 12771f8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771f8d push eax */
  push32((uint32_t)(EAX));
  /* 12771f8e call 0x12767b30 */
  push32(0x12771f93u); f_12767b30();
  /* 12771f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771f96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771f99 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12771f9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12771fa0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12771fa3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771fa6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12771fac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771faf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12771fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12771fb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771fb9 push edx */
  push32((uint32_t)(EDX));
  /* 12771fba call 0x12767cb0 */
  push32(0x12771fbfu); f_12767cb0();
  /* 12771fbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771fc2 push eax */
  push32((uint32_t)(EAX));
  /* 12771fc3 call 0x12767b30 */
  push32(0x12771fc8u); f_12767b30();
  /* 12771fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771fcb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771fce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12771fd2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12771fd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12771fd8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771fdb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12771fe1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12771fe4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12771fea push eax */
  push32((uint32_t)(EAX));
  /* 12771feb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12771fee push ecx */
  push32((uint32_t)(ECX));
  /* 12771fef call 0x12767cb0 */
  push32(0x12771ff4u); f_12767cb0();
  /* 12771ff4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12771ff7 push eax */
  push32((uint32_t)(EAX));
  /* 12771ff8 call 0x12767b30 */
  push32(0x12771ffdu); f_12767b30();
  /* 12771ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772000 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12772003 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12772007 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1277200a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1277200d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12772010 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12772016:;
  /* 12772016 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12772019 pop esi */
  ESI = (pop32());
  /* 1277201a mov esp, ebp */
  ESP = (EBP);
  /* 1277201c pop ebp */
  EBP = (pop32());
  /* 1277201d ret  */
  ESPCHK(0x12771cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012020 @ 0x12772020 (31 bytes, 15 insns) */
void f_12772020(void) {
  FTRACE(0x12772020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12772020 push ebp */
  push32((uint32_t)(EBP));
  /* 12772021 mov ebp, esp */
  EBP = (ESP);
  /* 12772023 push 0 */
  push32((uint32_t)(0x0u));
  /* 12772025 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772028 push eax */
  push32((uint32_t)(EAX));
  /* 12772029 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277202c push ecx */
  push32((uint32_t)(ECX));
  /* 1277202d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772030 push edx */
  push32((uint32_t)(EDX));
  /* 12772031 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772034 push eax */
  push32((uint32_t)(EAX));
  /* 12772035 call 0x12772040 */
  push32(0x1277203au); f_12772040();
  /* 1277203a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277203d pop ebp */
  EBP = (pop32());
  /* 1277203e ret  */
  ESPCHK(0x12772020u, _esp0);
  ESP += 4; return;
}

